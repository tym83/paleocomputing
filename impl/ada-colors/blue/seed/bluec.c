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
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1104; };
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
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_LO_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_HI_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
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
if (r_TEQS(l_NAME_667, rt_str("CHAR_STR", 8)))
{
{
R21 * l_CS_677; memset(&l_CS_677, 0, sizeof l_CS_677);
l_CS_677 = r_NTH_ARG(p_TS, ((rt_int)1LL));
if (((((*(R21 *)rt_nil_check(l_CS_677))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_677))).f_KIND == g_N_DONTCARE)))
{
{ R22 * rv678 = l_T_668;
return rv678; }
}
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_CS_677))).f_NAME, rt_str("ASCII", 5))))
{
if ((!(((*(R22 *)rt_nil_check(r_ARG_TYPE(l_CS_677)))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
}
}
}
{ R22 * rv679 = l_T_668;
return rv679; }
}
else if (r_TEQS(l_NAME_667, rt_str("PTR", 3)))
{
l_T_668 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_668))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv680 = l_T_668;
return rv680; }
}
else if (r_TEQS(l_NAME_667, rt_str("SEMAPHORE", 9)))
{
l_T_668 = r_NEW_TYP(g_T_SEM);
{
R21 * l_U_681; memset(&l_U_681, 0, sizeof l_U_681);
l_U_681 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_681))).f_NAME, rt_str("REGION", 6)))
{
((*(R22 *)rt_nil_check(l_T_668))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_681))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R22 * rv682 = l_T_668;
return rv682; }
}
{ R22 * rv683 = NULL;
return rv683; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_684; memset(&l_M_684, 0, sizeof l_M_684);
S_R23(&l_M_684, r_MANIFEST(p_A), 0);
if ((!(l_M_684).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_str_cat(rt_str_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_685; memset(&l_SAVED_CODE_685, 0, sizeof l_SAVED_CODE_685);
S_R14(&l_SAVED_CODE_685, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_686; memset(&l_T_686, 0, sizeof l_T_686);
l_T_686 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_685, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_686)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_686))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_str_cat(rt_str_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_684).f_V < p_LO) || ((l_M_684).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_str_cat(rt_str_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv687 = l_M_684;
return rv687; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv688 = 0;
return rv688; }
}
{ rt_int rv689 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv689; }
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
R12 * l_Y_690; memset(&l_Y_690, 0, sizeof l_Y_690);
l_Y_690 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_690 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_690))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_690))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_690))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R21 * l_R_691; memset(&l_R_691, 0, sizeof l_R_691);
l_R_691 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R10 l_NAME_692; memset(&l_NAME_692, 0, sizeof l_NAME_692);
S_R10(&l_NAME_692, ((*(R21 *)rt_nil_check(l_R_691))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_691))).f_KIND == g_TS_GEN))
{
return;
}
if (r_TEQS(l_NAME_692, rt_str("ENUM_STD", 8)))
{
return;
}
if ((!((r_TEQS(l_NAME_692, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_692, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_692) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_692)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_692);
}
if ((((*(R21 *)rt_nil_check(l_R_691))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_692);
}
{
R23 l_N_693; memset(&l_N_693, 0, sizeof l_N_693);
S_R23(&l_N_693, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_691))).f_A), 0);
rt_int l_NL_694; memset(&l_NL_694, 0, sizeof l_NL_694);
l_NL_694 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_693).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_693).f_V > ((rt_int)64LL)) || ((l_N_693).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_692, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_691))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_693).f_V < r_BITS_FOR(l_NL_694)))
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
R21 * l_L_695; memset(&l_L_695, 0, sizeof l_L_695);
l_L_695 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_695 == NULL)) goto L_end696;
{
{
R21 * l_V_697; memset(&l_V_697, 0, sizeof l_V_697);
l_V_697 = ((*(R21 *)rt_nil_check(l_R_691))).f_B;
rt_int l_FOUND_698; memset(&l_FOUND_698, 0, sizeof l_FOUND_698);
l_FOUND_698 = ((rt_int)0LL);
for (;;) {
if ((l_V_697 == NULL)) goto L_end699;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_697))).f_NAME, ((*(R21 *)rt_nil_check(l_L_695))).f_NAME))
{
l_FOUND_698 = rt_add(l_FOUND_698, ((rt_int)1LL));
}
l_V_697 = ((*(R21 *)rt_nil_check(l_V_697))).f_NEXT;
}
RT_B_TICK();
} L_end699: ;
if ((!(l_FOUND_698 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_695))).f_NAME);
}
}
l_L_695 = ((*(R21 *)rt_nil_check(l_L_695))).f_NEXT;
}
RT_B_TICK();
} L_end696: ;
}
{
R21 * l_V_700; memset(&l_V_700, 0, sizeof l_V_700);
l_V_700 = ((*(R21 *)rt_nil_check(l_R_691))).f_B;
for (;;) {
if ((l_V_700 == NULL)) goto L_end701;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_700))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_700))).f_NAME);
}
{
R14 l_SAVED_CODE_702; memset(&l_SAVED_CODE_702, 0, sizeof l_SAVED_CODE_702);
S_R14(&l_SAVED_CODE_702, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_703; memset(&l_B_703, 0, sizeof l_B_703);
S_R26(&l_B_703, r_EXPR(((*(R21 *)rt_nil_check(l_V_700))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_702, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_703).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_703).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_703).f_T))).f_MLEN).f_V == (l_N_693).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_700))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_700))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_704; memset(&l_U_704, 0, sizeof l_U_704);
l_U_704 = ((*(R21 *)rt_nil_check(l_V_700))).f_NEXT;
for (;;) {
if ((l_U_704 == NULL)) goto L_end705;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_704))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_704))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_700))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_704))).f_NAME);
}
}
l_U_704 = ((*(R21 *)rt_nil_check(l_U_704))).f_NEXT;
}
RT_B_TICK();
} L_end705: ;
}
}
}
l_V_700 = ((*(R21 *)rt_nil_check(l_V_700))).f_NEXT;
}
RT_B_TICK();
} L_end701: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_706; memset(&l_B_706, 0, sizeof l_B_706);
l_B_706 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_706 == NULL)) goto L_end707;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_706))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_706))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_706))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc708; memset(&rc708, 0, sizeof rc708);  rc708.f_OK = ((*(R20 *)rt_nil_check(l_B_706))).f_HASMV; rc708.f_V = ((*(R20 *)rt_nil_check(l_B_706))).f_MV; rc708; }), 0);
return;
}
l_B_706 = ((*(R20 *)rt_nil_check(l_B_706))).f_NEXT;
}
RT_B_TICK();
} L_end707: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_709; memset(&l_C_709, 0, sizeof l_C_709);
R23 l_M_710; memset(&l_M_710, 0, sizeof l_M_710);
r_ATTR_VALUE(p_A, &l_C_709, &l_M_710);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_709, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_710, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_711; memset(&l_T_711, 0, sizeof l_T_711);
l_T_711 = r_NEW_TYP(g_T_ARR);
R21 * l_R_712; memset(&l_R_712, 0, sizeof l_R_712);
l_R_712 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_713; memset(&l_TAIL_713, 0, sizeof l_TAIL_713);
l_TAIL_713 = NULL;
for (;;) {
if ((l_R_712 == NULL)) goto L_end714;
{
{
R25 * l_B_715; memset(&l_B_715, 0, sizeof l_B_715);
l_B_715 = ((R25 *)rt_alloc(sizeof (R25)));
R26 l_LO_716; memset(&l_LO_716, 0, sizeof l_LO_716);
R26 l_HI_717; memset(&l_HI_717, 0, sizeof l_HI_717);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_712))).f_A))
{
S_R26(&l_LO_716, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_712))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_712))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_716, r_EXPR(((*(R21 *)rt_nil_check(l_R_712))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_712))).f_B))
{
S_R26(&l_HI_717, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_712))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_712))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_717, r_EXPR(((*(R21 *)rt_nil_check(l_R_712))).f_B, (l_LO_716).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_715)), ({ R25 rc718; memset(&rc718, 0, sizeof rc718);  S_R10(&rc718.f_LO, (l_LO_716).f_C, 0); S_R10(&rc718.f_HI, (l_HI_717).f_C, 0); S_R23(&rc718.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_712))).f_A), 0); S_R23(&rc718.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_712))).f_B), 0); rc718.f_ANYARG = 0; rc718.f_NEXT = NULL; rc718; }), 0);
if ((((*(R22 *)rt_nil_check((l_LO_716).f_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_715))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_712))).f_A, (l_LO_716).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_715))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_712))).f_B, (l_LO_716).f_T), 0);
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_716).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_712))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_713 == NULL))
{
((*(R22 *)rt_nil_check(l_T_711))).f_BOUNDS = l_B_715;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_713))).f_NEXT = l_B_715;
}
l_TAIL_713 = l_B_715;
((*(R22 *)rt_nil_check(l_T_711))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_711))).f_DIMS, ((rt_int)1LL));
}
l_R_712 = ((*(R21 *)rt_nil_check(l_R_712))).f_NEXT;
}
RT_B_TICK();
} L_end714: ;
((*(R22 *)rt_nil_check(l_T_711))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_711))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_711))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_711))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_711))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_711))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_711))).f_DIMS), 0);
{ R22 * rv719 = l_T_711;
return rv719; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_720; memset(&l_Y_720, 0, sizeof l_Y_720);
l_Y_720 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_721; memset(&l_B_721, 0, sizeof l_B_721);
l_B_721 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_721 == NULL)) goto L_end722;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_721))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_721))).f_T == NULL))))
{
{ R22 * rv723 = ((*(R20 *)rt_nil_check(l_B_721))).f_T;
return rv723; }
}
l_B_721 = ((*(R20 *)rt_nil_check(l_B_721))).f_NEXT;
}
RT_B_TICK();
} L_end722: ;
}
}
if ((l_Y_720 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_720))).f_KIND == g_Y_GEN))
{
{ R22 * rv724 = r_GEN_TYPE(p_TS);
return rv724; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_720))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_720))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv725 = ((*(R12 *)rt_nil_check(l_Y_720))).f_T;
return rv725; }
}
{
R21 * l_D_726; memset(&l_D_726, 0, sizeof l_D_726);
l_D_726 = ((*(R12 *)rt_nil_check(l_Y_720))).f_DECL;
R22 * l_T_727; memset(&l_T_727, 0, sizeof l_T_727);
if ((((*(R21 *)rt_nil_check(l_D_726))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_720))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_720))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_720))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_726))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_720))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_726))).f_B, r_RECORD_NAME(l_Y_720), l_Y_720, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_720))).f_T = r_RESOLVE_IN_DECL(l_Y_720, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_720))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_720))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_720))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_720))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_720))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_720))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_720))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_720))).f_BUSY = 0;
}
l_T_727 = ((*(R12 *)rt_nil_check(l_Y_720))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_726))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_727 = r_RECORD_INSTANCE(l_Y_720, p_TS);
}
else
{
l_T_727 = r_RESOLVE_IN_DECL(l_Y_720, p_TS);
}
}
{ R22 * rv728 = r_ABSTRACT_VIEW(l_Y_720, l_T_727);
return rv728; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_729; memset(&l_A_729, 0, sizeof l_A_729);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv730 = p_T;
return rv730; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv731 = p_T;
return rv731; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv732 = p_T;
return rv732; }
}
l_A_729 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_729))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_729))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_729))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_729))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_729))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv733 = l_A_729;
return rv733; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_734; memset(&l_P_734, 0, sizeof l_P_734);
l_P_734 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_734 == NULL)) goto L_end735;
{
if ((l_P_734 == p_M))
{
{ rt_int rv736 = 1;
return rv736; }
}
l_P_734 = ((*(R12 *)rt_nil_check(l_P_734))).f_MODL;
}
RT_B_TICK();
} L_end735: ;
{ rt_int rv737 = 0;
return rv737; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_738; memset(&l_D_738, 0, sizeof l_D_738);
l_D_738 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_739; memset(&l_T_739, 0, sizeof l_T_739);
if ((p_TS == NULL))
{
{ R22 * rv740 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_738))).f_B);
return rv740; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_738))).f_A, p_TS);
l_T_739 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_738))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv741 = l_T_739;
return rv741; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_742; memset(&l_F_742, 0, sizeof l_F_742);
l_F_742 = p_FORMALS;
R21 * l_A_743; memset(&l_A_743, 0, sizeof l_A_743);
l_A_743 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_742 == NULL)) goto L_end744;
{
{
R21 * l_N_745; memset(&l_N_745, 0, sizeof l_N_745);
l_N_745 = ((*(R21 *)rt_nil_check(l_F_742))).f_A;
for (;;) {
if ((l_N_745 == NULL)) goto L_end746;
{
if ((l_A_743 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_742))).f_B == NULL))
{
{
R12 * l_Y_747; memset(&l_Y_747, 0, sizeof l_Y_747);
l_Y_747 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_745))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_747))).f_T = r_ARG_TYPE(l_A_743);
r_DEFINE(l_Y_747, ((*(R21 *)rt_nil_check(l_A_743))).f_LINE);
}
}
else
{
{
R12 * l_Y_748; memset(&l_Y_748, 0, sizeof l_Y_748);
l_Y_748 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_745))).f_NAME);
R10 l_C_749; memset(&l_C_749, 0, sizeof l_C_749);
R23 l_M_750; memset(&l_M_750, 0, sizeof l_M_750);
((*(R12 *)rt_nil_check(l_Y_748))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_742))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_743))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_743))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_743))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_743))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_749, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_743))).f_NAME, (((*(R21 *)rt_nil_check(l_A_743))).f_NAME).f_LEN))), 0);
S_R23(&l_M_750, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_743, &l_C_749, &l_M_750);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_748))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_749))))
{
S_R10(&l_C_749, (r_EXPR(l_A_743, ((*(R12 *)rt_nil_check(l_Y_748))).f_T)).f_C, 0);
S_R23(&l_M_750, r_ENUM_MANIFEST(l_A_743, ((*(R12 *)rt_nil_check(l_Y_748))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_748))).f_ACCESS, l_C_749, 0);
((*(R12 *)rt_nil_check(l_Y_748))).f_HASMV = (l_M_750).f_OK;
((*(R12 *)rt_nil_check(l_Y_748))).f_MV = (l_M_750).f_V;
((*(R12 *)rt_nil_check(l_Y_748))).f_INPUT = 1;
r_DEFINE(l_Y_748, ((*(R21 *)rt_nil_check(l_A_743))).f_LINE);
}
}
l_A_743 = ((*(R21 *)rt_nil_check(l_A_743))).f_NEXT;
l_N_745 = ((*(R21 *)rt_nil_check(l_N_745))).f_NEXT;
}
RT_B_TICK();
} L_end746: ;
}
l_F_742 = ((*(R21 *)rt_nil_check(l_F_742))).f_NEXT;
}
RT_B_TICK();
} L_end744: ;
if ((!(l_A_743 == NULL)))
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
{ R10 rv751 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv751; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv752 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv752; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_753; memset(&l_K_753, 0, sizeof l_K_753);
l_K_753 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv754 = r_MK(rt_str("rt_int", 6));
return rv754; }
}
else if ((l_K_753 == g_T_FLOAT))
{
{ R10 rv755 = r_MK(rt_str("double", 6));
return rv755; }
}
else if (((l_K_753 == g_T_STR) || (l_K_753 == g_T_BITS)))
{
{ R10 rv756 = r_MK(rt_str("rstr", 4));
return rv756; }
}
else if (((l_K_753 == g_T_REC) || (l_K_753 == g_T_ARR)))
{
{ R10 rv757 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv757; }
}
else if ((l_K_753 == g_T_ABS))
{
{ R10 rv758 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv758; }
}
else if ((l_K_753 == g_T_SEM))
{
{ R10 rv759 = r_MK(rt_str("rt_b_sem *", 10));
return rv759; }
}
else if ((l_K_753 == g_T_PATHS))
{
{ R10 rv760 = r_MK(rt_str("rt_b_paths", 10));
return rv760; }
}
else if ((l_K_753 == g_T_VOID))
{
{ R10 rv761 = r_MK(rt_str("void", 4));
return rv761; }
}
else if ((l_K_753 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_762; memset(&l_TT_762, 0, sizeof l_TT_762);
l_TT_762 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_762))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_762))).f_A == NULL)))
{
{
R12 * l_Y_763; memset(&l_Y_763, 0, sizeof l_Y_763);
l_Y_763 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_762))).f_NAME);
if ((!(l_Y_763 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_763))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_763))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_763))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_763))).f_DECL))).f_A == NULL)))
{
{ R10 rv764 = r_CATS(r_RECORD_NAME(l_Y_763), rt_str(" *", 2));
return rv764; }
}
}
}
}
}
}
}
{ R10 rv765 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv765; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv766 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv766; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_767; memset(&l_F_767, 0, sizeof l_F_767);
l_F_767 = ((R24 *)rt_alloc(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_767)), ({ R24 rc768; memset(&rc768, 0, sizeof rc768);  S_R10(&rc768.f_NAME, p_NAME, 0); S_R10(&rc768.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc768.f_T = p_T; rc768.f_KIND = p_KIND; S_R10(&rc768.f_TAGF, r_NO_TEXT(), 0); rc768.f_LABELS = NULL; rc768.f_NEXT = NULL; rc768; }), 0);
{ R24 * rv769 = l_F_767;
return rv769; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_770; memset(&l_F_770, 0, sizeof l_F_770);
l_F_770 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_770 == NULL)) goto L_end771;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_770))).f_NAME, p_NAME))
{
{ R24 * rv772 = l_F_770;
return rv772; }
}
l_F_770 = ((*(R24 *)rt_nil_check(l_F_770))).f_NEXT;
}
RT_B_TICK();
} L_end771: ;
{ R24 * rv773 = NULL;
return rv773; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_774; memset(&l_F_774, 0, sizeof l_F_774);
l_F_774 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_775; memset(&l_FIRST_775, 0, sizeof l_FIRST_775);
l_FIRST_775 = NULL;
for (;;) {
if ((l_F_774 == NULL)) goto L_end776;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_774))).f_NAME, p_NAME))
{
if ((l_FIRST_775 == NULL))
{
l_FIRST_775 = l_F_774;
}
if (((((*(R24 *)rt_nil_check(l_F_774))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv777 = l_F_774;
return rv777; }
}
{
R23 l_TAGV_778; memset(&l_TAGV_778, 0, sizeof l_TAGV_778);
S_R23(&l_TAGV_778, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_774))).f_TAGF), 0);
if ((l_TAGV_778).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_774))).f_LABELS, (l_TAGV_778).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_774))).f_TAGF)))).f_T))
{
{ R24 * rv779 = l_F_774;
return rv779; }
}
}
}
}
l_F_774 = ((*(R24 *)rt_nil_check(l_F_774))).f_NEXT;
}
RT_B_TICK();
} L_end776: ;
{ R24 * rv780 = l_FIRST_775;
return rv780; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_781; memset(&l_P_781, 0, sizeof l_P_781);
l_P_781 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_782; memset(&l_N_782, 0, sizeof l_N_782);
l_N_782 = ((rt_int)0LL);
for (;;) {
if ((l_P_781 == NULL)) goto L_end783;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_781))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
l_N_782 = rt_add(l_N_782, ((rt_int)1LL));
}
l_P_781 = ((*(R24 *)rt_nil_check(l_P_781))).f_NEXT;
}
RT_B_TICK();
} L_end783: ;
if ((l_N_782 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_782)), 0);
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
R21 * l_D_784; memset(&l_D_784, 0, sizeof l_D_784);
l_D_784 = p_DECLS;
for (;;) {
if ((l_D_784 == NULL)) goto L_end785;
{
if ((((*(R21 *)rt_nil_check(l_D_784))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_786; memset(&l_FT_786, 0, sizeof l_FT_786);
l_FT_786 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_784))).f_B);
R21 * l_N_787; memset(&l_N_787, 0, sizeof l_N_787);
l_N_787 = ((*(R21 *)rt_nil_check(l_D_784))).f_A;
for (;;) {
if ((l_N_787 == NULL)) goto L_end788;
{
{
R24 * l_F_789; memset(&l_F_789, 0, sizeof l_F_789);
l_F_789 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_787))).f_NAME, l_FT_786, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_789))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_789))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_789, &(*p_TAIL));
}
l_N_787 = ((*(R21 *)rt_nil_check(l_N_787))).f_NEXT;
}
RT_B_TICK();
} L_end788: ;
}
}
else
{
{
R24 * l_TF_790; memset(&l_TF_790, 0, sizeof l_TF_790);
l_TF_790 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_784))).f_NAME);
R21 * l_S_791; memset(&l_S_791, 0, sizeof l_S_791);
l_S_791 = ((*(R21 *)rt_nil_check(l_D_784))).f_A;
if ((l_TF_790 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_784))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_784))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_790))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_784))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_784))).f_NAME);
}
for (;;) {
if ((l_S_791 == NULL)) goto L_end792;
{
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_791))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_784))).f_NAME), ((*(R21 *)rt_nil_check(l_S_791))).f_A, &(*p_TAIL));
l_S_791 = ((*(R21 *)rt_nil_check(l_S_791))).f_NEXT;
}
RT_B_TICK();
} L_end792: ;
}
}
l_D_784 = ((*(R21 *)rt_nil_check(l_D_784))).f_NEXT;
}
RT_B_TICK();
} L_end785: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_793; memset(&l_T_793, 0, sizeof l_T_793);
l_T_793 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_794; memset(&l_TAIL_794, 0, sizeof l_TAIL_794);
l_TAIL_794 = NULL;
((*(R22 *)rt_nil_check(l_T_793))).f_BASE = l_T_793;
((*(R22 *)rt_nil_check(l_T_793))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_793))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_793))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_793))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_793))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_793))).f_CNAME));
}
{
R21 * l_F_795; memset(&l_F_795, 0, sizeof l_F_795);
l_F_795 = p_FORMALS;
for (;;) {
if ((l_F_795 == NULL)) goto L_end796;
{
if ((!(((*(R21 *)rt_nil_check(l_F_795))).f_B == NULL)))
{
{
R22 * l_FT_797; memset(&l_FT_797, 0, sizeof l_FT_797);
l_FT_797 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_795))).f_B);
R21 * l_N_798; memset(&l_N_798, 0, sizeof l_N_798);
l_N_798 = ((*(R21 *)rt_nil_check(l_F_795))).f_A;
rt_int l_KIND_799; memset(&l_KIND_799, 0, sizeof l_KIND_799);
l_KIND_799 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_795))).f_IV == ((rt_int)1LL)))
{
l_KIND_799 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_797))) || (!(((*(R22 *)rt_nil_check(l_FT_797))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_795))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_798 == NULL)) goto L_end800;
{
r_ADD_FIELD(l_T_793, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_798))).f_NAME, l_FT_797, l_KIND_799), &l_TAIL_794);
l_N_798 = ((*(R21 *)rt_nil_check(l_N_798))).f_NEXT;
}
RT_B_TICK();
} L_end800: ;
}
}
l_F_795 = ((*(R21 *)rt_nil_check(l_F_795))).f_NEXT;
}
RT_B_TICK();
} L_end796: ;
}
r_RECORD_FIELDS(l_T_793, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_794);
r_COMPLETE_RECORD(l_T_793);
{ R22 * rv801 = l_T_793;
return rv801; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_802; memset(&l_D_802, 0, sizeof l_D_802);
l_D_802 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_803; memset(&l_CLASS_803, 0, sizeof l_CLASS_803);
l_CLASS_803 = NULL;
R20 * l_TARGS_804; memset(&l_TARGS_804, 0, sizeof l_TARGS_804);
l_TARGS_804 = NULL;
R25 * l_VARGS_805; memset(&l_VARGS_805, 0, sizeof l_VARGS_805);
l_VARGS_805 = NULL;
R25 * l_VTAIL_806; memset(&l_VTAIL_806, 0, sizeof l_VTAIL_806);
l_VTAIL_806 = NULL;
R21 * l_A_807; memset(&l_A_807, 0, sizeof l_A_807);
l_A_807 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_808; memset(&l_F_808, 0, sizeof l_F_808);
l_F_808 = ((*(R21 *)rt_nil_check(l_D_802))).f_A;
for (;;) {
if ((l_F_808 == NULL)) goto L_end809;
{
{
R21 * l_N_810; memset(&l_N_810, 0, sizeof l_N_810);
l_N_810 = ((*(R21 *)rt_nil_check(l_F_808))).f_A;
for (;;) {
if ((l_N_810 == NULL)) goto L_end811;
{
if ((l_A_807 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_808))).f_B == NULL))
{
{
R20 * l_B_812; memset(&l_B_812, 0, sizeof l_B_812);
l_B_812 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_812)), ({ R20 rc813; memset(&rc813, 0, sizeof rc813);  S_R10(&rc813.f_NAME, ((*(R21 *)rt_nil_check(l_N_810))).f_NAME, 0); rc813.f_T = r_ARG_TYPE(l_A_807); S_R10(&rc813.f_C, r_NO_TEXT(), 0); rc813.f_HASMV = 0; rc813.f_MV = ((rt_int)0LL); rc813.f_R = NULL; rc813.f_NEXT = l_TARGS_804; rc813; }), 0);
l_TARGS_804 = l_B_812;
}
}
else
{
{
R25 * l_V_814; memset(&l_V_814, 0, sizeof l_V_814);
l_V_814 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_814)), ({ R25 rc815; memset(&rc815, 0, sizeof rc815);  S_R10(&rc815.f_LO, r_NO_TEXT(), 0); S_R10(&rc815.f_HI, r_NO_TEXT(), 0); S_R23(&rc815.f_MLO, r_NO_MVAL(), 0); S_R23(&rc815.f_MHI, r_NO_MVAL(), 0); rc815.f_ANYARG = 0; rc815.f_NEXT = NULL; rc815; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_807))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_808))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_807))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_814))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_807))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_814))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_814))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_807))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_814))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_814))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_807))).f_NAME, (((*(R21 *)rt_nil_check(l_A_807))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_816; memset(&l_FT_816, 0, sizeof l_FT_816);
l_FT_816 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_808))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_814))).f_LO, (r_EXPR(l_A_807, l_FT_816)).f_C, 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_814))).f_MLO, r_ENUM_MANIFEST(l_A_807, l_FT_816), 0);
if (((((*(R21 *)rt_nil_check(l_F_808))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_814))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_807))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_806 == NULL))
{
l_VARGS_805 = l_V_814;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_806))).f_NEXT = l_V_814;
}
l_VTAIL_806 = l_V_814;
}
}
l_A_807 = ((*(R21 *)rt_nil_check(l_A_807))).f_NEXT;
l_N_810 = ((*(R21 *)rt_nil_check(l_N_810))).f_NEXT;
}
RT_B_TICK();
} L_end811: ;
}
l_F_808 = ((*(R21 *)rt_nil_check(l_F_808))).f_NEXT;
}
RT_B_TICK();
} L_end809: ;
if ((!(l_A_807 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_817; memset(&l_R_817, 0, sizeof l_R_817);
l_R_817 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_817 == NULL)) goto L_end818;
{
if (((((*(R12 *)rt_nil_check(l_R_817))).f_DECL == l_D_802) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_817))).f_BINDINGS, l_TARGS_804)))
{
l_CLASS_803 = ((*(R12 *)rt_nil_check(l_R_817))).f_T;
goto L_end818;
}
l_R_817 = ((*(R12 *)rt_nil_check(l_R_817))).f_INSTANCES;
}
RT_B_TICK();
} L_end818: ;
}
if ((l_CLASS_803 == NULL))
{
{
R12 * l_R_819; memset(&l_R_819, 0, sizeof l_R_819);
l_R_819 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_820; memset(&l_B_820, 0, sizeof l_B_820);
l_B_820 = l_TARGS_804;
R20 * l_SAVED_821; memset(&l_SAVED_821, 0, sizeof l_SAVED_821);
l_SAVED_821 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_822; memset(&l_ENTERED_822, 0, sizeof l_ENTERED_822);
((*(R12 *)rt_nil_check(l_R_819))).f_DECL = l_D_802;
((*(R12 *)rt_nil_check(l_R_819))).f_BINDINGS = l_TARGS_804;
((*(R12 *)rt_nil_check(l_R_819))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_819;
l_ENTERED_822 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_820 == NULL)) goto L_end823;
{
{
R12 * l_TY_824; memset(&l_TY_824, 0, sizeof l_TY_824);
l_TY_824 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_820))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_824))).f_T = ((*(R20 *)rt_nil_check(l_B_820))).f_T;
r_DEFINE(l_TY_824, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_820 = ((*(R20 *)rt_nil_check(l_B_820))).f_NEXT;
}
RT_B_TICK();
} L_end823: ;
l_F_808 = ((*(R21 *)rt_nil_check(l_D_802))).f_A;
for (;;) {
if ((l_F_808 == NULL)) goto L_end825;
{
if ((!(((*(R21 *)rt_nil_check(l_F_808))).f_B == NULL)))
{
{
R21 * l_N_826; memset(&l_N_826, 0, sizeof l_N_826);
l_N_826 = ((*(R21 *)rt_nil_check(l_F_808))).f_A;
for (;;) {
if ((l_N_826 == NULL)) goto L_end827;
{
{
R12 * l_P_828; memset(&l_P_828, 0, sizeof l_P_828);
l_P_828 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_826))).f_NAME);
((*(R12 *)rt_nil_check(l_P_828))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_808))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_828))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_826))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_828))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_828))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_828, ((*(R21 *)rt_nil_check(l_F_808))).f_LINE);
}
l_N_826 = ((*(R21 *)rt_nil_check(l_N_826))).f_NEXT;
}
RT_B_TICK();
} L_end827: ;
}
}
l_F_808 = ((*(R21 *)rt_nil_check(l_F_808))).f_NEXT;
}
RT_B_TICK();
} L_end825: ;
if ((l_TARGS_804 == NULL))
{
l_CLASS_803 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_802))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_802))).f_A);
}
else
{
l_CLASS_803 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_802))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_802))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_803))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_819))).f_T = l_CLASS_803;
r_CLOSE_SCOPE();
if (l_ENTERED_822)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_821;
}
}
{
R22 * l_T_829; memset(&l_T_829, 0, sizeof l_T_829);
l_T_829 = r_COPY_TYP(l_CLASS_803);
((*(R22 *)rt_nil_check(l_T_829))).f_ARGS = l_VARGS_805;
{ R22 * rv830 = l_T_829;
return rv830; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_831; memset(&l_P_831, 0, sizeof l_P_831);
l_P_831 = p_A;
R20 * l_Q_832; memset(&l_Q_832, 0, sizeof l_Q_832);
l_Q_832 = p_B;
for (;;) {
if (((l_P_831 == NULL) || (l_Q_832 == NULL))) goto L_end833;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_831))).f_T, ((*(R20 *)rt_nil_check(l_Q_832))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_831))).f_T, ((*(R20 *)rt_nil_check(l_Q_832))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_831))).f_T, ((*(R20 *)rt_nil_check(l_Q_832))).f_T))))
{
{ rt_int rv834 = 0;
return rv834; }
}
l_P_831 = ((*(R20 *)rt_nil_check(l_P_831))).f_NEXT;
l_Q_832 = ((*(R20 *)rt_nil_check(l_Q_832))).f_NEXT;
}
RT_B_TICK();
} L_end833: ;
{ rt_int rv835 = ((l_P_831 == NULL) && (l_Q_832 == NULL));
return rv835; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_836; memset(&l_A_836, 0, sizeof l_A_836);
l_A_836 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_836 == NULL)) goto L_end837;
{
if (((*(R25 *)rt_nil_check(l_A_836))).f_ANYARG)
{
{ rt_int rv838 = 1;
return rv838; }
}
l_A_836 = ((*(R25 *)rt_nil_check(l_A_836))).f_NEXT;
}
RT_B_TICK();
} L_end837: ;
{ rt_int rv839 = 0;
return rv839; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_840; memset(&l_L_840, 0, sizeof l_L_840);
l_L_840 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_841; memset(&l_C_841, 0, sizeof l_C_841);
S_R10(&l_C_841, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_842; memset(&l_TF_842, 0, sizeof l_TF_842);
l_TF_842 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_840 == NULL)) goto L_end843;
{
if ((((*(R21 *)rt_nil_check(l_L_840))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_841, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_841, p_SELF, ((*(R24 *)rt_nil_check(l_TF_842))).f_CNAME), 0);
S_R10(&l_C_841, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_841, (r_EXPR(((*(R21 *)rt_nil_check(l_L_840))).f_A, ((*(R24 *)rt_nil_check(l_TF_842))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_842))).f_CNAME), 0);
S_R10(&l_C_841, r_FMT2(rt_str("@@)", 3), l_C_841, (r_EXPR(((*(R21 *)rt_nil_check(l_L_840))).f_B, ((*(R24 *)rt_nil_check(l_TF_842))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_841, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_841, p_SELF, ((*(R24 *)rt_nil_check(l_TF_842))).f_CNAME, (r_EXPR(l_L_840, ((*(R24 *)rt_nil_check(l_TF_842))).f_T)).f_C), 0);
}
l_L_840 = ((*(R21 *)rt_nil_check(l_L_840))).f_NEXT;
}
RT_B_TICK();
} L_end843: ;
{ R10 rv844 = r_FMT1(rt_str("(@)", 3), l_C_841);
return rv844; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_845; memset(&l_C_845, 0, sizeof l_C_845);
S_R10(&l_C_845, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_846; memset(&l_F_846, 0, sizeof l_F_846);
l_F_846 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_847; memset(&l_BODY_847, 0, sizeof l_BODY_847);
S_R10(&l_BODY_847, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_848; memset(&l_ASSIGN_848, 0, sizeof l_ASSIGN_848);
S_R10(&l_ASSIGN_848, r_MK(rt_str("", 0)), 0);
R10 l_COPY_849; memset(&l_COPY_849, 0, sizeof l_COPY_849);
S_R10(&l_COPY_849, r_MK(rt_str("", 0)), 0);
R10 l_EQ_850; memset(&l_EQ_850, 0, sizeof l_EQ_850);
S_R10(&l_EQ_850, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_846 == NULL)) goto L_end851;
{
S_R10(&l_BODY_847, r_FMT3(rt_str("@ @ @;", 6), l_BODY_847, r_CTYPE(((*(R24 *)rt_nil_check(l_F_846))).f_T), ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME), 0);
S_R10(&l_COPY_849, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_849, ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_846))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_846))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_848, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_848, ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_846))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_848, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_848, ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_848, r_FMT2(rt_str("@ @", 3), l_ASSIGN_848, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_846))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_846))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_850, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_850, r_VARIANT_COND(l_F_846, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_846))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_850, r_FMT2(rt_str("@ && @", 6), l_EQ_850, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_846))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_846))).f_CNAME))), 0);
}
l_F_846 = ((*(R24 *)rt_nil_check(l_F_846))).f_NEXT;
}
RT_B_TICK();
} L_end851: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_845, l_BODY_847));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_845, l_C_845, l_C_845));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_845, l_C_845, l_C_845));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_845, l_C_845, l_C_845, l_ASSIGN_848));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_845, l_C_845, l_C_845, l_EQ_850));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_845, l_C_845, l_C_845));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_845, l_C_845, l_C_845, l_C_845));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_849));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_852; memset(&l_ET_C_852, 0, sizeof l_ET_C_852);
S_R10(&l_ET_C_852, r_CTYPE(p_ELEM), 0);
R10 l_KEY_853; memset(&l_KEY_853, 0, sizeof l_KEY_853);
S_R10(&l_KEY_853, r_FMT3(rt_str("@/@/@", 5), l_ET_C_852, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_854; memset(&l_Y_854, 0, sizeof l_Y_854);
l_Y_854 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_854 == NULL)) goto L_end855;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_854))).f_NAME, l_KEY_853) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_854))).f_T, p_ELEM)))
{
{ R10 rv856 = ((*(R12 *)rt_nil_check(l_Y_854))).f_ACCESS;
return rv856; }
}
l_Y_854 = ((*(R12 *)rt_nil_check(l_Y_854))).f_INSTANCES;
}
RT_B_TICK();
} L_end855: ;
l_Y_854 = r_NEW_SYM(g_Y_TYPE, l_KEY_853);
((*(R12 *)rt_nil_check(l_Y_854))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_854))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_854))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_854;
{
R10 l_C_857; memset(&l_C_857, 0, sizeof l_C_857);
S_R10(&l_C_857, ((*(R12 *)rt_nil_check(l_Y_854))).f_ACCESS, 0);
R10 l_D_858; memset(&l_D_858, 0, sizeof l_D_858);
S_R10(&l_D_858, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_857, l_C_857));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_857, l_D_858, l_D_858, l_ET_C_852));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_857, l_C_857, l_C_857));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_857, l_C_857, l_C_857));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_857, l_C_857, l_C_857, l_D_858));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_858, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_857, l_C_857, l_C_857, l_D_858));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_858, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_857, l_C_857, l_C_857));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_857, l_C_857, l_C_857, l_C_857));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_858, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv859 = ((*(R12 *)rt_nil_check(l_Y_854))).f_ACCESS;
return rv859; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_860; memset(&l_K_860, 0, sizeof l_K_860);
l_K_860 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_860 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv861 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv861; }
}
{ R10 rv862 = r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv862; }
}
else if ((l_K_860 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv863 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv863; }
}
{ R10 rv864 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv864; }
}
else if ((l_K_860 == g_T_SEM))
{
{ R10 rv865 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv865; }
}
else if ((l_K_860 == g_T_ABS))
{
{ R10 rv866 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv866; }
}
else if ((l_K_860 == g_T_ARR))
{
{
R25 * l_B_867; memset(&l_B_867, 0, sizeof l_B_867);
l_B_867 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_868; memset(&l_I_868, 0, sizeof l_I_868);
l_I_868 = ((rt_int)0LL);
R10 l_R_869; memset(&l_R_869, 0, sizeof l_R_869);
S_R10(&l_R_869, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_867 == NULL)) goto L_end870;
{
S_R10(&l_R_869, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_869, p_LV, r_NUM(l_I_868), ((*(R25 *)rt_nil_check(l_B_867))).f_LO), 0);
S_R10(&l_R_869, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_869, p_LV, r_NUM(l_I_868), ((*(R25 *)rt_nil_check(l_B_867))).f_HI), 0);
l_I_868 = rt_add(l_I_868, ((rt_int)1LL));
l_B_867 = ((*(R25 *)rt_nil_check(l_B_867))).f_NEXT;
}
RT_B_TICK();
} L_end870: ;
S_R10(&l_R_869, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_869, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_869, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_869, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_871; memset(&l_IV_871, 0, sizeof l_IV_871);
S_R10(&l_IV_871, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_869, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_869, l_IV_871, l_IV_871, l_IV_871), 0);
S_R10(&l_R_869, r_FMT2(rt_str("@ @ }", 5), l_R_869, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_871))), 0);
}
}
{ R10 rv872 = r_CATS(l_R_869, rt_str(" }", 2));
return rv872; }
}
}
else if ((l_K_860 == g_T_REC))
{
{
R24 * l_F_873; memset(&l_F_873, 0, sizeof l_F_873);
l_F_873 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_874; memset(&l_A_874, 0, sizeof l_A_874);
l_A_874 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_875; memset(&l_R_875, 0, sizeof l_R_875);
S_R10(&l_R_875, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_873 == NULL)) goto L_end876;
{
if ((!(((*(R24 *)rt_nil_check(l_F_873))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_874 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_874))).f_ANYARG))
{
S_R10(&l_R_875, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_875, p_LV, ((*(R24 *)rt_nil_check(l_F_873))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_874))).f_LO), 0);
}
l_A_874 = ((*(R25 *)rt_nil_check(l_A_874))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_873))).f_T))
{
S_R10(&l_R_875, r_FMT2(rt_str("@ @", 3), l_R_875, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_873))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_873))).f_CNAME)), p_LV)), 0);
}
l_F_873 = ((*(R24 *)rt_nil_check(l_F_873))).f_NEXT;
}
RT_B_TICK();
} L_end876: ;
{ R10 rv877 = l_R_875;
return rv877; }
}
}
{ R10 rv878 = r_NO_TEXT();
return rv878; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_879; memset(&l_K_879, 0, sizeof l_K_879);
l_K_879 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_879 == g_T_STR) || (l_K_879 == g_T_BITS)) || (l_K_879 == g_T_ARR)) || (l_K_879 == g_T_SEM)))
{
{ rt_int rv880 = 1;
return rv880; }
}
else if ((l_K_879 == g_T_ABS))
{
{ rt_int rv881 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv881; }
}
else if ((l_K_879 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv882 = 1;
return rv882; }
}
{
R24 * l_F_883; memset(&l_F_883, 0, sizeof l_F_883);
l_F_883 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_883 == NULL)) goto L_end884;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_883))).f_T))
{
{ rt_int rv885 = 1;
return rv885; }
}
l_F_883 = ((*(R24 *)rt_nil_check(l_F_883))).f_NEXT;
}
RT_B_TICK();
} L_end884: ;
}
}
{ rt_int rv886 = 0;
return rv886; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_887; memset(&l_K_887, 0, sizeof l_K_887);
l_K_887 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_887 == g_T_STR) || (l_K_887 == g_T_BITS)))
{
{ R10 rv888 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv888; }
}
else if ((l_K_887 == g_T_ABS))
{
{ R10 rv889 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv889; }
}
else if (((l_K_887 == g_T_ARR) || (l_K_887 == g_T_REC)))
{
{ R10 rv890 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv890; }
}
{ R10 rv891 = p_V;
return rv891; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_892; memset(&l_K_892, 0, sizeof l_K_892);
l_K_892 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_892 == g_T_STR) || (l_K_892 == g_T_BITS)))
{
{ R10 rv893 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv893; }
}
else if ((l_K_892 == g_T_ABS))
{
{ R10 rv894 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv894; }
}
else if ((l_K_892 == g_T_SEM))
{
{ R10 rv895 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv895; }
}
else if ((l_K_892 == g_T_ARR))
{
{ R10 rv896 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv896; }
}
else if ((l_K_892 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv897 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv897; }
}
{ R10 rv898 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv898; }
}
{ R10 rv899 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv899; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_900; memset(&l_K_900, 0, sizeof l_K_900);
l_K_900 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_900 == g_T_STR) || (l_K_900 == g_T_BITS)))
{
{ R10 rv901 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv901; }
}
else if ((l_K_900 == g_T_ABS))
{
{ R10 rv902 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv902; }
}
else if (((l_K_900 == g_T_ARR) || (l_K_900 == g_T_REC)))
{
{ R10 rv903 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv903; }
}
else if ((l_K_900 == g_T_SEM))
{
{ R10 rv904 = r_MK(rt_str("0", 1));
return rv904; }
}
{ R10 rv905 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv905; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv906 = p_V;
return rv906; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv907 = p_V;
return rv907; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv908 = p_V;
return rv908; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv909 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv909; }
}
{ R10 rv910 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv910; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv911 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv911; }
}
{ R10 rv912 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv912; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv913 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv913; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv914 = 1;
return rv914; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv915 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv915; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv916 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv916; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv917 = 0;
return rv917; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv918 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv918; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv919 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv919; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv920 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv920; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv921 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv921; }
}
{ rt_int rv922 = 1;
return rv922; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv923 = 1;
return rv923; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv924 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv924; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv925 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv925; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv926 = 0;
return rv926; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv927 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv927; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv928 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv928; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv929 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv929; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv930 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv930; }
}
{ rt_int rv931 = 1;
return rv931; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv932 = 0;
return rv932; }
}
{ rt_int rv933 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv933; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_934; memset(&l_P_934, 0, sizeof l_P_934);
l_P_934 = p_A;
R25 * l_Q_935; memset(&l_Q_935, 0, sizeof l_Q_935);
l_Q_935 = p_B;
for (;;) {
if (((l_P_934 == NULL) || (l_Q_935 == NULL))) goto L_end936;
{
if ((r_IS_GEN_ARG(l_P_934) || r_IS_GEN_ARG(l_Q_935)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_934))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_935))).f_ANYARG)))
{
{ rt_int rv937 = 0;
return rv937; }
}
if (((((*(R25 *)rt_nil_check(l_P_934))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_935))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_934))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_935))).f_MLO).f_V)))
{
{ rt_int rv938 = 0;
return rv938; }
}
}
l_P_934 = ((*(R25 *)rt_nil_check(l_P_934))).f_NEXT;
l_Q_935 = ((*(R25 *)rt_nil_check(l_Q_935))).f_NEXT;
}
RT_B_TICK();
} L_end936: ;
{ rt_int rv939 = ((l_P_934 == NULL) && (l_Q_935 == NULL));
return rv939; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_940; memset(&l_CS_940, 0, sizeof l_CS_940);
l_CS_940 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_941; memset(&l_T_941, 0, sizeof l_T_941);
rt_int l_LEV_942; memset(&l_LEV_942, 0, sizeof l_LEV_942);
if ((((*(R18 *)rt_nil_check(l_CS_940))).f_LEVEL == p_LEVEL))
{
{ R10 rv943 = r_MK(rt_str("F", 1));
return rv943; }
}
if (((*(R18 *)rt_nil_check(l_CS_940))).f_FRAMED)
{
S_R10(&l_T_941, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_941, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_942 = rt_sub(((*(R18 *)rt_nil_check(l_CS_940))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_942 <= p_LEVEL)) goto L_end944;
{
S_R10(&l_T_941, r_CATS(l_T_941, rt_str("->up", 4)), 0);
l_LEV_942 = rt_sub(l_LEV_942, ((rt_int)1LL));
}
RT_B_TICK();
} L_end944: ;
{ R10 rv945 = l_T_941;
return rv945; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv946 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv946; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv947 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv947; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv948 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv948; }
}
{ R10 rv949 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv949; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_950; memset(&l_CS_950, 0, sizeof l_CS_950);
l_CS_950 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_951; memset(&l_T_951, 0, sizeof l_T_951);
l_T_951 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_952; memset(&l_CN_952, 0, sizeof l_CN_952);
if ((((*(R18 *)rt_nil_check(l_CS_950))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_952, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_952, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_951), l_CN_952));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_952, 0);
{ R10 rv953 = l_CN_952;
return rv953; }
}
S_R10(&l_CN_952, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_952, 0);
if (((*(R18 *)rt_nil_check(l_CS_950))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_951), l_CN_952), &((*(R18 *)rt_nil_check(l_CS_950))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_952), 0);
{ R10 rv954 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv954; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_951), l_CN_952, l_CN_952, l_CN_952));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_952, 0);
{ R10 rv955 = l_CN_952;
return rv955; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_956; memset(&l_T_956, 0, sizeof l_T_956);
l_T_956 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_957; memset(&l_N_957, 0, sizeof l_N_957);
l_N_957 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_958; memset(&l_V_958, 0, sizeof l_V_958);
rt_int l_HAVE_V_959; memset(&l_HAVE_V_959, 0, sizeof l_HAVE_V_959);
l_HAVE_V_959 = 0;
if (((((*(R22 *)rt_nil_check(l_T_956))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_956))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_957 == NULL)) goto L_end960;
{
{
R12 * l_Y_961; memset(&l_Y_961, 0, sizeof l_Y_961);
l_Y_961 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_957))).f_NAME);
R10 l_CN_962; memset(&l_CN_962, 0, sizeof l_CN_962);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_961))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_961))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_956) && (((*(R22 *)rt_nil_check(l_T_956))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_963; memset(&l_M_963, 0, sizeof l_M_963);
S_R23(&l_M_963, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_961))).f_HASMV = (l_M_963).f_OK;
((*(R12 *)rt_nil_check(l_Y_961))).f_MV = (l_M_963).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_961))).f_T = l_T_956;
S_R10(&l_CN_962, r_NEW_OBJECT(l_Y_961, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_956))
{
r_CODE(r_INIT_CODE(l_T_956, l_CN_962));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_959))
{
S_R26(&l_V_958, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_956), 0);
l_HAVE_V_959 = 1;
}
r_CODE(r_STORE_CODE(l_T_956, l_CN_962, l_V_958, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_961, ((*(R21 *)rt_nil_check(l_N_957))).f_LINE);
}
l_N_957 = ((*(R21 *)rt_nil_check(l_N_957))).f_NEXT;
}
RT_B_TICK();
} L_end960: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv964 = ({ R26 rc965; memset(&rc965, 0, sizeof rc965);  S_R10(&rc965.f_C, p_C, 0); rc965.f_T = p_T; rc965.f_LVAL = 0; S_R10(&rc965.f_SELF, r_NO_TEXT(), 0); rc965; });
return rv964; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv966 = ({ R26 rc967; memset(&rc967, 0, sizeof rc967);  S_R10(&rc967.f_C, p_C, 0); rc967.f_T = p_T; rc967.f_LVAL = p_LVAL; S_R10(&rc967.f_SELF, p_SELF, 0); rc967; });
return rv966; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_968; memset(&l_T_968, 0, sizeof l_T_968);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv969 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv969; }
}
l_T_968 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_968))).f_SCALE = p_SCALE;
{ R22 * rv970 = l_T_968;
return rv970; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_971; memset(&l_T_971, 0, sizeof l_T_971);
l_T_971 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_971))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_971))).f_MLEN, p_M, 0);
{ R22 * rv972 = l_T_971;
return rv972; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_973; memset(&l_S_973, 0, sizeof l_S_973);
l_S_973 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_973, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_974; memset(&l_AT_974, 0, sizeof l_AT_974);
l_AT_974 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_975; memset(&l_R_975, 0, sizeof l_R_975);
S_R10(&l_R_975, r_MK(rt_str("\"", 1)), 0);
{ rt_int it977_lo = ((rt_int)0LL), it977_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it977 = it977_lo; it977 <= it977_hi; it977++) {
{
if ((rt_b_eq(rt_b_slice(l_S_973, it977, it977), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_973, it977, it977), rt_str("\\", 1))))
{
S_R10(&l_R_975, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_973, it977, it977))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_973, it977, it977), rt_str("\?", 1)))
{
S_R10(&l_R_975, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_978; memset(&l_C_978, 0, sizeof l_C_978);
l_C_978 = r_CODE_OF(rt_b_slice(l_S_973, it977, it977));
if (({ rt_int iv979 = l_C_978; (((rt_int)32LL) <= iv979) && (iv979 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_975, r_MK(rt_b_slice(l_S_973, it977, it977)), 0);
}
else
{
S_R10(&l_R_975, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_978, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_978, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_978, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it977 == it977_hi) break;
} } L_end976: ;
S_R10(&l_R_975, r_MK(rt_str("\"", 1)), 0);
{ R10 rv980 = ({ R10 rc981; memset(&rc981, 0, sizeof rc981);  rc981.f_AT = l_AT_974; rc981.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_974); rc981.f_H = rt_neg(((rt_int)1LL)); rc981; });
return rv980; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_982; memset(&l_K_982, 0, sizeof l_K_982);
l_K_982 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_983; memset(&l_NO_983, 0, sizeof l_NO_983);
S_R23(&l_NO_983, ({ R23 rc984; memset(&rc984, 0, sizeof rc984);  rc984.f_OK = 0; rc984.f_V = ((rt_int)0LL); rc984; }), 0);
if ((l_K_982 == g_N_INT))
{
{ R23 rv985 = ({ R23 rc986; memset(&rc986, 0, sizeof rc986);  rc986.f_OK = 1; rc986.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc986; });
return rv985; }
}
else if ((l_K_982 == g_N_PAREN))
{
{ R23 rv987 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv987; }
}
else if ((l_K_982 == g_N_BOOL))
{
{ R23 rv988 = ({ R23 rc989; memset(&rc989, 0, sizeof rc989);  rc989.f_OK = 1; rc989.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc989; });
return rv988; }
}
else if ((l_K_982 == g_N_UNOP))
{
{
R23 l_A_990; memset(&l_A_990, 0, sizeof l_A_990);
S_R23(&l_A_990, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_990).f_OK))
{
{ R23 rv991 = l_NO_983;
return rv991; }
}
{ R23 rv992 = ({ R23 rc993; memset(&rc993, 0, sizeof rc993);  rc993.f_OK = 1; rc993.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_990).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc993; });
return rv992; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv994 = l_A_990;
return rv994; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv995 = ({ R23 rc996; memset(&rc996, 0, sizeof rc996);  rc996.f_OK = (l_A_990).f_OK; rc996.f_V = rt_sub(((rt_int)1LL), (l_A_990).f_V); rc996; });
return rv995; }
}
}
}
else if ((l_K_982 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv997 = l_NO_983;
return rv997; }
}
{
R23 l_A_998; memset(&l_A_998, 0, sizeof l_A_998);
S_R23(&l_A_998, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_999; memset(&l_B_999, 0, sizeof l_B_999);
S_R23(&l_B_999, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1000; memset(&l_OP_1000, 0, sizeof l_OP_1000);
S_R10(&l_OP_1000, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1000, rt_str("&", 1)))
{
if (((((l_A_998).f_OK && ((l_A_998).f_V == ((rt_int)0LL)))) || (((l_B_999).f_OK && ((l_B_999).f_V == ((rt_int)0LL))))))
{
{ R23 rv1001 = ({ R23 rc1002; memset(&rc1002, 0, sizeof rc1002);  rc1002.f_OK = 1; rc1002.f_V = ((rt_int)0LL); rc1002; });
return rv1001; }
}
if (((l_A_998).f_OK && (l_B_999).f_OK))
{
{ R23 rv1003 = ({ R23 rc1004; memset(&rc1004, 0, sizeof rc1004);  rc1004.f_OK = 1; rc1004.f_V = ((rt_int)1LL); rc1004; });
return rv1003; }
}
{ R23 rv1005 = l_NO_983;
return rv1005; }
}
else if (r_TEQS(l_OP_1000, rt_str("!", 1)))
{
if (((((l_A_998).f_OK && ((l_A_998).f_V == ((rt_int)1LL)))) || (((l_B_999).f_OK && ((l_B_999).f_V == ((rt_int)1LL))))))
{
{ R23 rv1006 = ({ R23 rc1007; memset(&rc1007, 0, sizeof rc1007);  rc1007.f_OK = 1; rc1007.f_V = ((rt_int)1LL); rc1007; });
return rv1006; }
}
if (((l_A_998).f_OK && (l_B_999).f_OK))
{
{ R23 rv1008 = ({ R23 rc1009; memset(&rc1009, 0, sizeof rc1009);  rc1009.f_OK = 1; rc1009.f_V = ((rt_int)0LL); rc1009; });
return rv1008; }
}
{ R23 rv1010 = l_NO_983;
return rv1010; }
}
if ((!(((l_A_998).f_OK && (l_B_999).f_OK))))
{
{ R23 rv1011 = l_NO_983;
return rv1011; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1012 = l_NO_983;
return rv1012; }
}
if (((r_TEQS(l_OP_1000, rt_str("+", 1)) || r_TEQS(l_OP_1000, rt_str("-", 1))) || r_TEQS(l_OP_1000, rt_str("*", 1))))
{
{ R23 rv1013 = ({ R23 rc1014; memset(&rc1014, 0, sizeof rc1014);  rc1014.f_OK = 1; rc1014.f_V = r_MANIFEST_ARITH(l_OP_1000, (l_A_998).f_V, (l_B_999).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1014; });
return rv1013; }
}
else if ((r_TEQS(l_OP_1000, rt_str("//", 2)) && (!((l_B_999).f_V == ((rt_int)0LL)))))
{
{ R23 rv1015 = ({ R23 rc1016; memset(&rc1016, 0, sizeof rc1016);  rc1016.f_OK = 1; rc1016.f_V = rt_quot((l_A_998).f_V, (l_B_999).f_V); rc1016; });
return rv1015; }
}
else if ((r_TEQS(l_OP_1000, rt_str("MOD", 3)) && (!((l_B_999).f_V == ((rt_int)0LL)))))
{
{ R23 rv1017 = ({ R23 rc1018; memset(&rc1018, 0, sizeof rc1018);  rc1018.f_OK = 1; rc1018.f_V = rt_rem((l_A_998).f_V, (l_B_999).f_V); rc1018; });
return rv1017; }
}
else if (r_TEQS(l_OP_1000, rt_str("=", 1)))
{
{ R23 rv1019 = ({ R23 rc1020; memset(&rc1020, 0, sizeof rc1020);  rc1020.f_OK = 1; rc1020.f_V = r_BOOL_INT(((l_A_998).f_V == (l_B_999).f_V)); rc1020; });
return rv1019; }
}
else if (r_TEQS(l_OP_1000, rt_str("<>", 2)))
{
{ R23 rv1021 = ({ R23 rc1022; memset(&rc1022, 0, sizeof rc1022);  rc1022.f_OK = 1; rc1022.f_V = r_BOOL_INT((!((l_A_998).f_V == (l_B_999).f_V))); rc1022; });
return rv1021; }
}
else if (r_TEQS(l_OP_1000, rt_str("<", 1)))
{
{ R23 rv1023 = ({ R23 rc1024; memset(&rc1024, 0, sizeof rc1024);  rc1024.f_OK = 1; rc1024.f_V = r_BOOL_INT(((l_A_998).f_V < (l_B_999).f_V)); rc1024; });
return rv1023; }
}
else if (r_TEQS(l_OP_1000, rt_str(">", 1)))
{
{ R23 rv1025 = ({ R23 rc1026; memset(&rc1026, 0, sizeof rc1026);  rc1026.f_OK = 1; rc1026.f_V = r_BOOL_INT(((l_A_998).f_V > (l_B_999).f_V)); rc1026; });
return rv1025; }
}
else if (r_TEQS(l_OP_1000, rt_str("<=", 2)))
{
{ R23 rv1027 = ({ R23 rc1028; memset(&rc1028, 0, sizeof rc1028);  rc1028.f_OK = 1; rc1028.f_V = r_BOOL_INT(((l_A_998).f_V <= (l_B_999).f_V)); rc1028; });
return rv1027; }
}
else if (r_TEQS(l_OP_1000, rt_str(">=", 2)))
{
{ R23 rv1029 = ({ R23 rc1030; memset(&rc1030, 0, sizeof rc1030);  rc1030.f_OK = 1; rc1030.f_V = r_BOOL_INT(((l_A_998).f_V >= (l_B_999).f_V)); rc1030; });
return rv1029; }
}
}
}
else if ((l_K_982 == g_N_IN))
{
{
R23 l_A_1031; memset(&l_A_1031, 0, sizeof l_A_1031);
S_R23(&l_A_1031, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1032; memset(&l_L_1032, 0, sizeof l_L_1032);
S_R23(&l_L_1032, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1033; memset(&l_U_1033, 0, sizeof l_U_1033);
S_R23(&l_U_1033, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1034; memset(&l_LO_1034, 0, sizeof l_LO_1034);
rt_int l_HI_1035; memset(&l_HI_1035, 0, sizeof l_HI_1035);
if ((!(((((l_A_1031).f_OK && (l_L_1032).f_OK) && (l_U_1033).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1036 = l_NO_983;
return rv1036; }
}
l_LO_1034 = (l_L_1032).f_V;
l_HI_1035 = (l_U_1033).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1034 = rt_add(l_LO_1034, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1035 = rt_sub(l_HI_1035, ((rt_int)1LL));
}
{ R23 rv1037 = ({ R23 rc1038; memset(&rc1038, 0, sizeof rc1038);  rc1038.f_OK = 1; rc1038.f_V = r_BOOL_INT((((l_A_1031).f_V >= l_LO_1034) && ((l_A_1031).f_V <= l_HI_1035))); rc1038; });
return rv1037; }
}
}
else if (((l_K_982 == g_N_NAME) || (l_K_982 == g_TS_GEN)))
{
{
R12 * l_Y_1039; memset(&l_Y_1039, 0, sizeof l_Y_1039);
l_Y_1039 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1040; memset(&l_B_1040, 0, sizeof l_B_1040);
l_B_1040 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1040 == NULL)) goto L_end1041;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1040))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1040))).f_HASMV))
{
{ R23 rv1042 = ({ R23 rc1043; memset(&rc1043, 0, sizeof rc1043);  rc1043.f_OK = 1; rc1043.f_V = ((*(R20 *)rt_nil_check(l_B_1040))).f_MV; rc1043; });
return rv1042; }
}
l_B_1040 = ((*(R20 *)rt_nil_check(l_B_1040))).f_NEXT;
}
RT_B_TICK();
} L_end1041: ;
if ((!(l_Y_1039 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1039))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1039))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1039))).f_HASMV))
{
{ R23 rv1044 = ({ R23 rc1045; memset(&rc1045, 0, sizeof rc1045);  rc1045.f_OK = 1; rc1045.f_V = ((*(R12 *)rt_nil_check(l_Y_1039))).f_MV; rc1045; });
return rv1044; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1039))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1046 = ({ R23 rc1047; memset(&rc1047, 0, sizeof rc1047);  rc1047.f_OK = 1; rc1047.f_V = ((*(R12 *)rt_nil_check(l_Y_1039))).f_MV; rc1047; });
return rv1046; }
}
}
}
}
}
else if ((l_K_982 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1048 = ({ R23 rc1049; memset(&rc1049, 0, sizeof rc1049);  rc1049.f_OK = 1; rc1049.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1049; });
return rv1048; }
}
}
else if ((l_K_982 == g_N_FIELD))
{
{ R23 rv1050 = r_ATTR_MANIFEST(p_E);
return rv1050; }
}
else if ((l_K_982 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1051 = ({ R23 rc1052; memset(&rc1052, 0, sizeof rc1052);  rc1052.f_OK = 1; rc1052.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1052; });
return rv1051; }
}
}
{ R23 rv1053 = l_NO_983;
return rv1053; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1054; memset(&l_A_1054, 0, sizeof l_A_1054);
l_A_1054 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1055; memset(&l_NAME_1055, 0, sizeof l_NAME_1055);
S_R10(&l_NAME_1055, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1056; memset(&l_T_1056, 0, sizeof l_T_1056);
l_T_1056 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1054))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1057; memset(&l_INNER_1057, 0, sizeof l_INNER_1057);
l_INNER_1057 = ((*(R21 *)rt_nil_check(l_A_1054))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1057))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1055, rt_str("MAX", 3)))
{
{ R23 rv1058 = r_SOME(r_MAX_LENGTH());
return rv1058; }
}
else if (r_TEQS(l_NAME_1055, rt_str("MIN", 3)))
{
{ R23 rv1059 = r_SOME(((rt_int)0LL));
return rv1059; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1057))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1057))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1055, rt_str("MAX", 3)))
{
{ R23 rv1060 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1060; }
}
else if (r_TEQS(l_NAME_1055, rt_str("MIN", 3)))
{
{ R23 rv1061 = r_SOME(((rt_int)1LL));
return rv1061; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1057))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1055, rt_str("MAX", 3)))
{
{ R23 rv1062 = r_SOME(((rt_int)1000LL));
return rv1062; }
}
else if (r_TEQS(l_NAME_1055, rt_str("MIN", 3)))
{
{ R23 rv1063 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1063; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1057))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1055, rt_str("MAX", 3)))
{
{ R23 rv1064 = r_SOME(((rt_int)1000LL));
return rv1064; }
}
else if (r_TEQS(l_NAME_1055, rt_str("MIN", 3)))
{
{ R23 rv1065 = r_SOME(((rt_int)2LL));
return rv1065; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1066; memset(&l_Y_1066, 0, sizeof l_Y_1066);
l_Y_1066 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1054))).f_NAME);
if ((l_Y_1066 == NULL))
{
{ R23 rv1067 = r_NO_MVAL();
return rv1067; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1066))).f_KIND == g_Y_TYPE))
{
l_T_1056 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1054))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1054))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1066))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1066))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1066))).f_KIND == g_Y_GEN)))
{
l_T_1056 = ((*(R12 *)rt_nil_check(l_Y_1066))).f_T;
}
else
{
{ R23 rv1068 = r_NO_MVAL();
return rv1068; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1055, rt_str("MIN", 3)) || r_TEQS(l_NAME_1055, rt_str("MAX", 3))))
{
{ R23 rv1069 = r_SOME(((*(R21 *)rt_nil_check(l_A_1054))).f_IV);
return rv1069; }
}
l_T_1056 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1054))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1054))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1055, rt_str("MIN", 3)) || r_TEQS(l_NAME_1055, rt_str("MAX", 3))))))
{
{ R23 rv1070 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1054))).f_A))).f_IV);
return rv1070; }
}
}
{
R14 l_SAVED_CODE_1071; memset(&l_SAVED_CODE_1071, 0, sizeof l_SAVED_CODE_1071);
S_R14(&l_SAVED_CODE_1071, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1072; memset(&rc1072, 0, sizeof rc1072);  rc1072.f_HEAD = NULL; rc1072.f_TAIL = NULL; rc1072; }), 0);
l_T_1056 = (r_EXPR(l_A_1054, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1071, 0);
}
}
else
{
{ R23 rv1073 = r_NO_MVAL();
return rv1073; }
}
if ((l_T_1056 == NULL))
{
{ R23 rv1074 = r_NO_MVAL();
return rv1074; }
}
{ R23 rv1075 = r_TYPE_ATTR_MANIFEST(l_T_1056, l_NAME_1055);
return rv1075; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1076; memset(&l_T_1076, 0, sizeof l_T_1076);
l_T_1076 = r_REAL_TYPE(p_T0);
rt_int l_K_1077; memset(&l_K_1077, 0, sizeof l_K_1077);
l_K_1077 = ((*(R22 *)rt_nil_check(l_T_1076))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1078 = r_STATIC_SIZE(p_T0);
return rv1078; }
}
if ((l_K_1077 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1079 = r_SOME(((*(R22 *)rt_nil_check(l_T_1076))).f_SCALE);
return rv1079; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1080 = r_SOME(((rt_int)2LL));
return rv1080; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1076))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1081 = ((*(R22 *)rt_nil_check(l_T_1076))).f_MLO;
return rv1081; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1076))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1082 = ((*(R22 *)rt_nil_check(l_T_1076))).f_MHI;
return rv1082; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1076))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1083 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1083; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1076))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1084 = r_SOME(INT64_MAX);
return rv1084; }
}
}
else if ((l_K_1077 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1085 = r_SOME(((*(R22 *)rt_nil_check(l_T_1076))).f_SCALE);
return rv1085; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1086 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1076))).f_SCALE));
return rv1086; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1087 = r_SOME(((rt_int)2LL));
return rv1087; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1088 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1076))).f_SCALE, p_NAME));
return rv1088; }
}
}
else if ((l_K_1077 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1076))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1089 = ((*(R22 *)rt_nil_check(l_T_1076))).f_MLO;
return rv1089; }
}
{ R23 rv1090 = r_SOME(((rt_int)0LL));
return rv1090; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1076))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1091 = ((*(R22 *)rt_nil_check(l_T_1076))).f_MHI;
return rv1091; }
}
{ R23 rv1092 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1076))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1092; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1076))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1093 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1076))).f_BASE))).f_NLITS);
return rv1093; }
}
if (((((*(R22 *)rt_nil_check(l_T_1076))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1076))).f_MHI).f_OK))
{
{ R23 rv1094 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1076))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1076))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1094; }
}
}
}
else if (((l_K_1077 == g_T_STR) || (l_K_1077 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1095 = ((*(R22 *)rt_nil_check(l_T_1076))).f_MLEN;
return rv1095; }
}
}
else if ((l_K_1077 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1096 = r_SOME(((*(R22 *)rt_nil_check(l_T_1076))).f_DIMS);
return rv1096; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1076))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1076))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1076))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1097 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1076))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1076))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1097; }
}
}
}
else if ((l_K_1077 == g_T_REC))
{
{
R24 * l_F_1098; memset(&l_F_1098, 0, sizeof l_F_1098);
l_F_1098 = ((*(R22 *)rt_nil_check(l_T_1076))).f_FIELDS;
R25 * l_B_1099; memset(&l_B_1099, 0, sizeof l_B_1099);
l_B_1099 = ((*(R22 *)rt_nil_check(l_T_1076))).f_ARGS;
for (;;) {
if (((l_F_1098 == NULL) || (l_B_1099 == NULL))) goto L_end1100;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1098))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1098))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1099))).f_ANYARG)
{
{ R23 rv1101 = r_NO_MVAL();
return rv1101; }
}
{ R23 rv1102 = ((*(R25 *)rt_nil_check(l_B_1099))).f_MLO;
return rv1102; }
}
l_B_1099 = ((*(R25 *)rt_nil_check(l_B_1099))).f_NEXT;
}
l_F_1098 = ((*(R24 *)rt_nil_check(l_F_1098))).f_NEXT;
}
RT_B_TICK();
} L_end1100: ;
}
}
{ R23 rv1103 = r_NO_MVAL();
return rv1103; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1104 = ((rt_int)0LL);
{ rt_frame xf1105; if (RT_TRY(xf1105)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1104 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1104 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1104 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1105); } else { RT_POP(xf1105); int xf1105x = rt_xcur;
if (0 || xf1105x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1105x); } }
{ rt_int rv1106 = F->l_R_1104;
return rv1106; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1107 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1107; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1108 = ((rt_int)1LL);
return rv1108; }
}
{ rt_int rv1109 = ((rt_int)0LL);
return rv1109; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1110; memset(&l_K_1110, 0, sizeof l_K_1110);
l_K_1110 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1110 == g_N_INT))
{
{ R26 rv1111 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1111; }
}
else if ((l_K_1110 == g_N_REAL))
{
{ R26 rv1112 = r_REAL_LITERAL(p_E);
return rv1112; }
}
else if ((l_K_1110 == g_N_BOOL))
{
{ R26 rv1113 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1113; }
}
else if ((l_K_1110 == g_N_NIL))
{
{ R26 rv1114 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1114; }
}
else if ((l_K_1110 == g_N_PAREN))
{
{
R26 l_V_1115; memset(&l_V_1115, 0, sizeof l_V_1115);
S_R26(&l_V_1115, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1115).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1115).f_C), 0);
{ R26 rv1116 = l_V_1115;
return rv1116; }
}
}
else if ((l_K_1110 == g_N_STR))
{
{ R26 rv1117 = r_STRING_LITERAL(p_E);
return rv1117; }
}
else if ((l_K_1110 == g_N_BITS))
{
{ R26 rv1118 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1118; }
}
else if ((l_K_1110 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1119 = r_NAME_EXPR(p_E, p_WANT);
return rv1119; }
}
{ R26 rv1120 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1120; }
}
else if ((l_K_1110 == g_N_RECCONS))
{
{ R26 rv1121 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1121; }
}
else if ((l_K_1110 == g_N_ARRCONS))
{
{ R26 rv1122 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1122; }
}
else if ((l_K_1110 == g_N_TYPESPEC))
{
{ R26 rv1123 = r_TYPE_SPECIFIER(p_E);
return rv1123; }
}
else if ((l_K_1110 == g_N_QUAL))
{
{
rt_int l_SAVED_1124; memset(&l_SAVED_1124, 0, sizeof l_SAVED_1124);
l_SAVED_1124 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1125; memset(&l_SAVED_Q_1125, 0, sizeof l_SAVED_Q_1125);
l_SAVED_Q_1125 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1126; memset(&l_V_1126, 0, sizeof l_V_1126);
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
R23 l_P_1127; memset(&l_P_1127, 0, sizeof l_P_1127);
S_R23(&l_P_1127, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1126, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1124;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1125;
{ R26 rv1128 = l_V_1126;
return rv1128; }
}
}
else if ((l_K_1110 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1129; memset(&l_N_1129, 0, sizeof l_N_1129);
l_N_1129 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1129))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1129))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1130 = r_EXPR(l_N_1129, p_WANT);
return rv1130; }
}
}
{ R26 rv1131 = r_NEW_EXPR(p_E, p_WANT);
return rv1131; }
}
else if ((l_K_1110 == g_N_NAME))
{
{ R26 rv1132 = r_NAME_EXPR(p_E, p_WANT);
return rv1132; }
}
else if ((l_K_1110 == g_N_APPLY))
{
{
R12 * l_Y_1133; memset(&l_Y_1133, 0, sizeof l_Y_1133);
l_Y_1133 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1133 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1133))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1133))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1134; memset(&l_N_1134, 0, sizeof l_N_1134);
l_N_1134 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1135; memset(&l_A_1135, 0, sizeof l_A_1135);
l_A_1135 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1135))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1134))).f_A = l_A_1135;
((*(R21 *)rt_nil_check(l_N_1134))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1136 = r_EXPR(l_N_1134, p_WANT);
return rv1136; }
}
}
}
{ R26 rv1137 = r_CALL_EXPR(p_E, p_WANT);
return rv1137; }
}
}
else if ((l_K_1110 == g_N_FIELD))
{
{ R26 rv1138 = r_FIELD_EXPR(p_E);
return rv1138; }
}
else if ((l_K_1110 == g_N_DEREF))
{
{
R26 l_B_1139; memset(&l_B_1139, 0, sizeof l_B_1139);
S_R26(&l_B_1139, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1139).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1140; memset(&l_TT_1140, 0, sizeof l_TT_1140);
l_TT_1140 = r_TARGET((l_B_1139).f_T);
{ R26 rv1141 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1140), (l_B_1139).f_C), l_TT_1140, 1, r_NO_TEXT());
return rv1141; }
}
}
}
else if ((l_K_1110 == g_N_INDEX))
{
{ R26 rv1142 = r_INDEX_EXPR(p_E);
return rv1142; }
}
else if ((l_K_1110 == g_N_SUBSTR))
{
{
R26 l_B_1143; memset(&l_B_1143, 0, sizeof l_B_1143);
S_R26(&l_B_1143, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1144; memset(&l_BT_1144, 0, sizeof l_BT_1144);
l_BT_1144 = r_REAL_TYPE((l_B_1143).f_T);
R10 l_LO_1145; memset(&l_LO_1145, 0, sizeof l_LO_1145);
R10 l_HI_1146; memset(&l_HI_1146, 0, sizeof l_HI_1146);
if (((((*(R22 *)rt_nil_check((l_B_1143).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1147; memset(&l_ARGS_1147, 0, sizeof l_ARGS_1147);
l_ARGS_1147 = r_VAL_ARG(l_B_1143, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1148; memset(&l_Y_1148, 0, sizeof l_Y_1148);
l_Y_1148 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1147, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1148 == NULL)))
{
{ R26 rv1149 = r_CALL_SYM(l_Y_1148, l_ARGS_1147, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1149; }
}
if ((((*(R22 *)rt_nil_check((l_B_1143).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1144))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1144))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1145, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1146, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1144))).f_KIND == g_T_BITS))
{
{ R26 rv1150 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1143).f_C, l_LO_1145, l_HI_1146), r_BITS_TYPE(((rt_int)1LL)));
return rv1150; }
}
{
R22 * l_T_1151; memset(&l_T_1151, 0, sizeof l_T_1151);
l_T_1151 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1151))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1144))).f_BASE;
{ R26 rv1152 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1143).f_C, l_LO_1145, l_HI_1146), l_T_1151);
return rv1152; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1144))).f_KIND == g_T_BITS))
{
{ R26 rv1153 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1143).f_C, l_LO_1145, l_HI_1146), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1153; }
}
{
R22 * l_T_1154; memset(&l_T_1154, 0, sizeof l_T_1154);
l_T_1154 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1154))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1144))).f_BASE;
{ R26 rv1155 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1143).f_C, l_LO_1145, l_HI_1146), l_T_1154);
return rv1155; }
}
}
}
else if ((l_K_1110 == g_N_UNOP))
{
{ R26 rv1156 = r_UNARY(p_E);
return rv1156; }
}
else if ((l_K_1110 == g_N_BINOP))
{
{ R26 rv1157 = r_BINARY(p_E);
return rv1157; }
}
else if ((l_K_1110 == g_N_IN))
{
{ R26 rv1158 = r_IN_EXPR(p_E);
return rv1158; }
}
else if (((l_K_1110 == g_N_ANY) || (l_K_1110 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1110 == g_TS_GEN))
{
{
R21 * l_N_1159; memset(&l_N_1159, 0, sizeof l_N_1159);
l_N_1159 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1159))).f_NAME, r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1159))).f_NAME))
{
{ R26 rv1160 = r_NAME_EXPR(l_N_1159, p_WANT);
return rv1160; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1110 == g_TS_NAME) || (l_K_1110 == g_TS_ARRAY)) || (l_K_1110 == g_TS_RECORD)) || (l_K_1110 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1161; memset(&l_SAVED_1161, 0, sizeof l_SAVED_1161);
l_SAVED_1161 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1162; memset(&l_SAVED_Q_1162, 0, sizeof l_SAVED_Q_1162);
l_SAVED_Q_1162 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1163; memset(&l_V_1163, 0, sizeof l_V_1163);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1163, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1161;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1162;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1163).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1164 = (l_V_1163).f_C;
return rv1164; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1163).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1163).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1163).f_T));
}
{ R10 rv1165 = (l_V_1163).f_C;
return rv1165; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1166; memset(&l_V_1166, 0, sizeof l_V_1166);
S_R26(&l_V_1166, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1166).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1166).f_T));
}
{ R10 rv1167 = (l_V_1166).f_C;
return rv1167; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1168; memset(&l_T_1168, 0, sizeof l_T_1168);
l_T_1168 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1168))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1168))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1169 = l_T_1168;
return rv1169; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1170; memset(&l_T_1170, 0, sizeof l_T_1170);
S_R10(&l_T_1170, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1171; memset(&l_S_1171, 0, sizeof l_S_1171);
l_S_1171 = rt_str_new((l_T_1170).f_LEN);
rt_b_assign(&l_S_1171, r_STR(l_T_1170, (l_T_1170).f_LEN));
rt_int l_POINT_1172; memset(&l_POINT_1172, 0, sizeof l_POINT_1172);
l_POINT_1172 = 0;
rt_int l_DIGITS_1173; memset(&l_DIGITS_1173, 0, sizeof l_DIGITS_1173);
l_DIGITS_1173 = ((rt_int)0LL);
{ rt_int it1175_lo = ((rt_int)0LL), it1175_hi = rt_sub((l_T_1170).f_LEN, ((rt_int)1LL));
for (rt_int it1175 = it1175_lo; it1175 <= it1175_hi; it1175++) {
{
if (rt_b_eq(rt_b_slice(l_S_1171, it1175, it1175), rt_str(".", 1)))
{
l_POINT_1172 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1171, it1175, it1175), rt_str("E", 1)))
{
goto L_end1174;
}
else
{
l_DIGITS_1173 = rt_add(l_DIGITS_1173, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1175 == it1175_hi) break;
} } L_end1174: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1172)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1176 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1170), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1176; }
}
if ((!l_POINT_1172))
{
{ R26 rv1177 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1170)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1177; }
}
{
R22 * l_F_1178; memset(&l_F_1178, 0, sizeof l_F_1178);
l_F_1178 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1179; memset(&l_C_1179, 0, sizeof l_C_1179);
S_R10(&l_C_1179, l_T_1170, 0);
((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE = r_MAX_INT(l_DIGITS_1173, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1171, rt_sub((l_T_1170).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1170).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1179, r_FMT1(rt_str("@0", 2), l_T_1170), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1171, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1179, r_FMT1(rt_str("0@", 2), l_T_1170), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1178))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1180 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1179), l_F_1178);
return rv1180; }
}
{ R26 rv1181 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1179), l_F_1178);
return rv1181; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1182; memset(&l_T_1182, 0, sizeof l_T_1182);
S_R10(&l_T_1182, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1183; memset(&l_S_1183, 0, sizeof l_S_1183);
l_S_1183 = rt_str_new((l_T_1182).f_LEN);
rt_b_assign(&l_S_1183, r_STR(l_T_1182, (l_T_1182).f_LEN));
rt_int l_INT_1184; memset(&l_INT_1184, 0, sizeof l_INT_1184);
l_INT_1184 = ((rt_int)0LL);
rt_int l_SIG_1185; memset(&l_SIG_1185, 0, sizeof l_SIG_1185);
l_SIG_1185 = 0;
rt_int l_POINT_1186; memset(&l_POINT_1186, 0, sizeof l_POINT_1186);
l_POINT_1186 = 0;
rt_int l_LEAD_1187; memset(&l_LEAD_1187, 0, sizeof l_LEAD_1187);
l_LEAD_1187 = ((rt_int)0LL);
rt_int l_I_1188; memset(&l_I_1188, 0, sizeof l_I_1188);
l_I_1188 = ((rt_int)0LL);
rt_int l_EXP_1189; memset(&l_EXP_1189, 0, sizeof l_EXP_1189);
l_EXP_1189 = ((rt_int)0LL);
for (;;) {
if ((l_I_1188 >= (l_T_1182).f_LEN)) goto L_end1190;
{
if (rt_b_eq(rt_b_slice(l_S_1183, l_I_1188, l_I_1188), rt_str("E", 1)))
{
goto L_end1190;
}
else if (rt_b_eq(rt_b_slice(l_S_1183, l_I_1188, l_I_1188), rt_str(".", 1)))
{
l_POINT_1186 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1183, l_I_1188, l_I_1188), rt_str("0", 1))))
{
if ((!l_POINT_1186))
{
l_INT_1184 = rt_add(l_INT_1184, ((rt_int)1LL));
}
l_SIG_1185 = 1;
}
else if ((l_SIG_1185 && (!l_POINT_1186)))
{
l_INT_1184 = rt_add(l_INT_1184, ((rt_int)1LL));
}
else if ((l_POINT_1186 && (!l_SIG_1185)))
{
l_LEAD_1187 = rt_add(l_LEAD_1187, ((rt_int)1LL));
}
l_I_1188 = rt_add(l_I_1188, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1190: ;
if ((!l_SIG_1185))
{
{ rt_int rv1191 = 1;
return rv1191; }
}
if ((l_I_1188 < (l_T_1182).f_LEN))
{
{
rt_int l_NEG_1192; memset(&l_NEG_1192, 0, sizeof l_NEG_1192);
l_NEG_1192 = 0;
l_I_1188 = rt_add(l_I_1188, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1183, l_I_1188, l_I_1188), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1183, l_I_1188, l_I_1188), rt_str("+", 1))))
{
l_NEG_1192 = rt_b_eq(rt_b_slice(l_S_1183, l_I_1188, l_I_1188), rt_str("-", 1));
l_I_1188 = rt_add(l_I_1188, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1188 >= (l_T_1182).f_LEN)) goto L_end1193;
{
if ((l_EXP_1189 <= ((rt_int)100000LL)))
{
l_EXP_1189 = rt_add(rt_mul(l_EXP_1189, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1183, l_I_1188, l_I_1188)), ((rt_int)48LL))));
}
l_I_1188 = rt_add(l_I_1188, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1193: ;
if (l_NEG_1192)
{
l_EXP_1189 = rt_neg(l_EXP_1189);
}
}
}
{
rt_int l_D_1194; memset(&l_D_1194, 0, sizeof l_D_1194);
l_D_1194 = rt_add(rt_sub(l_INT_1184, ((rt_int)1LL)), l_EXP_1189);
rt_int l_LIM_1195; memset(&l_LIM_1195, 0, sizeof l_LIM_1195);
l_LIM_1195 = ((rt_int)308LL);
if ((l_INT_1184 == ((rt_int)0LL)))
{
l_D_1194 = rt_add(rt_sub(rt_neg(l_LEAD_1187), ((rt_int)1LL)), l_EXP_1189);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1195 = ((rt_int)38LL);
}
{ rt_int rv1196 = ((l_D_1194 <= l_LIM_1195) && (l_D_1194 >= rt_add(rt_neg(l_LIM_1195), ((rt_int)1LL))));
return rv1196; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1197; memset(&l_T_1197, 0, sizeof l_T_1197);
S_R10(&l_T_1197, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1198; memset(&l_S_1198, 0, sizeof l_S_1198);
l_S_1198 = rt_str_new((l_T_1197).f_LEN);
rt_b_assign(&l_S_1198, r_STR(l_T_1197, (l_T_1197).f_LEN));
rt_int l_SIG_1199; memset(&l_SIG_1199, 0, sizeof l_SIG_1199);
l_SIG_1199 = ((rt_int)0LL);
rt_int l_FRAC_1200; memset(&l_FRAC_1200, 0, sizeof l_FRAC_1200);
l_FRAC_1200 = ((rt_int)0LL);
rt_int l_POINT_1201; memset(&l_POINT_1201, 0, sizeof l_POINT_1201);
l_POINT_1201 = 0;
rt_int l_EXP_1202; memset(&l_EXP_1202, 0, sizeof l_EXP_1202);
l_EXP_1202 = ((rt_int)0LL);
rt_int l_I_1203; memset(&l_I_1203, 0, sizeof l_I_1203);
l_I_1203 = ((rt_int)0LL);
for (;;) {
if ((l_I_1203 >= (l_T_1197).f_LEN)) goto L_end1204;
{
if (rt_b_eq(rt_b_slice(l_S_1198, l_I_1203, l_I_1203), rt_str("E", 1)))
{
goto L_end1204;
}
if (rt_b_eq(rt_b_slice(l_S_1198, l_I_1203, l_I_1203), rt_str(".", 1)))
{
l_POINT_1201 = 1;
}
else
{
if (((l_SIG_1199 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1198, l_I_1203, l_I_1203), rt_str("0", 1)))))
{
l_SIG_1199 = rt_add(l_SIG_1199, ((rt_int)1LL));
}
if (l_POINT_1201)
{
l_FRAC_1200 = rt_add(l_FRAC_1200, ((rt_int)1LL));
}
}
l_I_1203 = rt_add(l_I_1203, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1204: ;
if ((rt_sub(l_I_1203, r_BOOL_INT(l_POINT_1201)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1203 < (l_T_1197).f_LEN))
{
{
rt_int l_NEG_1205; memset(&l_NEG_1205, 0, sizeof l_NEG_1205);
l_NEG_1205 = 0;
l_I_1203 = rt_add(l_I_1203, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1198, l_I_1203, l_I_1203), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1198, l_I_1203, l_I_1203), rt_str("+", 1))))
{
l_NEG_1205 = rt_b_eq(rt_b_slice(l_S_1198, l_I_1203, l_I_1203), rt_str("-", 1));
l_I_1203 = rt_add(l_I_1203, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1203 >= (l_T_1197).f_LEN)) goto L_end1206;
{
if ((l_EXP_1202 <= ((rt_int)1000LL)))
{
l_EXP_1202 = rt_sub(rt_add(rt_mul(l_EXP_1202, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1198, l_I_1203, l_I_1203))), ((rt_int)48LL));
}
l_I_1203 = rt_add(l_I_1203, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1206: ;
if ((l_EXP_1202 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1205)
{
l_EXP_1202 = rt_neg(l_EXP_1202);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1199 > ((rt_int)0LL)))
{
{
rt_int l_P10_1207; memset(&l_P10_1207, 0, sizeof l_P10_1207);
l_P10_1207 = rt_sub(rt_add(rt_sub(l_SIG_1199, ((rt_int)1LL)), l_EXP_1202), l_FRAC_1200);
rt_int l_BITS_1208; memset(&l_BITS_1208, 0, sizeof l_BITS_1208);
l_BITS_1208 = rt_add(rt_quot((rt_mul(l_P10_1207, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1207 < ((rt_int)0LL)))
{
l_BITS_1208 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1207), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1208 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1209; memset(&l_CS_1209, 0, sizeof l_CS_1209);
l_CS_1209 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1210; memset(&l_P_1210, 0, sizeof l_P_1210);
l_P_1210 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1211; memset(&l_S_1211, 0, sizeof l_S_1211);
S_R10(&l_S_1211, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1212; memset(&l_Y_1212, 0, sizeof l_Y_1212);
l_Y_1212 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1212 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1212))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1209 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1209)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1209 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1209)))).f_BASE;
}
}
for (;;) {
if ((l_P_1210 == NULL)) goto L_end1213;
{
if ((((*(R21 *)rt_nil_check(l_P_1210))).f_IV == g_K_STR))
{
if ((l_CS_1209 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1211, r_CAT(l_S_1211, ((*(R21 *)rt_nil_check(l_P_1210))).f_NAME), 0);
}
else
{
{
R10 l_Q_1214; memset(&l_Q_1214, 0, sizeof l_Q_1214);
S_R10(&l_Q_1214, ((*(R21 *)rt_nil_check(l_P_1210))).f_NAME, 0);
rstr l_QS_1215; memset(&l_QS_1215, 0, sizeof l_QS_1215);
l_QS_1215 = rt_str_new((l_Q_1214).f_LEN);
rt_b_assign(&l_QS_1215, r_STR(l_Q_1214, (l_Q_1214).f_LEN));
{ rt_int it1217_lo = ((rt_int)0LL), it1217_hi = rt_sub((l_Q_1214).f_LEN, ((rt_int)1LL));
for (rt_int it1217 = it1217_lo; it1217 <= it1217_hi; it1217++) {
{
{
R10 l_LIT_1218; memset(&l_LIT_1218, 0, sizeof l_LIT_1218);
R12 * l_Y_1219; memset(&l_Y_1219, 0, sizeof l_Y_1219);
if (rt_b_eq(rt_b_slice(l_QS_1215, it1217, it1217), rt_str("'", 1)))
{
S_R10(&l_LIT_1218, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1218, r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1215, it1217, it1217)), rt_str("'", 1))), 0);
}
l_Y_1219 = r_FIND_LITERAL(l_LIT_1218, l_CS_1209);
if ((l_Y_1219 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1210))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1215, it1217, it1217)));
}
S_R10(&l_S_1211, r_CATS(l_S_1211, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1219))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1217 == it1217_hi) break;
} } L_end1216: ;
}
}
}
else
{
{
R12 * l_Y_1220; memset(&l_Y_1220, 0, sizeof l_Y_1220);
l_Y_1220 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1210))).f_NAME, l_CS_1209);
if ((l_Y_1220 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1210))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1210))).f_NAME);
}
S_R10(&l_S_1211, r_CATS(l_S_1211, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1220))).f_MV)), 0);
}
}
l_P_1210 = ((*(R21 *)rt_nil_check(l_P_1210))).f_NEXT;
}
RT_B_TICK();
} L_end1213: ;
{
R22 * l_T_1221; memset(&l_T_1221, 0, sizeof l_T_1221);
l_T_1221 = r_STR_TYPE(r_NUM((l_S_1211).f_LEN), r_SOME((l_S_1211).f_LEN));
((*(R22 *)rt_nil_check(l_T_1221))).f_BASE = l_CS_1209;
{ R26 rv1222 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1211), r_NUM((l_S_1211).f_LEN)), l_T_1221);
return rv1222; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1223; memset(&l_TS_1223, 0, sizeof l_TS_1223);
l_TS_1223 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1223))).f_NAME, p_NAME, 0);
{ R22 * rv1224 = r_RESOLVE(l_TS_1223);
return rv1224; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1225; memset(&l_Y_1225, 0, sizeof l_Y_1225);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1226; memset(&l_WT_1226, 0, sizeof l_WT_1226);
l_WT_1226 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1226))).f_KIND == g_T_ENUM))
{
l_Y_1225 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1226);
if ((!(l_Y_1225 == NULL)))
{
{ R26 rv1227 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1225))).f_MV), r_ENUM_RESULT(l_Y_1225, p_WANT));
return rv1227; }
}
}
}
}
l_Y_1225 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1228; memset(&l_FOUND_1228, 0, sizeof l_FOUND_1228);
l_FOUND_1228 = NULL;
rt_int l_N_1229; memset(&l_N_1229, 0, sizeof l_N_1229);
l_N_1229 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1225 == NULL)) goto L_end1230;
{
if ((((*(R12 *)rt_nil_check(l_Y_1225))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1228 == NULL))
{
l_FOUND_1228 = l_Y_1225;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1228))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1225))).f_T))).f_BASE)))
{
l_N_1229 = rt_add(l_N_1229, ((rt_int)1LL));
}
}
l_Y_1225 = r_LOOKUP_NEXT(l_Y_1225);
}
RT_B_TICK();
} L_end1230: ;
if ((l_FOUND_1228 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1229 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1231 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1228))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1228))).f_T);
return rv1231; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1232 = p_WANT;
return rv1232; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1233; memset(&l_T_1233, 0, sizeof l_T_1233);
l_T_1233 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1233))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1234 = l_T_1233;
return rv1234; }
}
}
{ R22 * rv1235 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1235; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1236; memset(&l_Y_1236, 0, sizeof l_Y_1236);
l_Y_1236 = r_LOOKUP(p_NAME);
if ((l_Y_1236 == NULL))
{
{ rt_int rv1237 = 0;
return rv1237; }
}
{ rt_int rv1238 = (((((*(R12 *)rt_nil_check(l_Y_1236))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1236))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1236))).f_KIND == g_Y_ROUTINE));
return rv1238; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1239; memset(&l_Y_1239, 0, sizeof l_Y_1239);
l_Y_1239 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1239 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1239))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1239))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1240; memset(&l_WRITABLE_1240, 0, sizeof l_WRITABLE_1240);
l_WRITABLE_1240 = r_CHECK_IMPORTED(l_Y_1239, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1241 = r_MKLV(r_OBJ_ACCESS(l_Y_1239), ((*(R12 *)rt_nil_check(l_Y_1239))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1239))).f_KIND == g_Y_VAR) && l_WRITABLE_1240), r_NO_TEXT());
return rv1241; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1239))).f_KIND == g_Y_GEN))
{
{ R26 rv1242 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1239))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1239))).f_T);
return rv1242; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1239))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1243 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1243; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1239))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1239))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1244; memset(&l_N_1244, 0, sizeof l_N_1244);
l_N_1244 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1244))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1245 = r_CALL_EXPR(l_N_1244, p_WANT);
return rv1245; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1246; memset(&l_A_1246, 0, sizeof l_A_1246);
l_A_1246 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1246)))
{
{ R26 rv1247 = r_EXPR(l_A_1246, NULL);
return rv1247; }
}
if ((((*(R21 *)rt_nil_check(l_A_1246))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1246))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1246))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1248; memset(&l_B_1248, 0, sizeof l_B_1248);
S_R26(&l_B_1248, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1246))).f_A))).f_A), 0);
R10 l_I_1249; memset(&l_I_1249, 0, sizeof l_I_1249);
S_R10(&l_I_1249, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1246))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1248).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1250 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1248).f_C, l_I_1249, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1248).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1250; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1251 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1248).f_C, l_I_1249, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1248).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1251; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1246))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1246))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1246))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1246))).f_A))).f_A))).f_NAME))
{
{ R26 rv1252 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1246))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1246))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1252; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1246))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1253; memset(&l_Y_1253, 0, sizeof l_Y_1253);
l_Y_1253 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1246))).f_NAME);
if ((!(l_Y_1253 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1253))).f_KIND == g_Y_TYPE))
{
{ R26 rv1254 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1246))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1254; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1246))).f_NAME))
{
{ R26 rv1255 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1246))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1255; }
}
}
}
{
R26 l_B_1256; memset(&l_B_1256, 0, sizeof l_B_1256);
S_R26(&l_B_1256, r_EXPR(l_A_1246, NULL), 0);
R22 * l_BT_1257; memset(&l_BT_1257, 0, sizeof l_BT_1257);
l_BT_1257 = (l_B_1256).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1257))).f_KIND == g_T_REC))
{
{
R24 * l_F_1258; memset(&l_F_1258, 0, sizeof l_F_1258);
l_F_1258 = r_FIND_VFIELD(l_BT_1257, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1258 == NULL)))
{
r_CHECK_VARIANT(l_F_1258, l_BT_1257, l_A_1246, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1259 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1256).f_C, ((*(R24 *)rt_nil_check(l_F_1258))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1258))).f_T, ((l_B_1256).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1258))).f_KIND == ((rt_int)0LL))), (l_B_1256).f_C);
return rv1259; }
}
}
}
{ R26 rv1260 = r_ATTRIBUTE(l_B_1256, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1260; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1261 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1261; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1262 = 1;
return rv1262; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1263 = 1;
return rv1263; }
}
{
rstr l_S_1264; memset(&l_S_1264, 0, sizeof l_S_1264);
l_S_1264 = rt_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN);
rt_b_assign(&l_S_1264, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1266_lo = ((rt_int)0LL), it1266_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1266 = it1266_lo; it1266 <= it1266_hi; it1266++) {
{
if (rt_b_eq(rt_b_slice(l_S_1264, it1266, it1266), rt_str(".", 1)))
{
{ rt_int rv1267 = 0;
return rv1267; }
}
}
RT_B_TICK();
if (it1266 == it1266_hi) break;
} } L_end1265: ;
}
{ rt_int rv1268 = 1;
return rv1268; }
}
{ rt_int rv1269 = 0;
return rv1269; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1270 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1270; }
}
{ rt_int rv1271 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1271; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1272 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1272; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1273; memset(&l_TAGV_1273, 0, sizeof l_TAGV_1273);
S_R23(&l_TAGV_1273, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1273).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1273).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1274; memset(&l_F_1274, 0, sizeof l_F_1274);
l_F_1274 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1275; memset(&l_A_1275, 0, sizeof l_A_1275);
l_A_1275 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1274 == NULL)) goto L_end1276;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1274))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1275 == NULL))
{
{ R23 rv1277 = r_NO_MVAL();
return rv1277; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1274))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1275))).f_ANYARG)
{
{ R23 rv1278 = r_NO_MVAL();
return rv1278; }
}
{ R23 rv1279 = ((*(R25 *)rt_nil_check(l_A_1275))).f_MLO;
return rv1279; }
}
l_A_1275 = ((*(R25 *)rt_nil_check(l_A_1275))).f_NEXT;
}
l_F_1274 = ((*(R24 *)rt_nil_check(l_F_1274))).f_NEXT;
}
RT_B_TICK();
} L_end1276: ;
{ R23 rv1280 = r_NO_MVAL();
return rv1280; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1281; memset(&l_P_1281, 0, sizeof l_P_1281);
l_P_1281 = p_L;
for (;;) {
if ((l_P_1281 == NULL)) goto L_end1282;
{
if ((((*(R21 *)rt_nil_check(l_P_1281))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1281))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1281))).f_B, p_T)).f_V)))
{
{ rt_int rv1283 = 1;
return rv1283; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1281, p_T)).f_V == p_V))
{
{ rt_int rv1284 = 1;
return rv1284; }
}
l_P_1281 = ((*(R21 *)rt_nil_check(l_P_1281))).f_NEXT;
}
RT_B_TICK();
} L_end1282: ;
{ rt_int rv1285 = 0;
return rv1285; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1286 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1286; }
}
{ R26 rv1287 = r_EXPR(p_E, NULL);
return rv1287; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1288; memset(&l_A_1288, 0, sizeof l_A_1288);
S_R26(&l_A_1288, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1289; memset(&l_I_1289, 0, sizeof l_I_1289);
S_R10(&l_I_1289, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1288).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1290 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1288).f_C, (l_A_1288).f_C, l_I_1289, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1288).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1290; }
}
}
}
{ R26 rv1291 = r_INDEX_EXPR2(p_E);
return rv1291; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1292; memset(&l_B_1292, 0, sizeof l_B_1292);
S_R26(&l_B_1292, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1293; memset(&l_T_1293, 0, sizeof l_T_1293);
l_T_1293 = r_REAL_TYPE((l_B_1292).f_T);
R21 * l_S_1294; memset(&l_S_1294, 0, sizeof l_S_1294);
l_S_1294 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1295; memset(&l_IX_1295, 0, sizeof l_IX_1295);
S_R10(&l_IX_1295, r_MK(rt_str("", 0)), 0);
rt_int l_N_1296; memset(&l_N_1296, 0, sizeof l_N_1296);
l_N_1296 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1293))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1294 == NULL)) goto L_end1297;
{
if ((l_N_1296 > ((rt_int)0LL)))
{
S_R10(&l_IX_1295, r_CATS(l_IX_1295, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1295, r_CAT(l_IX_1295, r_INT_EXPR(l_S_1294)), 0);
l_N_1296 = rt_add(l_N_1296, ((rt_int)1LL));
l_S_1294 = ((*(R21 *)rt_nil_check(l_S_1294))).f_NEXT;
}
RT_B_TICK();
} L_end1297: ;
if ((!(l_N_1296 == ((*(R22 *)rt_nil_check(l_T_1293))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1296 == ((rt_int)1LL)))
{
{ R26 rv1298 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1292).f_C, l_IX_1295, (l_B_1292).f_C, (l_B_1292).f_C), ((*(R22 *)rt_nil_check(l_T_1293))).f_ELEM, (l_B_1292).f_LVAL, r_NO_TEXT());
return rv1298; }
}
{
R10 l_X_1299; memset(&l_X_1299, 0, sizeof l_X_1299);
S_R10(&l_X_1299, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1292).f_C, r_NUM(l_N_1296), (l_B_1292).f_C, (l_B_1292).f_C), 0);
{ R26 rv1300 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1299, l_IX_1295), ((*(R22 *)rt_nil_check(l_T_1293))).f_ELEM, (l_B_1292).f_LVAL, r_NO_TEXT());
return rv1300; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1301 = r_MKN(rt_str("NEGATE_", 7));
return rv1301; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1302 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1302; }
}
{ R10 rv1303 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1303; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1304 = r_MKN(rt_str("ADD_", 4));
return rv1304; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1305 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1305; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1306 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1306; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1307 = r_MKN(rt_str("DIVIDE_", 7));
return rv1307; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1308 = r_MKN(rt_str("MODULUS_", 8));
return rv1308; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1309 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1309; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1310 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1310; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1311 = r_MKN(rt_str("EQUAL_", 6));
return rv1311; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1312 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1312; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1313 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1313; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1314 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1314; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1315 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1315; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1316 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1316; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1317 = r_MKN(rt_str("AND_", 4));
return rv1317; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1318 = r_MKN(rt_str("OR_", 3));
return rv1318; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1319 = r_MKN(rt_str("XOR_", 4));
return rv1319; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1320 = r_MKN(rt_str("IMPLIES_", 8));
return rv1320; }
}
{ R10 rv1321 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1321; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1322; memset(&l_A_1322, 0, sizeof l_A_1322);
l_A_1322 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1322)), ({ R27 rc1323; memset(&rc1323, 0, sizeof rc1323);  rc1323.f_E = NULL; S_R26(&rc1323.f_V, p_V, 0); rc1323.f_HAVE = 1; rc1323.f_MODE = g_M_IN; rc1323.f_NEXT = p_NEXT; rc1323; }), 0);
{ R27 * rv1324 = l_A_1322;
return rv1324; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1325; memset(&l_A_1325, 0, sizeof l_A_1325);
l_A_1325 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1325)), ({ R27 rc1326; memset(&rc1326, 0, sizeof rc1326);  rc1326.f_E = p_E; S_R26(&rc1326.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1326.f_HAVE = 0; rc1326.f_MODE = p_MODE; rc1326.f_NEXT = p_NEXT; rc1326; }), 0);
{ R27 * rv1327 = l_A_1325;
return rv1327; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1328; memset(&l_Y_1328, 0, sizeof l_Y_1328);
l_Y_1328 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1328 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1328 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1329 = l_Y_1328;
return rv1329; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1330; memset(&l_Y_1330, 0, sizeof l_Y_1330);
l_Y_1330 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1330 == NULL)) goto L_end1331;
{
if ((((*(R12 *)rt_nil_check(l_Y_1330))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1332 = 1;
return rv1332; }
}
l_Y_1330 = r_LOOKUP_NEXT(l_Y_1330);
}
RT_B_TICK();
} L_end1331: ;
l_Y_1330 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1330 == NULL)) goto L_end1333;
{
if ((((*(R12 *)rt_nil_check(l_Y_1330))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1334 = 1;
return rv1334; }
}
l_Y_1330 = r_LOOKUP_NEXT(l_Y_1330);
}
RT_B_TICK();
} L_end1333: ;
{ rt_int rv1335 = 0;
return rv1335; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1336; memset(&l_Q_1336, 0, sizeof l_Q_1336);
l_Q_1336 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1337; memset(&l_R_1337, 0, sizeof l_R_1337);
l_R_1337 = NULL;
if ((l_Q_1336 == NULL))
{
{ R27 * rv1338 = NULL;
return rv1338; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1336))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1337 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1336))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1336))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1336))).f_B == NULL)))
{
l_R_1337 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1336))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1337);
}
{ R27 * rv1339 = l_R_1337;
return rv1339; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1340; memset(&l_ARGS_1340, 0, sizeof l_ARGS_1340);
l_ARGS_1340 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1341; memset(&l_Y_1341, 0, sizeof l_Y_1341);
l_Y_1341 = r_USER_OPERATOR(p_NAME, l_ARGS_1340, p_LINE);
if ((l_Y_1341 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1342 = r_CALL_SYM(l_Y_1341, l_ARGS_1340, p_LINE);
return rv1342; }
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
{ R10 rv1343 = p_C;
return rv1343; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1344 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1344; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1345 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1345; }
}
{ R10 rv1346 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1346; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1347 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1347; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1348; memset(&l_RT_1348, 0, sizeof l_RT_1348);
l_RT_1348 = r_REAL_TYPE(p_T);
R22 * l_VT_1349; memset(&l_VT_1349, 0, sizeof l_VT_1349);
l_VT_1349 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1349))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_PTR)))
{
{ R10 rv1350 = (p_V).f_C;
return rv1350; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1349))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1349)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1351 = (p_V).f_C;
return rv1351; }
}
if ((!r_SAME_CLASS(l_RT_1348, l_VT_1349)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1349), (r_TYPE_NAME(l_VT_1349)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1348), (r_TYPE_NAME(l_RT_1348)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1348))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1348))).f_SCALE))
{
{ R10 rv1352 = r_RANGE_CHECK(l_RT_1348, (p_V).f_C, p_SELF);
return rv1352; }
}
{ R10 rv1353 = r_RANGE_CHECK(l_RT_1348, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1348))).f_SCALE)), p_SELF);
return rv1353; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1348))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1349))).f_SCALE)))
{
{ R10 rv1354 = r_RANGE_CHECK(l_RT_1348, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1348))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1354; }
}
{ R10 rv1355 = r_RANGE_CHECK(l_RT_1348, (p_V).f_C, p_SELF);
return rv1355; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1348))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1348) || r_HAS_VALUES(l_VT_1349)))) && (!r_SAME_REPS(l_RT_1348, l_VT_1349))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1356 = r_RANGE_CHECK(l_RT_1348, (p_V).f_C, p_SELF);
return rv1356; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RT_1348))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1349))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1348))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1349))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1348), r_TARGET(l_VT_1349))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1348)) && (!r_HAS_ANY(l_VT_1349))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1348))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1349))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1348))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1348))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1349))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1357 = (p_V).f_C;
return rv1357; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1358; memset(&l_ARGS_1358, 0, sizeof l_ARGS_1358);
l_ARGS_1358 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1359; memset(&l_Y_1359, 0, sizeof l_Y_1359);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1360; memset(&l_SAVED_Q_1360, 0, sizeof l_SAVED_Q_1360);
l_SAVED_Q_1360 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1361; memset(&l_X_1361, 0, sizeof l_X_1361);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1361 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1360;
if ((!(l_X_1361 == NULL)))
{
{
R27 * l_P_1362; memset(&l_P_1362, 0, sizeof l_P_1362);
l_P_1362 = l_X_1361;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1362))).f_NEXT == NULL)) goto L_end1363;
{
l_P_1362 = ((*(R27 *)rt_nil_check(l_P_1362))).f_NEXT;
}
RT_B_TICK();
} L_end1363: ;
((*(R27 *)rt_nil_check(l_P_1362))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1358))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1358))).f_NEXT = l_X_1361;
}
}
}
}
{
R27 * l_LAST_1364; memset(&l_LAST_1364, 0, sizeof l_LAST_1364);
l_LAST_1364 = l_ARGS_1358;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1364))).f_NEXT == NULL)) goto L_end1365;
{
l_LAST_1364 = ((*(R27 *)rt_nil_check(l_LAST_1364))).f_NEXT;
}
RT_B_TICK();
} L_end1365: ;
((*(R27 *)rt_nil_check(l_LAST_1364))).f_MODE = g_M_OUT;
l_Y_1359 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1358, p_LINE, 0);
if ((l_Y_1359 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1364))).f_MODE = g_M_INOUT;
l_Y_1359 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1358, p_LINE, 0);
}
}
if ((l_Y_1359 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1366 = r_CATS((r_CALL_SYM(l_Y_1359, l_ARGS_1358, p_LINE)).f_C, rt_str(";", 1));
return rv1366; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1367 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1367; }
}
}
{ R10 rv1368 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1368; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1369 = 1;
return rv1369; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1370 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1370; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1371; memset(&l_F_1371, 0, sizeof l_F_1371);
l_F_1371 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1371 == NULL)) goto L_end1372;
{
if ((((*(R24 *)rt_nil_check(l_F_1371))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1371))).f_T))
{
{ rt_int rv1373 = 1;
return rv1373; }
}
}
l_F_1371 = ((*(R24 *)rt_nil_check(l_F_1371))).f_NEXT;
}
RT_B_TICK();
} L_end1372: ;
}
}
{ rt_int rv1374 = 0;
return rv1374; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1375 = 0;
return rv1375; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1376 = 0;
return rv1376; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1377 = 0;
return rv1377; }
}
{ rt_int rv1378 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1378; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1379 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1379; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1380; memset(&l_D_1380, 0, sizeof l_D_1380);
S_R10(&l_D_1380, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1381; memset(&l_S_1381, 0, sizeof l_S_1381);
S_R10(&l_S_1381, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1382; memset(&l_I_1382, 0, sizeof l_I_1382);
S_R10(&l_I_1382, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1383; memset(&l_N_1383, 0, sizeof l_N_1383);
S_R10(&l_N_1383, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1384; memset(&l_VE_1384, 0, sizeof l_VE_1384);
l_VE_1384 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1385; memset(&l_R_1385, 0, sizeof l_R_1385);
S_R10(&l_R_1385, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1380, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1385, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1385, l_S_1381, p_RV), 0);
S_R10(&l_R_1385, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1385, l_N_1383, l_D_1380, l_D_1380), 0);
S_R10(&l_R_1385, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1385, l_S_1381, l_S_1381), 0);
S_R10(&l_R_1385, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1385, l_I_1382, l_N_1383, l_D_1380), 0);
S_R10(&l_R_1385, r_FMT2(rt_str("@@->hi);", 8), l_R_1385, l_D_1380), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1385, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1385, l_I_1382, l_I_1382, l_I_1382), 0);
S_R10(&l_R_1385, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1385, l_I_1382, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1381, l_I_1382), r_NO_TEXT())), 0);
}
S_R10(&l_R_1385, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1385, l_I_1382, l_I_1382, l_I_1382), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1385, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1385, l_I_1382, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1384, r_FMT2(rt_str("@->p[@]", 7), l_D_1380, l_I_1382), r_FMT2(rt_str("@.p[@]", 6), l_S_1381, l_I_1382), p_LINE)), 0);
}
else
{
S_R10(&l_R_1385, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1385, l_I_1382, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1380, l_I_1382), r_FMT2(rt_str("@.p[@]", 6), l_S_1381, l_I_1382))), 0);
}
{ R10 rv1386 = l_R_1385;
return rv1386; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1387; memset(&l_D_1387, 0, sizeof l_D_1387);
S_R10(&l_D_1387, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1388; memset(&l_S_1388, 0, sizeof l_S_1388);
S_R10(&l_S_1388, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1389; memset(&l_F_1389, 0, sizeof l_F_1389);
l_F_1389 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1390; memset(&l_R_1390, 0, sizeof l_R_1390);
S_R10(&l_R_1390, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1387, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1390, r_FMT3(rt_str("@@ = @;", 7), l_R_1390, l_S_1388, p_RV), 0);
for (;;) {
if ((l_F_1389 == NULL)) goto L_end1391;
{
{
R10 l_DF_1392; memset(&l_DF_1392, 0, sizeof l_DF_1392);
S_R10(&l_DF_1392, r_FMT2(rt_str("@->@", 4), l_D_1387, ((*(R24 *)rt_nil_check(l_F_1389))).f_CNAME), 0);
R10 l_SF_1393; memset(&l_SF_1393, 0, sizeof l_SF_1393);
S_R10(&l_SF_1393, r_FMT2(rt_str("@.@", 3), l_S_1388, ((*(R24 *)rt_nil_check(l_F_1389))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1389))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1389))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1390, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1390, l_DF_1392, l_SF_1393), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1389))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1390, r_FMT3(rt_str("@ @ = @;", 8), l_R_1390, l_DF_1392, l_SF_1393), 0);
}
else
{
S_R10(&l_R_1390, r_FMT2(rt_str("@ @", 3), l_R_1390, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1389))).f_T, ((*(R24 *)rt_nil_check(l_F_1389))).f_T, l_DF_1392, l_SF_1393, p_LINE)), 0);
}
}
l_F_1389 = ((*(R24 *)rt_nil_check(l_F_1389))).f_NEXT;
}
RT_B_TICK();
} L_end1391: ;
{ R10 rv1394 = r_CATS(l_R_1390, rt_str(" }", 2));
return rv1394; }
}
}
{ R10 rv1395 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1395; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1396; memset(&l_ARGS_1396, 0, sizeof l_ARGS_1396);
l_ARGS_1396 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1397; memset(&l_Y_1397, 0, sizeof l_Y_1397);
l_Y_1397 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1396, p_LINE);
if ((l_Y_1397 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1398 = (r_CALL_SYM(l_Y_1397, l_ARGS_1396, p_LINE)).f_C;
return rv1398; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1399; memset(&l_X_1399, 0, sizeof l_X_1399);
S_R10(&l_X_1399, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1400; memset(&l_Z_1400, 0, sizeof l_Z_1400);
S_R10(&l_Z_1400, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1401; memset(&l_I_1401, 0, sizeof l_I_1401);
S_R10(&l_I_1401, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1402; memset(&l_N_1402, 0, sizeof l_N_1402);
S_R10(&l_N_1402, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1403; memset(&l_R_1403, 0, sizeof l_R_1403);
S_R10(&l_R_1403, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1399, p_A, l_Z_1400), 0);
S_R10(&l_R_1403, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1403, p_B, l_I_1401, l_N_1402), 0);
S_R10(&l_R_1403, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1403, l_X_1399, l_X_1399, l_Z_1400), 0);
S_R10(&l_R_1403, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1403, l_Z_1400, l_I_1401, l_N_1402), 0);
S_R10(&l_R_1403, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1403, l_X_1399, l_X_1399), 0);
S_R10(&l_R_1403, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1403, l_I_1401, l_I_1401, l_I_1401), 0);
S_R10(&l_R_1403, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1403, l_I_1401, l_I_1401, l_I_1401), 0);
S_R10(&l_R_1403, r_FMT2(rt_str("@@;", 3), l_R_1403, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1399, l_I_1401), r_FMT2(rt_str("@.p[@]", 6), l_Z_1400, l_I_1401), p_LINE)), 0);
{ R10 rv1404 = r_FMT2(rt_str("@ @r; })", 8), l_R_1403, l_I_1401);
return rv1404; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1405; memset(&l_X_1405, 0, sizeof l_X_1405);
S_R10(&l_X_1405, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1406; memset(&l_Z_1406, 0, sizeof l_Z_1406);
S_R10(&l_Z_1406, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1407; memset(&l_F_1407, 0, sizeof l_F_1407);
l_F_1407 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1408; memset(&l_R_1408, 0, sizeof l_R_1408);
S_R10(&l_R_1408, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1405, p_A, l_Z_1406), 0);
R10 l_EQ_1409; memset(&l_EQ_1409, 0, sizeof l_EQ_1409);
S_R10(&l_EQ_1409, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1408, r_FMT2(rt_str("@@;", 3), l_R_1408, p_B), 0);
for (;;) {
if ((l_F_1407 == NULL)) goto L_end1410;
{
{
R10 l_C_1411; memset(&l_C_1411, 0, sizeof l_C_1411);
S_R10(&l_C_1411, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1407))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1405, ((*(R24 *)rt_nil_check(l_F_1407))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1406, ((*(R24 *)rt_nil_check(l_F_1407))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1407))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1409, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1409, r_VARIANT_COND(l_F_1407, p_T, l_X_1405), l_C_1411), 0);
}
else
{
S_R10(&l_EQ_1409, r_FMT2(rt_str("@ && @", 6), l_EQ_1409, l_C_1411), 0);
}
}
l_F_1407 = ((*(R24 *)rt_nil_check(l_F_1407))).f_NEXT;
}
RT_B_TICK();
} L_end1410: ;
{ R10 rv1412 = r_FMT2(rt_str("@ @; })", 7), l_R_1408, l_EQ_1409);
return rv1412; }
}
}
{ R10 rv1413 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1413; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1414; memset(&l_A_1414, 0, sizeof l_A_1414);
S_R26(&l_A_1414, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1415; memset(&l_T_1415, 0, sizeof l_T_1415);
l_T_1415 = (l_A_1414).f_T;
R10 l_OP_1416; memset(&l_OP_1416, 0, sizeof l_OP_1416);
S_R10(&l_OP_1416, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1415))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1416, 1))))
{
{
R27 * l_ARGS_1417; memset(&l_ARGS_1417, 0, sizeof l_ARGS_1417);
l_ARGS_1417 = r_VAL_ARG(l_A_1414, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1418; memset(&l_Y_1418, 0, sizeof l_Y_1418);
l_Y_1418 = r_USER_OPERATOR(r_OP_NAME(l_OP_1416, 1), l_ARGS_1417, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1418 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1417))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1417))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1416, 1), l_ARGS_1417, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1416, 1));
}
}
if ((!(l_Y_1418 == NULL)))
{
{ R26 rv1419 = r_CALL_SYM(l_Y_1418, l_ARGS_1417, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1419; }
}
if ((((*(R22 *)rt_nil_check(l_T_1415))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1415));
}
}
}
if (r_TEQS(l_OP_1416, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1415))).f_KIND == g_T_BOOL))
{
{ R26 rv1420 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1414).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1420; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1415))).f_KIND == g_T_BITS))
{
{ R26 rv1421 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1414).f_C), l_T_1415);
return rv1421; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1415))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1416, rt_str("-", 1)))
{
{ R26 rv1422 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1414).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1415))).f_SCALE));
return rv1422; }
}
{ R26 rv1423 = r_MKET((l_A_1414).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1415))).f_SCALE));
return rv1423; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1415))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1424; memset(&l_FT_1424, 0, sizeof l_FT_1424);
l_FT_1424 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1415))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1416, rt_str("-", 1)))
{
{ R26 rv1425 = r_MKET(r_FLOAT_OP(l_OP_1416, r_MK(rt_str("0.0", 3)), (l_A_1414).f_C, l_FT_1424), l_FT_1424);
return rv1425; }
}
{ R26 rv1426 = r_MKET((l_A_1414).f_C, l_FT_1424);
return rv1426; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1415));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1427 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1427; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1428; memset(&l_OP_1428, 0, sizeof l_OP_1428);
S_R10(&l_OP_1428, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1429; memset(&l_A_1429, 0, sizeof l_A_1429);
R26 l_B_1430; memset(&l_B_1430, 0, sizeof l_B_1430);
if ((r_TEQS(l_OP_1428, rt_str("&", 1)) || r_TEQS(l_OP_1428, rt_str("!", 1))))
{
{
R23 l_MA_1431; memset(&l_MA_1431, 0, sizeof l_MA_1431);
S_R23(&l_MA_1431, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1432; memset(&l_CA_1432, 0, sizeof l_CA_1432);
S_R10(&l_CA_1432, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1433; memset(&l_CB_1433, 0, sizeof l_CB_1433);
S_R10(&l_CB_1433, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1428, rt_str("&", 1)))
{
{ R26 rv1434 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1432, l_CB_1433), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1434; }
}
{ R26 rv1435 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1432, l_CB_1433), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1435; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1430, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1429, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1430).f_T), 0);
}
else
{
S_R26(&l_A_1429, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1430, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1429).f_T), 0);
}
{ R26 rv1436 = r_APPLY_OPERATOR(p_E, l_OP_1428, l_A_1429, l_B_1430);
return rv1436; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1437; memset(&l_AT_1437, 0, sizeof l_AT_1437);
l_AT_1437 = (p_A).f_T;
R22 * l_BT_1438; memset(&l_BT_1438, 0, sizeof l_BT_1438);
l_BT_1438 = (p_B).f_T;
rt_int l_LINE_1439; memset(&l_LINE_1439, 0, sizeof l_LINE_1439);
l_LINE_1439 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1440; memset(&l_NAME_1440, 0, sizeof l_NAME_1440);
S_R10(&l_NAME_1440, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1440, r_MKN(rt_str_cat(rt_str("MD_", 3), r_STR(l_NAME_1440, (l_NAME_1440).f_LEN))), 0);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1440) || (((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1441; memset(&l_ARGS_1441, 0, sizeof l_ARGS_1441);
l_ARGS_1441 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1442; memset(&l_EXTRA_1442, 0, sizeof l_EXTRA_1442);
l_EXTRA_1442 = r_QUAL_ARGS(l_LINE_1439);
R12 * l_Y_1443; memset(&l_Y_1443, 0, sizeof l_Y_1443);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1442 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1442);
}
if ((!(l_EXTRA_1442 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1441))).f_NEXT))).f_NEXT = l_EXTRA_1442;
l_Y_1443 = r_USER_OPERATOR(l_NAME_1440, l_ARGS_1441, l_LINE_1439);
if ((!(l_Y_1443 == NULL)))
{
{ R26 rv1444 = r_CALL_SYM(l_Y_1443, l_ARGS_1441, l_LINE_1439);
return rv1444; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1441))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1440, l_ARGS_1441, l_LINE_1439) == NULL)))
{
r_FAILT(l_LINE_1439, rt_str_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1440);
}
}
else
{
l_Y_1443 = r_USER_OPERATOR(l_NAME_1440, l_ARGS_1441, l_LINE_1439);
if ((!(l_Y_1443 == NULL)))
{
{ R26 rv1445 = r_CALL_SYM(l_Y_1443, l_ARGS_1441, l_LINE_1439);
return rv1445; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1446; memset(&l_Q_1446, 0, sizeof l_Q_1446);
l_Q_1446 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1441, l_LINE_1439);
if ((!(l_Q_1446 == NULL)))
{
{ R26 rv1447 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1446, l_ARGS_1441, l_LINE_1439)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1447; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1439, rt_str("no such operation for the abstract type: ", 41), l_NAME_1440);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1439, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1448 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1448; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1449 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1449; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_INT)))
{
{ R26 rv1450 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1450; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1451 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1451; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1437, l_BT_1438)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1437))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1439, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1452 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1452; }
}
r_FAILT(l_LINE_1439, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_BITS)))))
{
{
R22 * l_T_1453; memset(&l_T_1453, 0, sizeof l_T_1453);
l_T_1453 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1453))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1437))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1437))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1438))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1453))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1437))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1438))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1453))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1453))).f_MLEN).f_V), 0);
}
{ R26 rv1454 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1453);
return rv1454; }
}
}
r_FAIL(l_LINE_1439, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_BITS)))
{
{ R26 rv1455 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1437);
return rv1455; }
}
r_FAILT(l_LINE_1439, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_INT)))
{
{ R26 rv1456 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1456; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1457; memset(&l_T_1457, 0, sizeof l_T_1457);
l_T_1457 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1437))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1438))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1458 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1457), l_T_1457);
return rv1458; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1439, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1437))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1438))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1439, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1439, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1437), (r_TYPE_NAME(l_AT_1437)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1459 = 0;
return rv1459; }
}
{ rt_int rv1460 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1460; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1461; memset(&l_T_1461, 0, sizeof l_T_1461);
l_T_1461 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1461))).f_SCALE = p_P;
{ R22 * rv1462 = l_T_1461;
return rv1462; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1463 = r_MK(rt_str("1", 1));
return rv1463; }
}
{ R10 rv1464 = r_MK(rt_str("0", 1));
return rv1464; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1465 = r_MK(rt_str("1", 1));
return rv1465; }
}
}
{ R10 rv1466 = r_MK(rt_str("0", 1));
return rv1466; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1467 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1467; }
}
}
{ rt_int rv1468 = ((rt_int)0LL);
return rv1468; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1469 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1469; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1470 = r_MK(rt_str("and", 3));
return rv1470; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1471 = r_MK(rt_str("or", 2));
return rv1471; }
}
{ R10 rv1472 = r_MK(rt_str("xor", 3));
return rv1472; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1473 = p_A;
return rv1473; }
}
{ rt_int rv1474 = p_B;
return rv1474; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1475 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1475; }
}
{ R10 rv1476 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1476; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1477; memset(&l_AT_1477, 0, sizeof l_AT_1477);
l_AT_1477 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1478; memset(&l_BT_1478, 0, sizeof l_BT_1478);
l_BT_1478 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1479; memset(&l_R_1479, 0, sizeof l_R_1479);
if (((((*(R22 *)rt_nil_check(l_AT_1477))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1478))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1477))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1478))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1477))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1478))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1479, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1477))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1478))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1479, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1477, l_BT_1478)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1477))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R22 *)rt_nil_check(l_AT_1477))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1477) || r_HAS_ANY(l_BT_1478)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if (r_HAS_ABS_PART(l_AT_1477))
{
S_R10(&l_R_1479, r_COMPONENT_EQUAL(l_AT_1477, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1479, r_EQUAL_CODE(l_AT_1477, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1479, r_FMT1(rt_str("(!@)", 4), l_R_1479), 0);
}
{ R26 rv1480 = r_MKET(l_R_1479, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1480; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1481; memset(&l_S1_1481, 0, sizeof l_S1_1481);
l_S1_1481 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1482; memset(&l_S2_1482, 0, sizeof l_S2_1482);
l_S2_1482 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1483; memset(&l_S_1483, 0, sizeof l_S_1483);
l_S_1483 = r_MAX_INT(l_S1_1481, l_S2_1482);
R10 l_FN_1484; memset(&l_FN_1484, 0, sizeof l_FN_1484);
S_R10(&l_FN_1484, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1484, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1485 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1484, r_RESCALE_C((p_A).f_C, l_S1_1481, l_S_1483), r_RESCALE_C((p_B).f_C, l_S2_1482, l_S_1483)), r_INT_TYPE(l_S_1483));
return rv1485; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1486 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1481, l_S2_1482)));
return rv1486; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1487 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1481, l_S2_1482)));
return rv1487; }
}
{ R26 rv1488 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1481, l_S2_1482)));
return rv1488; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1489 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1481));
return rv1489; }
}
{ R26 rv1490 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1481));
return rv1490; }
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
rt_int l_S1_1491; memset(&l_S1_1491, 0, sizeof l_S1_1491);
l_S1_1491 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1492; memset(&l_S2_1492, 0, sizeof l_S2_1492);
l_S2_1492 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1493; memset(&l_RND_1493, 0, sizeof l_RND_1493);
S_R10(&l_RND_1493, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1494 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1494; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1493, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1495 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1495; }
}
{
R23 l_SM_1496; memset(&l_SM_1496, 0, sizeof l_SM_1496);
S_R23(&l_SM_1496, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1497; memset(&l_S_1497, 0, sizeof l_S_1497);
l_S_1497 = (l_SM_1496).f_V;
rt_int l_SR_1498; memset(&l_SR_1498, 0, sizeof l_SR_1498);
l_SR_1498 = r_MAX_INT(l_S1_1491, l_S2_1492);
if ((!(l_SM_1496).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1499 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1497, l_S1_1491), l_S2_1492)), l_RND_1493), r_INT_TYPE(l_S_1497));
return rv1499; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1500 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1497, l_S1_1491), l_S2_1492)), l_RND_1493), r_INT_TYPE(l_S_1497));
return rv1500; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1501 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1491), r_NUM(l_S_1497), l_RND_1493), r_INT_TYPE(l_S_1497));
return rv1501; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1502; memset(&l_SUB_1502, 0, sizeof l_SUB_1502);
S_R10(&l_SUB_1502, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1502, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1503 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1491), (p_B).f_C, r_NUM(l_S2_1492)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1497), l_SUB_1502, l_RND_1493)), r_INT_TYPE(l_S_1497));
return rv1503; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1504; memset(&l_V_1504, 0, sizeof l_V_1504);
S_R26(&l_V_1504, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1505; memset(&l_T_1505, 0, sizeof l_T_1505);
l_T_1505 = r_REAL_TYPE((l_V_1504).f_T);
R21 * l_R_1506; memset(&l_R_1506, 0, sizeof l_R_1506);
l_R_1506 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1507; memset(&l_TMP_1507, 0, sizeof l_TMP_1507);
S_R10(&l_TMP_1507, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1508; memset(&l_LO_1508, 0, sizeof l_LO_1508);
R26 l_HI_1509; memset(&l_HI_1509, 0, sizeof l_HI_1509);
R10 l_LOC_1510; memset(&l_LOC_1510, 0, sizeof l_LOC_1510);
R10 l_HIC_1511; memset(&l_HIC_1511, 0, sizeof l_HIC_1511);
R10 l_LO_OP_1512; memset(&l_LO_OP_1512, 0, sizeof l_LO_OP_1512);
S_R10(&l_LO_OP_1512, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1513; memset(&l_HI_OP_1513, 0, sizeof l_HI_OP_1513);
S_R10(&l_HI_OP_1513, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1508, r_EXPR(((*(R21 *)rt_nil_check(l_R_1506))).f_A, l_T_1505), 0);
S_R26(&l_HI_1509, r_EXPR(((*(R21 *)rt_nil_check(l_R_1506))).f_B, l_T_1505), 0);
if (((((*(R22 *)rt_nil_check(l_T_1505))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1505))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1505))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1505))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1505))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1508).f_T), l_T_1505)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1509).f_T), l_T_1505))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1506))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1506))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1512, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1506))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1513, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1505))).f_KIND == g_T_INT))
{
{
R26 l_X_1514; memset(&l_X_1514, 0, sizeof l_X_1514);
S_R26(&l_X_1514, r_MKET(l_TMP_1507, (l_V_1504).f_T), 0);
S_R10(&l_LOC_1510, r_FIXED_COMPARE(l_LO_1508, l_X_1514, l_LO_OP_1512), 0);
S_R10(&l_HIC_1511, r_FIXED_COMPARE(l_X_1514, l_HI_1509, l_HI_OP_1513), 0);
}
}
else
{
S_R10(&l_LOC_1510, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1508).f_C, l_LO_OP_1512, l_TMP_1507), 0);
S_R10(&l_HIC_1511, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1507, l_HI_OP_1513, (l_HI_1509).f_C), 0);
}
{ R26 rv1515 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1505), l_TMP_1507, (l_V_1504).f_C, l_LOC_1510), r_FMT1(rt_str("@; })", 5), l_HIC_1511)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1515; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1516 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1516; }
}
{ R10 rv1517 = (p_V).f_C;
return rv1517; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1518 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1518; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1519; memset(&l_B_1519, 0, sizeof l_B_1519);
l_B_1519 = ((rt_int)0LL);
rt_int l_P_1520; memset(&l_P_1520, 0, sizeof l_P_1520);
l_P_1520 = ((rt_int)1LL);
for (;;) {
if ((l_P_1520 >= p_N)) goto L_end1521;
{
l_B_1519 = rt_add(l_B_1519, ((rt_int)1LL));
l_P_1520 = rt_mul(l_P_1520, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1521: ;
{ rt_int rv1522 = l_B_1519;
return rv1522; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1523; memset(&l_M_1523, 0, sizeof l_M_1523);
S_R23(&l_M_1523, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1523).f_OK)
{
{ rt_int rv1524 = (l_M_1523).f_V;
return rv1524; }
}
}
}
}
{ rt_int rv1525 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1525; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1526 = ((rt_int)100000000LL);
return rv1526; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1527 = ((rt_int)15LL);
return rv1527; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1528 = ((rt_int)7LL);
return rv1528; }
}
{ rt_int rv1529 = ((rt_int)15LL);
return rv1529; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1530; memset(&l_SINGLE_1530, 0, sizeof l_SINGLE_1530);
l_SINGLE_1530 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1530)
{
{ rt_int rv1531 = rt_neg(((rt_int)125LL));
return rv1531; }
}
{ rt_int rv1532 = rt_neg(((rt_int)1021LL));
return rv1532; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1530)
{
{ rt_int rv1533 = ((rt_int)128LL);
return rv1533; }
}
{ rt_int rv1534 = ((rt_int)1024LL);
return rv1534; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1530)
{
{ rt_int rv1535 = ((rt_int)25LL);
return rv1535; }
}
{ rt_int rv1536 = ((rt_int)54LL);
return rv1536; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1530)
{
{ rt_int rv1537 = ((rt_int)8LL);
return rv1537; }
}
{ rt_int rv1538 = ((rt_int)11LL);
return rv1538; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1530)
{
{ rt_int rv1539 = ((rt_int)32LL);
return rv1539; }
}
{ rt_int rv1540 = ((rt_int)64LL);
return rv1540; }
}
{ rt_int rv1541 = ((rt_int)0LL);
return rv1541; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1542; memset(&l_K_1542, 0, sizeof l_K_1542);
l_K_1542 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1542 == g_T_ABS))
{
{ R23 rv1543 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1543; }
}
else if ((l_K_1542 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1544 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1544; }
}
}
{ R23 rv1545 = r_SOME(((rt_int)64LL));
return rv1545; }
}
else if ((l_K_1542 == g_T_FLOAT))
{
{ R23 rv1546 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1546; }
}
else if ((l_K_1542 == g_T_BOOL))
{
{ R23 rv1547 = r_SOME(((rt_int)1LL));
return rv1547; }
}
else if ((l_K_1542 == g_T_ENUM))
{
{ R23 rv1548 = r_SOME(r_ENUM_SIZE(p_T));
return rv1548; }
}
else if ((l_K_1542 == g_T_BITS))
{
{ R23 rv1549 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1549; }
}
else if ((l_K_1542 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1550 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1550; }
}
}
else if (((l_K_1542 == g_T_PTR) || (l_K_1542 == g_T_SEM)))
{
{ R23 rv1551 = r_SOME(((rt_int)64LL));
return rv1551; }
}
{ R23 rv1552 = r_NO_MVAL();
return rv1552; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1553; memset(&l_T_1553, 0, sizeof l_T_1553);
l_T_1553 = (p_B).f_T;
rt_int l_K_1554; memset(&l_K_1554, 0, sizeof l_K_1554);
l_K_1554 = ((*(R22 *)rt_nil_check(l_T_1553))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1555 = r_SIZE_OF(l_T_1553, (p_B).f_C);
return rv1555; }
}
if ((l_K_1554 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1556 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE);
return rv1556; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1557 = r_INT_ET(((rt_int)2LL));
return rv1557; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1558 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1558; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1559 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1559; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1560 = r_MKET(((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE));
return rv1560; }
}
{ R26 rv1561 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE));
return rv1561; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1553))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1562 = r_MKET(((*(R22 *)rt_nil_check(l_T_1553))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE));
return rv1562; }
}
{ R26 rv1563 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE));
return rv1563; }
}
}
else if ((l_K_1554 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1564 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE);
return rv1564; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1565 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE));
return rv1565; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1566 = r_INT_ET(((rt_int)2LL));
return rv1566; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1567 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE, p_NAME));
return rv1567; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1568; memset(&l_MT_1568, 0, sizeof l_MT_1568);
l_MT_1568 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE));
R10 l_C_1569; memset(&l_C_1569, 0, sizeof l_C_1569);
S_R10(&l_C_1569, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1569, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1570 = r_MKET(((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C, l_MT_1568);
return rv1570; }
}
{ R26 rv1571 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1569), l_MT_1568);
return rv1571; }
}
if (((((*(R22 *)rt_nil_check(l_T_1553))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1572 = r_MKET(((*(R22 *)rt_nil_check(l_T_1553))).f_HI_C, l_MT_1568);
return rv1572; }
}
{ R26 rv1573 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1569), l_MT_1568);
return rv1573; }
}
}
}
else if ((l_K_1554 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1574 = r_MKET(((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1553))).f_BASE);
return rv1574; }
}
{ R26 rv1575 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1553))).f_BASE);
return rv1575; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1553))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1576 = r_MKET(((*(R22 *)rt_nil_check(l_T_1553))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1553))).f_BASE);
return rv1576; }
}
{ R26 rv1577 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1553))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1553))).f_BASE);
return rv1577; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1578 = r_MKET(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1553))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1553))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1553))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1578; }
}
{ R26 rv1579 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1553))).f_BASE))).f_NLITS);
return rv1579; }
}
}
else if (((l_K_1554 == g_T_STR) || (l_K_1554 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1580 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1580; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1581 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1581; }
}
}
else if ((l_K_1554 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1582 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1553))).f_DIMS);
return rv1582; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1553))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1583 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1583; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1584 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1584; }
}
}
else if ((l_K_1554 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1585 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1585; }
}
{ R26 rv1586 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1586; }
}
}
else if (((l_K_1554 == g_T_ABS) || (l_K_1554 == g_T_REC)))
{
{
R22 * l_U_1587; memset(&l_U_1587, 0, sizeof l_U_1587);
l_U_1587 = l_T_1553;
if ((l_K_1554 == g_T_ABS))
{
l_U_1587 = ((*(R22 *)rt_nil_check(l_T_1553))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1587))).f_KIND == g_T_REC))
{
{
R24 * l_F_1588; memset(&l_F_1588, 0, sizeof l_F_1588);
l_F_1588 = r_FIND_FIELD(l_U_1587, p_NAME);
if ((!(l_F_1588 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1588))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1589 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1588))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1588))).f_T);
return rv1589; }
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
R21 * l_N_1590; memset(&l_N_1590, 0, sizeof l_N_1590);
l_N_1590 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1590))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1591 = l_N_1590;
return rv1591; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1592; memset(&l_K_1592, 0, sizeof l_K_1592);
l_K_1592 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1592 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1593 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1593; }
}
}
{ R26 rv1594 = r_INT_ET(((rt_int)64LL));
return rv1594; }
}
else if ((l_K_1592 == g_T_FLOAT))
{
{ R26 rv1595 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1595; }
}
else if ((l_K_1592 == g_T_BOOL))
{
{ R26 rv1596 = r_INT_ET(((rt_int)1LL));
return rv1596; }
}
else if ((l_K_1592 == g_T_ENUM))
{
{ R26 rv1597 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1597; }
}
else if ((l_K_1592 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1598 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1598; }
}
{ R26 rv1599 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1599; }
}
else if ((l_K_1592 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1600 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1600; }
}
{ R26 rv1601 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1601; }
}
else if (((l_K_1592 == g_T_PTR) || (l_K_1592 == g_T_SEM)))
{
{ R26 rv1602 = r_INT_ET(((rt_int)64LL));
return rv1602; }
}
else if ((l_K_1592 == g_T_ABS))
{
{ R26 rv1603 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1603; }
}
else if ((l_K_1592 == g_T_ARR))
{
{ R26 rv1604 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1604; }
}
{ R26 rv1605 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1605; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1606 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1606; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1607; memset(&l_T_1607, 0, sizeof l_T_1607);
l_T_1607 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
R22 * l_RT_1608; memset(&l_RT_1608, 0, sizeof l_RT_1608);
l_RT_1608 = r_REAL_TYPE(l_T_1607);
if (((((*(R22 *)rt_nil_check(l_RT_1608))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1608))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1609; memset(&l_TMP_1609, 0, sizeof l_TMP_1609);
S_R10(&l_TMP_1609, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1610; memset(&l_C_1610, 0, sizeof l_C_1610);
S_R10(&l_C_1610, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(l_T_1607), l_TMP_1609, l_TMP_1609, l_TMP_1609), 0);
S_R10(&l_C_1610, r_FMT3(rt_str("@@ @; })", 8), l_C_1610, r_INIT_CODE(l_RT_1608, l_TMP_1609), l_TMP_1609), 0);
{ R26 rv1611 = r_MKET(l_C_1610, l_T_1607);
return rv1611; }
}
}
{ R26 rv1612 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1607)), l_T_1607);
return rv1612; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1613 = 0;
return rv1613; }
}
{
R12 * l_Y_1614; memset(&l_Y_1614, 0, sizeof l_Y_1614);
l_Y_1614 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1614 == NULL))
{
{ rt_int rv1615 = 0;
return rv1615; }
}
{ rt_int rv1616 = (((*(R12 *)rt_nil_check(l_Y_1614))).f_KIND == g_Y_TYPE);
return rv1616; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1617 = r_INT_ET(((rt_int)100000000LL));
return rv1617; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1618 = r_INT_ET(((rt_int)15LL));
return rv1618; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1619 = r_INT_ET(((rt_int)0LL));
return rv1619; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1620; memset(&l_T_1620, 0, sizeof l_T_1620);
l_T_1620 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1620 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1620 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1620 = r_REAL_TYPE(l_T_1620);
if ((!(((*(R22 *)rt_nil_check(l_T_1620))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1620))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1621; memset(&l_TMP_1621, 0, sizeof l_TMP_1621);
S_R10(&l_TMP_1621, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1622; memset(&l_R_1622, 0, sizeof l_R_1622);
S_R10(&l_R_1622, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1620))).f_CNAME, l_TMP_1621, l_TMP_1621, l_TMP_1621), 0);
R24 * l_F_1623; memset(&l_F_1623, 0, sizeof l_F_1623);
l_F_1623 = ((*(R22 *)rt_nil_check(l_T_1620))).f_FIELDS;
S_R10(&l_R_1622, r_FMT2(rt_str("@@", 2), l_R_1622, r_INIT_CODE(l_T_1620, l_TMP_1621)), 0);
for (;;) {
if ((l_F_1623 == NULL)) goto L_end1624;
{
if ((((*(R24 *)rt_nil_check(l_F_1623))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1623))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1623))).f_LABELS, (r_TAG_VALUE(l_T_1620, ((*(R24 *)rt_nil_check(l_F_1623))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1620, ((*(R24 *)rt_nil_check(l_F_1623))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1625; memset(&l_INIT_1625, 0, sizeof l_INIT_1625);
l_INIT_1625 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1623))).f_NAME);
if ((l_INIT_1625 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1623))).f_NAME);
}
S_R10(&l_R_1622, r_FMT2(rt_str("@ @", 3), l_R_1622, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1623))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1621, ((*(R24 *)rt_nil_check(l_F_1623))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1625))).f_A, ((*(R24 *)rt_nil_check(l_F_1623))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1625))).f_LINE, l_TMP_1621)), 0);
}
}
}
l_F_1623 = ((*(R24 *)rt_nil_check(l_F_1623))).f_NEXT;
}
RT_B_TICK();
} L_end1624: ;
{
R21 * l_P_1626; memset(&l_P_1626, 0, sizeof l_P_1626);
l_P_1626 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1626 == NULL)) goto L_end1627;
{
{
R24 * l_G_1628; memset(&l_G_1628, 0, sizeof l_G_1628);
l_G_1628 = r_FIND_VFIELD(l_T_1620, ((*(R21 *)rt_nil_check(l_P_1626))).f_NAME);
if ((l_G_1628 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1626))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1626))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1628))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1626))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1626))).f_NAME);
}
r_CHECK_VARIANT(l_G_1628, l_T_1620, NULL, ((*(R21 *)rt_nil_check(l_P_1626))).f_LINE);
}
l_P_1626 = ((*(R21 *)rt_nil_check(l_P_1626))).f_NEXT;
}
RT_B_TICK();
} L_end1627: ;
}
{ R26 rv1629 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1622, l_TMP_1621), l_T_1620);
return rv1629; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1630; memset(&l_P_1630, 0, sizeof l_P_1630);
l_P_1630 = p_L;
for (;;) {
if ((l_P_1630 == NULL)) goto L_end1631;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1630))).f_NAME, p_NAME))
{
{ R21 * rv1632 = l_P_1630;
return rv1632; }
}
l_P_1630 = ((*(R21 *)rt_nil_check(l_P_1630))).f_NEXT;
}
RT_B_TICK();
} L_end1631: ;
{ R21 * rv1633 = NULL;
return rv1633; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1634; memset(&l_DIMS_1634, 0, sizeof l_DIMS_1634);
l_DIMS_1634 = ((rt_int)0LL);
R21 * l_P_1635; memset(&l_P_1635, 0, sizeof l_P_1635);
l_P_1635 = p_E;
R22 * l_ELEM_1636; memset(&l_ELEM_1636, 0, sizeof l_ELEM_1636);
l_ELEM_1636 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1635))).f_KIND == g_N_ARRCONS))) goto L_end1637;
{
l_DIMS_1634 = rt_add(l_DIMS_1634, ((rt_int)1LL));
l_P_1635 = ((*(R21 *)rt_nil_check(l_P_1635))).f_A;
}
RT_B_TICK();
} L_end1637: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1636 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1636 == NULL))
{
l_ELEM_1636 = (r_EXPR(l_P_1635, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1636))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1636))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1636 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1638; memset(&l_A_1638, 0, sizeof l_A_1638);
l_A_1638 = r_ARRAY_OF(l_ELEM_1636, l_DIMS_1634);
R10 l_TMP_1639; memset(&l_TMP_1639, 0, sizeof l_TMP_1639);
S_R10(&l_TMP_1639, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1640; memset(&l_R_1640, 0, sizeof l_R_1640);
S_R10(&l_R_1640, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1638))).f_CNAME, l_TMP_1639, l_TMP_1639), 0);
rt_int l_K_1641; memset(&l_K_1641, 0, sizeof l_K_1641);
l_K_1641 = ((rt_int)0LL);
S_R10(&l_R_1640, r_FMT2(rt_str("@@); ", 5), l_R_1640, l_TMP_1639), 0);
l_P_1635 = p_E;
{ rt_int it1643_lo = ((rt_int)0LL), it1643_hi = rt_sub(l_DIMS_1634, ((rt_int)1LL));
for (rt_int it1643 = it1643_lo; it1643 <= it1643_hi; it1643++) {
{
S_R10(&l_R_1640, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1640, l_TMP_1639, r_NUM(it1643), l_TMP_1639), 0);
S_R10(&l_R_1640, r_FMT3(rt_str("@@] = @;", 8), l_R_1640, r_NUM(it1643), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1635))).f_A), ((rt_int)1LL)))), 0);
l_P_1635 = ((*(R21 *)rt_nil_check(l_P_1635))).f_A;
}
RT_B_TICK();
if (it1643 == it1643_hi) break;
} } L_end1642: ;
S_R10(&l_R_1640, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1640, l_TMP_1639, l_TMP_1639, r_NUM(l_DIMS_1634)), 0);
S_R10(&l_R_1640, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1640, l_TMP_1639, l_TMP_1639), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1634, l_A_1638, l_TMP_1639, &l_R_1640, &l_K_1641);
{ R26 rv1644 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1640, l_TMP_1639), l_A_1638);
return rv1644; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1645; memset(&l_P_1645, 0, sizeof l_P_1645);
l_P_1645 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1645 == NULL)) goto L_end1646;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1645, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1645))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1645))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1645, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1645))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1645 = ((*(R21 *)rt_nil_check(l_P_1645))).f_NEXT;
}
RT_B_TICK();
} L_end1646: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1647; memset(&l_T_1647, 0, sizeof l_T_1647);
l_T_1647 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1647))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1647))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1647))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1648 = l_T_1647;
return rv1648; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1649; memset(&l_T_1649, 0, sizeof l_T_1649);
l_T_1649 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1650; memset(&l_V_1650, 0, sizeof l_V_1650);
S_R26(&l_V_1650, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1649), 0);
R22 * l_RT_1651; memset(&l_RT_1651, 0, sizeof l_RT_1651);
l_RT_1651 = r_REAL_TYPE(l_T_1649);
if (((((*(R22 *)rt_nil_check((l_V_1650).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_INT))
{
{ R26 rv1652 = r_MKET(r_RANGE_CHECK(l_RT_1651, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1650).f_C), r_NO_TEXT()), l_T_1649);
return rv1652; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_BOOL))
{
{ R26 rv1653 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1650).f_C), l_T_1649);
return rv1653; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_ENUM))
{
{ R26 rv1654 = r_MKET(r_ENUM_OF_BITS(l_RT_1651, (l_V_1650).f_C), l_T_1649);
return rv1654; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_FLOAT))
{
{ R26 rv1655 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1650).f_C), l_T_1649);
return rv1655; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_STR))
{
{ R26 rv1656 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1650).f_C), l_T_1649);
return rv1656; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1657; memset(&l_C_1657, 0, sizeof l_C_1657);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1657, r_CONVERT(l_V_1650, l_T_1649, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1651))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1651))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1650).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1657, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1657, ((*(R22 *)rt_nil_check(l_RT_1651))).f_LEN_C), 0);
}
{ R26 rv1658 = r_MKET(l_C_1657, l_T_1649);
return rv1658; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1659 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1659; }
}
}
{ R10 rv1660 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1660; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1661; memset(&l_NAME_1661, 0, sizeof l_NAME_1661);
S_R10(&l_NAME_1661, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1662; memset(&l_L_1662, 0, sizeof l_L_1662);
l_L_1662 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1663; memset(&l_R_1663, 0, sizeof l_R_1663);
S_R10(&l_R_1663, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1662 == NULL)) goto L_end1664;
{
{
R21 * l_V_1665; memset(&l_V_1665, 0, sizeof l_V_1665);
l_V_1665 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1666; memset(&l_FOUND_1666, 0, sizeof l_FOUND_1666);
l_FOUND_1666 = 0;
for (;;) {
if ((l_V_1665 == NULL)) goto L_end1667;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1665))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1662))).f_NAME))
{
S_R10(&l_R_1663, r_FMT2(rt_str("@@, ", 4), l_R_1663, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1665))).f_A, NULL)).f_C), 0);
l_FOUND_1666 = 1;
}
l_V_1665 = ((*(R21 *)rt_nil_check(l_V_1665))).f_NEXT;
}
RT_B_TICK();
} L_end1667: ;
if ((!l_FOUND_1666))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1662))).f_NAME);
}
}
l_L_1662 = ((*(R21 *)rt_nil_check(l_L_1662))).f_NEXT;
}
RT_B_TICK();
} L_end1664: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1661, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1663, l_NAME_1661, l_NAME_1661));
{ R10 rv1668 = r_FMT2(rt_str("@, @", 4), l_NAME_1661, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1668; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1669; memset(&l_SEM_1669, 0, sizeof l_SEM_1669);
l_SEM_1669 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1669 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1669)
{
{
R22 * l_T_1670; memset(&l_T_1670, 0, sizeof l_T_1670);
l_T_1670 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1670 = p_WANT;
}
}
{ R26 rv1671 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1670))).f_SCALE)), l_T_1670);
return rv1671; }
}
}
{
R22 * l_T_1672; memset(&l_T_1672, 0, sizeof l_T_1672);
l_T_1672 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1673; memset(&l_P_1673, 0, sizeof l_P_1673);
l_P_1673 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1673))).f_TARGET = l_T_1672;
((*(R22 *)rt_nil_check(l_P_1673))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1672))
{
{ R26 rv1674 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1672), r_INIT_CODE(l_T_1672, r_MK(rt_str("(*p)", 4)))), l_P_1673);
return rv1674; }
}
{ R26 rv1675 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1672), r_CTYPE(l_T_1672)), l_P_1673);
return rv1675; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1676; memset(&l_P_1676, 0, sizeof l_P_1676);
l_P_1676 = p_L;
{ rt_int it1678_lo = ((rt_int)1LL), it1678_hi = p_K;
for (rt_int it1678 = it1678_lo; it1678 <= it1678_hi; it1678++) {
{
if ((!(l_P_1676 == NULL)))
{
l_P_1676 = ((*(R21 *)rt_nil_check(l_P_1676))).f_NEXT;
}
}
RT_B_TICK();
if (it1678 == it1678_hi) break;
} } L_end1677: ;
{ R21 * rv1679 = l_P_1676;
return rv1679; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1680; memset(&l_N_1680, 0, sizeof l_N_1680);
l_N_1680 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1680 < p_LO) || (l_N_1680 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1681; memset(&l_L_1681, 0, sizeof l_L_1681);
l_L_1681 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1681 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1681))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1681))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1681))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1682 = r_MK(rt_str("1", 1));
return rv1682; }
}
{ R10 rv1683 = r_MK(rt_str("0", 1));
return rv1683; }
}
if (((((*(R21 *)rt_nil_check(l_L_1681))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1681))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1681))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1684 = r_MK(rt_str("1", 1));
return rv1684; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1681))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1685 = r_MK(rt_str("0", 1));
return rv1685; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1686 = r_MK(rt_str("1", 1));
return rv1686; }
}
{ R10 rv1687 = r_MK(rt_str("0", 1));
return rv1687; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1688 = 0;
return rv1688; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1689 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1689; }
}
{ rt_int rv1690 = 0;
return rv1690; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1691 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1691; }
}
{ R21 * rv1692 = p_E;
return rv1692; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1693; memset(&l_NAMES_1693, 0, sizeof l_NAMES_1693);
l_NAMES_1693 = rt_str_new(((rt_int)299LL));
rt_b_assign(&l_NAMES_1693, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1694; memset(&l_L_1694, 0, sizeof l_L_1694);
l_L_1694 = (p_NAME).f_LEN;
{ rt_int it1696_lo = ((rt_int)0LL), it1696_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1694), ((rt_int)2LL));
for (rt_int it1696 = it1696_lo; it1696 <= it1696_hi; it1696++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1693, it1696, it1696), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1693, rt_add(rt_add(it1696, l_L_1694), ((rt_int)1LL)), rt_add(rt_add(it1696, l_L_1694), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1693, rt_add(it1696, ((rt_int)1LL)), rt_add(it1696, l_L_1694)), r_STR(p_NAME, l_L_1694)))
{
{
rt_int l_J_1697; memset(&l_J_1697, 0, sizeof l_J_1697);
l_J_1697 = rt_add(rt_add(it1696, l_L_1694), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1693, l_J_1697, l_J_1697), rt_str(" ", 1))) goto L_end1698;
{
l_J_1697 = rt_add(l_J_1697, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1698: ;
{ R10 rv1699 = r_MKN(rt_b_slice(l_NAMES_1693, rt_add(rt_add(it1696, l_L_1694), ((rt_int)2LL)), rt_sub(l_J_1697, ((rt_int)1LL))));
return rv1699; }
}
}
}
}
RT_B_TICK();
if (it1696 == it1696_hi) break;
} } L_end1695: ;
{ R10 rv1700 = r_NO_TEXT();
return rv1700; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1701; memset(&l_NAME_1701, 0, sizeof l_NAME_1701);
S_R10(&l_NAME_1701, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1702; memset(&l_LINE_1702, 0, sizeof l_LINE_1702);
l_LINE_1702 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1703; memset(&l_N_1703, 0, sizeof l_N_1703);
l_N_1703 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1701, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1701, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1704; memset(&l_TGT_1704, 0, sizeof l_TGT_1704);
l_TGT_1704 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1705; memset(&l_S_1705, 0, sizeof l_S_1705);
l_S_1705 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1702);
R21 * l_SRC_1706; memset(&l_SRC_1706, 0, sizeof l_SRC_1706);
l_SRC_1706 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1704 == NULL) || (l_SRC_1706 == NULL)))
{
r_FAILT(l_LINE_1702, rt_str("the wrong arguments for ", 24), l_NAME_1701);
}
if (r_TEQS(l_NAME_1701, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1705))).f_A = l_TGT_1704;
}
else
{
if ((l_N_1703 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1702, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1705))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1702);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1705))).f_A))).f_A = l_TGT_1704;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1705))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1705))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1705))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1706), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1701, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1702);
{
R14 l_SAVED_CODE_1707; memset(&l_SAVED_CODE_1707, 0, sizeof l_SAVED_CODE_1707);
S_R14(&l_SAVED_CODE_1707, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1708; memset(&l_C_1708, 0, sizeof l_C_1708);
S_R10(&l_C_1708, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1709; memset(&l_P_1709, 0, sizeof l_P_1709);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1710; memset(&rc1710, 0, sizeof rc1710);  rc1710.f_HEAD = NULL; rc1710.f_TAIL = NULL; rc1710; }), 0);
r_ASSIGN_STMT(l_S_1705);
l_P_1709 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1709 == NULL)) goto L_end1711;
{
S_R10(&l_C_1708, r_FMT2(rt_str("@ @", 3), l_C_1708, ((*(R15 *)rt_nil_check(l_P_1709))).f_T), 0);
l_P_1709 = ((*(R15 *)rt_nil_check(l_P_1709))).f_NEXT;
}
RT_B_TICK();
} L_end1711: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1707, 0);
{ R26 rv1712 = r_MKET(r_CATS(l_C_1708, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1712; }
}
}
}
if (r_TEQS(l_NAME_1701, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1713; memset(&l_S_1713, 0, sizeof l_S_1713);
l_S_1713 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1702);
((*(R21 *)rt_nil_check(l_S_1713))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1713))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1713))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1713))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1714 = r_EXPR(l_S_1713, p_WANT);
return rv1714; }
}
}
{
R10 l_SYM__1715; memset(&l_SYM__1715, 0, sizeof l_SYM__1715);
S_R10(&l_SYM__1715, r_OPERATOR_SYMBOL(l_NAME_1701), 0);
rt_int l_UNARY_OP_1716; memset(&l_UNARY_OP_1716, 0, sizeof l_UNARY_OP_1716);
l_UNARY_OP_1716 = ((r_TEQS(l_NAME_1701, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1701, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1701, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1717; memset(&l_X_1717, 0, sizeof l_X_1717);
if (l_UNARY_OP_1716)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1717 = r_NEW_NODE(g_N_UNOP, l_LINE_1702);
S_R10(&((*(R21 *)rt_nil_check(l_X_1717))).f_NAME, l_SYM__1715, 0);
((*(R21 *)rt_nil_check(l_X_1717))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1718 = r_EXPR(r_QUALIFIED(l_X_1717, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1702), p_WANT);
return rv1718; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1717 = r_BIN_NODE(l_SYM__1715, l_LINE_1702, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1715, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1717))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1701, (l_NAME_1701).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1717))).f_FL = ((rt_int)2LL);
}
{ R26 rv1719 = r_EXPR(r_QUALIFIED(l_X_1717, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1702), p_WANT);
return rv1719; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1720; memset(&l_R_1720, 0, sizeof l_R_1720);
l_R_1720 = p_X;
R21 * l_P_1721; memset(&l_P_1721, 0, sizeof l_P_1721);
l_P_1721 = p_Q;
for (;;) {
if ((l_P_1721 == NULL)) goto L_end1722;
{
if ((l_R_1720 == p_X))
{
l_R_1720 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1720))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1721))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1721))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1721))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1720))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1721))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1720))).f_B = l_P_1721;
}
l_P_1721 = ((*(R21 *)rt_nil_check(l_P_1721))).f_NEXT;
}
RT_B_TICK();
} L_end1722: ;
{ R21 * rv1723 = l_R_1720;
return rv1723; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1724 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1724; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1725; memset(&l_Y_1725, 0, sizeof l_Y_1725);
l_Y_1725 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1725 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1725))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1726; memset(&l_T_1726, 0, sizeof l_T_1726);
l_T_1726 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1725))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1726))).f_KIND == g_T_ENUM))
{
{ R22 * rv1727 = l_T_1726;
return rv1727; }
}
}
}
}
{ R22 * rv1728 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1728; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1729 = 1;
return rv1729; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1730 = 1;
return rv1730; }
}
{ rt_int rv1731 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1731; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1732 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1732; }
}
{ R21 * rv1733 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1733; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1734; memset(&l_NAME_1734, 0, sizeof l_NAME_1734);
S_R10(&l_NAME_1734, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1735; memset(&l_LINE_1735, 0, sizeof l_LINE_1735);
l_LINE_1735 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((((r_OPERATOR_SYMBOL(l_NAME_1734)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1734, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1734, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1734, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1736 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1736; }
}
if ((r_TEQS(l_NAME_1734, rt_str("PUT", 3)) || r_TEQS(l_NAME_1734, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1737; memset(&l_V_1737, 0, sizeof l_V_1737);
S_R26(&l_V_1737, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1737).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1735, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1734, rt_str("PUT", 3)))
{
{ R26 rv1738 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1737).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1738; }
}
{ R26 rv1739 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1737).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1739; }
}
}
else if (r_TEQS(l_NAME_1734, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1740 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1740; }
}
else if (r_TEQS(l_NAME_1734, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1741 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1741; }
}
else if (r_TEQS(l_NAME_1734, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1742 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1742; }
}
else if (r_TEQS(l_NAME_1734, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1743 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1743; }
}
else if (r_TEQS(l_NAME_1734, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1744 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1744; }
}
else if (r_TEQS(l_NAME_1734, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1745 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1745; }
}
if (r_TEQS(l_NAME_1734, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1746 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1735);
return rv1746; }
}
else if (r_TEQS(l_NAME_1734, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1747 = r_TO_FIXED_CALL(p_E);
return rv1747; }
}
else if (r_TEQS(l_NAME_1734, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1748; memset(&l_V_1748, 0, sizeof l_V_1748);
S_R26(&l_V_1748, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1749; memset(&l_P_1749, 0, sizeof l_P_1749);
S_R23(&l_P_1749, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1750; memset(&l_VT_1750, 0, sizeof l_VT_1750);
l_VT_1750 = r_REAL_TYPE((l_V_1748).f_T);
R22 * l_T_1751; memset(&l_T_1751, 0, sizeof l_T_1751);
l_T_1751 = r_FLOAT_TYPE((l_P_1749).f_V);
R10 l_SINGLE_1752; memset(&l_SINGLE_1752, 0, sizeof l_SINGLE_1752);
S_R10(&l_SINGLE_1752, r_SINGLE_C((l_P_1749).f_V), 0);
R10 l_TR_1753; memset(&l_TR_1753, 0, sizeof l_TR_1753);
S_R10(&l_TR_1753, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1754; memset(&l_R_1754, 0, sizeof l_R_1754);
l_R_1754 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1754 == NULL))
{
l_R_1754 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1754))).f_KIND == g_N_QUAL))
{
l_R_1754 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1754))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1754))).f_NAME).f_LEN), l_LINE_1735);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1754))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1753, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1754))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1735, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1750))).f_KIND == g_T_INT))
{
{ R26 rv1755 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1748).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1750))).f_SCALE), l_SINGLE_1752, l_TR_1753), l_T_1751);
return rv1755; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1750))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1749).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1750))).f_SCALE))))
{
{
R21 * l_Q_1756; memset(&l_Q_1756, 0, sizeof l_Q_1756);
l_Q_1756 = r_NEW_NODE(g_N_QUAL, l_LINE_1735);
R21 * l_SAVED_Q_1757; memset(&l_SAVED_Q_1757, 0, sizeof l_SAVED_Q_1757);
l_SAVED_Q_1757 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1758; memset(&l_L_1758, 0, sizeof l_L_1758);
((*(R21 *)rt_nil_check(l_Q_1756))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1756;
S_R26(&l_L_1758, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1757;
{ R26 rv1759 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1758).f_C, l_SINGLE_1752, l_TR_1753), l_T_1751);
return rv1759; }
}
}
{ R26 rv1760 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1748).f_C, l_SINGLE_1752, l_TR_1753), l_T_1751);
return rv1760; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1750))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1750))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1750))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1735, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1761 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1748).f_C, l_SINGLE_1752, l_TR_1753), l_T_1751);
return rv1761; }
}
r_FAIL(l_LINE_1735, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1734, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1762 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1735);
return rv1762; }
}
else if (r_TEQS(l_NAME_1734, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1763; memset(&l_V_1763, 0, sizeof l_V_1763);
S_R26(&l_V_1763, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1763).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1764 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1763).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1763).f_T))).f_SCALE));
return rv1764; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1763).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1765 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1763).f_C), (l_V_1763).f_T);
return rv1765; }
}
r_FAIL(l_LINE_1735, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1734, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1734, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1766; memset(&l_V_1766, 0, sizeof l_V_1766);
S_R26(&l_V_1766, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1767; memset(&l_T_1767, 0, sizeof l_T_1767);
l_T_1767 = r_REAL_TYPE((l_V_1766).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1767))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1735, rt_str("an enumerated value expected by ", 32), l_NAME_1734);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1767))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1735, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1734);
}
if (r_TEQS(l_NAME_1734, rt_str("SUCC", 4)))
{
{ R26 rv1768 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1766).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1767))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1767))).f_BASE);
return rv1768; }
}
{ R26 rv1769 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1766).f_C), ((*(R22 *)rt_nil_check(l_T_1767))).f_BASE);
return rv1769; }
}
}
else if (r_TEQS(l_NAME_1734, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1770; memset(&l_V_1770, 0, sizeof l_V_1770);
S_R26(&l_V_1770, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1771; memset(&l_K_1771, 0, sizeof l_K_1771);
l_K_1771 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1770).f_T)))).f_KIND;
R22 * l_T_1772; memset(&l_T_1772, 0, sizeof l_T_1772);
l_T_1772 = r_NEW_TYP(l_K_1771);
if (((!(l_K_1771 == g_T_STR)) && (!(l_K_1771 == g_T_BITS))))
{
r_FAIL(l_LINE_1735, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1772))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1770).f_T))).f_BASE;
{ R26 rv1773 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1770).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1772);
return rv1773; }
}
}
else if (r_TEQS(l_NAME_1734, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1774 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1774; }
}
else if (r_TEQS(l_NAME_1734, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1775 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1775; }
}
else if (((r_TEQS(l_NAME_1734, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1734, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1734, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1776; memset(&l_BITS_1776, 0, sizeof l_BITS_1776);
S_R10(&l_BITS_1776, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1734, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1776, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1734, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1776, r_MK(rt_str("4", 1)), 0);
}
{ R26 rv1777 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1776), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1777; }
}
}
else if ((r_TEQS(l_NAME_1734, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1734, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1778; memset(&l_S_1778, 0, sizeof l_S_1778);
S_R23(&l_S_1778, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1779; memset(&l_R_1779, 0, sizeof l_R_1779);
S_R23(&l_R_1779, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1779).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1735, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1735);
if (r_TEQS(l_NAME_1734, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1780 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1778).f_V));
return rv1780; }
}
{ R26 rv1781 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1778).f_V));
return rv1781; }
}
}
else if (((r_TEQS(l_NAME_1734, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1734, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1734, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1782; memset(&l_P_1782, 0, sizeof l_P_1782);
S_R23(&l_P_1782, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1783; memset(&l_T_1783, 0, sizeof l_T_1783);
l_T_1783 = r_FLOAT_TYPE((l_P_1782).f_V);
R10 l_C_1784; memset(&l_C_1784, 0, sizeof l_C_1784);
S_R10(&l_C_1784, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1782).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1784, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1734, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1785 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1784), l_T_1783);
return rv1785; }
}
else if (r_TEQS(l_NAME_1734, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1786 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1784), l_T_1783);
return rv1786; }
}
{ R26 rv1787 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1784), l_T_1783);
return rv1787; }
}
}
else if (r_TEQS(l_NAME_1734, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1788 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1788; }
}
else if (r_TEQS(l_NAME_1734, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1789 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1789; }
}
else if (r_TEQS(l_NAME_1734, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1790 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1790; }
}
{ R26 rv1791 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1791; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1792; memset(&l_T_1792, 0, sizeof l_T_1792);
l_T_1792 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1793; memset(&l_K_1793, 0, sizeof l_K_1793);
l_K_1793 = ((*(R22 *)rt_nil_check(l_T_1792))).f_KIND;
R22 * l_S_1794; memset(&l_S_1794, 0, sizeof l_S_1794);
l_S_1794 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1793 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1792))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1795 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1794);
return rv1795; }
}
{ R26 rv1796 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1792))).f_SCALE)), l_S_1794);
return rv1796; }
}
else if ((l_K_1793 == g_T_FLOAT))
{
{ R26 rv1797 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1792))).f_SCALE)), l_S_1794);
return rv1797; }
}
else if ((l_K_1793 == g_T_BOOL))
{
{ R26 rv1798 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1794);
return rv1798; }
}
else if ((l_K_1793 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1792))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1799 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1794);
return rv1799; }
}
{ R26 rv1800 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1792))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1794);
return rv1800; }
}
else if (((l_K_1793 == g_T_STR) || (l_K_1793 == g_T_BITS)))
{
{ R26 rv1801 = r_MKET((p_V).f_C, l_S_1794);
return rv1801; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1792));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1802; memset(&l_V_1802, 0, sizeof l_V_1802);
S_R26(&l_V_1802, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1803; memset(&l_T_1803, 0, sizeof l_T_1803);
l_T_1803 = r_REAL_TYPE((l_V_1802).f_T);
rt_int l_N_1804; memset(&l_N_1804, 0, sizeof l_N_1804);
l_N_1804 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1805; memset(&l_RND_1805, 0, sizeof l_RND_1805);
S_R10(&l_RND_1805, r_ROUNDING_ARG(p_E, l_N_1804), 0);
rt_int l_S_1806; memset(&l_S_1806, 0, sizeof l_S_1806);
l_S_1806 = ((rt_int)0LL);
if (((l_N_1804 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1806 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1807; memset(&l_K_1807, 0, sizeof l_K_1807);
l_K_1807 = ((rt_int)2LL);
for (;;) {
if ((l_K_1807 >= l_N_1804)) goto L_end1808;
{
{
R21 * l_R_1809; memset(&l_R_1809, 0, sizeof l_R_1809);
l_R_1809 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1807));
if ((r_IS_ROUNDING(l_R_1809) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1807)))).f_KIND == g_N_QUAL) && (l_K_1807 == rt_sub(l_N_1804, ((rt_int)1LL)))))))
{
if ((!(l_K_1807 == rt_sub(l_N_1804, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1809))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1809))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1809))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1809, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1809))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1809))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1809, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1807 = rt_add(l_K_1807, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1808: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1803))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1810 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1806), l_RND_1805), r_INT_TYPE(l_S_1806));
return rv1810; }
}
if ((((*(R22 *)rt_nil_check(l_T_1803))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1811; memset(&l_SAVED_1811, 0, sizeof l_SAVED_1811);
l_SAVED_1811 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1812; memset(&l_C_1812, 0, sizeof l_C_1812);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1805, rt_str("1", 1));
S_R10(&l_C_1812, r_RESCALE_C((l_V_1802).f_C, ((*(R22 *)rt_nil_check(l_T_1803))).f_SCALE, l_S_1806), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1811;
{ R26 rv1813 = r_MKET(l_C_1812, r_INT_TYPE(l_S_1806));
return rv1813; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1803))).f_KIND == g_T_FLOAT))
{
{ R26 rv1814 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1802).f_C, r_NUM(l_S_1806), l_RND_1805), r_INT_TYPE(l_S_1806));
return rv1814; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1803))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1803))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1803))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1803))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1803))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1803))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1815 = r_MKET(r_RESCALE_C((l_V_1802).f_C, ((rt_int)0LL), l_S_1806), r_INT_TYPE(l_S_1806));
return rv1815; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1803))).f_KIND == g_T_BITS))
{
{ R26 rv1816 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1802).f_C), ((rt_int)0LL), l_S_1806), r_INT_TYPE(l_S_1806));
return rv1816; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1803))).f_KIND == g_T_STR))
{
{ R26 rv1817 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1802).f_C, r_NUM(l_S_1806), l_RND_1805), r_INT_TYPE(l_S_1806));
return rv1817; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1802).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1818; memset(&l_T_1818, 0, sizeof l_T_1818);
l_T_1818 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1819; memset(&l_K_1819, 0, sizeof l_K_1819);
l_K_1819 = ((*(R22 *)rt_nil_check(l_T_1818))).f_KIND;
if ((l_K_1819 == g_T_BITS))
{
{ R26 rv1820 = p_V;
return rv1820; }
}
else if ((l_K_1819 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1818))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1818))).f_REPS))).f_B == NULL)))
{
{ R26 rv1821 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1818)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1818)));
return rv1821; }
}
}
{ R26 rv1822 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1818))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1818)));
return rv1822; }
}
else if ((l_K_1819 == g_T_STR))
{
{ R26 rv1823 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1823; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1819 == g_T_INT))
{
{ R26 rv1824 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1824; }
}
else if ((l_K_1819 == g_T_BOOL))
{
{ R26 rv1825 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1825; }
}
else if ((l_K_1819 == g_T_FLOAT))
{
{ R26 rv1826 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1826; }
}
else if ((l_K_1819 == g_T_STR))
{
{ R26 rv1827 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1827; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1818));
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
{ rt_int rv1828 = 0;
return rv1828; }
}
{ rt_int rv1829 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1829; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1830; memset(&l_N_1830, 0, sizeof l_N_1830);
l_N_1830 = ((rt_int)0LL);
R27 * l_P_1831; memset(&l_P_1831, 0, sizeof l_P_1831);
l_P_1831 = p_A;
for (;;) {
if ((l_P_1831 == NULL)) goto L_end1832;
{
l_N_1830 = rt_add(l_N_1830, ((rt_int)1LL));
l_P_1831 = ((*(R27 *)rt_nil_check(l_P_1831))).f_NEXT;
}
RT_B_TICK();
} L_end1832: ;
{ rt_int rv1833 = l_N_1830;
return rv1833; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1834; memset(&l_HEAD_1834, 0, sizeof l_HEAD_1834);
l_HEAD_1834 = NULL;
R27 * l_TAIL_1835; memset(&l_TAIL_1835, 0, sizeof l_TAIL_1835);
l_TAIL_1835 = NULL;
rt_int l_G_1836; memset(&l_G_1836, 0, sizeof l_G_1836);
l_G_1836 = ((rt_int)0LL);
{ rt_int it1838_lo = ((rt_int)0LL), it1838_hi = ((rt_int)2LL);
for (rt_int it1838 = it1838_lo; it1838 <= it1838_hi; it1838++) {
{
{
R21 * l_P_1839; memset(&l_P_1839, 0, sizeof l_P_1839);
l_P_1839 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1838 == ((rt_int)1LL)))
{
l_P_1839 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1838 == ((rt_int)2LL)))
{
l_P_1839 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1839 == NULL)) goto L_end1840;
{
{
R27 * l_A_1841; memset(&l_A_1841, 0, sizeof l_A_1841);
l_A_1841 = r_NODE_ARG(l_P_1839, it1838, NULL);
if ((l_TAIL_1835 == NULL))
{
l_HEAD_1834 = l_A_1841;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1835))).f_NEXT = l_A_1841;
}
l_TAIL_1835 = l_A_1841;
}
l_P_1839 = ((*(R21 *)rt_nil_check(l_P_1839))).f_NEXT;
}
RT_B_TICK();
} L_end1840: ;
}
}
RT_B_TICK();
if (it1838 == it1838_hi) break;
} } L_end1837: ;
{ R27 * rv1842 = l_HEAD_1834;
return rv1842; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1843; memset(&l_SAVED_1843, 0, sizeof l_SAVED_1843);
l_SAVED_1843 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1844; memset(&l_SAVED_Q_1844, 0, sizeof l_SAVED_Q_1844);
l_SAVED_Q_1844 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1845; memset(&l_V_1845, 0, sizeof l_V_1845);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1845, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1843;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1844;
{ R26 rv1846 = l_V_1845;
return rv1846; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1847; memset(&l_ARGS_1847, 0, sizeof l_ARGS_1847);
l_ARGS_1847 = r_CALL_ARGS(p_E);
R12 * l_Y_1848; memset(&l_Y_1848, 0, sizeof l_Y_1848);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1849 = r_START_IO_CALL(p_E);
return rv1849; }
}
l_Y_1848 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1848 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1848))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1850 = r_BUILTIN(p_E, p_WANT);
return rv1850; }
}
{ R26 rv1851 = r_CALL_SYM(l_Y_1848, l_ARGS_1847, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1851; }
}
l_Y_1848 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1847, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1848 == NULL))
{
{
R12 * l_P_1852; memset(&l_P_1852, 0, sizeof l_P_1852);
l_P_1852 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1852 == NULL)) goto L_end1853;
{
if ((((*(R12 *)rt_nil_check(l_P_1852))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1854 = r_BUILTIN(p_E, p_WANT);
return rv1854; }
}
l_P_1852 = r_LOOKUP_NEXT(l_P_1852);
}
RT_B_TICK();
} L_end1853: ;
}
{
R12 * l_B_1855; memset(&l_B_1855, 0, sizeof l_B_1855);
l_B_1855 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1855 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1855))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1856 = r_BUILTIN(p_E, p_WANT);
return rv1856; }
}
if (((((*(R12 *)rt_nil_check(l_B_1855))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1855))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_1857; memset(&l_BASE_1857, 0, sizeof l_BASE_1857);
S_R10(&l_BASE_1857, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_1857).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_1858; memset(&l_N_1858, 0, sizeof l_N_1858);
l_N_1858 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_1858))).f_NAME, l_BASE_1857, 0);
{ R26 rv1859 = r_BUILTIN(l_N_1858, p_WANT);
return rv1859; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1860 = r_CALL_SYM(l_Y_1848, l_ARGS_1847, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1860; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_1861; memset(&l_S_1861, 0, sizeof l_S_1861);
l_S_1861 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1861, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1863_lo = ((rt_int)1LL), it1863_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1863 = it1863_lo; it1863 <= it1863_hi; it1863++) {
{
if (rt_b_eq(rt_b_slice(l_S_1861, it1863, it1863), rt_str("$", 1)))
{
{
R10 l_P_1864; memset(&l_P_1864, 0, sizeof l_P_1864);
S_R10(&l_P_1864, r_MKN(rt_b_slice(l_S_1861, ((rt_int)0LL), rt_sub(it1863, ((rt_int)1LL)))), 0);
R10 l_B_1865; memset(&l_B_1865, 0, sizeof l_B_1865);
S_R10(&l_B_1865, r_MKN(rt_b_slice(l_S_1861, rt_add(it1863, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_1864) || r_TEQS(l_P_1864, rt_str("INTEGER", 7))) || r_TEQS(l_P_1864, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_1864, rt_str("ENUM", 4))) || r_TEQS(l_P_1864, rt_str("ARRAY", 5))) || r_TEQS(l_P_1864, rt_str("RECORD", 6))) || r_TEQS(l_P_1864, rt_str("PTR", 3))) || r_TEQS(l_P_1864, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_1866; memset(&l_Y_1866, 0, sizeof l_Y_1866);
l_Y_1866 = r_LOOKUP(l_B_1865);
for (;;) {
if ((l_Y_1866 == NULL)) goto L_end1867;
{
if ((((*(R12 *)rt_nil_check(l_Y_1866))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv1868 = l_B_1865;
return rv1868; }
}
l_Y_1866 = r_LOOKUP_NEXT(l_Y_1866);
}
RT_B_TICK();
} L_end1867: ;
}
}
}
{ R10 rv1869 = r_NO_TEXT();
return rv1869; }
}
}
RT_B_TICK();
if (it1863 == it1863_hi) break;
} } L_end1862: ;
{ R10 rv1870 = r_NO_TEXT();
return rv1870; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1871; memset(&l_B_1871, 0, sizeof l_B_1871);
l_B_1871 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1872; memset(&l_S_1872, 0, sizeof l_S_1872);
l_S_1872 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1872, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1874_lo = ((rt_int)1LL), it1874_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1874 = it1874_lo; it1874 <= it1874_hi; it1874++) {
{
if (rt_b_eq(rt_b_slice(l_S_1872, it1874, it1874), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1872, ((rt_int)0LL), rt_sub(it1874, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1875 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1872, rt_add(it1874, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1875; }
}
goto L_end1873;
}
}
RT_B_TICK();
if (it1874 == it1874_hi) break;
} } L_end1873: ;
}
for (;;) {
if ((l_B_1871 == NULL)) goto L_end1876;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1871))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1871))).f_NAME, p_NAME)))
{
{ R12 * rv1877 = ((*(R20 *)rt_nil_check(l_B_1871))).f_R;
return rv1877; }
}
l_B_1871 = ((*(R20 *)rt_nil_check(l_B_1871))).f_NEXT;
}
RT_B_TICK();
} L_end1876: ;
{ R12 * rv1878 = NULL;
return rv1878; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1879 = 0;
return rv1879; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1880 = 0;
return rv1880; }
}
}
}
{ rt_int rv1881 = 1;
return rv1881; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1882; memset(&l_Y_1882, 0, sizeof l_Y_1882);
l_Y_1882 = r_LOOKUP(p_NAME);
R12 * l_BEST_1883; memset(&l_BEST_1883, 0, sizeof l_BEST_1883);
l_BEST_1883 = NULL;
rt_int l_BEST_SCORE_1884; memset(&l_BEST_SCORE_1884, 0, sizeof l_BEST_SCORE_1884);
l_BEST_SCORE_1884 = ((rt_int)0LL);
rt_int l_TIES_1885; memset(&l_TIES_1885, 0, sizeof l_TIES_1885);
l_TIES_1885 = ((rt_int)0LL);
rt_int l_COUNT_1886; memset(&l_COUNT_1886, 0, sizeof l_COUNT_1886);
l_COUNT_1886 = ((rt_int)0LL);
rt_int l_N_1887; memset(&l_N_1887, 0, sizeof l_N_1887);
l_N_1887 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1882 == NULL)) goto L_end1888;
{
if ((!r_IS_ROUTINE(l_Y_1882)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1882))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1888;
}
}
else if (r_CANDIDATE(l_Y_1882, p_NAME))
{
{
R12 * l_R_1889; memset(&l_R_1889, 0, sizeof l_R_1889);
l_R_1889 = r_ORIGINAL(l_Y_1882);
rt_int l_SCORE_1890; memset(&l_SCORE_1890, 0, sizeof l_SCORE_1890);
r_ROUTINE_HEADER(l_R_1889);
if ((((r_PARAM_COUNT(l_R_1889) == l_N_1887) && (!r_SEEN_ROUTINE(l_R_1889, p_NAME, l_Y_1882))) && (!r_HIDDEN_ROUTINE(l_R_1889, p_NAME, l_Y_1882))))
{
l_COUNT_1886 = rt_add(l_COUNT_1886, ((rt_int)1LL));
l_SCORE_1890 = r_MATCH_SCORE(l_R_1889, p_ARGS);
if ((l_SCORE_1890 > l_BEST_SCORE_1884))
{
l_BEST_1883 = l_R_1889;
l_BEST_SCORE_1884 = l_SCORE_1890;
l_TIES_1885 = ((rt_int)0LL);
}
else if (((l_SCORE_1890 == l_BEST_SCORE_1884) && (l_SCORE_1890 > ((rt_int)0LL))))
{
l_TIES_1885 = rt_add(l_TIES_1885, ((rt_int)1LL));
}
}
}
}
l_Y_1882 = r_LOOKUP_NEXT(l_Y_1882);
}
RT_B_TICK();
} L_end1888: ;
if (((l_TIES_1885 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1891 = l_BEST_1883;
return rv1891; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1892; memset(&l_Y_1892, 0, sizeof l_Y_1892);
l_Y_1892 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1892 == p_STOP) || (l_Y_1892 == NULL))) goto L_end1893;
{
if ((((*(R12 *)rt_nil_check(l_Y_1892))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1892) == p_R))
{
{ rt_int rv1894 = 1;
return rv1894; }
}
}
l_Y_1892 = r_LOOKUP_NEXT(l_Y_1892);
}
RT_B_TICK();
} L_end1893: ;
{ rt_int rv1895 = 0;
return rv1895; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1896; memset(&l_Y_1896, 0, sizeof l_Y_1896);
l_Y_1896 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1896 == p_STOP) || (l_Y_1896 == NULL))) goto L_end1897;
{
if (((((*(R12 *)rt_nil_check(l_Y_1896))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_1896))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_1898; memset(&l_O_1898, 0, sizeof l_O_1898);
l_O_1898 = r_ORIGINAL(l_Y_1896);
if ((!(l_O_1898 == p_R)))
{
r_ROUTINE_HEADER(l_O_1898);
if (r_SAME_SIGNATURE(l_O_1898, p_R))
{
{ rt_int rv1899 = 1;
return rv1899; }
}
}
}
}
l_Y_1896 = r_LOOKUP_NEXT(l_Y_1896);
}
RT_B_TICK();
} L_end1897: ;
{ rt_int rv1900 = 0;
return rv1900; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_1901; memset(&l_P_1901, 0, sizeof l_P_1901);
l_P_1901 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_1902; memset(&l_Q_1902, 0, sizeof l_Q_1902);
l_Q_1902 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv1903 = 0;
return rv1903; }
}
for (;;) {
if (((l_P_1901 == NULL) || (l_Q_1902 == NULL))) goto L_end1904;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1901))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_1902))).f_MODE)))
{
{ rt_int rv1905 = 0;
return rv1905; }
}
if (((((*(R28 *)rt_nil_check(l_P_1901))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_1902))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_1901))).f_T == ((*(R28 *)rt_nil_check(l_Q_1902))).f_T)))
{
{ rt_int rv1906 = 0;
return rv1906; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1901))).f_T, ((*(R28 *)rt_nil_check(l_Q_1902))).f_T)))
{
{ rt_int rv1907 = 0;
return rv1907; }
}
l_P_1901 = ((*(R28 *)rt_nil_check(l_P_1901))).f_NEXT;
l_Q_1902 = ((*(R28 *)rt_nil_check(l_Q_1902))).f_NEXT;
}
RT_B_TICK();
} L_end1904: ;
{ rt_int rv1908 = ((l_P_1901 == NULL) && (l_Q_1902 == NULL));
return rv1908; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_1909; memset(&l_N_1909, 0, sizeof l_N_1909);
l_N_1909 = ((rt_int)0LL);
R28 * l_P_1910; memset(&l_P_1910, 0, sizeof l_P_1910);
l_P_1910 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1910 == NULL)) goto L_end1911;
{
l_N_1909 = rt_add(l_N_1909, ((rt_int)1LL));
l_P_1910 = ((*(R28 *)rt_nil_check(l_P_1910))).f_NEXT;
}
RT_B_TICK();
} L_end1911: ;
{ rt_int rv1912 = l_N_1909;
return rv1912; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_1913; memset(&l_P_1913, 0, sizeof l_P_1913);
l_P_1913 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1914; memset(&l_A_1914, 0, sizeof l_A_1914);
l_A_1914 = p_ARGS;
rt_int l_EXACT_1915; memset(&l_EXACT_1915, 0, sizeof l_EXACT_1915);
l_EXACT_1915 = 1;
R20 * l_BS_1916; memset(&l_BS_1916, 0, sizeof l_BS_1916);
l_BS_1916 = r_NEW_BINDS();
R22 * l_PT_1917; memset(&l_PT_1917, 0, sizeof l_PT_1917);
for (;;) {
if ((l_P_1913 == NULL)) goto L_end1918;
{
l_PT_1917 = r_FORMAL_VIEW(p_R, l_P_1913);
if ((!(((*(R28 *)rt_nil_check(l_P_1913))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1914))).f_MODE)))
{
{ rt_int rv1919 = ((rt_int)0LL);
return rv1919; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1913))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1913, l_A_1914, l_BS_1916)))
{
{ rt_int rv1920 = ((rt_int)0LL);
return rv1920; }
}
}
else if ((l_PT_1917 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1914))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_1914))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv1921 = ((rt_int)0LL);
return rv1921; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_1914))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1914))).f_E, l_PT_1917)))
{
{ rt_int rv1922 = ((rt_int)0LL);
return rv1922; }
}
}
else
{
r_TYPE_ARG(l_A_1914);
{
R22 * l_AT_1923; memset(&l_AT_1923, 0, sizeof l_AT_1923);
l_AT_1923 = (((*(R27 *)rt_nil_check(l_A_1914))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_1917, l_AT_1923) || (((((*(R22 *)rt_nil_check(l_AT_1923))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1917)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1924 = ((rt_int)0LL);
return rv1924; }
}
if ((!r_SAME_TYPE(l_PT_1917, l_AT_1923)))
{
if ((((*(R28 *)rt_nil_check(l_P_1913))).f_MODE == g_M_INOUT))
{
{ rt_int rv1925 = ((rt_int)0LL);
return rv1925; }
}
l_EXACT_1915 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1923)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1917)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_1913))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_1923))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_1917))).f_SCALE)))
{
{ rt_int rv1926 = ((rt_int)0LL);
return rv1926; }
}
else if (((((*(R28 *)rt_nil_check(l_P_1913))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_1917))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_1923))).f_SCALE)))
{
{ rt_int rv1927 = ((rt_int)0LL);
return rv1927; }
}
}
}
}
l_P_1913 = ((*(R28 *)rt_nil_check(l_P_1913))).f_NEXT;
l_A_1914 = ((*(R27 *)rt_nil_check(l_A_1914))).f_NEXT;
}
RT_B_TICK();
} L_end1918: ;
if (l_EXACT_1915)
{
{ rt_int rv1928 = ((rt_int)2LL);
return rv1928; }
}
{ rt_int rv1929 = ((rt_int)1LL);
return rv1929; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1930; memset(&l_RT_1930, 0, sizeof l_RT_1930);
l_RT_1930 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1930))).f_KIND == g_T_ENUM))
{
{ rt_int rv1931 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1930) == NULL));
return rv1931; }
}
{ rt_int rv1932 = 0;
return rv1932; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1933 = (((*(R22 *)rt_nil_check(l_RT_1930))).f_KIND == g_T_PTR);
return rv1933; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1934 = (((*(R22 *)rt_nil_check(l_RT_1930))).f_KIND == g_T_REC);
return rv1934; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1935 = (((*(R22 *)rt_nil_check(l_RT_1930))).f_KIND == g_T_ARR);
return rv1935; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1936 = (((*(R22 *)rt_nil_check(l_RT_1930))).f_KIND == g_T_INT);
return rv1936; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1937 = ((((*(R22 *)rt_nil_check(l_RT_1930))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1930))).f_KIND == g_T_SEM));
return rv1937; }
}
{ rt_int rv1938 = 0;
return rv1938; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1939; memset(&l_Y_1939, 0, sizeof l_Y_1939);
l_Y_1939 = r_ORIGINAL(p_Y0);
R28 * l_P_1940; memset(&l_P_1940, 0, sizeof l_P_1940);
R27 * l_A_1941; memset(&l_A_1941, 0, sizeof l_A_1941);
l_A_1941 = p_ARGS;
R10 l_C_1942; memset(&l_C_1942, 0, sizeof l_C_1942);
S_R10(&l_C_1942, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1943; memset(&l_SEP_1943, 0, sizeof l_SEP_1943);
S_R10(&l_SEP_1943, r_MK(rt_str("", 0)), 0);
R10 l_PRE_1944; memset(&l_PRE_1944, 0, sizeof l_PRE_1944);
S_R10(&l_PRE_1944, r_MK(rt_str("", 0)), 0);
R10 l_POST_1945; memset(&l_POST_1945, 0, sizeof l_POST_1945);
S_R10(&l_POST_1945, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_1946; memset(&l_SHARED_1946, 0, sizeof l_SHARED_1946);
l_SHARED_1946 = 0;
R22 * l_PT_1947; memset(&l_PT_1947, 0, sizeof l_PT_1947);
if (((*(R12 *)rt_nil_check(l_Y_1939))).f_GENERIC)
{
l_Y_1939 = r_INSTANCE(l_Y_1939, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1939, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1939))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1942, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1939))).f_LEVEL), 0);
S_R10(&l_SEP_1943, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_1948; memset(&l_Q_1948, 0, sizeof l_Q_1948);
l_Q_1948 = p_ARGS;
for (;;) {
if ((l_Q_1948 == NULL)) goto L_end1949;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_1948))).f_MODE == g_M_IN)))
{
l_SHARED_1946 = 1;
}
l_Q_1948 = ((*(R27 *)rt_nil_check(l_Q_1948))).f_NEXT;
}
RT_B_TICK();
} L_end1949: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_1939))).f_USES == NULL)))
{
l_SHARED_1946 = 1;
}
}
l_P_1940 = ((*(R12 *)rt_nil_check(l_Y_1939))).f_PARAMS;
for (;;) {
if ((l_P_1940 == NULL)) goto L_end1950;
{
if ((l_A_1941 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_1947 = r_FORMAL_VIEW(l_Y_1939, l_P_1940);
if ((l_PT_1947 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1940))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1947)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1951; memset(&l_V_1951, 0, sizeof l_V_1951);
R10 l_CV_1952; memset(&l_CV_1952, 0, sizeof l_CV_1952);
if ((((*(R27 *)rt_nil_check(l_A_1941))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1941))))
{
S_R26(&l_V_1951, ((*(R27 *)rt_nil_check(l_A_1941))).f_V, 0);
}
else
{
S_R26(&l_V_1951, r_EXPR(((*(R27 *)rt_nil_check(l_A_1941))).f_E, l_PT_1947), 0);
}
S_R10(&l_CV_1952, r_CONVERT(l_V_1951, l_PT_1947, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_1946 && (l_V_1951).f_LVAL) && r_IS_STRUCTURED(l_PT_1947)))
{
S_R10(&l_CV_1952, r_COPY_OF(l_PT_1947, l_CV_1952), 0);
}
S_R10(&l_C_1942, r_FMT3(rt_str("@@@", 3), l_C_1942, l_SEP_1943, l_CV_1952), 0);
S_R10(&l_SEP_1943, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1953; memset(&l_V_1953, 0, sizeof l_V_1953);
if (((*(R27 *)rt_nil_check(l_A_1941))).f_HAVE)
{
S_R26(&l_V_1953, ((*(R27 *)rt_nil_check(l_A_1941))).f_V, 0);
}
else
{
S_R26(&l_V_1953, r_EXPR(((*(R27 *)rt_nil_check(l_A_1941))).f_E, l_PT_1947), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1941))).f_E == NULL)) && (!(l_V_1953).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1941))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1941))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1953, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1953).f_C), (l_V_1953).f_T), 0);
(l_V_1953).f_LVAL = 1;
}
}
if ((!(l_V_1953).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_1947, (l_V_1953).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_1947));
}
if (((((*(R28 *)rt_nil_check(l_P_1940))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_1947, (l_V_1953).f_T) && r_SAME_RANGE(l_PT_1947, (l_V_1953).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_1940))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_1947, (l_V_1953).f_T) && r_SAME_RANGE(l_PT_1947, (l_V_1953).f_T))))))
{
{
R10 l_TMP_1954; memset(&l_TMP_1954, 0, sizeof l_TMP_1954);
S_R10(&l_TMP_1954, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_1955; memset(&l_AP_1955, 0, sizeof l_AP_1955);
S_R10(&l_AP_1955, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_1944, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_1944, r_CTYPE((l_V_1953).f_T), l_AP_1955, (l_V_1953).f_C), 0);
S_R10(&l_PRE_1944, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_1944, r_CTYPE(l_PT_1947), l_TMP_1954, r_COPY_OF((l_V_1953).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1955))), 0);
S_R10(&l_POST_1945, r_FMT2(rt_str("@ @", 3), l_POST_1945, r_STORE_CODE((l_V_1953).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1955), r_MKET(l_TMP_1954, l_PT_1947), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_1942, r_FMT3(rt_str("@@&@", 4), l_C_1942, l_SEP_1943, l_TMP_1954), 0);
}
}
else
{
S_R10(&l_C_1942, r_FMT3(rt_str("@@&@", 4), l_C_1942, l_SEP_1943, (l_V_1953).f_C), 0);
}
S_R10(&l_SEP_1943, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1941 = ((*(R27 *)rt_nil_check(l_A_1941))).f_NEXT;
l_P_1940 = ((*(R28 *)rt_nil_check(l_P_1940))).f_NEXT;
}
RT_B_TICK();
} L_end1950: ;
if ((!(l_A_1941 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_1944).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1956 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_1944, ((*(R12 *)rt_nil_check(l_Y_1939))).f_ACCESS, l_C_1942, l_POST_1945), r_RESULT_VIEW(l_Y_1939));
return rv1956; }
}
{ R26 rv1957 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1939))).f_ACCESS, l_C_1942), r_RESULT_VIEW(l_Y_1939));
return rv1957; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv1958 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv1958; }
}
{ R22 * rv1959 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv1959; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv1960 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1960; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv1961 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1961; }
}
{ R22 * rv1962 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv1962; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv1963 = p_T;
return rv1963; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv1964 = p_T;
return rv1964; }
}
{
R12 * l_M_1965; memset(&l_M_1965, 0, sizeof l_M_1965);
l_M_1965 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_1965 == NULL)) goto L_end1966;
{
{
R12 * l_Y_1967; memset(&l_Y_1967, 0, sizeof l_Y_1967);
l_Y_1967 = r_MEMBER_TYPE(l_M_1965, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_1967 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_1967))).f_EXPORTED)
{
{ R22 * rv1968 = r_ABSTRACT_VIEW(l_Y_1967, p_T);
return rv1968; }
}
{ R22 * rv1969 = p_T;
return rv1969; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_1965))).f_MODL))
{
goto L_end1966;
}
l_M_1965 = ((*(R12 *)rt_nil_check(l_M_1965))).f_MODL;
}
RT_B_TICK();
} L_end1966: ;
}
{ R22 * rv1970 = p_T;
return rv1970; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1971; memset(&l_Y_1971, 0, sizeof l_Y_1971);
l_Y_1971 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_1972; memset(&l_Z_1972, 0, sizeof l_Z_1972);
l_Z_1972 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_1972 == NULL)) goto L_end1973;
{
if ((((((*(R12 *)rt_nil_check(l_Z_1972))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_1972))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_1972))).f_ORIG == NULL)))
{
{ R12 * rv1974 = l_Z_1972;
return rv1974; }
}
l_Z_1972 = r_LOOKUP_NEXT(l_Z_1972);
}
RT_B_TICK();
} L_end1973: ;
}
{ R12 * rv1975 = NULL;
return rv1975; }
}
for (;;) {
if ((l_Y_1971 == NULL)) goto L_end1976;
{
if (((((*(R12 *)rt_nil_check(l_Y_1971))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_1971))).f_NAME, p_NAME)))
{
{ R12 * rv1977 = l_Y_1971;
return rv1977; }
}
l_Y_1971 = ((*(R12 *)rt_nil_check(l_Y_1971))).f_SNEXT;
}
RT_B_TICK();
} L_end1976: ;
{ R12 * rv1978 = NULL;
return rv1978; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1979; memset(&l_K_1979, 0, sizeof l_K_1979);
l_K_1979 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv1980 = ((((l_K_1979 == g_T_STR) || (l_K_1979 == g_T_BITS)) || (l_K_1979 == g_T_ARR)) || (l_K_1979 == g_T_REC));
return rv1980; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1981; memset(&l_RA_1981, 0, sizeof l_RA_1981);
l_RA_1981 = r_REAL_TYPE(p_A);
R22 * l_RB_1982; memset(&l_RB_1982, 0, sizeof l_RB_1982);
l_RB_1982 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_1981)))
{
{ rt_int rv1983 = 1;
return rv1983; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1981))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1981))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1982))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1982))).f_HI_C)))
{
{ rt_int rv1984 = 1;
return rv1984; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_1981))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_1982))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv1985 = ((((*(R22 *)rt_nil_check(l_RA_1981))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_1982))).f_LO_C).f_LEN);
return rv1985; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_1981))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_1982))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_1981))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_1982))).f_MHI).f_OK))
{
{ rt_int rv1986 = (((((*(R22 *)rt_nil_check(l_RA_1981))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_1982))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_1981))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_1982))).f_MHI).f_V));
return rv1986; }
}
{ rt_int rv1987 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_1981))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_1982))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_1981))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_1982))).f_HI_C));
return rv1987; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv1988 = 0;
return rv1988; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1989 = 1;
return rv1989; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1990 = 1;
return rv1990; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1991 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1991; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1992 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1992; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1993 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1993; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1994 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1994; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1995 = 0;
return rv1995; }
}
{
R12 * l_Y_1996; memset(&l_Y_1996, 0, sizeof l_Y_1996);
l_Y_1996 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1997; memset(&l_A_1997, 0, sizeof l_A_1997);
l_A_1997 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1998; memset(&l_F_1998, 0, sizeof l_F_1998);
if ((l_Y_1996 == NULL))
{
{ rt_int rv1999 = 0;
return rv1999; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1996))).f_KIND == g_Y_GEN))
{
{ rt_int rv2000 = 1;
return rv2000; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1996))).f_DECL == NULL))
{
{ rt_int rv2001 = 0;
return rv2001; }
}
l_F_1998 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1996))).f_DECL))).f_A;
for (;;) {
if ((l_F_1998 == NULL)) goto L_end2002;
{
{
R21 * l_N_2003; memset(&l_N_2003, 0, sizeof l_N_2003);
l_N_2003 = ((*(R21 *)rt_nil_check(l_F_1998))).f_A;
for (;;) {
if ((l_N_2003 == NULL)) goto L_end2004;
{
if ((l_A_1997 == NULL))
{
{ rt_int rv2005 = 0;
return rv2005; }
}
if (((((*(R21 *)rt_nil_check(l_F_1998))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_1997))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_1997))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1997)))))
{
{ rt_int rv2006 = 1;
return rv2006; }
}
l_A_1997 = ((*(R21 *)rt_nil_check(l_A_1997))).f_NEXT;
l_N_2003 = ((*(R21 *)rt_nil_check(l_N_2003))).f_NEXT;
}
RT_B_TICK();
} L_end2004: ;
}
l_F_1998 = ((*(R21 *)rt_nil_check(l_F_1998))).f_NEXT;
}
RT_B_TICK();
} L_end2002: ;
}
}
{ rt_int rv2007 = 0;
return rv2007; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2008; memset(&l_P_2008, 0, sizeof l_P_2008);
l_P_2008 = p_A;
for (;;) {
if ((l_P_2008 == NULL)) goto L_end2009;
{
if (((((*(R21 *)rt_nil_check(l_P_2008))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2008))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2010 = 1;
return rv2010; }
}
l_P_2008 = ((*(R21 *)rt_nil_check(l_P_2008))).f_NEXT;
}
RT_B_TICK();
} L_end2009: ;
{ rt_int rv2011 = 0;
return rv2011; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2012; memset(&l_ENTERED_2012, 0, sizeof l_ENTERED_2012);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2012 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_2012)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2013; memset(&l_R_2013, 0, sizeof l_R_2013);
l_R_2013 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2014; memset(&l_P_2014, 0, sizeof l_P_2014);
R28 * l_TAIL_2015; memset(&l_TAIL_2015, 0, sizeof l_TAIL_2015);
l_TAIL_2015 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2014 = ((*(R21 *)rt_nil_check(l_R_2013))).f_A;
for (;;) {
if ((l_P_2014 == NULL)) goto L_end2016;
{
if (((((*(R21 *)rt_nil_check(l_P_2014))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2014))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2014 = ((*(R21 *)rt_nil_check(l_P_2014))).f_NEXT;
}
RT_B_TICK();
} L_end2016: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2013))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2014 = ((*(R21 *)rt_nil_check(l_R_2013))).f_A;
for (;;) {
if ((l_P_2014 == NULL)) goto L_end2017;
{
{
R28 * l_PM_2018; memset(&l_PM_2018, 0, sizeof l_PM_2018);
l_PM_2018 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2018)), ({ R28 rc2019; memset(&rc2019, 0, sizeof rc2019);  S_R10(&rc2019.f_NAME, ((*(R21 *)rt_nil_check(l_P_2014))).f_NAME, 0); rc2019.f_MODE = ((*(R21 *)rt_nil_check(l_P_2014))).f_IV; rc2019.f_T = NULL; rc2019.f_TS = ((*(R21 *)rt_nil_check(l_P_2014))).f_B; rc2019.f_NEXT = NULL; rc2019; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2013))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2014))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2014))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2018))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2014))).f_B);
}
if ((l_TAIL_2015 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2018;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2015))).f_NEXT = l_PM_2018;
}
l_TAIL_2015 = l_PM_2018;
}
l_P_2014 = ((*(R21 *)rt_nil_check(l_P_2014))).f_NEXT;
}
RT_B_TICK();
} L_end2017: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2020; memset(&l_R_2020, 0, sizeof l_R_2020);
l_R_2020 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2021; memset(&l_T_2021, 0, sizeof l_T_2021);
if ((((*(R21 *)rt_nil_check(l_R_2020))).f_B == NULL))
{
{ R22 * rv2022 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2022; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2023; memset(&l_P_2023, 0, sizeof l_P_2023);
l_P_2023 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2023 == NULL)) goto L_end2024;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2023))).f_T == NULL)))
{
{
R12 * l_V_2025; memset(&l_V_2025, 0, sizeof l_V_2025);
l_V_2025 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2023))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2025))).f_T = ((*(R28 *)rt_nil_check(l_P_2023))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2025))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2023))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2025))).f_INPUT = 1;
r_DEFINE(l_V_2025, ((*(R21 *)rt_nil_check(l_R_2020))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2023))).f_T, ((*(R12 *)rt_nil_check(l_V_2025))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2020))).f_LINE, 0);
}
}
l_P_2023 = ((*(R28 *)rt_nil_check(l_P_2023))).f_NEXT;
}
RT_B_TICK();
} L_end2024: ;
}
l_T_2021 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2020))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2026 = l_T_2021;
return rv2026; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2027; memset(&l_PS_2027, 0, sizeof l_PS_2027);
S_R10(&l_PS_2027, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2028; memset(&l_SEP_2028, 0, sizeof l_SEP_2028);
S_R10(&l_SEP_2028, r_MK(rt_str("", 0)), 0);
R28 * l_P_2029; memset(&l_P_2029, 0, sizeof l_P_2029);
l_P_2029 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2027, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2028, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2029 == NULL)) goto L_end2030;
{
if ((((*(R28 *)rt_nil_check(l_P_2029))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2029))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2029))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2027, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2027, l_SEP_2028, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2029))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2029))).f_NAME)), 0);
S_R10(&l_SEP_2028, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2027, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2027, l_SEP_2028, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2029))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2029))).f_NAME)), 0);
S_R10(&l_SEP_2028, r_MK(rt_str(", ", 2)), 0);
}
l_P_2029 = ((*(R28 *)rt_nil_check(l_P_2029))).f_NEXT;
}
RT_B_TICK();
} L_end2030: ;
if (((l_PS_2027).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2027, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2031 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2027);
return rv2031; }
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
R25 * l_B_2032; memset(&l_B_2032, 0, sizeof l_B_2032);
l_B_2032 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2033; memset(&l_I_2033, 0, sizeof l_I_2033);
l_I_2033 = ((rt_int)0LL);
for (;;) {
if ((l_B_2032 == NULL)) goto L_end2034;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2032))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2032))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2033)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2032))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2032))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2032))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2032))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2033)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2032))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2033), p_PC, r_NUM(l_I_2033)), ((*(R25 *)rt_nil_check(l_B_2032))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2033 = rt_add(l_I_2033, ((rt_int)1LL));
l_B_2032 = ((*(R25 *)rt_nil_check(l_B_2032))).f_NEXT;
}
RT_B_TICK();
} L_end2034: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2035; memset(&l_U_2035, 0, sizeof l_U_2035);
l_U_2035 = r_REAL_TYPE(p_T);
R24 * l_F_2036; memset(&l_F_2036, 0, sizeof l_F_2036);
l_F_2036 = ((*(R22 *)rt_nil_check(l_U_2035))).f_FIELDS;
R25 * l_A_2037; memset(&l_A_2037, 0, sizeof l_A_2037);
l_A_2037 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2036 == NULL) || (l_A_2037 == NULL))) goto L_end2038;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2036))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2037))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2037))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2036))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2037 = ((*(R25 *)rt_nil_check(l_A_2037))).f_NEXT;
}
l_F_2036 = ((*(R24 *)rt_nil_check(l_F_2036))).f_NEXT;
}
RT_B_TICK();
} L_end2038: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2039 = 0;
return rv2039; }
}
{ rt_int rv2040 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2040; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2041 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2041; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2042; memset(&l_OLD_2042, 0, sizeof l_OLD_2042);
l_OLD_2042 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2042 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2042))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2042))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2042))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2043; memset(&l_G_2043, 0, sizeof l_G_2043);
l_G_2043 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2043))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2043))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2043))).f_INPUT = 1;
r_DEFINE(l_G_2043, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2044; memset(&l_B_2044, 0, sizeof l_B_2044);
l_B_2044 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2044)), ({ R20 rc2045; memset(&rc2045, 0, sizeof rc2045);  S_R10(&rc2045.f_NAME, r_NO_TEXT(), 0); rc2045.f_T = NULL; S_R10(&rc2045.f_C, r_NO_TEXT(), 0); rc2045.f_HASMV = 0; rc2045.f_MV = ((rt_int)0LL); rc2045.f_R = NULL; rc2045.f_NEXT = NULL; rc2045; }), 0);
{ R20 * rv2046 = l_B_2044;
return rv2046; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2047; memset(&l_B_2047, 0, sizeof l_B_2047);
l_B_2047 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2047)), ({ R20 rc2048; memset(&rc2048, 0, sizeof rc2048);  S_R10(&rc2048.f_NAME, p_NAME, 0); rc2048.f_T = p_T; S_R10(&rc2048.f_C, r_NO_TEXT(), 0); rc2048.f_HASMV = (p_M).f_OK; rc2048.f_MV = (p_M).f_V; rc2048.f_R = p_R; rc2048.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2048; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2047))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2047;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2049; memset(&l_B_2049, 0, sizeof l_B_2049);
l_B_2049 = p_BS;
for (;;) {
if ((l_B_2049 == NULL)) goto L_end2050;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2049))).f_NAME, p_NAME))
{
{ R20 * rv2051 = l_B_2049;
return rv2051; }
}
l_B_2049 = ((*(R20 *)rt_nil_check(l_B_2049))).f_NEXT;
}
RT_B_TICK();
} L_end2050: ;
{ R20 * rv2052 = NULL;
return rv2052; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2053; memset(&l_RT_2053, 0, sizeof l_RT_2053);
l_RT_2053 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2054 = 1;
return rv2054; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2055 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2055; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2056 = 1;
return rv2056; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2057 = 1;
return rv2057; }
}
{
R20 * l_B_2058; memset(&l_B_2058, 0, sizeof l_B_2058);
l_B_2058 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2058 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2058))).f_T == NULL))
{
{ rt_int rv2059 = 0;
return rv2059; }
}
{ rt_int rv2060 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2058))).f_T, p_T);
return rv2060; }
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
{ rt_int rv2061 = 1;
return rv2061; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_ARR)))
{
{ rt_int rv2062 = 0;
return rv2062; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2053))).f_DIMS)))
{
{ rt_int rv2063 = 0;
return rv2063; }
}
{ rt_int rv2064 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2053))).f_ELEM, p_BS);
return rv2064; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2065 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2065; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2066 = 0;
return rv2066; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2053))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2053))).f_MHI, p_BS))))
{
{ rt_int rv2067 = 0;
return rv2067; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_INT)))
{
{ rt_int rv2068 = 0;
return rv2068; }
}
{ rt_int rv2069 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2053))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2069; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2070 = ((((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2053))).f_SCALE == ((rt_int)0LL)));
return rv2070; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2071 = 0;
return rv2071; }
}
{ rt_int rv2072 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2053))).f_SCALE), p_BS);
return rv2072; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2073 = (((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_BOOL);
return rv2073; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2074 = (((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_STR);
return rv2074; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_STR)))
{
{ rt_int rv2075 = 0;
return rv2075; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2076 = 1;
return rv2076; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2053))).f_BASE == NULL)))
{
{ rt_int rv2077 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2053))).f_BASE, p_BS);
return rv2077; }
}
{ rt_int rv2078 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2078; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2079 = (((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_BITS);
return rv2079; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2080 = (((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_SEM);
return rv2080; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_PTR)))
{
{ rt_int rv2081 = 0;
return rv2081; }
}
{ rt_int rv2082 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2053), p_BS);
return rv2082; }
}
{
R12 * l_Y_2083; memset(&l_Y_2083, 0, sizeof l_Y_2083);
l_Y_2083 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2083 == NULL))
{
{ rt_int rv2084 = 0;
return rv2084; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2083))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2083))).f_DECL == NULL)))
{
{ rt_int rv2085 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2083))).f_T, p_T);
return rv2085; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2083))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2086 = 0;
return rv2086; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2083))))
{
{ rt_int rv2087 = 0;
return rv2087; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2083))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2053))).f_KIND == g_T_REC)))
{
{ rt_int rv2088 = 0;
return rv2088; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2053))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2089 = 0;
return rv2089; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2053))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2083))))
{
{ rt_int rv2090 = 0;
return rv2090; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2091 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2091; }
}
{ rt_int rv2092 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2083))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2083))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2053, p_BS);
return rv2092; }
}
{
R21 * l_F_2093; memset(&l_F_2093, 0, sizeof l_F_2093);
l_F_2093 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2083))).f_DECL))).f_A;
R21 * l_A_2094; memset(&l_A_2094, 0, sizeof l_A_2094);
l_A_2094 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2095; memset(&l_V_2095, 0, sizeof l_V_2095);
l_V_2095 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2096; memset(&l_CLASS_2096, 0, sizeof l_CLASS_2096);
l_CLASS_2096 = r_RECORD_CLASS_OF(l_RT_2053);
for (;;) {
if ((l_F_2093 == NULL)) goto L_end2097;
{
{
R21 * l_N_2098; memset(&l_N_2098, 0, sizeof l_N_2098);
l_N_2098 = ((*(R21 *)rt_nil_check(l_F_2093))).f_A;
for (;;) {
if ((l_N_2098 == NULL)) goto L_end2099;
{
if ((l_A_2094 == NULL))
{
{ rt_int rv2100 = 0;
return rv2100; }
}
if ((((*(R21 *)rt_nil_check(l_F_2093))).f_B == NULL))
{
if ((!(l_CLASS_2096 == NULL)))
{
{
R20 * l_B_2101; memset(&l_B_2101, 0, sizeof l_B_2101);
l_B_2101 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2096))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2098))).f_NAME);
if ((!(l_B_2101 == NULL)))
{
if ((!r_UNIFY(l_A_2094, ((*(R20 *)rt_nil_check(l_B_2101))).f_T, p_BS)))
{
{ rt_int rv2102 = 0;
return rv2102; }
}
}
}
}
}
else
{
if ((!(l_V_2095 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2094))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2094))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2094))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2103; memset(&l_M_2103, 0, sizeof l_M_2103);
S_R23(&l_M_2103, r_MANIFEST(l_A_2094), 0);
if (((l_M_2103).f_OK && (((*(R25 *)rt_nil_check(l_V_2095))).f_MLO).f_OK))
{
if ((!((l_M_2103).f_V == (((*(R25 *)rt_nil_check(l_V_2095))).f_MLO).f_V)))
{
{ rt_int rv2104 = 0;
return rv2104; }
}
}
}
}
l_V_2095 = ((*(R25 *)rt_nil_check(l_V_2095))).f_NEXT;
}
}
l_A_2094 = ((*(R21 *)rt_nil_check(l_A_2094))).f_NEXT;
l_N_2098 = ((*(R21 *)rt_nil_check(l_N_2098))).f_NEXT;
}
RT_B_TICK();
} L_end2099: ;
}
l_F_2093 = ((*(R21 *)rt_nil_check(l_F_2093))).f_NEXT;
}
RT_B_TICK();
} L_end2097: ;
}
{ rt_int rv2105 = 1;
return rv2105; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2106; memset(&l_R_2106, 0, sizeof l_R_2106);
l_R_2106 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2107 = NULL;
return rv2107; }
}
for (;;) {
if ((l_R_2106 == NULL)) goto L_end2108;
{
if ((((*(R12 *)rt_nil_check(l_R_2106))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2109 = l_R_2106;
return rv2109; }
}
l_R_2106 = ((*(R12 *)rt_nil_check(l_R_2106))).f_INSTANCES;
}
RT_B_TICK();
} L_end2108: ;
{ R12 * rv2110 = NULL;
return rv2110; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2111 = 1;
return rv2111; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2112 = 1;
return rv2112; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2113 = 1;
return rv2113; }
}
{
R20 * l_B_2114; memset(&l_B_2114, 0, sizeof l_B_2114);
l_B_2114 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2114 == NULL)))
{
{ rt_int rv2115 = ((((*(R20 *)rt_nil_check(l_B_2114))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2114))).f_MV == (p_M).f_V));
return rv2115; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2116 = 0;
return rv2116; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2117 = 1;
return rv2117; }
}
{
R23 l_V_2118; memset(&l_V_2118, 0, sizeof l_V_2118);
S_R23(&l_V_2118, r_MANIFEST(p_A), 0);
if (((l_V_2118).f_OK && (p_M).f_OK))
{
{ rt_int rv2119 = ((l_V_2118).f_V == (p_M).f_V);
return rv2119; }
}
}
{ rt_int rv2120 = 1;
return rv2120; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2121 = 0;
return rv2121; }
}
{ rt_int rv2122 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv2122; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2123 = 1;
return rv2123; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2124 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2124; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2125; memset(&l_BS_2125, 0, sizeof l_BS_2125);
l_BS_2125 = r_NEW_BINDS();
R28 * l_P_2126; memset(&l_P_2126, 0, sizeof l_P_2126);
l_P_2126 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2127; memset(&l_A_2127, 0, sizeof l_A_2127);
l_A_2127 = p_ARGS;
for (;;) {
if ((l_P_2126 == NULL)) goto L_end2128;
{
if ((((*(R28 *)rt_nil_check(l_P_2126))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2127))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2126))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2127))).f_E), r_NO_MVAL(), NULL, l_BS_2125);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2126))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2126))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2126))).f_TS, ((*(R27 *)rt_nil_check(l_A_2127))).f_E, p_LINE), l_BS_2125);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2127))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2127))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2126))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2127))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2127))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2127))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2127))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2127))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2126))).f_TS, (((*(R27 *)rt_nil_check(l_A_2127))).f_V).f_T, l_BS_2125)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2126))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2126))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2126))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2126))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2127))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2125);
}
}
l_P_2126 = ((*(R28 *)rt_nil_check(l_P_2126))).f_NEXT;
l_A_2127 = ((*(R27 *)rt_nil_check(l_A_2127))).f_NEXT;
}
RT_B_TICK();
} L_end2128: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2125);
{
R12 * l_I_2129; memset(&l_I_2129, 0, sizeof l_I_2129);
l_I_2129 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2129 == NULL)) goto L_end2130;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2129))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2125))).f_NEXT))
{
{ R12 * rv2131 = l_I_2129;
return rv2131; }
}
l_I_2129 = ((*(R12 *)rt_nil_check(l_I_2129))).f_INSTANCES;
}
RT_B_TICK();
} L_end2130: ;
}
{ R12 * rv2132 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2125))).f_NEXT, p_ARGS);
return rv2132; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2133; memset(&l_P_2133, 0, sizeof l_P_2133);
l_P_2133 = p_A;
for (;;) {
if ((l_P_2133 == NULL)) goto L_end2134;
{
{
R20 * l_Q_2135; memset(&l_Q_2135, 0, sizeof l_Q_2135);
l_Q_2135 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2133))).f_NAME);
if ((l_Q_2135 == NULL))
{
{ rt_int rv2136 = 0;
return rv2136; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2133))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2135))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2133))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2135))).f_T == NULL)))
{
{ rt_int rv2137 = 0;
return rv2137; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2133))).f_T, ((*(R20 *)rt_nil_check(l_Q_2135))).f_T)))
{
{ rt_int rv2138 = 0;
return rv2138; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2133))).f_T, ((*(R20 *)rt_nil_check(l_Q_2135))).f_T)))
{
{ rt_int rv2139 = 0;
return rv2139; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2133))).f_T, ((*(R20 *)rt_nil_check(l_Q_2135))).f_T)))
{
{ rt_int rv2140 = 0;
return rv2140; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2133))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2135))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2133))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2135))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2133))).f_R == ((*(R20 *)rt_nil_check(l_Q_2135))).f_R))))
{
{ rt_int rv2141 = 0;
return rv2141; }
}
}
l_P_2133 = ((*(R20 *)rt_nil_check(l_P_2133))).f_NEXT;
}
RT_B_TICK();
} L_end2134: ;
{ rt_int rv2142 = 1;
return rv2142; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2143; memset(&l_RA_2143, 0, sizeof l_RA_2143);
l_RA_2143 = r_REAL_TYPE(p_A);
R22 * l_RB_2144; memset(&l_RB_2144, 0, sizeof l_RB_2144);
l_RB_2144 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2143))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2143))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2143))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2144))).f_KIND))))
{
{ rt_int rv2145 = 1;
return rv2145; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2143))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2144))).f_MLEN).f_OK))
{
{ rt_int rv2146 = ((((*(R22 *)rt_nil_check(l_RA_2143))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2144))).f_MLEN).f_V);
return rv2146; }
}
{ rt_int rv2147 = ((((*(R22 *)rt_nil_check(l_RA_2143))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2144))).f_MLEN).f_OK);
return rv2147; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2148; memset(&l_RA_2148, 0, sizeof l_RA_2148);
l_RA_2148 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2149; memset(&l_RB_2149, 0, sizeof l_RB_2149);
l_RB_2149 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2148 == NULL) || (l_RB_2149 == NULL)))
{
{ rt_int rv2150 = (l_RA_2148 == l_RB_2149);
return rv2150; }
}
if ((l_RA_2148 == l_RB_2149))
{
{ rt_int rv2151 = 1;
return rv2151; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2148))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2149))).f_NAME)))
{
{ rt_int rv2152 = 0;
return rv2152; }
}
{
R21 * l_X_2153; memset(&l_X_2153, 0, sizeof l_X_2153);
l_X_2153 = ((*(R21 *)rt_nil_check(l_RA_2148))).f_A;
R21 * l_Y_2154; memset(&l_Y_2154, 0, sizeof l_Y_2154);
l_Y_2154 = ((*(R21 *)rt_nil_check(l_RB_2149))).f_A;
for (;;) {
if (((l_X_2153 == NULL) || (l_Y_2154 == NULL))) goto L_end2155;
{
if (((((((*(R21 *)rt_nil_check(l_X_2153))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2153))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2154))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2154))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2153))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2154))).f_NAME)))
{
{ rt_int rv2156 = 0;
return rv2156; }
}
}
else
{
{
R23 l_MX_2157; memset(&l_MX_2157, 0, sizeof l_MX_2157);
S_R23(&l_MX_2157, r_MANIFEST(l_X_2153), 0);
R23 l_MY_2158; memset(&l_MY_2158, 0, sizeof l_MY_2158);
S_R23(&l_MY_2158, r_MANIFEST(l_Y_2154), 0);
if (((!((l_MX_2157).f_OK == (l_MY_2158).f_OK)) || (!((l_MX_2157).f_V == (l_MY_2158).f_V))))
{
{ rt_int rv2159 = 0;
return rv2159; }
}
}
}
l_X_2153 = ((*(R21 *)rt_nil_check(l_X_2153))).f_NEXT;
l_Y_2154 = ((*(R21 *)rt_nil_check(l_Y_2154))).f_NEXT;
}
RT_B_TICK();
} L_end2155: ;
{ rt_int rv2160 = ((((l_X_2153 == NULL) && (l_Y_2154 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2148))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2149))).f_B == NULL));
return rv2160; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2161; memset(&l_Y_2161, 0, sizeof l_Y_2161);
l_Y_2161 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2162; memset(&l_FOUND_2162, 0, sizeof l_FOUND_2162);
l_FOUND_2162 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_2161 == NULL)) goto L_end2163;
{
if ((((*(R12 *)rt_nil_check(l_Y_2161))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2164; memset(&l_R_2164, 0, sizeof l_R_2164);
l_R_2164 = r_ORIGINAL(l_Y_2161);
r_ROUTINE_HEADER(l_R_2164);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_2164)) && (!((*(R12 *)rt_nil_check(l_R_2164))).f_GENERIC)))
{
if (((!(l_FOUND_2162 == NULL)) && (!(l_FOUND_2162 == l_R_2164))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2162 = l_R_2164;
}
}
}
l_Y_2161 = r_LOOKUP_NEXT(l_Y_2161);
}
RT_B_TICK();
} L_end2163: ;
if ((l_FOUND_2162 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2162))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv2165 = l_FOUND_2162;
return rv2165; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2166; memset(&l_NEEDL_2166, 0, sizeof l_NEEDL_2166);
l_NEEDL_2166 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2167; memset(&l_SAVED_2167, 0, sizeof l_SAVED_2167);
l_SAVED_2167 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2166 == NULL)) goto L_end2168;
{
{
R21 * l_T_2169; memset(&l_T_2169, 0, sizeof l_T_2169);
l_T_2169 = ((*(R21 *)rt_nil_check(l_NEEDL_2166))).f_A;
for (;;) {
if ((l_T_2169 == NULL)) goto L_end2170;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2169))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2171; memset(&l_ARGS_2171, 0, sizeof l_ARGS_2171);
l_ARGS_2171 = NULL;
R27 * l_TAIL_2172; memset(&l_TAIL_2172, 0, sizeof l_TAIL_2172);
l_TAIL_2172 = NULL;
R21 * l_P_2173; memset(&l_P_2173, 0, sizeof l_P_2173);
l_P_2173 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2169))).f_B))).f_A;
R12 * l_R_2174; memset(&l_R_2174, 0, sizeof l_R_2174);
rt_int l_ENTERED_2175; memset(&l_ENTERED_2175, 0, sizeof l_ENTERED_2175);
l_ENTERED_2175 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2173 == NULL)) goto L_end2176;
{
{
R27 * l_A_2177; memset(&l_A_2177, 0, sizeof l_A_2177);
if ((((*(R21 *)rt_nil_check(l_P_2173))).f_B == NULL))
{
l_A_2177 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2177 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2173))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2177))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2173))).f_IV;
if ((l_TAIL_2172 == NULL))
{
l_ARGS_2171 = l_A_2177;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2172))).f_NEXT = l_A_2177;
}
l_TAIL_2172 = l_A_2177;
}
l_P_2173 = ((*(R21 *)rt_nil_check(l_P_2173))).f_NEXT;
}
RT_B_TICK();
} L_end2176: ;
if (l_ENTERED_2175)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2174 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2169))).f_NAME, l_ARGS_2171, p_LINE, 0);
if ((l_R_2174 == NULL))
{
l_R_2174 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2169))).f_NAME);
for (;;) {
if ((l_R_2174 == NULL)) goto L_end2178;
{
if ((((*(R12 *)rt_nil_check(l_R_2174))).f_KIND == g_Y_BUILTIN))
{
goto L_end2178;
}
l_R_2174 = r_LOOKUP_NEXT(l_R_2174);
}
RT_B_TICK();
} L_end2178: ;
}
if (((l_R_2174 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2169))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2169))).f_NAME);
}
if ((!(l_R_2174 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2169))).f_NAME, NULL, r_NO_MVAL(), l_R_2174, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2169 = ((*(R21 *)rt_nil_check(l_T_2169))).f_NEXT;
}
RT_B_TICK();
} L_end2170: ;
}
l_NEEDL_2166 = ((*(R21 *)rt_nil_check(l_NEEDL_2166))).f_NEXT;
}
RT_B_TICK();
} L_end2168: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2167;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2179 = 0;
return rv2179; }
}
{
R12 * l_Y_2180; memset(&l_Y_2180, 0, sizeof l_Y_2180);
l_Y_2180 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2181; memset(&l_A_2181, 0, sizeof l_A_2181);
l_A_2181 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2182; memset(&l_F_2182, 0, sizeof l_F_2182);
if ((l_Y_2180 == NULL))
{
{ rt_int rv2183 = 0;
return rv2183; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2180))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2180))).f_DECL == NULL)))
{
{ rt_int rv2184 = 0;
return rv2184; }
}
l_F_2182 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2180))).f_DECL))).f_A;
for (;;) {
if ((l_F_2182 == NULL)) goto L_end2185;
{
{
R21 * l_N_2186; memset(&l_N_2186, 0, sizeof l_N_2186);
l_N_2186 = ((*(R21 *)rt_nil_check(l_F_2182))).f_A;
for (;;) {
if ((l_N_2186 == NULL)) goto L_end2187;
{
if ((l_A_2181 == NULL))
{
{ rt_int rv2188 = 0;
return rv2188; }
}
if (((((*(R21 *)rt_nil_check(l_F_2182))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2181))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2189 = 1;
return rv2189; }
}
l_A_2181 = ((*(R21 *)rt_nil_check(l_A_2181))).f_NEXT;
l_N_2186 = ((*(R21 *)rt_nil_check(l_N_2186))).f_NEXT;
}
RT_B_TICK();
} L_end2187: ;
}
l_F_2182 = ((*(R21 *)rt_nil_check(l_F_2182))).f_NEXT;
}
RT_B_TICK();
} L_end2185: ;
}
{ rt_int rv2190 = 0;
return rv2190; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2191; memset(&l_A_2191, 0, sizeof l_A_2191);
l_A_2191 = p_ARGS;
R12 * l_I_2192; memset(&l_I_2192, 0, sizeof l_I_2192);
l_I_2192 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2193; memset(&l_SAVED_2193, 0, sizeof l_SAVED_2193);
l_SAVED_2193 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2194; memset(&l_P_2194, 0, sizeof l_P_2194);
l_P_2194 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2195; memset(&l_TAIL_2195, 0, sizeof l_TAIL_2195);
l_TAIL_2195 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2192)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2192))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2192))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2192))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2192))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2192))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2192;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2194 == NULL)) goto L_end2196;
{
{
R28 * l_PM_2197; memset(&l_PM_2197, 0, sizeof l_PM_2197);
l_PM_2197 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2197)), (*(R28 *)rt_nil_check(l_P_2194)), 0);
((*(R28 *)rt_nil_check(l_PM_2197))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2194))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2197))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2194))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2197))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2194))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2191))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2197))).f_T = (((*(R27 *)rt_nil_check(l_A_2191))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2197))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2197))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2197))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2197))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2197))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2194))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_2197))).f_TS = NULL;
if ((l_TAIL_2195 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2192))).f_PARAMS = l_PM_2197;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2195))).f_NEXT = l_PM_2197;
}
l_TAIL_2195 = l_PM_2197;
}
l_P_2194 = ((*(R28 *)rt_nil_check(l_P_2194))).f_NEXT;
l_A_2191 = ((*(R27 *)rt_nil_check(l_A_2191))).f_NEXT;
}
RT_B_TICK();
} L_end2196: ;
((*(R12 *)rt_nil_check(l_I_2192))).f_RESULT = r_RESULT_TYPE(l_I_2192);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2193;
S_R10(&((*(R12 *)rt_nil_check(l_I_2192))).f_FWD, r_C_HEADER(l_I_2192), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2192))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2192))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2192;
{ R12 * rv2198 = l_I_2192;
return rv2198; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2199 = 0;
return rv2199; }
}
{ rt_int rv2200 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2200; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2201; memset(&l_C_2201, 0, sizeof l_C_2201);
if ((p_TS == NULL))
{
{ R21 * rv2202 = NULL;
return rv2202; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2203; memset(&l_F_2203, 0, sizeof l_F_2203);
l_F_2203 = p_FORMALS;
R21 * l_A_2204; memset(&l_A_2204, 0, sizeof l_A_2204);
l_A_2204 = p_ARGS;
for (;;) {
if ((l_F_2203 == NULL)) goto L_end2205;
{
{
R21 * l_N_2206; memset(&l_N_2206, 0, sizeof l_N_2206);
l_N_2206 = ((*(R21 *)rt_nil_check(l_F_2203))).f_A;
for (;;) {
if ((l_N_2206 == NULL)) goto L_end2207;
{
if ((l_A_2204 == NULL))
{
{ R21 * rv2208 = p_TS;
return rv2208; }
}
if (((((*(R21 *)rt_nil_check(l_F_2203))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2206))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2209 = l_A_2204;
return rv2209; }
}
l_A_2204 = ((*(R21 *)rt_nil_check(l_A_2204))).f_NEXT;
l_N_2206 = ((*(R21 *)rt_nil_check(l_N_2206))).f_NEXT;
}
RT_B_TICK();
} L_end2207: ;
}
l_F_2203 = ((*(R21 *)rt_nil_check(l_F_2203))).f_NEXT;
}
RT_B_TICK();
} L_end2205: ;
}
{ R21 * rv2210 = p_TS;
return rv2210; }
}
l_C_2201 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2201))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2201))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2211 = l_C_2201;
return rv2211; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2212; memset(&l_C_2212, 0, sizeof l_C_2212);
l_C_2212 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2212)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2212))).f_NEXT = NULL;
{ R21 * rv2213 = l_C_2212;
return rv2213; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2214; memset(&l_P_2214, 0, sizeof l_P_2214);
l_P_2214 = p_L;
for (;;) {
if ((l_P_2214 == NULL)) goto L_end2215;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2214))).f_NAME, p_NAME))
{
{ rt_int rv2216 = 1;
return rv2216; }
}
l_P_2214 = ((*(R21 *)rt_nil_check(l_P_2214))).f_NEXT;
}
RT_B_TICK();
} L_end2215: ;
{ rt_int rv2217 = 0;
return rv2217; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2218; memset(&l_IS_2218, 0, sizeof l_IS_2218);
l_IS_2218 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2219 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2219; }
}
if ((l_IS_2218 == NULL))
{
{ rt_int rv2220 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2220; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2218))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2218))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2221 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2221; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2218))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2218))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2222 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2222; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2218))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2223 = 0;
return rv2223; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2224; memset(&l_ITEMS_2224, 0, sizeof l_ITEMS_2224);
l_ITEMS_2224 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2225; memset(&l_HEAD_2225, 0, sizeof l_HEAD_2225);
l_HEAD_2225 = NULL;
R21 * l_TAIL_2226; memset(&l_TAIL_2226, 0, sizeof l_TAIL_2226);
l_TAIL_2226 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2224 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2224))).f_A, &l_HEAD_2225, &l_TAIL_2226);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2224))).f_B, &l_HEAD_2225, &l_TAIL_2226);
{
R21 * l_R_2227; memset(&l_R_2227, 0, sizeof l_R_2227);
l_R_2227 = ((*(R21 *)rt_nil_check(l_ITEMS_2224))).f_C;
for (;;) {
if ((l_R_2227 == NULL)) goto L_end2228;
{
{
R12 * l_Z_2229; memset(&l_Z_2229, 0, sizeof l_Z_2229);
l_Z_2229 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2227))).f_NAME);
if (((l_Z_2229 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2227))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2227))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2227))).f_NAME);
}
for (;;) {
if ((l_Z_2229 == NULL)) goto L_end2230;
{
if ((((*(R12 *)rt_nil_check(l_Z_2229))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2231; memset(&l_O_2231, 0, sizeof l_O_2231);
l_O_2231 = r_ORIGINAL(l_Z_2229);
R21 * l_U_2232; memset(&l_U_2232, 0, sizeof l_U_2232);
r_COMPUTE_USES(l_O_2231);
l_U_2232 = ((*(R12 *)rt_nil_check(l_O_2231))).f_USES;
for (;;) {
if ((l_U_2232 == NULL)) goto L_end2233;
{
if ((!r_IN_IDENTS(l_HEAD_2225, ((*(R21 *)rt_nil_check(l_U_2232))).f_NAME)))
{
{
R21 * l_N_2234; memset(&l_N_2234, 0, sizeof l_N_2234);
l_N_2234 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2232))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2234))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2232))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2234))).f_IV = ((*(R21 *)rt_nil_check(l_U_2232))).f_IV;
r_ADD_LIST(l_N_2234, &l_HEAD_2225, &l_TAIL_2226);
}
}
l_U_2232 = ((*(R21 *)rt_nil_check(l_U_2232))).f_NEXT;
}
RT_B_TICK();
} L_end2233: ;
}
}
l_Z_2229 = r_LOOKUP_NEXT(l_Z_2229);
}
RT_B_TICK();
} L_end2230: ;
}
l_R_2227 = ((*(R21 *)rt_nil_check(l_R_2227))).f_NEXT;
}
RT_B_TICK();
} L_end2228: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2225;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2235; memset(&l_M_2235, 0, sizeof l_M_2235);
if ((p_B == NULL))
{
{ rt_int rv2236 = 0;
return rv2236; }
}
l_M_2235 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2235 == NULL)) goto L_end2237;
{
if ((((*(R21 *)rt_nil_check(l_M_2235))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2235))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2235))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2235))).f_C, p_NAME)))
{
{ rt_int rv2238 = 1;
return rv2238; }
}
}
l_M_2235 = ((*(R21 *)rt_nil_check(l_M_2235))).f_NEXT;
}
RT_B_TICK();
} L_end2237: ;
{ rt_int rv2239 = 0;
return rv2239; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2240; memset(&l_R_2240, 0, sizeof l_R_2240);
l_R_2240 = p_RS;
for (;;) {
if ((l_R_2240 == NULL)) goto L_end2241;
{
if ((((*(R21 *)rt_nil_check(l_R_2240))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2240));
}
l_R_2240 = ((*(R21 *)rt_nil_check(l_R_2240))).f_NEXT;
}
RT_B_TICK();
} L_end2241: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2242; memset(&l_P_2242, 0, sizeof l_P_2242);
l_P_2242 = p_L;
for (;;) {
if ((l_P_2242 == NULL)) goto L_end2243;
{
{
R12 * l_V_2244; memset(&l_V_2244, 0, sizeof l_V_2244);
l_V_2244 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2242))).f_NAME);
R21 * l_N_2245; memset(&l_N_2245, 0, sizeof l_N_2245);
l_N_2245 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2242))).f_LINE);
if ((l_V_2244 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2242))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2242))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2245))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2242))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2245))).f_IV = ((*(R12 *)rt_nil_check(l_V_2244))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2244))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2245, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2242 = ((*(R21 *)rt_nil_check(l_P_2242))).f_NEXT;
}
RT_B_TICK();
} L_end2243: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2246; memset(&l_IS_2246, 0, sizeof l_IS_2246);
l_IS_2246 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2247; memset(&l_U_2247, 0, sizeof l_U_2247);
l_U_2247 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2246 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2246))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2247 == NULL)) goto L_end2248;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2247))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2246))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2246))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2247))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2247))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2246))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2247))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2246))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2247))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2246))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2246))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2246))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2246))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2247))).f_NAME)))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2247))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2247))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2247 = ((*(R21 *)rt_nil_check(l_U_2247))).f_NEXT;
}
RT_B_TICK();
} L_end2248: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2249; memset(&l_R_2249, 0, sizeof l_R_2249);
l_R_2249 = p_RS;
for (;;) {
if ((l_R_2249 == NULL)) goto L_end2250;
{
{
R12 * l_Z_2251; memset(&l_Z_2251, 0, sizeof l_Z_2251);
l_Z_2251 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2249))).f_NAME);
for (;;) {
if ((l_Z_2251 == NULL)) goto L_end2252;
{
if ((((*(R12 *)rt_nil_check(l_Z_2251))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2253; memset(&l_O_2253, 0, sizeof l_O_2253);
l_O_2253 = r_ORIGINAL(l_Z_2251);
r_COMPUTE_USES(l_O_2253);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2253))).f_USES, p_NAME))
{
{ rt_int rv2254 = 1;
return rv2254; }
}
}
}
l_Z_2251 = r_LOOKUP_NEXT(l_Z_2251);
}
RT_B_TICK();
} L_end2252: ;
}
l_R_2249 = ((*(R21 *)rt_nil_check(l_R_2249))).f_NEXT;
}
RT_B_TICK();
} L_end2250: ;
{ rt_int rv2255 = 0;
return rv2255; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2256; memset(&l_M_2256, 0, sizeof l_M_2256);
l_M_2256 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2256 == NULL)) goto L_end2257;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2256))).f_NAME))
{
{ rt_int rv2258 = 1;
return rv2258; }
}
l_M_2256 = ((*(R12 *)rt_nil_check(l_M_2256))).f_MODL;
}
RT_B_TICK();
} L_end2257: ;
{ rt_int rv2259 = 0;
return rv2259; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2260 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2260; }
}
{ R10 rv2261 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2261; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2262; memset(&l_C_2262, 0, sizeof l_C_2262);
l_C_2262 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2262 == NULL)) goto L_end2263;
{
if ((((*(R17 *)rt_nil_check(l_C_2262))).f_KIND == ((rt_int)1LL)))
{
goto L_end2263;
}
if ((((*(R17 *)rt_nil_check(l_C_2262))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2264; memset(&l_H_2264, 0, sizeof l_H_2264);
l_H_2264 = ((*(R17 *)rt_nil_check(l_C_2262))).f_HANDLERS;
for (;;) {
if ((l_H_2264 == NULL)) goto L_end2265;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2264))).f_A, p_NAME))
{
{ rt_int rv2266 = 1;
return rv2266; }
}
l_H_2264 = ((*(R21 *)rt_nil_check(l_H_2264))).f_NEXT;
}
RT_B_TICK();
} L_end2265: ;
}
}
l_C_2262 = ((*(R17 *)rt_nil_check(l_C_2262))).f_NEXT;
}
RT_B_TICK();
} L_end2263: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2267 = 1;
return rv2267; }
}
}
{ rt_int rv2268 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2268; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2269; memset(&l_C_2269, 0, sizeof l_C_2269);
l_C_2269 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2269)), ({ R17 rc2270; memset(&rc2270, 0, sizeof rc2270);  rc2270.f_KIND = p_KIND; S_R10(&rc2270.f_NAME, p_NAME, 0); rc2270.f_HANDLERS = NULL; rc2270.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2270; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2269;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2271; memset(&l_C_2271, 0, sizeof l_C_2271);
l_C_2271 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2271 == NULL)) goto L_end2272;
{
if ((((*(R17 *)rt_nil_check(l_C_2271))).f_KIND == p_KIND))
{
{ R17 * rv2273 = l_C_2271;
return rv2273; }
}
if ((((*(R17 *)rt_nil_check(l_C_2271))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2274 = NULL;
return rv2274; }
}
if ((((*(R17 *)rt_nil_check(l_C_2271))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2271))).f_NAME));
}
l_C_2271 = ((*(R17 *)rt_nil_check(l_C_2271))).f_NEXT;
}
RT_B_TICK();
} L_end2272: ;
{ R17 * rv2275 = NULL;
return rv2275; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2276; memset(&l_C_2276, 0, sizeof l_C_2276);
l_C_2276 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2277; memset(&l_N_2277, 0, sizeof l_N_2277);
l_N_2277 = ((rt_int)0LL);
for (;;) {
if ((l_C_2276 == NULL)) goto L_end2278;
{
if ((((*(R17 *)rt_nil_check(l_C_2276))).f_KIND == ((rt_int)1LL)))
{
goto L_end2278;
}
if ((((*(R17 *)rt_nil_check(l_C_2276))).f_KIND == ((rt_int)3LL)))
{
l_N_2277 = rt_add(l_N_2277, ((rt_int)1LL));
}
l_C_2276 = ((*(R17 *)rt_nil_check(l_C_2276))).f_NEXT;
}
RT_B_TICK();
} L_end2278: ;
{ rt_int rv2279 = l_N_2277;
return rv2279; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2280; memset(&l_N_2280, 0, sizeof l_N_2280);
l_N_2280 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2280 == NULL)) goto L_end2281;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2280))).f_NAME, p_NAME))
{
{ R10 rv2282 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2282; }
}
l_N_2280 = ((*(R21 *)rt_nil_check(l_N_2280))).f_NEXT;
}
RT_B_TICK();
} L_end2281: ;
l_N_2280 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2280))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2280))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2280;
{ R10 rv2283 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2283; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2284; memset(&l_D_2284, 0, sizeof l_D_2284);
l_D_2284 = p_DECLS;
for (;;) {
if ((l_D_2284 == NULL)) goto L_end2285;
{
if (((((*(R21 *)rt_nil_check(l_D_2284))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2284))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2286; memset(&l_Y_2286, 0, sizeof l_Y_2286);
l_Y_2286 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2284))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2284))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2286))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2286))).f_DECL = l_D_2284;
r_DEFINE(l_Y_2286, ((*(R21 *)rt_nil_check(l_D_2284))).f_LINE);
}
}
l_D_2284 = ((*(R21 *)rt_nil_check(l_D_2284))).f_NEXT;
}
RT_B_TICK();
} L_end2285: ;
}
static void r_DECLARE_LABELS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2287; memset(&l_S_2287, 0, sizeof l_S_2287);
l_S_2287 = p_S0;
for (;;) {
if ((l_S_2287 == NULL)) goto L_end2288;
{
{
R21 * l_L_2289; memset(&l_L_2289, 0, sizeof l_L_2289);
l_L_2289 = l_S_2287;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2289))).f_KIND == g_N_LABELED))) goto L_end2290;
{
{
R12 * l_Y_2291; memset(&l_Y_2291, 0, sizeof l_Y_2291);
l_Y_2291 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2289))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2291))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2289))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2289))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2291))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2291, ((*(R21 *)rt_nil_check(l_L_2289))).f_LINE);
}
l_L_2289 = ((*(R21 *)rt_nil_check(l_L_2289))).f_A;
}
RT_B_TICK();
} L_end2290: ;
}
l_S_2287 = ((*(R21 *)rt_nil_check(l_S_2287))).f_NEXT;
}
RT_B_TICK();
} L_end2288: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2292; memset(&l_D_2292, 0, sizeof l_D_2292);
l_D_2292 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2293; memset(&l_S_2293, 0, sizeof l_S_2293);
l_S_2293 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2292 == NULL)) goto L_end2294;
{
if (((((*(R21 *)rt_nil_check(l_D_2292))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2292))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2292);
}
l_D_2292 = ((*(R21 *)rt_nil_check(l_D_2292))).f_NEXT;
}
RT_B_TICK();
} L_end2294: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2293 == NULL)) goto L_end2295;
{
r_STMT(l_S_2293);
l_S_2293 = ((*(R21 *)rt_nil_check(l_S_2293))).f_NEXT;
}
RT_B_TICK();
} L_end2295: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2296; memset(&l_F_2296, 0, sizeof l_F_2296);
S_R10(&l_F_2296, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2297; memset(&l_H_2297, 0, sizeof l_H_2297);
l_H_2297 = p_HANDLERS;
R10 l_WORD_2298; memset(&l_WORD_2298, 0, sizeof l_WORD_2298);
S_R10(&l_WORD_2298, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2296, l_F_2296));
r_PUSH_CTX(((rt_int)3LL), l_F_2296);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2296, l_F_2296, l_F_2296));
for (;;) {
if ((l_H_2297 == NULL)) goto L_end2299;
{
{
R21 * l_N_2300; memset(&l_N_2300, 0, sizeof l_N_2300);
l_N_2300 = ((*(R21 *)rt_nil_check(l_H_2297))).f_A;
R10 l_COND_2301; memset(&l_COND_2301, 0, sizeof l_COND_2301);
S_R10(&l_COND_2301, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2300 == NULL)) goto L_end2302;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2300))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2300))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2300))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2300))).f_NAME);
}
S_R10(&l_COND_2301, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2301, l_F_2296, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2300))).f_NAME)), 0);
l_N_2300 = ((*(R21 *)rt_nil_check(l_N_2300))).f_NEXT;
}
RT_B_TICK();
} L_end2302: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2298, l_COND_2301));
S_R10(&l_WORD_2298, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2296, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2297))).f_B);
r_POP_CTX();
}
l_H_2297 = ((*(R21 *)rt_nil_check(l_H_2297))).f_NEXT;
}
RT_B_TICK();
} L_end2299: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2296));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2303; memset(&l_K_2303, 0, sizeof l_K_2303);
l_K_2303 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2303 == g_N_NULL))
{
return;
}
else if ((l_K_2303 == g_N_LABELED))
{
{
R12 * l_Y_2304; memset(&l_Y_2304, 0, sizeof l_Y_2304);
l_Y_2304 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2304))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2303 == g_N_GOTO))
{
{
R12 * l_Y_2305; memset(&l_Y_2305, 0, sizeof l_Y_2305);
l_Y_2305 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2306; memset(&l_N_2306, 0, sizeof l_N_2306);
R17 * l_C_2307; memset(&l_C_2307, 0, sizeof l_C_2307);
l_C_2307 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2305 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2305))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2305))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2306 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2305))).f_MV);
for (;;) {
if ((l_N_2306 <= ((rt_int)0LL))) goto L_end2308;
{
if ((((*(R17 *)rt_nil_check(l_C_2307))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2307))).f_NAME));
l_N_2306 = rt_sub(l_N_2306, ((rt_int)1LL));
}
l_C_2307 = ((*(R17 *)rt_nil_check(l_C_2307))).f_NEXT;
}
RT_B_TICK();
} L_end2308: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2305))).f_ACCESS));
}
}
else if ((l_K_2303 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2303 == g_N_CALL))
{
{
R26 l_V_2309; memset(&l_V_2309, 0, sizeof l_V_2309);
S_R26(&l_V_2309, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2309).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2309).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2309).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2303 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2303 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2303 == g_N_LOOP))
{
{
R10 l_END_L_2310; memset(&l_END_L_2310, 0, sizeof l_END_L_2310);
S_R10(&l_END_L_2310, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2310));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2310);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2310));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2310));
}
}
else if ((l_K_2303 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2303 == g_N_EXIT))
{
{
R17 * l_C_2311; memset(&l_C_2311, 0, sizeof l_C_2311);
l_C_2311 = r_LEAVE(((rt_int)2LL));
if ((l_C_2311 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2311))).f_NAME));
}
}
else if ((l_K_2303 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2303 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2303 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2303 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2303 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2303 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2303 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2303 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2312; memset(&l_Y_2312, 0, sizeof l_Y_2312);
l_Y_2312 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2312 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2312))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2312))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2313 = r_CALL_EXPR(p_S, NULL);
return rv2313; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2314; memset(&l_ARM_2314, 0, sizeof l_ARM_2314);
l_ARM_2314 = p_ARMS;
R10 l_WORD_2315; memset(&l_WORD_2315, 0, sizeof l_WORD_2315);
S_R10(&l_WORD_2315, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2316; memset(&l_OPEN_2316, 0, sizeof l_OPEN_2316);
l_OPEN_2316 = ((rt_int)0LL);
rt_int l_CHOSEN_2317; memset(&l_CHOSEN_2317, 0, sizeof l_CHOSEN_2317);
l_CHOSEN_2317 = 0;
for (;;) {
if ((l_ARM_2314 == NULL)) goto L_end2318;
{
{
R23 l_M_2319; memset(&l_M_2319, 0, sizeof l_M_2319);
S_R23(&l_M_2319, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2314))).f_A), 0);
if (l_CHOSEN_2317)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2314))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2314))).f_B);
}
else if ((l_M_2319).f_OK)
{
if ((!r_TEQS(l_WORD_2315, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2316 = rt_add(l_OPEN_2316, ((rt_int)1LL));
S_R10(&l_WORD_2315, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2314))).f_A)));
if (((l_M_2319).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2314))).f_B);
l_CHOSEN_2317 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2314))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2315, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2314))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2314))).f_B);
S_R10(&l_WORD_2315, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2314 = ((*(R21 *)rt_nil_check(l_ARM_2314))).f_NEXT;
}
RT_B_TICK();
} L_end2318: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2317)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2315, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2321_lo = ((rt_int)1LL), it2321_hi = l_OPEN_2316;
for (rt_int it2321 = it2321_lo; it2321 <= it2321_hi; it2321++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2321 == it2321_hi) break;
} } L_end2320: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2322; memset(&l_SAVED_CODE_2322, 0, sizeof l_SAVED_CODE_2322);
S_R14(&l_SAVED_CODE_2322, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2323; memset(&rc2323, 0, sizeof rc2323);  rc2323.f_HEAD = NULL; rc2323.f_TAIL = NULL; rc2323; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2322, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2324; memset(&l_C_2324, 0, sizeof l_C_2324);
S_R10(&l_C_2324, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2325; memset(&l_END_L_2325, 0, sizeof l_END_L_2325);
S_R10(&l_END_L_2325, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2326; memset(&l_IT_2326, 0, sizeof l_IT_2326);
S_R10(&l_IT_2326, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2327; memset(&l_R_2327, 0, sizeof l_R_2327);
l_R_2327 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2328; memset(&l_LO_2328, 0, sizeof l_LO_2328);
S_R26(&l_LO_2328, r_EXPR(((*(R21 *)rt_nil_check(l_R_2327))).f_A, NULL), 0);
R26 l_HI_2329; memset(&l_HI_2329, 0, sizeof l_HI_2329);
S_R26(&l_HI_2329, r_EXPR(((*(R21 *)rt_nil_check(l_R_2327))).f_B, (l_LO_2328).f_T), 0);
R22 * l_T_2330; memset(&l_T_2330, 0, sizeof l_T_2330);
l_T_2330 = r_REAL_TYPE((l_LO_2328).f_T);
R10 l_LOC_2331; memset(&l_LOC_2331, 0, sizeof l_LOC_2331);
R10 l_HIC_2332; memset(&l_HIC_2332, 0, sizeof l_HIC_2332);
if ((((*(R22 *)rt_nil_check(l_T_2330))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2330))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2330))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2330))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2331, (l_LO_2328).f_C, 0);
S_R10(&l_HIC_2332, (l_HI_2329).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2327))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2327))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2331, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2331), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2327))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2332, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2332), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2326, l_LOC_2331, l_IT_2326, l_HIC_2332));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2326, l_IT_2326, l_IT_2326, l_IT_2326));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2333; memset(&l_Y_2333, 0, sizeof l_Y_2333);
l_Y_2333 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2333))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2330))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2333))).f_T = ((*(R22 *)rt_nil_check(l_T_2330))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2333))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2333, rt_str("", 0)), l_IT_2326));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2333, rt_str("", 0)), l_IT_2326));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2333))).f_ACCESS, l_IT_2326, 0);
}
r_DEFINE(l_Y_2333, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2325);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2326, l_IT_2326));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2325));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2334; memset(&l_CS_2334, 0, sizeof l_CS_2334);
l_CS_2334 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2335; memset(&l_C_2335, 0, sizeof l_C_2335);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2335 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2334))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2334))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2334))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2334))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2334))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2334))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2334))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2334))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2336; memset(&l_V_2336, 0, sizeof l_V_2336);
S_R10(&l_V_2336, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2334))).f_RESULT), l_V_2336, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2334))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2334))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2335 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2336));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2337; memset(&l_C_2337, 0, sizeof l_C_2337);
l_C_2337 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2337 == NULL)) goto L_end2338;
{
if ((((*(R17 *)rt_nil_check(l_C_2337))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2337))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2337))).f_KIND == ((rt_int)1LL)))
{
goto L_end2338;
}
l_C_2337 = ((*(R17 *)rt_nil_check(l_C_2337))).f_NEXT;
}
RT_B_TICK();
} L_end2338: ;
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
R21 * l_TG_2339; memset(&l_TG_2339, 0, sizeof l_TG_2339);
l_TG_2339 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2339))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2340; memset(&l_B_2340, 0, sizeof l_B_2340);
S_R26(&l_B_2340, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2339))).f_A, NULL), 0);
if ((!(l_B_2340).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2340).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2341; memset(&l_ARGS_2341, 0, sizeof l_ARGS_2341);
l_ARGS_2341 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2339))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2339))).f_C, g_M_IN, r_VAL_ARG(l_B_2340, NULL))));
R12 * l_Y_2342; memset(&l_Y_2342, 0, sizeof l_Y_2342);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2341))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2342 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2341, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2342 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2341))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2342 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2341, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2342 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2342, l_ARGS_2341, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2340).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2340).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2343; memset(&l_V_2343, 0, sizeof l_V_2343);
S_R26(&l_V_2343, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2340).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2343).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2340).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2340).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2339))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2339))).f_C), (l_V_2343).f_C));
}
}
return;
}
{
R26 l_LV_2344; memset(&l_LV_2344, 0, sizeof l_LV_2344);
S_R26(&l_LV_2344, r_EXPR(l_TG_2339, NULL), 0);
R21 * l_SAVED_Q_2345; memset(&l_SAVED_Q_2345, 0, sizeof l_SAVED_Q_2345);
l_SAVED_Q_2345 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2344).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
r_CODE(r_STORE_CODE((l_LV_2344).f_T, (l_LV_2344).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2344).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2344).f_SELF));
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2345;
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2346; memset(&l_Y_2346, 0, sizeof l_Y_2346);
l_Y_2346 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2347; memset(&l_V_2347, 0, sizeof l_V_2347);
S_R26(&l_V_2347, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2346))).f_T = (l_V_2347).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2348; memset(&l_CN_2348, 0, sizeof l_CN_2348);
S_R10(&l_CN_2348, r_NEW_OBJECT(l_Y_2346, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2347).f_T))
{
r_CODE(r_INIT_CODE((l_V_2347).f_T, l_CN_2348));
}
r_CODE(r_ASSIGN_CODE((l_V_2347).f_T, l_CN_2348, (l_V_2347).f_C));
}
}
else
{
if ((!(l_V_2347).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2349; memset(&l_P_2349, 0, sizeof l_P_2349);
S_R10(&l_P_2349, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2347).f_T), l_P_2349, (l_V_2347).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2346))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2349), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2346))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2346))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2346))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2346, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2350; memset(&l_ARM_2350, 0, sizeof l_ARM_2350);
l_ARM_2350 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2351; memset(&l_CH_2351, 0, sizeof l_CH_2351);
S_R26(&l_CH_2351, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2352; memset(&l_T_2352, 0, sizeof l_T_2352);
l_T_2352 = r_REAL_TYPE((l_CH_2351).f_T);
R12 * l_BOUND_2353; memset(&l_BOUND_2353, 0, sizeof l_BOUND_2353);
l_BOUND_2353 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2352))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2352))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2354; memset(&l_TMP_2354, 0, sizeof l_TMP_2354);
S_R10(&l_TMP_2354, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2355; memset(&l_WORD_2355, 0, sizeof l_WORD_2355);
S_R10(&l_WORD_2355, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2354, (l_CH_2351).f_C));
for (;;) {
if ((l_ARM_2350 == NULL)) goto L_end2356;
{
{
R21 * l_L_2357; memset(&l_L_2357, 0, sizeof l_L_2357);
l_L_2357 = ((*(R21 *)rt_nil_check(l_ARM_2350))).f_A;
R10 l_COND_2358; memset(&l_COND_2358, 0, sizeof l_COND_2358);
S_R10(&l_COND_2358, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2357 == NULL)) goto L_end2359;
{
S_R10(&l_COND_2358, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2358, l_TMP_2354, (r_EXPR(l_L_2357, l_T_2352)).f_C), 0);
l_L_2357 = ((*(R21 *)rt_nil_check(l_L_2357))).f_NEXT;
}
RT_B_TICK();
} L_end2359: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2355, l_COND_2358));
S_R10(&l_WORD_2355, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2350))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2350))).f_C);
}
l_ARM_2350 = ((*(R21 *)rt_nil_check(l_ARM_2350))).f_NEXT;
}
RT_B_TICK();
} L_end2356: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2355, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2352))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2352))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2352))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2352))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2352));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2351).f_C));
for (;;) {
if ((l_ARM_2350 == NULL)) goto L_end2360;
{
{
R21 * l_L_2361; memset(&l_L_2361, 0, sizeof l_L_2361);
l_L_2361 = ((*(R21 *)rt_nil_check(l_ARM_2350))).f_A;
R23 l_FIRST_2362; memset(&l_FIRST_2362, 0, sizeof l_FIRST_2362);
S_R23(&l_FIRST_2362, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2361 == NULL)) goto L_end2363;
{
if ((((*(R21 *)rt_nil_check(l_L_2361))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2364; memset(&l_LO_2364, 0, sizeof l_LO_2364);
S_R23(&l_LO_2364, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2361))).f_A, l_T_2352), 0);
R23 l_HI_2365; memset(&l_HI_2365, 0, sizeof l_HI_2365);
S_R23(&l_HI_2365, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2361))).f_B, l_T_2352), 0);
rt_int l_A_2366; memset(&l_A_2366, 0, sizeof l_A_2366);
l_A_2366 = (l_LO_2364).f_V;
rt_int l_B_2367; memset(&l_B_2367, 0, sizeof l_B_2367);
l_B_2367 = (l_HI_2365).f_V;
if ((!(((l_LO_2364).f_OK && (l_HI_2365).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2361))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2361))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2361))).f_IV == ((rt_int)3LL))))
{
l_A_2366 = rt_add(l_A_2366, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2361))).f_IV >= ((rt_int)2LL)))
{
l_B_2367 = rt_sub(l_B_2367, ((rt_int)1LL));
}
if ((!(l_FIRST_2362).f_OK))
{
S_R23(&l_FIRST_2362, r_SOME(l_A_2366), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2366), r_NUM(l_B_2367)));
}
}
else
{
{
R23 l_M_2368; memset(&l_M_2368, 0, sizeof l_M_2368);
S_R23(&l_M_2368, r_ENUM_MANIFEST(l_L_2361, l_T_2352), 0);
if ((!(l_M_2368).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2361))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2362).f_OK))
{
S_R23(&l_FIRST_2362, l_M_2368, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2368).f_V)));
}
}
l_L_2361 = ((*(R21 *)rt_nil_check(l_L_2361))).f_NEXT;
}
RT_B_TICK();
} L_end2363: ;
if ((!(l_BOUND_2353 == NULL)))
{
{
R22 * l_SAVED_2369; memset(&l_SAVED_2369, 0, sizeof l_SAVED_2369);
l_SAVED_2369 = ((*(R12 *)rt_nil_check(l_BOUND_2353))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2353))).f_T = r_NARROW(l_SAVED_2369, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2362).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2350))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2350))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2353))).f_T = l_SAVED_2369;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2350))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2350))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2350 = ((*(R21 *)rt_nil_check(l_ARM_2350))).f_NEXT;
}
RT_B_TICK();
} L_end2360: ;
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
{ R12 * rv2370 = NULL;
return rv2370; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2371 = NULL;
return rv2371; }
}
{
R12 * l_Y_2372; memset(&l_Y_2372, 0, sizeof l_Y_2372);
l_Y_2372 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2372 == NULL))
{
{ R12 * rv2373 = NULL;
return rv2373; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2372))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2374 = NULL;
return rv2374; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2372))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2375 = NULL;
return rv2375; }
}
{
R24 * l_F_2376; memset(&l_F_2376, 0, sizeof l_F_2376);
l_F_2376 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2372))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2376 == NULL))
{
{ R12 * rv2377 = NULL;
return rv2377; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2376))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2378 = NULL;
return rv2378; }
}
}
{ R12 * rv2379 = l_Y_2372;
return rv2379; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2380; memset(&l_N_2380, 0, sizeof l_N_2380);
l_N_2380 = r_COPY_TYP(p_T);
R24 * l_F_2381; memset(&l_F_2381, 0, sizeof l_F_2381);
l_F_2381 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2382; memset(&l_A_2382, 0, sizeof l_A_2382);
l_A_2382 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2383; memset(&l_HEAD_2383, 0, sizeof l_HEAD_2383);
l_HEAD_2383 = NULL;
R25 * l_TAIL_2384; memset(&l_TAIL_2384, 0, sizeof l_TAIL_2384);
l_TAIL_2384 = NULL;
for (;;) {
if ((l_F_2381 == NULL)) goto L_end2385;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2381))).f_KIND == ((rt_int)0LL))) && (!(l_A_2382 == NULL))))
{
{
R25 * l_B_2386; memset(&l_B_2386, 0, sizeof l_B_2386);
l_B_2386 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2386)), (*(R25 *)rt_nil_check(l_A_2382)), 0);
((*(R25 *)rt_nil_check(l_B_2386))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2381))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2386))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2386))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2386))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2384 == NULL))
{
l_HEAD_2383 = l_B_2386;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2384))).f_NEXT = l_B_2386;
}
l_TAIL_2384 = l_B_2386;
}
l_A_2382 = ((*(R25 *)rt_nil_check(l_A_2382))).f_NEXT;
}
l_F_2381 = ((*(R24 *)rt_nil_check(l_F_2381))).f_NEXT;
}
RT_B_TICK();
} L_end2385: ;
((*(R22 *)rt_nil_check(l_N_2380))).f_ARGS = l_HEAD_2383;
{ R22 * rv2387 = l_N_2380;
return rv2387; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2388; memset(&l_ARM_2388, 0, sizeof l_ARM_2388);
l_ARM_2388 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2389; memset(&l_SAVED_2389, 0, sizeof l_SAVED_2389);
l_SAVED_2389 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2388 == NULL)) goto L_end2390;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2388))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2388))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2388))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2389;
return;
}
l_ARM_2388 = ((*(R21 *)rt_nil_check(l_ARM_2388))).f_NEXT;
}
RT_B_TICK();
} L_end2390: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2389;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2391; memset(&l_T_2391, 0, sizeof l_T_2391);
l_T_2391 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2391))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2392 = l_T_2391;
return rv2392; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2393; memset(&l_TD_2393, 0, sizeof l_TD_2393);
S_R10(&l_TD_2393, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2394; memset(&l_P_2394, 0, sizeof l_P_2394);
l_P_2394 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2394 == NULL)) goto L_end2395;
{
{
R12 * l_Y_2396; memset(&l_Y_2396, 0, sizeof l_Y_2396);
l_Y_2396 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2394))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2396))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2396))).f_DECL = l_P_2394;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2396, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2396))).f_INPUT = 1;
r_DEFINE(l_Y_2396, ((*(R21 *)rt_nil_check(l_P_2394))).f_LINE);
}
l_P_2394 = ((*(R21 *)rt_nil_check(l_P_2394))).f_NEXT;
}
RT_B_TICK();
} L_end2395: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2393));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2393, l_TD_2393));
l_P_2394 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2394 == NULL)) goto L_end2397;
{
r_ACTIVATE_PATH(l_P_2394, l_TD_2393);
l_P_2394 = ((*(R21 *)rt_nil_check(l_P_2394))).f_NEXT;
}
RT_B_TICK();
} L_end2397: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2393, l_TD_2393, l_TD_2393));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2393));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2398; memset(&l_FN_2398, 0, sizeof l_FN_2398);
S_R10(&l_FN_2398, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2399; memset(&l_FT_2399, 0, sizeof l_FT_2399);
S_R10(&l_FT_2399, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2400; memset(&l_Y_2400, 0, sizeof l_Y_2400);
l_Y_2400 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2401; memset(&l_H_2401, 0, sizeof l_H_2401);
S_R10(&l_H_2401, r_OBJ_ACCESS(l_Y_2400), 0);
R10 l_IT_2402; memset(&l_IT_2402, 0, sizeof l_IT_2402);
S_R10(&l_IT_2402, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2403; memset(&l_PRIO_2403, 0, sizeof l_PRIO_2403);
S_R10(&l_PRIO_2403, r_MK(rt_str("0", 1)), 0);
R10 l_START_2404; memset(&l_START_2404, 0, sizeof l_START_2404);
R22 * l_LT_2405; memset(&l_LT_2405, 0, sizeof l_LT_2405);
l_LT_2405 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2399, l_FT_2399));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2403, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2406; memset(&l_R_2406, 0, sizeof l_R_2406);
l_R_2406 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2407; memset(&l_LV_2407, 0, sizeof l_LV_2407);
S_R26(&l_LV_2407, r_EXPR(((*(R21 *)rt_nil_check(l_R_2406))).f_A, NULL), 0);
R10 l_LO_2408; memset(&l_LO_2408, 0, sizeof l_LO_2408);
S_R10(&l_LO_2408, (l_LV_2407).f_C, 0);
R10 l_HI_2409; memset(&l_HI_2409, 0, sizeof l_HI_2409);
S_R10(&l_HI_2409, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2406))).f_B, (l_LV_2407).f_T)).f_C, 0);
R22 * l_RT_2410; memset(&l_RT_2410, 0, sizeof l_RT_2410);
l_RT_2410 = r_REAL_TYPE((l_LV_2407).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2410))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2410))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2405 = ((*(R22 *)rt_nil_check(l_RT_2410))).f_BASE;
S_R10(&l_HI_2409, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2406))).f_B, l_LT_2405)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2410))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2410))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2406))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2406))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2408, r_FMT1(rt_str("(@) + 1", 7), l_LO_2408), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2406))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2409, r_FMT1(rt_str("(@) - 1", 7), l_HI_2409), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2401, l_LO_2408, l_HI_2409));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2402, l_H_2401, l_IT_2402, l_H_2401), l_IT_2402));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2402));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2399, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2402));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2411; memset(&l_V_2411, 0, sizeof l_V_2411);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2412; memset(&l_I_2412, 0, sizeof l_I_2412);
l_I_2412 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2412))).f_T = l_LT_2405;
((*(R12 *)rt_nil_check(l_I_2412))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2412))).f_ACCESS, l_IT_2402, 0);
((*(R12 *)rt_nil_check(l_I_2412))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2412, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2411, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2411).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2411).f_C));
}
}
S_R10(&l_START_2404, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2401, l_IT_2402, l_FN_2398, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2404, p_TD, l_PRIO_2403, l_IT_2402));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2401));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2404, p_TD, l_PRIO_2403));
}
r_PATH_BODY(p_P, l_FN_2398, l_FT_2399, l_LT_2405);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2413 = r_MK(rt_str("NULL", 4));
return rv2413; }
}
{ R10 rv2414 = r_MK(rt_str("F", 1));
return rv2414; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2415; memset(&l_SAVED_CODE_2415, 0, sizeof l_SAVED_CODE_2415);
S_R14(&l_SAVED_CODE_2415, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2416; memset(&l_SAVED_CTXS_2416, 0, sizeof l_SAVED_CTXS_2416);
l_SAVED_CTXS_2416 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2417; memset(&l_OUTER_2417, 0, sizeof l_OUTER_2417);
l_OUTER_2417 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2418; memset(&l_H_2418, 0, sizeof l_H_2418);
l_H_2418 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2419; memset(&l_CS_2419, 0, sizeof l_CS_2419);
l_CS_2419 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_2420; memset(&l_UPT_2420, 0, sizeof l_UPT_2420);
S_R10(&l_UPT_2420, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2417))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2420, ((*(R18 *)rt_nil_check(l_OUTER_2417))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2419)), ({ R18 rc2421; memset(&rc2421, 0, sizeof rc2421);  rc2421.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2417))).f_LEVEL, ((rt_int)1LL)); rc2421.f_R = NULL; rc2421.f_FRAMED = 1; S_R10(&rc2421.f_FTYPE, p_FT, 0); S_R14(&rc2421.f_FIELDS, ({ R14 rc2422; memset(&rc2422, 0, sizeof rc2422);  rc2422.f_HEAD = NULL; rc2422.f_TAIL = NULL; rc2422; }), 0); rc2421.f_UP = l_OUTER_2417; rc2421.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2418))).f_B; rc2421.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2418))).f_A; rc2421.f_RESULT = NULL; rc2421.f_IS_PATH = 1; S_R10(&rc2421.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2421; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2420), &((*(R18 *)rt_nil_check(l_CS_2419))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2419;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2423; memset(&rc2423, 0, sizeof rc2423);  rc2423.f_HEAD = NULL; rc2423.f_TAIL = NULL; rc2423; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2418))).f_B, ((*(R21 *)rt_nil_check(l_H_2418))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2424; memset(&l_I_2424, 0, sizeof l_I_2424);
l_I_2424 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2424))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2424))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2424))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2424))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2419))).f_FIELDS);
r_DEFINE(l_I_2424, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2425; memset(&l_L_2425, 0, sizeof l_L_2425);
l_L_2425 = ((*(R21 *)rt_nil_check(l_H_2418))).f_A;
R10 l_C_2426; memset(&l_C_2426, 0, sizeof l_C_2426);
S_R10(&l_C_2426, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2425 == NULL)) goto L_end2427;
{
S_R10(&l_C_2426, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2426, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2425))).f_NAME)), 0);
l_L_2425 = ((*(R21 *)rt_nil_check(l_L_2425))).f_NEXT;
}
RT_B_TICK();
} L_end2427: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2426));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2419))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2417;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2415, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2416;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2428; memset(&l_C_2428, 0, sizeof l_C_2428);
l_C_2428 = (p_B).f_HEAD;
R10 l_R_2429; memset(&l_R_2429, 0, sizeof l_R_2429);
S_R10(&l_R_2429, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2428 == NULL)) goto L_end2430;
{
S_R10(&l_R_2429, r_CAT(l_R_2429, ((*(R15 *)rt_nil_check(l_C_2428))).f_T), 0);
l_C_2428 = ((*(R15 *)rt_nil_check(l_C_2428))).f_NEXT;
}
RT_B_TICK();
} L_end2430: ;
{ R10 rv2431 = l_R_2429;
return rv2431; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2432; memset(&l_NAME_2432, 0, sizeof l_NAME_2432);
S_R10(&l_NAME_2432, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2433; memset(&l_SUB_2433, 0, sizeof l_SUB_2433);
S_R10(&l_SUB_2433, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2433, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2434; memset(&l_Y_2434, 0, sizeof l_Y_2434);
l_Y_2434 = r_LOOKUP(l_NAME_2432);
if ((l_Y_2434 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2432);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2434))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2432);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2434))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2435 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2434), l_SUB_2433);
return rv2435; }
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
R10 l_NAME_2436; memset(&l_NAME_2436, 0, sizeof l_NAME_2436);
S_R10(&l_NAME_2436, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2437; memset(&l_LINE_2437, 0, sizeof l_LINE_2437);
l_LINE_2437 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2436, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2438; memset(&l_V_2438, 0, sizeof l_V_2438);
S_R26(&l_V_2438, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2438).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2437, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2439 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2438).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2438).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2439; }
}
}
else if (r_TEQS(l_NAME_2436, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2440 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2440; }
}
{ R26 rv2441 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2441; }
}
else if (r_TEQS(l_NAME_2436, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2442 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2442; }
}
{ R26 rv2443 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2443; }
}
else if ((r_TEQS(l_NAME_2436, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2436, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2437, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2436);
}
{
R26 l_V_2444; memset(&l_V_2444, 0, sizeof l_V_2444);
S_R26(&l_V_2444, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2444).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2437, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2444).f_LVAL))
{
r_FAIL(l_LINE_2437, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2436, rt_str("REQUEST", 7)))
{
{ R26 rv2445 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2444).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2445; }
}
{ R26 rv2446 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2444).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2446; }
}
}
else if (r_TEQS(l_NAME_2436, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2437);
{ R26 rv2447 = r_START_IO_CALL(p_E);
return rv2447; }
}
r_FAILT(l_LINE_2437, rt_str("unknown routine ", 16), l_NAME_2436);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2448; memset(&l_ARGS_2448, 0, sizeof l_ARGS_2448);
l_ARGS_2448 = r_CALL_ARGS(p_E);
R12 * l_Y_2449; memset(&l_Y_2449, 0, sizeof l_Y_2449);
l_Y_2449 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2448, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2450; memset(&l_R_2450, 0, sizeof l_R_2450);
if ((l_Y_2449 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2450, r_CALL_SYM(l_Y_2449, l_ARGS_2448, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2451 = l_R_2450;
return rv2451; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2452; memset(&l_I_2452, 0, sizeof l_I_2452);
l_I_2452 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2452)), ({ R19 rc2453; memset(&rc2453, 0, sizeof rc2453);  rc2453.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2453.f_IMPORTS = p_IMPORTS; rc2453.f_SIGNALS = p_SIGNALS; S_R10(&rc2453.f_NAME, p_NAME, 0); rc2453.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2453; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2452;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2454; memset(&l_BASE_2454, 0, sizeof l_BASE_2454);
S_R10(&l_BASE_2454, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2455; memset(&l_S_2455, 0, sizeof l_S_2455);
l_S_2455 = rt_str_new((l_BASE_2454).f_LEN);
rt_b_assign(&l_S_2455, r_STR(l_BASE_2454, (l_BASE_2454).f_LEN));
R21 * l_N_2456; memset(&l_N_2456, 0, sizeof l_N_2456);
l_N_2456 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2458_lo = ((rt_int)0LL), it2458_hi = rt_sub((l_BASE_2454).f_LEN, ((rt_int)1LL));
for (rt_int it2458 = it2458_lo; it2458 <= it2458_hi; it2458++) {
{
if (rt_b_eq(rt_b_slice(l_S_2455, it2458, it2458), rt_str("$", 1)))
{
S_R10(&l_BASE_2454, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_2455, ((rt_int)0LL), rt_sub(it2458, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2455, rt_add(it2458, ((rt_int)1LL)), rt_sub((l_BASE_2454).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2458 == it2458_hi) break;
} } L_end2457: ;
for (;;) {
if ((l_N_2456 == NULL)) goto L_end2459;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2456))).f_NAME, l_BASE_2454))
{
{ R10 rv2460 = r_FMT2(rt_str("@_@", 3), l_BASE_2454, r_NEW_NAME(rt_str("", 0)));
return rv2460; }
}
l_N_2456 = ((*(R21 *)rt_nil_check(l_N_2456))).f_NEXT;
}
RT_B_TICK();
} L_end2459: ;
l_N_2456 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2456))).f_NAME, l_BASE_2454, 0);
((*(R21 *)rt_nil_check(l_N_2456))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2456;
{ R10 rv2461 = l_BASE_2454;
return rv2461; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2462 = 0;
return rv2462; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2463 = 1;
return rv2463; }
}
{ rt_int rv2464 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2464; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2465; memset(&l_S_2465, 0, sizeof l_S_2465);
l_S_2465 = p_S0;
for (;;) {
if ((l_S_2465 == NULL)) goto L_end2466;
{
if (((((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_PAR)))
{
{ rt_int rv2467 = 1;
return rv2467; }
}
if (((((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2465))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2465))).f_B)))
{
{ rt_int rv2468 = 1;
return rv2468; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2465))).f_A))).f_B))
{
{ rt_int rv2469 = 1;
return rv2469; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2465))).f_B))).f_B))
{
{ rt_int rv2470 = 1;
return rv2470; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2471; memset(&l_A_2471, 0, sizeof l_A_2471);
l_A_2471 = ((*(R21 *)rt_nil_check(l_S_2465))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2465))).f_KIND == g_N_CASE))
{
l_A_2471 = ((*(R21 *)rt_nil_check(l_S_2465))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2465))).f_D == NULL)))
{
{ rt_int rv2472 = 1;
return rv2472; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2465))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2465))).f_C))).f_B))
{
{ rt_int rv2473 = 1;
return rv2473; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2465))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2465))).f_B))).f_B))
{
{ rt_int rv2474 = 1;
return rv2474; }
}
}
for (;;) {
if ((l_A_2471 == NULL)) goto L_end2475;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2471))).f_C == NULL)))
{
{ rt_int rv2476 = 1;
return rv2476; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2471))).f_B))).f_B))
{
{ rt_int rv2477 = 1;
return rv2477; }
}
l_A_2471 = ((*(R21 *)rt_nil_check(l_A_2471))).f_NEXT;
}
RT_B_TICK();
} L_end2475: ;
}
}
l_S_2465 = ((*(R21 *)rt_nil_check(l_S_2465))).f_NEXT;
}
RT_B_TICK();
} L_end2466: ;
{ rt_int rv2478 = 0;
return rv2478; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2479; memset(&l_Y_2479, 0, sizeof l_Y_2479);
l_Y_2479 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2480; memset(&l_S_2480, 0, sizeof l_S_2480);
l_S_2480 = rt_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2480, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2479))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2479))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2479))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2479))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2479, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2482_lo = ((rt_int)1LL), it2482_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2482 = it2482_lo; it2482 <= it2482_hi; it2482++) {
{
if (rt_b_eq(rt_b_slice(l_S_2480, it2482, it2482), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2479))).f_PREFIX, r_MKN(rt_b_slice(l_S_2480, ((rt_int)0LL), rt_sub(it2482, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2483; memset(&l_SHORT_2483, 0, sizeof l_SHORT_2483);
l_SHORT_2483 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2480, rt_add(it2482, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2483))).f_ORIG = l_Y_2479;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2483))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2479))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2483))).f_DECL = p_R;
r_DEFINE(l_SHORT_2483, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2481;
}
}
RT_B_TICK();
if (it2482 == it2482_hi) break;
} } L_end2481: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2484; memset(&l_R_2484, 0, sizeof l_R_2484);
l_R_2484 = p_RS;
for (;;) {
if ((l_R_2484 == NULL)) goto L_end2485;
{
if ((((*(R21 *)rt_nil_check(l_R_2484))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2484);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2484);
}
l_R_2484 = ((*(R21 *)rt_nil_check(l_R_2484))).f_NEXT;
}
RT_B_TICK();
} L_end2485: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2486; memset(&l_R_2486, 0, sizeof l_R_2486);
l_R_2486 = p_RS;
for (;;) {
if ((l_R_2486 == NULL)) goto L_end2487;
{
if ((((*(R21 *)rt_nil_check(l_R_2486))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2488; memset(&l_M_2488, 0, sizeof l_M_2488);
l_M_2488 = r_FIND_DECL(l_R_2486);
r_ENTER_MODULE(l_M_2488);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2486))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2488);
}
}
else
{
{
R12 * l_Y_2489; memset(&l_Y_2489, 0, sizeof l_Y_2489);
l_Y_2489 = r_FIND_DECL(l_R_2486);
r_ROUTINE_HEADER(l_Y_2489);
}
}
l_R_2486 = ((*(R21 *)rt_nil_check(l_R_2486))).f_NEXT;
}
RT_B_TICK();
} L_end2487: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2490; memset(&l_Y_2490, 0, sizeof l_Y_2490);
l_Y_2490 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2490 == NULL)) goto L_end2491;
{
if (((((*(R12 *)rt_nil_check(l_Y_2490))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2490))).f_ORIG == NULL)))
{
{ R12 * rv2492 = l_Y_2490;
return rv2492; }
}
l_Y_2490 = r_LOOKUP_NEXT(l_Y_2490);
}
RT_B_TICK();
} L_end2491: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2493; memset(&l_D_2493, 0, sizeof l_D_2493);
l_D_2493 = p_DECLS;
for (;;) {
if ((l_D_2493 == NULL)) goto L_end2494;
{
if (((((*(R21 *)rt_nil_check(l_D_2493))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2493))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2493))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2495; memset(&l_Y_2495, 0, sizeof l_Y_2495);
l_Y_2495 = r_FIND_DECL(l_D_2493);
R22 * l_T_2496; memset(&l_T_2496, 0, sizeof l_T_2496);
l_T_2496 = r_RESOLVE_USER(r_TYPE_REF(l_D_2493));
}
}
}
l_D_2493 = ((*(R21 *)rt_nil_check(l_D_2493))).f_NEXT;
}
RT_B_TICK();
} L_end2494: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2497; memset(&l_TS_2497, 0, sizeof l_TS_2497);
l_TS_2497 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2497))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2498 = l_TS_2497;
return rv2498; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2499; memset(&l_Y_2499, 0, sizeof l_Y_2499);
l_Y_2499 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2500; memset(&l_SAVED_2500, 0, sizeof l_SAVED_2500);
l_SAVED_2500 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2499))).f_DECL = p_M;
r_DEFINE(l_Y_2499, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2501; memset(&l_MARK_2501, 0, sizeof l_MARK_2501);
l_MARK_2501 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2499;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2499))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2501);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2500;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2499);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2502; memset(&l_Y_2502, 0, sizeof l_Y_2502);
l_Y_2502 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2502 == NULL)) goto L_end2503;
{
{
R12 * l_NEXT_2504; memset(&l_NEXT_2504, 0, sizeof l_NEXT_2504);
l_NEXT_2504 = ((*(R12 *)rt_nil_check(l_Y_2502))).f_SNEXT;
r_DEFINE(l_Y_2502, ((rt_int)0LL));
l_Y_2502 = l_NEXT_2504;
}
}
RT_B_TICK();
} L_end2503: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2505; memset(&l_MARK_2505, 0, sizeof l_MARK_2505);
l_MARK_2505 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2505 == NULL)) goto L_end2506;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2505))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2506;
}
l_MARK_2505 = ((*(R12 *)rt_nil_check(l_MARK_2505))).f_SNEXT;
}
RT_B_TICK();
} L_end2506: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2505);
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
{ rt_int rv2507 = 1;
return rv2507; }
}
}
{ rt_int rv2508 = 0;
return rv2508; }
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
R21 * l_D_2509; memset(&l_D_2509, 0, sizeof l_D_2509);
l_D_2509 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2510; memset(&l_Y_2510, 0, sizeof l_Y_2510);
l_Y_2510 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2510 == NULL)) goto L_end2511;
{
if (r_EXPORTED_BY(l_D_2509, l_Y_2510))
{
((*(R12 *)rt_nil_check(l_Y_2510))).f_EXPORTED = 1;
{
R12 * l_A_2512; memset(&l_A_2512, 0, sizeof l_A_2512);
l_A_2512 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2510))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2510))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2512)), (*(R12 *)rt_nil_check(l_Y_2510)), 0);
((*(R12 *)rt_nil_check(l_A_2512))).f_ORIG = r_ORIGINAL(l_Y_2510);
((*(R12 *)rt_nil_check(l_A_2512))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2512, ((*(R21 *)rt_nil_check(l_D_2509))).f_LINE);
}
}
l_Y_2510 = ((*(R12 *)rt_nil_check(l_Y_2510))).f_SNEXT;
}
RT_B_TICK();
} L_end2511: ;
{
R21 * l_X_2513; memset(&l_X_2513, 0, sizeof l_X_2513);
l_X_2513 = ((*(R21 *)rt_nil_check(l_D_2509))).f_B;
for (;;) {
if ((l_X_2513 == NULL)) goto L_end2514;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2513))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2513))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2513))).f_NAME);
}
l_X_2513 = ((*(R21 *)rt_nil_check(l_X_2513))).f_NEXT;
}
RT_B_TICK();
} L_end2514: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2515; memset(&l_Y_2515, 0, sizeof l_Y_2515);
l_Y_2515 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2515 == NULL)) goto L_end2516;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2515))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2515))).f_PREFIX, p_NAME)))
{
{ rt_int rv2517 = 1;
return rv2517; }
}
l_Y_2515 = ((*(R12 *)rt_nil_check(l_Y_2515))).f_SNEXT;
}
RT_B_TICK();
} L_end2516: ;
{ rt_int rv2518 = 0;
return rv2518; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2519; memset(&l_X_2519, 0, sizeof l_X_2519);
l_X_2519 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2520 = 0;
return rv2520; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2521 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2521; }
}
for (;;) {
if ((l_X_2519 == NULL)) goto L_end2522;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2519))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2523 = 1;
return rv2523; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2519))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2519))).f_A == NULL))
{
{ rt_int rv2524 = 1;
return rv2524; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2519))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2525 = 1;
return rv2525; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2526; memset(&l_T_2526, 0, sizeof l_T_2526);
l_T_2526 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2519))).f_NAME, p_Y);
if ((!(l_T_2526 == NULL)))
{
{ rt_int rv2527 = 1;
return rv2527; }
}
}
}
l_X_2519 = ((*(R21 *)rt_nil_check(l_X_2519))).f_NEXT;
}
RT_B_TICK();
} L_end2522: ;
{ rt_int rv2528 = 0;
return rv2528; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2529; memset(&l_M_2529, 0, sizeof l_M_2529);
l_M_2529 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2530; memset(&l_Z_2530, 0, sizeof l_Z_2530);
if ((l_M_2529 == NULL))
{
{ R12 * rv2531 = NULL;
return rv2531; }
}
l_Z_2530 = ((*(R12 *)rt_nil_check(l_M_2529))).f_MEMBERS;
for (;;) {
if ((l_Z_2530 == NULL)) goto L_end2532;
{
if (((((*(R12 *)rt_nil_check(l_Z_2530))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2530))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2530))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2530))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2530))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2533 = l_Z_2530;
return rv2533; }
}
}
}
}
l_Z_2530 = ((*(R12 *)rt_nil_check(l_Z_2530))).f_SNEXT;
}
RT_B_TICK();
} L_end2532: ;
{ R12 * rv2534 = NULL;
return rv2534; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2535; memset(&l_R_2535, 0, sizeof l_R_2535);
l_R_2535 = p_RS;
for (;;) {
if ((l_R_2535 == NULL)) goto L_end2536;
{
if ((((*(R21 *)rt_nil_check(l_R_2535))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2537; memset(&l_M_2537, 0, sizeof l_M_2537);
l_M_2537 = r_FIND_DECL(l_R_2535);
R21 * l_D_2538; memset(&l_D_2538, 0, sizeof l_D_2538);
l_D_2538 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2535))).f_C))).f_A;
r_ENTER_MODULE(l_M_2537);
for (;;) {
if ((l_D_2538 == NULL)) goto L_end2539;
{
if (((((*(R21 *)rt_nil_check(l_D_2538))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2538))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2538);
}
l_D_2538 = ((*(R21 *)rt_nil_check(l_D_2538))).f_NEXT;
}
RT_B_TICK();
} L_end2539: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2535))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2535))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2537);
}
}
l_R_2535 = ((*(R21 *)rt_nil_check(l_R_2535))).f_NEXT;
}
RT_B_TICK();
} L_end2536: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2540; memset(&l_R_2540, 0, sizeof l_R_2540);
l_R_2540 = p_RS;
for (;;) {
if ((l_R_2540 == NULL)) goto L_end2541;
{
if ((((*(R21 *)rt_nil_check(l_R_2540))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2542; memset(&l_M_2542, 0, sizeof l_M_2542);
l_M_2542 = r_FIND_DECL(l_R_2540);
r_ENTER_MODULE(l_M_2542);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2540))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2542);
}
}
else
{
{
R12 * l_Y_2543; memset(&l_Y_2543, 0, sizeof l_Y_2543);
l_Y_2543 = r_FIND_DECL(l_R_2540);
if ((!((*(R12 *)rt_nil_check(l_Y_2543))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2543);
}
}
}
l_R_2540 = ((*(R21 *)rt_nil_check(l_R_2540))).f_NEXT;
}
RT_B_TICK();
} L_end2541: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2544; memset(&l_LEVEL_2544, 0, sizeof l_LEVEL_2544);
l_LEVEL_2544 = r_CUR_LEVEL();
rt_int l_MORE_2545; memset(&l_MORE_2545, 0, sizeof l_MORE_2545);
l_MORE_2545 = 1;
for (;;) {
if ((!l_MORE_2545)) goto L_end2546;
{
l_MORE_2545 = 0;
{
R12 * l_P_2547; memset(&l_P_2547, 0, sizeof l_P_2547);
l_P_2547 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2548; memset(&l_PREV_2548, 0, sizeof l_PREV_2548);
l_PREV_2548 = NULL;
for (;;) {
if ((l_P_2547 == NULL)) goto L_end2549;
{
if ((((*(R12 *)rt_nil_check(l_P_2547))).f_LEVEL == l_LEVEL_2544))
{
if ((l_PREV_2548 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2547))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2548))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2547))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2547);
r_ROUTINE_BODY(l_P_2547);
r_LEAVE_MODULE_OF(l_P_2547);
l_MORE_2545 = 1;
goto L_end2549;
}
l_PREV_2548 = l_P_2547;
l_P_2547 = ((*(R12 *)rt_nil_check(l_P_2547))).f_MEMBERS;
}
RT_B_TICK();
} L_end2549: ;
}
}
RT_B_TICK();
} L_end2546: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2550; memset(&l_D_2550, 0, sizeof l_D_2550);
l_D_2550 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2551; memset(&l_S_2551, 0, sizeof l_S_2551);
l_S_2551 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2550 == NULL)) goto L_end2552;
{
if (((((*(R21 *)rt_nil_check(l_D_2550))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2550))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2550);
}
l_D_2550 = ((*(R21 *)rt_nil_check(l_D_2550))).f_NEXT;
}
RT_B_TICK();
} L_end2552: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2551 == NULL)) goto L_end2553;
{
r_STMT(l_S_2551);
l_S_2551 = ((*(R21 *)rt_nil_check(l_S_2551))).f_NEXT;
}
RT_B_TICK();
} L_end2553: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2554; memset(&l_R_2554, 0, sizeof l_R_2554);
l_R_2554 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2555; memset(&l_SAVED_CODE_2555, 0, sizeof l_SAVED_CODE_2555);
S_R14(&l_SAVED_CODE_2555, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2556; memset(&l_SAVED_CTXS_2556, 0, sizeof l_SAVED_CTXS_2556);
l_SAVED_CTXS_2556 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2557; memset(&l_SAVED_BINDS_2557, 0, sizeof l_SAVED_BINDS_2557);
l_SAVED_BINDS_2557 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2558; memset(&l_OUTER_2558, 0, sizeof l_OUTER_2558);
l_OUTER_2558 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2559; memset(&l_CS_2559, 0, sizeof l_CS_2559);
l_CS_2559 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2560; memset(&l_PROLOGUE_2560, 0, sizeof l_PROLOGUE_2560);
S_R10(&l_PROLOGUE_2560, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2559)), ({ R18 rc2561; memset(&rc2561, 0, sizeof rc2561);  rc2561.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2561.f_R = p_Y; rc2561.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2561.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2561.f_FIELDS, ({ R14 rc2562; memset(&rc2562, 0, sizeof rc2562);  rc2562.f_HEAD = NULL; rc2562.f_TAIL = NULL; rc2562; }), 0); rc2561.f_UP = l_OUTER_2558; rc2561.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2554))).f_E; rc2561.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2554))).f_D))).f_A; rc2561.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2561.f_IS_PATH = 0; S_R10(&rc2561.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2561; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2559))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2559))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2559))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2559))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2560, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2559))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2559))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2560, r_CATS(l_PROLOGUE_2560, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2559;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2563; memset(&rc2563, 0, sizeof rc2563);  rc2563.f_HEAD = NULL; rc2563.f_TAIL = NULL; rc2563; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2554))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2554))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2554))).f_LINE);
{
R28 * l_P_2564; memset(&l_P_2564, 0, sizeof l_P_2564);
l_P_2564 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2564 == NULL)) goto L_end2565;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2564))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2564))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2566; memset(&l_V_2566, 0, sizeof l_V_2566);
l_V_2566 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2564))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2566))).f_T = ((*(R28 *)rt_nil_check(l_P_2564))).f_T;
((*(R12 *)rt_nil_check(l_V_2566))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2564))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2566))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2564))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2566))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2566))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2564))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2559))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2564))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2559))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2560, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2560, r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2566))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2564))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2567; memset(&l_ARGA_2567, 0, sizeof l_ARGA_2567);
S_R10(&l_ARGA_2567, ((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2564))).f_T, l_ARGA_2567, ((*(R21 *)rt_nil_check(l_R_2554))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2566))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2564))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2559))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2560, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2560, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2564))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2564))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2560, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2560, ((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, l_ARGA_2567), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2564))).f_T))
{
S_R10(&l_PROLOGUE_2560, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2560, ((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2564))).f_T, l_ARGA_2567)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2559))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2559))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2564))).f_T, l_ARGA_2567, ((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS)), 0);
r_DEFINE(l_V_2566, ((*(R21 *)rt_nil_check(l_R_2554))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2566, ((*(R21 *)rt_nil_check(l_R_2554))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2564))).f_T, ((*(R12 *)rt_nil_check(l_V_2566))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2554))).f_LINE, 1);
}
}
}
}
l_P_2564 = ((*(R28 *)rt_nil_check(l_P_2564))).f_NEXT;
}
RT_B_TICK();
} L_end2565: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2554))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2554))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2554))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2559))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2559))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2560));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2559))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2559))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2558;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2555, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2556;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2557;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2568; memset(&l_B_2568, 0, sizeof l_B_2568);
l_B_2568 = p_BS;
for (;;) {
if ((l_B_2568 == NULL)) goto L_end2569;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2568))).f_T == NULL)))
{
{
R12 * l_Y_2570; memset(&l_Y_2570, 0, sizeof l_Y_2570);
l_Y_2570 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2568))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2570))).f_T = ((*(R20 *)rt_nil_check(l_B_2568))).f_T;
r_DEFINE(l_Y_2570, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2568))).f_HASMV)
{
{
R12 * l_Y_2571; memset(&l_Y_2571, 0, sizeof l_Y_2571);
l_Y_2571 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2568))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2571))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2571))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2571))).f_MV = ((*(R20 *)rt_nil_check(l_B_2568))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2571))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2568))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2571))).f_INPUT = 1;
r_DEFINE(l_Y_2571, p_LINE);
}
}
l_B_2568 = ((*(R20 *)rt_nil_check(l_B_2568))).f_NEXT;
}
RT_B_TICK();
} L_end2569: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2572; memset(&l_C_2572, 0, sizeof l_C_2572);
l_C_2572 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2572 == NULL)) goto L_end2573;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2572))).f_T), &(*p_DST));
l_C_2572 = ((*(R15 *)rt_nil_check(l_C_2572))).f_NEXT;
}
RT_B_TICK();
} L_end2573: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2574; memset(&l_U_2574, 0, sizeof l_U_2574);
l_U_2574 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2574 == NULL)) goto L_end2575;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2574))).f_NAME, p_NAME))
{
{ rt_int rv2576 = 1;
return rv2576; }
}
l_U_2574 = ((*(R21 *)rt_nil_check(l_U_2574))).f_NEXT;
}
RT_B_TICK();
} L_end2575: ;
{ rt_int rv2577 = 0;
return rv2577; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2578; memset(&l_U_2578, 0, sizeof l_U_2578);
l_U_2578 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2578 == NULL)) goto L_end2579;
{
{
R21 * l_T_2580; memset(&l_T_2580, 0, sizeof l_T_2580);
l_T_2580 = p_SEGS;
for (;;) {
if ((l_T_2580 == NULL)) goto L_end2581;
{
if ((((!(l_T_2580 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2580))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2580))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2578))).f_NAME)))
{
{ rt_int rv2582 = 0;
return rv2582; }
}
l_T_2580 = ((*(R21 *)rt_nil_check(l_T_2580))).f_NEXT;
}
RT_B_TICK();
} L_end2581: ;
}
l_U_2578 = ((*(R21 *)rt_nil_check(l_U_2578))).f_NEXT;
}
RT_B_TICK();
} L_end2579: ;
{ rt_int rv2583 = 1;
return rv2583; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2584; memset(&l_S_2584, 0, sizeof l_S_2584);
l_S_2584 = p_SEGS;
rt_int l_MAINS_2585; memset(&l_MAINS_2585, 0, sizeof l_MAINS_2585);
l_MAINS_2585 = ((rt_int)0LL);
R18 * l_ROOT_2586; memset(&l_ROOT_2586, 0, sizeof l_ROOT_2586);
l_ROOT_2586 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2586)), ({ R18 rc2587; memset(&rc2587, 0, sizeof rc2587);  rc2587.f_LEVEL = ((rt_int)0LL); rc2587.f_R = NULL; rc2587.f_FRAMED = 0; S_R10(&rc2587.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2587.f_FIELDS, ({ R14 rc2588; memset(&rc2588, 0, sizeof rc2588);  rc2588.f_HEAD = NULL; rc2588.f_TAIL = NULL; rc2588; }), 0); rc2587.f_UP = NULL; rc2587.f_IMPORTS = NULL; rc2587.f_SIGNALS = NULL; rc2587.f_RESULT = NULL; rc2587.f_IS_PATH = 0; S_R10(&rc2587.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2587; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2586;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2589; memset(&rc2589, 0, sizeof rc2589);  rc2589.f_HEAD = NULL; rc2589.f_TAIL = NULL; rc2589; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2584 = p_SEGS;
for (;;) {
if ((l_S_2584 == NULL)) goto L_end2591;
{
if ((((*(R21 *)rt_nil_check(l_S_2584))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2584, p_SEGS))
{
goto L_end2591;
}
}
l_S_2584 = ((*(R21 *)rt_nil_check(l_S_2584))).f_NEXT;
}
RT_B_TICK();
} L_end2591: ;
if ((l_S_2584 == NULL))
{
goto L_end2590;
}
((*(R21 *)rt_nil_check(l_S_2584))).f_D = l_S_2584;
l_MAINS_2585 = rt_add(l_MAINS_2585, ((*(R21 *)rt_nil_check(l_S_2584))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2584))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2584))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2584))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2584, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2584))).f_B);
r_SEGMENT_EXPORTS(l_S_2584);
}
RT_B_TICK();
} L_end2590: ;
l_S_2584 = p_SEGS;
for (;;) {
if ((l_S_2584 == NULL)) goto L_end2592;
{
if ((((*(R21 *)rt_nil_check(l_S_2584))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2584))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2584))).f_NAME);
}
l_S_2584 = ((*(R21 *)rt_nil_check(l_S_2584))).f_NEXT;
}
RT_B_TICK();
} L_end2592: ;
if ((!(l_MAINS_2585 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2593; memset(&l_X_2593, 0, sizeof l_X_2593);
l_X_2593 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2593 == NULL)) goto L_end2594;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2593))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2593))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2593))).f_NAME)));
l_X_2593 = ((*(R21 *)rt_nil_check(l_X_2593))).f_NEXT;
}
RT_B_TICK();
} L_end2594: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2595; memset(&l_M_2595, 0, sizeof l_M_2595);
l_M_2595 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2596 = 0;
return rv2596; }
}
for (;;) {
if ((l_M_2595 == NULL)) goto L_end2597;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2595))).f_NAME))
{
{ rt_int rv2598 = 1;
return rv2598; }
}
l_M_2595 = ((*(R12 *)rt_nil_check(l_M_2595))).f_MODL;
}
RT_B_TICK();
} L_end2597: ;
{ rt_int rv2599 = 0;
return rv2599; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2600; memset(&l_MARK_2600, 0, sizeof l_MARK_2600);
l_MARK_2600 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2601; memset(&l_TAKEN_2601, 0, sizeof l_TAKEN_2601);
for (;;) {
if ((l_MARK_2600 == NULL)) goto L_end2602;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2600))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2602;
}
l_MARK_2600 = ((*(R12 *)rt_nil_check(l_MARK_2600))).f_SNEXT;
}
RT_B_TICK();
} L_end2602: ;
l_TAKEN_2601 = r_TAKE_SCOPE(l_MARK_2600);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2601 == NULL)) goto L_end2603;
{
{
R12 * l_NEXT_2604; memset(&l_NEXT_2604, 0, sizeof l_NEXT_2604);
l_NEXT_2604 = ((*(R12 *)rt_nil_check(l_TAKEN_2601))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2601))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2601))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2601))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2601)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2601))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2601))))))
{
r_DEFINE(l_TAKEN_2601, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2601 = l_NEXT_2604;
}
}
RT_B_TICK();
} L_end2603: ;
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
