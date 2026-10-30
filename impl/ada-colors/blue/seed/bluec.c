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
static void r_CHECK_FIXED_LITERAL(R21 * p_E);
static R26 r_STRING_LITERAL(R21 * p_E);
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE);
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT);
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT);
static rt_int r_NAMES_OBJECT(R10 p_NAME);
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT);
static R26 r_FIELD_EXPR(R21 * p_E);
static rt_int r_IS_FIXED_LITERAL(R21 * p_A);
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
if ((!(r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B)).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("WITH PREC needs a manifest precision (3.3.4.4)", 46));
}
}
S_R26(&l_V_1103, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1101;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1102;
{ R26 rv1104 = l_V_1103;
return rv1104; }
}
}
else if ((l_K_1087 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1105; memset(&l_N_1105, 0, sizeof l_N_1105);
l_N_1105 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1105))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1105))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1106 = r_EXPR(l_N_1105, p_WANT);
return rv1106; }
}
}
{ R26 rv1107 = r_NEW_EXPR(p_E, p_WANT);
return rv1107; }
}
else if ((l_K_1087 == g_N_NAME))
{
{ R26 rv1108 = r_NAME_EXPR(p_E, p_WANT);
return rv1108; }
}
else if ((l_K_1087 == g_N_APPLY))
{
{
R12 * l_Y_1109; memset(&l_Y_1109, 0, sizeof l_Y_1109);
l_Y_1109 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1109 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1109))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1109))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1110; memset(&l_N_1110, 0, sizeof l_N_1110);
l_N_1110 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1111; memset(&l_A_1111, 0, sizeof l_A_1111);
l_A_1111 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1111))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1110))).f_A = l_A_1111;
((*(R21 *)rt_nil_check(l_N_1110))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1112 = r_EXPR(l_N_1110, p_WANT);
return rv1112; }
}
}
}
{ R26 rv1113 = r_CALL_EXPR(p_E, p_WANT);
return rv1113; }
}
}
else if ((l_K_1087 == g_N_FIELD))
{
{ R26 rv1114 = r_FIELD_EXPR(p_E);
return rv1114; }
}
else if ((l_K_1087 == g_N_DEREF))
{
{
R26 l_B_1115; memset(&l_B_1115, 0, sizeof l_B_1115);
S_R26(&l_B_1115, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1115).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1116; memset(&l_TT_1116, 0, sizeof l_TT_1116);
l_TT_1116 = r_TARGET((l_B_1115).f_T);
{ R26 rv1117 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1116), (l_B_1115).f_C), l_TT_1116, 1, r_NO_TEXT());
return rv1117; }
}
}
}
else if ((l_K_1087 == g_N_INDEX))
{
{ R26 rv1118 = r_INDEX_EXPR(p_E);
return rv1118; }
}
else if ((l_K_1087 == g_N_SUBSTR))
{
{
R26 l_B_1119; memset(&l_B_1119, 0, sizeof l_B_1119);
S_R26(&l_B_1119, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1120; memset(&l_BT_1120, 0, sizeof l_BT_1120);
l_BT_1120 = r_REAL_TYPE((l_B_1119).f_T);
R10 l_LO_1121; memset(&l_LO_1121, 0, sizeof l_LO_1121);
R10 l_HI_1122; memset(&l_HI_1122, 0, sizeof l_HI_1122);
if (((((*(R22 *)rt_nil_check((l_B_1119).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1123; memset(&l_ARGS_1123, 0, sizeof l_ARGS_1123);
l_ARGS_1123 = r_VAL_ARG(l_B_1119, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1124; memset(&l_Y_1124, 0, sizeof l_Y_1124);
l_Y_1124 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1123, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1124 == NULL)))
{
{ R26 rv1125 = r_CALL_SYM(l_Y_1124, l_ARGS_1123, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1125; }
}
if ((((*(R22 *)rt_nil_check((l_B_1119).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1120))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1120))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1121, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1122, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1120))).f_KIND == g_T_BITS))
{
{ R26 rv1126 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1119).f_C, l_LO_1121, l_HI_1122), r_BITS_TYPE(((rt_int)1LL)));
return rv1126; }
}
{
R22 * l_T_1127; memset(&l_T_1127, 0, sizeof l_T_1127);
l_T_1127 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1127))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1120))).f_BASE;
{ R26 rv1128 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1119).f_C, l_LO_1121, l_HI_1122), l_T_1127);
return rv1128; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1120))).f_KIND == g_T_BITS))
{
{ R26 rv1129 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1119).f_C, l_LO_1121, l_HI_1122), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1129; }
}
{
R22 * l_T_1130; memset(&l_T_1130, 0, sizeof l_T_1130);
l_T_1130 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1130))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1120))).f_BASE;
{ R26 rv1131 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1119).f_C, l_LO_1121, l_HI_1122), l_T_1130);
return rv1131; }
}
}
}
else if ((l_K_1087 == g_N_UNOP))
{
{ R26 rv1132 = r_UNARY(p_E);
return rv1132; }
}
else if ((l_K_1087 == g_N_BINOP))
{
{ R26 rv1133 = r_BINARY(p_E);
return rv1133; }
}
else if ((l_K_1087 == g_N_IN))
{
{ R26 rv1134 = r_IN_EXPR(p_E);
return rv1134; }
}
else if (((l_K_1087 == g_N_ANY) || (l_K_1087 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1087 == g_TS_GEN))
{
{
R21 * l_N_1135; memset(&l_N_1135, 0, sizeof l_N_1135);
l_N_1135 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1135))).f_NAME, r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1135))).f_NAME))
{
{ R26 rv1136 = r_NAME_EXPR(l_N_1135, p_WANT);
return rv1136; }
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
rt_int l_SAVED_1137; memset(&l_SAVED_1137, 0, sizeof l_SAVED_1137);
l_SAVED_1137 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1138; memset(&l_SAVED_Q_1138, 0, sizeof l_SAVED_Q_1138);
l_SAVED_Q_1138 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1139; memset(&l_V_1139, 0, sizeof l_V_1139);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1139, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1137;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1138;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1139).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1140 = (l_V_1139).f_C;
return rv1140; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1139).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1139).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1139).f_T));
}
{ R10 rv1141 = (l_V_1139).f_C;
return rv1141; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1142; memset(&l_V_1142, 0, sizeof l_V_1142);
S_R26(&l_V_1142, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1142).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1142).f_T));
}
{ R10 rv1143 = (l_V_1142).f_C;
return rv1143; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1144; memset(&l_T_1144, 0, sizeof l_T_1144);
l_T_1144 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1144))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1144))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1145 = l_T_1144;
return rv1145; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1146; memset(&l_T_1146, 0, sizeof l_T_1146);
S_R10(&l_T_1146, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1147; memset(&l_S_1147, 0, sizeof l_S_1147);
l_S_1147 = rt_str_new((l_T_1146).f_LEN);
rt_b_assign(&l_S_1147, r_STR(l_T_1146, (l_T_1146).f_LEN));
rt_int l_POINT_1148; memset(&l_POINT_1148, 0, sizeof l_POINT_1148);
l_POINT_1148 = 0;
rt_int l_DIGITS_1149; memset(&l_DIGITS_1149, 0, sizeof l_DIGITS_1149);
l_DIGITS_1149 = ((rt_int)0LL);
{ rt_int it1151_lo = ((rt_int)0LL), it1151_hi = rt_sub((l_T_1146).f_LEN, ((rt_int)1LL));
for (rt_int it1151 = it1151_lo; it1151 <= it1151_hi; it1151++) {
{
if (rt_b_eq(rt_b_slice(l_S_1147, it1151, it1151), rt_str(".", 1)))
{
l_POINT_1148 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1147, it1151, it1151), rt_str("E", 1)))
{
goto L_end1150;
}
else
{
l_DIGITS_1149 = rt_add(l_DIGITS_1149, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1151 == it1151_hi) break;
} } L_end1150: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1148)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1152 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1146), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1152; }
}
if ((!l_POINT_1148))
{
{ R26 rv1153 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1146)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1153; }
}
{
R22 * l_F_1154; memset(&l_F_1154, 0, sizeof l_F_1154);
l_F_1154 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_F_1154))).f_SCALE = l_DIGITS_1149;
if ((l_DIGITS_1149 > ((rt_int)15LL)))
{
((*(R22 *)rt_nil_check(l_F_1154))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_1149 < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1154))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_1147, rt_sub((l_T_1146).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1146).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
{ R26 rv1155 = r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_1146), l_F_1154);
return rv1155; }
}
if (rt_b_eq(rt_b_slice(l_S_1147, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
{ R26 rv1156 = r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_1146), l_F_1154);
return rv1156; }
}
{ R26 rv1157 = r_MKET(r_FMT1(rt_str("(@)", 3), l_T_1146), l_F_1154);
return rv1157; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1158; memset(&l_T_1158, 0, sizeof l_T_1158);
S_R10(&l_T_1158, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1159; memset(&l_S_1159, 0, sizeof l_S_1159);
l_S_1159 = rt_str_new((l_T_1158).f_LEN);
rt_b_assign(&l_S_1159, r_STR(l_T_1158, (l_T_1158).f_LEN));
rt_int l_SIG_1160; memset(&l_SIG_1160, 0, sizeof l_SIG_1160);
l_SIG_1160 = ((rt_int)0LL);
rt_int l_FRAC_1161; memset(&l_FRAC_1161, 0, sizeof l_FRAC_1161);
l_FRAC_1161 = ((rt_int)0LL);
rt_int l_POINT_1162; memset(&l_POINT_1162, 0, sizeof l_POINT_1162);
l_POINT_1162 = 0;
rt_int l_EXP_1163; memset(&l_EXP_1163, 0, sizeof l_EXP_1163);
l_EXP_1163 = ((rt_int)0LL);
rt_int l_I_1164; memset(&l_I_1164, 0, sizeof l_I_1164);
l_I_1164 = ((rt_int)0LL);
for (;;) {
if ((l_I_1164 >= (l_T_1158).f_LEN)) goto L_end1165;
{
if (rt_b_eq(rt_b_slice(l_S_1159, l_I_1164, l_I_1164), rt_str("E", 1)))
{
goto L_end1165;
}
if (rt_b_eq(rt_b_slice(l_S_1159, l_I_1164, l_I_1164), rt_str(".", 1)))
{
l_POINT_1162 = 1;
}
else
{
if (((l_SIG_1160 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1159, l_I_1164, l_I_1164), rt_str("0", 1)))))
{
l_SIG_1160 = rt_add(l_SIG_1160, ((rt_int)1LL));
}
if (l_POINT_1162)
{
l_FRAC_1161 = rt_add(l_FRAC_1161, ((rt_int)1LL));
}
}
l_I_1164 = rt_add(l_I_1164, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1165: ;
if ((rt_sub(l_I_1164, r_BOOL_INT(l_POINT_1162)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1164 < (l_T_1158).f_LEN))
{
{
rt_int l_NEG_1166; memset(&l_NEG_1166, 0, sizeof l_NEG_1166);
l_NEG_1166 = 0;
l_I_1164 = rt_add(l_I_1164, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1159, l_I_1164, l_I_1164), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1159, l_I_1164, l_I_1164), rt_str("+", 1))))
{
l_NEG_1166 = rt_b_eq(rt_b_slice(l_S_1159, l_I_1164, l_I_1164), rt_str("-", 1));
l_I_1164 = rt_add(l_I_1164, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1164 >= (l_T_1158).f_LEN)) goto L_end1167;
{
if ((l_EXP_1163 <= ((rt_int)1000LL)))
{
l_EXP_1163 = rt_sub(rt_add(rt_mul(l_EXP_1163, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1159, l_I_1164, l_I_1164))), ((rt_int)48LL));
}
l_I_1164 = rt_add(l_I_1164, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1167: ;
if ((l_EXP_1163 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1166)
{
l_EXP_1163 = rt_neg(l_EXP_1163);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1160 > ((rt_int)0LL)))
{
{
rt_int l_P10_1168; memset(&l_P10_1168, 0, sizeof l_P10_1168);
l_P10_1168 = rt_sub(rt_add(rt_sub(l_SIG_1160, ((rt_int)1LL)), l_EXP_1163), l_FRAC_1161);
rt_int l_BITS_1169; memset(&l_BITS_1169, 0, sizeof l_BITS_1169);
l_BITS_1169 = rt_add(rt_quot((rt_mul(l_P10_1168, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1168 < ((rt_int)0LL)))
{
l_BITS_1169 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1168), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1169 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1170; memset(&l_CS_1170, 0, sizeof l_CS_1170);
l_CS_1170 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1171; memset(&l_P_1171, 0, sizeof l_P_1171);
l_P_1171 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1172; memset(&l_S_1172, 0, sizeof l_S_1172);
S_R10(&l_S_1172, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1173; memset(&l_Y_1173, 0, sizeof l_Y_1173);
l_Y_1173 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1173 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1173))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1170 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1170)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1170 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1170)))).f_BASE;
}
}
for (;;) {
if ((l_P_1171 == NULL)) goto L_end1174;
{
if ((((*(R21 *)rt_nil_check(l_P_1171))).f_IV == g_K_STR))
{
if ((l_CS_1170 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1172, r_CAT(l_S_1172, ((*(R21 *)rt_nil_check(l_P_1171))).f_NAME), 0);
}
else
{
{
R10 l_Q_1175; memset(&l_Q_1175, 0, sizeof l_Q_1175);
S_R10(&l_Q_1175, ((*(R21 *)rt_nil_check(l_P_1171))).f_NAME, 0);
rstr l_QS_1176; memset(&l_QS_1176, 0, sizeof l_QS_1176);
l_QS_1176 = rt_str_new((l_Q_1175).f_LEN);
rt_b_assign(&l_QS_1176, r_STR(l_Q_1175, (l_Q_1175).f_LEN));
{ rt_int it1178_lo = ((rt_int)0LL), it1178_hi = rt_sub((l_Q_1175).f_LEN, ((rt_int)1LL));
for (rt_int it1178 = it1178_lo; it1178 <= it1178_hi; it1178++) {
{
{
R10 l_LIT_1179; memset(&l_LIT_1179, 0, sizeof l_LIT_1179);
R12 * l_Y_1180; memset(&l_Y_1180, 0, sizeof l_Y_1180);
if (rt_b_eq(rt_b_slice(l_QS_1176, it1178, it1178), rt_str("'", 1)))
{
S_R10(&l_LIT_1179, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1179, r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1176, it1178, it1178)), rt_str("'", 1))), 0);
}
l_Y_1180 = r_FIND_LITERAL(l_LIT_1179, l_CS_1170);
if ((l_Y_1180 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1171))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1176, it1178, it1178)));
}
S_R10(&l_S_1172, r_CATS(l_S_1172, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1180))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1178 == it1178_hi) break;
} } L_end1177: ;
}
}
}
else
{
{
R12 * l_Y_1181; memset(&l_Y_1181, 0, sizeof l_Y_1181);
l_Y_1181 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1171))).f_NAME, l_CS_1170);
if ((l_Y_1181 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1171))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1171))).f_NAME);
}
S_R10(&l_S_1172, r_CATS(l_S_1172, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1181))).f_MV)), 0);
}
}
l_P_1171 = ((*(R21 *)rt_nil_check(l_P_1171))).f_NEXT;
}
RT_B_TICK();
} L_end1174: ;
{
R22 * l_T_1182; memset(&l_T_1182, 0, sizeof l_T_1182);
l_T_1182 = r_STR_TYPE(r_NUM((l_S_1172).f_LEN), r_SOME((l_S_1172).f_LEN));
((*(R22 *)rt_nil_check(l_T_1182))).f_BASE = l_CS_1170;
{ R26 rv1183 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1172), r_NUM((l_S_1172).f_LEN)), l_T_1182);
return rv1183; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1184; memset(&l_TS_1184, 0, sizeof l_TS_1184);
l_TS_1184 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1184))).f_NAME, p_NAME, 0);
{ R22 * rv1185 = r_RESOLVE(l_TS_1184);
return rv1185; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1186; memset(&l_Y_1186, 0, sizeof l_Y_1186);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1187; memset(&l_WT_1187, 0, sizeof l_WT_1187);
l_WT_1187 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1187))).f_KIND == g_T_ENUM))
{
l_Y_1186 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1187);
if ((!(l_Y_1186 == NULL)))
{
{ R26 rv1188 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1186))).f_MV), r_ENUM_RESULT(l_Y_1186, p_WANT));
return rv1188; }
}
}
}
}
l_Y_1186 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1189; memset(&l_FOUND_1189, 0, sizeof l_FOUND_1189);
l_FOUND_1189 = NULL;
rt_int l_N_1190; memset(&l_N_1190, 0, sizeof l_N_1190);
l_N_1190 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1186 == NULL)) goto L_end1191;
{
if ((((*(R12 *)rt_nil_check(l_Y_1186))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1186))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1189 == NULL)))
{
if (((l_FOUND_1189 == NULL) || (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1189))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1189 = l_Y_1186;
}
else
{
l_N_1190 = rt_add(l_N_1190, ((rt_int)1LL));
}
}
}
l_Y_1186 = r_LOOKUP_NEXT(l_Y_1186);
}
RT_B_TICK();
} L_end1191: ;
if ((l_FOUND_1189 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1190 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1192 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1189))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1189))).f_T);
return rv1192; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1193 = p_WANT;
return rv1193; }
}
{ R22 * rv1194 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1194; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1195; memset(&l_Y_1195, 0, sizeof l_Y_1195);
l_Y_1195 = r_LOOKUP(p_NAME);
if ((l_Y_1195 == NULL))
{
{ rt_int rv1196 = 0;
return rv1196; }
}
{ rt_int rv1197 = (((((*(R12 *)rt_nil_check(l_Y_1195))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1195))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1195))).f_KIND == g_Y_ROUTINE));
return rv1197; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1198; memset(&l_Y_1198, 0, sizeof l_Y_1198);
l_Y_1198 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1198 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1198))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1198))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1199; memset(&l_WRITABLE_1199, 0, sizeof l_WRITABLE_1199);
l_WRITABLE_1199 = r_CHECK_IMPORTED(l_Y_1198, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1200 = r_MKLV(r_OBJ_ACCESS(l_Y_1198), ((*(R12 *)rt_nil_check(l_Y_1198))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1198))).f_KIND == g_Y_VAR) && l_WRITABLE_1199), r_NO_TEXT());
return rv1200; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1198))).f_KIND == g_Y_GEN))
{
{ R26 rv1201 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1198))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1198))).f_T);
return rv1201; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1198))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1202 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1202; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1198))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1198))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1203; memset(&l_N_1203, 0, sizeof l_N_1203);
l_N_1203 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1203))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1204 = r_CALL_EXPR(l_N_1203, p_WANT);
return rv1204; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1205; memset(&l_A_1205, 0, sizeof l_A_1205);
l_A_1205 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_FIXED_LITERAL(l_A_1205)))
{
{ R26 rv1206 = r_EXPR(l_A_1205, NULL);
return rv1206; }
}
if ((((*(R21 *)rt_nil_check(l_A_1205))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1205))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1205))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1207; memset(&l_B_1207, 0, sizeof l_B_1207);
S_R26(&l_B_1207, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1205))).f_A))).f_A), 0);
R10 l_I_1208; memset(&l_I_1208, 0, sizeof l_I_1208);
S_R10(&l_I_1208, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1205))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1207).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1209 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1207).f_C, l_I_1208, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1207).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1209; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1210 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1207).f_C, l_I_1208, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1207).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1210; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1205))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1205))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1205))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1205))).f_A))).f_A))).f_NAME))
{
{ R26 rv1211 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1205))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1205))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1211; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1205))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1212; memset(&l_Y_1212, 0, sizeof l_Y_1212);
l_Y_1212 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1205))).f_NAME);
if ((!(l_Y_1212 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1212))).f_KIND == g_Y_TYPE))
{
{ R26 rv1213 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1205))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1213; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1205))).f_NAME))
{
{ R26 rv1214 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1205))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1214; }
}
}
}
{
R26 l_B_1215; memset(&l_B_1215, 0, sizeof l_B_1215);
S_R26(&l_B_1215, r_EXPR(l_A_1205, NULL), 0);
R22 * l_BT_1216; memset(&l_BT_1216, 0, sizeof l_BT_1216);
l_BT_1216 = (l_B_1215).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1216))).f_KIND == g_T_REC))
{
{
R24 * l_F_1217; memset(&l_F_1217, 0, sizeof l_F_1217);
l_F_1217 = r_FIND_VFIELD(l_BT_1216, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1217 == NULL)))
{
r_CHECK_VARIANT(l_F_1217, l_BT_1216, l_A_1205, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1218 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1215).f_C, ((*(R24 *)rt_nil_check(l_F_1217))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1217))).f_T, ((l_B_1215).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1217))).f_KIND == ((rt_int)0LL))), (l_B_1215).f_C);
return rv1218; }
}
}
}
{ R26 rv1219 = r_ATTRIBUTE(l_B_1215, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1219; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1220 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1220; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1221 = 1;
return rv1221; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1222 = 1;
return rv1222; }
}
{
rstr l_S_1223; memset(&l_S_1223, 0, sizeof l_S_1223);
l_S_1223 = rt_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN);
rt_b_assign(&l_S_1223, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1225_lo = ((rt_int)0LL), it1225_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1225 = it1225_lo; it1225 <= it1225_hi; it1225++) {
{
if (rt_b_eq(rt_b_slice(l_S_1223, it1225, it1225), rt_str(".", 1)))
{
{ rt_int rv1226 = 0;
return rv1226; }
}
}
RT_B_TICK();
if (it1225 == it1225_hi) break;
} } L_end1224: ;
}
{ rt_int rv1227 = 1;
return rv1227; }
}
{ rt_int rv1228 = 0;
return rv1228; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1229 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1229; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1230; memset(&l_TAGV_1230, 0, sizeof l_TAGV_1230);
S_R23(&l_TAGV_1230, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1230).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1230).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1231; memset(&l_F_1231, 0, sizeof l_F_1231);
l_F_1231 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1232; memset(&l_A_1232, 0, sizeof l_A_1232);
l_A_1232 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1231 == NULL)) goto L_end1233;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1231))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1232 == NULL))
{
{ R23 rv1234 = r_NO_MVAL();
return rv1234; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1231))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1232))).f_ANYARG)
{
{ R23 rv1235 = r_NO_MVAL();
return rv1235; }
}
{ R23 rv1236 = ((*(R25 *)rt_nil_check(l_A_1232))).f_MLO;
return rv1236; }
}
l_A_1232 = ((*(R25 *)rt_nil_check(l_A_1232))).f_NEXT;
}
l_F_1231 = ((*(R24 *)rt_nil_check(l_F_1231))).f_NEXT;
}
RT_B_TICK();
} L_end1233: ;
{ R23 rv1237 = r_NO_MVAL();
return rv1237; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1238; memset(&l_P_1238, 0, sizeof l_P_1238);
l_P_1238 = p_L;
for (;;) {
if ((l_P_1238 == NULL)) goto L_end1239;
{
if ((((*(R21 *)rt_nil_check(l_P_1238))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1238))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1238))).f_B, p_T)).f_V)))
{
{ rt_int rv1240 = 1;
return rv1240; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1238, p_T)).f_V == p_V))
{
{ rt_int rv1241 = 1;
return rv1241; }
}
l_P_1238 = ((*(R21 *)rt_nil_check(l_P_1238))).f_NEXT;
}
RT_B_TICK();
} L_end1239: ;
{ rt_int rv1242 = 0;
return rv1242; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1243 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1243; }
}
{ R26 rv1244 = r_EXPR(p_E, NULL);
return rv1244; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1245; memset(&l_A_1245, 0, sizeof l_A_1245);
S_R26(&l_A_1245, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1246; memset(&l_I_1246, 0, sizeof l_I_1246);
S_R10(&l_I_1246, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1245).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1247 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1245).f_C, (l_A_1245).f_C, l_I_1246, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1245).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1247; }
}
}
}
{ R26 rv1248 = r_INDEX_EXPR2(p_E);
return rv1248; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1249; memset(&l_B_1249, 0, sizeof l_B_1249);
S_R26(&l_B_1249, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1250; memset(&l_T_1250, 0, sizeof l_T_1250);
l_T_1250 = r_REAL_TYPE((l_B_1249).f_T);
R21 * l_S_1251; memset(&l_S_1251, 0, sizeof l_S_1251);
l_S_1251 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1252; memset(&l_IX_1252, 0, sizeof l_IX_1252);
S_R10(&l_IX_1252, r_MK(rt_str("", 0)), 0);
rt_int l_N_1253; memset(&l_N_1253, 0, sizeof l_N_1253);
l_N_1253 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1250))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1251 == NULL)) goto L_end1254;
{
if ((l_N_1253 > ((rt_int)0LL)))
{
S_R10(&l_IX_1252, r_CATS(l_IX_1252, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1252, r_CAT(l_IX_1252, r_INT_EXPR(l_S_1251)), 0);
l_N_1253 = rt_add(l_N_1253, ((rt_int)1LL));
l_S_1251 = ((*(R21 *)rt_nil_check(l_S_1251))).f_NEXT;
}
RT_B_TICK();
} L_end1254: ;
if ((!(l_N_1253 == ((*(R22 *)rt_nil_check(l_T_1250))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1253 == ((rt_int)1LL)))
{
{ R26 rv1255 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1249).f_C, l_IX_1252, (l_B_1249).f_C, (l_B_1249).f_C), ((*(R22 *)rt_nil_check(l_T_1250))).f_ELEM, (l_B_1249).f_LVAL, r_NO_TEXT());
return rv1255; }
}
{
R10 l_X_1256; memset(&l_X_1256, 0, sizeof l_X_1256);
S_R10(&l_X_1256, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1249).f_C, r_NUM(l_N_1253), (l_B_1249).f_C, (l_B_1249).f_C), 0);
{ R26 rv1257 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1256, l_IX_1252), ((*(R22 *)rt_nil_check(l_T_1250))).f_ELEM, (l_B_1249).f_LVAL, r_NO_TEXT());
return rv1257; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1258 = r_MKN(rt_str("NEGATE_", 7));
return rv1258; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1259 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1259; }
}
{ R10 rv1260 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1260; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1261 = r_MKN(rt_str("ADD_", 4));
return rv1261; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1262 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1262; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1263 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1263; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1264 = r_MKN(rt_str("DIVIDE_", 7));
return rv1264; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1265 = r_MKN(rt_str("MODULUS_", 8));
return rv1265; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1266 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1266; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1267 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1267; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1268 = r_MKN(rt_str("EQUAL_", 6));
return rv1268; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1269 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1269; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1270 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1270; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1271 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1271; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1272 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1272; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1273 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1273; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1274 = r_MKN(rt_str("AND_", 4));
return rv1274; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1275 = r_MKN(rt_str("OR_", 3));
return rv1275; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1276 = r_MKN(rt_str("XOR_", 4));
return rv1276; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1277 = r_MKN(rt_str("IMPLIES_", 8));
return rv1277; }
}
{ R10 rv1278 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1278; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1279; memset(&l_A_1279, 0, sizeof l_A_1279);
l_A_1279 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1279)), ({ R27 rc1280; memset(&rc1280, 0, sizeof rc1280);  rc1280.f_E = NULL; S_R26(&rc1280.f_V, p_V, 0); rc1280.f_HAVE = 1; rc1280.f_MODE = g_M_IN; rc1280.f_NEXT = p_NEXT; rc1280; }), 0);
{ R27 * rv1281 = l_A_1279;
return rv1281; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1282; memset(&l_A_1282, 0, sizeof l_A_1282);
l_A_1282 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1282)), ({ R27 rc1283; memset(&rc1283, 0, sizeof rc1283);  rc1283.f_E = p_E; S_R26(&rc1283.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1283.f_HAVE = 0; rc1283.f_MODE = p_MODE; rc1283.f_NEXT = p_NEXT; rc1283; }), 0);
{ R27 * rv1284 = l_A_1282;
return rv1284; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1285; memset(&l_Y_1285, 0, sizeof l_Y_1285);
l_Y_1285 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1285 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1285 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1286 = l_Y_1285;
return rv1286; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1287; memset(&l_Y_1287, 0, sizeof l_Y_1287);
l_Y_1287 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1287 == NULL)) goto L_end1288;
{
if ((((*(R12 *)rt_nil_check(l_Y_1287))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1289 = 1;
return rv1289; }
}
l_Y_1287 = r_LOOKUP_NEXT(l_Y_1287);
}
RT_B_TICK();
} L_end1288: ;
l_Y_1287 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1287 == NULL)) goto L_end1290;
{
if ((((*(R12 *)rt_nil_check(l_Y_1287))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1291 = 1;
return rv1291; }
}
l_Y_1287 = r_LOOKUP_NEXT(l_Y_1287);
}
RT_B_TICK();
} L_end1290: ;
{ rt_int rv1292 = 0;
return rv1292; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1293; memset(&l_Q_1293, 0, sizeof l_Q_1293);
l_Q_1293 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1294; memset(&l_R_1294, 0, sizeof l_R_1294);
l_R_1294 = NULL;
if ((l_Q_1293 == NULL))
{
{ R27 * rv1295 = NULL;
return rv1295; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1293))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1294 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1293))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1293))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1293))).f_B == NULL)))
{
l_R_1294 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1293))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1294);
}
{ R27 * rv1296 = l_R_1294;
return rv1296; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1297; memset(&l_ARGS_1297, 0, sizeof l_ARGS_1297);
l_ARGS_1297 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1298; memset(&l_Y_1298, 0, sizeof l_Y_1298);
l_Y_1298 = r_USER_OPERATOR(p_NAME, l_ARGS_1297, p_LINE);
if ((l_Y_1298 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1299 = r_CALL_SYM(l_Y_1298, l_ARGS_1297, p_LINE);
return rv1299; }
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
{ R10 rv1300 = p_C;
return rv1300; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1301 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1301; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1302 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1302; }
}
{ R10 rv1303 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1303; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1304 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1304; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1305; memset(&l_RT_1305, 0, sizeof l_RT_1305);
l_RT_1305 = r_REAL_TYPE(p_T);
R22 * l_VT_1306; memset(&l_VT_1306, 0, sizeof l_VT_1306);
l_VT_1306 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1306))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_PTR)))
{
{ R10 rv1307 = (p_V).f_C;
return rv1307; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1306))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1306)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1308 = (p_V).f_C;
return rv1308; }
}
if ((!r_SAME_CLASS(l_RT_1305, l_VT_1306)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1306), (r_TYPE_NAME(l_VT_1306)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1305), (r_TYPE_NAME(l_RT_1305)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1305))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1305))).f_SCALE))
{
{ R10 rv1309 = r_RANGE_CHECK(l_RT_1305, (p_V).f_C, p_SELF);
return rv1309; }
}
{ R10 rv1310 = r_RANGE_CHECK(l_RT_1305, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1305))).f_SCALE)), p_SELF);
return rv1310; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_FLOAT) || (((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_ENUM)))
{
{ R10 rv1311 = r_RANGE_CHECK(l_RT_1305, (p_V).f_C, p_SELF);
return rv1311; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RT_1305))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1306))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1305))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1306))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1305), r_TARGET(l_VT_1306))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1305)) && (!r_HAS_ANY(l_VT_1306))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1305))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1306))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1305))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1305))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1306))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1312 = (p_V).f_C;
return rv1312; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1313; memset(&l_ARGS_1313, 0, sizeof l_ARGS_1313);
l_ARGS_1313 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1314; memset(&l_Y_1314, 0, sizeof l_Y_1314);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1315; memset(&l_SAVED_Q_1315, 0, sizeof l_SAVED_Q_1315);
l_SAVED_Q_1315 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1316; memset(&l_X_1316, 0, sizeof l_X_1316);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1316 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1315;
if ((!(l_X_1316 == NULL)))
{
{
R27 * l_P_1317; memset(&l_P_1317, 0, sizeof l_P_1317);
l_P_1317 = l_X_1316;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1317))).f_NEXT == NULL)) goto L_end1318;
{
l_P_1317 = ((*(R27 *)rt_nil_check(l_P_1317))).f_NEXT;
}
RT_B_TICK();
} L_end1318: ;
((*(R27 *)rt_nil_check(l_P_1317))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1313))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1313))).f_NEXT = l_X_1316;
}
}
}
}
{
R27 * l_LAST_1319; memset(&l_LAST_1319, 0, sizeof l_LAST_1319);
l_LAST_1319 = l_ARGS_1313;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1319))).f_NEXT == NULL)) goto L_end1320;
{
l_LAST_1319 = ((*(R27 *)rt_nil_check(l_LAST_1319))).f_NEXT;
}
RT_B_TICK();
} L_end1320: ;
((*(R27 *)rt_nil_check(l_LAST_1319))).f_MODE = g_M_OUT;
l_Y_1314 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1313, p_LINE, 0);
if ((l_Y_1314 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1319))).f_MODE = g_M_INOUT;
l_Y_1314 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1313, p_LINE, 0);
}
}
if ((l_Y_1314 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1321 = r_CATS((r_CALL_SYM(l_Y_1314, l_ARGS_1313, p_LINE)).f_C, rt_str(";", 1));
return rv1321; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1322 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1322; }
}
}
{ R10 rv1323 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1323; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1324 = 1;
return rv1324; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1325 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1325; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1326; memset(&l_F_1326, 0, sizeof l_F_1326);
l_F_1326 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1326 == NULL)) goto L_end1327;
{
if ((((*(R24 *)rt_nil_check(l_F_1326))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1326))).f_T))
{
{ rt_int rv1328 = 1;
return rv1328; }
}
}
l_F_1326 = ((*(R24 *)rt_nil_check(l_F_1326))).f_NEXT;
}
RT_B_TICK();
} L_end1327: ;
}
}
{ rt_int rv1329 = 0;
return rv1329; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1330 = 0;
return rv1330; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1331 = 0;
return rv1331; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1332 = 0;
return rv1332; }
}
{ rt_int rv1333 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1333; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1334 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1334; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1335; memset(&l_D_1335, 0, sizeof l_D_1335);
S_R10(&l_D_1335, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1336; memset(&l_S_1336, 0, sizeof l_S_1336);
S_R10(&l_S_1336, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1337; memset(&l_I_1337, 0, sizeof l_I_1337);
S_R10(&l_I_1337, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1338; memset(&l_N_1338, 0, sizeof l_N_1338);
S_R10(&l_N_1338, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1339; memset(&l_VE_1339, 0, sizeof l_VE_1339);
l_VE_1339 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1340; memset(&l_R_1340, 0, sizeof l_R_1340);
S_R10(&l_R_1340, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1335, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1340, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1340, l_S_1336, p_RV), 0);
S_R10(&l_R_1340, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1340, l_N_1338, l_D_1335, l_D_1335), 0);
S_R10(&l_R_1340, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1340, l_S_1336, l_S_1336), 0);
S_R10(&l_R_1340, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1340, l_I_1337, l_N_1338, l_D_1335), 0);
S_R10(&l_R_1340, r_FMT2(rt_str("@@->hi);", 8), l_R_1340, l_D_1335), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1340, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1340, l_I_1337, l_I_1337, l_I_1337), 0);
S_R10(&l_R_1340, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1340, l_I_1337, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1336, l_I_1337), r_NO_TEXT())), 0);
}
S_R10(&l_R_1340, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1340, l_I_1337, l_I_1337, l_I_1337), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1340, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1340, l_I_1337, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1339, r_FMT2(rt_str("@->p[@]", 7), l_D_1335, l_I_1337), r_FMT2(rt_str("@.p[@]", 6), l_S_1336, l_I_1337), p_LINE)), 0);
}
else
{
S_R10(&l_R_1340, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1340, l_I_1337, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1335, l_I_1337), r_FMT2(rt_str("@.p[@]", 6), l_S_1336, l_I_1337))), 0);
}
{ R10 rv1341 = l_R_1340;
return rv1341; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1342; memset(&l_D_1342, 0, sizeof l_D_1342);
S_R10(&l_D_1342, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1343; memset(&l_S_1343, 0, sizeof l_S_1343);
S_R10(&l_S_1343, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1344; memset(&l_F_1344, 0, sizeof l_F_1344);
l_F_1344 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1345; memset(&l_R_1345, 0, sizeof l_R_1345);
S_R10(&l_R_1345, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1342, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1345, r_FMT3(rt_str("@@ = @;", 7), l_R_1345, l_S_1343, p_RV), 0);
for (;;) {
if ((l_F_1344 == NULL)) goto L_end1346;
{
{
R10 l_DF_1347; memset(&l_DF_1347, 0, sizeof l_DF_1347);
S_R10(&l_DF_1347, r_FMT2(rt_str("@->@", 4), l_D_1342, ((*(R24 *)rt_nil_check(l_F_1344))).f_CNAME), 0);
R10 l_SF_1348; memset(&l_SF_1348, 0, sizeof l_SF_1348);
S_R10(&l_SF_1348, r_FMT2(rt_str("@.@", 3), l_S_1343, ((*(R24 *)rt_nil_check(l_F_1344))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1344))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1344))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1345, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1345, l_DF_1347, l_SF_1348), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1344))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1345, r_FMT3(rt_str("@ @ = @;", 8), l_R_1345, l_DF_1347, l_SF_1348), 0);
}
else
{
S_R10(&l_R_1345, r_FMT2(rt_str("@ @", 3), l_R_1345, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1344))).f_T, ((*(R24 *)rt_nil_check(l_F_1344))).f_T, l_DF_1347, l_SF_1348, p_LINE)), 0);
}
}
l_F_1344 = ((*(R24 *)rt_nil_check(l_F_1344))).f_NEXT;
}
RT_B_TICK();
} L_end1346: ;
{ R10 rv1349 = r_CATS(l_R_1345, rt_str(" }", 2));
return rv1349; }
}
}
{ R10 rv1350 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1350; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1351; memset(&l_ARGS_1351, 0, sizeof l_ARGS_1351);
l_ARGS_1351 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1352; memset(&l_Y_1352, 0, sizeof l_Y_1352);
l_Y_1352 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1351, p_LINE);
if ((l_Y_1352 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1353 = (r_CALL_SYM(l_Y_1352, l_ARGS_1351, p_LINE)).f_C;
return rv1353; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1354; memset(&l_X_1354, 0, sizeof l_X_1354);
S_R10(&l_X_1354, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1355; memset(&l_Z_1355, 0, sizeof l_Z_1355);
S_R10(&l_Z_1355, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1356; memset(&l_I_1356, 0, sizeof l_I_1356);
S_R10(&l_I_1356, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1357; memset(&l_N_1357, 0, sizeof l_N_1357);
S_R10(&l_N_1357, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1358; memset(&l_R_1358, 0, sizeof l_R_1358);
S_R10(&l_R_1358, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1354, p_A, l_Z_1355), 0);
S_R10(&l_R_1358, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1358, p_B, l_I_1356, l_N_1357), 0);
S_R10(&l_R_1358, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1358, l_X_1354, l_X_1354, l_Z_1355), 0);
S_R10(&l_R_1358, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1358, l_Z_1355, l_I_1356, l_N_1357), 0);
S_R10(&l_R_1358, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1358, l_X_1354, l_X_1354), 0);
S_R10(&l_R_1358, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1358, l_I_1356, l_I_1356, l_I_1356), 0);
S_R10(&l_R_1358, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1358, l_I_1356, l_I_1356, l_I_1356), 0);
S_R10(&l_R_1358, r_FMT2(rt_str("@@;", 3), l_R_1358, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1354, l_I_1356), r_FMT2(rt_str("@.p[@]", 6), l_Z_1355, l_I_1356), p_LINE)), 0);
{ R10 rv1359 = r_FMT2(rt_str("@ @r; })", 8), l_R_1358, l_I_1356);
return rv1359; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1360; memset(&l_X_1360, 0, sizeof l_X_1360);
S_R10(&l_X_1360, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1361; memset(&l_Z_1361, 0, sizeof l_Z_1361);
S_R10(&l_Z_1361, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1362; memset(&l_F_1362, 0, sizeof l_F_1362);
l_F_1362 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1363; memset(&l_R_1363, 0, sizeof l_R_1363);
S_R10(&l_R_1363, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1360, p_A, l_Z_1361), 0);
R10 l_EQ_1364; memset(&l_EQ_1364, 0, sizeof l_EQ_1364);
S_R10(&l_EQ_1364, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1363, r_FMT2(rt_str("@@;", 3), l_R_1363, p_B), 0);
for (;;) {
if ((l_F_1362 == NULL)) goto L_end1365;
{
{
R10 l_C_1366; memset(&l_C_1366, 0, sizeof l_C_1366);
S_R10(&l_C_1366, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1362))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1360, ((*(R24 *)rt_nil_check(l_F_1362))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1361, ((*(R24 *)rt_nil_check(l_F_1362))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1362))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1364, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1364, r_VARIANT_COND(l_F_1362, p_T, l_X_1360), l_C_1366), 0);
}
else
{
S_R10(&l_EQ_1364, r_FMT2(rt_str("@ && @", 6), l_EQ_1364, l_C_1366), 0);
}
}
l_F_1362 = ((*(R24 *)rt_nil_check(l_F_1362))).f_NEXT;
}
RT_B_TICK();
} L_end1365: ;
{ R10 rv1367 = r_FMT2(rt_str("@ @; })", 7), l_R_1363, l_EQ_1364);
return rv1367; }
}
}
{ R10 rv1368 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1368; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1369; memset(&l_A_1369, 0, sizeof l_A_1369);
S_R26(&l_A_1369, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1370; memset(&l_T_1370, 0, sizeof l_T_1370);
l_T_1370 = (l_A_1369).f_T;
R10 l_OP_1371; memset(&l_OP_1371, 0, sizeof l_OP_1371);
S_R10(&l_OP_1371, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1371, 1))))
{
{
R27 * l_ARGS_1372; memset(&l_ARGS_1372, 0, sizeof l_ARGS_1372);
l_ARGS_1372 = r_VAL_ARG(l_A_1369, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1373; memset(&l_Y_1373, 0, sizeof l_Y_1373);
l_Y_1373 = r_USER_OPERATOR(r_OP_NAME(l_OP_1371, 1), l_ARGS_1372, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1373 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1372))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1372))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1371, 1), l_ARGS_1372, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1371, 1));
}
}
if ((!(l_Y_1373 == NULL)))
{
{ R26 rv1374 = r_CALL_SYM(l_Y_1373, l_ARGS_1372, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1374; }
}
if ((((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1370));
}
}
}
if (r_TEQS(l_OP_1371, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_BOOL))
{
{ R26 rv1375 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1369).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1375; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_BITS))
{
{ R26 rv1376 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1369).f_C), l_T_1370);
return rv1376; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1371, rt_str("-", 1)))
{
{ R26 rv1377 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1369).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1370))).f_SCALE));
return rv1377; }
}
{ R26 rv1378 = r_MKET((l_A_1369).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1370))).f_SCALE));
return rv1378; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_1371, rt_str("-", 1)))
{
{ R26 rv1379 = r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_1369).f_C), l_T_1370);
return rv1379; }
}
{ R26 rv1380 = l_A_1369;
return rv1380; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1370));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1381 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1381; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1382; memset(&l_OP_1382, 0, sizeof l_OP_1382);
S_R10(&l_OP_1382, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1383; memset(&l_A_1383, 0, sizeof l_A_1383);
R26 l_B_1384; memset(&l_B_1384, 0, sizeof l_B_1384);
if ((r_TEQS(l_OP_1382, rt_str("&", 1)) || r_TEQS(l_OP_1382, rt_str("!", 1))))
{
{
R23 l_MA_1385; memset(&l_MA_1385, 0, sizeof l_MA_1385);
S_R23(&l_MA_1385, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1386; memset(&l_CA_1386, 0, sizeof l_CA_1386);
S_R10(&l_CA_1386, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1387; memset(&l_CB_1387, 0, sizeof l_CB_1387);
S_R10(&l_CB_1387, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1382, rt_str("&", 1)))
{
{ R26 rv1388 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1386, l_CB_1387), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1388; }
}
{ R26 rv1389 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1386, l_CB_1387), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1389; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1384, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1383, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1384).f_T), 0);
}
else
{
S_R26(&l_A_1383, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1384, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1383).f_T), 0);
}
{ R26 rv1390 = r_APPLY_OPERATOR(p_E, l_OP_1382, l_A_1383, l_B_1384);
return rv1390; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1391; memset(&l_AT_1391, 0, sizeof l_AT_1391);
l_AT_1391 = (p_A).f_T;
R22 * l_BT_1392; memset(&l_BT_1392, 0, sizeof l_BT_1392);
l_BT_1392 = (p_B).f_T;
rt_int l_LINE_1393; memset(&l_LINE_1393, 0, sizeof l_LINE_1393);
l_LINE_1393 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1394; memset(&l_NAME_1394, 0, sizeof l_NAME_1394);
S_R10(&l_NAME_1394, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1394, r_MKN(rt_str_cat(rt_str("MD_", 3), r_STR(l_NAME_1394, (l_NAME_1394).f_LEN))), 0);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1394) || (((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1395; memset(&l_ARGS_1395, 0, sizeof l_ARGS_1395);
l_ARGS_1395 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1396; memset(&l_EXTRA_1396, 0, sizeof l_EXTRA_1396);
l_EXTRA_1396 = r_QUAL_ARGS(l_LINE_1393);
R12 * l_Y_1397; memset(&l_Y_1397, 0, sizeof l_Y_1397);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1396 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1396);
}
if ((!(l_EXTRA_1396 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1395))).f_NEXT))).f_NEXT = l_EXTRA_1396;
l_Y_1397 = r_USER_OPERATOR(l_NAME_1394, l_ARGS_1395, l_LINE_1393);
if ((!(l_Y_1397 == NULL)))
{
{ R26 rv1398 = r_CALL_SYM(l_Y_1397, l_ARGS_1395, l_LINE_1393);
return rv1398; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1395))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1394, l_ARGS_1395, l_LINE_1393) == NULL)))
{
r_FAILT(l_LINE_1393, rt_str_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1394);
}
}
else
{
l_Y_1397 = r_USER_OPERATOR(l_NAME_1394, l_ARGS_1395, l_LINE_1393);
if ((!(l_Y_1397 == NULL)))
{
{ R26 rv1399 = r_CALL_SYM(l_Y_1397, l_ARGS_1395, l_LINE_1393);
return rv1399; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1400; memset(&l_Q_1400, 0, sizeof l_Q_1400);
l_Q_1400 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1395, l_LINE_1393);
if ((!(l_Q_1400 == NULL)))
{
{ R26 rv1401 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1400, l_ARGS_1395, l_LINE_1393)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1401; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1393, rt_str("no such operation for the abstract type: ", 41), l_NAME_1394);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1393, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1402 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1402; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1403 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1403; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_INT)))
{
{ R26 rv1404 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1404; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1405 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1405; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1391, l_BT_1392)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1391))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1393, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1406 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1406; }
}
r_FAILT(l_LINE_1393, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_BITS)))))
{
{
R22 * l_T_1407; memset(&l_T_1407, 0, sizeof l_T_1407);
l_T_1407 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1407))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1391))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1391))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1392))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1407))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1391))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1392))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1407))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1407))).f_MLEN).f_V), 0);
}
{ R26 rv1408 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1407);
return rv1408; }
}
}
r_FAIL(l_LINE_1393, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_BITS)))
{
{ R26 rv1409 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1391);
return rv1409; }
}
r_FAILT(l_LINE_1393, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_INT)))
{
{ R26 rv1410 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1410; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1411; memset(&l_T_1411, 0, sizeof l_T_1411);
l_T_1411 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1411))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1391))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1392))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
{ R26 rv1412 = r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_1411);
return rv1412; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
{ R26 rv1413 = r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_1411);
return rv1413; }
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1391))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1392))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1393, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1393, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1391), (r_TYPE_NAME(l_AT_1391)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1414 = r_MK(rt_str("and", 3));
return rv1414; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1415 = r_MK(rt_str("or", 2));
return rv1415; }
}
{ R10 rv1416 = r_MK(rt_str("xor", 3));
return rv1416; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1417 = p_A;
return rv1417; }
}
{ rt_int rv1418 = p_B;
return rv1418; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1419 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1419; }
}
{ R10 rv1420 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1420; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1421; memset(&l_AT_1421, 0, sizeof l_AT_1421);
l_AT_1421 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1422; memset(&l_BT_1422, 0, sizeof l_BT_1422);
l_BT_1422 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1423; memset(&l_R_1423, 0, sizeof l_R_1423);
if (((((*(R22 *)rt_nil_check(l_AT_1421))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1422))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1421))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1422))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1421))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1422))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1423, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1421))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1422))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1423, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1421, l_BT_1422)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1421))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R22 *)rt_nil_check(l_AT_1421))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1421) || r_HAS_ANY(l_BT_1422)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if (r_HAS_ABS_PART(l_AT_1421))
{
S_R10(&l_R_1423, r_COMPONENT_EQUAL(l_AT_1421, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1423, r_EQUAL_CODE(l_AT_1421, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1423, r_FMT1(rt_str("(!@)", 4), l_R_1423), 0);
}
{ R26 rv1424 = r_MKET(l_R_1423, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1424; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1425; memset(&l_S1_1425, 0, sizeof l_S1_1425);
l_S1_1425 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1426; memset(&l_S2_1426, 0, sizeof l_S2_1426);
l_S2_1426 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1427; memset(&l_S_1427, 0, sizeof l_S_1427);
l_S_1427 = r_MAX_INT(l_S1_1425, l_S2_1426);
R10 l_FN_1428; memset(&l_FN_1428, 0, sizeof l_FN_1428);
S_R10(&l_FN_1428, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1428, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1429 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1428, r_RESCALE_C((p_A).f_C, l_S1_1425, l_S_1427), r_RESCALE_C((p_B).f_C, l_S2_1426, l_S_1427)), r_INT_TYPE(l_S_1427));
return rv1429; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1430 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1425, l_S2_1426)));
return rv1430; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1431 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1425, l_S2_1426)));
return rv1431; }
}
{ R26 rv1432 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1425, l_S2_1426)));
return rv1432; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1433 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1425));
return rv1433; }
}
{ R26 rv1434 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1425));
return rv1434; }
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
rt_int l_S1_1435; memset(&l_S1_1435, 0, sizeof l_S1_1435);
l_S1_1435 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1436; memset(&l_S2_1436, 0, sizeof l_S2_1436);
l_S2_1436 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1437; memset(&l_RND_1437, 0, sizeof l_RND_1437);
S_R10(&l_RND_1437, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1438 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1438; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1437, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1439 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1439; }
}
{
R23 l_SM_1440; memset(&l_SM_1440, 0, sizeof l_SM_1440);
S_R23(&l_SM_1440, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1441; memset(&l_S_1441, 0, sizeof l_S_1441);
l_S_1441 = (l_SM_1440).f_V;
rt_int l_SR_1442; memset(&l_SR_1442, 0, sizeof l_SR_1442);
l_SR_1442 = r_MAX_INT(l_S1_1435, l_S2_1436);
if ((!(l_SM_1440).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1443 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1441, l_S1_1435), l_S2_1436)), l_RND_1437), r_INT_TYPE(l_S_1441));
return rv1443; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1444 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1441, l_S1_1435), l_S2_1436)), l_RND_1437), r_INT_TYPE(l_S_1441));
return rv1444; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1445 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1435), r_NUM(l_S_1441), l_RND_1437), r_INT_TYPE(l_S_1441));
return rv1445; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1446; memset(&l_SUB_1446, 0, sizeof l_SUB_1446);
S_R10(&l_SUB_1446, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1446, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1447 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1435), (p_B).f_C, r_NUM(l_S2_1436)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1441), l_SUB_1446, l_RND_1437)), r_INT_TYPE(l_S_1441));
return rv1447; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1448; memset(&l_V_1448, 0, sizeof l_V_1448);
S_R26(&l_V_1448, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1449; memset(&l_T_1449, 0, sizeof l_T_1449);
l_T_1449 = r_REAL_TYPE((l_V_1448).f_T);
R21 * l_R_1450; memset(&l_R_1450, 0, sizeof l_R_1450);
l_R_1450 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1451; memset(&l_TMP_1451, 0, sizeof l_TMP_1451);
S_R10(&l_TMP_1451, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1452; memset(&l_LO_1452, 0, sizeof l_LO_1452);
R26 l_HI_1453; memset(&l_HI_1453, 0, sizeof l_HI_1453);
R10 l_LOC_1454; memset(&l_LOC_1454, 0, sizeof l_LOC_1454);
R10 l_HIC_1455; memset(&l_HIC_1455, 0, sizeof l_HIC_1455);
R10 l_LO_OP_1456; memset(&l_LO_OP_1456, 0, sizeof l_LO_OP_1456);
S_R10(&l_LO_OP_1456, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1457; memset(&l_HI_OP_1457, 0, sizeof l_HI_OP_1457);
S_R10(&l_HI_OP_1457, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1452, r_EXPR(((*(R21 *)rt_nil_check(l_R_1450))).f_A, l_T_1449), 0);
S_R26(&l_HI_1453, r_EXPR(((*(R21 *)rt_nil_check(l_R_1450))).f_B, l_T_1449), 0);
if (((((*(R22 *)rt_nil_check(l_T_1449))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1449))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1449))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1449))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1449))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1452).f_T), l_T_1449)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1453).f_T), l_T_1449))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1450))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1450))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1456, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1450))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1457, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1449))).f_KIND == g_T_INT))
{
{
R26 l_X_1458; memset(&l_X_1458, 0, sizeof l_X_1458);
S_R26(&l_X_1458, r_MKET(l_TMP_1451, (l_V_1448).f_T), 0);
S_R10(&l_LOC_1454, r_FIXED_COMPARE(l_LO_1452, l_X_1458, l_LO_OP_1456), 0);
S_R10(&l_HIC_1455, r_FIXED_COMPARE(l_X_1458, l_HI_1453, l_HI_OP_1457), 0);
}
}
else
{
S_R10(&l_LOC_1454, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1452).f_C, l_LO_OP_1456, l_TMP_1451), 0);
S_R10(&l_HIC_1455, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1451, l_HI_OP_1457, (l_HI_1453).f_C), 0);
}
{ R26 rv1459 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1449), l_TMP_1451, (l_V_1448).f_C, l_LOC_1454), r_FMT1(rt_str("@; })", 5), l_HIC_1455)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1459; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1460 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1460; }
}
{ R10 rv1461 = (p_V).f_C;
return rv1461; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1462 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1462; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1463; memset(&l_B_1463, 0, sizeof l_B_1463);
l_B_1463 = ((rt_int)0LL);
rt_int l_P_1464; memset(&l_P_1464, 0, sizeof l_P_1464);
l_P_1464 = ((rt_int)1LL);
for (;;) {
if ((l_P_1464 >= p_N)) goto L_end1465;
{
l_B_1463 = rt_add(l_B_1463, ((rt_int)1LL));
l_P_1464 = rt_mul(l_P_1464, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1465: ;
{ rt_int rv1466 = l_B_1463;
return rv1466; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1467; memset(&l_M_1467, 0, sizeof l_M_1467);
S_R23(&l_M_1467, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1467).f_OK)
{
{ rt_int rv1468 = (l_M_1467).f_V;
return rv1468; }
}
}
}
}
{ rt_int rv1469 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1469; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1470 = ((rt_int)100000000LL);
return rv1470; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1471 = ((rt_int)15LL);
return rv1471; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1472 = ((rt_int)7LL);
return rv1472; }
}
{ rt_int rv1473 = ((rt_int)15LL);
return rv1473; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1474; memset(&l_SINGLE_1474, 0, sizeof l_SINGLE_1474);
l_SINGLE_1474 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1474)
{
{ rt_int rv1475 = rt_neg(((rt_int)125LL));
return rv1475; }
}
{ rt_int rv1476 = rt_neg(((rt_int)1021LL));
return rv1476; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1474)
{
{ rt_int rv1477 = ((rt_int)128LL);
return rv1477; }
}
{ rt_int rv1478 = ((rt_int)1024LL);
return rv1478; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1474)
{
{ rt_int rv1479 = ((rt_int)25LL);
return rv1479; }
}
{ rt_int rv1480 = ((rt_int)54LL);
return rv1480; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1474)
{
{ rt_int rv1481 = ((rt_int)8LL);
return rv1481; }
}
{ rt_int rv1482 = ((rt_int)11LL);
return rv1482; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1474)
{
{ rt_int rv1483 = ((rt_int)32LL);
return rv1483; }
}
{ rt_int rv1484 = ((rt_int)64LL);
return rv1484; }
}
{ rt_int rv1485 = ((rt_int)0LL);
return rv1485; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1486; memset(&l_K_1486, 0, sizeof l_K_1486);
l_K_1486 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1486 == g_T_ABS))
{
{ R23 rv1487 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1487; }
}
else if ((l_K_1486 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1488 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1488; }
}
}
{ R23 rv1489 = r_SOME(((rt_int)64LL));
return rv1489; }
}
else if ((l_K_1486 == g_T_FLOAT))
{
{ R23 rv1490 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1490; }
}
else if ((l_K_1486 == g_T_BOOL))
{
{ R23 rv1491 = r_SOME(((rt_int)1LL));
return rv1491; }
}
else if ((l_K_1486 == g_T_ENUM))
{
{ R23 rv1492 = r_SOME(r_ENUM_SIZE(p_T));
return rv1492; }
}
else if ((l_K_1486 == g_T_BITS))
{
{ R23 rv1493 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1493; }
}
else if ((l_K_1486 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1494 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1494; }
}
}
else if (((l_K_1486 == g_T_PTR) || (l_K_1486 == g_T_SEM)))
{
{ R23 rv1495 = r_SOME(((rt_int)64LL));
return rv1495; }
}
{ R23 rv1496 = r_NO_MVAL();
return rv1496; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1497; memset(&l_T_1497, 0, sizeof l_T_1497);
l_T_1497 = (p_B).f_T;
rt_int l_K_1498; memset(&l_K_1498, 0, sizeof l_K_1498);
l_K_1498 = ((*(R22 *)rt_nil_check(l_T_1497))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1499 = r_SIZE_OF(l_T_1497, (p_B).f_C);
return rv1499; }
}
if ((l_K_1498 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1500 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1497))).f_SCALE);
return rv1500; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1501 = r_INT_ET(((rt_int)2LL));
return rv1501; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1502 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1502; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1503 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1503; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1497))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1504 = r_MKET(((*(R22 *)rt_nil_check(l_T_1497))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1497))).f_SCALE));
return rv1504; }
}
{ R26 rv1505 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1497))).f_SCALE));
return rv1505; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1497))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1506 = r_MKET(((*(R22 *)rt_nil_check(l_T_1497))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1497))).f_SCALE));
return rv1506; }
}
{ R26 rv1507 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1497))).f_SCALE));
return rv1507; }
}
}
else if ((l_K_1498 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1508 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1497))).f_SCALE);
return rv1508; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1509 = r_INT_ET(((rt_int)15LL));
return rv1509; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1510 = r_INT_ET(((rt_int)2LL));
return rv1510; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ R26 rv1511 = r_INT_ET(rt_neg(((rt_int)1022LL)));
return rv1511; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ R26 rv1512 = r_INT_ET(((rt_int)1023LL));
return rv1512; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
{ R26 rv1513 = r_INT_ET(((rt_int)53LL));
return rv1513; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ R26 rv1514 = r_INT_ET(((rt_int)11LL));
return rv1514; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1497))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1515 = r_MKET(((*(R22 *)rt_nil_check(l_T_1497))).f_LO_C, l_T_1497);
return rv1515; }
}
{ R26 rv1516 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1497);
return rv1516; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1497))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1517 = r_MKET(((*(R22 *)rt_nil_check(l_T_1497))).f_HI_C, l_T_1497);
return rv1517; }
}
{ R26 rv1518 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1497);
return rv1518; }
}
}
else if ((l_K_1498 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1497))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1519 = r_MKET(((*(R22 *)rt_nil_check(l_T_1497))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1497))).f_BASE);
return rv1519; }
}
{ R26 rv1520 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1497))).f_BASE);
return rv1520; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1497))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1521 = r_MKET(((*(R22 *)rt_nil_check(l_T_1497))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1497))).f_BASE);
return rv1521; }
}
{ R26 rv1522 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1497))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1497))).f_BASE);
return rv1522; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1497))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1523 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R22 *)rt_nil_check(l_T_1497))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1497))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1523; }
}
{ R26 rv1524 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1497))).f_BASE))).f_NLITS);
return rv1524; }
}
}
else if (((l_K_1498 == g_T_STR) || (l_K_1498 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1525 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1525; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1526 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1526; }
}
}
else if ((l_K_1498 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1527 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1497))).f_DIMS);
return rv1527; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1497))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1528 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1528; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1529 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1529; }
}
}
else if ((l_K_1498 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1497))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1530 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1530; }
}
{ R26 rv1531 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1531; }
}
}
else if (((l_K_1498 == g_T_ABS) || (l_K_1498 == g_T_REC)))
{
{
R22 * l_U_1532; memset(&l_U_1532, 0, sizeof l_U_1532);
l_U_1532 = l_T_1497;
if ((l_K_1498 == g_T_ABS))
{
l_U_1532 = ((*(R22 *)rt_nil_check(l_T_1497))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1532))).f_KIND == g_T_REC))
{
{
R24 * l_F_1533; memset(&l_F_1533, 0, sizeof l_F_1533);
l_F_1533 = r_FIND_FIELD(l_U_1532, p_NAME);
if ((!(l_F_1533 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1533))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1534 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1533))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1533))).f_T);
return rv1534; }
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
R21 * l_N_1535; memset(&l_N_1535, 0, sizeof l_N_1535);
l_N_1535 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1535))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1536 = l_N_1535;
return rv1536; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1537; memset(&l_K_1537, 0, sizeof l_K_1537);
l_K_1537 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1537 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1538 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1538; }
}
}
{ R26 rv1539 = r_INT_ET(((rt_int)64LL));
return rv1539; }
}
else if ((l_K_1537 == g_T_FLOAT))
{
{ R26 rv1540 = r_INT_ET(((rt_int)64LL));
return rv1540; }
}
else if ((l_K_1537 == g_T_BOOL))
{
{ R26 rv1541 = r_INT_ET(((rt_int)1LL));
return rv1541; }
}
else if ((l_K_1537 == g_T_ENUM))
{
{ R26 rv1542 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1542; }
}
else if ((l_K_1537 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1543 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1543; }
}
{ R26 rv1544 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1544; }
}
else if ((l_K_1537 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1545 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1545; }
}
{ R26 rv1546 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1546; }
}
else if (((l_K_1537 == g_T_PTR) || (l_K_1537 == g_T_SEM)))
{
{ R26 rv1547 = r_INT_ET(((rt_int)64LL));
return rv1547; }
}
else if ((l_K_1537 == g_T_ABS))
{
{ R26 rv1548 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1548; }
}
else if ((l_K_1537 == g_T_ARR))
{
{ R26 rv1549 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1549; }
}
{ R26 rv1550 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1550; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1551 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1551; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1552; memset(&l_T_1552, 0, sizeof l_T_1552);
l_T_1552 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
R22 * l_RT_1553; memset(&l_RT_1553, 0, sizeof l_RT_1553);
l_RT_1553 = r_REAL_TYPE(l_T_1552);
if (((((*(R22 *)rt_nil_check(l_RT_1553))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1553))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1554; memset(&l_TMP_1554, 0, sizeof l_TMP_1554);
S_R10(&l_TMP_1554, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1555; memset(&l_C_1555, 0, sizeof l_C_1555);
S_R10(&l_C_1555, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(l_T_1552), l_TMP_1554, l_TMP_1554, l_TMP_1554), 0);
S_R10(&l_C_1555, r_FMT3(rt_str("@@ @; })", 8), l_C_1555, r_INIT_CODE(l_RT_1553, l_TMP_1554), l_TMP_1554), 0);
{ R26 rv1556 = r_MKET(l_C_1555, l_T_1552);
return rv1556; }
}
}
{ R26 rv1557 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1552)), l_T_1552);
return rv1557; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1558 = 0;
return rv1558; }
}
{
R12 * l_Y_1559; memset(&l_Y_1559, 0, sizeof l_Y_1559);
l_Y_1559 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1559 == NULL))
{
{ rt_int rv1560 = 0;
return rv1560; }
}
{ rt_int rv1561 = (((*(R12 *)rt_nil_check(l_Y_1559))).f_KIND == g_Y_TYPE);
return rv1561; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1562 = r_INT_ET(((rt_int)100000000LL));
return rv1562; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1563 = r_INT_ET(((rt_int)15LL));
return rv1563; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1564 = r_INT_ET(((rt_int)0LL));
return rv1564; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1565; memset(&l_T_1565, 0, sizeof l_T_1565);
l_T_1565 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1565 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1565 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1565 = r_REAL_TYPE(l_T_1565);
if ((!(((*(R22 *)rt_nil_check(l_T_1565))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1565))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1566; memset(&l_TMP_1566, 0, sizeof l_TMP_1566);
S_R10(&l_TMP_1566, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1567; memset(&l_R_1567, 0, sizeof l_R_1567);
S_R10(&l_R_1567, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1565))).f_CNAME, l_TMP_1566, l_TMP_1566, l_TMP_1566), 0);
R24 * l_F_1568; memset(&l_F_1568, 0, sizeof l_F_1568);
l_F_1568 = ((*(R22 *)rt_nil_check(l_T_1565))).f_FIELDS;
S_R10(&l_R_1567, r_FMT2(rt_str("@@", 2), l_R_1567, r_INIT_CODE(l_T_1565, l_TMP_1566)), 0);
for (;;) {
if ((l_F_1568 == NULL)) goto L_end1569;
{
if ((((*(R24 *)rt_nil_check(l_F_1568))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1568))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1568))).f_LABELS, (r_TAG_VALUE(l_T_1565, ((*(R24 *)rt_nil_check(l_F_1568))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1565, ((*(R24 *)rt_nil_check(l_F_1568))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1570; memset(&l_INIT_1570, 0, sizeof l_INIT_1570);
l_INIT_1570 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1568))).f_NAME);
if ((l_INIT_1570 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1568))).f_NAME);
}
S_R10(&l_R_1567, r_FMT2(rt_str("@ @", 3), l_R_1567, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1568))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1566, ((*(R24 *)rt_nil_check(l_F_1568))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1570))).f_A, ((*(R24 *)rt_nil_check(l_F_1568))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1570))).f_LINE, l_TMP_1566)), 0);
}
}
}
l_F_1568 = ((*(R24 *)rt_nil_check(l_F_1568))).f_NEXT;
}
RT_B_TICK();
} L_end1569: ;
{
R21 * l_P_1571; memset(&l_P_1571, 0, sizeof l_P_1571);
l_P_1571 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1571 == NULL)) goto L_end1572;
{
{
R24 * l_G_1573; memset(&l_G_1573, 0, sizeof l_G_1573);
l_G_1573 = r_FIND_VFIELD(l_T_1565, ((*(R21 *)rt_nil_check(l_P_1571))).f_NAME);
if ((l_G_1573 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1571))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1571))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1573))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1571))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1571))).f_NAME);
}
r_CHECK_VARIANT(l_G_1573, l_T_1565, NULL, ((*(R21 *)rt_nil_check(l_P_1571))).f_LINE);
}
l_P_1571 = ((*(R21 *)rt_nil_check(l_P_1571))).f_NEXT;
}
RT_B_TICK();
} L_end1572: ;
}
{ R26 rv1574 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1567, l_TMP_1566), l_T_1565);
return rv1574; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1575; memset(&l_P_1575, 0, sizeof l_P_1575);
l_P_1575 = p_L;
for (;;) {
if ((l_P_1575 == NULL)) goto L_end1576;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1575))).f_NAME, p_NAME))
{
{ R21 * rv1577 = l_P_1575;
return rv1577; }
}
l_P_1575 = ((*(R21 *)rt_nil_check(l_P_1575))).f_NEXT;
}
RT_B_TICK();
} L_end1576: ;
{ R21 * rv1578 = NULL;
return rv1578; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1579; memset(&l_DIMS_1579, 0, sizeof l_DIMS_1579);
l_DIMS_1579 = ((rt_int)0LL);
R21 * l_P_1580; memset(&l_P_1580, 0, sizeof l_P_1580);
l_P_1580 = p_E;
R22 * l_ELEM_1581; memset(&l_ELEM_1581, 0, sizeof l_ELEM_1581);
l_ELEM_1581 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1580))).f_KIND == g_N_ARRCONS))) goto L_end1582;
{
l_DIMS_1579 = rt_add(l_DIMS_1579, ((rt_int)1LL));
l_P_1580 = ((*(R21 *)rt_nil_check(l_P_1580))).f_A;
}
RT_B_TICK();
} L_end1582: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1581 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1581 == NULL))
{
l_ELEM_1581 = (r_EXPR(l_P_1580, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1581))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1581))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1581 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1583; memset(&l_A_1583, 0, sizeof l_A_1583);
l_A_1583 = r_ARRAY_OF(l_ELEM_1581, l_DIMS_1579);
R10 l_TMP_1584; memset(&l_TMP_1584, 0, sizeof l_TMP_1584);
S_R10(&l_TMP_1584, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1585; memset(&l_R_1585, 0, sizeof l_R_1585);
S_R10(&l_R_1585, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1583))).f_CNAME, l_TMP_1584, l_TMP_1584), 0);
rt_int l_K_1586; memset(&l_K_1586, 0, sizeof l_K_1586);
l_K_1586 = ((rt_int)0LL);
S_R10(&l_R_1585, r_FMT2(rt_str("@@); ", 5), l_R_1585, l_TMP_1584), 0);
l_P_1580 = p_E;
{ rt_int it1588_lo = ((rt_int)0LL), it1588_hi = rt_sub(l_DIMS_1579, ((rt_int)1LL));
for (rt_int it1588 = it1588_lo; it1588 <= it1588_hi; it1588++) {
{
S_R10(&l_R_1585, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1585, l_TMP_1584, r_NUM(it1588), l_TMP_1584), 0);
S_R10(&l_R_1585, r_FMT3(rt_str("@@] = @;", 8), l_R_1585, r_NUM(it1588), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1580))).f_A), ((rt_int)1LL)))), 0);
l_P_1580 = ((*(R21 *)rt_nil_check(l_P_1580))).f_A;
}
RT_B_TICK();
if (it1588 == it1588_hi) break;
} } L_end1587: ;
S_R10(&l_R_1585, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1585, l_TMP_1584, l_TMP_1584, r_NUM(l_DIMS_1579)), 0);
S_R10(&l_R_1585, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1585, l_TMP_1584, l_TMP_1584), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1579, l_A_1583, l_TMP_1584, &l_R_1585, &l_K_1586);
{ R26 rv1589 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1585, l_TMP_1584), l_A_1583);
return rv1589; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1590; memset(&l_P_1590, 0, sizeof l_P_1590);
l_P_1590 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1590 == NULL)) goto L_end1591;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1590, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1590))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1590))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1590, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1590))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1590 = ((*(R21 *)rt_nil_check(l_P_1590))).f_NEXT;
}
RT_B_TICK();
} L_end1591: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1592; memset(&l_T_1592, 0, sizeof l_T_1592);
l_T_1592 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1592))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1592))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1592))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1593 = l_T_1592;
return rv1593; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1594; memset(&l_T_1594, 0, sizeof l_T_1594);
l_T_1594 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1595; memset(&l_V_1595, 0, sizeof l_V_1595);
S_R26(&l_V_1595, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1594), 0);
R22 * l_RT_1596; memset(&l_RT_1596, 0, sizeof l_RT_1596);
l_RT_1596 = r_REAL_TYPE(l_T_1594);
if (((((*(R22 *)rt_nil_check((l_V_1595).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1596))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1596))).f_KIND == g_T_INT))
{
{ R26 rv1597 = r_MKET(r_RANGE_CHECK(l_RT_1596, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1595).f_C), r_NO_TEXT()), l_T_1594);
return rv1597; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1596))).f_KIND == g_T_BOOL))
{
{ R26 rv1598 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1595).f_C), l_T_1594);
return rv1598; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1596))).f_KIND == g_T_ENUM))
{
{ R26 rv1599 = r_MKET(r_ENUM_OF_BITS(l_RT_1596, (l_V_1595).f_C), l_T_1594);
return rv1599; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1596))).f_KIND == g_T_FLOAT))
{
{ R26 rv1600 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1595).f_C), l_T_1594);
return rv1600; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1596))).f_KIND == g_T_STR))
{
{ R26 rv1601 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1595).f_C), l_T_1594);
return rv1601; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1602; memset(&l_C_1602, 0, sizeof l_C_1602);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1602, r_CONVERT(l_V_1595, l_T_1594, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1596))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1596))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1596))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1596))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1595).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1602, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1602, ((*(R22 *)rt_nil_check(l_RT_1596))).f_LEN_C), 0);
}
{ R26 rv1603 = r_MKET(l_C_1602, l_T_1594);
return rv1603; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1604 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1604; }
}
}
{ R10 rv1605 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1605; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1606; memset(&l_NAME_1606, 0, sizeof l_NAME_1606);
S_R10(&l_NAME_1606, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1607; memset(&l_L_1607, 0, sizeof l_L_1607);
l_L_1607 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1608; memset(&l_R_1608, 0, sizeof l_R_1608);
S_R10(&l_R_1608, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1607 == NULL)) goto L_end1609;
{
{
R21 * l_V_1610; memset(&l_V_1610, 0, sizeof l_V_1610);
l_V_1610 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1611; memset(&l_FOUND_1611, 0, sizeof l_FOUND_1611);
l_FOUND_1611 = 0;
for (;;) {
if ((l_V_1610 == NULL)) goto L_end1612;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1610))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1607))).f_NAME))
{
S_R10(&l_R_1608, r_FMT2(rt_str("@@, ", 4), l_R_1608, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1610))).f_A, NULL)).f_C), 0);
l_FOUND_1611 = 1;
}
l_V_1610 = ((*(R21 *)rt_nil_check(l_V_1610))).f_NEXT;
}
RT_B_TICK();
} L_end1612: ;
if ((!l_FOUND_1611))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1607))).f_NAME);
}
}
l_L_1607 = ((*(R21 *)rt_nil_check(l_L_1607))).f_NEXT;
}
RT_B_TICK();
} L_end1609: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1606, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1608, l_NAME_1606, l_NAME_1606));
{ R10 rv1613 = r_FMT2(rt_str("@, @", 4), l_NAME_1606, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1613; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1614; memset(&l_SEM_1614, 0, sizeof l_SEM_1614);
l_SEM_1614 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1614 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1614)
{
{
R22 * l_T_1615; memset(&l_T_1615, 0, sizeof l_T_1615);
l_T_1615 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1615 = p_WANT;
}
}
{ R26 rv1616 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1615))).f_SCALE)), l_T_1615);
return rv1616; }
}
}
{
R22 * l_T_1617; memset(&l_T_1617, 0, sizeof l_T_1617);
l_T_1617 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1618; memset(&l_P_1618, 0, sizeof l_P_1618);
l_P_1618 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1618))).f_TARGET = l_T_1617;
((*(R22 *)rt_nil_check(l_P_1618))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1617))
{
{ R26 rv1619 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1617), r_INIT_CODE(l_T_1617, r_MK(rt_str("(*p)", 4)))), l_P_1618);
return rv1619; }
}
{ R26 rv1620 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1617), r_CTYPE(l_T_1617)), l_P_1618);
return rv1620; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1621; memset(&l_P_1621, 0, sizeof l_P_1621);
l_P_1621 = p_L;
{ rt_int it1623_lo = ((rt_int)1LL), it1623_hi = p_K;
for (rt_int it1623 = it1623_lo; it1623 <= it1623_hi; it1623++) {
{
if ((!(l_P_1621 == NULL)))
{
l_P_1621 = ((*(R21 *)rt_nil_check(l_P_1621))).f_NEXT;
}
}
RT_B_TICK();
if (it1623 == it1623_hi) break;
} } L_end1622: ;
{ R21 * rv1624 = l_P_1621;
return rv1624; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1625; memset(&l_N_1625, 0, sizeof l_N_1625);
l_N_1625 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1625 < p_LO) || (l_N_1625 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1626; memset(&l_L_1626, 0, sizeof l_L_1626);
l_L_1626 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1626 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1626))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1626))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1626))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1627 = r_MK(rt_str("1", 1));
return rv1627; }
}
{ R10 rv1628 = r_MK(rt_str("0", 1));
return rv1628; }
}
if (((((*(R21 *)rt_nil_check(l_L_1626))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1626))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1626))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1629 = r_MK(rt_str("1", 1));
return rv1629; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1626))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1630 = r_MK(rt_str("0", 1));
return rv1630; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1631 = r_MK(rt_str("1", 1));
return rv1631; }
}
{ R10 rv1632 = r_MK(rt_str("0", 1));
return rv1632; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1633 = 0;
return rv1633; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1634 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1634; }
}
{ rt_int rv1635 = 0;
return rv1635; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1636 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1636; }
}
{ R21 * rv1637 = p_E;
return rv1637; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1638; memset(&l_NAMES_1638, 0, sizeof l_NAMES_1638);
l_NAMES_1638 = rt_str_new(((rt_int)299LL));
rt_b_assign(&l_NAMES_1638, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1639; memset(&l_L_1639, 0, sizeof l_L_1639);
l_L_1639 = (p_NAME).f_LEN;
{ rt_int it1641_lo = ((rt_int)0LL), it1641_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1639), ((rt_int)2LL));
for (rt_int it1641 = it1641_lo; it1641 <= it1641_hi; it1641++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1638, it1641, it1641), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1638, rt_add(rt_add(it1641, l_L_1639), ((rt_int)1LL)), rt_add(rt_add(it1641, l_L_1639), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1638, rt_add(it1641, ((rt_int)1LL)), rt_add(it1641, l_L_1639)), r_STR(p_NAME, l_L_1639)))
{
{
rt_int l_J_1642; memset(&l_J_1642, 0, sizeof l_J_1642);
l_J_1642 = rt_add(rt_add(it1641, l_L_1639), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1638, l_J_1642, l_J_1642), rt_str(" ", 1))) goto L_end1643;
{
l_J_1642 = rt_add(l_J_1642, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1643: ;
{ R10 rv1644 = r_MKN(rt_b_slice(l_NAMES_1638, rt_add(rt_add(it1641, l_L_1639), ((rt_int)2LL)), rt_sub(l_J_1642, ((rt_int)1LL))));
return rv1644; }
}
}
}
}
RT_B_TICK();
if (it1641 == it1641_hi) break;
} } L_end1640: ;
{ R10 rv1645 = r_NO_TEXT();
return rv1645; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1646; memset(&l_NAME_1646, 0, sizeof l_NAME_1646);
S_R10(&l_NAME_1646, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1647; memset(&l_LINE_1647, 0, sizeof l_LINE_1647);
l_LINE_1647 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1648; memset(&l_N_1648, 0, sizeof l_N_1648);
l_N_1648 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1646, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1646, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1649; memset(&l_TGT_1649, 0, sizeof l_TGT_1649);
l_TGT_1649 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1650; memset(&l_S_1650, 0, sizeof l_S_1650);
l_S_1650 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1647);
R21 * l_SRC_1651; memset(&l_SRC_1651, 0, sizeof l_SRC_1651);
l_SRC_1651 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1649 == NULL) || (l_SRC_1651 == NULL)))
{
r_FAILT(l_LINE_1647, rt_str("the wrong arguments for ", 24), l_NAME_1646);
}
if (r_TEQS(l_NAME_1646, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1650))).f_A = l_TGT_1649;
}
else
{
if ((l_N_1648 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1647, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1650))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1647);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1650))).f_A))).f_A = l_TGT_1649;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1650))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1650))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1650))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1651), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1646, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1647);
{
R14 l_SAVED_CODE_1652; memset(&l_SAVED_CODE_1652, 0, sizeof l_SAVED_CODE_1652);
S_R14(&l_SAVED_CODE_1652, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1653; memset(&l_C_1653, 0, sizeof l_C_1653);
S_R10(&l_C_1653, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1654; memset(&l_P_1654, 0, sizeof l_P_1654);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1655; memset(&rc1655, 0, sizeof rc1655);  rc1655.f_HEAD = NULL; rc1655.f_TAIL = NULL; rc1655; }), 0);
r_ASSIGN_STMT(l_S_1650);
l_P_1654 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1654 == NULL)) goto L_end1656;
{
S_R10(&l_C_1653, r_FMT2(rt_str("@ @", 3), l_C_1653, ((*(R15 *)rt_nil_check(l_P_1654))).f_T), 0);
l_P_1654 = ((*(R15 *)rt_nil_check(l_P_1654))).f_NEXT;
}
RT_B_TICK();
} L_end1656: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1652, 0);
{ R26 rv1657 = r_MKET(r_CATS(l_C_1653, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1657; }
}
}
}
if (r_TEQS(l_NAME_1646, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1658; memset(&l_S_1658, 0, sizeof l_S_1658);
l_S_1658 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1647);
((*(R21 *)rt_nil_check(l_S_1658))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1658))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1658))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1658))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1659 = r_EXPR(l_S_1658, p_WANT);
return rv1659; }
}
}
{
R10 l_SYM__1660; memset(&l_SYM__1660, 0, sizeof l_SYM__1660);
S_R10(&l_SYM__1660, r_OPERATOR_SYMBOL(l_NAME_1646), 0);
rt_int l_UNARY_OP_1661; memset(&l_UNARY_OP_1661, 0, sizeof l_UNARY_OP_1661);
l_UNARY_OP_1661 = ((r_TEQS(l_NAME_1646, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1646, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1646, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1662; memset(&l_X_1662, 0, sizeof l_X_1662);
if (l_UNARY_OP_1661)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1662 = r_NEW_NODE(g_N_UNOP, l_LINE_1647);
S_R10(&((*(R21 *)rt_nil_check(l_X_1662))).f_NAME, l_SYM__1660, 0);
((*(R21 *)rt_nil_check(l_X_1662))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1663 = r_EXPR(r_QUALIFIED(l_X_1662, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1647), p_WANT);
return rv1663; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1662 = r_BIN_NODE(l_SYM__1660, l_LINE_1647, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1660, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1662))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1646, (l_NAME_1646).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1662))).f_FL = ((rt_int)2LL);
}
{ R26 rv1664 = r_EXPR(r_QUALIFIED(l_X_1662, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1647), p_WANT);
return rv1664; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1665; memset(&l_R_1665, 0, sizeof l_R_1665);
l_R_1665 = p_X;
R21 * l_P_1666; memset(&l_P_1666, 0, sizeof l_P_1666);
l_P_1666 = p_Q;
for (;;) {
if ((l_P_1666 == NULL)) goto L_end1667;
{
if ((l_R_1665 == p_X))
{
l_R_1665 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1665))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1666))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1666))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1666))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1665))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1666))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1665))).f_B = l_P_1666;
}
l_P_1666 = ((*(R21 *)rt_nil_check(l_P_1666))).f_NEXT;
}
RT_B_TICK();
} L_end1667: ;
{ R21 * rv1668 = l_R_1665;
return rv1668; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1669 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1669; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1670; memset(&l_Y_1670, 0, sizeof l_Y_1670);
l_Y_1670 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1670 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1670))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1671; memset(&l_T_1671, 0, sizeof l_T_1671);
l_T_1671 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1670))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1671))).f_KIND == g_T_ENUM))
{
{ R22 * rv1672 = l_T_1671;
return rv1672; }
}
}
}
}
{ R22 * rv1673 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1673; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1674 = 1;
return rv1674; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1675 = 1;
return rv1675; }
}
{ rt_int rv1676 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1676; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1677 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1677; }
}
{ R21 * rv1678 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1678; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1679; memset(&l_NAME_1679, 0, sizeof l_NAME_1679);
S_R10(&l_NAME_1679, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1680; memset(&l_LINE_1680, 0, sizeof l_LINE_1680);
l_LINE_1680 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((((r_OPERATOR_SYMBOL(l_NAME_1679)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1679, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1679, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1679, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1681 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1681; }
}
if ((r_TEQS(l_NAME_1679, rt_str("PUT", 3)) || r_TEQS(l_NAME_1679, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1682; memset(&l_V_1682, 0, sizeof l_V_1682);
S_R26(&l_V_1682, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1682).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1680, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1679, rt_str("PUT", 3)))
{
{ R26 rv1683 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1682).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1683; }
}
{ R26 rv1684 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1682).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1684; }
}
}
else if (r_TEQS(l_NAME_1679, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1685 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1685; }
}
else if (r_TEQS(l_NAME_1679, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1686 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1686; }
}
else if (r_TEQS(l_NAME_1679, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1687 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1687; }
}
else if (r_TEQS(l_NAME_1679, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1688 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1688; }
}
else if (r_TEQS(l_NAME_1679, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1689 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1689; }
}
else if (r_TEQS(l_NAME_1679, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1690 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1690; }
}
if (r_TEQS(l_NAME_1679, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1691 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1680);
return rv1691; }
}
else if (r_TEQS(l_NAME_1679, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1692 = r_TO_FIXED_CALL(p_E);
return rv1692; }
}
else if (r_TEQS(l_NAME_1679, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1693; memset(&l_V_1693, 0, sizeof l_V_1693);
S_R26(&l_V_1693, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1694; memset(&l_P_1694, 0, sizeof l_P_1694);
S_R23(&l_P_1694, r_MANIFEST(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R22 * l_VT_1695; memset(&l_VT_1695, 0, sizeof l_VT_1695);
l_VT_1695 = r_REAL_TYPE((l_V_1693).f_T);
R22 * l_T_1696; memset(&l_T_1696, 0, sizeof l_T_1696);
l_T_1696 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_1694).f_OK))
{
r_FAIL(l_LINE_1680, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_1694).f_V < ((rt_int)1LL)) || ((l_P_1694).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_1680, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R22 *)rt_nil_check(l_T_1696))).f_SCALE = (l_P_1694).f_V;
if ((((*(R22 *)rt_nil_check(l_VT_1695))).f_KIND == g_T_INT))
{
{ R26 rv1697 = r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_1693).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1695))).f_SCALE)), l_T_1696);
return rv1697; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1695))).f_KIND == g_T_FLOAT))
{
{ R26 rv1698 = r_MKET((l_V_1693).f_C, l_T_1696);
return rv1698; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1695))).f_KIND == g_T_STR))
{
{ R26 rv1699 = r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_1693).f_C), l_T_1696);
return rv1699; }
}
r_FAIL(l_LINE_1680, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1679, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1700 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1680);
return rv1700; }
}
else if (r_TEQS(l_NAME_1679, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1701; memset(&l_V_1701, 0, sizeof l_V_1701);
S_R26(&l_V_1701, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1701).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1702 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1701).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1701).f_T))).f_SCALE));
return rv1702; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1701).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1703 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1701).f_C), (l_V_1701).f_T);
return rv1703; }
}
r_FAIL(l_LINE_1680, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1679, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1679, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1704; memset(&l_V_1704, 0, sizeof l_V_1704);
S_R26(&l_V_1704, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1705; memset(&l_T_1705, 0, sizeof l_T_1705);
l_T_1705 = r_REAL_TYPE((l_V_1704).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1705))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1680, rt_str("an enumerated value expected by ", 32), l_NAME_1679);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1705))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1680, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1679);
}
if (r_TEQS(l_NAME_1679, rt_str("SUCC", 4)))
{
{ R26 rv1706 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1704).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1705))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1705))).f_BASE);
return rv1706; }
}
{ R26 rv1707 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1704).f_C), ((*(R22 *)rt_nil_check(l_T_1705))).f_BASE);
return rv1707; }
}
}
else if (r_TEQS(l_NAME_1679, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1708; memset(&l_V_1708, 0, sizeof l_V_1708);
S_R26(&l_V_1708, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1709; memset(&l_K_1709, 0, sizeof l_K_1709);
l_K_1709 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1708).f_T)))).f_KIND;
R22 * l_T_1710; memset(&l_T_1710, 0, sizeof l_T_1710);
l_T_1710 = r_NEW_TYP(l_K_1709);
if (((!(l_K_1709 == g_T_STR)) && (!(l_K_1709 == g_T_BITS))))
{
r_FAIL(l_LINE_1680, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1710))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1708).f_T))).f_BASE;
{ R26 rv1711 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1708).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1710);
return rv1711; }
}
}
else if (r_TEQS(l_NAME_1679, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1712 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1712; }
}
else if (r_TEQS(l_NAME_1679, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1713 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1713; }
}
else if (((r_TEQS(l_NAME_1679, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1679, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1679, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1714; memset(&l_BITS_1714, 0, sizeof l_BITS_1714);
S_R10(&l_BITS_1714, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1679, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1714, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1679, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1714, r_MK(rt_str("4", 1)), 0);
}
{ R26 rv1715 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1714), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1715; }
}
}
else if ((r_TEQS(l_NAME_1679, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1679, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1716; memset(&l_S_1716, 0, sizeof l_S_1716);
S_R23(&l_S_1716, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1717; memset(&l_R_1717, 0, sizeof l_R_1717);
S_R23(&l_R_1717, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1717).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1680, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1680);
if (r_TEQS(l_NAME_1679, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1718 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1716).f_V));
return rv1718; }
}
{ R26 rv1719 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1716).f_V));
return rv1719; }
}
}
else if (((r_TEQS(l_NAME_1679, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1679, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1679, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R22 * l_T_1720; memset(&l_T_1720, 0, sizeof l_T_1720);
l_T_1720 = r_NEW_TYP(g_T_FLOAT);
R23 l_P_1721; memset(&l_P_1721, 0, sizeof l_P_1721);
S_R23(&l_P_1721, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_1721).f_OK))
{
r_FAIL(l_LINE_1680, rt_str("the precision must be manifest", 30));
}
((*(R22 *)rt_nil_check(l_T_1720))).f_SCALE = (l_P_1721).f_V;
if (r_TEQS(l_NAME_1679, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1722 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1720);
return rv1722; }
}
else if (r_TEQS(l_NAME_1679, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1723 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1720);
return rv1723; }
}
{ R26 rv1724 = r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_1720);
return rv1724; }
}
}
else if (r_TEQS(l_NAME_1679, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1725 = r_INT_ET(((rt_int)15LL));
return rv1725; }
}
else if (r_TEQS(l_NAME_1679, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1726 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1726; }
}
else if (r_TEQS(l_NAME_1679, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1727 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1727; }
}
{ R26 rv1728 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1728; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1729; memset(&l_T_1729, 0, sizeof l_T_1729);
l_T_1729 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1730; memset(&l_K_1730, 0, sizeof l_K_1730);
l_K_1730 = ((*(R22 *)rt_nil_check(l_T_1729))).f_KIND;
R22 * l_S_1731; memset(&l_S_1731, 0, sizeof l_S_1731);
l_S_1731 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1730 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1729))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1732 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1731);
return rv1732; }
}
{ R26 rv1733 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1729))).f_SCALE)), l_S_1731);
return rv1733; }
}
else if ((l_K_1730 == g_T_FLOAT))
{
{ R26 rv1734 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1729))).f_SCALE)), l_S_1731);
return rv1734; }
}
else if ((l_K_1730 == g_T_BOOL))
{
{ R26 rv1735 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1731);
return rv1735; }
}
else if ((l_K_1730 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1729))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1736 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1731);
return rv1736; }
}
{ R26 rv1737 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1729))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1731);
return rv1737; }
}
else if (((l_K_1730 == g_T_STR) || (l_K_1730 == g_T_BITS)))
{
{ R26 rv1738 = r_MKET((p_V).f_C, l_S_1731);
return rv1738; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1729));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1739; memset(&l_V_1739, 0, sizeof l_V_1739);
S_R26(&l_V_1739, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1740; memset(&l_T_1740, 0, sizeof l_T_1740);
l_T_1740 = r_REAL_TYPE((l_V_1739).f_T);
rt_int l_N_1741; memset(&l_N_1741, 0, sizeof l_N_1741);
l_N_1741 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1742; memset(&l_RND_1742, 0, sizeof l_RND_1742);
S_R10(&l_RND_1742, r_ROUNDING_ARG(p_E, l_N_1741), 0);
rt_int l_S_1743; memset(&l_S_1743, 0, sizeof l_S_1743);
l_S_1743 = ((rt_int)0LL);
if (((l_N_1741 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1743 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1744; memset(&l_K_1744, 0, sizeof l_K_1744);
l_K_1744 = ((rt_int)2LL);
for (;;) {
if ((l_K_1744 >= l_N_1741)) goto L_end1745;
{
{
R21 * l_R_1746; memset(&l_R_1746, 0, sizeof l_R_1746);
l_R_1746 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1744));
if ((r_IS_ROUNDING(l_R_1746) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1744)))).f_KIND == g_N_QUAL) && (l_K_1744 == rt_sub(l_N_1741, ((rt_int)1LL)))))))
{
if ((!(l_K_1744 == rt_sub(l_N_1741, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1746))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1746))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1746))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1746, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1746))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1746))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1746, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1744 = rt_add(l_K_1744, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1745: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1747 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1743), l_RND_1742), r_INT_TYPE(l_S_1743));
return rv1747; }
}
if ((((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1748; memset(&l_SAVED_1748, 0, sizeof l_SAVED_1748);
l_SAVED_1748 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1749; memset(&l_C_1749, 0, sizeof l_C_1749);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1742, rt_str("1", 1));
S_R10(&l_C_1749, r_RESCALE_C((l_V_1739).f_C, ((*(R22 *)rt_nil_check(l_T_1740))).f_SCALE, l_S_1743), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1748;
{ R26 rv1750 = r_MKET(l_C_1749, r_INT_TYPE(l_S_1743));
return rv1750; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_FLOAT))
{
{ R26 rv1751 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1739).f_C, r_NUM(l_S_1743), l_RND_1742), r_INT_TYPE(l_S_1743));
return rv1751; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1740))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1740))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1740))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1752 = r_MKET(r_RESCALE_C((l_V_1739).f_C, ((rt_int)0LL), l_S_1743), r_INT_TYPE(l_S_1743));
return rv1752; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_BITS))
{
{ R26 rv1753 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1739).f_C), ((rt_int)0LL), l_S_1743), r_INT_TYPE(l_S_1743));
return rv1753; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_STR))
{
{ R26 rv1754 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1739).f_C, r_NUM(l_S_1743), l_RND_1742), r_INT_TYPE(l_S_1743));
return rv1754; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1739).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1755; memset(&l_T_1755, 0, sizeof l_T_1755);
l_T_1755 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1756; memset(&l_K_1756, 0, sizeof l_K_1756);
l_K_1756 = ((*(R22 *)rt_nil_check(l_T_1755))).f_KIND;
if ((l_K_1756 == g_T_BITS))
{
{ R26 rv1757 = p_V;
return rv1757; }
}
else if ((l_K_1756 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1755))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1755))).f_REPS))).f_B == NULL)))
{
{ R26 rv1758 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1755)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1755)));
return rv1758; }
}
}
{ R26 rv1759 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1755))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1755)));
return rv1759; }
}
else if ((l_K_1756 == g_T_STR))
{
{ R26 rv1760 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1760; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1756 == g_T_INT))
{
{ R26 rv1761 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1761; }
}
else if ((l_K_1756 == g_T_BOOL))
{
{ R26 rv1762 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1762; }
}
else if ((l_K_1756 == g_T_FLOAT))
{
{ R26 rv1763 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1763; }
}
else if ((l_K_1756 == g_T_STR))
{
{ R26 rv1764 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1764; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1755));
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
{ rt_int rv1765 = 0;
return rv1765; }
}
{ rt_int rv1766 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1766; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1767; memset(&l_N_1767, 0, sizeof l_N_1767);
l_N_1767 = ((rt_int)0LL);
R27 * l_P_1768; memset(&l_P_1768, 0, sizeof l_P_1768);
l_P_1768 = p_A;
for (;;) {
if ((l_P_1768 == NULL)) goto L_end1769;
{
l_N_1767 = rt_add(l_N_1767, ((rt_int)1LL));
l_P_1768 = ((*(R27 *)rt_nil_check(l_P_1768))).f_NEXT;
}
RT_B_TICK();
} L_end1769: ;
{ rt_int rv1770 = l_N_1767;
return rv1770; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1771; memset(&l_HEAD_1771, 0, sizeof l_HEAD_1771);
l_HEAD_1771 = NULL;
R27 * l_TAIL_1772; memset(&l_TAIL_1772, 0, sizeof l_TAIL_1772);
l_TAIL_1772 = NULL;
rt_int l_G_1773; memset(&l_G_1773, 0, sizeof l_G_1773);
l_G_1773 = ((rt_int)0LL);
{ rt_int it1775_lo = ((rt_int)0LL), it1775_hi = ((rt_int)2LL);
for (rt_int it1775 = it1775_lo; it1775 <= it1775_hi; it1775++) {
{
{
R21 * l_P_1776; memset(&l_P_1776, 0, sizeof l_P_1776);
l_P_1776 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1775 == ((rt_int)1LL)))
{
l_P_1776 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1775 == ((rt_int)2LL)))
{
l_P_1776 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1776 == NULL)) goto L_end1777;
{
{
R27 * l_A_1778; memset(&l_A_1778, 0, sizeof l_A_1778);
l_A_1778 = r_NODE_ARG(l_P_1776, it1775, NULL);
if ((l_TAIL_1772 == NULL))
{
l_HEAD_1771 = l_A_1778;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1772))).f_NEXT = l_A_1778;
}
l_TAIL_1772 = l_A_1778;
}
l_P_1776 = ((*(R21 *)rt_nil_check(l_P_1776))).f_NEXT;
}
RT_B_TICK();
} L_end1777: ;
}
}
RT_B_TICK();
if (it1775 == it1775_hi) break;
} } L_end1774: ;
{ R27 * rv1779 = l_HEAD_1771;
return rv1779; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1780; memset(&l_SAVED_1780, 0, sizeof l_SAVED_1780);
l_SAVED_1780 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1781; memset(&l_SAVED_Q_1781, 0, sizeof l_SAVED_Q_1781);
l_SAVED_Q_1781 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1782; memset(&l_V_1782, 0, sizeof l_V_1782);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1782, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1780;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1781;
{ R26 rv1783 = l_V_1782;
return rv1783; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1784; memset(&l_ARGS_1784, 0, sizeof l_ARGS_1784);
l_ARGS_1784 = r_CALL_ARGS(p_E);
R12 * l_Y_1785; memset(&l_Y_1785, 0, sizeof l_Y_1785);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1786 = r_START_IO_CALL(p_E);
return rv1786; }
}
l_Y_1785 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1785 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1785))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1787 = r_BUILTIN(p_E, p_WANT);
return rv1787; }
}
{ R26 rv1788 = r_CALL_SYM(l_Y_1785, l_ARGS_1784, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1788; }
}
l_Y_1785 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1784, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1785 == NULL))
{
{
R12 * l_P_1789; memset(&l_P_1789, 0, sizeof l_P_1789);
l_P_1789 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1789 == NULL)) goto L_end1790;
{
if ((((*(R12 *)rt_nil_check(l_P_1789))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1791 = r_BUILTIN(p_E, p_WANT);
return rv1791; }
}
l_P_1789 = r_LOOKUP_NEXT(l_P_1789);
}
RT_B_TICK();
} L_end1790: ;
}
{
R12 * l_B_1792; memset(&l_B_1792, 0, sizeof l_B_1792);
l_B_1792 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1792 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1792))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1793 = r_BUILTIN(p_E, p_WANT);
return rv1793; }
}
if (((((*(R12 *)rt_nil_check(l_B_1792))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1792))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_1794; memset(&l_BASE_1794, 0, sizeof l_BASE_1794);
S_R10(&l_BASE_1794, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_1794).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_1795; memset(&l_N_1795, 0, sizeof l_N_1795);
l_N_1795 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_1795))).f_NAME, l_BASE_1794, 0);
{ R26 rv1796 = r_BUILTIN(l_N_1795, p_WANT);
return rv1796; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1797 = r_CALL_SYM(l_Y_1785, l_ARGS_1784, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1797; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_1798; memset(&l_S_1798, 0, sizeof l_S_1798);
l_S_1798 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1798, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1800_lo = ((rt_int)1LL), it1800_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1800 = it1800_lo; it1800 <= it1800_hi; it1800++) {
{
if (rt_b_eq(rt_b_slice(l_S_1798, it1800, it1800), rt_str("$", 1)))
{
{
R10 l_P_1801; memset(&l_P_1801, 0, sizeof l_P_1801);
S_R10(&l_P_1801, r_MKN(rt_b_slice(l_S_1798, ((rt_int)0LL), rt_sub(it1800, ((rt_int)1LL)))), 0);
R10 l_B_1802; memset(&l_B_1802, 0, sizeof l_B_1802);
S_R10(&l_B_1802, r_MKN(rt_b_slice(l_S_1798, rt_add(it1800, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_1801) || r_TEQS(l_P_1801, rt_str("INTEGER", 7))) || r_TEQS(l_P_1801, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_1801, rt_str("ENUM", 4))) || r_TEQS(l_P_1801, rt_str("ARRAY", 5))) || r_TEQS(l_P_1801, rt_str("RECORD", 6))) || r_TEQS(l_P_1801, rt_str("PTR", 3))) || r_TEQS(l_P_1801, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_1803; memset(&l_Y_1803, 0, sizeof l_Y_1803);
l_Y_1803 = r_LOOKUP(l_B_1802);
for (;;) {
if ((l_Y_1803 == NULL)) goto L_end1804;
{
if ((((*(R12 *)rt_nil_check(l_Y_1803))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv1805 = l_B_1802;
return rv1805; }
}
l_Y_1803 = r_LOOKUP_NEXT(l_Y_1803);
}
RT_B_TICK();
} L_end1804: ;
}
}
}
{ R10 rv1806 = r_NO_TEXT();
return rv1806; }
}
}
RT_B_TICK();
if (it1800 == it1800_hi) break;
} } L_end1799: ;
{ R10 rv1807 = r_NO_TEXT();
return rv1807; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1808; memset(&l_B_1808, 0, sizeof l_B_1808);
l_B_1808 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1809; memset(&l_S_1809, 0, sizeof l_S_1809);
l_S_1809 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1809, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1811_lo = ((rt_int)1LL), it1811_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1811 = it1811_lo; it1811 <= it1811_hi; it1811++) {
{
if (rt_b_eq(rt_b_slice(l_S_1809, it1811, it1811), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1809, ((rt_int)0LL), rt_sub(it1811, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1812 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1809, rt_add(it1811, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1812; }
}
goto L_end1810;
}
}
RT_B_TICK();
if (it1811 == it1811_hi) break;
} } L_end1810: ;
}
for (;;) {
if ((l_B_1808 == NULL)) goto L_end1813;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1808))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1808))).f_NAME, p_NAME)))
{
{ R12 * rv1814 = ((*(R20 *)rt_nil_check(l_B_1808))).f_R;
return rv1814; }
}
l_B_1808 = ((*(R20 *)rt_nil_check(l_B_1808))).f_NEXT;
}
RT_B_TICK();
} L_end1813: ;
{ R12 * rv1815 = NULL;
return rv1815; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1816 = 0;
return rv1816; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1817 = 0;
return rv1817; }
}
}
}
{ rt_int rv1818 = 1;
return rv1818; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1819; memset(&l_Y_1819, 0, sizeof l_Y_1819);
l_Y_1819 = r_LOOKUP(p_NAME);
R12 * l_BEST_1820; memset(&l_BEST_1820, 0, sizeof l_BEST_1820);
l_BEST_1820 = NULL;
rt_int l_BEST_SCORE_1821; memset(&l_BEST_SCORE_1821, 0, sizeof l_BEST_SCORE_1821);
l_BEST_SCORE_1821 = ((rt_int)0LL);
rt_int l_TIES_1822; memset(&l_TIES_1822, 0, sizeof l_TIES_1822);
l_TIES_1822 = ((rt_int)0LL);
rt_int l_COUNT_1823; memset(&l_COUNT_1823, 0, sizeof l_COUNT_1823);
l_COUNT_1823 = ((rt_int)0LL);
rt_int l_N_1824; memset(&l_N_1824, 0, sizeof l_N_1824);
l_N_1824 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1819 == NULL)) goto L_end1825;
{
if ((!r_IS_ROUTINE(l_Y_1819)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1819))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1825;
}
}
else if (r_CANDIDATE(l_Y_1819, p_NAME))
{
{
R12 * l_R_1826; memset(&l_R_1826, 0, sizeof l_R_1826);
l_R_1826 = r_ORIGINAL(l_Y_1819);
rt_int l_SCORE_1827; memset(&l_SCORE_1827, 0, sizeof l_SCORE_1827);
r_ROUTINE_HEADER(l_R_1826);
if ((((r_PARAM_COUNT(l_R_1826) == l_N_1824) && (!r_SEEN_ROUTINE(l_R_1826, p_NAME, l_Y_1819))) && (!r_HIDDEN_ROUTINE(l_R_1826, p_NAME, l_Y_1819))))
{
l_COUNT_1823 = rt_add(l_COUNT_1823, ((rt_int)1LL));
l_SCORE_1827 = r_MATCH_SCORE(l_R_1826, p_ARGS);
if ((l_SCORE_1827 > l_BEST_SCORE_1821))
{
l_BEST_1820 = l_R_1826;
l_BEST_SCORE_1821 = l_SCORE_1827;
l_TIES_1822 = ((rt_int)0LL);
}
else if (((l_SCORE_1827 == l_BEST_SCORE_1821) && (l_SCORE_1827 > ((rt_int)0LL))))
{
l_TIES_1822 = rt_add(l_TIES_1822, ((rt_int)1LL));
}
}
}
}
l_Y_1819 = r_LOOKUP_NEXT(l_Y_1819);
}
RT_B_TICK();
} L_end1825: ;
if (((l_TIES_1822 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1828 = l_BEST_1820;
return rv1828; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1829; memset(&l_Y_1829, 0, sizeof l_Y_1829);
l_Y_1829 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1829 == p_STOP) || (l_Y_1829 == NULL))) goto L_end1830;
{
if ((((*(R12 *)rt_nil_check(l_Y_1829))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1829) == p_R))
{
{ rt_int rv1831 = 1;
return rv1831; }
}
}
l_Y_1829 = r_LOOKUP_NEXT(l_Y_1829);
}
RT_B_TICK();
} L_end1830: ;
{ rt_int rv1832 = 0;
return rv1832; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1833; memset(&l_Y_1833, 0, sizeof l_Y_1833);
l_Y_1833 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1833 == p_STOP) || (l_Y_1833 == NULL))) goto L_end1834;
{
if (((((*(R12 *)rt_nil_check(l_Y_1833))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_1833))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_1835; memset(&l_O_1835, 0, sizeof l_O_1835);
l_O_1835 = r_ORIGINAL(l_Y_1833);
if ((!(l_O_1835 == p_R)))
{
r_ROUTINE_HEADER(l_O_1835);
if (r_SAME_SIGNATURE(l_O_1835, p_R))
{
{ rt_int rv1836 = 1;
return rv1836; }
}
}
}
}
l_Y_1833 = r_LOOKUP_NEXT(l_Y_1833);
}
RT_B_TICK();
} L_end1834: ;
{ rt_int rv1837 = 0;
return rv1837; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_1838; memset(&l_P_1838, 0, sizeof l_P_1838);
l_P_1838 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_1839; memset(&l_Q_1839, 0, sizeof l_Q_1839);
l_Q_1839 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv1840 = 0;
return rv1840; }
}
for (;;) {
if (((l_P_1838 == NULL) || (l_Q_1839 == NULL))) goto L_end1841;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1838))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_1839))).f_MODE)))
{
{ rt_int rv1842 = 0;
return rv1842; }
}
if (((((*(R28 *)rt_nil_check(l_P_1838))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_1839))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_1838))).f_T == ((*(R28 *)rt_nil_check(l_Q_1839))).f_T)))
{
{ rt_int rv1843 = 0;
return rv1843; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1838))).f_T, ((*(R28 *)rt_nil_check(l_Q_1839))).f_T)))
{
{ rt_int rv1844 = 0;
return rv1844; }
}
l_P_1838 = ((*(R28 *)rt_nil_check(l_P_1838))).f_NEXT;
l_Q_1839 = ((*(R28 *)rt_nil_check(l_Q_1839))).f_NEXT;
}
RT_B_TICK();
} L_end1841: ;
{ rt_int rv1845 = ((l_P_1838 == NULL) && (l_Q_1839 == NULL));
return rv1845; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_1846; memset(&l_N_1846, 0, sizeof l_N_1846);
l_N_1846 = ((rt_int)0LL);
R28 * l_P_1847; memset(&l_P_1847, 0, sizeof l_P_1847);
l_P_1847 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1847 == NULL)) goto L_end1848;
{
l_N_1846 = rt_add(l_N_1846, ((rt_int)1LL));
l_P_1847 = ((*(R28 *)rt_nil_check(l_P_1847))).f_NEXT;
}
RT_B_TICK();
} L_end1848: ;
{ rt_int rv1849 = l_N_1846;
return rv1849; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_1850; memset(&l_P_1850, 0, sizeof l_P_1850);
l_P_1850 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1851; memset(&l_A_1851, 0, sizeof l_A_1851);
l_A_1851 = p_ARGS;
rt_int l_EXACT_1852; memset(&l_EXACT_1852, 0, sizeof l_EXACT_1852);
l_EXACT_1852 = 1;
R20 * l_BS_1853; memset(&l_BS_1853, 0, sizeof l_BS_1853);
l_BS_1853 = r_NEW_BINDS();
R22 * l_PT_1854; memset(&l_PT_1854, 0, sizeof l_PT_1854);
for (;;) {
if ((l_P_1850 == NULL)) goto L_end1855;
{
l_PT_1854 = r_FORMAL_VIEW(p_R, l_P_1850);
if ((!(((*(R28 *)rt_nil_check(l_P_1850))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1851))).f_MODE)))
{
{ rt_int rv1856 = ((rt_int)0LL);
return rv1856; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1850))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1850, l_A_1851, l_BS_1853)))
{
{ rt_int rv1857 = ((rt_int)0LL);
return rv1857; }
}
}
else if ((l_PT_1854 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1851))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_1851))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv1858 = ((rt_int)0LL);
return rv1858; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_1851))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1851))).f_E, l_PT_1854)))
{
{ rt_int rv1859 = ((rt_int)0LL);
return rv1859; }
}
}
else
{
r_TYPE_ARG(l_A_1851);
{
R22 * l_AT_1860; memset(&l_AT_1860, 0, sizeof l_AT_1860);
l_AT_1860 = (((*(R27 *)rt_nil_check(l_A_1851))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_1854, l_AT_1860) || (((((*(R22 *)rt_nil_check(l_AT_1860))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1854)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1861 = ((rt_int)0LL);
return rv1861; }
}
if ((!r_SAME_TYPE(l_PT_1854, l_AT_1860)))
{
if ((((*(R28 *)rt_nil_check(l_P_1850))).f_MODE == g_M_INOUT))
{
{ rt_int rv1862 = ((rt_int)0LL);
return rv1862; }
}
l_EXACT_1852 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1860)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1854)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_1850))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_1860))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_1854))).f_SCALE)))
{
{ rt_int rv1863 = ((rt_int)0LL);
return rv1863; }
}
else if (((((*(R28 *)rt_nil_check(l_P_1850))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_1854))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_1860))).f_SCALE)))
{
{ rt_int rv1864 = ((rt_int)0LL);
return rv1864; }
}
}
}
}
l_P_1850 = ((*(R28 *)rt_nil_check(l_P_1850))).f_NEXT;
l_A_1851 = ((*(R27 *)rt_nil_check(l_A_1851))).f_NEXT;
}
RT_B_TICK();
} L_end1855: ;
if (l_EXACT_1852)
{
{ rt_int rv1865 = ((rt_int)2LL);
return rv1865; }
}
{ rt_int rv1866 = ((rt_int)1LL);
return rv1866; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1867; memset(&l_RT_1867, 0, sizeof l_RT_1867);
l_RT_1867 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1867))).f_KIND == g_T_ENUM))
{
{ rt_int rv1868 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1867) == NULL));
return rv1868; }
}
{ rt_int rv1869 = 0;
return rv1869; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1870 = (((*(R22 *)rt_nil_check(l_RT_1867))).f_KIND == g_T_PTR);
return rv1870; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1871 = (((*(R22 *)rt_nil_check(l_RT_1867))).f_KIND == g_T_REC);
return rv1871; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1872 = (((*(R22 *)rt_nil_check(l_RT_1867))).f_KIND == g_T_ARR);
return rv1872; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1873 = (((*(R22 *)rt_nil_check(l_RT_1867))).f_KIND == g_T_INT);
return rv1873; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1874 = ((((*(R22 *)rt_nil_check(l_RT_1867))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1867))).f_KIND == g_T_SEM));
return rv1874; }
}
{ rt_int rv1875 = 0;
return rv1875; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1876; memset(&l_Y_1876, 0, sizeof l_Y_1876);
l_Y_1876 = r_ORIGINAL(p_Y0);
R28 * l_P_1877; memset(&l_P_1877, 0, sizeof l_P_1877);
R27 * l_A_1878; memset(&l_A_1878, 0, sizeof l_A_1878);
l_A_1878 = p_ARGS;
R10 l_C_1879; memset(&l_C_1879, 0, sizeof l_C_1879);
S_R10(&l_C_1879, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1880; memset(&l_SEP_1880, 0, sizeof l_SEP_1880);
S_R10(&l_SEP_1880, r_MK(rt_str("", 0)), 0);
R10 l_PRE_1881; memset(&l_PRE_1881, 0, sizeof l_PRE_1881);
S_R10(&l_PRE_1881, r_MK(rt_str("", 0)), 0);
R10 l_POST_1882; memset(&l_POST_1882, 0, sizeof l_POST_1882);
S_R10(&l_POST_1882, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_1883; memset(&l_SHARED_1883, 0, sizeof l_SHARED_1883);
l_SHARED_1883 = 0;
R22 * l_PT_1884; memset(&l_PT_1884, 0, sizeof l_PT_1884);
if (((*(R12 *)rt_nil_check(l_Y_1876))).f_GENERIC)
{
l_Y_1876 = r_INSTANCE(l_Y_1876, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1876, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1876))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1879, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1876))).f_LEVEL), 0);
S_R10(&l_SEP_1880, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_1885; memset(&l_Q_1885, 0, sizeof l_Q_1885);
l_Q_1885 = p_ARGS;
for (;;) {
if ((l_Q_1885 == NULL)) goto L_end1886;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_1885))).f_MODE == g_M_IN)))
{
l_SHARED_1883 = 1;
}
l_Q_1885 = ((*(R27 *)rt_nil_check(l_Q_1885))).f_NEXT;
}
RT_B_TICK();
} L_end1886: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_1876))).f_USES == NULL)))
{
l_SHARED_1883 = 1;
}
}
l_P_1877 = ((*(R12 *)rt_nil_check(l_Y_1876))).f_PARAMS;
for (;;) {
if ((l_P_1877 == NULL)) goto L_end1887;
{
if ((l_A_1878 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_1884 = r_FORMAL_VIEW(l_Y_1876, l_P_1877);
if ((l_PT_1884 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1877))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1884)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1888; memset(&l_V_1888, 0, sizeof l_V_1888);
R10 l_CV_1889; memset(&l_CV_1889, 0, sizeof l_CV_1889);
if ((((*(R27 *)rt_nil_check(l_A_1878))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1878))))
{
S_R26(&l_V_1888, ((*(R27 *)rt_nil_check(l_A_1878))).f_V, 0);
}
else
{
S_R26(&l_V_1888, r_EXPR(((*(R27 *)rt_nil_check(l_A_1878))).f_E, l_PT_1884), 0);
}
S_R10(&l_CV_1889, r_CONVERT(l_V_1888, l_PT_1884, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_1883 && (l_V_1888).f_LVAL) && r_IS_STRUCTURED(l_PT_1884)))
{
S_R10(&l_CV_1889, r_COPY_OF(l_PT_1884, l_CV_1889), 0);
}
S_R10(&l_C_1879, r_FMT3(rt_str("@@@", 3), l_C_1879, l_SEP_1880, l_CV_1889), 0);
S_R10(&l_SEP_1880, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1890; memset(&l_V_1890, 0, sizeof l_V_1890);
if (((*(R27 *)rt_nil_check(l_A_1878))).f_HAVE)
{
S_R26(&l_V_1890, ((*(R27 *)rt_nil_check(l_A_1878))).f_V, 0);
}
else
{
S_R26(&l_V_1890, r_EXPR(((*(R27 *)rt_nil_check(l_A_1878))).f_E, l_PT_1884), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1878))).f_E == NULL)) && (!(l_V_1890).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1878))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1878))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1890, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1890).f_C), (l_V_1890).f_T), 0);
(l_V_1890).f_LVAL = 1;
}
}
if ((!(l_V_1890).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_1884, (l_V_1890).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_1884));
}
if (((((*(R28 *)rt_nil_check(l_P_1877))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_1884, (l_V_1890).f_T) && r_SAME_RANGE(l_PT_1884, (l_V_1890).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_1877))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_1884, (l_V_1890).f_T) && r_SAME_RANGE(l_PT_1884, (l_V_1890).f_T))))))
{
{
R10 l_TMP_1891; memset(&l_TMP_1891, 0, sizeof l_TMP_1891);
S_R10(&l_TMP_1891, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_1892; memset(&l_AP_1892, 0, sizeof l_AP_1892);
S_R10(&l_AP_1892, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_1881, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_1881, r_CTYPE((l_V_1890).f_T), l_AP_1892, (l_V_1890).f_C), 0);
S_R10(&l_PRE_1881, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_1881, r_CTYPE(l_PT_1884), l_TMP_1891, r_COPY_OF((l_V_1890).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1892))), 0);
S_R10(&l_POST_1882, r_FMT2(rt_str("@ @", 3), l_POST_1882, r_STORE_CODE((l_V_1890).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1892), r_MKET(l_TMP_1891, l_PT_1884), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_1879, r_FMT3(rt_str("@@&@", 4), l_C_1879, l_SEP_1880, l_TMP_1891), 0);
}
}
else
{
S_R10(&l_C_1879, r_FMT3(rt_str("@@&@", 4), l_C_1879, l_SEP_1880, (l_V_1890).f_C), 0);
}
S_R10(&l_SEP_1880, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1878 = ((*(R27 *)rt_nil_check(l_A_1878))).f_NEXT;
l_P_1877 = ((*(R28 *)rt_nil_check(l_P_1877))).f_NEXT;
}
RT_B_TICK();
} L_end1887: ;
if ((!(l_A_1878 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_1881).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1893 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_1881, ((*(R12 *)rt_nil_check(l_Y_1876))).f_ACCESS, l_C_1879, l_POST_1882), r_RESULT_VIEW(l_Y_1876));
return rv1893; }
}
{ R26 rv1894 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1876))).f_ACCESS, l_C_1879), r_RESULT_VIEW(l_Y_1876));
return rv1894; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv1895 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv1895; }
}
{ R22 * rv1896 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv1896; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv1897 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1897; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv1898 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1898; }
}
{ R22 * rv1899 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv1899; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv1900 = p_T;
return rv1900; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv1901 = p_T;
return rv1901; }
}
{
R12 * l_M_1902; memset(&l_M_1902, 0, sizeof l_M_1902);
l_M_1902 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_1902 == NULL)) goto L_end1903;
{
{
R12 * l_Y_1904; memset(&l_Y_1904, 0, sizeof l_Y_1904);
l_Y_1904 = r_MEMBER_TYPE(l_M_1902, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_1904 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_1904))).f_EXPORTED)
{
{ R22 * rv1905 = r_ABSTRACT_VIEW(l_Y_1904, p_T);
return rv1905; }
}
{ R22 * rv1906 = p_T;
return rv1906; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_1902))).f_MODL))
{
goto L_end1903;
}
l_M_1902 = ((*(R12 *)rt_nil_check(l_M_1902))).f_MODL;
}
RT_B_TICK();
} L_end1903: ;
}
{ R22 * rv1907 = p_T;
return rv1907; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1908; memset(&l_Y_1908, 0, sizeof l_Y_1908);
l_Y_1908 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_1909; memset(&l_Z_1909, 0, sizeof l_Z_1909);
l_Z_1909 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_1909 == NULL)) goto L_end1910;
{
if ((((((*(R12 *)rt_nil_check(l_Z_1909))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_1909))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_1909))).f_ORIG == NULL)))
{
{ R12 * rv1911 = l_Z_1909;
return rv1911; }
}
l_Z_1909 = r_LOOKUP_NEXT(l_Z_1909);
}
RT_B_TICK();
} L_end1910: ;
}
{ R12 * rv1912 = NULL;
return rv1912; }
}
for (;;) {
if ((l_Y_1908 == NULL)) goto L_end1913;
{
if (((((*(R12 *)rt_nil_check(l_Y_1908))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_1908))).f_NAME, p_NAME)))
{
{ R12 * rv1914 = l_Y_1908;
return rv1914; }
}
l_Y_1908 = ((*(R12 *)rt_nil_check(l_Y_1908))).f_SNEXT;
}
RT_B_TICK();
} L_end1913: ;
{ R12 * rv1915 = NULL;
return rv1915; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1916; memset(&l_K_1916, 0, sizeof l_K_1916);
l_K_1916 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv1917 = ((((l_K_1916 == g_T_STR) || (l_K_1916 == g_T_BITS)) || (l_K_1916 == g_T_ARR)) || (l_K_1916 == g_T_REC));
return rv1917; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1918; memset(&l_RA_1918, 0, sizeof l_RA_1918);
l_RA_1918 = r_REAL_TYPE(p_A);
R22 * l_RB_1919; memset(&l_RB_1919, 0, sizeof l_RB_1919);
l_RB_1919 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_1918)))
{
{ rt_int rv1920 = 1;
return rv1920; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1918))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1918))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1919))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1919))).f_HI_C)))
{
{ rt_int rv1921 = 1;
return rv1921; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_1918))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_1919))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv1922 = ((((*(R22 *)rt_nil_check(l_RA_1918))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_1919))).f_LO_C).f_LEN);
return rv1922; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_1918))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_1919))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_1918))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_1919))).f_MHI).f_OK))
{
{ rt_int rv1923 = (((((*(R22 *)rt_nil_check(l_RA_1918))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_1919))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_1918))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_1919))).f_MHI).f_V));
return rv1923; }
}
{ rt_int rv1924 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_1918))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_1919))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_1918))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_1919))).f_HI_C));
return rv1924; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv1925 = 0;
return rv1925; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1926 = 1;
return rv1926; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1927 = 1;
return rv1927; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1928 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1928; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1929 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1929; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1930 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1930; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1931 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1931; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1932 = 0;
return rv1932; }
}
{
R12 * l_Y_1933; memset(&l_Y_1933, 0, sizeof l_Y_1933);
l_Y_1933 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1934; memset(&l_A_1934, 0, sizeof l_A_1934);
l_A_1934 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1935; memset(&l_F_1935, 0, sizeof l_F_1935);
if ((l_Y_1933 == NULL))
{
{ rt_int rv1936 = 0;
return rv1936; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1933))).f_KIND == g_Y_GEN))
{
{ rt_int rv1937 = 1;
return rv1937; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1933))).f_DECL == NULL))
{
{ rt_int rv1938 = 0;
return rv1938; }
}
l_F_1935 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1933))).f_DECL))).f_A;
for (;;) {
if ((l_F_1935 == NULL)) goto L_end1939;
{
{
R21 * l_N_1940; memset(&l_N_1940, 0, sizeof l_N_1940);
l_N_1940 = ((*(R21 *)rt_nil_check(l_F_1935))).f_A;
for (;;) {
if ((l_N_1940 == NULL)) goto L_end1941;
{
if ((l_A_1934 == NULL))
{
{ rt_int rv1942 = 0;
return rv1942; }
}
if (((((*(R21 *)rt_nil_check(l_F_1935))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_1934))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_1934))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1934)))))
{
{ rt_int rv1943 = 1;
return rv1943; }
}
l_A_1934 = ((*(R21 *)rt_nil_check(l_A_1934))).f_NEXT;
l_N_1940 = ((*(R21 *)rt_nil_check(l_N_1940))).f_NEXT;
}
RT_B_TICK();
} L_end1941: ;
}
l_F_1935 = ((*(R21 *)rt_nil_check(l_F_1935))).f_NEXT;
}
RT_B_TICK();
} L_end1939: ;
}
}
{ rt_int rv1944 = 0;
return rv1944; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_1945; memset(&l_P_1945, 0, sizeof l_P_1945);
l_P_1945 = p_A;
for (;;) {
if ((l_P_1945 == NULL)) goto L_end1946;
{
if (((((*(R21 *)rt_nil_check(l_P_1945))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_1945))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1947 = 1;
return rv1947; }
}
l_P_1945 = ((*(R21 *)rt_nil_check(l_P_1945))).f_NEXT;
}
RT_B_TICK();
} L_end1946: ;
{ rt_int rv1948 = 0;
return rv1948; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_1949; memset(&l_ENTERED_1949, 0, sizeof l_ENTERED_1949);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_1949 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_1949)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1950; memset(&l_R_1950, 0, sizeof l_R_1950);
l_R_1950 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_1951; memset(&l_P_1951, 0, sizeof l_P_1951);
R28 * l_TAIL_1952; memset(&l_TAIL_1952, 0, sizeof l_TAIL_1952);
l_TAIL_1952 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1951 = ((*(R21 *)rt_nil_check(l_R_1950))).f_A;
for (;;) {
if ((l_P_1951 == NULL)) goto L_end1953;
{
if (((((*(R21 *)rt_nil_check(l_P_1951))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_1951))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1951 = ((*(R21 *)rt_nil_check(l_P_1951))).f_NEXT;
}
RT_B_TICK();
} L_end1953: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_1950))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1951 = ((*(R21 *)rt_nil_check(l_R_1950))).f_A;
for (;;) {
if ((l_P_1951 == NULL)) goto L_end1954;
{
{
R28 * l_PM_1955; memset(&l_PM_1955, 0, sizeof l_PM_1955);
l_PM_1955 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1955)), ({ R28 rc1956; memset(&rc1956, 0, sizeof rc1956);  S_R10(&rc1956.f_NAME, ((*(R21 *)rt_nil_check(l_P_1951))).f_NAME, 0); rc1956.f_MODE = ((*(R21 *)rt_nil_check(l_P_1951))).f_IV; rc1956.f_T = NULL; rc1956.f_TS = ((*(R21 *)rt_nil_check(l_P_1951))).f_B; rc1956.f_NEXT = NULL; rc1956; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_1950))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_1951))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1951))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_1955))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1951))).f_B);
}
if ((l_TAIL_1952 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1955;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1952))).f_NEXT = l_PM_1955;
}
l_TAIL_1952 = l_PM_1955;
}
l_P_1951 = ((*(R21 *)rt_nil_check(l_P_1951))).f_NEXT;
}
RT_B_TICK();
} L_end1954: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1957; memset(&l_R_1957, 0, sizeof l_R_1957);
l_R_1957 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_1958; memset(&l_T_1958, 0, sizeof l_T_1958);
if ((((*(R21 *)rt_nil_check(l_R_1957))).f_B == NULL))
{
{ R22 * rv1959 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1959; }
}
r_OPEN_SCOPE();
{
R28 * l_P_1960; memset(&l_P_1960, 0, sizeof l_P_1960);
l_P_1960 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1960 == NULL)) goto L_end1961;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1960))).f_T == NULL)))
{
{
R12 * l_V_1962; memset(&l_V_1962, 0, sizeof l_V_1962);
l_V_1962 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_1960))).f_NAME);
((*(R12 *)rt_nil_check(l_V_1962))).f_T = ((*(R28 *)rt_nil_check(l_P_1960))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_1962))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_1960))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_1962))).f_INPUT = 1;
r_DEFINE(l_V_1962, ((*(R21 *)rt_nil_check(l_R_1957))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_1960))).f_T, ((*(R12 *)rt_nil_check(l_V_1962))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_1957))).f_LINE, 0);
}
}
l_P_1960 = ((*(R28 *)rt_nil_check(l_P_1960))).f_NEXT;
}
RT_B_TICK();
} L_end1961: ;
}
l_T_1958 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_1957))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv1963 = l_T_1958;
return rv1963; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_1964; memset(&l_PS_1964, 0, sizeof l_PS_1964);
S_R10(&l_PS_1964, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1965; memset(&l_SEP_1965, 0, sizeof l_SEP_1965);
S_R10(&l_SEP_1965, r_MK(rt_str("", 0)), 0);
R28 * l_P_1966; memset(&l_P_1966, 0, sizeof l_P_1966);
l_P_1966 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_1964, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_1965, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_1966 == NULL)) goto L_end1967;
{
if ((((*(R28 *)rt_nil_check(l_P_1966))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1966))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1966))).f_MODE == g_M_IN))
{
S_R10(&l_PS_1964, r_FMT4(rt_str("@@@ p_@", 7), l_PS_1964, l_SEP_1965, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1966))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_1966))).f_NAME)), 0);
S_R10(&l_SEP_1965, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_1964, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_1964, l_SEP_1965, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1966))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_1966))).f_NAME)), 0);
S_R10(&l_SEP_1965, r_MK(rt_str(", ", 2)), 0);
}
l_P_1966 = ((*(R28 *)rt_nil_check(l_P_1966))).f_NEXT;
}
RT_B_TICK();
} L_end1967: ;
if (((l_PS_1964).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_1964, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv1968 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_1964);
return rv1968; }
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
R25 * l_B_1969; memset(&l_B_1969, 0, sizeof l_B_1969);
l_B_1969 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1970; memset(&l_I_1970, 0, sizeof l_I_1970);
l_I_1970 = ((rt_int)0LL);
for (;;) {
if ((l_B_1969 == NULL)) goto L_end1971;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1969))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1969))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_1970)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1969))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1969))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_1969))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1969))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_1970)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1969))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_1970), p_PC, r_NUM(l_I_1970)), ((*(R25 *)rt_nil_check(l_B_1969))).f_LO), p_LINE, p_CHECK);
}
}
l_I_1970 = rt_add(l_I_1970, ((rt_int)1LL));
l_B_1969 = ((*(R25 *)rt_nil_check(l_B_1969))).f_NEXT;
}
RT_B_TICK();
} L_end1971: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_1972; memset(&l_U_1972, 0, sizeof l_U_1972);
l_U_1972 = r_REAL_TYPE(p_T);
R24 * l_F_1973; memset(&l_F_1973, 0, sizeof l_F_1973);
l_F_1973 = ((*(R22 *)rt_nil_check(l_U_1972))).f_FIELDS;
R25 * l_A_1974; memset(&l_A_1974, 0, sizeof l_A_1974);
l_A_1974 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_1973 == NULL) || (l_A_1974 == NULL))) goto L_end1975;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1973))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_1974))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_1974))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_1973))).f_CNAME), p_LINE, p_CHECK);
}
l_A_1974 = ((*(R25 *)rt_nil_check(l_A_1974))).f_NEXT;
}
l_F_1973 = ((*(R24 *)rt_nil_check(l_F_1973))).f_NEXT;
}
RT_B_TICK();
} L_end1975: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1976 = 0;
return rv1976; }
}
{ rt_int rv1977 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1977; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv1978 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv1978; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_1979; memset(&l_OLD_1979, 0, sizeof l_OLD_1979);
l_OLD_1979 = r_LOOKUP(p_NAME);
if ((!(l_OLD_1979 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_1979))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_1979))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_1979))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_1980; memset(&l_G_1980, 0, sizeof l_G_1980);
l_G_1980 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_1980))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_1980))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_1980))).f_INPUT = 1;
r_DEFINE(l_G_1980, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_1981; memset(&l_B_1981, 0, sizeof l_B_1981);
l_B_1981 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1981)), ({ R20 rc1982; memset(&rc1982, 0, sizeof rc1982);  S_R10(&rc1982.f_NAME, r_NO_TEXT(), 0); rc1982.f_T = NULL; S_R10(&rc1982.f_C, r_NO_TEXT(), 0); rc1982.f_HASMV = 0; rc1982.f_MV = ((rt_int)0LL); rc1982.f_R = NULL; rc1982.f_NEXT = NULL; rc1982; }), 0);
{ R20 * rv1983 = l_B_1981;
return rv1983; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_1984; memset(&l_B_1984, 0, sizeof l_B_1984);
l_B_1984 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1984)), ({ R20 rc1985; memset(&rc1985, 0, sizeof rc1985);  S_R10(&rc1985.f_NAME, p_NAME, 0); rc1985.f_T = p_T; S_R10(&rc1985.f_C, r_NO_TEXT(), 0); rc1985.f_HASMV = (p_M).f_OK; rc1985.f_MV = (p_M).f_V; rc1985.f_R = p_R; rc1985.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc1985; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_1984))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_1984;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1986; memset(&l_B_1986, 0, sizeof l_B_1986);
l_B_1986 = p_BS;
for (;;) {
if ((l_B_1986 == NULL)) goto L_end1987;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_1986))).f_NAME, p_NAME))
{
{ R20 * rv1988 = l_B_1986;
return rv1988; }
}
l_B_1986 = ((*(R20 *)rt_nil_check(l_B_1986))).f_NEXT;
}
RT_B_TICK();
} L_end1987: ;
{ R20 * rv1989 = NULL;
return rv1989; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_1990; memset(&l_RT_1990, 0, sizeof l_RT_1990);
l_RT_1990 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv1991 = 1;
return rv1991; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv1992 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv1992; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1993 = 1;
return rv1993; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1994 = 1;
return rv1994; }
}
{
R20 * l_B_1995; memset(&l_B_1995, 0, sizeof l_B_1995);
l_B_1995 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_1995 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_1995))).f_T == NULL))
{
{ rt_int rv1996 = 0;
return rv1996; }
}
{ rt_int rv1997 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_1995))).f_T, p_T);
return rv1997; }
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
{ rt_int rv1998 = 1;
return rv1998; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_ARR)))
{
{ rt_int rv1999 = 0;
return rv1999; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_1990))).f_DIMS)))
{
{ rt_int rv2000 = 0;
return rv2000; }
}
{ rt_int rv2001 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_1990))).f_ELEM, p_BS);
return rv2001; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2002 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2002; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2003 = 0;
return rv2003; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_1990))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_1990))).f_MHI, p_BS))))
{
{ rt_int rv2004 = 0;
return rv2004; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_INT)))
{
{ rt_int rv2005 = 0;
return rv2005; }
}
{ rt_int rv2006 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1990))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2006; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2007 = ((((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_1990))).f_SCALE == ((rt_int)0LL)));
return rv2007; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2008 = 0;
return rv2008; }
}
{ rt_int rv2009 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1990))).f_SCALE), p_BS);
return rv2009; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2010 = (((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_BOOL);
return rv2010; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2011 = (((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_STR);
return rv2011; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_STR)))
{
{ rt_int rv2012 = 0;
return rv2012; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2013 = 1;
return rv2013; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_1990))).f_BASE == NULL)))
{
{ rt_int rv2014 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_1990))).f_BASE, p_BS);
return rv2014; }
}
{ rt_int rv2015 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2015; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2016 = (((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_BITS);
return rv2016; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2017 = (((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_SEM);
return rv2017; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_PTR)))
{
{ rt_int rv2018 = 0;
return rv2018; }
}
{ rt_int rv2019 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_1990), p_BS);
return rv2019; }
}
{
R12 * l_Y_2020; memset(&l_Y_2020, 0, sizeof l_Y_2020);
l_Y_2020 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2020 == NULL))
{
{ rt_int rv2021 = 0;
return rv2021; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2020))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2020))).f_DECL == NULL)))
{
{ rt_int rv2022 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2020))).f_T, p_T);
return rv2022; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2020))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2023 = 0;
return rv2023; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2020))))
{
{ rt_int rv2024 = 0;
return rv2024; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2020))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1990))).f_KIND == g_T_REC)))
{
{ rt_int rv2025 = 0;
return rv2025; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1990))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2026 = 0;
return rv2026; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1990))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2020))))
{
{ rt_int rv2027 = 0;
return rv2027; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2028 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2028; }
}
{ rt_int rv2029 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2020))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2020))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_1990, p_BS);
return rv2029; }
}
{
R21 * l_F_2030; memset(&l_F_2030, 0, sizeof l_F_2030);
l_F_2030 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2020))).f_DECL))).f_A;
R21 * l_A_2031; memset(&l_A_2031, 0, sizeof l_A_2031);
l_A_2031 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2032; memset(&l_V_2032, 0, sizeof l_V_2032);
l_V_2032 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2033; memset(&l_CLASS_2033, 0, sizeof l_CLASS_2033);
l_CLASS_2033 = r_RECORD_CLASS_OF(l_RT_1990);
for (;;) {
if ((l_F_2030 == NULL)) goto L_end2034;
{
{
R21 * l_N_2035; memset(&l_N_2035, 0, sizeof l_N_2035);
l_N_2035 = ((*(R21 *)rt_nil_check(l_F_2030))).f_A;
for (;;) {
if ((l_N_2035 == NULL)) goto L_end2036;
{
if ((l_A_2031 == NULL))
{
{ rt_int rv2037 = 0;
return rv2037; }
}
if ((((*(R21 *)rt_nil_check(l_F_2030))).f_B == NULL))
{
if ((!(l_CLASS_2033 == NULL)))
{
{
R20 * l_B_2038; memset(&l_B_2038, 0, sizeof l_B_2038);
l_B_2038 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2033))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2035))).f_NAME);
if ((!(l_B_2038 == NULL)))
{
if ((!r_UNIFY(l_A_2031, ((*(R20 *)rt_nil_check(l_B_2038))).f_T, p_BS)))
{
{ rt_int rv2039 = 0;
return rv2039; }
}
}
}
}
}
else
{
if ((!(l_V_2032 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2031))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2031))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2031))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2040; memset(&l_M_2040, 0, sizeof l_M_2040);
S_R23(&l_M_2040, r_MANIFEST(l_A_2031), 0);
if (((l_M_2040).f_OK && (((*(R25 *)rt_nil_check(l_V_2032))).f_MLO).f_OK))
{
if ((!((l_M_2040).f_V == (((*(R25 *)rt_nil_check(l_V_2032))).f_MLO).f_V)))
{
{ rt_int rv2041 = 0;
return rv2041; }
}
}
}
}
l_V_2032 = ((*(R25 *)rt_nil_check(l_V_2032))).f_NEXT;
}
}
l_A_2031 = ((*(R21 *)rt_nil_check(l_A_2031))).f_NEXT;
l_N_2035 = ((*(R21 *)rt_nil_check(l_N_2035))).f_NEXT;
}
RT_B_TICK();
} L_end2036: ;
}
l_F_2030 = ((*(R21 *)rt_nil_check(l_F_2030))).f_NEXT;
}
RT_B_TICK();
} L_end2034: ;
}
{ rt_int rv2042 = 1;
return rv2042; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2043; memset(&l_R_2043, 0, sizeof l_R_2043);
l_R_2043 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2044 = NULL;
return rv2044; }
}
for (;;) {
if ((l_R_2043 == NULL)) goto L_end2045;
{
if ((((*(R12 *)rt_nil_check(l_R_2043))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2046 = l_R_2043;
return rv2046; }
}
l_R_2043 = ((*(R12 *)rt_nil_check(l_R_2043))).f_INSTANCES;
}
RT_B_TICK();
} L_end2045: ;
{ R12 * rv2047 = NULL;
return rv2047; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2048 = 1;
return rv2048; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2049 = 1;
return rv2049; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2050 = 1;
return rv2050; }
}
{
R20 * l_B_2051; memset(&l_B_2051, 0, sizeof l_B_2051);
l_B_2051 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2051 == NULL)))
{
{ rt_int rv2052 = ((((*(R20 *)rt_nil_check(l_B_2051))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2051))).f_MV == (p_M).f_V));
return rv2052; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2053 = 0;
return rv2053; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2054 = 1;
return rv2054; }
}
{
R23 l_V_2055; memset(&l_V_2055, 0, sizeof l_V_2055);
S_R23(&l_V_2055, r_MANIFEST(p_A), 0);
if (((l_V_2055).f_OK && (p_M).f_OK))
{
{ rt_int rv2056 = ((l_V_2055).f_V == (p_M).f_V);
return rv2056; }
}
}
{ rt_int rv2057 = 1;
return rv2057; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2058 = 0;
return rv2058; }
}
{ rt_int rv2059 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv2059; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2060 = 1;
return rv2060; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2061 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2061; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2062; memset(&l_BS_2062, 0, sizeof l_BS_2062);
l_BS_2062 = r_NEW_BINDS();
R28 * l_P_2063; memset(&l_P_2063, 0, sizeof l_P_2063);
l_P_2063 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2064; memset(&l_A_2064, 0, sizeof l_A_2064);
l_A_2064 = p_ARGS;
for (;;) {
if ((l_P_2063 == NULL)) goto L_end2065;
{
if ((((*(R28 *)rt_nil_check(l_P_2063))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2064))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2063))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2064))).f_E), r_NO_MVAL(), NULL, l_BS_2062);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2063))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2063))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2063))).f_TS, ((*(R27 *)rt_nil_check(l_A_2064))).f_E, p_LINE), l_BS_2062);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2064))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2064))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2063))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2064))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2064))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2064))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2064))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2064))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2063))).f_TS, (((*(R27 *)rt_nil_check(l_A_2064))).f_V).f_T, l_BS_2062)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2063))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2063))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2063))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2063))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2064))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2062);
}
}
l_P_2063 = ((*(R28 *)rt_nil_check(l_P_2063))).f_NEXT;
l_A_2064 = ((*(R27 *)rt_nil_check(l_A_2064))).f_NEXT;
}
RT_B_TICK();
} L_end2065: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2062);
{
R12 * l_I_2066; memset(&l_I_2066, 0, sizeof l_I_2066);
l_I_2066 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2066 == NULL)) goto L_end2067;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2066))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2062))).f_NEXT))
{
{ R12 * rv2068 = l_I_2066;
return rv2068; }
}
l_I_2066 = ((*(R12 *)rt_nil_check(l_I_2066))).f_INSTANCES;
}
RT_B_TICK();
} L_end2067: ;
}
{ R12 * rv2069 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2062))).f_NEXT, p_ARGS);
return rv2069; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2070; memset(&l_P_2070, 0, sizeof l_P_2070);
l_P_2070 = p_A;
for (;;) {
if ((l_P_2070 == NULL)) goto L_end2071;
{
{
R20 * l_Q_2072; memset(&l_Q_2072, 0, sizeof l_Q_2072);
l_Q_2072 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2070))).f_NAME);
if ((l_Q_2072 == NULL))
{
{ rt_int rv2073 = 0;
return rv2073; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2070))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2072))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2070))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2072))).f_T == NULL)))
{
{ rt_int rv2074 = 0;
return rv2074; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2070))).f_T, ((*(R20 *)rt_nil_check(l_Q_2072))).f_T)))
{
{ rt_int rv2075 = 0;
return rv2075; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2070))).f_T, ((*(R20 *)rt_nil_check(l_Q_2072))).f_T)))
{
{ rt_int rv2076 = 0;
return rv2076; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2070))).f_T, ((*(R20 *)rt_nil_check(l_Q_2072))).f_T)))
{
{ rt_int rv2077 = 0;
return rv2077; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2070))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2072))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2070))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2072))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2070))).f_R == ((*(R20 *)rt_nil_check(l_Q_2072))).f_R))))
{
{ rt_int rv2078 = 0;
return rv2078; }
}
}
l_P_2070 = ((*(R20 *)rt_nil_check(l_P_2070))).f_NEXT;
}
RT_B_TICK();
} L_end2071: ;
{ rt_int rv2079 = 1;
return rv2079; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2080; memset(&l_RA_2080, 0, sizeof l_RA_2080);
l_RA_2080 = r_REAL_TYPE(p_A);
R22 * l_RB_2081; memset(&l_RB_2081, 0, sizeof l_RB_2081);
l_RB_2081 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2080))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2080))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2080))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2081))).f_KIND))))
{
{ rt_int rv2082 = 1;
return rv2082; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2080))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2081))).f_MLEN).f_OK))
{
{ rt_int rv2083 = ((((*(R22 *)rt_nil_check(l_RA_2080))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2081))).f_MLEN).f_V);
return rv2083; }
}
{ rt_int rv2084 = ((((*(R22 *)rt_nil_check(l_RA_2080))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2081))).f_MLEN).f_OK);
return rv2084; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2085; memset(&l_RA_2085, 0, sizeof l_RA_2085);
l_RA_2085 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2086; memset(&l_RB_2086, 0, sizeof l_RB_2086);
l_RB_2086 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2085 == NULL) || (l_RB_2086 == NULL)))
{
{ rt_int rv2087 = (l_RA_2085 == l_RB_2086);
return rv2087; }
}
if ((l_RA_2085 == l_RB_2086))
{
{ rt_int rv2088 = 1;
return rv2088; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2085))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2086))).f_NAME)))
{
{ rt_int rv2089 = 0;
return rv2089; }
}
{
R21 * l_X_2090; memset(&l_X_2090, 0, sizeof l_X_2090);
l_X_2090 = ((*(R21 *)rt_nil_check(l_RA_2085))).f_A;
R21 * l_Y_2091; memset(&l_Y_2091, 0, sizeof l_Y_2091);
l_Y_2091 = ((*(R21 *)rt_nil_check(l_RB_2086))).f_A;
for (;;) {
if (((l_X_2090 == NULL) || (l_Y_2091 == NULL))) goto L_end2092;
{
if (((((((*(R21 *)rt_nil_check(l_X_2090))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2090))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2091))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2091))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2090))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2091))).f_NAME)))
{
{ rt_int rv2093 = 0;
return rv2093; }
}
}
else
{
{
R23 l_MX_2094; memset(&l_MX_2094, 0, sizeof l_MX_2094);
S_R23(&l_MX_2094, r_MANIFEST(l_X_2090), 0);
R23 l_MY_2095; memset(&l_MY_2095, 0, sizeof l_MY_2095);
S_R23(&l_MY_2095, r_MANIFEST(l_Y_2091), 0);
if (((!((l_MX_2094).f_OK == (l_MY_2095).f_OK)) || (!((l_MX_2094).f_V == (l_MY_2095).f_V))))
{
{ rt_int rv2096 = 0;
return rv2096; }
}
}
}
l_X_2090 = ((*(R21 *)rt_nil_check(l_X_2090))).f_NEXT;
l_Y_2091 = ((*(R21 *)rt_nil_check(l_Y_2091))).f_NEXT;
}
RT_B_TICK();
} L_end2092: ;
{ rt_int rv2097 = ((((l_X_2090 == NULL) && (l_Y_2091 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2085))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2086))).f_B == NULL));
return rv2097; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2098; memset(&l_Y_2098, 0, sizeof l_Y_2098);
l_Y_2098 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2099; memset(&l_FOUND_2099, 0, sizeof l_FOUND_2099);
l_FOUND_2099 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_2098 == NULL)) goto L_end2100;
{
if ((((*(R12 *)rt_nil_check(l_Y_2098))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2101; memset(&l_R_2101, 0, sizeof l_R_2101);
l_R_2101 = r_ORIGINAL(l_Y_2098);
r_ROUTINE_HEADER(l_R_2101);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_2101)) && (!((*(R12 *)rt_nil_check(l_R_2101))).f_GENERIC)))
{
if (((!(l_FOUND_2099 == NULL)) && (!(l_FOUND_2099 == l_R_2101))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2099 = l_R_2101;
}
}
}
l_Y_2098 = r_LOOKUP_NEXT(l_Y_2098);
}
RT_B_TICK();
} L_end2100: ;
if ((l_FOUND_2099 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2099))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv2102 = l_FOUND_2099;
return rv2102; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2103; memset(&l_NEEDL_2103, 0, sizeof l_NEEDL_2103);
l_NEEDL_2103 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2104; memset(&l_SAVED_2104, 0, sizeof l_SAVED_2104);
l_SAVED_2104 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2103 == NULL)) goto L_end2105;
{
{
R21 * l_T_2106; memset(&l_T_2106, 0, sizeof l_T_2106);
l_T_2106 = ((*(R21 *)rt_nil_check(l_NEEDL_2103))).f_A;
for (;;) {
if ((l_T_2106 == NULL)) goto L_end2107;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2106))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2108; memset(&l_ARGS_2108, 0, sizeof l_ARGS_2108);
l_ARGS_2108 = NULL;
R27 * l_TAIL_2109; memset(&l_TAIL_2109, 0, sizeof l_TAIL_2109);
l_TAIL_2109 = NULL;
R21 * l_P_2110; memset(&l_P_2110, 0, sizeof l_P_2110);
l_P_2110 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2106))).f_B))).f_A;
R12 * l_R_2111; memset(&l_R_2111, 0, sizeof l_R_2111);
rt_int l_ENTERED_2112; memset(&l_ENTERED_2112, 0, sizeof l_ENTERED_2112);
l_ENTERED_2112 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2110 == NULL)) goto L_end2113;
{
{
R27 * l_A_2114; memset(&l_A_2114, 0, sizeof l_A_2114);
if ((((*(R21 *)rt_nil_check(l_P_2110))).f_B == NULL))
{
l_A_2114 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2114 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2110))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2114))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2110))).f_IV;
if ((l_TAIL_2109 == NULL))
{
l_ARGS_2108 = l_A_2114;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2109))).f_NEXT = l_A_2114;
}
l_TAIL_2109 = l_A_2114;
}
l_P_2110 = ((*(R21 *)rt_nil_check(l_P_2110))).f_NEXT;
}
RT_B_TICK();
} L_end2113: ;
if (l_ENTERED_2112)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2111 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2106))).f_NAME, l_ARGS_2108, p_LINE, 0);
if ((l_R_2111 == NULL))
{
l_R_2111 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2106))).f_NAME);
for (;;) {
if ((l_R_2111 == NULL)) goto L_end2115;
{
if ((((*(R12 *)rt_nil_check(l_R_2111))).f_KIND == g_Y_BUILTIN))
{
goto L_end2115;
}
l_R_2111 = r_LOOKUP_NEXT(l_R_2111);
}
RT_B_TICK();
} L_end2115: ;
}
if (((l_R_2111 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2106))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2106))).f_NAME);
}
if ((!(l_R_2111 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2106))).f_NAME, NULL, r_NO_MVAL(), l_R_2111, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2106 = ((*(R21 *)rt_nil_check(l_T_2106))).f_NEXT;
}
RT_B_TICK();
} L_end2107: ;
}
l_NEEDL_2103 = ((*(R21 *)rt_nil_check(l_NEEDL_2103))).f_NEXT;
}
RT_B_TICK();
} L_end2105: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2104;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2116 = 0;
return rv2116; }
}
{
R12 * l_Y_2117; memset(&l_Y_2117, 0, sizeof l_Y_2117);
l_Y_2117 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2118; memset(&l_A_2118, 0, sizeof l_A_2118);
l_A_2118 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2119; memset(&l_F_2119, 0, sizeof l_F_2119);
if ((l_Y_2117 == NULL))
{
{ rt_int rv2120 = 0;
return rv2120; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2117))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2117))).f_DECL == NULL)))
{
{ rt_int rv2121 = 0;
return rv2121; }
}
l_F_2119 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2117))).f_DECL))).f_A;
for (;;) {
if ((l_F_2119 == NULL)) goto L_end2122;
{
{
R21 * l_N_2123; memset(&l_N_2123, 0, sizeof l_N_2123);
l_N_2123 = ((*(R21 *)rt_nil_check(l_F_2119))).f_A;
for (;;) {
if ((l_N_2123 == NULL)) goto L_end2124;
{
if ((l_A_2118 == NULL))
{
{ rt_int rv2125 = 0;
return rv2125; }
}
if (((((*(R21 *)rt_nil_check(l_F_2119))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2118))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2126 = 1;
return rv2126; }
}
l_A_2118 = ((*(R21 *)rt_nil_check(l_A_2118))).f_NEXT;
l_N_2123 = ((*(R21 *)rt_nil_check(l_N_2123))).f_NEXT;
}
RT_B_TICK();
} L_end2124: ;
}
l_F_2119 = ((*(R21 *)rt_nil_check(l_F_2119))).f_NEXT;
}
RT_B_TICK();
} L_end2122: ;
}
{ rt_int rv2127 = 0;
return rv2127; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2128; memset(&l_A_2128, 0, sizeof l_A_2128);
l_A_2128 = p_ARGS;
R12 * l_I_2129; memset(&l_I_2129, 0, sizeof l_I_2129);
l_I_2129 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2130; memset(&l_SAVED_2130, 0, sizeof l_SAVED_2130);
l_SAVED_2130 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2131; memset(&l_P_2131, 0, sizeof l_P_2131);
l_P_2131 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2132; memset(&l_TAIL_2132, 0, sizeof l_TAIL_2132);
l_TAIL_2132 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2129)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2129))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2129))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2129))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2129))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2129))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2129;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2131 == NULL)) goto L_end2133;
{
{
R28 * l_PM_2134; memset(&l_PM_2134, 0, sizeof l_PM_2134);
l_PM_2134 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2134)), (*(R28 *)rt_nil_check(l_P_2131)), 0);
((*(R28 *)rt_nil_check(l_PM_2134))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2131))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2134))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2131))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2134))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2131))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2128))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2134))).f_T = (((*(R27 *)rt_nil_check(l_A_2128))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2134))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2134))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2134))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2134))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2134))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2131))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_2134))).f_TS = NULL;
if ((l_TAIL_2132 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2129))).f_PARAMS = l_PM_2134;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2132))).f_NEXT = l_PM_2134;
}
l_TAIL_2132 = l_PM_2134;
}
l_P_2131 = ((*(R28 *)rt_nil_check(l_P_2131))).f_NEXT;
l_A_2128 = ((*(R27 *)rt_nil_check(l_A_2128))).f_NEXT;
}
RT_B_TICK();
} L_end2133: ;
((*(R12 *)rt_nil_check(l_I_2129))).f_RESULT = r_RESULT_TYPE(l_I_2129);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2130;
S_R10(&((*(R12 *)rt_nil_check(l_I_2129))).f_FWD, r_C_HEADER(l_I_2129), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2129))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2129))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2129;
{ R12 * rv2135 = l_I_2129;
return rv2135; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2136 = 0;
return rv2136; }
}
{ rt_int rv2137 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2137; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2138; memset(&l_C_2138, 0, sizeof l_C_2138);
if ((p_TS == NULL))
{
{ R21 * rv2139 = NULL;
return rv2139; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2140; memset(&l_F_2140, 0, sizeof l_F_2140);
l_F_2140 = p_FORMALS;
R21 * l_A_2141; memset(&l_A_2141, 0, sizeof l_A_2141);
l_A_2141 = p_ARGS;
for (;;) {
if ((l_F_2140 == NULL)) goto L_end2142;
{
{
R21 * l_N_2143; memset(&l_N_2143, 0, sizeof l_N_2143);
l_N_2143 = ((*(R21 *)rt_nil_check(l_F_2140))).f_A;
for (;;) {
if ((l_N_2143 == NULL)) goto L_end2144;
{
if ((l_A_2141 == NULL))
{
{ R21 * rv2145 = p_TS;
return rv2145; }
}
if (((((*(R21 *)rt_nil_check(l_F_2140))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2143))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2146 = l_A_2141;
return rv2146; }
}
l_A_2141 = ((*(R21 *)rt_nil_check(l_A_2141))).f_NEXT;
l_N_2143 = ((*(R21 *)rt_nil_check(l_N_2143))).f_NEXT;
}
RT_B_TICK();
} L_end2144: ;
}
l_F_2140 = ((*(R21 *)rt_nil_check(l_F_2140))).f_NEXT;
}
RT_B_TICK();
} L_end2142: ;
}
{ R21 * rv2147 = p_TS;
return rv2147; }
}
l_C_2138 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2138))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2138))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2148 = l_C_2138;
return rv2148; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2149; memset(&l_C_2149, 0, sizeof l_C_2149);
l_C_2149 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2149)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2149))).f_NEXT = NULL;
{ R21 * rv2150 = l_C_2149;
return rv2150; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2151; memset(&l_P_2151, 0, sizeof l_P_2151);
l_P_2151 = p_L;
for (;;) {
if ((l_P_2151 == NULL)) goto L_end2152;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2151))).f_NAME, p_NAME))
{
{ rt_int rv2153 = 1;
return rv2153; }
}
l_P_2151 = ((*(R21 *)rt_nil_check(l_P_2151))).f_NEXT;
}
RT_B_TICK();
} L_end2152: ;
{ rt_int rv2154 = 0;
return rv2154; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2155; memset(&l_IS_2155, 0, sizeof l_IS_2155);
l_IS_2155 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2156 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2156; }
}
if ((l_IS_2155 == NULL))
{
{ rt_int rv2157 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2157; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2155))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2155))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2158 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2158; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2155))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2155))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2159 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2159; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2155))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2160 = 0;
return rv2160; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2161; memset(&l_ITEMS_2161, 0, sizeof l_ITEMS_2161);
l_ITEMS_2161 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2162; memset(&l_HEAD_2162, 0, sizeof l_HEAD_2162);
l_HEAD_2162 = NULL;
R21 * l_TAIL_2163; memset(&l_TAIL_2163, 0, sizeof l_TAIL_2163);
l_TAIL_2163 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2161 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2161))).f_A, &l_HEAD_2162, &l_TAIL_2163);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2161))).f_B, &l_HEAD_2162, &l_TAIL_2163);
{
R21 * l_R_2164; memset(&l_R_2164, 0, sizeof l_R_2164);
l_R_2164 = ((*(R21 *)rt_nil_check(l_ITEMS_2161))).f_C;
for (;;) {
if ((l_R_2164 == NULL)) goto L_end2165;
{
{
R12 * l_Z_2166; memset(&l_Z_2166, 0, sizeof l_Z_2166);
l_Z_2166 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2164))).f_NAME);
if (((l_Z_2166 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2164))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2164))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2164))).f_NAME);
}
for (;;) {
if ((l_Z_2166 == NULL)) goto L_end2167;
{
if ((((*(R12 *)rt_nil_check(l_Z_2166))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2168; memset(&l_O_2168, 0, sizeof l_O_2168);
l_O_2168 = r_ORIGINAL(l_Z_2166);
R21 * l_U_2169; memset(&l_U_2169, 0, sizeof l_U_2169);
r_COMPUTE_USES(l_O_2168);
l_U_2169 = ((*(R12 *)rt_nil_check(l_O_2168))).f_USES;
for (;;) {
if ((l_U_2169 == NULL)) goto L_end2170;
{
if ((!r_IN_IDENTS(l_HEAD_2162, ((*(R21 *)rt_nil_check(l_U_2169))).f_NAME)))
{
{
R21 * l_N_2171; memset(&l_N_2171, 0, sizeof l_N_2171);
l_N_2171 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2169))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2171))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2169))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2171))).f_IV = ((*(R21 *)rt_nil_check(l_U_2169))).f_IV;
r_ADD_LIST(l_N_2171, &l_HEAD_2162, &l_TAIL_2163);
}
}
l_U_2169 = ((*(R21 *)rt_nil_check(l_U_2169))).f_NEXT;
}
RT_B_TICK();
} L_end2170: ;
}
}
l_Z_2166 = r_LOOKUP_NEXT(l_Z_2166);
}
RT_B_TICK();
} L_end2167: ;
}
l_R_2164 = ((*(R21 *)rt_nil_check(l_R_2164))).f_NEXT;
}
RT_B_TICK();
} L_end2165: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2162;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2172; memset(&l_M_2172, 0, sizeof l_M_2172);
if ((p_B == NULL))
{
{ rt_int rv2173 = 0;
return rv2173; }
}
l_M_2172 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2172 == NULL)) goto L_end2174;
{
if ((((*(R21 *)rt_nil_check(l_M_2172))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2172))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2172))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2172))).f_C, p_NAME)))
{
{ rt_int rv2175 = 1;
return rv2175; }
}
}
l_M_2172 = ((*(R21 *)rt_nil_check(l_M_2172))).f_NEXT;
}
RT_B_TICK();
} L_end2174: ;
{ rt_int rv2176 = 0;
return rv2176; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2177; memset(&l_R_2177, 0, sizeof l_R_2177);
l_R_2177 = p_RS;
for (;;) {
if ((l_R_2177 == NULL)) goto L_end2178;
{
if ((((*(R21 *)rt_nil_check(l_R_2177))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2177));
}
l_R_2177 = ((*(R21 *)rt_nil_check(l_R_2177))).f_NEXT;
}
RT_B_TICK();
} L_end2178: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2179; memset(&l_P_2179, 0, sizeof l_P_2179);
l_P_2179 = p_L;
for (;;) {
if ((l_P_2179 == NULL)) goto L_end2180;
{
{
R12 * l_V_2181; memset(&l_V_2181, 0, sizeof l_V_2181);
l_V_2181 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2179))).f_NAME);
R21 * l_N_2182; memset(&l_N_2182, 0, sizeof l_N_2182);
l_N_2182 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2179))).f_LINE);
if ((l_V_2181 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2179))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2179))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2182))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2179))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2182))).f_IV = ((*(R12 *)rt_nil_check(l_V_2181))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2181))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2182, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2179 = ((*(R21 *)rt_nil_check(l_P_2179))).f_NEXT;
}
RT_B_TICK();
} L_end2180: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2183; memset(&l_IS_2183, 0, sizeof l_IS_2183);
l_IS_2183 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2184; memset(&l_U_2184, 0, sizeof l_U_2184);
l_U_2184 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2183 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2183))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2184 == NULL)) goto L_end2185;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2184))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2183))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2183))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2184))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2184))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2183))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2184))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2183))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2184))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2183))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2183))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2183))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2183))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2184))).f_NAME)))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2184))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2184))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2184 = ((*(R21 *)rt_nil_check(l_U_2184))).f_NEXT;
}
RT_B_TICK();
} L_end2185: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2186; memset(&l_R_2186, 0, sizeof l_R_2186);
l_R_2186 = p_RS;
for (;;) {
if ((l_R_2186 == NULL)) goto L_end2187;
{
{
R12 * l_Z_2188; memset(&l_Z_2188, 0, sizeof l_Z_2188);
l_Z_2188 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2186))).f_NAME);
for (;;) {
if ((l_Z_2188 == NULL)) goto L_end2189;
{
if ((((*(R12 *)rt_nil_check(l_Z_2188))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2190; memset(&l_O_2190, 0, sizeof l_O_2190);
l_O_2190 = r_ORIGINAL(l_Z_2188);
r_COMPUTE_USES(l_O_2190);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2190))).f_USES, p_NAME))
{
{ rt_int rv2191 = 1;
return rv2191; }
}
}
}
l_Z_2188 = r_LOOKUP_NEXT(l_Z_2188);
}
RT_B_TICK();
} L_end2189: ;
}
l_R_2186 = ((*(R21 *)rt_nil_check(l_R_2186))).f_NEXT;
}
RT_B_TICK();
} L_end2187: ;
{ rt_int rv2192 = 0;
return rv2192; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2193; memset(&l_M_2193, 0, sizeof l_M_2193);
l_M_2193 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2193 == NULL)) goto L_end2194;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2193))).f_NAME))
{
{ rt_int rv2195 = 1;
return rv2195; }
}
l_M_2193 = ((*(R12 *)rt_nil_check(l_M_2193))).f_MODL;
}
RT_B_TICK();
} L_end2194: ;
{ rt_int rv2196 = 0;
return rv2196; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2197 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2197; }
}
{ R10 rv2198 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2198; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2199; memset(&l_C_2199, 0, sizeof l_C_2199);
l_C_2199 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2199 == NULL)) goto L_end2200;
{
if ((((*(R17 *)rt_nil_check(l_C_2199))).f_KIND == ((rt_int)1LL)))
{
goto L_end2200;
}
if ((((*(R17 *)rt_nil_check(l_C_2199))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2201; memset(&l_H_2201, 0, sizeof l_H_2201);
l_H_2201 = ((*(R17 *)rt_nil_check(l_C_2199))).f_HANDLERS;
for (;;) {
if ((l_H_2201 == NULL)) goto L_end2202;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2201))).f_A, p_NAME))
{
{ rt_int rv2203 = 1;
return rv2203; }
}
l_H_2201 = ((*(R21 *)rt_nil_check(l_H_2201))).f_NEXT;
}
RT_B_TICK();
} L_end2202: ;
}
}
l_C_2199 = ((*(R17 *)rt_nil_check(l_C_2199))).f_NEXT;
}
RT_B_TICK();
} L_end2200: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2204 = 1;
return rv2204; }
}
}
{ rt_int rv2205 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2205; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2206; memset(&l_C_2206, 0, sizeof l_C_2206);
l_C_2206 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2206)), ({ R17 rc2207; memset(&rc2207, 0, sizeof rc2207);  rc2207.f_KIND = p_KIND; S_R10(&rc2207.f_NAME, p_NAME, 0); rc2207.f_HANDLERS = NULL; rc2207.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2207; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2206;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2208; memset(&l_C_2208, 0, sizeof l_C_2208);
l_C_2208 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2208 == NULL)) goto L_end2209;
{
if ((((*(R17 *)rt_nil_check(l_C_2208))).f_KIND == p_KIND))
{
{ R17 * rv2210 = l_C_2208;
return rv2210; }
}
if ((((*(R17 *)rt_nil_check(l_C_2208))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2211 = NULL;
return rv2211; }
}
if ((((*(R17 *)rt_nil_check(l_C_2208))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2208))).f_NAME));
}
l_C_2208 = ((*(R17 *)rt_nil_check(l_C_2208))).f_NEXT;
}
RT_B_TICK();
} L_end2209: ;
{ R17 * rv2212 = NULL;
return rv2212; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2213; memset(&l_C_2213, 0, sizeof l_C_2213);
l_C_2213 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2214; memset(&l_N_2214, 0, sizeof l_N_2214);
l_N_2214 = ((rt_int)0LL);
for (;;) {
if ((l_C_2213 == NULL)) goto L_end2215;
{
if ((((*(R17 *)rt_nil_check(l_C_2213))).f_KIND == ((rt_int)1LL)))
{
goto L_end2215;
}
if ((((*(R17 *)rt_nil_check(l_C_2213))).f_KIND == ((rt_int)3LL)))
{
l_N_2214 = rt_add(l_N_2214, ((rt_int)1LL));
}
l_C_2213 = ((*(R17 *)rt_nil_check(l_C_2213))).f_NEXT;
}
RT_B_TICK();
} L_end2215: ;
{ rt_int rv2216 = l_N_2214;
return rv2216; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2217; memset(&l_N_2217, 0, sizeof l_N_2217);
l_N_2217 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2217 == NULL)) goto L_end2218;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2217))).f_NAME, p_NAME))
{
{ R10 rv2219 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2219; }
}
l_N_2217 = ((*(R21 *)rt_nil_check(l_N_2217))).f_NEXT;
}
RT_B_TICK();
} L_end2218: ;
l_N_2217 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2217))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2217))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2217;
{ R10 rv2220 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2220; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2221; memset(&l_D_2221, 0, sizeof l_D_2221);
l_D_2221 = p_DECLS;
for (;;) {
if ((l_D_2221 == NULL)) goto L_end2222;
{
if (((((*(R21 *)rt_nil_check(l_D_2221))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2221))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2223; memset(&l_Y_2223, 0, sizeof l_Y_2223);
l_Y_2223 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2221))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2221))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2223))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2223))).f_DECL = l_D_2221;
r_DEFINE(l_Y_2223, ((*(R21 *)rt_nil_check(l_D_2221))).f_LINE);
}
}
l_D_2221 = ((*(R21 *)rt_nil_check(l_D_2221))).f_NEXT;
}
RT_B_TICK();
} L_end2222: ;
}
static void r_DECLARE_LABELS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2224; memset(&l_S_2224, 0, sizeof l_S_2224);
l_S_2224 = p_S0;
for (;;) {
if ((l_S_2224 == NULL)) goto L_end2225;
{
{
R21 * l_L_2226; memset(&l_L_2226, 0, sizeof l_L_2226);
l_L_2226 = l_S_2224;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2226))).f_KIND == g_N_LABELED))) goto L_end2227;
{
{
R12 * l_Y_2228; memset(&l_Y_2228, 0, sizeof l_Y_2228);
l_Y_2228 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2226))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2228))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2226))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2226))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2228))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2228, ((*(R21 *)rt_nil_check(l_L_2226))).f_LINE);
}
l_L_2226 = ((*(R21 *)rt_nil_check(l_L_2226))).f_A;
}
RT_B_TICK();
} L_end2227: ;
}
l_S_2224 = ((*(R21 *)rt_nil_check(l_S_2224))).f_NEXT;
}
RT_B_TICK();
} L_end2225: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2229; memset(&l_D_2229, 0, sizeof l_D_2229);
l_D_2229 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2230; memset(&l_S_2230, 0, sizeof l_S_2230);
l_S_2230 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2229 == NULL)) goto L_end2231;
{
if (((((*(R21 *)rt_nil_check(l_D_2229))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2229))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2229);
}
l_D_2229 = ((*(R21 *)rt_nil_check(l_D_2229))).f_NEXT;
}
RT_B_TICK();
} L_end2231: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2230 == NULL)) goto L_end2232;
{
r_STMT(l_S_2230);
l_S_2230 = ((*(R21 *)rt_nil_check(l_S_2230))).f_NEXT;
}
RT_B_TICK();
} L_end2232: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2233; memset(&l_F_2233, 0, sizeof l_F_2233);
S_R10(&l_F_2233, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2234; memset(&l_H_2234, 0, sizeof l_H_2234);
l_H_2234 = p_HANDLERS;
R10 l_WORD_2235; memset(&l_WORD_2235, 0, sizeof l_WORD_2235);
S_R10(&l_WORD_2235, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2233, l_F_2233));
r_PUSH_CTX(((rt_int)3LL), l_F_2233);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2233, l_F_2233, l_F_2233));
for (;;) {
if ((l_H_2234 == NULL)) goto L_end2236;
{
{
R21 * l_N_2237; memset(&l_N_2237, 0, sizeof l_N_2237);
l_N_2237 = ((*(R21 *)rt_nil_check(l_H_2234))).f_A;
R10 l_COND_2238; memset(&l_COND_2238, 0, sizeof l_COND_2238);
S_R10(&l_COND_2238, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2237 == NULL)) goto L_end2239;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2237))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2237))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2237))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2237))).f_NAME);
}
S_R10(&l_COND_2238, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2238, l_F_2233, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2237))).f_NAME)), 0);
l_N_2237 = ((*(R21 *)rt_nil_check(l_N_2237))).f_NEXT;
}
RT_B_TICK();
} L_end2239: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2235, l_COND_2238));
S_R10(&l_WORD_2235, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2233, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2234))).f_B);
r_POP_CTX();
}
l_H_2234 = ((*(R21 *)rt_nil_check(l_H_2234))).f_NEXT;
}
RT_B_TICK();
} L_end2236: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2233));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2240; memset(&l_K_2240, 0, sizeof l_K_2240);
l_K_2240 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2240 == g_N_NULL))
{
return;
}
else if ((l_K_2240 == g_N_LABELED))
{
{
R12 * l_Y_2241; memset(&l_Y_2241, 0, sizeof l_Y_2241);
l_Y_2241 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2241))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2240 == g_N_GOTO))
{
{
R12 * l_Y_2242; memset(&l_Y_2242, 0, sizeof l_Y_2242);
l_Y_2242 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2243; memset(&l_N_2243, 0, sizeof l_N_2243);
R17 * l_C_2244; memset(&l_C_2244, 0, sizeof l_C_2244);
l_C_2244 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2242 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2242))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2242))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2243 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2242))).f_MV);
for (;;) {
if ((l_N_2243 <= ((rt_int)0LL))) goto L_end2245;
{
if ((((*(R17 *)rt_nil_check(l_C_2244))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2244))).f_NAME));
l_N_2243 = rt_sub(l_N_2243, ((rt_int)1LL));
}
l_C_2244 = ((*(R17 *)rt_nil_check(l_C_2244))).f_NEXT;
}
RT_B_TICK();
} L_end2245: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2242))).f_ACCESS));
}
}
else if ((l_K_2240 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2240 == g_N_CALL))
{
{
R26 l_V_2246; memset(&l_V_2246, 0, sizeof l_V_2246);
S_R26(&l_V_2246, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2246).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2246).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2246).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2240 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2240 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2240 == g_N_LOOP))
{
{
R10 l_END_L_2247; memset(&l_END_L_2247, 0, sizeof l_END_L_2247);
S_R10(&l_END_L_2247, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2247));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2247);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2247));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2247));
}
}
else if ((l_K_2240 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2240 == g_N_EXIT))
{
{
R17 * l_C_2248; memset(&l_C_2248, 0, sizeof l_C_2248);
l_C_2248 = r_LEAVE(((rt_int)2LL));
if ((l_C_2248 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2248))).f_NAME));
}
}
else if ((l_K_2240 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2240 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2240 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2240 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2240 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2240 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2240 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2240 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2249; memset(&l_Y_2249, 0, sizeof l_Y_2249);
l_Y_2249 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2249 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2249))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2249))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2250 = r_CALL_EXPR(p_S, NULL);
return rv2250; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2251; memset(&l_ARM_2251, 0, sizeof l_ARM_2251);
l_ARM_2251 = p_ARMS;
R10 l_WORD_2252; memset(&l_WORD_2252, 0, sizeof l_WORD_2252);
S_R10(&l_WORD_2252, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2253; memset(&l_OPEN_2253, 0, sizeof l_OPEN_2253);
l_OPEN_2253 = ((rt_int)0LL);
rt_int l_CHOSEN_2254; memset(&l_CHOSEN_2254, 0, sizeof l_CHOSEN_2254);
l_CHOSEN_2254 = 0;
for (;;) {
if ((l_ARM_2251 == NULL)) goto L_end2255;
{
{
R23 l_M_2256; memset(&l_M_2256, 0, sizeof l_M_2256);
S_R23(&l_M_2256, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2251))).f_A), 0);
if (l_CHOSEN_2254)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2251))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2251))).f_B);
}
else if ((l_M_2256).f_OK)
{
if ((!r_TEQS(l_WORD_2252, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2253 = rt_add(l_OPEN_2253, ((rt_int)1LL));
S_R10(&l_WORD_2252, r_MK(rt_str("if", 2)), 0);
}
if (((l_M_2256).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2251))).f_B);
l_CHOSEN_2254 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2251))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2252, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2251))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2251))).f_B);
S_R10(&l_WORD_2252, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2251 = ((*(R21 *)rt_nil_check(l_ARM_2251))).f_NEXT;
}
RT_B_TICK();
} L_end2255: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2254)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2252, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2258_lo = ((rt_int)1LL), it2258_hi = l_OPEN_2253;
for (rt_int it2258 = it2258_lo; it2258 <= it2258_hi; it2258++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2258 == it2258_hi) break;
} } L_end2257: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2259; memset(&l_SAVED_CODE_2259, 0, sizeof l_SAVED_CODE_2259);
S_R14(&l_SAVED_CODE_2259, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2260; memset(&rc2260, 0, sizeof rc2260);  rc2260.f_HEAD = NULL; rc2260.f_TAIL = NULL; rc2260; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2259, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2261; memset(&l_C_2261, 0, sizeof l_C_2261);
S_R10(&l_C_2261, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2262; memset(&l_END_L_2262, 0, sizeof l_END_L_2262);
S_R10(&l_END_L_2262, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2263; memset(&l_IT_2263, 0, sizeof l_IT_2263);
S_R10(&l_IT_2263, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2264; memset(&l_R_2264, 0, sizeof l_R_2264);
l_R_2264 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2265; memset(&l_LO_2265, 0, sizeof l_LO_2265);
S_R26(&l_LO_2265, r_EXPR(((*(R21 *)rt_nil_check(l_R_2264))).f_A, NULL), 0);
R26 l_HI_2266; memset(&l_HI_2266, 0, sizeof l_HI_2266);
S_R26(&l_HI_2266, r_EXPR(((*(R21 *)rt_nil_check(l_R_2264))).f_B, (l_LO_2265).f_T), 0);
R22 * l_T_2267; memset(&l_T_2267, 0, sizeof l_T_2267);
l_T_2267 = r_REAL_TYPE((l_LO_2265).f_T);
R10 l_LOC_2268; memset(&l_LOC_2268, 0, sizeof l_LOC_2268);
R10 l_HIC_2269; memset(&l_HIC_2269, 0, sizeof l_HIC_2269);
if ((((*(R22 *)rt_nil_check(l_T_2267))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2267))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2267))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2267))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2268, (l_LO_2265).f_C, 0);
S_R10(&l_HIC_2269, (l_HI_2266).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2264))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2264))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2268, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2268), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2264))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2269, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2269), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2263, l_LOC_2268, l_IT_2263, l_HIC_2269));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2263, l_IT_2263, l_IT_2263, l_IT_2263));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2270; memset(&l_Y_2270, 0, sizeof l_Y_2270);
l_Y_2270 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2270))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2267))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2270))).f_T = ((*(R22 *)rt_nil_check(l_T_2267))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2270))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2270, rt_str("", 0)), l_IT_2263));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2270, rt_str("", 0)), l_IT_2263));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2270))).f_ACCESS, l_IT_2263, 0);
}
r_DEFINE(l_Y_2270, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2262);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2263, l_IT_2263));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2262));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2271; memset(&l_CS_2271, 0, sizeof l_CS_2271);
l_CS_2271 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2272; memset(&l_C_2272, 0, sizeof l_C_2272);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2272 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2271))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2271))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2271))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2271))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2271))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2271))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2271))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2271))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2273; memset(&l_V_2273, 0, sizeof l_V_2273);
S_R10(&l_V_2273, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2271))).f_RESULT), l_V_2273, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2271))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2271))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2272 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2273));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2274; memset(&l_C_2274, 0, sizeof l_C_2274);
l_C_2274 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2274 == NULL)) goto L_end2275;
{
if ((((*(R17 *)rt_nil_check(l_C_2274))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2274))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2274))).f_KIND == ((rt_int)1LL)))
{
goto L_end2275;
}
l_C_2274 = ((*(R17 *)rt_nil_check(l_C_2274))).f_NEXT;
}
RT_B_TICK();
} L_end2275: ;
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
R21 * l_TG_2276; memset(&l_TG_2276, 0, sizeof l_TG_2276);
l_TG_2276 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2276))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2277; memset(&l_B_2277, 0, sizeof l_B_2277);
S_R26(&l_B_2277, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2276))).f_A, NULL), 0);
if ((!(l_B_2277).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2277).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2278; memset(&l_ARGS_2278, 0, sizeof l_ARGS_2278);
l_ARGS_2278 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2276))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2276))).f_C, g_M_IN, r_VAL_ARG(l_B_2277, NULL))));
R12 * l_Y_2279; memset(&l_Y_2279, 0, sizeof l_Y_2279);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2278))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2279 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2278, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2279 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2278))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2279 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2278, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2279 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2279, l_ARGS_2278, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2277).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2277).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2280; memset(&l_V_2280, 0, sizeof l_V_2280);
S_R26(&l_V_2280, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2277).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2280).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2277).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2277).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2276))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2276))).f_C), (l_V_2280).f_C));
}
}
return;
}
{
R26 l_LV_2281; memset(&l_LV_2281, 0, sizeof l_LV_2281);
S_R26(&l_LV_2281, r_EXPR(l_TG_2276, NULL), 0);
R21 * l_SAVED_Q_2282; memset(&l_SAVED_Q_2282, 0, sizeof l_SAVED_Q_2282);
l_SAVED_Q_2282 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2281).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
r_CODE(r_STORE_CODE((l_LV_2281).f_T, (l_LV_2281).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2281).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2281).f_SELF));
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2282;
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2283; memset(&l_Y_2283, 0, sizeof l_Y_2283);
l_Y_2283 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2284; memset(&l_V_2284, 0, sizeof l_V_2284);
S_R26(&l_V_2284, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2283))).f_T = (l_V_2284).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2285; memset(&l_CN_2285, 0, sizeof l_CN_2285);
S_R10(&l_CN_2285, r_NEW_OBJECT(l_Y_2283, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2284).f_T))
{
r_CODE(r_INIT_CODE((l_V_2284).f_T, l_CN_2285));
}
r_CODE(r_ASSIGN_CODE((l_V_2284).f_T, l_CN_2285, (l_V_2284).f_C));
}
}
else
{
if ((!(l_V_2284).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2286; memset(&l_P_2286, 0, sizeof l_P_2286);
S_R10(&l_P_2286, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2284).f_T), l_P_2286, (l_V_2284).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2283))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2286), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2283))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2283))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2283))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2283, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2287; memset(&l_ARM_2287, 0, sizeof l_ARM_2287);
l_ARM_2287 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2288; memset(&l_CH_2288, 0, sizeof l_CH_2288);
S_R26(&l_CH_2288, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2289; memset(&l_T_2289, 0, sizeof l_T_2289);
l_T_2289 = r_REAL_TYPE((l_CH_2288).f_T);
R12 * l_BOUND_2290; memset(&l_BOUND_2290, 0, sizeof l_BOUND_2290);
l_BOUND_2290 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2289))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2289))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2291; memset(&l_TMP_2291, 0, sizeof l_TMP_2291);
S_R10(&l_TMP_2291, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2292; memset(&l_WORD_2292, 0, sizeof l_WORD_2292);
S_R10(&l_WORD_2292, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2291, (l_CH_2288).f_C));
for (;;) {
if ((l_ARM_2287 == NULL)) goto L_end2293;
{
{
R21 * l_L_2294; memset(&l_L_2294, 0, sizeof l_L_2294);
l_L_2294 = ((*(R21 *)rt_nil_check(l_ARM_2287))).f_A;
R10 l_COND_2295; memset(&l_COND_2295, 0, sizeof l_COND_2295);
S_R10(&l_COND_2295, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2294 == NULL)) goto L_end2296;
{
S_R10(&l_COND_2295, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2295, l_TMP_2291, (r_EXPR(l_L_2294, l_T_2289)).f_C), 0);
l_L_2294 = ((*(R21 *)rt_nil_check(l_L_2294))).f_NEXT;
}
RT_B_TICK();
} L_end2296: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2292, l_COND_2295));
S_R10(&l_WORD_2292, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2287))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2287))).f_C);
}
l_ARM_2287 = ((*(R21 *)rt_nil_check(l_ARM_2287))).f_NEXT;
}
RT_B_TICK();
} L_end2293: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2292, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2289))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2289))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2289))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2289))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2289));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2288).f_C));
for (;;) {
if ((l_ARM_2287 == NULL)) goto L_end2297;
{
{
R21 * l_L_2298; memset(&l_L_2298, 0, sizeof l_L_2298);
l_L_2298 = ((*(R21 *)rt_nil_check(l_ARM_2287))).f_A;
R23 l_FIRST_2299; memset(&l_FIRST_2299, 0, sizeof l_FIRST_2299);
S_R23(&l_FIRST_2299, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2298 == NULL)) goto L_end2300;
{
if ((((*(R21 *)rt_nil_check(l_L_2298))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2301; memset(&l_LO_2301, 0, sizeof l_LO_2301);
S_R23(&l_LO_2301, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2298))).f_A, l_T_2289), 0);
R23 l_HI_2302; memset(&l_HI_2302, 0, sizeof l_HI_2302);
S_R23(&l_HI_2302, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2298))).f_B, l_T_2289), 0);
rt_int l_A_2303; memset(&l_A_2303, 0, sizeof l_A_2303);
l_A_2303 = (l_LO_2301).f_V;
rt_int l_B_2304; memset(&l_B_2304, 0, sizeof l_B_2304);
l_B_2304 = (l_HI_2302).f_V;
if ((!(((l_LO_2301).f_OK && (l_HI_2302).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2298))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2298))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2298))).f_IV == ((rt_int)3LL))))
{
l_A_2303 = rt_add(l_A_2303, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2298))).f_IV >= ((rt_int)2LL)))
{
l_B_2304 = rt_sub(l_B_2304, ((rt_int)1LL));
}
if ((!(l_FIRST_2299).f_OK))
{
S_R23(&l_FIRST_2299, r_SOME(l_A_2303), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2303), r_NUM(l_B_2304)));
}
}
else
{
{
R23 l_M_2305; memset(&l_M_2305, 0, sizeof l_M_2305);
S_R23(&l_M_2305, r_ENUM_MANIFEST(l_L_2298, l_T_2289), 0);
if ((!(l_M_2305).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2298))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2299).f_OK))
{
S_R23(&l_FIRST_2299, l_M_2305, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2305).f_V)));
}
}
l_L_2298 = ((*(R21 *)rt_nil_check(l_L_2298))).f_NEXT;
}
RT_B_TICK();
} L_end2300: ;
if ((!(l_BOUND_2290 == NULL)))
{
{
R22 * l_SAVED_2306; memset(&l_SAVED_2306, 0, sizeof l_SAVED_2306);
l_SAVED_2306 = ((*(R12 *)rt_nil_check(l_BOUND_2290))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2290))).f_T = r_NARROW(l_SAVED_2306, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2299).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2287))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2287))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2290))).f_T = l_SAVED_2306;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2287))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2287))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2287 = ((*(R21 *)rt_nil_check(l_ARM_2287))).f_NEXT;
}
RT_B_TICK();
} L_end2297: ;
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
{ R12 * rv2307 = NULL;
return rv2307; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2308 = NULL;
return rv2308; }
}
{
R12 * l_Y_2309; memset(&l_Y_2309, 0, sizeof l_Y_2309);
l_Y_2309 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2309 == NULL))
{
{ R12 * rv2310 = NULL;
return rv2310; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2309))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2311 = NULL;
return rv2311; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2309))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2312 = NULL;
return rv2312; }
}
{
R24 * l_F_2313; memset(&l_F_2313, 0, sizeof l_F_2313);
l_F_2313 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2309))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2313 == NULL))
{
{ R12 * rv2314 = NULL;
return rv2314; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2313))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2315 = NULL;
return rv2315; }
}
}
{ R12 * rv2316 = l_Y_2309;
return rv2316; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2317; memset(&l_N_2317, 0, sizeof l_N_2317);
l_N_2317 = r_COPY_TYP(p_T);
R24 * l_F_2318; memset(&l_F_2318, 0, sizeof l_F_2318);
l_F_2318 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2319; memset(&l_A_2319, 0, sizeof l_A_2319);
l_A_2319 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2320; memset(&l_HEAD_2320, 0, sizeof l_HEAD_2320);
l_HEAD_2320 = NULL;
R25 * l_TAIL_2321; memset(&l_TAIL_2321, 0, sizeof l_TAIL_2321);
l_TAIL_2321 = NULL;
for (;;) {
if ((l_F_2318 == NULL)) goto L_end2322;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2318))).f_KIND == ((rt_int)0LL))) && (!(l_A_2319 == NULL))))
{
{
R25 * l_B_2323; memset(&l_B_2323, 0, sizeof l_B_2323);
l_B_2323 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2323)), (*(R25 *)rt_nil_check(l_A_2319)), 0);
((*(R25 *)rt_nil_check(l_B_2323))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2318))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2323))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2323))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2323))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2321 == NULL))
{
l_HEAD_2320 = l_B_2323;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2321))).f_NEXT = l_B_2323;
}
l_TAIL_2321 = l_B_2323;
}
l_A_2319 = ((*(R25 *)rt_nil_check(l_A_2319))).f_NEXT;
}
l_F_2318 = ((*(R24 *)rt_nil_check(l_F_2318))).f_NEXT;
}
RT_B_TICK();
} L_end2322: ;
((*(R22 *)rt_nil_check(l_N_2317))).f_ARGS = l_HEAD_2320;
{ R22 * rv2324 = l_N_2317;
return rv2324; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2325; memset(&l_ARM_2325, 0, sizeof l_ARM_2325);
l_ARM_2325 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2326; memset(&l_SAVED_2326, 0, sizeof l_SAVED_2326);
l_SAVED_2326 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2325 == NULL)) goto L_end2327;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2325))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2325))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2325))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2326;
return;
}
l_ARM_2325 = ((*(R21 *)rt_nil_check(l_ARM_2325))).f_NEXT;
}
RT_B_TICK();
} L_end2327: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2326;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2328; memset(&l_T_2328, 0, sizeof l_T_2328);
l_T_2328 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2328))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2329 = l_T_2328;
return rv2329; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2330; memset(&l_TD_2330, 0, sizeof l_TD_2330);
S_R10(&l_TD_2330, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2331; memset(&l_P_2331, 0, sizeof l_P_2331);
l_P_2331 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2331 == NULL)) goto L_end2332;
{
{
R12 * l_Y_2333; memset(&l_Y_2333, 0, sizeof l_Y_2333);
l_Y_2333 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2331))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2333))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2333))).f_DECL = l_P_2331;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2333, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2333))).f_INPUT = 1;
r_DEFINE(l_Y_2333, ((*(R21 *)rt_nil_check(l_P_2331))).f_LINE);
}
l_P_2331 = ((*(R21 *)rt_nil_check(l_P_2331))).f_NEXT;
}
RT_B_TICK();
} L_end2332: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2330));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2330, l_TD_2330));
l_P_2331 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2331 == NULL)) goto L_end2334;
{
r_ACTIVATE_PATH(l_P_2331, l_TD_2330);
l_P_2331 = ((*(R21 *)rt_nil_check(l_P_2331))).f_NEXT;
}
RT_B_TICK();
} L_end2334: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2330, l_TD_2330, l_TD_2330));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2330));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2335; memset(&l_FN_2335, 0, sizeof l_FN_2335);
S_R10(&l_FN_2335, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2336; memset(&l_FT_2336, 0, sizeof l_FT_2336);
S_R10(&l_FT_2336, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2337; memset(&l_Y_2337, 0, sizeof l_Y_2337);
l_Y_2337 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2338; memset(&l_H_2338, 0, sizeof l_H_2338);
S_R10(&l_H_2338, r_OBJ_ACCESS(l_Y_2337), 0);
R10 l_IT_2339; memset(&l_IT_2339, 0, sizeof l_IT_2339);
S_R10(&l_IT_2339, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2340; memset(&l_PRIO_2340, 0, sizeof l_PRIO_2340);
S_R10(&l_PRIO_2340, r_MK(rt_str("0", 1)), 0);
R10 l_START_2341; memset(&l_START_2341, 0, sizeof l_START_2341);
R22 * l_LT_2342; memset(&l_LT_2342, 0, sizeof l_LT_2342);
l_LT_2342 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2336, l_FT_2336));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2340, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2343; memset(&l_R_2343, 0, sizeof l_R_2343);
l_R_2343 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2344; memset(&l_LV_2344, 0, sizeof l_LV_2344);
S_R26(&l_LV_2344, r_EXPR(((*(R21 *)rt_nil_check(l_R_2343))).f_A, NULL), 0);
R10 l_LO_2345; memset(&l_LO_2345, 0, sizeof l_LO_2345);
S_R10(&l_LO_2345, (l_LV_2344).f_C, 0);
R10 l_HI_2346; memset(&l_HI_2346, 0, sizeof l_HI_2346);
S_R10(&l_HI_2346, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2343))).f_B, (l_LV_2344).f_T)).f_C, 0);
R22 * l_RT_2347; memset(&l_RT_2347, 0, sizeof l_RT_2347);
l_RT_2347 = r_REAL_TYPE((l_LV_2344).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2347))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2347))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2342 = ((*(R22 *)rt_nil_check(l_RT_2347))).f_BASE;
S_R10(&l_HI_2346, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2343))).f_B, l_LT_2342)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2347))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2347))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2343))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2343))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2345, r_FMT1(rt_str("(@) + 1", 7), l_LO_2345), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2343))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2346, r_FMT1(rt_str("(@) - 1", 7), l_HI_2346), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2338, l_LO_2345, l_HI_2346));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2339, l_H_2338, l_IT_2339, l_H_2338), l_IT_2339));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2339));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2336, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2339));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2348; memset(&l_V_2348, 0, sizeof l_V_2348);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2349; memset(&l_I_2349, 0, sizeof l_I_2349);
l_I_2349 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2349))).f_T = l_LT_2342;
((*(R12 *)rt_nil_check(l_I_2349))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2349))).f_ACCESS, l_IT_2339, 0);
((*(R12 *)rt_nil_check(l_I_2349))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2349, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2348, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2348).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2348).f_C));
}
}
S_R10(&l_START_2341, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2338, l_IT_2339, l_FN_2335, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2341, p_TD, l_PRIO_2340, l_IT_2339));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2338));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2341, p_TD, l_PRIO_2340));
}
r_PATH_BODY(p_P, l_FN_2335, l_FT_2336, l_LT_2342);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2350 = r_MK(rt_str("NULL", 4));
return rv2350; }
}
{ R10 rv2351 = r_MK(rt_str("F", 1));
return rv2351; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2352; memset(&l_SAVED_CODE_2352, 0, sizeof l_SAVED_CODE_2352);
S_R14(&l_SAVED_CODE_2352, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2353; memset(&l_SAVED_CTXS_2353, 0, sizeof l_SAVED_CTXS_2353);
l_SAVED_CTXS_2353 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2354; memset(&l_OUTER_2354, 0, sizeof l_OUTER_2354);
l_OUTER_2354 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2355; memset(&l_H_2355, 0, sizeof l_H_2355);
l_H_2355 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2356; memset(&l_CS_2356, 0, sizeof l_CS_2356);
l_CS_2356 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_2357; memset(&l_UPT_2357, 0, sizeof l_UPT_2357);
S_R10(&l_UPT_2357, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2354))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2357, ((*(R18 *)rt_nil_check(l_OUTER_2354))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2356)), ({ R18 rc2358; memset(&rc2358, 0, sizeof rc2358);  rc2358.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2354))).f_LEVEL, ((rt_int)1LL)); rc2358.f_R = NULL; rc2358.f_FRAMED = 1; S_R10(&rc2358.f_FTYPE, p_FT, 0); S_R14(&rc2358.f_FIELDS, ({ R14 rc2359; memset(&rc2359, 0, sizeof rc2359);  rc2359.f_HEAD = NULL; rc2359.f_TAIL = NULL; rc2359; }), 0); rc2358.f_UP = l_OUTER_2354; rc2358.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2355))).f_B; rc2358.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2355))).f_A; rc2358.f_RESULT = NULL; rc2358.f_IS_PATH = 1; S_R10(&rc2358.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2358; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2357), &((*(R18 *)rt_nil_check(l_CS_2356))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2356;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2360; memset(&rc2360, 0, sizeof rc2360);  rc2360.f_HEAD = NULL; rc2360.f_TAIL = NULL; rc2360; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2355))).f_B, ((*(R21 *)rt_nil_check(l_H_2355))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2361; memset(&l_I_2361, 0, sizeof l_I_2361);
l_I_2361 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2361))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2361))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2361))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2361))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2356))).f_FIELDS);
r_DEFINE(l_I_2361, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2362; memset(&l_L_2362, 0, sizeof l_L_2362);
l_L_2362 = ((*(R21 *)rt_nil_check(l_H_2355))).f_A;
R10 l_C_2363; memset(&l_C_2363, 0, sizeof l_C_2363);
S_R10(&l_C_2363, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2362 == NULL)) goto L_end2364;
{
S_R10(&l_C_2363, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2363, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2362))).f_NAME)), 0);
l_L_2362 = ((*(R21 *)rt_nil_check(l_L_2362))).f_NEXT;
}
RT_B_TICK();
} L_end2364: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2363));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2356))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2354;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2352, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2353;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2365; memset(&l_C_2365, 0, sizeof l_C_2365);
l_C_2365 = (p_B).f_HEAD;
R10 l_R_2366; memset(&l_R_2366, 0, sizeof l_R_2366);
S_R10(&l_R_2366, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2365 == NULL)) goto L_end2367;
{
S_R10(&l_R_2366, r_CAT(l_R_2366, ((*(R15 *)rt_nil_check(l_C_2365))).f_T), 0);
l_C_2365 = ((*(R15 *)rt_nil_check(l_C_2365))).f_NEXT;
}
RT_B_TICK();
} L_end2367: ;
{ R10 rv2368 = l_R_2366;
return rv2368; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2369; memset(&l_NAME_2369, 0, sizeof l_NAME_2369);
S_R10(&l_NAME_2369, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2370; memset(&l_SUB_2370, 0, sizeof l_SUB_2370);
S_R10(&l_SUB_2370, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2370, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2371; memset(&l_Y_2371, 0, sizeof l_Y_2371);
l_Y_2371 = r_LOOKUP(l_NAME_2369);
if ((l_Y_2371 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2369);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2371))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2369);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2371))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2372 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2371), l_SUB_2370);
return rv2372; }
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
R10 l_NAME_2373; memset(&l_NAME_2373, 0, sizeof l_NAME_2373);
S_R10(&l_NAME_2373, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2374; memset(&l_LINE_2374, 0, sizeof l_LINE_2374);
l_LINE_2374 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2373, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2375; memset(&l_V_2375, 0, sizeof l_V_2375);
S_R26(&l_V_2375, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2375).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2374, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2376 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2375).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2375).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2376; }
}
}
else if (r_TEQS(l_NAME_2373, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2377 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2377; }
}
{ R26 rv2378 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2378; }
}
else if (r_TEQS(l_NAME_2373, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2379 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2379; }
}
{ R26 rv2380 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2380; }
}
else if ((r_TEQS(l_NAME_2373, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2373, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2374, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2373);
}
{
R26 l_V_2381; memset(&l_V_2381, 0, sizeof l_V_2381);
S_R26(&l_V_2381, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2381).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2374, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2381).f_LVAL))
{
r_FAIL(l_LINE_2374, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2373, rt_str("REQUEST", 7)))
{
{ R26 rv2382 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2381).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2382; }
}
{ R26 rv2383 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2381).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2383; }
}
}
else if (r_TEQS(l_NAME_2373, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2374);
{ R26 rv2384 = r_START_IO_CALL(p_E);
return rv2384; }
}
r_FAILT(l_LINE_2374, rt_str("unknown routine ", 16), l_NAME_2373);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2385; memset(&l_ARGS_2385, 0, sizeof l_ARGS_2385);
l_ARGS_2385 = r_CALL_ARGS(p_E);
R12 * l_Y_2386; memset(&l_Y_2386, 0, sizeof l_Y_2386);
l_Y_2386 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2385, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2387; memset(&l_R_2387, 0, sizeof l_R_2387);
if ((l_Y_2386 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2387, r_CALL_SYM(l_Y_2386, l_ARGS_2385, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2388 = l_R_2387;
return rv2388; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2389; memset(&l_I_2389, 0, sizeof l_I_2389);
l_I_2389 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2389)), ({ R19 rc2390; memset(&rc2390, 0, sizeof rc2390);  rc2390.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2390.f_IMPORTS = p_IMPORTS; rc2390.f_SIGNALS = p_SIGNALS; S_R10(&rc2390.f_NAME, p_NAME, 0); rc2390.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2390; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2389;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2391; memset(&l_BASE_2391, 0, sizeof l_BASE_2391);
S_R10(&l_BASE_2391, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2392; memset(&l_S_2392, 0, sizeof l_S_2392);
l_S_2392 = rt_str_new((l_BASE_2391).f_LEN);
rt_b_assign(&l_S_2392, r_STR(l_BASE_2391, (l_BASE_2391).f_LEN));
R21 * l_N_2393; memset(&l_N_2393, 0, sizeof l_N_2393);
l_N_2393 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2395_lo = ((rt_int)0LL), it2395_hi = rt_sub((l_BASE_2391).f_LEN, ((rt_int)1LL));
for (rt_int it2395 = it2395_lo; it2395 <= it2395_hi; it2395++) {
{
if (rt_b_eq(rt_b_slice(l_S_2392, it2395, it2395), rt_str("$", 1)))
{
S_R10(&l_BASE_2391, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_2392, ((rt_int)0LL), rt_sub(it2395, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2392, rt_add(it2395, ((rt_int)1LL)), rt_sub((l_BASE_2391).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2395 == it2395_hi) break;
} } L_end2394: ;
for (;;) {
if ((l_N_2393 == NULL)) goto L_end2396;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2393))).f_NAME, l_BASE_2391))
{
{ R10 rv2397 = r_FMT2(rt_str("@_@", 3), l_BASE_2391, r_NEW_NAME(rt_str("", 0)));
return rv2397; }
}
l_N_2393 = ((*(R21 *)rt_nil_check(l_N_2393))).f_NEXT;
}
RT_B_TICK();
} L_end2396: ;
l_N_2393 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2393))).f_NAME, l_BASE_2391, 0);
((*(R21 *)rt_nil_check(l_N_2393))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2393;
{ R10 rv2398 = l_BASE_2391;
return rv2398; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2399 = 0;
return rv2399; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2400 = 1;
return rv2400; }
}
{ rt_int rv2401 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2401; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2402; memset(&l_S_2402, 0, sizeof l_S_2402);
l_S_2402 = p_S0;
for (;;) {
if ((l_S_2402 == NULL)) goto L_end2403;
{
if (((((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_PAR)))
{
{ rt_int rv2404 = 1;
return rv2404; }
}
if (((((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2402))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2402))).f_B)))
{
{ rt_int rv2405 = 1;
return rv2405; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2402))).f_A))).f_B))
{
{ rt_int rv2406 = 1;
return rv2406; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2402))).f_B))).f_B))
{
{ rt_int rv2407 = 1;
return rv2407; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2408; memset(&l_A_2408, 0, sizeof l_A_2408);
l_A_2408 = ((*(R21 *)rt_nil_check(l_S_2402))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2402))).f_KIND == g_N_CASE))
{
l_A_2408 = ((*(R21 *)rt_nil_check(l_S_2402))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2402))).f_D == NULL)))
{
{ rt_int rv2409 = 1;
return rv2409; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2402))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2402))).f_C))).f_B))
{
{ rt_int rv2410 = 1;
return rv2410; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2402))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2402))).f_B))).f_B))
{
{ rt_int rv2411 = 1;
return rv2411; }
}
}
for (;;) {
if ((l_A_2408 == NULL)) goto L_end2412;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2408))).f_C == NULL)))
{
{ rt_int rv2413 = 1;
return rv2413; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2408))).f_B))).f_B))
{
{ rt_int rv2414 = 1;
return rv2414; }
}
l_A_2408 = ((*(R21 *)rt_nil_check(l_A_2408))).f_NEXT;
}
RT_B_TICK();
} L_end2412: ;
}
}
l_S_2402 = ((*(R21 *)rt_nil_check(l_S_2402))).f_NEXT;
}
RT_B_TICK();
} L_end2403: ;
{ rt_int rv2415 = 0;
return rv2415; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2416; memset(&l_Y_2416, 0, sizeof l_Y_2416);
l_Y_2416 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2417; memset(&l_S_2417, 0, sizeof l_S_2417);
l_S_2417 = rt_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2417, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2416))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2416))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2416))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2416))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2416, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2419_lo = ((rt_int)1LL), it2419_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2419 = it2419_lo; it2419 <= it2419_hi; it2419++) {
{
if (rt_b_eq(rt_b_slice(l_S_2417, it2419, it2419), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2416))).f_PREFIX, r_MKN(rt_b_slice(l_S_2417, ((rt_int)0LL), rt_sub(it2419, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2420; memset(&l_SHORT_2420, 0, sizeof l_SHORT_2420);
l_SHORT_2420 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2417, rt_add(it2419, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2420))).f_ORIG = l_Y_2416;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2420))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2416))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2420))).f_DECL = p_R;
r_DEFINE(l_SHORT_2420, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2418;
}
}
RT_B_TICK();
if (it2419 == it2419_hi) break;
} } L_end2418: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2421; memset(&l_R_2421, 0, sizeof l_R_2421);
l_R_2421 = p_RS;
for (;;) {
if ((l_R_2421 == NULL)) goto L_end2422;
{
if ((((*(R21 *)rt_nil_check(l_R_2421))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2421);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2421);
}
l_R_2421 = ((*(R21 *)rt_nil_check(l_R_2421))).f_NEXT;
}
RT_B_TICK();
} L_end2422: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2423; memset(&l_R_2423, 0, sizeof l_R_2423);
l_R_2423 = p_RS;
for (;;) {
if ((l_R_2423 == NULL)) goto L_end2424;
{
if ((((*(R21 *)rt_nil_check(l_R_2423))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2425; memset(&l_M_2425, 0, sizeof l_M_2425);
l_M_2425 = r_FIND_DECL(l_R_2423);
r_ENTER_MODULE(l_M_2425);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2423))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2425);
}
}
else
{
{
R12 * l_Y_2426; memset(&l_Y_2426, 0, sizeof l_Y_2426);
l_Y_2426 = r_FIND_DECL(l_R_2423);
r_ROUTINE_HEADER(l_Y_2426);
}
}
l_R_2423 = ((*(R21 *)rt_nil_check(l_R_2423))).f_NEXT;
}
RT_B_TICK();
} L_end2424: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2427; memset(&l_Y_2427, 0, sizeof l_Y_2427);
l_Y_2427 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2427 == NULL)) goto L_end2428;
{
if (((((*(R12 *)rt_nil_check(l_Y_2427))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2427))).f_ORIG == NULL)))
{
{ R12 * rv2429 = l_Y_2427;
return rv2429; }
}
l_Y_2427 = r_LOOKUP_NEXT(l_Y_2427);
}
RT_B_TICK();
} L_end2428: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2430; memset(&l_D_2430, 0, sizeof l_D_2430);
l_D_2430 = p_DECLS;
for (;;) {
if ((l_D_2430 == NULL)) goto L_end2431;
{
if (((((*(R21 *)rt_nil_check(l_D_2430))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2430))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2430))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2432; memset(&l_Y_2432, 0, sizeof l_Y_2432);
l_Y_2432 = r_FIND_DECL(l_D_2430);
R22 * l_T_2433; memset(&l_T_2433, 0, sizeof l_T_2433);
l_T_2433 = r_RESOLVE_USER(r_TYPE_REF(l_D_2430));
}
}
}
l_D_2430 = ((*(R21 *)rt_nil_check(l_D_2430))).f_NEXT;
}
RT_B_TICK();
} L_end2431: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2434; memset(&l_TS_2434, 0, sizeof l_TS_2434);
l_TS_2434 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2434))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2435 = l_TS_2434;
return rv2435; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2436; memset(&l_Y_2436, 0, sizeof l_Y_2436);
l_Y_2436 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2437; memset(&l_SAVED_2437, 0, sizeof l_SAVED_2437);
l_SAVED_2437 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2436))).f_DECL = p_M;
r_DEFINE(l_Y_2436, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2438; memset(&l_MARK_2438, 0, sizeof l_MARK_2438);
l_MARK_2438 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2436;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2436))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2438);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2437;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2436);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2439; memset(&l_Y_2439, 0, sizeof l_Y_2439);
l_Y_2439 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2439 == NULL)) goto L_end2440;
{
{
R12 * l_NEXT_2441; memset(&l_NEXT_2441, 0, sizeof l_NEXT_2441);
l_NEXT_2441 = ((*(R12 *)rt_nil_check(l_Y_2439))).f_SNEXT;
r_DEFINE(l_Y_2439, ((rt_int)0LL));
l_Y_2439 = l_NEXT_2441;
}
}
RT_B_TICK();
} L_end2440: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2442; memset(&l_MARK_2442, 0, sizeof l_MARK_2442);
l_MARK_2442 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2442 == NULL)) goto L_end2443;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2442))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2443;
}
l_MARK_2442 = ((*(R12 *)rt_nil_check(l_MARK_2442))).f_SNEXT;
}
RT_B_TICK();
} L_end2443: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2442);
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
{ rt_int rv2444 = 1;
return rv2444; }
}
}
{ rt_int rv2445 = 0;
return rv2445; }
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
R21 * l_D_2446; memset(&l_D_2446, 0, sizeof l_D_2446);
l_D_2446 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2447; memset(&l_Y_2447, 0, sizeof l_Y_2447);
l_Y_2447 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2447 == NULL)) goto L_end2448;
{
if (r_EXPORTED_BY(l_D_2446, l_Y_2447))
{
((*(R12 *)rt_nil_check(l_Y_2447))).f_EXPORTED = 1;
{
R12 * l_A_2449; memset(&l_A_2449, 0, sizeof l_A_2449);
l_A_2449 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2447))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2447))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2449)), (*(R12 *)rt_nil_check(l_Y_2447)), 0);
((*(R12 *)rt_nil_check(l_A_2449))).f_ORIG = r_ORIGINAL(l_Y_2447);
((*(R12 *)rt_nil_check(l_A_2449))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2449, ((*(R21 *)rt_nil_check(l_D_2446))).f_LINE);
}
}
l_Y_2447 = ((*(R12 *)rt_nil_check(l_Y_2447))).f_SNEXT;
}
RT_B_TICK();
} L_end2448: ;
{
R21 * l_X_2450; memset(&l_X_2450, 0, sizeof l_X_2450);
l_X_2450 = ((*(R21 *)rt_nil_check(l_D_2446))).f_B;
for (;;) {
if ((l_X_2450 == NULL)) goto L_end2451;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2450))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2450))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2450))).f_NAME);
}
l_X_2450 = ((*(R21 *)rt_nil_check(l_X_2450))).f_NEXT;
}
RT_B_TICK();
} L_end2451: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2452; memset(&l_Y_2452, 0, sizeof l_Y_2452);
l_Y_2452 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2452 == NULL)) goto L_end2453;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2452))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2452))).f_PREFIX, p_NAME)))
{
{ rt_int rv2454 = 1;
return rv2454; }
}
l_Y_2452 = ((*(R12 *)rt_nil_check(l_Y_2452))).f_SNEXT;
}
RT_B_TICK();
} L_end2453: ;
{ rt_int rv2455 = 0;
return rv2455; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2456; memset(&l_X_2456, 0, sizeof l_X_2456);
l_X_2456 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2457 = 0;
return rv2457; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2458 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2458; }
}
for (;;) {
if ((l_X_2456 == NULL)) goto L_end2459;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2456))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2460 = 1;
return rv2460; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2456))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2456))).f_A == NULL))
{
{ rt_int rv2461 = 1;
return rv2461; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2456))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2462 = 1;
return rv2462; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2463; memset(&l_T_2463, 0, sizeof l_T_2463);
l_T_2463 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2456))).f_NAME, p_Y);
if ((!(l_T_2463 == NULL)))
{
{ rt_int rv2464 = 1;
return rv2464; }
}
}
}
l_X_2456 = ((*(R21 *)rt_nil_check(l_X_2456))).f_NEXT;
}
RT_B_TICK();
} L_end2459: ;
{ rt_int rv2465 = 0;
return rv2465; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2466; memset(&l_M_2466, 0, sizeof l_M_2466);
l_M_2466 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2467; memset(&l_Z_2467, 0, sizeof l_Z_2467);
if ((l_M_2466 == NULL))
{
{ R12 * rv2468 = NULL;
return rv2468; }
}
l_Z_2467 = ((*(R12 *)rt_nil_check(l_M_2466))).f_MEMBERS;
for (;;) {
if ((l_Z_2467 == NULL)) goto L_end2469;
{
if (((((*(R12 *)rt_nil_check(l_Z_2467))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2467))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2467))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2467))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2467))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2470 = l_Z_2467;
return rv2470; }
}
}
}
}
l_Z_2467 = ((*(R12 *)rt_nil_check(l_Z_2467))).f_SNEXT;
}
RT_B_TICK();
} L_end2469: ;
{ R12 * rv2471 = NULL;
return rv2471; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2472; memset(&l_R_2472, 0, sizeof l_R_2472);
l_R_2472 = p_RS;
for (;;) {
if ((l_R_2472 == NULL)) goto L_end2473;
{
if ((((*(R21 *)rt_nil_check(l_R_2472))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2474; memset(&l_M_2474, 0, sizeof l_M_2474);
l_M_2474 = r_FIND_DECL(l_R_2472);
R21 * l_D_2475; memset(&l_D_2475, 0, sizeof l_D_2475);
l_D_2475 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2472))).f_C))).f_A;
r_ENTER_MODULE(l_M_2474);
for (;;) {
if ((l_D_2475 == NULL)) goto L_end2476;
{
if (((((*(R21 *)rt_nil_check(l_D_2475))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2475))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2475);
}
l_D_2475 = ((*(R21 *)rt_nil_check(l_D_2475))).f_NEXT;
}
RT_B_TICK();
} L_end2476: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2472))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2472))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2474);
}
}
l_R_2472 = ((*(R21 *)rt_nil_check(l_R_2472))).f_NEXT;
}
RT_B_TICK();
} L_end2473: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2477; memset(&l_R_2477, 0, sizeof l_R_2477);
l_R_2477 = p_RS;
for (;;) {
if ((l_R_2477 == NULL)) goto L_end2478;
{
if ((((*(R21 *)rt_nil_check(l_R_2477))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2479; memset(&l_M_2479, 0, sizeof l_M_2479);
l_M_2479 = r_FIND_DECL(l_R_2477);
r_ENTER_MODULE(l_M_2479);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2477))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2479);
}
}
else
{
{
R12 * l_Y_2480; memset(&l_Y_2480, 0, sizeof l_Y_2480);
l_Y_2480 = r_FIND_DECL(l_R_2477);
if ((!((*(R12 *)rt_nil_check(l_Y_2480))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2480);
}
}
}
l_R_2477 = ((*(R21 *)rt_nil_check(l_R_2477))).f_NEXT;
}
RT_B_TICK();
} L_end2478: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2481; memset(&l_LEVEL_2481, 0, sizeof l_LEVEL_2481);
l_LEVEL_2481 = r_CUR_LEVEL();
rt_int l_MORE_2482; memset(&l_MORE_2482, 0, sizeof l_MORE_2482);
l_MORE_2482 = 1;
for (;;) {
if ((!l_MORE_2482)) goto L_end2483;
{
l_MORE_2482 = 0;
{
R12 * l_P_2484; memset(&l_P_2484, 0, sizeof l_P_2484);
l_P_2484 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2485; memset(&l_PREV_2485, 0, sizeof l_PREV_2485);
l_PREV_2485 = NULL;
for (;;) {
if ((l_P_2484 == NULL)) goto L_end2486;
{
if ((((*(R12 *)rt_nil_check(l_P_2484))).f_LEVEL == l_LEVEL_2481))
{
if ((l_PREV_2485 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2484))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2485))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2484))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2484);
r_ROUTINE_BODY(l_P_2484);
r_LEAVE_MODULE_OF(l_P_2484);
l_MORE_2482 = 1;
goto L_end2486;
}
l_PREV_2485 = l_P_2484;
l_P_2484 = ((*(R12 *)rt_nil_check(l_P_2484))).f_MEMBERS;
}
RT_B_TICK();
} L_end2486: ;
}
}
RT_B_TICK();
} L_end2483: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2487; memset(&l_D_2487, 0, sizeof l_D_2487);
l_D_2487 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2488; memset(&l_S_2488, 0, sizeof l_S_2488);
l_S_2488 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2487 == NULL)) goto L_end2489;
{
if (((((*(R21 *)rt_nil_check(l_D_2487))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2487))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2487);
}
l_D_2487 = ((*(R21 *)rt_nil_check(l_D_2487))).f_NEXT;
}
RT_B_TICK();
} L_end2489: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2488 == NULL)) goto L_end2490;
{
r_STMT(l_S_2488);
l_S_2488 = ((*(R21 *)rt_nil_check(l_S_2488))).f_NEXT;
}
RT_B_TICK();
} L_end2490: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2491; memset(&l_R_2491, 0, sizeof l_R_2491);
l_R_2491 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2492; memset(&l_SAVED_CODE_2492, 0, sizeof l_SAVED_CODE_2492);
S_R14(&l_SAVED_CODE_2492, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2493; memset(&l_SAVED_CTXS_2493, 0, sizeof l_SAVED_CTXS_2493);
l_SAVED_CTXS_2493 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2494; memset(&l_SAVED_BINDS_2494, 0, sizeof l_SAVED_BINDS_2494);
l_SAVED_BINDS_2494 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2495; memset(&l_OUTER_2495, 0, sizeof l_OUTER_2495);
l_OUTER_2495 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2496; memset(&l_CS_2496, 0, sizeof l_CS_2496);
l_CS_2496 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2497; memset(&l_PROLOGUE_2497, 0, sizeof l_PROLOGUE_2497);
S_R10(&l_PROLOGUE_2497, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2496)), ({ R18 rc2498; memset(&rc2498, 0, sizeof rc2498);  rc2498.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2498.f_R = p_Y; rc2498.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2498.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2498.f_FIELDS, ({ R14 rc2499; memset(&rc2499, 0, sizeof rc2499);  rc2499.f_HEAD = NULL; rc2499.f_TAIL = NULL; rc2499; }), 0); rc2498.f_UP = l_OUTER_2495; rc2498.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2491))).f_E; rc2498.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2491))).f_D))).f_A; rc2498.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2498.f_IS_PATH = 0; S_R10(&rc2498.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2498; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2496))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2496))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2496))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2496))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2497, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2496))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2496))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2497, r_CATS(l_PROLOGUE_2497, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2496;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2500; memset(&rc2500, 0, sizeof rc2500);  rc2500.f_HEAD = NULL; rc2500.f_TAIL = NULL; rc2500; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2491))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2491))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2491))).f_LINE);
{
R28 * l_P_2501; memset(&l_P_2501, 0, sizeof l_P_2501);
l_P_2501 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2501 == NULL)) goto L_end2502;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2501))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2501))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2503; memset(&l_V_2503, 0, sizeof l_V_2503);
l_V_2503 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2501))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2503))).f_T = ((*(R28 *)rt_nil_check(l_P_2501))).f_T;
((*(R12 *)rt_nil_check(l_V_2503))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2501))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2503))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2501))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2503))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2503))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2501))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2496))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2501))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2496))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2497, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2497, r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2503))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2501))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2504; memset(&l_ARGA_2504, 0, sizeof l_ARGA_2504);
S_R10(&l_ARGA_2504, ((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2501))).f_T, l_ARGA_2504, ((*(R21 *)rt_nil_check(l_R_2491))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2503))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2501))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2496))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2497, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2497, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2501))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2501))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2497, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2497, ((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, l_ARGA_2504), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2501))).f_T))
{
S_R10(&l_PROLOGUE_2497, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2497, ((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2501))).f_T, l_ARGA_2504)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2496))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2496))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2501))).f_T, l_ARGA_2504, ((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS)), 0);
r_DEFINE(l_V_2503, ((*(R21 *)rt_nil_check(l_R_2491))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2503, ((*(R21 *)rt_nil_check(l_R_2491))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2501))).f_T, ((*(R12 *)rt_nil_check(l_V_2503))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2491))).f_LINE, 1);
}
}
}
}
l_P_2501 = ((*(R28 *)rt_nil_check(l_P_2501))).f_NEXT;
}
RT_B_TICK();
} L_end2502: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2491))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2491))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2491))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2496))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2496))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2497));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2496))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2496))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2495;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2492, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2493;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2494;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2505; memset(&l_B_2505, 0, sizeof l_B_2505);
l_B_2505 = p_BS;
for (;;) {
if ((l_B_2505 == NULL)) goto L_end2506;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2505))).f_T == NULL)))
{
{
R12 * l_Y_2507; memset(&l_Y_2507, 0, sizeof l_Y_2507);
l_Y_2507 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2505))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2507))).f_T = ((*(R20 *)rt_nil_check(l_B_2505))).f_T;
r_DEFINE(l_Y_2507, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2505))).f_HASMV)
{
{
R12 * l_Y_2508; memset(&l_Y_2508, 0, sizeof l_Y_2508);
l_Y_2508 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2505))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2508))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2508))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2508))).f_MV = ((*(R20 *)rt_nil_check(l_B_2505))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2508))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2505))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2508))).f_INPUT = 1;
r_DEFINE(l_Y_2508, p_LINE);
}
}
l_B_2505 = ((*(R20 *)rt_nil_check(l_B_2505))).f_NEXT;
}
RT_B_TICK();
} L_end2506: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2509; memset(&l_C_2509, 0, sizeof l_C_2509);
l_C_2509 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2509 == NULL)) goto L_end2510;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2509))).f_T), &(*p_DST));
l_C_2509 = ((*(R15 *)rt_nil_check(l_C_2509))).f_NEXT;
}
RT_B_TICK();
} L_end2510: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2511; memset(&l_U_2511, 0, sizeof l_U_2511);
l_U_2511 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2511 == NULL)) goto L_end2512;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2511))).f_NAME, p_NAME))
{
{ rt_int rv2513 = 1;
return rv2513; }
}
l_U_2511 = ((*(R21 *)rt_nil_check(l_U_2511))).f_NEXT;
}
RT_B_TICK();
} L_end2512: ;
{ rt_int rv2514 = 0;
return rv2514; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2515; memset(&l_U_2515, 0, sizeof l_U_2515);
l_U_2515 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2515 == NULL)) goto L_end2516;
{
{
R21 * l_T_2517; memset(&l_T_2517, 0, sizeof l_T_2517);
l_T_2517 = p_SEGS;
for (;;) {
if ((l_T_2517 == NULL)) goto L_end2518;
{
if ((((!(l_T_2517 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2517))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2517))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2515))).f_NAME)))
{
{ rt_int rv2519 = 0;
return rv2519; }
}
l_T_2517 = ((*(R21 *)rt_nil_check(l_T_2517))).f_NEXT;
}
RT_B_TICK();
} L_end2518: ;
}
l_U_2515 = ((*(R21 *)rt_nil_check(l_U_2515))).f_NEXT;
}
RT_B_TICK();
} L_end2516: ;
{ rt_int rv2520 = 1;
return rv2520; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2521; memset(&l_S_2521, 0, sizeof l_S_2521);
l_S_2521 = p_SEGS;
rt_int l_MAINS_2522; memset(&l_MAINS_2522, 0, sizeof l_MAINS_2522);
l_MAINS_2522 = ((rt_int)0LL);
R18 * l_ROOT_2523; memset(&l_ROOT_2523, 0, sizeof l_ROOT_2523);
l_ROOT_2523 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2523)), ({ R18 rc2524; memset(&rc2524, 0, sizeof rc2524);  rc2524.f_LEVEL = ((rt_int)0LL); rc2524.f_R = NULL; rc2524.f_FRAMED = 0; S_R10(&rc2524.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2524.f_FIELDS, ({ R14 rc2525; memset(&rc2525, 0, sizeof rc2525);  rc2525.f_HEAD = NULL; rc2525.f_TAIL = NULL; rc2525; }), 0); rc2524.f_UP = NULL; rc2524.f_IMPORTS = NULL; rc2524.f_SIGNALS = NULL; rc2524.f_RESULT = NULL; rc2524.f_IS_PATH = 0; S_R10(&rc2524.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2524; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2523;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2526; memset(&rc2526, 0, sizeof rc2526);  rc2526.f_HEAD = NULL; rc2526.f_TAIL = NULL; rc2526; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2521 = p_SEGS;
for (;;) {
if ((l_S_2521 == NULL)) goto L_end2528;
{
if ((((*(R21 *)rt_nil_check(l_S_2521))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2521, p_SEGS))
{
goto L_end2528;
}
}
l_S_2521 = ((*(R21 *)rt_nil_check(l_S_2521))).f_NEXT;
}
RT_B_TICK();
} L_end2528: ;
if ((l_S_2521 == NULL))
{
goto L_end2527;
}
((*(R21 *)rt_nil_check(l_S_2521))).f_D = l_S_2521;
l_MAINS_2522 = rt_add(l_MAINS_2522, ((*(R21 *)rt_nil_check(l_S_2521))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2521))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2521))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2521))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2521, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2521))).f_B);
r_SEGMENT_EXPORTS(l_S_2521);
}
RT_B_TICK();
} L_end2527: ;
l_S_2521 = p_SEGS;
for (;;) {
if ((l_S_2521 == NULL)) goto L_end2529;
{
if ((((*(R21 *)rt_nil_check(l_S_2521))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2521))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2521))).f_NAME);
}
l_S_2521 = ((*(R21 *)rt_nil_check(l_S_2521))).f_NEXT;
}
RT_B_TICK();
} L_end2529: ;
if ((!(l_MAINS_2522 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2530; memset(&l_X_2530, 0, sizeof l_X_2530);
l_X_2530 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2530 == NULL)) goto L_end2531;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2530))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2530))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2530))).f_NAME)));
l_X_2530 = ((*(R21 *)rt_nil_check(l_X_2530))).f_NEXT;
}
RT_B_TICK();
} L_end2531: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2532; memset(&l_M_2532, 0, sizeof l_M_2532);
l_M_2532 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2533 = 0;
return rv2533; }
}
for (;;) {
if ((l_M_2532 == NULL)) goto L_end2534;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2532))).f_NAME))
{
{ rt_int rv2535 = 1;
return rv2535; }
}
l_M_2532 = ((*(R12 *)rt_nil_check(l_M_2532))).f_MODL;
}
RT_B_TICK();
} L_end2534: ;
{ rt_int rv2536 = 0;
return rv2536; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2537; memset(&l_MARK_2537, 0, sizeof l_MARK_2537);
l_MARK_2537 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2538; memset(&l_TAKEN_2538, 0, sizeof l_TAKEN_2538);
for (;;) {
if ((l_MARK_2537 == NULL)) goto L_end2539;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2537))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2539;
}
l_MARK_2537 = ((*(R12 *)rt_nil_check(l_MARK_2537))).f_SNEXT;
}
RT_B_TICK();
} L_end2539: ;
l_TAKEN_2538 = r_TAKE_SCOPE(l_MARK_2537);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2538 == NULL)) goto L_end2540;
{
{
R12 * l_NEXT_2541; memset(&l_NEXT_2541, 0, sizeof l_NEXT_2541);
l_NEXT_2541 = ((*(R12 *)rt_nil_check(l_TAKEN_2538))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2538))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2538))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2538))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2538)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2538))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2538))))))
{
r_DEFINE(l_TAKEN_2538, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2538 = l_NEXT_2541;
}
}
RT_B_TICK();
} L_end2540: ;
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
