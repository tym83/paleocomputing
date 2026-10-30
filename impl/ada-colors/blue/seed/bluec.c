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
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R10 f_NAME; R22 * f_T; R10 f_ACCESS; R10 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R21 * f_TS; rt_int f_BUSY; R10 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R21 * f_DECL; R10 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R21 * f_USES; R12 * f_INSTANCES; R20 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R18 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R10 f_FTYPE; R14 f_FIELDS; R18 * f_UP; R21 * f_IMPORTS; R21 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R10 f_COPYOUT; };
struct R19 { int dummy_; rt_int f_ID; R21 * f_IMPORTS; R21 * f_SIGNALS; R10 f_NAME; R19 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R10 f_LO_C; R10 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R10 f_LEN_C; R23 f_MLEN; R10 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R21 * f_TARGET_TS; R24 * f_FIELDS; R21 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R10 f_NAME; R10 f_CNAME; R12 * f_MODL; R21 * f_REPS; R12 * f_DECL; };
struct R20 { int dummy_; R10 f_NAME; R22 * f_T; R10 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R20 * f_NEXT; };
struct R25 { int dummy_; R10 f_LO; R10 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R10 f_NAME; R10 f_CNAME; R22 * f_T; rt_int f_KIND; R10 f_TAGF; R21 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1160; };
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
r_SKIP_PARENS();
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
static R10 r_NO_TEXT(void) { RT_B_TICK(); 
{ R10 rv499 = ({ R10 rc500; memset(&rc500, 0, sizeof rc500);  rc500.f_AT = ((rt_int)0LL); rc500.f_LEN = ((rt_int)0LL); rc500.f_H = ((rt_int)0LL); rc500; });
return rv499; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv501 = ({ R23 rc502; memset(&rc502, 0, sizeof rc502);  rc502.f_OK = 0; rc502.f_V = ((rt_int)0LL); rc502; });
return rv501; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv503 = ({ R23 rc504; memset(&rc504, 0, sizeof rc504);  rc504.f_OK = 1; rc504.f_V = p_V; rc504; });
return rv503; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_505; memset(&l_Y_505, 0, sizeof l_Y_505);
l_Y_505 = ((R12 *)rt_b_new(sizeof (R12)));
rt_int l_LEVEL_506; memset(&l_LEVEL_506, 0, sizeof l_LEVEL_506);
l_LEVEL_506 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_506 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_505)), ({ R12 rc507; memset(&rc507, 0, sizeof rc507);  rc507.f_KIND = p_KIND; rc507.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc507.f_LEVEL = l_LEVEL_506; S_R10(&rc507.f_NAME, p_NAME, 0); rc507.f_T = NULL; S_R10(&rc507.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc507.f_FIELD, r_NO_TEXT(), 0); rc507.f_INPUT = 0; rc507.f_BYREF = 0; rc507.f_HASMV = 0; rc507.f_MV = ((rt_int)0LL); rc507.f_TS = NULL; rc507.f_BUSY = 0; S_R10(&rc507.f_FWD, r_NO_TEXT(), 0); rc507.f_PARAMS = NULL; rc507.f_RESULT = NULL; rc507.f_DECL = NULL; S_R10(&rc507.f_PREFIX, r_NO_TEXT(), 0); rc507.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc507.f_EXPORTED = 0; rc507.f_GENERIC = 0; rc507.f_FRAMED = 0; rc507.f_USES = NULL; rc507.f_INSTANCES = NULL; rc507.f_BINDINGS = NULL; rc507.f_ORIG = NULL; rc507.f_MEMBERS = NULL; rc507.f_SAVED = NULL; rc507.f_OWNER = r_CUR_OWNER(); rc507.f_CHAIN = NULL; rc507.f_SNEXT = NULL; rc507; }), 0);
{ R12 * rv508 = l_Y_505;
return rv508; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv509 = ((rt_int)0LL);
return rv509; }
}
{ rt_int rv510 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv510; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv511 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv511; }
}
{ R12 * rv512 = p_Y;
return rv512; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv513 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv513; }
}
{ rt_int rv514 = (p_NAME).f_H;
return rv514; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_515; memset(&l_Y_515, 0, sizeof l_Y_515);
l_Y_515 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_515 == NULL)) goto L_end516;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_515))).f_NAME, p_NAME))
{
{ R12 * rv517 = l_Y_515;
return rv517; }
}
l_Y_515 = ((*(R12 *)rt_nil_check(l_Y_515))).f_CHAIN;
}
RT_B_TICK();
} L_end516: ;
{ R12 * rv518 = NULL;
return rv518; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_519; memset(&l_Y_519, 0, sizeof l_Y_519);
l_Y_519 = r_LOOKUP(p_NAME);
if ((l_Y_519 == NULL))
{
{ R12 * rv520 = NULL;
return rv520; }
}
{ R12 * rv521 = r_ORIGINAL(l_Y_519);
return rv521; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv522 = r_LOOKUP(r_MKN(p_NAME));
return rv522; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_523; memset(&l_Z_523, 0, sizeof l_Z_523);
l_Z_523 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_523 == NULL)) goto L_end524;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_523))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv525 = l_Z_523;
return rv525; }
}
l_Z_523 = ((*(R12 *)rt_nil_check(l_Z_523))).f_CHAIN;
}
RT_B_TICK();
} L_end524: ;
{ R12 * rv526 = NULL;
return rv526; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv527 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv527; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_528; memset(&l_B_528, 0, sizeof l_B_528);
l_B_528 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_529; memset(&l_OLD_529, 0, sizeof l_OLD_529);
l_OLD_529 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_529 == NULL)) goto L_end530;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_529))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end530;
}
if ((!((((r_IS_ROUTINE(l_OLD_529) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_529))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_529 = r_LOOKUP_NEXT(l_OLD_529);
}
RT_B_TICK();
} L_end530: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_528, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_528, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end531;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end531;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end531: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_532; memset(&l_B_532, 0, sizeof l_B_532);
l_B_532 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_533; memset(&l_P_533, 0, sizeof l_P_533);
l_P_533 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_532, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_533 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_532, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_533 == NULL)) goto L_end534;
{
if ((((*(R12 *)rt_nil_check(l_P_533))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_533))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_533 = ((*(R12 *)rt_nil_check(l_P_533))).f_CHAIN;
}
RT_B_TICK();
} L_end534: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_535; memset(&l_HEAD_535, 0, sizeof l_HEAD_535);
l_HEAD_535 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end536;
{
{
R12 * l_Y_537; memset(&l_Y_537, 0, sizeof l_Y_537);
l_Y_537 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_537);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_537))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_537))).f_SNEXT = l_HEAD_535;
l_HEAD_535 = l_Y_537;
}
}
RT_B_TICK();
} L_end536: ;
{ R12 * rv538 = l_HEAD_535;
return rv538; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_539; memset(&l_T_539, 0, sizeof l_T_539);
l_T_539 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_539)), ({ R22 rc540; memset(&rc540, 0, sizeof rc540);  rc540.f_KIND = p_KIND; rc540.f_SCALE = ((rt_int)0LL); S_R10(&rc540.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc540.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc540.f_MLO, r_NO_MVAL(), 0); S_R23(&rc540.f_MHI, r_NO_MVAL(), 0); rc540.f_RLEVEL = ((rt_int)0LL); S_R10(&rc540.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc540.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc540.f_GEN, r_NO_TEXT(), 0); rc540.f_BASE = NULL; rc540.f_ELEM = NULL; rc540.f_TARGET = NULL; rc540.f_TARGET_TS = NULL; rc540.f_FIELDS = NULL; rc540.f_LITS = NULL; rc540.f_NLITS = ((rt_int)0LL); rc540.f_UNORDERED = 0; rc540.f_BOUNDS = NULL; rc540.f_DIMS = ((rt_int)0LL); rc540.f_ARGS = NULL; S_R10(&rc540.f_NAME, r_NO_TEXT(), 0); S_R10(&rc540.f_CNAME, r_NO_TEXT(), 0); rc540.f_MODL = NULL; rc540.f_REPS = NULL; rc540.f_DECL = NULL; rc540; }), 0);
{ R22 * rv541 = l_T_539;
return rv541; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_542; memset(&l_C_542, 0, sizeof l_C_542);
l_C_542 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_542)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv543 = l_C_542;
return rv543; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_544; memset(&l_Y_544, 0, sizeof l_Y_544);
l_Y_544 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_544))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_544))).f_NAME, 0);
}
r_DEFINE(l_Y_544, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_545; memset(&l_Y_545, 0, sizeof l_Y_545);
l_Y_545 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_545))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_545))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_545))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_545))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_545))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_545, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_546; memset(&l_HEAD_546, 0, sizeof l_HEAD_546);
l_HEAD_546 = NULL;
R21 * l_TAIL_547; memset(&l_TAIL_547, 0, sizeof l_TAIL_547);
l_TAIL_547 = NULL;
rt_int l_START_548; memset(&l_START_548, 0, sizeof l_START_548);
l_START_548 = ((rt_int)0LL);
{ rt_int it550_lo = ((rt_int)0LL), it550_hi = (rt_int)(p_NAMES).len;
for (rt_int it550 = it550_lo; it550 <= it550_hi; it550++) {
{
if (((it550 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it550, it550), rt_str(" ", 1))))
{
if ((it550 > l_START_548))
{
{
R21 * l_N_551; memset(&l_N_551, 0, sizeof l_N_551);
l_N_551 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_551))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_548, rt_sub(it550, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_551, &l_HEAD_546, &l_TAIL_547);
}
}
l_START_548 = rt_add(it550, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it550 == it550_hi) break;
} } L_end549: ;
{
R22 * l_T_552; memset(&l_T_552, 0, sizeof l_T_552);
l_T_552 = r_ENUM_CLASS(l_HEAD_546, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_552);
{ R22 * rv553 = l_T_552;
return rv553; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_554; memset(&l_T_554, 0, sizeof l_T_554);
R21 * l_ASCII_LITS_555; memset(&l_ASCII_LITS_555, 0, sizeof l_ASCII_LITS_555);
l_ASCII_LITS_555 = NULL;
R21 * l_TAIL_556; memset(&l_TAIL_556, 0, sizeof l_TAIL_556);
l_TAIL_556 = NULL;
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
{ rt_int it558_lo = ((rt_int)0LL), it558_hi = ((rt_int)127LL);
for (rt_int it558 = it558_lo; it558 <= it558_hi; it558++) {
{
{
R21 * l_N_559; memset(&l_N_559, 0, sizeof l_N_559);
l_N_559 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_559))).f_NAME, r_ASCII_NAME(it558), 0);
r_ADD_LIST(l_N_559, &l_ASCII_LITS_555, &l_TAIL_556);
}
}
RT_B_TICK();
if (it558 == it558_hi) break;
} } L_end557: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_555, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_554 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_554 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_554 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_554 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_560; memset(&l_OPS_560, 0, sizeof l_OPS_560);
l_OPS_560 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_560, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_561; memset(&l_START_561, 0, sizeof l_START_561);
l_START_561 = ((rt_int)1LL);
{ rt_int it563_lo = ((rt_int)1LL), it563_hi = ((rt_int)270LL);
for (rt_int it563 = it563_lo; it563 <= it563_hi; it563++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_560, it563, it563), rt_str(" ", 1)))
{
if ((it563 > l_START_561))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_560, l_START_561, rt_sub(it563, ((rt_int)1LL))));
}
l_START_561 = rt_add(it563, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it563 == it563_hi) break;
} } L_end562: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R21 * l_F_564; memset(&l_F_564, 0, sizeof l_F_564);
l_F_564 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R21 * l_V_565; memset(&l_V_565, 0, sizeof l_V_565);
l_V_565 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R21 * l_R_566; memset(&l_R_566, 0, sizeof l_R_566);
l_R_566 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R21 * l_D_567; memset(&l_D_567, 0, sizeof l_D_567);
l_D_567 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R21 * l_FX_568; memset(&l_FX_568, 0, sizeof l_FX_568);
l_FX_568 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_569; memset(&l_Y_569, 0, sizeof l_Y_569);
l_Y_569 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R21 *)rt_nil_check(l_F_564))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_564))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_F_564))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_564))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R10(&((*(R21 *)rt_nil_check(l_FX_568))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R21 *)rt_nil_check(l_FX_568))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_568))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_568))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_568))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_568))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_V_565))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_565))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_565))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_565))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R21 *)rt_nil_check(l_V_565))).f_B = l_FX_568;
((*(R21 *)rt_nil_check(l_R_566))).f_A = l_V_565;
S_R10(&((*(R21 *)rt_nil_check(l_D_567))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_569))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_D_567))).f_A = l_F_564;
((*(R21 *)rt_nil_check(l_D_567))).f_B = l_R_566;
((*(R12 *)rt_nil_check(l_Y_569))).f_DECL = l_D_567;
r_DEFINE(l_Y_569, ((rt_int)0LL));
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
rstr l_CONTROLS_570; memset(&l_CONTROLS_570, 0, sizeof l_CONTROLS_570);
l_CONTROLS_570 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_570, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_570, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv571 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_570, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv571; }
}
{ R10 rv572 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_570, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv572; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv573 = r_MKN(rt_str("\\''''", 5));
return rv573; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv574 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv574; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv575 = r_MKN(rt_str("\\ACCENT", 7));
return rv575; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv576 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv576; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv577 = r_MKN(rt_str("\\[", 2));
return rv577; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv578 = r_MKN(rt_str("\\BAR", 4));
return rv578; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv579 = r_MKN(rt_str("\\]", 2));
return rv579; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv580 = r_MKN(rt_str("\\TILDE", 6));
return rv580; }
}
{ R10 rv581 = r_MKN(rt_str("\\DEL", 4));
return rv581; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv582 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv582; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv583 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv583; }
}
{ R22 * rv584 = p_T;
return rv584; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_585; memset(&l_K_585, 0, sizeof l_K_585);
l_K_585 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv586 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv586; }
}
else if ((l_K_585 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv587 = r_MK(rt_str("INTEGER", 7));
return rv587; }
}
{ R10 rv588 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv588; }
}
else if ((l_K_585 == g_T_BOOL))
{
{ R10 rv589 = r_MK(rt_str("BOOLEAN", 7));
return rv589; }
}
else if ((l_K_585 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv590 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv590; }
}
{ R10 rv591 = r_MK(rt_str("an enumerated type", 18));
return rv591; }
}
else if ((l_K_585 == g_T_STR))
{
{ R10 rv592 = r_MK(rt_str("CHAR_STR", 8));
return rv592; }
}
else if ((l_K_585 == g_T_BITS))
{
{ R10 rv593 = r_MK(rt_str("BIT", 3));
return rv593; }
}
else if ((l_K_585 == g_T_FLOAT))
{
{ R10 rv594 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv594; }
}
else if ((l_K_585 == g_T_ARR))
{
{ R10 rv595 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv595; }
}
else if ((l_K_585 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv596 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv596; }
}
{ R10 rv597 = r_MK(rt_str("RECORD", 6));
return rv597; }
}
else if ((l_K_585 == g_T_PTR))
{
{ R10 rv598 = r_MK(rt_str("PTR", 3));
return rv598; }
}
else if ((l_K_585 == g_T_SEM))
{
{ R10 rv599 = r_MK(rt_str("SEMAPHORE", 9));
return rv599; }
}
else if ((l_K_585 == g_T_NIL))
{
{ R10 rv600 = r_MK(rt_str("NIL", 3));
return rv600; }
}
else if ((l_K_585 == g_T_VOID))
{
{ R10 rv601 = r_MK(rt_str("no value", 8));
return rv601; }
}
{ R10 rv602 = r_MK(rt_str("a type", 6));
return rv602; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { RT_B_TICK(); 
rstr l_S_603; memset(&l_S_603, 0, sizeof l_S_603);
l_S_603 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_603, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_604; memset(&l_AT_604, 0, sizeof l_AT_604);
l_AT_604 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_605; memset(&l_START_605, 0, sizeof l_START_605);
l_START_605 = ((rt_int)0LL);
R10 l_R_606; memset(&l_R_606, 0, sizeof l_R_606);
rt_int l_I_607; memset(&l_I_607, 0, sizeof l_I_607);
l_I_607 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv608 = p_T;
return rv608; }
}
for (;;) {
if ((l_I_607 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end609;
{
if (rt_b_eq(rt_b_slice(l_S_603, l_I_607, rt_add(l_I_607, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_606, r_MK(rt_b_slice(l_S_603, l_START_605, rt_sub(l_I_607, ((rt_int)1LL)))), 0);
S_R10(&l_R_606, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_607 = rt_add(l_I_607, ((rt_int)2LL));
l_START_605 = l_I_607;
}
else
{
l_I_607 = rt_add(l_I_607, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end609: ;
if ((l_START_605 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_604;
{ R10 rv610 = p_T;
return rv610; }
}
S_R10(&l_R_606, r_MK(rt_b_slice(l_S_603, l_START_605, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv611 = ({ R10 rc612; memset(&rc612, 0, sizeof rc612);  rc612.f_AT = l_AT_604; rc612.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_604); rc612.f_H = rt_neg(((rt_int)1LL)); rc612; });
return rv611; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_613; memset(&l_P_613, 0, sizeof l_P_613);
l_P_613 = p_A;
R21 * l_Q_614; memset(&l_Q_614, 0, sizeof l_Q_614);
l_Q_614 = p_B;
for (;;) {
if (((l_P_613 == NULL) || (l_Q_614 == NULL))) goto L_end615;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_613))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_614))).f_NAME)))
{
{ rt_int rv616 = 0;
return rv616; }
}
l_P_613 = ((*(R21 *)rt_nil_check(l_P_613))).f_NEXT;
l_Q_614 = ((*(R21 *)rt_nil_check(l_Q_614))).f_NEXT;
}
RT_B_TICK();
} L_end615: ;
{ rt_int rv617 = ((l_P_613 == NULL) && (l_Q_614 == NULL));
return rv617; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_618; memset(&l_Y_618, 0, sizeof l_Y_618);
l_Y_618 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_619; memset(&l_T_619, 0, sizeof l_T_619);
{
R21 * l_P_620; memset(&l_P_620, 0, sizeof l_P_620);
l_P_620 = p_LITS;
for (;;) {
if ((l_P_620 == NULL)) goto L_end621;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_P_620))).f_NEXT, ((*(R21 *)rt_nil_check(l_P_620))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R21 *)rt_nil_check(l_P_620))).f_NAME);
}
l_P_620 = ((*(R21 *)rt_nil_check(l_P_620))).f_NEXT;
}
RT_B_TICK();
} L_end621: ;
}
for (;;) {
if ((l_Y_618 == NULL)) goto L_end622;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_618))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_618))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_618))).f_T, p_LINE);
{ R22 * rv623 = ((*(R12 *)rt_nil_check(l_Y_618))).f_T;
return rv623; }
}
l_Y_618 = ((*(R12 *)rt_nil_check(l_Y_618))).f_INSTANCES;
}
RT_B_TICK();
} L_end622: ;
l_T_619 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_619))).f_BASE = l_T_619;
((*(R22 *)rt_nil_check(l_T_619))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_619))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_619))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_619))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_618 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_618))).f_T = l_T_619;
((*(R12 *)rt_nil_check(l_Y_618))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_618;
{
R21 * l_P_624; memset(&l_P_624, 0, sizeof l_P_624);
l_P_624 = p_LITS;
R10 l_NAMES_625; memset(&l_NAMES_625, 0, sizeof l_NAMES_625);
S_R10(&l_NAMES_625, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_624 == NULL)) goto L_end626;
{
S_R10(&l_NAMES_625, r_FMT2(rt_str("@@, ", 4), l_NAMES_625, r_CSTRING(((*(R21 *)rt_nil_check(l_P_624))).f_NAME)), 0);
l_P_624 = ((*(R21 *)rt_nil_check(l_P_624))).f_NEXT;
}
RT_B_TICK();
} L_end626: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_619))).f_CNAME, l_NAMES_625));
}
r_DECLARE_LITERALS(l_T_619, p_LINE);
{ R22 * rv627 = l_T_619;
return rv627; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_628; memset(&l_P_628, 0, sizeof l_P_628);
l_P_628 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_629; memset(&l_I_629, 0, sizeof l_I_629);
l_I_629 = ((rt_int)0LL);
for (;;) {
if ((l_P_628 == NULL)) goto L_end630;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_628))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_631; memset(&l_Y_631, 0, sizeof l_Y_631);
l_Y_631 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_628))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_631))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_631))).f_MV = l_I_629;
((*(R12 *)rt_nil_check(l_Y_631))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_631))).f_INPUT = 1;
r_DEFINE(l_Y_631, p_LINE);
}
}
l_I_629 = rt_add(l_I_629, ((rt_int)1LL));
l_P_628 = ((*(R21 *)rt_nil_check(l_P_628))).f_NEXT;
}
RT_B_TICK();
} L_end630: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_632; memset(&l_V_632, 0, sizeof l_V_632);
l_V_632 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_632 == NULL)) || (p_T == NULL)))
{
{ R12 * rv633 = l_V_632;
return rv633; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv634 = NULL;
return rv634; }
}
{
R21 * l_P_635; memset(&l_P_635, 0, sizeof l_P_635);
l_P_635 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_636; memset(&l_I_636, 0, sizeof l_I_636);
l_I_636 = ((rt_int)0LL);
for (;;) {
if ((l_P_635 == NULL)) goto L_end637;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_635))).f_NAME, p_NAME))
{
{
R12 * l_Y_638; memset(&l_Y_638, 0, sizeof l_Y_638);
l_Y_638 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_638))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_638))).f_MV = l_I_636;
((*(R12 *)rt_nil_check(l_Y_638))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_638))).f_INPUT = 1;
{ R12 * rv639 = l_Y_638;
return rv639; }
}
}
l_I_636 = rt_add(l_I_636, ((rt_int)1LL));
l_P_635 = ((*(R21 *)rt_nil_check(l_P_635))).f_NEXT;
}
RT_B_TICK();
} L_end637: ;
}
{ R12 * rv640 = NULL;
return rv640; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_641; memset(&l_Y_641, 0, sizeof l_Y_641);
l_Y_641 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_641 == NULL)) goto L_end642;
{
if ((((*(R12 *)rt_nil_check(l_Y_641))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv643 = l_Y_641;
return rv643; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_641))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv644 = l_Y_641;
return rv644; }
}
}
l_Y_641 = r_LOOKUP_NEXT(l_Y_641);
}
RT_B_TICK();
} L_end642: ;
{ R12 * rv645 = NULL;
return rv645; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_646; memset(&l_Y_646, 0, sizeof l_Y_646);
l_Y_646 = r_LOOKUP(p_NAME);
rt_int l_N_647; memset(&l_N_647, 0, sizeof l_N_647);
l_N_647 = ((rt_int)0LL);
for (;;) {
if ((l_Y_646 == NULL)) goto L_end648;
{
if ((((*(R12 *)rt_nil_check(l_Y_646))).f_KIND == g_Y_ENUMLIT))
{
l_N_647 = rt_add(l_N_647, ((rt_int)1LL));
}
l_Y_646 = r_LOOKUP_NEXT(l_Y_646);
}
RT_B_TICK();
} L_end648: ;
{ rt_int rv649 = l_N_647;
return rv649; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv650 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv650; }
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
R22 * l_N_651; memset(&l_N_651, 0, sizeof l_N_651);
if ((p_R == NULL))
{
{ R22 * rv652 = p_T;
return rv652; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_651 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv653 = l_N_651;
return rv653; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_651 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_651))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_654; memset(&l_LO_654, 0, sizeof l_LO_654);
R26 l_HI_655; memset(&l_HI_655, 0, sizeof l_HI_655);
S_R26(&l_LO_654, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_655, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_LO_C, (l_LO_654).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_HI_C, (l_HI_655).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_651))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_651))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_651))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_651))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_654).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_655).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_LO_C, r_RESCALE(l_LO_654, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_HI_C, r_RESCALE(l_HI_655, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_654).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_655).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_651))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_651))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_651))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_651))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_651))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_651))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_651))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_651))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_651))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_651))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_651))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv656 = l_N_651;
return rv656; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_657; memset(&l_Y_657, 0, sizeof l_Y_657);
l_Y_657 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_657 == NULL)))
{
{ R23 rv658 = r_SOME(((*(R12 *)rt_nil_check(l_Y_657))).f_MV);
return rv658; }
}
}
}
{ R23 rv659 = r_MANIFEST(p_E);
return rv659; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv660 = ((rt_int)0LL);
return rv660; }
}
{ rt_int rv661 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv661; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv662 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv662; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_663; memset(&l_A_663, 0, sizeof l_A_663);
l_A_663 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it665_lo = ((rt_int)1LL), it665_hi = p_K;
for (rt_int it665 = it665_lo; it665 <= it665_hi; it665++) {
{
if ((l_A_663 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_663 = ((*(R21 *)rt_nil_check(l_A_663))).f_NEXT;
}
RT_B_TICK();
if (it665 == it665_hi) break;
} } L_end664: ;
if ((l_A_663 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv666 = l_A_663;
return rv666; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_667; memset(&l_T_667, 0, sizeof l_T_667);
rt_int l_K_668; memset(&l_K_668, 0, sizeof l_K_668);
l_K_668 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_668 == g_TS_ARRAY))
{
{ R22 * rv669 = r_RESOLVE_ARRAY(p_TS);
return rv669; }
}
else if ((l_K_668 == g_TS_RECORD))
{
{ R22 * rv670 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv670; }
}
else if ((l_K_668 == g_TS_ENUM))
{
l_T_667 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_667 = r_WITH_RANGE(l_T_667, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_667 = r_COPY_TYP(l_T_667);
((*(R22 *)rt_nil_check(l_T_667))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
r_CHECK_ENUM_REP(l_T_667, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv671 = l_T_667;
return rv671; }
}
else if ((l_K_668 == g_TS_GEN))
{
{ R22 * rv672 = r_GEN_TYPE(p_TS);
return rv672; }
}
else if ((!(l_K_668 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_667 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_TS))).f_E), ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_667 = r_COPY_TYP(l_T_667);
((*(R22 *)rt_nil_check(l_T_667))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
}
{ R22 * rv673 = l_T_667;
return rv673; }
}
l_T_667 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_667 == NULL))
{
l_T_667 = r_RESOLVE_USER(p_TS);
}
l_T_667 = r_WITH_RANGE(l_T_667, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_667 = r_COPY_TYP(l_T_667);
((*(R22 *)rt_nil_check(l_T_667))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
if ((((*(R22 *)rt_nil_check(l_T_667))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_667, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
else if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
{ R22 * rv674 = l_T_667;
return rv674; }
rt_raise(RT_X_INIT);
}
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_675; memset(&l_T_675, 0, sizeof l_T_675);
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(p_E))).f_A)))
{
l_T_675 = r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_676; memset(&l_SAVED_CODE_676, 0, sizeof l_SAVED_CODE_676);
S_R14(&l_SAVED_CODE_676, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_675 = (r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_676, 0);
}
}
{
R22 * l_R_677; memset(&l_R_677, 0, sizeof l_R_677);
l_R_677 = r_REAL_TYPE(l_T_675);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_677))).f_KIND == g_T_ARR))
{
{ R22 * rv678 = ((*(R22 *)rt_nil_check(l_R_677))).f_ELEM;
return rv678; }
}
else if ((((*(R22 *)rt_nil_check(l_R_677))).f_KIND == g_T_PTR))
{
{ R22 * rv679 = r_TARGET(l_R_677);
return rv679; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_677))).f_KIND == g_T_STR)))
{
{ R22 * rv680 = r_CHARSET_OF(l_R_677);
return rv680; }
}
if ((((*(R22 *)rt_nil_check(l_R_677))).f_KIND == g_T_REC))
{
{
R12 * l_C_681; memset(&l_C_681, 0, sizeof l_C_681);
l_C_681 = r_RECORD_CLASS_OF(l_R_677);
if ((!(l_C_681 == NULL)))
{
{
R20 * l_B_682; memset(&l_B_682, 0, sizeof l_B_682);
l_B_682 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_681))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_682 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_682))).f_T == NULL)))
{
{ R22 * rv683 = ((*(R20 *)rt_nil_check(l_B_682))).f_T;
return rv683; }
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
{ rt_int rv684 = 0;
return rv684; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv685 = 1;
return rv685; }
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_686; memset(&l_Y_686, 0, sizeof l_Y_686);
l_Y_686 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_686 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_686))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_686))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_686))).f_T == NULL))))
{
{
R22 * l_R_687; memset(&l_R_687, 0, sizeof l_R_687);
l_R_687 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_686))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_687))).f_KIND == g_T_REC))
{
{
R12 * l_C_688; memset(&l_C_688, 0, sizeof l_C_688);
l_C_688 = r_RECORD_CLASS_OF(l_R_687);
if ((!(l_C_688 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_688))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv689 = 1;
return rv689; }
}
}
}
}
}
}
}
}
}
{ rt_int rv690 = 0;
return rv690; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_691; memset(&l_B_691, 0, sizeof l_B_691);
l_B_691 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_691 == NULL)) goto L_end692;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_691))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_691))).f_T == NULL))))
{
{ R22 * rv693 = ((*(R20 *)rt_nil_check(l_B_691))).f_T;
return rv693; }
}
l_B_691 = ((*(R20 *)rt_nil_check(l_B_691))).f_NEXT;
}
RT_B_TICK();
} L_end692: ;
{
R12 * l_Y_694; memset(&l_Y_694, 0, sizeof l_Y_694);
l_Y_694 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_694 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_694))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_694))).f_T == NULL))))
{
{ R22 * rv695 = ((*(R12 *)rt_nil_check(l_Y_694))).f_T;
return rv695; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_696; memset(&l_NAME_696, 0, sizeof l_NAME_696);
S_R10(&l_NAME_696, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_697; memset(&l_T_697, 0, sizeof l_T_697);
if (r_TEQS(l_NAME_696, rt_str("FIXED", 5)))
{
{
R23 l_S_698; memset(&l_S_698, 0, sizeof l_S_698);
S_R23(&l_S_698, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_699; memset(&l_R_699, 0, sizeof l_R_699);
S_R23(&l_R_699, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_700; memset(&l_P_700, 0, sizeof l_P_700);
l_P_700 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_699).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_700, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_698).f_V == ((rt_int)0LL)))
{
{ R22 * rv701 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv701; }
}
l_T_697 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_697))).f_SCALE = (l_S_698).f_V;
{ R22 * rv702 = l_T_697;
return rv702; }
}
}
else if (r_TEQS(l_NAME_696, rt_str("FLOAT", 5)))
{
{
R23 l_P_703; memset(&l_P_703, 0, sizeof l_P_703);
S_R23(&l_P_703, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_697 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_697))).f_SCALE = (l_P_703).f_V;
{ R22 * rv704 = l_T_697;
return rv704; }
}
}
else if (r_TEQS(l_NAME_696, rt_str("BIT", 3)))
{
l_T_697 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_697, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv705 = l_T_697;
return rv705; }
}
else if ((r_TEQS(l_NAME_696, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_696, rt_str("ASCII_STR", 9))))
{
l_T_697 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_697, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_697))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_696, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R21 * l_CS_706; memset(&l_CS_706, 0, sizeof l_CS_706);
l_CS_706 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_707; memset(&l_C_707, 0, sizeof l_C_707);
if (((((*(R21 *)rt_nil_check(l_CS_706))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_706))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_697))).f_BASE = NULL;
{ R22 * rv708 = l_T_697;
return rv708; }
}
if (((((*(R21 *)rt_nil_check(l_CS_706))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_CS_706))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_709; memset(&l_SAVED_CODE_709, 0, sizeof l_SAVED_CODE_709);
S_R14(&l_SAVED_CODE_709, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_710; memset(&l_V_710, 0, sizeof l_V_710);
S_R26(&l_V_710, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(l_CS_706))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_709, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_710).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_697))).f_BASE = r_CHARSET_OF((l_V_710).f_T);
}
{ R22 * rv711 = l_T_697;
return rv711; }
}
l_C_707 = r_REAL_TYPE(r_ARG_TYPE(l_CS_706));
if ((!(((*(R22 *)rt_nil_check(l_C_707))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_707))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_707))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_697))).f_BASE = ((*(R22 *)rt_nil_check(l_C_707))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv712 = l_T_697;
return rv712; }
}
else if (r_TEQS(l_NAME_696, rt_str("PTR", 3)))
{
l_T_697 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_697))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv713 = l_T_697;
return rv713; }
}
else if (r_TEQS(l_NAME_696, rt_str("SEMAPHORE", 9)))
{
l_T_697 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R21 * l_U_714; memset(&l_U_714, 0, sizeof l_U_714);
l_U_714 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_715; memset(&l_UT_715, 0, sizeof l_UT_715);
l_UT_715 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_716; memset(&l_M_716, 0, sizeof l_M_716);
S_R23(&l_M_716, r_NO_MVAL(), 0);
if (((((((*(R21 *)rt_nil_check(l_U_714))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_U_714))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_U_714))).f_NAME, l_UT_715) == NULL))))
{
S_R23(&l_M_716, r_ENUM_MANIFEST(l_U_714, l_UT_715), 0);
}
else
{
{
R14 l_SAVED_CODE_717; memset(&l_SAVED_CODE_717, 0, sizeof l_SAVED_CODE_717);
S_R14(&l_SAVED_CODE_717, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_718; memset(&l_V_718, 0, sizeof l_V_718);
S_R26(&l_V_718, r_EXPR(l_U_714, l_UT_715), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_717, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_718).f_T), r_REAL_TYPE(l_UT_715)))
{
S_R23(&l_M_716, r_MANIFEST(l_U_714), 0);
}
}
}
if ((!(l_M_716).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_697))).f_SCALE = (l_M_716).f_V;
}
{ R22 * rv719 = l_T_697;
return rv719; }
}
{ R22 * rv720 = NULL;
return rv720; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_721; memset(&l_M_721, 0, sizeof l_M_721);
S_R23(&l_M_721, r_MANIFEST(p_A), 0);
if ((!(l_M_721).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_722; memset(&l_SAVED_CODE_722, 0, sizeof l_SAVED_CODE_722);
S_R14(&l_SAVED_CODE_722, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_723; memset(&l_T_723, 0, sizeof l_T_723);
l_T_723 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_722, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_723)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_723))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_721).f_V < p_LO) || ((l_M_721).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv724 = l_M_721;
return rv724; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv725 = 0;
return rv725; }
}
{ rt_int rv726 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv726; }
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
R12 * l_Y_727; memset(&l_Y_727, 0, sizeof l_Y_727);
l_Y_727 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_727 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_727))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_727))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_727))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R21 * l_R_728; memset(&l_R_728, 0, sizeof l_R_728);
l_R_728 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R10 l_NAME_729; memset(&l_NAME_729, 0, sizeof l_NAME_729);
S_R10(&l_NAME_729, ((*(R21 *)rt_nil_check(l_R_728))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_728))).f_KIND == g_TS_GEN))
{
return;
}
if (r_TEQS(l_NAME_729, rt_str("ENUM_STD", 8)))
{
return;
}
if ((!((r_TEQS(l_NAME_729, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_729, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_729) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_729)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_729);
}
if ((((*(R21 *)rt_nil_check(l_R_728))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_729);
}
{
R23 l_N_730; memset(&l_N_730, 0, sizeof l_N_730);
S_R23(&l_N_730, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_728))).f_A), 0);
rt_int l_NL_731; memset(&l_NL_731, 0, sizeof l_NL_731);
l_NL_731 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_730).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_730).f_V > ((rt_int)64LL)) || ((l_N_730).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_729, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_728))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_730).f_V < r_BITS_FOR(l_NL_731)))
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
R21 * l_L_732; memset(&l_L_732, 0, sizeof l_L_732);
l_L_732 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_732 == NULL)) goto L_end733;
{
{
R21 * l_V_734; memset(&l_V_734, 0, sizeof l_V_734);
l_V_734 = ((*(R21 *)rt_nil_check(l_R_728))).f_B;
rt_int l_FOUND_735; memset(&l_FOUND_735, 0, sizeof l_FOUND_735);
l_FOUND_735 = ((rt_int)0LL);
for (;;) {
if ((l_V_734 == NULL)) goto L_end736;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_734))).f_NAME, ((*(R21 *)rt_nil_check(l_L_732))).f_NAME))
{
l_FOUND_735 = rt_add(l_FOUND_735, ((rt_int)1LL));
}
l_V_734 = ((*(R21 *)rt_nil_check(l_V_734))).f_NEXT;
}
RT_B_TICK();
} L_end736: ;
if ((!(l_FOUND_735 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_732))).f_NAME);
}
}
l_L_732 = ((*(R21 *)rt_nil_check(l_L_732))).f_NEXT;
}
RT_B_TICK();
} L_end733: ;
}
{
R21 * l_V_737; memset(&l_V_737, 0, sizeof l_V_737);
l_V_737 = ((*(R21 *)rt_nil_check(l_R_728))).f_B;
for (;;) {
if ((l_V_737 == NULL)) goto L_end738;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_737))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_737))).f_NAME);
}
{
R14 l_SAVED_CODE_739; memset(&l_SAVED_CODE_739, 0, sizeof l_SAVED_CODE_739);
S_R14(&l_SAVED_CODE_739, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_740; memset(&l_B_740, 0, sizeof l_B_740);
S_R26(&l_B_740, r_EXPR(((*(R21 *)rt_nil_check(l_V_737))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_739, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_740).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_740).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_740).f_T))).f_MLEN).f_V == (l_N_730).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_737))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_737))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_741; memset(&l_U_741, 0, sizeof l_U_741);
l_U_741 = ((*(R21 *)rt_nil_check(l_V_737))).f_NEXT;
for (;;) {
if ((l_U_741 == NULL)) goto L_end742;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_741))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_741))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_737))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_741))).f_NAME);
}
}
l_U_741 = ((*(R21 *)rt_nil_check(l_U_741))).f_NEXT;
}
RT_B_TICK();
} L_end742: ;
}
}
}
l_V_737 = ((*(R21 *)rt_nil_check(l_V_737))).f_NEXT;
}
RT_B_TICK();
} L_end738: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_743; memset(&l_B_743, 0, sizeof l_B_743);
l_B_743 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_743 == NULL)) goto L_end744;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_743))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_743))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_743))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc745; memset(&rc745, 0, sizeof rc745);  rc745.f_OK = ((*(R20 *)rt_nil_check(l_B_743))).f_HASMV; rc745.f_V = ((*(R20 *)rt_nil_check(l_B_743))).f_MV; rc745; }), 0);
return;
}
l_B_743 = ((*(R20 *)rt_nil_check(l_B_743))).f_NEXT;
}
RT_B_TICK();
} L_end744: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_746; memset(&l_C_746, 0, sizeof l_C_746);
R23 l_M_747; memset(&l_M_747, 0, sizeof l_M_747);
r_ATTR_VALUE(p_A, &l_C_746, &l_M_747);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_746, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_747, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_748; memset(&l_T_748, 0, sizeof l_T_748);
l_T_748 = r_NEW_TYP(g_T_ARR);
R21 * l_R_749; memset(&l_R_749, 0, sizeof l_R_749);
l_R_749 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_750; memset(&l_TAIL_750, 0, sizeof l_TAIL_750);
l_TAIL_750 = NULL;
for (;;) {
if ((l_R_749 == NULL)) goto L_end751;
{
{
R25 * l_B_752; memset(&l_B_752, 0, sizeof l_B_752);
l_B_752 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_753; memset(&l_LO_753, 0, sizeof l_LO_753);
R26 l_HI_754; memset(&l_HI_754, 0, sizeof l_HI_754);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_749))).f_A))
{
S_R26(&l_LO_753, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_749))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_749))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_753, r_EXPR(((*(R21 *)rt_nil_check(l_R_749))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_749))).f_B))
{
S_R26(&l_HI_754, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_749))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_749))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_754, r_EXPR(((*(R21 *)rt_nil_check(l_R_749))).f_B, (l_LO_753).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_752)), ({ R25 rc755; memset(&rc755, 0, sizeof rc755);  S_R10(&rc755.f_LO, (l_LO_753).f_C, 0); S_R10(&rc755.f_HI, (l_HI_754).f_C, 0); S_R23(&rc755.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_749))).f_A), 0); S_R23(&rc755.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_749))).f_B), 0); rc755.f_ANYARG = 0; rc755.f_NEXT = NULL; rc755; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_749))).f_A)) && (!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_749))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_753).f_T), r_REAL_TYPE((l_HI_754).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_749))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R10(&((*(R25 *)rt_nil_check(l_B_752))).f_LO, r_INDEX_OF(l_LO_753, ((*(R21 *)rt_nil_check(l_R_749))).f_LINE), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_752))).f_HI, r_INDEX_OF(l_HI_754, ((*(R21 *)rt_nil_check(l_R_749))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_753).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_753).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_752))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_749))).f_A, (l_LO_753).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_752))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_749))).f_B, (l_LO_753).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_752))).f_LO, (l_LO_753).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_752))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_752))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_753).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_749))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_750 == NULL))
{
((*(R22 *)rt_nil_check(l_T_748))).f_BOUNDS = l_B_752;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_750))).f_NEXT = l_B_752;
}
l_TAIL_750 = l_B_752;
((*(R22 *)rt_nil_check(l_T_748))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_748))).f_DIMS, ((rt_int)1LL));
}
l_R_749 = ((*(R21 *)rt_nil_check(l_R_749))).f_NEXT;
}
RT_B_TICK();
} L_end751: ;
((*(R22 *)rt_nil_check(l_T_748))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_748))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_748))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_748))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_748))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_748))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_748))).f_DIMS), 0);
{ R22 * rv756 = l_T_748;
return rv756; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_757; memset(&l_Y_757, 0, sizeof l_Y_757);
l_Y_757 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_758; memset(&l_B_758, 0, sizeof l_B_758);
l_B_758 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_758 == NULL)) goto L_end759;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_758))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_758))).f_T == NULL))))
{
{ R22 * rv760 = ((*(R20 *)rt_nil_check(l_B_758))).f_T;
return rv760; }
}
l_B_758 = ((*(R20 *)rt_nil_check(l_B_758))).f_NEXT;
}
RT_B_TICK();
} L_end759: ;
}
}
if ((l_Y_757 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_757))).f_KIND == g_Y_GEN))
{
{ R22 * rv761 = r_GEN_TYPE(p_TS);
return rv761; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_757))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_757))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv762 = ((*(R12 *)rt_nil_check(l_Y_757))).f_T;
return rv762; }
}
{
R21 * l_D_763; memset(&l_D_763, 0, sizeof l_D_763);
l_D_763 = ((*(R12 *)rt_nil_check(l_Y_757))).f_DECL;
R22 * l_T_764; memset(&l_T_764, 0, sizeof l_T_764);
if ((((*(R21 *)rt_nil_check(l_D_763))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_757))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_757))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_757))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_763))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_757))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_763))).f_B, r_RECORD_NAME(l_Y_757), l_Y_757, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_757))).f_T = r_RESOLVE_IN_DECL(l_Y_757, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_757))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_757))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_757))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_757))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_757))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_757))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_757))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_757))).f_BUSY = 0;
}
l_T_764 = ((*(R12 *)rt_nil_check(l_Y_757))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_763))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_764 = r_RECORD_INSTANCE(l_Y_757, p_TS);
}
else
{
l_T_764 = r_RESOLVE_IN_DECL(l_Y_757, p_TS);
}
}
{ R22 * rv765 = r_ABSTRACT_VIEW(l_Y_757, l_T_764);
return rv765; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_766; memset(&l_A_766, 0, sizeof l_A_766);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv767 = p_T;
return rv767; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv768 = p_T;
return rv768; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv769 = p_T;
return rv769; }
}
l_A_766 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_766))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_766))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_766))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_766))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_766))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv770 = l_A_766;
return rv770; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_771; memset(&l_P_771, 0, sizeof l_P_771);
l_P_771 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_771 == NULL)) goto L_end772;
{
if ((l_P_771 == p_M))
{
{ rt_int rv773 = 1;
return rv773; }
}
l_P_771 = ((*(R12 *)rt_nil_check(l_P_771))).f_MODL;
}
RT_B_TICK();
} L_end772: ;
{ rt_int rv774 = 0;
return rv774; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_775; memset(&l_D_775, 0, sizeof l_D_775);
l_D_775 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_776; memset(&l_T_776, 0, sizeof l_T_776);
if ((p_TS == NULL))
{
{ R22 * rv777 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_775))).f_B);
return rv777; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_775))).f_A, p_TS);
l_T_776 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_775))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv778 = l_T_776;
return rv778; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_779; memset(&l_F_779, 0, sizeof l_F_779);
l_F_779 = p_FORMALS;
R21 * l_A_780; memset(&l_A_780, 0, sizeof l_A_780);
l_A_780 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_779 == NULL)) goto L_end781;
{
{
R21 * l_N_782; memset(&l_N_782, 0, sizeof l_N_782);
l_N_782 = ((*(R21 *)rt_nil_check(l_F_779))).f_A;
for (;;) {
if ((l_N_782 == NULL)) goto L_end783;
{
if ((l_A_780 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_779))).f_B == NULL))
{
{
R12 * l_Y_784; memset(&l_Y_784, 0, sizeof l_Y_784);
l_Y_784 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_782))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_784))).f_T = r_ARG_TYPE(l_A_780);
r_DEFINE(l_Y_784, ((*(R21 *)rt_nil_check(l_A_780))).f_LINE);
}
}
else
{
{
R12 * l_Y_785; memset(&l_Y_785, 0, sizeof l_Y_785);
l_Y_785 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_782))).f_NAME);
R10 l_C_786; memset(&l_C_786, 0, sizeof l_C_786);
R23 l_M_787; memset(&l_M_787, 0, sizeof l_M_787);
((*(R12 *)rt_nil_check(l_Y_785))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_779))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_780))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_780))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_780))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_780))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_786, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_780))).f_NAME, (((*(R21 *)rt_nil_check(l_A_780))).f_NAME).f_LEN))), 0);
S_R23(&l_M_787, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_780, &l_C_786, &l_M_787);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_785))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_786))))
{
S_R10(&l_C_786, (r_EXPR(l_A_780, ((*(R12 *)rt_nil_check(l_Y_785))).f_T)).f_C, 0);
S_R23(&l_M_787, r_ENUM_MANIFEST(l_A_780, ((*(R12 *)rt_nil_check(l_Y_785))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_785))).f_ACCESS, l_C_786, 0);
((*(R12 *)rt_nil_check(l_Y_785))).f_HASMV = (l_M_787).f_OK;
((*(R12 *)rt_nil_check(l_Y_785))).f_MV = (l_M_787).f_V;
((*(R12 *)rt_nil_check(l_Y_785))).f_INPUT = 1;
r_DEFINE(l_Y_785, ((*(R21 *)rt_nil_check(l_A_780))).f_LINE);
}
}
l_A_780 = ((*(R21 *)rt_nil_check(l_A_780))).f_NEXT;
l_N_782 = ((*(R21 *)rt_nil_check(l_N_782))).f_NEXT;
}
RT_B_TICK();
} L_end783: ;
}
l_F_779 = ((*(R21 *)rt_nil_check(l_F_779))).f_NEXT;
}
RT_B_TICK();
} L_end781: ;
if ((!(l_A_780 == NULL)))
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
{ R10 rv788 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv788; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv789 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv789; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_790; memset(&l_K_790, 0, sizeof l_K_790);
l_K_790 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv791 = r_MK(rt_str("rt_int", 6));
return rv791; }
}
else if ((l_K_790 == g_T_FLOAT))
{
{ R10 rv792 = r_MK(rt_str("double", 6));
return rv792; }
}
else if (((l_K_790 == g_T_STR) || (l_K_790 == g_T_BITS)))
{
{ R10 rv793 = r_MK(rt_str("rstr", 4));
return rv793; }
}
else if (((l_K_790 == g_T_REC) || (l_K_790 == g_T_ARR)))
{
{ R10 rv794 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv794; }
}
else if ((l_K_790 == g_T_ABS))
{
{ R10 rv795 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv795; }
}
else if ((l_K_790 == g_T_SEM))
{
{ R10 rv796 = r_MK(rt_str("rt_b_sem *", 10));
return rv796; }
}
else if ((l_K_790 == g_T_PATHS))
{
{ R10 rv797 = r_MK(rt_str("rt_b_paths", 10));
return rv797; }
}
else if ((l_K_790 == g_T_VOID))
{
{ R10 rv798 = r_MK(rt_str("void", 4));
return rv798; }
}
else if ((l_K_790 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_799; memset(&l_TT_799, 0, sizeof l_TT_799);
l_TT_799 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_799))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_799))).f_A == NULL)))
{
{
R12 * l_Y_800; memset(&l_Y_800, 0, sizeof l_Y_800);
l_Y_800 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_799))).f_NAME);
if ((!(l_Y_800 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_800))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_800))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_800))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_800))).f_DECL))).f_A == NULL)))
{
{ R10 rv801 = r_CATS(r_RECORD_NAME(l_Y_800), rt_str(" *", 2));
return rv801; }
}
}
}
}
}
}
}
{ R10 rv802 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv802; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv803 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv803; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_804; memset(&l_F_804, 0, sizeof l_F_804);
l_F_804 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_804)), ({ R24 rc805; memset(&rc805, 0, sizeof rc805);  S_R10(&rc805.f_NAME, p_NAME, 0); S_R10(&rc805.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc805.f_T = p_T; rc805.f_KIND = p_KIND; S_R10(&rc805.f_TAGF, r_NO_TEXT(), 0); rc805.f_LABELS = NULL; rc805.f_NEXT = NULL; rc805; }), 0);
{ R24 * rv806 = l_F_804;
return rv806; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_807; memset(&l_F_807, 0, sizeof l_F_807);
l_F_807 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_807 == NULL)) goto L_end808;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_807))).f_NAME, p_NAME))
{
{ R24 * rv809 = l_F_807;
return rv809; }
}
l_F_807 = ((*(R24 *)rt_nil_check(l_F_807))).f_NEXT;
}
RT_B_TICK();
} L_end808: ;
{ R24 * rv810 = NULL;
return rv810; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_811; memset(&l_F_811, 0, sizeof l_F_811);
l_F_811 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_812; memset(&l_FIRST_812, 0, sizeof l_FIRST_812);
l_FIRST_812 = NULL;
for (;;) {
if ((l_F_811 == NULL)) goto L_end813;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_811))).f_NAME, p_NAME))
{
if ((l_FIRST_812 == NULL))
{
l_FIRST_812 = l_F_811;
}
if (((((*(R24 *)rt_nil_check(l_F_811))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv814 = l_F_811;
return rv814; }
}
{
R23 l_TAGV_815; memset(&l_TAGV_815, 0, sizeof l_TAGV_815);
S_R23(&l_TAGV_815, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_811))).f_TAGF), 0);
if ((l_TAGV_815).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_811))).f_LABELS, (l_TAGV_815).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_811))).f_TAGF)))).f_T))
{
{ R24 * rv816 = l_F_811;
return rv816; }
}
}
}
}
l_F_811 = ((*(R24 *)rt_nil_check(l_F_811))).f_NEXT;
}
RT_B_TICK();
} L_end813: ;
{ R24 * rv817 = l_FIRST_812;
return rv817; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_818; memset(&l_P_818, 0, sizeof l_P_818);
l_P_818 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_819; memset(&l_N_819, 0, sizeof l_N_819);
l_N_819 = ((rt_int)0LL);
for (;;) {
if ((l_P_818 == NULL)) goto L_end820;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_818))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_818))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_818))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_818))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_819 = rt_add(l_N_819, ((rt_int)1LL));
}
l_P_818 = ((*(R24 *)rt_nil_check(l_P_818))).f_NEXT;
}
RT_B_TICK();
} L_end820: ;
if ((l_N_819 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_819)), 0);
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
R21 * l_D_821; memset(&l_D_821, 0, sizeof l_D_821);
l_D_821 = p_DECLS;
for (;;) {
if ((l_D_821 == NULL)) goto L_end822;
{
if ((((*(R21 *)rt_nil_check(l_D_821))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_823; memset(&l_FT_823, 0, sizeof l_FT_823);
l_FT_823 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_821))).f_B);
R21 * l_N_824; memset(&l_N_824, 0, sizeof l_N_824);
l_N_824 = ((*(R21 *)rt_nil_check(l_D_821))).f_A;
for (;;) {
if ((l_N_824 == NULL)) goto L_end825;
{
{
R24 * l_F_826; memset(&l_F_826, 0, sizeof l_F_826);
l_F_826 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_824))).f_NAME, l_FT_823, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_826))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_826))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_826, &(*p_TAIL));
if (((r_LOOKUP(((*(R21 *)rt_nil_check(l_N_824))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_N_824))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_827; memset(&l_Y_827, 0, sizeof l_Y_827);
l_Y_827 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_824))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_827))).f_T = l_FT_823;
S_R10(&((*(R12 *)rt_nil_check(l_Y_827))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_826))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_827))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_827))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_827))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_827, ((*(R21 *)rt_nil_check(l_D_821))).f_LINE);
}
}
}
l_N_824 = ((*(R21 *)rt_nil_check(l_N_824))).f_NEXT;
}
RT_B_TICK();
} L_end825: ;
}
}
else
{
{
R24 * l_TF_828; memset(&l_TF_828, 0, sizeof l_TF_828);
l_TF_828 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_821))).f_NAME);
R21 * l_S_829; memset(&l_S_829, 0, sizeof l_S_829);
l_S_829 = ((*(R21 *)rt_nil_check(l_D_821))).f_A;
if ((l_TF_828 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_821))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_821))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_828))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_821))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_821))).f_NAME);
}
{
R21 * l_O_830; memset(&l_O_830, 0, sizeof l_O_830);
l_O_830 = p_DECLS;
for (;;) {
if ((l_O_830 == l_D_821)) goto L_end831;
{
if ((((*(R21 *)rt_nil_check(l_O_830))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_O_830))).f_NAME, ((*(R21 *)rt_nil_check(l_D_821))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_821))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R21 *)rt_nil_check(l_D_821))).f_NAME);
}
}
l_O_830 = ((*(R21 *)rt_nil_check(l_O_830))).f_NEXT;
}
RT_B_TICK();
} L_end831: ;
}
r_CHECK_VARIANT_NAMES(l_D_821, ((*(R24 *)rt_nil_check(l_TF_828))).f_T);
for (;;) {
if ((l_S_829 == NULL)) goto L_end832;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_829))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_821))).f_NAME), ((*(R21 *)rt_nil_check(l_S_829))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_829 = ((*(R21 *)rt_nil_check(l_S_829))).f_NEXT;
}
RT_B_TICK();
} L_end832: ;
}
}
l_D_821 = ((*(R21 *)rt_nil_check(l_D_821))).f_NEXT;
}
RT_B_TICK();
} L_end822: ;
}
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT) { RT_B_TICK(); 
R21 * l_S_833; memset(&l_S_833, 0, sizeof l_S_833);
l_S_833 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R21 * l_LOS_834; memset(&l_LOS_834, 0, sizeof l_LOS_834);
l_LOS_834 = NULL;
R21 * l_HIS_835; memset(&l_HIS_835, 0, sizeof l_HIS_835);
l_HIS_835 = NULL;
rt_int l_LO_LIM_836; memset(&l_LO_LIM_836, 0, sizeof l_LO_LIM_836);
rt_int l_HI_LIM_837; memset(&l_HI_LIM_837, 0, sizeof l_HI_LIM_837);
R22 * l_R_838; memset(&l_R_838, 0, sizeof l_R_838);
l_R_838 = r_REAL_TYPE(p_TT);
l_LO_LIM_836 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_837 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_838))).f_KIND == g_T_ENUM))
{
l_LO_LIM_836 = ((rt_int)0LL);
l_HI_LIM_837 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_838))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_838))).f_KIND == g_T_BOOL))
{
l_LO_LIM_836 = ((rt_int)0LL);
l_HI_LIM_837 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_838))).f_MLO).f_OK)
{
l_LO_LIM_836 = (((*(R22 *)rt_nil_check(l_R_838))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_838))).f_MHI).f_OK)
{
l_HI_LIM_837 = (((*(R22 *)rt_nil_check(l_R_838))).f_MHI).f_V;
}
for (;;) {
if ((l_S_833 == NULL)) goto L_end839;
{
{
R21 * l_L_840; memset(&l_L_840, 0, sizeof l_L_840);
l_L_840 = ((*(R21 *)rt_nil_check(l_S_833))).f_A;
for (;;) {
if ((l_L_840 == NULL)) goto L_end841;
{
{
R23 l_A_842; memset(&l_A_842, 0, sizeof l_A_842);
R23 l_B_843; memset(&l_B_843, 0, sizeof l_B_843);
if ((((*(R21 *)rt_nil_check(l_L_840))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_842, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_840))).f_A, p_TT), 0);
S_R23(&l_B_843, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_840))).f_B, p_TT), 0);
if (((l_A_842).f_OK && (((((*(R21 *)rt_nil_check(l_L_840))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_840))).f_IV == ((rt_int)3LL))))))
{
(l_A_842).f_V = rt_add((l_A_842).f_V, ((rt_int)1LL));
}
if (((l_B_843).f_OK && (((*(R21 *)rt_nil_check(l_L_840))).f_IV >= ((rt_int)2LL))))
{
(l_B_843).f_V = rt_sub((l_B_843).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_842, r_ENUM_MANIFEST(l_L_840, p_TT), 0);
S_R23(&l_B_843, l_A_842, 0);
}
if ((!(((l_A_842).f_OK && (l_B_843).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_840))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_842).f_V < l_LO_LIM_836) || ((l_B_843).f_V > l_HI_LIM_837)) || ((l_A_842).f_V > (l_B_843).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_840))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R21 * l_P_844; memset(&l_P_844, 0, sizeof l_P_844);
l_P_844 = l_LOS_834;
R21 * l_Q_845; memset(&l_Q_845, 0, sizeof l_Q_845);
l_Q_845 = l_HIS_835;
for (;;) {
if ((l_P_844 == NULL)) goto L_end846;
{
if ((((l_A_842).f_V <= ((*(R21 *)rt_nil_check(l_Q_845))).f_IV) && ((l_B_843).f_V >= ((*(R21 *)rt_nil_check(l_P_844))).f_IV)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_840))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_844 = ((*(R21 *)rt_nil_check(l_P_844))).f_NEXT;
l_Q_845 = ((*(R21 *)rt_nil_check(l_Q_845))).f_NEXT;
}
RT_B_TICK();
} L_end846: ;
}
{
R21 * l_P_847; memset(&l_P_847, 0, sizeof l_P_847);
l_P_847 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R21 * l_Q_848; memset(&l_Q_848, 0, sizeof l_Q_848);
l_Q_848 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(l_P_847))).f_IV = (l_A_842).f_V;
((*(R21 *)rt_nil_check(l_Q_848))).f_IV = (l_B_843).f_V;
((*(R21 *)rt_nil_check(l_P_847))).f_NEXT = l_LOS_834;
((*(R21 *)rt_nil_check(l_Q_848))).f_NEXT = l_HIS_835;
l_LOS_834 = l_P_847;
l_HIS_835 = l_Q_848;
}
}
l_L_840 = ((*(R21 *)rt_nil_check(l_L_840))).f_NEXT;
}
RT_B_TICK();
} L_end841: ;
}
l_S_833 = ((*(R21 *)rt_nil_check(l_S_833))).f_NEXT;
}
RT_B_TICK();
} L_end839: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_849; memset(&l_T_849, 0, sizeof l_T_849);
l_T_849 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_850; memset(&l_TAIL_850, 0, sizeof l_TAIL_850);
l_TAIL_850 = NULL;
((*(R22 *)rt_nil_check(l_T_849))).f_BASE = l_T_849;
((*(R22 *)rt_nil_check(l_T_849))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_849))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_849))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_849))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_849))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_849))).f_CNAME));
}
{
R21 * l_F_851; memset(&l_F_851, 0, sizeof l_F_851);
l_F_851 = p_FORMALS;
for (;;) {
if ((l_F_851 == NULL)) goto L_end852;
{
if ((!(((*(R21 *)rt_nil_check(l_F_851))).f_B == NULL)))
{
{
R22 * l_FT_853; memset(&l_FT_853, 0, sizeof l_FT_853);
l_FT_853 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_851))).f_B);
R21 * l_N_854; memset(&l_N_854, 0, sizeof l_N_854);
l_N_854 = ((*(R21 *)rt_nil_check(l_F_851))).f_A;
rt_int l_KIND_855; memset(&l_KIND_855, 0, sizeof l_KIND_855);
l_KIND_855 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_851))).f_IV == ((rt_int)1LL)))
{
l_KIND_855 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_853))) || (!(((*(R22 *)rt_nil_check(l_FT_853))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_851))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_854 == NULL)) goto L_end856;
{
r_ADD_FIELD(l_T_849, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_854))).f_NAME, l_FT_853, l_KIND_855), &l_TAIL_850);
l_N_854 = ((*(R21 *)rt_nil_check(l_N_854))).f_NEXT;
}
RT_B_TICK();
} L_end856: ;
}
}
l_F_851 = ((*(R21 *)rt_nil_check(l_F_851))).f_NEXT;
}
RT_B_TICK();
} L_end852: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_849, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_850);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_COMPLETE_RECORD(l_T_849);
{ R22 * rv857 = l_T_849;
return rv857; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_858; memset(&l_D_858, 0, sizeof l_D_858);
l_D_858 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_859; memset(&l_CLASS_859, 0, sizeof l_CLASS_859);
l_CLASS_859 = NULL;
R20 * l_TARGS_860; memset(&l_TARGS_860, 0, sizeof l_TARGS_860);
l_TARGS_860 = NULL;
R25 * l_VARGS_861; memset(&l_VARGS_861, 0, sizeof l_VARGS_861);
l_VARGS_861 = NULL;
R25 * l_VTAIL_862; memset(&l_VTAIL_862, 0, sizeof l_VTAIL_862);
l_VTAIL_862 = NULL;
R21 * l_A_863; memset(&l_A_863, 0, sizeof l_A_863);
l_A_863 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_864; memset(&l_F_864, 0, sizeof l_F_864);
l_F_864 = ((*(R21 *)rt_nil_check(l_D_858))).f_A;
for (;;) {
if ((l_F_864 == NULL)) goto L_end865;
{
{
R21 * l_N_866; memset(&l_N_866, 0, sizeof l_N_866);
l_N_866 = ((*(R21 *)rt_nil_check(l_F_864))).f_A;
for (;;) {
if ((l_N_866 == NULL)) goto L_end867;
{
if ((l_A_863 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_864))).f_B == NULL))
{
{
R20 * l_B_868; memset(&l_B_868, 0, sizeof l_B_868);
l_B_868 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_868)), ({ R20 rc869; memset(&rc869, 0, sizeof rc869);  S_R10(&rc869.f_NAME, ((*(R21 *)rt_nil_check(l_N_866))).f_NAME, 0); rc869.f_T = r_ARG_TYPE(l_A_863); S_R10(&rc869.f_C, r_NO_TEXT(), 0); rc869.f_HASMV = 0; rc869.f_MV = ((rt_int)0LL); rc869.f_R = NULL; rc869.f_NEXT = l_TARGS_860; rc869; }), 0);
l_TARGS_860 = l_B_868;
}
}
else
{
{
R25 * l_V_870; memset(&l_V_870, 0, sizeof l_V_870);
l_V_870 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_870)), ({ R25 rc871; memset(&rc871, 0, sizeof rc871);  S_R10(&rc871.f_LO, r_NO_TEXT(), 0); S_R10(&rc871.f_HI, r_NO_TEXT(), 0); S_R23(&rc871.f_MLO, r_NO_MVAL(), 0); S_R23(&rc871.f_MHI, r_NO_MVAL(), 0); rc871.f_ANYARG = 0; rc871.f_NEXT = NULL; rc871; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_863))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_864))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_863))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_870))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_863))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_870))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_870))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_863))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_870))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_870))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_863))).f_NAME, (((*(R21 *)rt_nil_check(l_A_863))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_872; memset(&l_FT_872, 0, sizeof l_FT_872);
l_FT_872 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_864))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_870))).f_LO, r_CONVERT(r_EXPR(l_A_863, l_FT_872), l_FT_872, ((*(R21 *)rt_nil_check(l_A_863))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_870))).f_MLO, r_ENUM_MANIFEST(l_A_863, l_FT_872), 0);
if ((((((*(R25 *)rt_nil_check(l_V_870))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_872))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_872))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_870))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_872))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_870))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_872))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_863))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R21 *)rt_nil_check(l_F_864))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_870))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_863))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_862 == NULL))
{
l_VARGS_861 = l_V_870;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_862))).f_NEXT = l_V_870;
}
l_VTAIL_862 = l_V_870;
}
}
l_A_863 = ((*(R21 *)rt_nil_check(l_A_863))).f_NEXT;
l_N_866 = ((*(R21 *)rt_nil_check(l_N_866))).f_NEXT;
}
RT_B_TICK();
} L_end867: ;
}
l_F_864 = ((*(R21 *)rt_nil_check(l_F_864))).f_NEXT;
}
RT_B_TICK();
} L_end865: ;
if ((!(l_A_863 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_873; memset(&l_R_873, 0, sizeof l_R_873);
l_R_873 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_873 == NULL)) goto L_end874;
{
if (((((*(R12 *)rt_nil_check(l_R_873))).f_DECL == l_D_858) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_873))).f_BINDINGS, l_TARGS_860)))
{
l_CLASS_859 = ((*(R12 *)rt_nil_check(l_R_873))).f_T;
goto L_end874;
}
l_R_873 = ((*(R12 *)rt_nil_check(l_R_873))).f_INSTANCES;
}
RT_B_TICK();
} L_end874: ;
}
if ((l_CLASS_859 == NULL))
{
{
R12 * l_R_875; memset(&l_R_875, 0, sizeof l_R_875);
l_R_875 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_876; memset(&l_B_876, 0, sizeof l_B_876);
l_B_876 = l_TARGS_860;
R20 * l_SAVED_877; memset(&l_SAVED_877, 0, sizeof l_SAVED_877);
l_SAVED_877 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_878; memset(&l_ENTERED_878, 0, sizeof l_ENTERED_878);
((*(R12 *)rt_nil_check(l_R_875))).f_DECL = l_D_858;
((*(R12 *)rt_nil_check(l_R_875))).f_BINDINGS = l_TARGS_860;
((*(R12 *)rt_nil_check(l_R_875))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_875;
l_ENTERED_878 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_876 == NULL)) goto L_end879;
{
{
R12 * l_TY_880; memset(&l_TY_880, 0, sizeof l_TY_880);
l_TY_880 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_876))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_880))).f_T = ((*(R20 *)rt_nil_check(l_B_876))).f_T;
r_DEFINE(l_TY_880, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_876 = ((*(R20 *)rt_nil_check(l_B_876))).f_NEXT;
}
RT_B_TICK();
} L_end879: ;
l_F_864 = ((*(R21 *)rt_nil_check(l_D_858))).f_A;
for (;;) {
if ((l_F_864 == NULL)) goto L_end881;
{
if ((!(((*(R21 *)rt_nil_check(l_F_864))).f_B == NULL)))
{
{
R21 * l_N_882; memset(&l_N_882, 0, sizeof l_N_882);
l_N_882 = ((*(R21 *)rt_nil_check(l_F_864))).f_A;
for (;;) {
if ((l_N_882 == NULL)) goto L_end883;
{
{
R12 * l_P_884; memset(&l_P_884, 0, sizeof l_P_884);
l_P_884 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_882))).f_NAME);
((*(R12 *)rt_nil_check(l_P_884))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_864))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_884))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_882))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_884))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_884))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_884, ((*(R21 *)rt_nil_check(l_F_864))).f_LINE);
}
l_N_882 = ((*(R21 *)rt_nil_check(l_N_882))).f_NEXT;
}
RT_B_TICK();
} L_end883: ;
}
}
l_F_864 = ((*(R21 *)rt_nil_check(l_F_864))).f_NEXT;
}
RT_B_TICK();
} L_end881: ;
if ((l_TARGS_860 == NULL))
{
l_CLASS_859 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_858))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_858))).f_A);
}
else
{
l_CLASS_859 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_858))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_858))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_859))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_875))).f_T = l_CLASS_859;
r_CLOSE_SCOPE();
if (l_ENTERED_878)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_877;
}
}
{
R22 * l_T_885; memset(&l_T_885, 0, sizeof l_T_885);
l_T_885 = r_COPY_TYP(l_CLASS_859);
((*(R22 *)rt_nil_check(l_T_885))).f_ARGS = l_VARGS_861;
{ R22 * rv886 = l_T_885;
return rv886; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_887; memset(&l_P_887, 0, sizeof l_P_887);
l_P_887 = p_A;
R20 * l_Q_888; memset(&l_Q_888, 0, sizeof l_Q_888);
l_Q_888 = p_B;
for (;;) {
if (((l_P_887 == NULL) || (l_Q_888 == NULL))) goto L_end889;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_887))).f_T, ((*(R20 *)rt_nil_check(l_Q_888))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_887))).f_T, ((*(R20 *)rt_nil_check(l_Q_888))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_887))).f_T, ((*(R20 *)rt_nil_check(l_Q_888))).f_T))))
{
{ rt_int rv890 = 0;
return rv890; }
}
l_P_887 = ((*(R20 *)rt_nil_check(l_P_887))).f_NEXT;
l_Q_888 = ((*(R20 *)rt_nil_check(l_Q_888))).f_NEXT;
}
RT_B_TICK();
} L_end889: ;
{ rt_int rv891 = ((l_P_887 == NULL) && (l_Q_888 == NULL));
return rv891; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_892; memset(&l_A_892, 0, sizeof l_A_892);
l_A_892 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_892 == NULL)) goto L_end893;
{
if (((*(R25 *)rt_nil_check(l_A_892))).f_ANYARG)
{
{ rt_int rv894 = 1;
return rv894; }
}
l_A_892 = ((*(R25 *)rt_nil_check(l_A_892))).f_NEXT;
}
RT_B_TICK();
} L_end893: ;
{ rt_int rv895 = 0;
return rv895; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_896; memset(&l_L_896, 0, sizeof l_L_896);
l_L_896 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_897; memset(&l_C_897, 0, sizeof l_C_897);
S_R10(&l_C_897, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_898; memset(&l_TF_898, 0, sizeof l_TF_898);
l_TF_898 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_896 == NULL)) goto L_end899;
{
if ((((*(R21 *)rt_nil_check(l_L_896))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_897, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_897, p_SELF, ((*(R24 *)rt_nil_check(l_TF_898))).f_CNAME), 0);
S_R10(&l_C_897, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_897, (r_EXPR(((*(R21 *)rt_nil_check(l_L_896))).f_A, ((*(R24 *)rt_nil_check(l_TF_898))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_898))).f_CNAME), 0);
S_R10(&l_C_897, r_FMT2(rt_str("@@)", 3), l_C_897, (r_EXPR(((*(R21 *)rt_nil_check(l_L_896))).f_B, ((*(R24 *)rt_nil_check(l_TF_898))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_897, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_897, p_SELF, ((*(R24 *)rt_nil_check(l_TF_898))).f_CNAME, (r_EXPR(l_L_896, ((*(R24 *)rt_nil_check(l_TF_898))).f_T)).f_C), 0);
}
l_L_896 = ((*(R21 *)rt_nil_check(l_L_896))).f_NEXT;
}
RT_B_TICK();
} L_end899: ;
{ R10 rv900 = r_FMT1(rt_str("(@)", 3), l_C_897);
return rv900; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_901; memset(&l_C_901, 0, sizeof l_C_901);
S_R10(&l_C_901, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_902; memset(&l_F_902, 0, sizeof l_F_902);
l_F_902 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_903; memset(&l_BODY_903, 0, sizeof l_BODY_903);
S_R10(&l_BODY_903, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_904; memset(&l_ASSIGN_904, 0, sizeof l_ASSIGN_904);
S_R10(&l_ASSIGN_904, r_MK(rt_str("", 0)), 0);
R10 l_COPY_905; memset(&l_COPY_905, 0, sizeof l_COPY_905);
S_R10(&l_COPY_905, r_MK(rt_str("", 0)), 0);
R10 l_EQ_906; memset(&l_EQ_906, 0, sizeof l_EQ_906);
S_R10(&l_EQ_906, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_902 == NULL)) goto L_end907;
{
S_R10(&l_BODY_903, r_FMT3(rt_str("@ @ @;", 6), l_BODY_903, r_CTYPE(((*(R24 *)rt_nil_check(l_F_902))).f_T), ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME), 0);
S_R10(&l_COPY_905, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_905, ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_902))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_902))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_904, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_904, ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_902))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_904, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_904, ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_904, r_FMT2(rt_str("@ @", 3), l_ASSIGN_904, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_902))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_902))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_906, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_906, r_VARIANT_COND(l_F_902, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_902))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_906, r_FMT2(rt_str("@ && @", 6), l_EQ_906, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_902))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_902))).f_CNAME))), 0);
}
l_F_902 = ((*(R24 *)rt_nil_check(l_F_902))).f_NEXT;
}
RT_B_TICK();
} L_end907: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_901, l_BODY_903));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_901, l_C_901, l_C_901));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_901, l_C_901, l_C_901));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_901, l_C_901, l_C_901, l_ASSIGN_904));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_901, l_C_901, l_C_901, l_EQ_906));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_901, l_C_901, l_C_901));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_901, l_C_901, l_C_901, l_C_901));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_905));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_908; memset(&l_ET_C_908, 0, sizeof l_ET_C_908);
S_R10(&l_ET_C_908, r_CTYPE(p_ELEM), 0);
R10 l_KEY_909; memset(&l_KEY_909, 0, sizeof l_KEY_909);
S_R10(&l_KEY_909, r_FMT3(rt_str("@/@/@", 5), l_ET_C_908, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_910; memset(&l_Y_910, 0, sizeof l_Y_910);
l_Y_910 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_910 == NULL)) goto L_end911;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_910))).f_NAME, l_KEY_909) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_910))).f_T, p_ELEM)))
{
{ R10 rv912 = ((*(R12 *)rt_nil_check(l_Y_910))).f_ACCESS;
return rv912; }
}
l_Y_910 = ((*(R12 *)rt_nil_check(l_Y_910))).f_INSTANCES;
}
RT_B_TICK();
} L_end911: ;
l_Y_910 = r_NEW_SYM(g_Y_TYPE, l_KEY_909);
((*(R12 *)rt_nil_check(l_Y_910))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_910))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_910))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_910;
{
R10 l_C_913; memset(&l_C_913, 0, sizeof l_C_913);
S_R10(&l_C_913, ((*(R12 *)rt_nil_check(l_Y_910))).f_ACCESS, 0);
R10 l_D_914; memset(&l_D_914, 0, sizeof l_D_914);
S_R10(&l_D_914, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_913, l_C_913));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_913, l_D_914, l_D_914, l_ET_C_908));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_913, l_C_913, l_C_913));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_913, l_C_913, l_C_913));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_913, l_C_913, l_C_913, l_D_914));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_914, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_913, l_C_913, l_C_913, l_D_914));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_914, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_913, l_C_913, l_C_913));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_913, l_C_913, l_C_913, l_C_913));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_914, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv915 = ((*(R12 *)rt_nil_check(l_Y_910))).f_ACCESS;
return rv915; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_916; memset(&l_K_916, 0, sizeof l_K_916);
l_K_916 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_916 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv917 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv917; }
}
{ R10 rv918 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv918; }
}
else if ((l_K_916 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv919 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv919; }
}
{ R10 rv920 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv920; }
}
else if ((l_K_916 == g_T_SEM))
{
{ R10 rv921 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv921; }
}
else if ((l_K_916 == g_T_ABS))
{
{ R10 rv922 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv922; }
}
else if ((l_K_916 == g_T_ARR))
{
{
R25 * l_B_923; memset(&l_B_923, 0, sizeof l_B_923);
l_B_923 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_924; memset(&l_I_924, 0, sizeof l_I_924);
l_I_924 = ((rt_int)0LL);
R10 l_R_925; memset(&l_R_925, 0, sizeof l_R_925);
S_R10(&l_R_925, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_923 == NULL)) goto L_end926;
{
S_R10(&l_R_925, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_925, p_LV, r_NUM(l_I_924), ((*(R25 *)rt_nil_check(l_B_923))).f_LO), 0);
S_R10(&l_R_925, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_925, p_LV, r_NUM(l_I_924), ((*(R25 *)rt_nil_check(l_B_923))).f_HI), 0);
l_I_924 = rt_add(l_I_924, ((rt_int)1LL));
l_B_923 = ((*(R25 *)rt_nil_check(l_B_923))).f_NEXT;
}
RT_B_TICK();
} L_end926: ;
S_R10(&l_R_925, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_925, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_925, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_925, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_927; memset(&l_IV_927, 0, sizeof l_IV_927);
S_R10(&l_IV_927, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_925, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_925, l_IV_927, l_IV_927, l_IV_927), 0);
S_R10(&l_R_925, r_FMT2(rt_str("@ @ }", 5), l_R_925, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_927))), 0);
}
}
{ R10 rv928 = r_CATS(l_R_925, rt_str(" }", 2));
return rv928; }
}
}
else if ((l_K_916 == g_T_REC))
{
{
R24 * l_F_929; memset(&l_F_929, 0, sizeof l_F_929);
l_F_929 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_930; memset(&l_A_930, 0, sizeof l_A_930);
l_A_930 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_931; memset(&l_R_931, 0, sizeof l_R_931);
S_R10(&l_R_931, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_929 == NULL)) goto L_end932;
{
if ((!(((*(R24 *)rt_nil_check(l_F_929))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_930 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_930))).f_ANYARG))
{
S_R10(&l_R_931, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_931, p_LV, ((*(R24 *)rt_nil_check(l_F_929))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_930))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_929))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_930))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R10(&l_R_931, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_931, p_LV, ((*(R24 *)rt_nil_check(l_F_929))).f_CNAME), 0);
}
l_A_930 = ((*(R25 *)rt_nil_check(l_A_930))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_929))).f_T))
{
S_R10(&l_R_931, r_FMT2(rt_str("@ @", 3), l_R_931, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_929))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_929))).f_CNAME)), p_LV)), 0);
}
l_F_929 = ((*(R24 *)rt_nil_check(l_F_929))).f_NEXT;
}
RT_B_TICK();
} L_end932: ;
{ R10 rv933 = l_R_931;
return rv933; }
}
}
{ R10 rv934 = r_NO_TEXT();
return rv934; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_935; memset(&l_K_935, 0, sizeof l_K_935);
l_K_935 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_935 == g_T_STR) || (l_K_935 == g_T_BITS)) || (l_K_935 == g_T_ARR)) || (l_K_935 == g_T_SEM)))
{
{ rt_int rv936 = 1;
return rv936; }
}
else if ((l_K_935 == g_T_ABS))
{
{ rt_int rv937 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv937; }
}
else if ((l_K_935 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv938 = 1;
return rv938; }
}
{
R24 * l_F_939; memset(&l_F_939, 0, sizeof l_F_939);
l_F_939 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_939 == NULL)) goto L_end940;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_939))).f_T))
{
{ rt_int rv941 = 1;
return rv941; }
}
l_F_939 = ((*(R24 *)rt_nil_check(l_F_939))).f_NEXT;
}
RT_B_TICK();
} L_end940: ;
}
}
{ rt_int rv942 = 0;
return rv942; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_943; memset(&l_K_943, 0, sizeof l_K_943);
l_K_943 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_943 == g_T_STR) || (l_K_943 == g_T_BITS)))
{
{ R10 rv944 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv944; }
}
else if ((l_K_943 == g_T_ABS))
{
{ R10 rv945 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv945; }
}
else if (((l_K_943 == g_T_ARR) || (l_K_943 == g_T_REC)))
{
{ R10 rv946 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv946; }
}
{ R10 rv947 = p_V;
return rv947; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_948; memset(&l_K_948, 0, sizeof l_K_948);
l_K_948 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_948 == g_T_STR) || (l_K_948 == g_T_BITS)))
{
{ R10 rv949 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv949; }
}
else if ((l_K_948 == g_T_ABS))
{
{ R10 rv950 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv950; }
}
else if ((l_K_948 == g_T_SEM))
{
{ R10 rv951 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv951; }
}
else if ((l_K_948 == g_T_ARR))
{
{ R10 rv952 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv952; }
}
else if ((l_K_948 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv953 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv953; }
}
{ R10 rv954 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv954; }
}
{ R10 rv955 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv955; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_956; memset(&l_K_956, 0, sizeof l_K_956);
l_K_956 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_956 == g_T_STR) || (l_K_956 == g_T_BITS)))
{
{ R10 rv957 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv957; }
}
else if ((l_K_956 == g_T_ABS))
{
{ R10 rv958 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv958; }
}
else if (((l_K_956 == g_T_ARR) || (l_K_956 == g_T_REC)))
{
{ R10 rv959 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv959; }
}
else if ((l_K_956 == g_T_SEM))
{
{ R10 rv960 = r_MK(rt_str("0", 1));
return rv960; }
}
{ R10 rv961 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv961; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv962 = p_V;
return rv962; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv963 = p_V;
return rv963; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv964 = p_V;
return rv964; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv965 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv965; }
}
{ R10 rv966 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv966; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv967 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv967; }
}
{ R10 rv968 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv968; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv969 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv969; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv970 = 1;
return rv970; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv971 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv971; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv972 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv972; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv973 = 0;
return rv973; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv974 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv974; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv975 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv975; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv976 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv976; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv977 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv977; }
}
{ rt_int rv978 = 1;
return rv978; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv979 = 1;
return rv979; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv980 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv980; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv981 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv981; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv982 = 0;
return rv982; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv983 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv983; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv984 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv984; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv985 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv985; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv986 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv986; }
}
{ rt_int rv987 = 1;
return rv987; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv988 = 0;
return rv988; }
}
{ rt_int rv989 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv989; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_990; memset(&l_P_990, 0, sizeof l_P_990);
l_P_990 = p_A;
R25 * l_Q_991; memset(&l_Q_991, 0, sizeof l_Q_991);
l_Q_991 = p_B;
for (;;) {
if (((l_P_990 == NULL) || (l_Q_991 == NULL))) goto L_end992;
{
if ((r_IS_GEN_ARG(l_P_990) || r_IS_GEN_ARG(l_Q_991)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_990))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_991))).f_ANYARG)))
{
{ rt_int rv993 = 0;
return rv993; }
}
if (((((*(R25 *)rt_nil_check(l_P_990))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_991))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_990))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_991))).f_MLO).f_V)))
{
{ rt_int rv994 = 0;
return rv994; }
}
}
l_P_990 = ((*(R25 *)rt_nil_check(l_P_990))).f_NEXT;
l_Q_991 = ((*(R25 *)rt_nil_check(l_Q_991))).f_NEXT;
}
RT_B_TICK();
} L_end992: ;
{ rt_int rv995 = ((l_P_990 == NULL) && (l_Q_991 == NULL));
return rv995; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_996; memset(&l_CS_996, 0, sizeof l_CS_996);
l_CS_996 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_997; memset(&l_T_997, 0, sizeof l_T_997);
rt_int l_LEV_998; memset(&l_LEV_998, 0, sizeof l_LEV_998);
if ((((*(R18 *)rt_nil_check(l_CS_996))).f_LEVEL == p_LEVEL))
{
{ R10 rv999 = r_MK(rt_str("F", 1));
return rv999; }
}
if (((*(R18 *)rt_nil_check(l_CS_996))).f_FRAMED)
{
S_R10(&l_T_997, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_997, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_998 = rt_sub(((*(R18 *)rt_nil_check(l_CS_996))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_998 <= p_LEVEL)) goto L_end1000;
{
S_R10(&l_T_997, r_CATS(l_T_997, rt_str("->up", 4)), 0);
l_LEV_998 = rt_sub(l_LEV_998, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1000: ;
{ R10 rv1001 = l_T_997;
return rv1001; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv1002 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1002; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1003 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1003; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv1004 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1004; }
}
{ R10 rv1005 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1005; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_1006; memset(&l_CS_1006, 0, sizeof l_CS_1006);
l_CS_1006 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1007; memset(&l_T_1007, 0, sizeof l_T_1007);
l_T_1007 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_1008; memset(&l_CN_1008, 0, sizeof l_CN_1008);
if ((((*(R18 *)rt_nil_check(l_CS_1006))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_1008, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_1008, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1007), l_CN_1008));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1008, 0);
{ R10 rv1009 = l_CN_1008;
return rv1009; }
}
S_R10(&l_CN_1008, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1008, 0);
if (((*(R18 *)rt_nil_check(l_CS_1006))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1007), l_CN_1008), &((*(R18 *)rt_nil_check(l_CS_1006))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1008), 0);
{ R10 rv1010 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1010; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1007), l_CN_1008, l_CN_1008, l_CN_1008));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1008, 0);
{ R10 rv1011 = l_CN_1008;
return rv1011; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_1012; memset(&l_T_1012, 0, sizeof l_T_1012);
l_T_1012 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_1013; memset(&l_N_1013, 0, sizeof l_N_1013);
l_N_1013 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_1014; memset(&l_V_1014, 0, sizeof l_V_1014);
rt_int l_HAVE_V_1015; memset(&l_HAVE_V_1015, 0, sizeof l_HAVE_V_1015);
l_HAVE_V_1015 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1012))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1012))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1013 == NULL)) goto L_end1016;
{
{
R12 * l_Y_1017; memset(&l_Y_1017, 0, sizeof l_Y_1017);
l_Y_1017 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_1013))).f_NAME);
R10 l_CN_1018; memset(&l_CN_1018, 0, sizeof l_CN_1018);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1017))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1017))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1012) && (((*(R22 *)rt_nil_check(l_T_1012))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1019; memset(&l_M_1019, 0, sizeof l_M_1019);
S_R23(&l_M_1019, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1017))).f_HASMV = (l_M_1019).f_OK;
((*(R12 *)rt_nil_check(l_Y_1017))).f_MV = (l_M_1019).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1017))).f_T = l_T_1012;
S_R10(&l_CN_1018, r_NEW_OBJECT(l_Y_1017, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1012))
{
r_CODE(r_INIT_CODE(l_T_1012, l_CN_1018));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1015))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1014, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_1012), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1015 = 1;
}
r_CODE(r_STORE_CODE(l_T_1012, l_CN_1018, l_V_1014, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1017, ((*(R21 *)rt_nil_check(l_N_1013))).f_LINE);
}
l_N_1013 = ((*(R21 *)rt_nil_check(l_N_1013))).f_NEXT;
}
RT_B_TICK();
} L_end1016: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1020 = ({ R26 rc1021; memset(&rc1021, 0, sizeof rc1021);  S_R10(&rc1021.f_C, p_C, 0); rc1021.f_T = p_T; rc1021.f_LVAL = 0; S_R10(&rc1021.f_SELF, r_NO_TEXT(), 0); rc1021; });
return rv1020; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv1022 = ({ R26 rc1023; memset(&rc1023, 0, sizeof rc1023);  S_R10(&rc1023.f_C, p_C, 0); rc1023.f_T = p_T; rc1023.f_LVAL = p_LVAL; S_R10(&rc1023.f_SELF, p_SELF, 0); rc1023; });
return rv1022; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1024; memset(&l_T_1024, 0, sizeof l_T_1024);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1025 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1025; }
}
l_T_1024 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1024))).f_SCALE = p_SCALE;
{ R22 * rv1026 = l_T_1024;
return rv1026; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1027; memset(&l_T_1027, 0, sizeof l_T_1027);
l_T_1027 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_1027))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1027))).f_MLEN, p_M, 0);
{ R22 * rv1028 = l_T_1027;
return rv1028; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_1029; memset(&l_S_1029, 0, sizeof l_S_1029);
l_S_1029 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1029, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1030; memset(&l_AT_1030, 0, sizeof l_AT_1030);
l_AT_1030 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_1031; memset(&l_R_1031, 0, sizeof l_R_1031);
S_R10(&l_R_1031, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1033_lo = ((rt_int)0LL), it1033_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1033 = it1033_lo; it1033 <= it1033_hi; it1033++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1029, it1033, it1033), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1029, it1033, it1033), rt_str("\\", 1))))
{
S_R10(&l_R_1031, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1029, it1033, it1033))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1029, it1033, it1033), rt_str("\?", 1)))
{
S_R10(&l_R_1031, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1034; memset(&l_C_1034, 0, sizeof l_C_1034);
l_C_1034 = r_CODE_OF(rt_b_slice(l_S_1029, it1033, it1033));
if (({ rt_int iv1035 = l_C_1034; (((rt_int)32LL) <= iv1035) && (iv1035 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_1031, r_MK(rt_b_slice(l_S_1029, it1033, it1033)), 0);
}
else
{
S_R10(&l_R_1031, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1034, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1034, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1034, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1033 == it1033_hi) break;
} } L_end1032: ;
S_R10(&l_R_1031, r_MK(rt_str("\"", 1)), 0);
{ R10 rv1036 = ({ R10 rc1037; memset(&rc1037, 0, sizeof rc1037);  rc1037.f_AT = l_AT_1030; rc1037.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1030); rc1037.f_H = rt_neg(((rt_int)1LL)); rc1037; });
return rv1036; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_1038; memset(&l_K_1038, 0, sizeof l_K_1038);
l_K_1038 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1039; memset(&l_NO_1039, 0, sizeof l_NO_1039);
S_R23(&l_NO_1039, ({ R23 rc1040; memset(&rc1040, 0, sizeof rc1040);  rc1040.f_OK = 0; rc1040.f_V = ((rt_int)0LL); rc1040; }), 0);
if ((l_K_1038 == g_N_INT))
{
{ R23 rv1041 = ({ R23 rc1042; memset(&rc1042, 0, sizeof rc1042);  rc1042.f_OK = 1; rc1042.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1042; });
return rv1041; }
}
else if ((l_K_1038 == g_N_PAREN))
{
{ R23 rv1043 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv1043; }
}
else if ((l_K_1038 == g_N_BOOL))
{
{ R23 rv1044 = ({ R23 rc1045; memset(&rc1045, 0, sizeof rc1045);  rc1045.f_OK = 1; rc1045.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1045; });
return rv1044; }
}
else if ((l_K_1038 == g_N_UNOP))
{
{
R23 l_A_1046; memset(&l_A_1046, 0, sizeof l_A_1046);
S_R23(&l_A_1046, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1046).f_OK))
{
{ R23 rv1047 = l_NO_1039;
return rv1047; }
}
{ R23 rv1048 = ({ R23 rc1049; memset(&rc1049, 0, sizeof rc1049);  rc1049.f_OK = 1; rc1049.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1046).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1049; });
return rv1048; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1050 = l_A_1046;
return rv1050; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1051 = ({ R23 rc1052; memset(&rc1052, 0, sizeof rc1052);  rc1052.f_OK = (l_A_1046).f_OK; rc1052.f_V = rt_sub(((rt_int)1LL), (l_A_1046).f_V); rc1052; });
return rv1051; }
}
}
}
else if ((l_K_1038 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1053 = l_NO_1039;
return rv1053; }
}
{
R23 l_A_1054; memset(&l_A_1054, 0, sizeof l_A_1054);
S_R23(&l_A_1054, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1055; memset(&l_B_1055, 0, sizeof l_B_1055);
S_R23(&l_B_1055, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1056; memset(&l_OP_1056, 0, sizeof l_OP_1056);
S_R10(&l_OP_1056, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1056, rt_str("&", 1)))
{
if (((((l_A_1054).f_OK && ((l_A_1054).f_V == ((rt_int)0LL)))) || (((l_B_1055).f_OK && ((l_B_1055).f_V == ((rt_int)0LL))))))
{
{ R23 rv1057 = ({ R23 rc1058; memset(&rc1058, 0, sizeof rc1058);  rc1058.f_OK = 1; rc1058.f_V = ((rt_int)0LL); rc1058; });
return rv1057; }
}
if (((l_A_1054).f_OK && (l_B_1055).f_OK))
{
{ R23 rv1059 = ({ R23 rc1060; memset(&rc1060, 0, sizeof rc1060);  rc1060.f_OK = 1; rc1060.f_V = ((rt_int)1LL); rc1060; });
return rv1059; }
}
{ R23 rv1061 = l_NO_1039;
return rv1061; }
}
else if (r_TEQS(l_OP_1056, rt_str("!", 1)))
{
if (((((l_A_1054).f_OK && ((l_A_1054).f_V == ((rt_int)1LL)))) || (((l_B_1055).f_OK && ((l_B_1055).f_V == ((rt_int)1LL))))))
{
{ R23 rv1062 = ({ R23 rc1063; memset(&rc1063, 0, sizeof rc1063);  rc1063.f_OK = 1; rc1063.f_V = ((rt_int)1LL); rc1063; });
return rv1062; }
}
if (((l_A_1054).f_OK && (l_B_1055).f_OK))
{
{ R23 rv1064 = ({ R23 rc1065; memset(&rc1065, 0, sizeof rc1065);  rc1065.f_OK = 1; rc1065.f_V = ((rt_int)0LL); rc1065; });
return rv1064; }
}
{ R23 rv1066 = l_NO_1039;
return rv1066; }
}
if ((!(((l_A_1054).f_OK && (l_B_1055).f_OK))))
{
{ R23 rv1067 = l_NO_1039;
return rv1067; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1068 = l_NO_1039;
return rv1068; }
}
if (((r_TEQS(l_OP_1056, rt_str("+", 1)) || r_TEQS(l_OP_1056, rt_str("-", 1))) || r_TEQS(l_OP_1056, rt_str("*", 1))))
{
{ R23 rv1069 = ({ R23 rc1070; memset(&rc1070, 0, sizeof rc1070);  rc1070.f_OK = 1; rc1070.f_V = r_MANIFEST_ARITH(l_OP_1056, (l_A_1054).f_V, (l_B_1055).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1070; });
return rv1069; }
}
else if ((r_TEQS(l_OP_1056, rt_str("//", 2)) && (!((l_B_1055).f_V == ((rt_int)0LL)))))
{
{ R23 rv1071 = ({ R23 rc1072; memset(&rc1072, 0, sizeof rc1072);  rc1072.f_OK = 1; rc1072.f_V = rt_quot((l_A_1054).f_V, (l_B_1055).f_V); rc1072; });
return rv1071; }
}
else if ((r_TEQS(l_OP_1056, rt_str("MOD", 3)) && (!((l_B_1055).f_V == ((rt_int)0LL)))))
{
{ R23 rv1073 = ({ R23 rc1074; memset(&rc1074, 0, sizeof rc1074);  rc1074.f_OK = 1; rc1074.f_V = rt_rem((l_A_1054).f_V, (l_B_1055).f_V); rc1074; });
return rv1073; }
}
else if (r_TEQS(l_OP_1056, rt_str("=", 1)))
{
{ R23 rv1075 = ({ R23 rc1076; memset(&rc1076, 0, sizeof rc1076);  rc1076.f_OK = 1; rc1076.f_V = r_BOOL_INT(((l_A_1054).f_V == (l_B_1055).f_V)); rc1076; });
return rv1075; }
}
else if (r_TEQS(l_OP_1056, rt_str("<>", 2)))
{
{ R23 rv1077 = ({ R23 rc1078; memset(&rc1078, 0, sizeof rc1078);  rc1078.f_OK = 1; rc1078.f_V = r_BOOL_INT((!((l_A_1054).f_V == (l_B_1055).f_V))); rc1078; });
return rv1077; }
}
else if (r_TEQS(l_OP_1056, rt_str("<", 1)))
{
{ R23 rv1079 = ({ R23 rc1080; memset(&rc1080, 0, sizeof rc1080);  rc1080.f_OK = 1; rc1080.f_V = r_BOOL_INT(((l_A_1054).f_V < (l_B_1055).f_V)); rc1080; });
return rv1079; }
}
else if (r_TEQS(l_OP_1056, rt_str(">", 1)))
{
{ R23 rv1081 = ({ R23 rc1082; memset(&rc1082, 0, sizeof rc1082);  rc1082.f_OK = 1; rc1082.f_V = r_BOOL_INT(((l_A_1054).f_V > (l_B_1055).f_V)); rc1082; });
return rv1081; }
}
else if (r_TEQS(l_OP_1056, rt_str("<=", 2)))
{
{ R23 rv1083 = ({ R23 rc1084; memset(&rc1084, 0, sizeof rc1084);  rc1084.f_OK = 1; rc1084.f_V = r_BOOL_INT(((l_A_1054).f_V <= (l_B_1055).f_V)); rc1084; });
return rv1083; }
}
else if (r_TEQS(l_OP_1056, rt_str(">=", 2)))
{
{ R23 rv1085 = ({ R23 rc1086; memset(&rc1086, 0, sizeof rc1086);  rc1086.f_OK = 1; rc1086.f_V = r_BOOL_INT(((l_A_1054).f_V >= (l_B_1055).f_V)); rc1086; });
return rv1085; }
}
}
}
else if ((l_K_1038 == g_N_IN))
{
{
R23 l_A_1087; memset(&l_A_1087, 0, sizeof l_A_1087);
S_R23(&l_A_1087, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1088; memset(&l_L_1088, 0, sizeof l_L_1088);
S_R23(&l_L_1088, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1089; memset(&l_U_1089, 0, sizeof l_U_1089);
S_R23(&l_U_1089, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1090; memset(&l_LO_1090, 0, sizeof l_LO_1090);
rt_int l_HI_1091; memset(&l_HI_1091, 0, sizeof l_HI_1091);
if ((!(((((l_A_1087).f_OK && (l_L_1088).f_OK) && (l_U_1089).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1092 = l_NO_1039;
return rv1092; }
}
l_LO_1090 = (l_L_1088).f_V;
l_HI_1091 = (l_U_1089).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1090 = rt_add(l_LO_1090, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1091 = rt_sub(l_HI_1091, ((rt_int)1LL));
}
{ R23 rv1093 = ({ R23 rc1094; memset(&rc1094, 0, sizeof rc1094);  rc1094.f_OK = 1; rc1094.f_V = r_BOOL_INT((((l_A_1087).f_V >= l_LO_1090) && ((l_A_1087).f_V <= l_HI_1091))); rc1094; });
return rv1093; }
}
}
else if (((l_K_1038 == g_N_NAME) || (l_K_1038 == g_TS_GEN)))
{
{
R12 * l_Y_1095; memset(&l_Y_1095, 0, sizeof l_Y_1095);
l_Y_1095 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1096; memset(&l_B_1096, 0, sizeof l_B_1096);
l_B_1096 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1096 == NULL)) goto L_end1097;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1096))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1096))).f_HASMV))
{
{ R23 rv1098 = ({ R23 rc1099; memset(&rc1099, 0, sizeof rc1099);  rc1099.f_OK = 1; rc1099.f_V = ((*(R20 *)rt_nil_check(l_B_1096))).f_MV; rc1099; });
return rv1098; }
}
l_B_1096 = ((*(R20 *)rt_nil_check(l_B_1096))).f_NEXT;
}
RT_B_TICK();
} L_end1097: ;
if ((!(l_Y_1095 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1095))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1095))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1095))).f_HASMV))
{
{ R23 rv1100 = ({ R23 rc1101; memset(&rc1101, 0, sizeof rc1101);  rc1101.f_OK = 1; rc1101.f_V = ((*(R12 *)rt_nil_check(l_Y_1095))).f_MV; rc1101; });
return rv1100; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1095))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1102 = ({ R23 rc1103; memset(&rc1103, 0, sizeof rc1103);  rc1103.f_OK = 1; rc1103.f_V = ((*(R12 *)rt_nil_check(l_Y_1095))).f_MV; rc1103; });
return rv1102; }
}
}
}
}
}
else if ((l_K_1038 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1104 = ({ R23 rc1105; memset(&rc1105, 0, sizeof rc1105);  rc1105.f_OK = 1; rc1105.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1105; });
return rv1104; }
}
}
else if ((l_K_1038 == g_N_FIELD))
{
{ R23 rv1106 = r_ATTR_MANIFEST(p_E);
return rv1106; }
}
else if ((l_K_1038 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1107 = ({ R23 rc1108; memset(&rc1108, 0, sizeof rc1108);  rc1108.f_OK = 1; rc1108.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1108; });
return rv1107; }
}
}
{ R23 rv1109 = l_NO_1039;
return rv1109; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1110; memset(&l_A_1110, 0, sizeof l_A_1110);
l_A_1110 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1111; memset(&l_NAME_1111, 0, sizeof l_NAME_1111);
S_R10(&l_NAME_1111, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1112; memset(&l_T_1112, 0, sizeof l_T_1112);
l_T_1112 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1110))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1113; memset(&l_INNER_1113, 0, sizeof l_INNER_1113);
l_INNER_1113 = ((*(R21 *)rt_nil_check(l_A_1110))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1113))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1111, rt_str("MAX", 3)))
{
{ R23 rv1114 = r_SOME(r_MAX_LENGTH());
return rv1114; }
}
else if (r_TEQS(l_NAME_1111, rt_str("MIN", 3)))
{
{ R23 rv1115 = r_SOME(((rt_int)0LL));
return rv1115; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1113))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1113))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1111, rt_str("MAX", 3)))
{
{ R23 rv1116 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1116; }
}
else if (r_TEQS(l_NAME_1111, rt_str("MIN", 3)))
{
{ R23 rv1117 = r_SOME(((rt_int)1LL));
return rv1117; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1113))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1111, rt_str("MAX", 3)))
{
{ R23 rv1118 = r_SOME(((rt_int)1000LL));
return rv1118; }
}
else if (r_TEQS(l_NAME_1111, rt_str("MIN", 3)))
{
{ R23 rv1119 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1119; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1113))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1111, rt_str("MAX", 3)))
{
{ R23 rv1120 = r_SOME(((rt_int)1000LL));
return rv1120; }
}
else if (r_TEQS(l_NAME_1111, rt_str("MIN", 3)))
{
{ R23 rv1121 = r_SOME(((rt_int)2LL));
return rv1121; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1122; memset(&l_Y_1122, 0, sizeof l_Y_1122);
l_Y_1122 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1110))).f_NAME);
if ((l_Y_1122 == NULL))
{
{ R23 rv1123 = r_NO_MVAL();
return rv1123; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1122))).f_KIND == g_Y_TYPE))
{
l_T_1112 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1110))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1110))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1122))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1122))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1122))).f_KIND == g_Y_GEN)))
{
l_T_1112 = ((*(R12 *)rt_nil_check(l_Y_1122))).f_T;
}
else
{
{ R23 rv1124 = r_NO_MVAL();
return rv1124; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1111, rt_str("MIN", 3)) || r_TEQS(l_NAME_1111, rt_str("MAX", 3))))
{
{ R23 rv1125 = r_SOME(((*(R21 *)rt_nil_check(l_A_1110))).f_IV);
return rv1125; }
}
l_T_1112 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1110))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1110))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1111, rt_str("MIN", 3)) || r_TEQS(l_NAME_1111, rt_str("MAX", 3))))))
{
{ R23 rv1126 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1110))).f_A))).f_IV);
return rv1126; }
}
}
{
R14 l_SAVED_CODE_1127; memset(&l_SAVED_CODE_1127, 0, sizeof l_SAVED_CODE_1127);
S_R14(&l_SAVED_CODE_1127, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1128; memset(&rc1128, 0, sizeof rc1128);  rc1128.f_HEAD = NULL; rc1128.f_TAIL = NULL; rc1128; }), 0);
l_T_1112 = (r_EXPR(l_A_1110, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1127, 0);
}
}
else
{
{ R23 rv1129 = r_NO_MVAL();
return rv1129; }
}
if ((l_T_1112 == NULL))
{
{ R23 rv1130 = r_NO_MVAL();
return rv1130; }
}
{ R23 rv1131 = r_TYPE_ATTR_MANIFEST(l_T_1112, l_NAME_1111);
return rv1131; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1132; memset(&l_T_1132, 0, sizeof l_T_1132);
l_T_1132 = r_REAL_TYPE(p_T0);
rt_int l_K_1133; memset(&l_K_1133, 0, sizeof l_K_1133);
l_K_1133 = ((*(R22 *)rt_nil_check(l_T_1132))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1134 = r_STATIC_SIZE(p_T0);
return rv1134; }
}
if ((l_K_1133 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1135 = r_SOME(((*(R22 *)rt_nil_check(l_T_1132))).f_SCALE);
return rv1135; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1136 = r_SOME(((rt_int)2LL));
return rv1136; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1132))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1137 = ((*(R22 *)rt_nil_check(l_T_1132))).f_MLO;
return rv1137; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1132))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1138 = ((*(R22 *)rt_nil_check(l_T_1132))).f_MHI;
return rv1138; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1132))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1139 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1139; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1132))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1140 = r_SOME(INT64_MAX);
return rv1140; }
}
}
else if ((l_K_1133 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1141 = r_SOME(((*(R22 *)rt_nil_check(l_T_1132))).f_SCALE);
return rv1141; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1142 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1132))).f_SCALE));
return rv1142; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1143 = r_SOME(((rt_int)2LL));
return rv1143; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1144 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1132))).f_SCALE, p_NAME));
return rv1144; }
}
}
else if ((l_K_1133 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1132))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1145 = ((*(R22 *)rt_nil_check(l_T_1132))).f_MLO;
return rv1145; }
}
{ R23 rv1146 = r_SOME(((rt_int)0LL));
return rv1146; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1132))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1147 = ((*(R22 *)rt_nil_check(l_T_1132))).f_MHI;
return rv1147; }
}
{ R23 rv1148 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1132))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1148; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1132))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1149 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1132))).f_BASE))).f_NLITS);
return rv1149; }
}
if (((((*(R22 *)rt_nil_check(l_T_1132))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1132))).f_MHI).f_OK))
{
{ R23 rv1150 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1132))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1132))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1150; }
}
}
}
else if (((l_K_1133 == g_T_STR) || (l_K_1133 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1151 = ((*(R22 *)rt_nil_check(l_T_1132))).f_MLEN;
return rv1151; }
}
}
else if ((l_K_1133 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1152 = r_SOME(((*(R22 *)rt_nil_check(l_T_1132))).f_DIMS);
return rv1152; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1132))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1132))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1132))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1153 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1132))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1132))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1153; }
}
}
}
else if ((l_K_1133 == g_T_REC))
{
{
R24 * l_F_1154; memset(&l_F_1154, 0, sizeof l_F_1154);
l_F_1154 = ((*(R22 *)rt_nil_check(l_T_1132))).f_FIELDS;
R25 * l_B_1155; memset(&l_B_1155, 0, sizeof l_B_1155);
l_B_1155 = ((*(R22 *)rt_nil_check(l_T_1132))).f_ARGS;
for (;;) {
if (((l_F_1154 == NULL) || (l_B_1155 == NULL))) goto L_end1156;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1154))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1154))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1155))).f_ANYARG)
{
{ R23 rv1157 = r_NO_MVAL();
return rv1157; }
}
{ R23 rv1158 = ((*(R25 *)rt_nil_check(l_B_1155))).f_MLO;
return rv1158; }
}
l_B_1155 = ((*(R25 *)rt_nil_check(l_B_1155))).f_NEXT;
}
l_F_1154 = ((*(R24 *)rt_nil_check(l_F_1154))).f_NEXT;
}
RT_B_TICK();
} L_end1156: ;
}
}
{ R23 rv1159 = r_NO_MVAL();
return rv1159; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1160 = ((rt_int)0LL);
{ rt_frame xf1161; if (RT_TRY(xf1161)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1160 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1160 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1160 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1161); } else { RT_POP(xf1161); int xf1161x = rt_xcur;
if (0 || xf1161x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1161x); } }
{ rt_int rv1162 = F->l_R_1160;
return rv1162; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1163 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1163; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1164 = ((rt_int)1LL);
return rv1164; }
}
{ rt_int rv1165 = ((rt_int)0LL);
return rv1165; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1166; memset(&l_K_1166, 0, sizeof l_K_1166);
l_K_1166 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1166 == g_N_INT))
{
{ R26 rv1167 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1167; }
}
else if ((l_K_1166 == g_N_REAL))
{
{ R26 rv1168 = r_REAL_LITERAL(p_E);
return rv1168; }
}
else if ((l_K_1166 == g_N_BOOL))
{
{ R26 rv1169 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1169; }
}
else if ((l_K_1166 == g_N_NIL))
{
{ R26 rv1170 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1170; }
}
else if ((l_K_1166 == g_N_PAREN))
{
{
R26 l_V_1171; memset(&l_V_1171, 0, sizeof l_V_1171);
S_R26(&l_V_1171, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1171).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1171).f_C), 0);
{ R26 rv1172 = l_V_1171;
return rv1172; }
}
}
else if ((l_K_1166 == g_N_STR))
{
{ R26 rv1173 = r_STRING_LITERAL(p_E);
return rv1173; }
}
else if ((l_K_1166 == g_N_BITS))
{
{ R26 rv1174 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1174; }
}
else if ((l_K_1166 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1175 = r_NAME_EXPR(p_E, p_WANT);
return rv1175; }
}
{ R26 rv1176 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1176; }
}
else if ((l_K_1166 == g_N_RECCONS))
{
{ R26 rv1177 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1177; }
}
else if ((l_K_1166 == g_N_ARRCONS))
{
{ R26 rv1178 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1178; }
}
else if ((l_K_1166 == g_N_TYPESPEC))
{
{ R26 rv1179 = r_TYPE_SPECIFIER(p_E);
return rv1179; }
}
else if ((l_K_1166 == g_N_QUAL))
{
{
rt_int l_SAVED_1180; memset(&l_SAVED_1180, 0, sizeof l_SAVED_1180);
l_SAVED_1180 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1181; memset(&l_SAVED_Q_1181, 0, sizeof l_SAVED_Q_1181);
l_SAVED_Q_1181 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1182; memset(&l_V_1182, 0, sizeof l_V_1182);
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
R23 l_P_1183; memset(&l_P_1183, 0, sizeof l_P_1183);
S_R23(&l_P_1183, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1182, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1180;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1181;
{ R26 rv1184 = l_V_1182;
return rv1184; }
}
}
else if ((l_K_1166 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1185; memset(&l_N_1185, 0, sizeof l_N_1185);
l_N_1185 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1185))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1185))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1186 = r_EXPR(l_N_1185, p_WANT);
return rv1186; }
}
}
{ R26 rv1187 = r_NEW_EXPR(p_E, p_WANT);
return rv1187; }
}
else if ((l_K_1166 == g_N_NAME))
{
{ R26 rv1188 = r_NAME_EXPR(p_E, p_WANT);
return rv1188; }
}
else if ((l_K_1166 == g_N_APPLY))
{
{
R12 * l_Y_1189; memset(&l_Y_1189, 0, sizeof l_Y_1189);
l_Y_1189 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1189 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1189))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1189))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1190; memset(&l_N_1190, 0, sizeof l_N_1190);
l_N_1190 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1191; memset(&l_A_1191, 0, sizeof l_A_1191);
l_A_1191 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1191))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1190))).f_A = l_A_1191;
((*(R21 *)rt_nil_check(l_N_1190))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1192 = r_EXPR(l_N_1190, p_WANT);
return rv1192; }
}
}
}
{ R26 rv1193 = r_CALL_EXPR(p_E, p_WANT);
return rv1193; }
}
}
else if ((l_K_1166 == g_N_FIELD))
{
{ R26 rv1194 = r_FIELD_EXPR(p_E);
return rv1194; }
}
else if ((l_K_1166 == g_N_DEREF))
{
{
R26 l_B_1195; memset(&l_B_1195, 0, sizeof l_B_1195);
S_R26(&l_B_1195, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1195).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1196; memset(&l_TT_1196, 0, sizeof l_TT_1196);
l_TT_1196 = r_TARGET((l_B_1195).f_T);
{ R26 rv1197 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1196), (l_B_1195).f_C), l_TT_1196, 1, r_NO_TEXT());
return rv1197; }
}
}
}
else if ((l_K_1166 == g_N_INDEX))
{
{ R26 rv1198 = r_INDEX_EXPR(p_E);
return rv1198; }
}
else if ((l_K_1166 == g_N_SUBSTR))
{
{
R26 l_B_1199; memset(&l_B_1199, 0, sizeof l_B_1199);
S_R26(&l_B_1199, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1200; memset(&l_BT_1200, 0, sizeof l_BT_1200);
l_BT_1200 = r_REAL_TYPE((l_B_1199).f_T);
R10 l_LO_1201; memset(&l_LO_1201, 0, sizeof l_LO_1201);
R10 l_HI_1202; memset(&l_HI_1202, 0, sizeof l_HI_1202);
if (((((*(R22 *)rt_nil_check((l_B_1199).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1203; memset(&l_ARGS_1203, 0, sizeof l_ARGS_1203);
l_ARGS_1203 = r_VAL_ARG(l_B_1199, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1204; memset(&l_Y_1204, 0, sizeof l_Y_1204);
l_Y_1204 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1203, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1204 == NULL)))
{
{ R26 rv1205 = r_CALL_SYM(l_Y_1204, l_ARGS_1203, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1205; }
}
if ((((*(R22 *)rt_nil_check((l_B_1199).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1200))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1200))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1201, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1202, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1200))).f_KIND == g_T_BITS))
{
{ R26 rv1206 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1199).f_C, l_LO_1201, l_HI_1202), r_BITS_TYPE(((rt_int)1LL)));
return rv1206; }
}
{
R22 * l_T_1207; memset(&l_T_1207, 0, sizeof l_T_1207);
l_T_1207 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1207))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1200))).f_BASE;
{ R26 rv1208 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1199).f_C, l_LO_1201, l_HI_1202), l_T_1207);
return rv1208; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1200))).f_KIND == g_T_BITS))
{
{ R26 rv1209 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1199).f_C, l_LO_1201, l_HI_1202), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1209; }
}
{
R22 * l_T_1210; memset(&l_T_1210, 0, sizeof l_T_1210);
l_T_1210 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1210))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1200))).f_BASE;
{ R26 rv1211 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1199).f_C, l_LO_1201, l_HI_1202), l_T_1210);
return rv1211; }
}
}
}
else if ((l_K_1166 == g_N_UNOP))
{
{ R26 rv1212 = r_UNARY(p_E);
return rv1212; }
}
else if ((l_K_1166 == g_N_BINOP))
{
{ R26 rv1213 = r_BINARY(p_E);
return rv1213; }
}
else if ((l_K_1166 == g_N_IN))
{
{ R26 rv1214 = r_IN_EXPR(p_E);
return rv1214; }
}
else if (((l_K_1166 == g_N_ANY) || (l_K_1166 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1166 == g_TS_GEN))
{
{
R21 * l_N_1215; memset(&l_N_1215, 0, sizeof l_N_1215);
l_N_1215 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1215))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1215))).f_NAME))
{
{ R26 rv1216 = r_NAME_EXPR(l_N_1215, p_WANT);
return rv1216; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1166 == g_TS_NAME) || (l_K_1166 == g_TS_ARRAY)) || (l_K_1166 == g_TS_RECORD)) || (l_K_1166 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1217; memset(&l_SAVED_1217, 0, sizeof l_SAVED_1217);
l_SAVED_1217 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1218; memset(&l_SAVED_Q_1218, 0, sizeof l_SAVED_Q_1218);
l_SAVED_Q_1218 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1219; memset(&l_V_1219, 0, sizeof l_V_1219);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1219, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1217;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1218;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1219).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1220 = (l_V_1219).f_C;
return rv1220; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1219).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1219).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1219).f_T));
}
{ R10 rv1221 = (l_V_1219).f_C;
return rv1221; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1222; memset(&l_V_1222, 0, sizeof l_V_1222);
S_R26(&l_V_1222, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1222).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1222).f_T));
}
{ R10 rv1223 = (l_V_1222).f_C;
return rv1223; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1224; memset(&l_T_1224, 0, sizeof l_T_1224);
l_T_1224 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1224))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1224))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1225 = l_T_1224;
return rv1225; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1226; memset(&l_T_1226, 0, sizeof l_T_1226);
S_R10(&l_T_1226, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1227; memset(&l_S_1227, 0, sizeof l_S_1227);
l_S_1227 = rt_b_str_new((l_T_1226).f_LEN, 0);
rt_b_assign(&l_S_1227, r_STR(l_T_1226, (l_T_1226).f_LEN));
rt_int l_POINT_1228; memset(&l_POINT_1228, 0, sizeof l_POINT_1228);
l_POINT_1228 = 0;
rt_int l_DIGITS_1229; memset(&l_DIGITS_1229, 0, sizeof l_DIGITS_1229);
l_DIGITS_1229 = ((rt_int)0LL);
{ rt_int it1231_lo = ((rt_int)0LL), it1231_hi = rt_sub((l_T_1226).f_LEN, ((rt_int)1LL));
for (rt_int it1231 = it1231_lo; it1231 <= it1231_hi; it1231++) {
{
if (rt_b_eq(rt_b_slice(l_S_1227, it1231, it1231), rt_str(".", 1)))
{
l_POINT_1228 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1227, it1231, it1231), rt_str("E", 1)))
{
goto L_end1230;
}
else
{
l_DIGITS_1229 = rt_add(l_DIGITS_1229, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1231 == it1231_hi) break;
} } L_end1230: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1228)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1232 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1226), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1232; }
}
if ((!l_POINT_1228))
{
{ R26 rv1233 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1226)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1233; }
}
{
R22 * l_F_1234; memset(&l_F_1234, 0, sizeof l_F_1234);
l_F_1234 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1235; memset(&l_C_1235, 0, sizeof l_C_1235);
S_R10(&l_C_1235, l_T_1226, 0);
((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE = r_MAX_INT(l_DIGITS_1229, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1227, rt_sub((l_T_1226).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1226).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1235, r_FMT1(rt_str("@0", 2), l_T_1226), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1227, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1235, r_FMT1(rt_str("0@", 2), l_T_1226), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1234))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1236 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1235), l_F_1234);
return rv1236; }
}
{ R26 rv1237 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1235), l_F_1234);
return rv1237; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1238; memset(&l_T_1238, 0, sizeof l_T_1238);
S_R10(&l_T_1238, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1239; memset(&l_S_1239, 0, sizeof l_S_1239);
l_S_1239 = rt_b_str_new((l_T_1238).f_LEN, 0);
rt_b_assign(&l_S_1239, r_STR(l_T_1238, (l_T_1238).f_LEN));
rt_int l_INT_1240; memset(&l_INT_1240, 0, sizeof l_INT_1240);
l_INT_1240 = ((rt_int)0LL);
rt_int l_SIG_1241; memset(&l_SIG_1241, 0, sizeof l_SIG_1241);
l_SIG_1241 = 0;
rt_int l_POINT_1242; memset(&l_POINT_1242, 0, sizeof l_POINT_1242);
l_POINT_1242 = 0;
rt_int l_LEAD_1243; memset(&l_LEAD_1243, 0, sizeof l_LEAD_1243);
l_LEAD_1243 = ((rt_int)0LL);
rt_int l_I_1244; memset(&l_I_1244, 0, sizeof l_I_1244);
l_I_1244 = ((rt_int)0LL);
rt_int l_EXP_1245; memset(&l_EXP_1245, 0, sizeof l_EXP_1245);
l_EXP_1245 = ((rt_int)0LL);
for (;;) {
if ((l_I_1244 >= (l_T_1238).f_LEN)) goto L_end1246;
{
if (rt_b_eq(rt_b_slice(l_S_1239, l_I_1244, l_I_1244), rt_str("E", 1)))
{
goto L_end1246;
}
else if (rt_b_eq(rt_b_slice(l_S_1239, l_I_1244, l_I_1244), rt_str(".", 1)))
{
l_POINT_1242 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1239, l_I_1244, l_I_1244), rt_str("0", 1))))
{
if ((!l_POINT_1242))
{
l_INT_1240 = rt_add(l_INT_1240, ((rt_int)1LL));
}
l_SIG_1241 = 1;
}
else if ((l_SIG_1241 && (!l_POINT_1242)))
{
l_INT_1240 = rt_add(l_INT_1240, ((rt_int)1LL));
}
else if ((l_POINT_1242 && (!l_SIG_1241)))
{
l_LEAD_1243 = rt_add(l_LEAD_1243, ((rt_int)1LL));
}
l_I_1244 = rt_add(l_I_1244, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1246: ;
if ((!l_SIG_1241))
{
{ rt_int rv1247 = 1;
return rv1247; }
}
if ((l_I_1244 < (l_T_1238).f_LEN))
{
{
rt_int l_NEG_1248; memset(&l_NEG_1248, 0, sizeof l_NEG_1248);
l_NEG_1248 = 0;
l_I_1244 = rt_add(l_I_1244, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1239, l_I_1244, l_I_1244), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1239, l_I_1244, l_I_1244), rt_str("+", 1))))
{
l_NEG_1248 = rt_b_eq(rt_b_slice(l_S_1239, l_I_1244, l_I_1244), rt_str("-", 1));
l_I_1244 = rt_add(l_I_1244, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1244 >= (l_T_1238).f_LEN)) goto L_end1249;
{
if ((l_EXP_1245 <= ((rt_int)100000LL)))
{
l_EXP_1245 = rt_add(rt_mul(l_EXP_1245, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1239, l_I_1244, l_I_1244)), ((rt_int)48LL))));
}
l_I_1244 = rt_add(l_I_1244, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1249: ;
if (l_NEG_1248)
{
l_EXP_1245 = rt_neg(l_EXP_1245);
}
}
}
{
rt_int l_D_1250; memset(&l_D_1250, 0, sizeof l_D_1250);
l_D_1250 = rt_add(rt_sub(l_INT_1240, ((rt_int)1LL)), l_EXP_1245);
rt_int l_LIM_1251; memset(&l_LIM_1251, 0, sizeof l_LIM_1251);
l_LIM_1251 = ((rt_int)308LL);
if ((l_INT_1240 == ((rt_int)0LL)))
{
l_D_1250 = rt_add(rt_sub(rt_neg(l_LEAD_1243), ((rt_int)1LL)), l_EXP_1245);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1251 = ((rt_int)38LL);
}
{ rt_int rv1252 = ((l_D_1250 <= l_LIM_1251) && (l_D_1250 >= rt_add(rt_neg(l_LIM_1251), ((rt_int)1LL))));
return rv1252; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1253; memset(&l_T_1253, 0, sizeof l_T_1253);
S_R10(&l_T_1253, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1254; memset(&l_S_1254, 0, sizeof l_S_1254);
l_S_1254 = rt_b_str_new((l_T_1253).f_LEN, 0);
rt_b_assign(&l_S_1254, r_STR(l_T_1253, (l_T_1253).f_LEN));
rt_int l_SIG_1255; memset(&l_SIG_1255, 0, sizeof l_SIG_1255);
l_SIG_1255 = ((rt_int)0LL);
rt_int l_FRAC_1256; memset(&l_FRAC_1256, 0, sizeof l_FRAC_1256);
l_FRAC_1256 = ((rt_int)0LL);
rt_int l_POINT_1257; memset(&l_POINT_1257, 0, sizeof l_POINT_1257);
l_POINT_1257 = 0;
rt_int l_EXP_1258; memset(&l_EXP_1258, 0, sizeof l_EXP_1258);
l_EXP_1258 = ((rt_int)0LL);
rt_int l_I_1259; memset(&l_I_1259, 0, sizeof l_I_1259);
l_I_1259 = ((rt_int)0LL);
for (;;) {
if ((l_I_1259 >= (l_T_1253).f_LEN)) goto L_end1260;
{
if (rt_b_eq(rt_b_slice(l_S_1254, l_I_1259, l_I_1259), rt_str("E", 1)))
{
goto L_end1260;
}
if (rt_b_eq(rt_b_slice(l_S_1254, l_I_1259, l_I_1259), rt_str(".", 1)))
{
l_POINT_1257 = 1;
}
else
{
if (((l_SIG_1255 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1254, l_I_1259, l_I_1259), rt_str("0", 1)))))
{
l_SIG_1255 = rt_add(l_SIG_1255, ((rt_int)1LL));
}
if (l_POINT_1257)
{
l_FRAC_1256 = rt_add(l_FRAC_1256, ((rt_int)1LL));
}
}
l_I_1259 = rt_add(l_I_1259, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1260: ;
if ((rt_sub(l_I_1259, r_BOOL_INT(l_POINT_1257)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1259 < (l_T_1253).f_LEN))
{
{
rt_int l_NEG_1261; memset(&l_NEG_1261, 0, sizeof l_NEG_1261);
l_NEG_1261 = 0;
l_I_1259 = rt_add(l_I_1259, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1254, l_I_1259, l_I_1259), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1254, l_I_1259, l_I_1259), rt_str("+", 1))))
{
l_NEG_1261 = rt_b_eq(rt_b_slice(l_S_1254, l_I_1259, l_I_1259), rt_str("-", 1));
l_I_1259 = rt_add(l_I_1259, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1259 >= (l_T_1253).f_LEN)) goto L_end1262;
{
if ((l_EXP_1258 <= ((rt_int)1000LL)))
{
l_EXP_1258 = rt_sub(rt_add(rt_mul(l_EXP_1258, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1254, l_I_1259, l_I_1259))), ((rt_int)48LL));
}
l_I_1259 = rt_add(l_I_1259, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1262: ;
if ((l_EXP_1258 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1261)
{
l_EXP_1258 = rt_neg(l_EXP_1258);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1255 > ((rt_int)0LL)))
{
{
rt_int l_P10_1263; memset(&l_P10_1263, 0, sizeof l_P10_1263);
l_P10_1263 = rt_sub(rt_add(rt_sub(l_SIG_1255, ((rt_int)1LL)), l_EXP_1258), l_FRAC_1256);
rt_int l_BITS_1264; memset(&l_BITS_1264, 0, sizeof l_BITS_1264);
l_BITS_1264 = rt_add(rt_quot((rt_mul(l_P10_1263, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1263 < ((rt_int)0LL)))
{
l_BITS_1264 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1263), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1264 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1265; memset(&l_CS_1265, 0, sizeof l_CS_1265);
l_CS_1265 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1266; memset(&l_P_1266, 0, sizeof l_P_1266);
l_P_1266 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1267; memset(&l_S_1267, 0, sizeof l_S_1267);
S_R10(&l_S_1267, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1265 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1268; memset(&l_Y_1268, 0, sizeof l_Y_1268);
l_Y_1268 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1268 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1268))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1265 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1265)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1265 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1265)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1265))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1266 == NULL)) goto L_end1269;
{
if ((((*(R21 *)rt_nil_check(l_P_1266))).f_IV == g_K_STR))
{
if ((l_CS_1265 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1267, r_CAT(l_S_1267, ((*(R21 *)rt_nil_check(l_P_1266))).f_NAME), 0);
}
else
{
{
R10 l_Q_1270; memset(&l_Q_1270, 0, sizeof l_Q_1270);
S_R10(&l_Q_1270, ((*(R21 *)rt_nil_check(l_P_1266))).f_NAME, 0);
rstr l_QS_1271; memset(&l_QS_1271, 0, sizeof l_QS_1271);
l_QS_1271 = rt_b_str_new((l_Q_1270).f_LEN, 0);
rt_b_assign(&l_QS_1271, r_STR(l_Q_1270, (l_Q_1270).f_LEN));
{ rt_int it1273_lo = ((rt_int)0LL), it1273_hi = rt_sub((l_Q_1270).f_LEN, ((rt_int)1LL));
for (rt_int it1273 = it1273_lo; it1273 <= it1273_hi; it1273++) {
{
{
R10 l_LIT_1274; memset(&l_LIT_1274, 0, sizeof l_LIT_1274);
R12 * l_Y_1275; memset(&l_Y_1275, 0, sizeof l_Y_1275);
if (rt_b_eq(rt_b_slice(l_QS_1271, it1273, it1273), rt_str("'", 1)))
{
S_R10(&l_LIT_1274, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1274, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1271, it1273, it1273)), rt_str("'", 1))), 0);
}
l_Y_1275 = r_FIND_LITERAL(l_LIT_1274, l_CS_1265);
if ((l_Y_1275 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1266))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1271, it1273, it1273)));
}
S_R10(&l_S_1267, r_CATS(l_S_1267, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1275))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1273 == it1273_hi) break;
} } L_end1272: ;
}
}
}
else
{
{
R12 * l_Y_1276; memset(&l_Y_1276, 0, sizeof l_Y_1276);
l_Y_1276 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1266))).f_NAME, l_CS_1265);
if ((l_Y_1276 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1266))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1266))).f_NAME);
}
S_R10(&l_S_1267, r_CATS(l_S_1267, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1276))).f_MV)), 0);
}
}
l_P_1266 = ((*(R21 *)rt_nil_check(l_P_1266))).f_NEXT;
}
RT_B_TICK();
} L_end1269: ;
{
R22 * l_T_1277; memset(&l_T_1277, 0, sizeof l_T_1277);
l_T_1277 = r_STR_TYPE(r_NUM((l_S_1267).f_LEN), r_SOME((l_S_1267).f_LEN));
((*(R22 *)rt_nil_check(l_T_1277))).f_BASE = l_CS_1265;
{ R26 rv1278 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1267), r_NUM((l_S_1267).f_LEN)), l_T_1277);
return rv1278; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1279; memset(&l_TS_1279, 0, sizeof l_TS_1279);
l_TS_1279 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1279))).f_NAME, p_NAME, 0);
{ R22 * rv1280 = r_RESOLVE(l_TS_1279);
return rv1280; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1281; memset(&l_Y_1281, 0, sizeof l_Y_1281);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1282; memset(&l_WT_1282, 0, sizeof l_WT_1282);
l_WT_1282 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1282))).f_KIND == g_T_ENUM))
{
l_Y_1281 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1282);
if ((!(l_Y_1281 == NULL)))
{
{ R26 rv1283 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1281))).f_MV), r_ENUM_RESULT(l_Y_1281, p_WANT));
return rv1283; }
}
}
}
}
l_Y_1281 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1284; memset(&l_FOUND_1284, 0, sizeof l_FOUND_1284);
l_FOUND_1284 = NULL;
rt_int l_N_1285; memset(&l_N_1285, 0, sizeof l_N_1285);
l_N_1285 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1281 == NULL)) goto L_end1286;
{
if ((((*(R12 *)rt_nil_check(l_Y_1281))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1284 == NULL))
{
l_FOUND_1284 = l_Y_1281;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1284))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1281))).f_T))).f_BASE)))
{
l_N_1285 = rt_add(l_N_1285, ((rt_int)1LL));
}
}
l_Y_1281 = r_LOOKUP_NEXT(l_Y_1281);
}
RT_B_TICK();
} L_end1286: ;
if ((l_FOUND_1284 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1285 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1287 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1284))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1284))).f_T);
return rv1287; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1288 = p_WANT;
return rv1288; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1289; memset(&l_T_1289, 0, sizeof l_T_1289);
l_T_1289 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1289))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1290 = l_T_1289;
return rv1290; }
}
}
{ R22 * rv1291 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1291; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1292; memset(&l_Y_1292, 0, sizeof l_Y_1292);
l_Y_1292 = r_LOOKUP(p_NAME);
if ((l_Y_1292 == NULL))
{
{ rt_int rv1293 = 0;
return rv1293; }
}
{ rt_int rv1294 = (((((*(R12 *)rt_nil_check(l_Y_1292))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1292))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1292))).f_KIND == g_Y_ROUTINE));
return rv1294; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1295; memset(&l_Y_1295, 0, sizeof l_Y_1295);
l_Y_1295 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1295 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1296; memset(&l_WRITABLE_1296, 0, sizeof l_WRITABLE_1296);
l_WRITABLE_1296 = r_CHECK_IMPORTED(l_Y_1295, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1297 = r_MKLV(r_OBJ_ACCESS(l_Y_1295), ((*(R12 *)rt_nil_check(l_Y_1295))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_VAR) && l_WRITABLE_1296), r_NO_TEXT());
return rv1297; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_GEN))
{
{ R26 rv1298 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1295))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1295))).f_T);
return rv1298; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1299 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1299; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1300; memset(&l_N_1300, 0, sizeof l_N_1300);
l_N_1300 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1300))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1301 = r_CALL_EXPR(l_N_1300, p_WANT);
return rv1301; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1302; memset(&l_A_1302, 0, sizeof l_A_1302);
l_A_1302 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1302)))
{
{ R26 rv1303 = r_EXPR(l_A_1302, NULL);
return rv1303; }
}
if ((((*(R21 *)rt_nil_check(l_A_1302))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1302))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1302))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1304; memset(&l_B_1304, 0, sizeof l_B_1304);
S_R26(&l_B_1304, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1302))).f_A))).f_A), 0);
R10 l_I_1305; memset(&l_I_1305, 0, sizeof l_I_1305);
S_R10(&l_I_1305, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1302))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1304).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1306 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1304).f_C, l_I_1305, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1304).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1306; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1307 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1304).f_C, l_I_1305, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1304).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1307; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1302))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(l_A_1302))).f_A))
{
{ R26 rv1308 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(l_A_1302))).f_A)), ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1308; }
}
}
if ((((*(R21 *)rt_nil_check(l_A_1302))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1302))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1302))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1302))).f_A))).f_A))).f_NAME))
{
{ R26 rv1309 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1302))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1302))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1309; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1302))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1310; memset(&l_Y_1310, 0, sizeof l_Y_1310);
l_Y_1310 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1302))).f_NAME);
if ((!(l_Y_1310 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1310))).f_KIND == g_Y_TYPE))
{
{ R26 rv1311 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1302))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1311; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1302))).f_NAME))
{
{ R26 rv1312 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1302))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1312; }
}
}
}
{
R26 l_B_1313; memset(&l_B_1313, 0, sizeof l_B_1313);
S_R26(&l_B_1313, r_EXPR(l_A_1302, NULL), 0);
R22 * l_BT_1314; memset(&l_BT_1314, 0, sizeof l_BT_1314);
l_BT_1314 = (l_B_1313).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1314))).f_KIND == g_T_REC))
{
{
R24 * l_F_1315; memset(&l_F_1315, 0, sizeof l_F_1315);
l_F_1315 = r_FIND_VFIELD(l_BT_1314, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1315 == NULL)))
{
r_CHECK_VARIANT(l_F_1315, l_BT_1314, l_A_1302, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1315))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1314)))
{
{ R26 rv1316 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1313).f_C, ((*(R24 *)rt_nil_check(l_F_1315))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1315))).f_T);
return rv1316; }
}
{ R26 rv1317 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1313).f_C, ((*(R24 *)rt_nil_check(l_F_1315))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1315))).f_T, ((l_B_1313).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1315))).f_KIND == ((rt_int)0LL))), (l_B_1313).f_C);
return rv1317; }
}
}
}
{ R26 rv1318 = r_ATTRIBUTE(l_B_1313, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1318; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1319 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1319; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1320 = 1;
return rv1320; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1321 = 1;
return rv1321; }
}
{
rstr l_S_1322; memset(&l_S_1322, 0, sizeof l_S_1322);
l_S_1322 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1322, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1324_lo = ((rt_int)0LL), it1324_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1324 = it1324_lo; it1324 <= it1324_hi; it1324++) {
{
if (rt_b_eq(rt_b_slice(l_S_1322, it1324, it1324), rt_str(".", 1)))
{
{ rt_int rv1325 = 0;
return rv1325; }
}
}
RT_B_TICK();
if (it1324 == it1324_hi) break;
} } L_end1323: ;
}
{ rt_int rv1326 = 1;
return rv1326; }
}
{ rt_int rv1327 = 0;
return rv1327; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1328 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1328; }
}
{ rt_int rv1329 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1329; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1330 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1330; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1331; memset(&l_TAGV_1331, 0, sizeof l_TAGV_1331);
S_R23(&l_TAGV_1331, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1331).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1331).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1332; memset(&l_F_1332, 0, sizeof l_F_1332);
l_F_1332 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1333; memset(&l_A_1333, 0, sizeof l_A_1333);
l_A_1333 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1332 == NULL)) goto L_end1334;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1332))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1333 == NULL))
{
{ R23 rv1335 = r_NO_MVAL();
return rv1335; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1332))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1333))).f_ANYARG)
{
{ R23 rv1336 = r_NO_MVAL();
return rv1336; }
}
{ R23 rv1337 = ((*(R25 *)rt_nil_check(l_A_1333))).f_MLO;
return rv1337; }
}
l_A_1333 = ((*(R25 *)rt_nil_check(l_A_1333))).f_NEXT;
}
l_F_1332 = ((*(R24 *)rt_nil_check(l_F_1332))).f_NEXT;
}
RT_B_TICK();
} L_end1334: ;
{ R23 rv1338 = r_NO_MVAL();
return rv1338; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1339; memset(&l_P_1339, 0, sizeof l_P_1339);
l_P_1339 = p_L;
for (;;) {
if ((l_P_1339 == NULL)) goto L_end1340;
{
if ((((*(R21 *)rt_nil_check(l_P_1339))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1339))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1339))).f_B, p_T)).f_V)))
{
{ rt_int rv1341 = 1;
return rv1341; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1339, p_T)).f_V == p_V))
{
{ rt_int rv1342 = 1;
return rv1342; }
}
l_P_1339 = ((*(R21 *)rt_nil_check(l_P_1339))).f_NEXT;
}
RT_B_TICK();
} L_end1340: ;
{ rt_int rv1343 = 0;
return rv1343; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1344 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1344; }
}
{ R26 rv1345 = r_EXPR(p_E, NULL);
return rv1345; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1346; memset(&l_A_1346, 0, sizeof l_A_1346);
S_R26(&l_A_1346, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1347; memset(&l_I_1347, 0, sizeof l_I_1347);
S_R10(&l_I_1347, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1346).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1348 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1346).f_C, (l_A_1346).f_C, l_I_1347, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1346).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1348; }
}
}
}
{ R26 rv1349 = r_INDEX_EXPR2(p_E);
return rv1349; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_VALUE(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1350; memset(&l_SAVED_1350, 0, sizeof l_SAVED_1350);
l_SAVED_1350 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1351; memset(&l_SAVED_Q_1351, 0, sizeof l_SAVED_Q_1351);
l_SAVED_Q_1351 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1352; memset(&l_V_1352, 0, sizeof l_V_1352);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1352, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1350;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1351;
{ R10 rv1353 = r_INDEX_OF(l_V_1352, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1353; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1354; memset(&l_T_1354, 0, sizeof l_T_1354);
l_T_1354 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1354))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1354))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1354))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1355; memset(&l_ARGS_1355, 0, sizeof l_ARGS_1355);
l_ARGS_1355 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1356; memset(&l_Y_1356, 0, sizeof l_Y_1356);
l_Y_1356 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1355, p_LINE, 0);
if ((l_Y_1356 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1357 = (r_CALL_SYM(l_Y_1356, l_ARGS_1355, p_LINE)).f_C;
return rv1357; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1354))).f_KIND == g_T_ENUM))
{
{ R10 rv1358 = (p_V).f_C;
return rv1358; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1354))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1354))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1359 = (p_V).f_C;
return rv1359; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1360; memset(&l_B_1360, 0, sizeof l_B_1360);
S_R26(&l_B_1360, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1361; memset(&l_T_1361, 0, sizeof l_T_1361);
l_T_1361 = r_REAL_TYPE((l_B_1360).f_T);
R21 * l_S_1362; memset(&l_S_1362, 0, sizeof l_S_1362);
l_S_1362 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1363; memset(&l_IX_1363, 0, sizeof l_IX_1363);
S_R10(&l_IX_1363, r_MK(rt_str("", 0)), 0);
rt_int l_N_1364; memset(&l_N_1364, 0, sizeof l_N_1364);
l_N_1364 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1361))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1362 == NULL)) goto L_end1365;
{
if ((l_N_1364 > ((rt_int)0LL)))
{
S_R10(&l_IX_1363, r_CATS(l_IX_1363, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1363, r_CAT(l_IX_1363, r_INDEX_VALUE(l_S_1362)), 0);
l_N_1364 = rt_add(l_N_1364, ((rt_int)1LL));
l_S_1362 = ((*(R21 *)rt_nil_check(l_S_1362))).f_NEXT;
}
RT_B_TICK();
} L_end1365: ;
if ((!(l_N_1364 == ((*(R22 *)rt_nil_check(l_T_1361))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1364 == ((rt_int)1LL)))
{
{ R26 rv1366 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1360).f_C, l_IX_1363, (l_B_1360).f_C, (l_B_1360).f_C), ((*(R22 *)rt_nil_check(l_T_1361))).f_ELEM, (l_B_1360).f_LVAL, r_NO_TEXT());
return rv1366; }
}
{
R10 l_X_1367; memset(&l_X_1367, 0, sizeof l_X_1367);
S_R10(&l_X_1367, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1360).f_C, r_NUM(l_N_1364), (l_B_1360).f_C, (l_B_1360).f_C), 0);
{ R26 rv1368 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1367, l_IX_1363), ((*(R22 *)rt_nil_check(l_T_1361))).f_ELEM, (l_B_1360).f_LVAL, r_NO_TEXT());
return rv1368; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1369 = r_MKN(rt_str("NEGATE_", 7));
return rv1369; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1370 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1370; }
}
{ R10 rv1371 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1371; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1372 = r_MKN(rt_str("ADD_", 4));
return rv1372; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1373 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1373; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1374 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1374; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1375 = r_MKN(rt_str("DIVIDE_", 7));
return rv1375; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1376 = r_MKN(rt_str("MODULUS_", 8));
return rv1376; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1377 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1377; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1378 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1378; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1379 = r_MKN(rt_str("EQUAL_", 6));
return rv1379; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1380 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1380; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1381 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1381; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1382 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1382; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1383 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1383; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1384 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1384; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1385 = r_MKN(rt_str("AND_", 4));
return rv1385; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1386 = r_MKN(rt_str("OR_", 3));
return rv1386; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1387 = r_MKN(rt_str("XOR_", 4));
return rv1387; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1388 = r_MKN(rt_str("IMPLIES_", 8));
return rv1388; }
}
{ R10 rv1389 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1389; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1390; memset(&l_A_1390, 0, sizeof l_A_1390);
l_A_1390 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1390)), ({ R27 rc1391; memset(&rc1391, 0, sizeof rc1391);  rc1391.f_E = NULL; S_R26(&rc1391.f_V, p_V, 0); rc1391.f_HAVE = 1; rc1391.f_MODE = g_M_IN; rc1391.f_NEXT = p_NEXT; rc1391; }), 0);
{ R27 * rv1392 = l_A_1390;
return rv1392; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1393; memset(&l_A_1393, 0, sizeof l_A_1393);
l_A_1393 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1393)), ({ R27 rc1394; memset(&rc1394, 0, sizeof rc1394);  rc1394.f_E = p_E; S_R26(&rc1394.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1394.f_HAVE = 0; rc1394.f_MODE = p_MODE; rc1394.f_NEXT = p_NEXT; rc1394; }), 0);
{ R27 * rv1395 = l_A_1393;
return rv1395; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1396; memset(&l_Y_1396, 0, sizeof l_Y_1396);
l_Y_1396 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1396 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1396 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1397 = l_Y_1396;
return rv1397; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1398; memset(&l_Y_1398, 0, sizeof l_Y_1398);
l_Y_1398 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1398 == NULL)) goto L_end1399;
{
if ((((*(R12 *)rt_nil_check(l_Y_1398))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1400 = 1;
return rv1400; }
}
l_Y_1398 = r_LOOKUP_NEXT(l_Y_1398);
}
RT_B_TICK();
} L_end1399: ;
l_Y_1398 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1398 == NULL)) goto L_end1401;
{
if ((((*(R12 *)rt_nil_check(l_Y_1398))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1402 = 1;
return rv1402; }
}
l_Y_1398 = r_LOOKUP_NEXT(l_Y_1398);
}
RT_B_TICK();
} L_end1401: ;
{ rt_int rv1403 = 0;
return rv1403; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1404; memset(&l_Q_1404, 0, sizeof l_Q_1404);
l_Q_1404 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1405; memset(&l_R_1405, 0, sizeof l_R_1405);
l_R_1405 = NULL;
if ((l_Q_1404 == NULL))
{
{ R27 * rv1406 = NULL;
return rv1406; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1404))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1405 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1404))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1404))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1404))).f_B == NULL)))
{
l_R_1405 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1404))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1405);
}
{ R27 * rv1407 = l_R_1405;
return rv1407; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1408; memset(&l_ARGS_1408, 0, sizeof l_ARGS_1408);
l_ARGS_1408 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1409; memset(&l_Y_1409, 0, sizeof l_Y_1409);
l_Y_1409 = r_USER_OPERATOR(p_NAME, l_ARGS_1408, p_LINE);
if ((l_Y_1409 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1410 = r_CALL_SYM(l_Y_1409, l_ARGS_1408, p_LINE);
return rv1410; }
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
{ R10 rv1411 = p_C;
return rv1411; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1412 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1412; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1413 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1413; }
}
{ R10 rv1414 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1414; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1415 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1415; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1416; memset(&l_RT_1416, 0, sizeof l_RT_1416);
l_RT_1416 = r_REAL_TYPE(p_T);
R22 * l_VT_1417; memset(&l_VT_1417, 0, sizeof l_VT_1417);
l_VT_1417 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1417))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_PTR)))
{
{ R10 rv1418 = (p_V).f_C;
return rv1418; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1417))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1417)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1419 = (p_V).f_C;
return rv1419; }
}
if ((!r_SAME_CLASS(l_RT_1416, l_VT_1417)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1417), (r_TYPE_NAME(l_VT_1417)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1416), (r_TYPE_NAME(l_RT_1416)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1416))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1416))).f_SCALE))
{
{ R10 rv1420 = r_RANGE_CHECK(l_RT_1416, (p_V).f_C, p_SELF);
return rv1420; }
}
{ R10 rv1421 = r_RANGE_CHECK(l_RT_1416, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1416))).f_SCALE)), p_SELF);
return rv1421; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1416))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1417))).f_SCALE)))
{
{ R10 rv1422 = r_RANGE_CHECK(l_RT_1416, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1416))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1422; }
}
{ R10 rv1423 = r_RANGE_CHECK(l_RT_1416, (p_V).f_C, p_SELF);
return rv1423; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1416))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1416) || r_HAS_VALUES(l_VT_1417)))) && (!r_SAME_REPS(l_RT_1416, l_VT_1417))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1424 = r_RANGE_CHECK(l_RT_1416, (p_V).f_C, p_SELF);
return rv1424; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1416, l_VT_1417, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1416))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1417))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1416))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1417))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1416), r_TARGET(l_VT_1417))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R10 rv1425 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1416), r_TARGET(l_VT_1417), (p_V).f_C);
return rv1425; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1416)) && (!r_HAS_ANY(l_VT_1417))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1416))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1417))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1416))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1416))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1417))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1416, l_VT_1417)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R10 rv1426 = (p_V).f_C;
return rv1426; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1427; memset(&l_ARGS_1427, 0, sizeof l_ARGS_1427);
l_ARGS_1427 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1428; memset(&l_Y_1428, 0, sizeof l_Y_1428);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1429; memset(&l_SAVED_Q_1429, 0, sizeof l_SAVED_Q_1429);
l_SAVED_Q_1429 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1430; memset(&l_X_1430, 0, sizeof l_X_1430);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1430 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1429;
if ((!(l_X_1430 == NULL)))
{
{
R27 * l_P_1431; memset(&l_P_1431, 0, sizeof l_P_1431);
l_P_1431 = l_X_1430;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1431))).f_NEXT == NULL)) goto L_end1432;
{
l_P_1431 = ((*(R27 *)rt_nil_check(l_P_1431))).f_NEXT;
}
RT_B_TICK();
} L_end1432: ;
((*(R27 *)rt_nil_check(l_P_1431))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1427))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1427))).f_NEXT = l_X_1430;
}
}
}
}
{
R27 * l_LAST_1433; memset(&l_LAST_1433, 0, sizeof l_LAST_1433);
l_LAST_1433 = l_ARGS_1427;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1433))).f_NEXT == NULL)) goto L_end1434;
{
l_LAST_1433 = ((*(R27 *)rt_nil_check(l_LAST_1433))).f_NEXT;
}
RT_B_TICK();
} L_end1434: ;
((*(R27 *)rt_nil_check(l_LAST_1433))).f_MODE = g_M_OUT;
l_Y_1428 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1427, p_LINE, 0);
if ((l_Y_1428 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1433))).f_MODE = g_M_INOUT;
l_Y_1428 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1427, p_LINE, 0);
}
}
if ((l_Y_1428 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1435 = r_CATS((r_CALL_SYM(l_Y_1428, l_ARGS_1427, p_LINE)).f_C, rt_str(";", 1));
return rv1435; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1436 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1436; }
}
}
{ R10 rv1437 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1437; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1438 = 1;
return rv1438; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1439 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1439; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1440; memset(&l_F_1440, 0, sizeof l_F_1440);
l_F_1440 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1440 == NULL)) goto L_end1441;
{
if ((((*(R24 *)rt_nil_check(l_F_1440))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1440))).f_T))
{
{ rt_int rv1442 = 1;
return rv1442; }
}
}
l_F_1440 = ((*(R24 *)rt_nil_check(l_F_1440))).f_NEXT;
}
RT_B_TICK();
} L_end1441: ;
}
}
{ rt_int rv1443 = 0;
return rv1443; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1444 = 0;
return rv1444; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1445 = 0;
return rv1445; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1446 = 0;
return rv1446; }
}
{ rt_int rv1447 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1447; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1448 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1448; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1449; memset(&l_D_1449, 0, sizeof l_D_1449);
S_R10(&l_D_1449, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1450; memset(&l_S_1450, 0, sizeof l_S_1450);
S_R10(&l_S_1450, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1451; memset(&l_I_1451, 0, sizeof l_I_1451);
S_R10(&l_I_1451, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1452; memset(&l_N_1452, 0, sizeof l_N_1452);
S_R10(&l_N_1452, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1453; memset(&l_VE_1453, 0, sizeof l_VE_1453);
l_VE_1453 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1454; memset(&l_R_1454, 0, sizeof l_R_1454);
S_R10(&l_R_1454, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1449, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1454, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1454, l_S_1450, p_RV), 0);
S_R10(&l_R_1454, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1454, l_N_1452, l_D_1449, l_D_1449), 0);
S_R10(&l_R_1454, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1454, l_S_1450, l_S_1450), 0);
S_R10(&l_R_1454, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1454, l_I_1451, l_N_1452, l_D_1449), 0);
S_R10(&l_R_1454, r_FMT2(rt_str("@@->hi);", 8), l_R_1454, l_D_1449), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1454, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1454, l_I_1451, l_I_1451, l_I_1451), 0);
S_R10(&l_R_1454, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1454, l_I_1451, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1450, l_I_1451), r_NO_TEXT())), 0);
}
S_R10(&l_R_1454, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1454, l_I_1451, l_I_1451, l_I_1451), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1454, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1454, l_I_1451, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1453, r_FMT2(rt_str("@->p[@]", 7), l_D_1449, l_I_1451), r_FMT2(rt_str("@.p[@]", 6), l_S_1450, l_I_1451), p_LINE)), 0);
}
else
{
S_R10(&l_R_1454, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1454, l_I_1451, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1449, l_I_1451), r_FMT2(rt_str("@.p[@]", 6), l_S_1450, l_I_1451))), 0);
}
{ R10 rv1455 = l_R_1454;
return rv1455; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1456; memset(&l_D_1456, 0, sizeof l_D_1456);
S_R10(&l_D_1456, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1457; memset(&l_S_1457, 0, sizeof l_S_1457);
S_R10(&l_S_1457, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1458; memset(&l_F_1458, 0, sizeof l_F_1458);
l_F_1458 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1459; memset(&l_R_1459, 0, sizeof l_R_1459);
S_R10(&l_R_1459, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1456, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1459, r_FMT3(rt_str("@@ = @;", 7), l_R_1459, l_S_1457, p_RV), 0);
for (;;) {
if ((l_F_1458 == NULL)) goto L_end1460;
{
{
R10 l_DF_1461; memset(&l_DF_1461, 0, sizeof l_DF_1461);
S_R10(&l_DF_1461, r_FMT2(rt_str("@->@", 4), l_D_1456, ((*(R24 *)rt_nil_check(l_F_1458))).f_CNAME), 0);
R10 l_SF_1462; memset(&l_SF_1462, 0, sizeof l_SF_1462);
S_R10(&l_SF_1462, r_FMT2(rt_str("@.@", 3), l_S_1457, ((*(R24 *)rt_nil_check(l_F_1458))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1458))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1458))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1459, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1459, l_DF_1461, l_SF_1462), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1458))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1459, r_FMT3(rt_str("@ @ = @;", 8), l_R_1459, l_DF_1461, l_SF_1462), 0);
}
else
{
S_R10(&l_R_1459, r_FMT2(rt_str("@ @", 3), l_R_1459, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1458))).f_T, ((*(R24 *)rt_nil_check(l_F_1458))).f_T, l_DF_1461, l_SF_1462, p_LINE)), 0);
}
}
l_F_1458 = ((*(R24 *)rt_nil_check(l_F_1458))).f_NEXT;
}
RT_B_TICK();
} L_end1460: ;
{ R10 rv1463 = r_CATS(l_R_1459, rt_str(" }", 2));
return rv1463; }
}
}
{ R10 rv1464 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1464; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1465; memset(&l_ARGS_1465, 0, sizeof l_ARGS_1465);
l_ARGS_1465 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1466; memset(&l_Y_1466, 0, sizeof l_Y_1466);
l_Y_1466 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1465, p_LINE);
if ((l_Y_1466 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1467 = (r_CALL_SYM(l_Y_1466, l_ARGS_1465, p_LINE)).f_C;
return rv1467; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1468; memset(&l_X_1468, 0, sizeof l_X_1468);
S_R10(&l_X_1468, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1469; memset(&l_Z_1469, 0, sizeof l_Z_1469);
S_R10(&l_Z_1469, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1470; memset(&l_I_1470, 0, sizeof l_I_1470);
S_R10(&l_I_1470, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1471; memset(&l_N_1471, 0, sizeof l_N_1471);
S_R10(&l_N_1471, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1472; memset(&l_R_1472, 0, sizeof l_R_1472);
S_R10(&l_R_1472, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1468, p_A, l_Z_1469), 0);
S_R10(&l_R_1472, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1472, p_B, l_I_1470, l_N_1471), 0);
S_R10(&l_R_1472, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1472, l_X_1468, l_X_1468, l_Z_1469), 0);
S_R10(&l_R_1472, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1472, l_Z_1469, l_I_1470, l_N_1471), 0);
S_R10(&l_R_1472, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1472, l_X_1468, l_X_1468), 0);
S_R10(&l_R_1472, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1472, l_I_1470, l_I_1470, l_I_1470), 0);
S_R10(&l_R_1472, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1472, l_I_1470, l_I_1470, l_I_1470), 0);
S_R10(&l_R_1472, r_FMT2(rt_str("@@;", 3), l_R_1472, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1468, l_I_1470), r_FMT2(rt_str("@.p[@]", 6), l_Z_1469, l_I_1470), p_LINE)), 0);
{ R10 rv1473 = r_FMT2(rt_str("@ @r; })", 8), l_R_1472, l_I_1470);
return rv1473; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1474; memset(&l_X_1474, 0, sizeof l_X_1474);
S_R10(&l_X_1474, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1475; memset(&l_Z_1475, 0, sizeof l_Z_1475);
S_R10(&l_Z_1475, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1476; memset(&l_F_1476, 0, sizeof l_F_1476);
l_F_1476 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1477; memset(&l_R_1477, 0, sizeof l_R_1477);
S_R10(&l_R_1477, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1474, p_A, l_Z_1475), 0);
R10 l_EQ_1478; memset(&l_EQ_1478, 0, sizeof l_EQ_1478);
S_R10(&l_EQ_1478, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1477, r_FMT2(rt_str("@@;", 3), l_R_1477, p_B), 0);
for (;;) {
if ((l_F_1476 == NULL)) goto L_end1479;
{
{
R10 l_C_1480; memset(&l_C_1480, 0, sizeof l_C_1480);
S_R10(&l_C_1480, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1476))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1474, ((*(R24 *)rt_nil_check(l_F_1476))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1475, ((*(R24 *)rt_nil_check(l_F_1476))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1476))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1478, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1478, r_VARIANT_COND(l_F_1476, p_T, l_X_1474), l_C_1480), 0);
}
else
{
S_R10(&l_EQ_1478, r_FMT2(rt_str("@ && @", 6), l_EQ_1478, l_C_1480), 0);
}
}
l_F_1476 = ((*(R24 *)rt_nil_check(l_F_1476))).f_NEXT;
}
RT_B_TICK();
} L_end1479: ;
{ R10 rv1481 = r_FMT2(rt_str("@ @; })", 7), l_R_1477, l_EQ_1478);
return rv1481; }
}
}
{ R10 rv1482 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1482; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1483; memset(&l_A_1483, 0, sizeof l_A_1483);
S_R26(&l_A_1483, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1484; memset(&l_T_1484, 0, sizeof l_T_1484);
l_T_1484 = (l_A_1483).f_T;
R10 l_OP_1485; memset(&l_OP_1485, 0, sizeof l_OP_1485);
S_R10(&l_OP_1485, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1484))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1485, 1))))
{
{
R27 * l_ARGS_1486; memset(&l_ARGS_1486, 0, sizeof l_ARGS_1486);
l_ARGS_1486 = r_VAL_ARG(l_A_1483, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1487; memset(&l_Y_1487, 0, sizeof l_Y_1487);
l_Y_1487 = r_USER_OPERATOR(r_OP_NAME(l_OP_1485, 1), l_ARGS_1486, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1487 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1486))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1486))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1485, 1), l_ARGS_1486, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1485, 1));
}
}
if ((!(l_Y_1487 == NULL)))
{
{ R26 rv1488 = r_CALL_SYM(l_Y_1487, l_ARGS_1486, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1488; }
}
if ((((*(R22 *)rt_nil_check(l_T_1484))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1484));
}
}
}
if (r_TEQS(l_OP_1485, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1484))).f_KIND == g_T_BOOL))
{
{ R26 rv1489 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1483).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1489; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1484))).f_KIND == g_T_BITS))
{
{ R26 rv1490 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1483).f_C), l_T_1484);
return rv1490; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1484))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1485, rt_str("-", 1)))
{
{ R26 rv1491 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1483).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1484))).f_SCALE));
return rv1491; }
}
{ R26 rv1492 = r_MKET((l_A_1483).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1484))).f_SCALE));
return rv1492; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1484))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1493; memset(&l_FT_1493, 0, sizeof l_FT_1493);
l_FT_1493 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1484))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1485, rt_str("-", 1)))
{
{ R26 rv1494 = r_MKET(r_FLOAT_OP(l_OP_1485, r_MK(rt_str("0.0", 3)), (l_A_1483).f_C, l_FT_1493), l_FT_1493);
return rv1494; }
}
{ R26 rv1495 = r_MKET((l_A_1483).f_C, l_FT_1493);
return rv1495; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1484));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1496 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1496; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1497; memset(&l_OP_1497, 0, sizeof l_OP_1497);
S_R10(&l_OP_1497, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1498; memset(&l_A_1498, 0, sizeof l_A_1498);
R26 l_B_1499; memset(&l_B_1499, 0, sizeof l_B_1499);
if ((r_TEQS(l_OP_1497, rt_str("&", 1)) || r_TEQS(l_OP_1497, rt_str("!", 1))))
{
{
R23 l_MA_1500; memset(&l_MA_1500, 0, sizeof l_MA_1500);
S_R23(&l_MA_1500, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1501; memset(&l_CA_1501, 0, sizeof l_CA_1501);
S_R10(&l_CA_1501, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1502; memset(&l_CB_1502, 0, sizeof l_CB_1502);
S_R10(&l_CB_1502, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1497, rt_str("&", 1)))
{
{ R26 rv1503 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1501, l_CB_1502), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1503; }
}
{ R26 rv1504 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1501, l_CB_1502), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1504; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1499, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1498, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1499).f_T), 0);
}
else
{
S_R26(&l_A_1498, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1499, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1498).f_T), 0);
}
{ R26 rv1505 = r_APPLY_OPERATOR(p_E, l_OP_1497, l_A_1498, l_B_1499);
return rv1505; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1506; memset(&l_AT_1506, 0, sizeof l_AT_1506);
l_AT_1506 = (p_A).f_T;
R22 * l_BT_1507; memset(&l_BT_1507, 0, sizeof l_BT_1507);
l_BT_1507 = (p_B).f_T;
rt_int l_LINE_1508; memset(&l_LINE_1508, 0, sizeof l_LINE_1508);
l_LINE_1508 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1509; memset(&l_NAME_1509, 0, sizeof l_NAME_1509);
S_R10(&l_NAME_1509, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1509, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1509, (l_NAME_1509).f_LEN))), 0);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1509) || (((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1510; memset(&l_ARGS_1510, 0, sizeof l_ARGS_1510);
l_ARGS_1510 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1511; memset(&l_EXTRA_1511, 0, sizeof l_EXTRA_1511);
l_EXTRA_1511 = r_QUAL_ARGS(l_LINE_1508);
R12 * l_Y_1512; memset(&l_Y_1512, 0, sizeof l_Y_1512);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1511 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1511);
}
if ((!(l_EXTRA_1511 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1510))).f_NEXT))).f_NEXT = l_EXTRA_1511;
l_Y_1512 = r_USER_OPERATOR(l_NAME_1509, l_ARGS_1510, l_LINE_1508);
if ((!(l_Y_1512 == NULL)))
{
{ R26 rv1513 = r_CALL_SYM(l_Y_1512, l_ARGS_1510, l_LINE_1508);
return rv1513; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1510))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1509, l_ARGS_1510, l_LINE_1508) == NULL)))
{
r_FAILT(l_LINE_1508, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1509);
}
}
else
{
l_Y_1512 = r_USER_OPERATOR(l_NAME_1509, l_ARGS_1510, l_LINE_1508);
if ((!(l_Y_1512 == NULL)))
{
{ R26 rv1514 = r_CALL_SYM(l_Y_1512, l_ARGS_1510, l_LINE_1508);
return rv1514; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1515; memset(&l_Q_1515, 0, sizeof l_Q_1515);
l_Q_1515 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1510, l_LINE_1508);
if ((!(l_Q_1515 == NULL)))
{
{ R26 rv1516 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1515, l_ARGS_1510, l_LINE_1508)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1516; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1508, rt_str("no such operation for the abstract type: ", 41), l_NAME_1509);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1508, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1517 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1517; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1518 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1518; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_INT)))
{
{ R26 rv1519 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1519; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1520 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1520; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1506, l_BT_1507)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1506))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1508, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1521 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1521; }
}
r_FAILT(l_LINE_1508, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1506, l_BT_1507, l_LINE_1508);
{
R22 * l_T_1522; memset(&l_T_1522, 0, sizeof l_T_1522);
l_T_1522 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1522))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1506))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1506))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1507))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1522))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1506))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1507))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1522))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1522))).f_MLEN).f_V), 0);
}
{ R26 rv1523 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1522);
return rv1523; }
}
}
r_FAIL(l_LINE_1508, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_BITS)))
{
{ R26 rv1524 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1506);
return rv1524; }
}
r_FAILT(l_LINE_1508, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_INT)))
{
{ R26 rv1525 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1525; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1526; memset(&l_T_1526, 0, sizeof l_T_1526);
l_T_1526 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1506))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1507))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1527 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1526), l_T_1526);
return rv1527; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1508, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1506))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1507))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1508, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1508, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1506), (r_TYPE_NAME(l_AT_1506)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1528; memset(&l_RA_1528, 0, sizeof l_RA_1528);
l_RA_1528 = r_REAL_TYPE(p_A);
R22 * l_RB_1529; memset(&l_RB_1529, 0, sizeof l_RB_1529);
l_RB_1529 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1530 = 1;
return rv1530; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1531 = 0;
return rv1531; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1528))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1528))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1528))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1529))).f_MLEN).f_OK))
{
{ rt_int rv1532 = ((((*(R22 *)rt_nil_check(l_RA_1528))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1529))).f_MLEN).f_V);
return rv1532; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1528))).f_KIND == g_T_ARR))
{
{ rt_int rv1533 = (r_SAME_EXTENTS(l_RA_1528, l_RB_1529) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1528))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1529))).f_ELEM));
return rv1533; }
}
{ rt_int rv1534 = 1;
return rv1534; }
rt_raise(RT_X_INIT);
}
static R10 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R10 p_C) { RT_B_TICK(); 
R22 * l_A_1535; memset(&l_A_1535, 0, sizeof l_A_1535);
l_A_1535 = r_REAL_TYPE(p_RT);
R22 * l_B_1536; memset(&l_B_1536, 0, sizeof l_B_1536);
l_B_1536 = r_REAL_TYPE(p_VT);
R10 l_R_1537; memset(&l_R_1537, 0, sizeof l_R_1537);
S_R10(&l_R_1537, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1535))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1536))).f_KIND == g_T_REC))))
{
{ R10 rv1538 = p_C;
return rv1538; }
}
{
R24 * l_F_1539; memset(&l_F_1539, 0, sizeof l_F_1539);
l_F_1539 = ((*(R22 *)rt_nil_check(l_A_1535))).f_FIELDS;
R25 * l_P_1540; memset(&l_P_1540, 0, sizeof l_P_1540);
l_P_1540 = ((*(R22 *)rt_nil_check(l_A_1535))).f_ARGS;
R25 * l_Q_1541; memset(&l_Q_1541, 0, sizeof l_Q_1541);
l_Q_1541 = ((*(R22 *)rt_nil_check(l_B_1536))).f_ARGS;
for (;;) {
if ((((l_F_1539 == NULL) || (l_P_1540 == NULL)) || (l_Q_1541 == NULL))) goto L_end1542;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1539))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1540))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1540))) && (!r_IS_GEN_ARG(l_Q_1541))) && (!(((((*(R25 *)rt_nil_check(l_P_1540))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1541))).f_MLO).f_OK)))))
{
S_R10(&l_R_1537, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1537, ((*(R24 *)rt_nil_check(l_F_1539))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1540))).f_LO), 0);
}
l_P_1540 = ((*(R25 *)rt_nil_check(l_P_1540))).f_NEXT;
l_Q_1541 = ((*(R25 *)rt_nil_check(l_Q_1541))).f_NEXT;
}
l_F_1539 = ((*(R24 *)rt_nil_check(l_F_1539))).f_NEXT;
}
RT_B_TICK();
} L_end1542: ;
}
if (((l_R_1537).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1543 = p_C;
return rv1543; }
}
{ R10 rv1544 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1537);
return rv1544; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1545; memset(&l_P_1545, 0, sizeof l_P_1545);
l_P_1545 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1546; memset(&l_Q_1546, 0, sizeof l_Q_1546);
l_Q_1546 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1545 == NULL) || (l_Q_1546 == NULL))) goto L_end1547;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1545))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1545))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1546))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1546))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1545))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1545))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1546))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1546))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1545))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1545))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1546))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1546))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1548 = 0;
return rv1548; }
}
}
l_P_1545 = ((*(R25 *)rt_nil_check(l_P_1545))).f_NEXT;
l_Q_1546 = ((*(R25 *)rt_nil_check(l_Q_1546))).f_NEXT;
}
RT_B_TICK();
} L_end1547: ;
{ rt_int rv1549 = 1;
return rv1549; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1550 = 0;
return rv1550; }
}
{ rt_int rv1551 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1551; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1552; memset(&l_T_1552, 0, sizeof l_T_1552);
l_T_1552 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1552))).f_SCALE = p_P;
{ R22 * rv1553 = l_T_1552;
return rv1553; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1554 = r_MK(rt_str("1", 1));
return rv1554; }
}
{ R10 rv1555 = r_MK(rt_str("0", 1));
return rv1555; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1556 = r_MK(rt_str("1", 1));
return rv1556; }
}
}
{ R10 rv1557 = r_MK(rt_str("0", 1));
return rv1557; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1558 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1558; }
}
}
{ rt_int rv1559 = ((rt_int)0LL);
return rv1559; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1560 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1560; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1561 = r_MK(rt_str("and", 3));
return rv1561; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1562 = r_MK(rt_str("or", 2));
return rv1562; }
}
{ R10 rv1563 = r_MK(rt_str("xor", 3));
return rv1563; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1564 = p_A;
return rv1564; }
}
{ rt_int rv1565 = p_B;
return rv1565; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1566 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1566; }
}
{ R10 rv1567 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1567; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1568; memset(&l_AT_1568, 0, sizeof l_AT_1568);
l_AT_1568 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1569; memset(&l_BT_1569, 0, sizeof l_BT_1569);
l_BT_1569 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1570; memset(&l_R_1570, 0, sizeof l_R_1570);
if (((((*(R22 *)rt_nil_check(l_AT_1568))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1569))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1568))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1569))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1568))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1569))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1570, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1568))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1569))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1570, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1568, l_BT_1569)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1568))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1568, l_BT_1569, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1568))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1568) || r_HAS_ANY(l_BT_1569)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1568))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1568, l_BT_1569)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1568))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1568))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1569))).f_ARGS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1568))
{
S_R10(&l_R_1570, r_COMPONENT_EQUAL(l_AT_1568, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1570, r_EQUAL_CODE(l_AT_1568, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1570, r_FMT1(rt_str("(!@)", 4), l_R_1570), 0);
}
{ R26 rv1571 = r_MKET(l_R_1570, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1571; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1572; memset(&l_S1_1572, 0, sizeof l_S1_1572);
l_S1_1572 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1573; memset(&l_S2_1573, 0, sizeof l_S2_1573);
l_S2_1573 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1574; memset(&l_S_1574, 0, sizeof l_S_1574);
l_S_1574 = r_MAX_INT(l_S1_1572, l_S2_1573);
R10 l_FN_1575; memset(&l_FN_1575, 0, sizeof l_FN_1575);
S_R10(&l_FN_1575, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1575, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1576 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1575, r_RESCALE_C((p_A).f_C, l_S1_1572, l_S_1574), r_RESCALE_C((p_B).f_C, l_S2_1573, l_S_1574)), r_INT_TYPE(l_S_1574));
return rv1576; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1577 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1572, l_S2_1573)));
return rv1577; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1578 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1572, l_S2_1573)));
return rv1578; }
}
{ R26 rv1579 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1572, l_S2_1573)));
return rv1579; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1580 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1572));
return rv1580; }
}
{ R26 rv1581 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1572));
return rv1581; }
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
rt_int l_S1_1582; memset(&l_S1_1582, 0, sizeof l_S1_1582);
l_S1_1582 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1583; memset(&l_S2_1583, 0, sizeof l_S2_1583);
l_S2_1583 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1584; memset(&l_RND_1584, 0, sizeof l_RND_1584);
S_R10(&l_RND_1584, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1585 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1585; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1584, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1586 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1586; }
}
{
R23 l_SM_1587; memset(&l_SM_1587, 0, sizeof l_SM_1587);
S_R23(&l_SM_1587, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1588; memset(&l_S_1588, 0, sizeof l_S_1588);
l_S_1588 = (l_SM_1587).f_V;
rt_int l_SR_1589; memset(&l_SR_1589, 0, sizeof l_SR_1589);
l_SR_1589 = r_MAX_INT(l_S1_1582, l_S2_1583);
if ((!(l_SM_1587).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1590 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1588, l_S1_1582), l_S2_1583)), l_RND_1584), r_INT_TYPE(l_S_1588));
return rv1590; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1591 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1588, l_S1_1582), l_S2_1583)), l_RND_1584), r_INT_TYPE(l_S_1588));
return rv1591; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1592 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1582), r_NUM(l_S_1588), l_RND_1584), r_INT_TYPE(l_S_1588));
return rv1592; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1593; memset(&l_SUB_1593, 0, sizeof l_SUB_1593);
S_R10(&l_SUB_1593, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1593, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1594 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1582), (p_B).f_C, r_NUM(l_S2_1583)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1588), l_SUB_1593, l_RND_1584)), r_INT_TYPE(l_S_1588));
return rv1594; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1595; memset(&l_V_1595, 0, sizeof l_V_1595);
S_R26(&l_V_1595, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1596; memset(&l_T_1596, 0, sizeof l_T_1596);
l_T_1596 = r_REAL_TYPE((l_V_1595).f_T);
R21 * l_R_1597; memset(&l_R_1597, 0, sizeof l_R_1597);
l_R_1597 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1598; memset(&l_TMP_1598, 0, sizeof l_TMP_1598);
S_R10(&l_TMP_1598, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1599; memset(&l_LO_1599, 0, sizeof l_LO_1599);
R26 l_HI_1600; memset(&l_HI_1600, 0, sizeof l_HI_1600);
R10 l_LOC_1601; memset(&l_LOC_1601, 0, sizeof l_LOC_1601);
R10 l_HIC_1602; memset(&l_HIC_1602, 0, sizeof l_HIC_1602);
R10 l_LO_OP_1603; memset(&l_LO_OP_1603, 0, sizeof l_LO_OP_1603);
S_R10(&l_LO_OP_1603, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1604; memset(&l_HI_OP_1604, 0, sizeof l_HI_OP_1604);
S_R10(&l_HI_OP_1604, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1599, r_EXPR(((*(R21 *)rt_nil_check(l_R_1597))).f_A, l_T_1596), 0);
S_R26(&l_HI_1600, r_EXPR(((*(R21 *)rt_nil_check(l_R_1597))).f_B, l_T_1596), 0);
if (((((*(R22 *)rt_nil_check(l_T_1596))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1596))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1596))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1596))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1596))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1599).f_T), l_T_1596)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1600).f_T), l_T_1596))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1597))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1597))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1603, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1597))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1604, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1596))).f_KIND == g_T_INT))
{
{
R26 l_X_1605; memset(&l_X_1605, 0, sizeof l_X_1605);
S_R26(&l_X_1605, r_MKET(l_TMP_1598, (l_V_1595).f_T), 0);
S_R10(&l_LOC_1601, r_FIXED_COMPARE(l_LO_1599, l_X_1605, l_LO_OP_1603), 0);
S_R10(&l_HIC_1602, r_FIXED_COMPARE(l_X_1605, l_HI_1600, l_HI_OP_1604), 0);
}
}
else
{
S_R10(&l_LOC_1601, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1599).f_C, l_LO_OP_1603, l_TMP_1598), 0);
S_R10(&l_HIC_1602, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1598, l_HI_OP_1604, (l_HI_1600).f_C), 0);
}
{ R26 rv1606 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1596), l_TMP_1598, (l_V_1595).f_C, l_LOC_1601), r_FMT1(rt_str("@; })", 5), l_HIC_1602)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1606; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1607 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1607; }
}
{ R10 rv1608 = (p_V).f_C;
return rv1608; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1609 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1609; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1610; memset(&l_B_1610, 0, sizeof l_B_1610);
l_B_1610 = ((rt_int)0LL);
rt_int l_P_1611; memset(&l_P_1611, 0, sizeof l_P_1611);
l_P_1611 = ((rt_int)1LL);
for (;;) {
if ((l_P_1611 >= p_N)) goto L_end1612;
{
l_B_1610 = rt_add(l_B_1610, ((rt_int)1LL));
l_P_1611 = rt_mul(l_P_1611, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1612: ;
{ rt_int rv1613 = l_B_1610;
return rv1613; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1614; memset(&l_M_1614, 0, sizeof l_M_1614);
S_R23(&l_M_1614, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1614).f_OK)
{
{ rt_int rv1615 = (l_M_1614).f_V;
return rv1615; }
}
}
}
}
{ rt_int rv1616 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1616; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1617 = ((rt_int)100000000LL);
return rv1617; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1618 = ((rt_int)15LL);
return rv1618; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1619 = ((rt_int)7LL);
return rv1619; }
}
{ rt_int rv1620 = ((rt_int)15LL);
return rv1620; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1621; memset(&l_SINGLE_1621, 0, sizeof l_SINGLE_1621);
l_SINGLE_1621 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1621)
{
{ rt_int rv1622 = rt_neg(((rt_int)125LL));
return rv1622; }
}
{ rt_int rv1623 = rt_neg(((rt_int)1021LL));
return rv1623; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1621)
{
{ rt_int rv1624 = ((rt_int)128LL);
return rv1624; }
}
{ rt_int rv1625 = ((rt_int)1024LL);
return rv1625; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1621)
{
{ rt_int rv1626 = ((rt_int)25LL);
return rv1626; }
}
{ rt_int rv1627 = ((rt_int)54LL);
return rv1627; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1621)
{
{ rt_int rv1628 = ((rt_int)8LL);
return rv1628; }
}
{ rt_int rv1629 = ((rt_int)11LL);
return rv1629; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1621)
{
{ rt_int rv1630 = ((rt_int)32LL);
return rv1630; }
}
{ rt_int rv1631 = ((rt_int)64LL);
return rv1631; }
}
{ rt_int rv1632 = ((rt_int)0LL);
return rv1632; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1633; memset(&l_K_1633, 0, sizeof l_K_1633);
l_K_1633 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1633 == g_T_ABS))
{
{ R23 rv1634 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1634; }
}
else if ((l_K_1633 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1635 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1635; }
}
}
{ R23 rv1636 = r_SOME(((rt_int)64LL));
return rv1636; }
}
else if ((l_K_1633 == g_T_FLOAT))
{
{ R23 rv1637 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1637; }
}
else if ((l_K_1633 == g_T_BOOL))
{
{ R23 rv1638 = r_SOME(((rt_int)1LL));
return rv1638; }
}
else if ((l_K_1633 == g_T_ENUM))
{
{ R23 rv1639 = r_SOME(r_ENUM_SIZE(p_T));
return rv1639; }
}
else if ((l_K_1633 == g_T_BITS))
{
{ R23 rv1640 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1640; }
}
else if ((l_K_1633 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1641 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1641; }
}
}
else if (((l_K_1633 == g_T_PTR) || (l_K_1633 == g_T_SEM)))
{
{ R23 rv1642 = r_SOME(((rt_int)64LL));
return rv1642; }
}
{ R23 rv1643 = r_NO_MVAL();
return rv1643; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1644; memset(&l_T_1644, 0, sizeof l_T_1644);
l_T_1644 = (p_B).f_T;
rt_int l_K_1645; memset(&l_K_1645, 0, sizeof l_K_1645);
l_K_1645 = ((*(R22 *)rt_nil_check(l_T_1644))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1646 = r_SIZE_OF(l_T_1644, (p_B).f_C);
return rv1646; }
}
if ((l_K_1645 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1647 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE);
return rv1647; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1648 = r_INT_ET(((rt_int)2LL));
return rv1648; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1649 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1649; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1650 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1650; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1651 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE));
return rv1651; }
}
{ R26 rv1652 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE));
return rv1652; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1644))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1653 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1644))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE));
return rv1653; }
}
{ R26 rv1654 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE));
return rv1654; }
}
}
else if ((l_K_1645 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1655 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE);
return rv1655; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1656 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE));
return rv1656; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1657 = r_INT_ET(((rt_int)2LL));
return rv1657; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1658 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE, p_NAME));
return rv1658; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1659; memset(&l_MT_1659, 0, sizeof l_MT_1659);
l_MT_1659 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE));
R10 l_C_1660; memset(&l_C_1660, 0, sizeof l_C_1660);
S_R10(&l_C_1660, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1660, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1661 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C, (p_B).f_SELF), l_MT_1659);
return rv1661; }
}
{ R26 rv1662 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1660), l_MT_1659);
return rv1662; }
}
if (((((*(R22 *)rt_nil_check(l_T_1644))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1663 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1644))).f_HI_C, (p_B).f_SELF), l_MT_1659);
return rv1663; }
}
{ R26 rv1664 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1660), l_MT_1659);
return rv1664; }
}
}
}
else if ((l_K_1645 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1665 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1644))).f_BASE);
return rv1665; }
}
{ R26 rv1666 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1644))).f_BASE);
return rv1666; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1644))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1667 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1644))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1644))).f_BASE);
return rv1667; }
}
{ R26 rv1668 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1644))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1644))).f_BASE);
return rv1668; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1669 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1644))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1644))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1644))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1669; }
}
{ R26 rv1670 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1644))).f_BASE))).f_NLITS);
return rv1670; }
}
}
else if (((l_K_1645 == g_T_STR) || (l_K_1645 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1671 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1671; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1672 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1672; }
}
}
else if ((l_K_1645 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1673 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1644))).f_DIMS);
return rv1673; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1674 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1674; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1675 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1675; }
}
}
else if ((l_K_1645 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1644))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1676 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1676; }
}
{ R26 rv1677 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1677; }
}
}
else if (((l_K_1645 == g_T_ABS) || (l_K_1645 == g_T_REC)))
{
{
R22 * l_U_1678; memset(&l_U_1678, 0, sizeof l_U_1678);
l_U_1678 = l_T_1644;
if ((l_K_1645 == g_T_ABS))
{
l_U_1678 = ((*(R22 *)rt_nil_check(l_T_1644))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1678))).f_KIND == g_T_REC))
{
{
R24 * l_F_1679; memset(&l_F_1679, 0, sizeof l_F_1679);
l_F_1679 = r_FIND_FIELD(l_U_1678, p_NAME);
if ((!(l_F_1679 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1679))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1680 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1679))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1679))).f_T);
return rv1680; }
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
R22 * l_T_1681; memset(&l_T_1681, 0, sizeof l_T_1681);
l_T_1681 = r_REAL_TYPE((p_B).f_T);
R10 l_D_1682; memset(&l_D_1682, 0, sizeof l_D_1682);
S_R10(&l_D_1682, r_NUM(((*(R22 *)rt_nil_check(l_T_1681))).f_DIMS), 0);
R10 l_X_1683; memset(&l_X_1683, 0, sizeof l_X_1683);
S_R10(&l_X_1683, r_NEW_NAME(rt_str("sx", 2)), 0);
R10 l_R_1684; memset(&l_R_1684, 0, sizeof l_R_1684);
S_R10(&l_R_1684, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1685; memset(&l_ELEM_1685, 0, sizeof l_ELEM_1685);
l_ELEM_1685 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R10 l_C_1686; memset(&l_C_1686, 0, sizeof l_C_1686);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R21 * l_TS_1687; memset(&l_TS_1687, 0, sizeof l_TS_1687);
l_TS_1687 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_TS_1687))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R21 *)rt_nil_check(l_TS_1687))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_TS_1687))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1685 = r_RESOLVE(l_TS_1687);
}
}
{
R22 * l_A_1688; memset(&l_A_1688, 0, sizeof l_A_1688);
l_A_1688 = r_ARRAY_OF(l_ELEM_1685, ((rt_int)1LL));
S_R10(&l_C_1686, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1681), l_X_1683, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1688))).f_CNAME), 0);
S_R10(&l_C_1686, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1686, l_R_1684, l_R_1684, l_R_1684), 0);
S_R10(&l_C_1686, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1686, l_R_1684, l_R_1684, l_D_1682), 0);
S_R10(&l_C_1686, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1686, l_R_1684, l_D_1682, l_R_1684), 0);
S_R10(&l_C_1686, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1686, l_D_1682), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R10(&l_C_1686, r_FMT2(rt_str("@ @", 3), l_C_1686, r_INIT_CODE(l_ELEM_1685, r_FMT1(rt_str("@.p[i]", 6), l_R_1684))), 0);
S_R10(&l_C_1686, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1686, l_R_1684, l_X_1683, l_R_1684), 0);
S_R10(&l_C_1686, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1686, l_X_1683), 0);
}
else
{
S_R10(&l_C_1686, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1686, l_R_1684, l_X_1683, l_X_1683), 0);
S_R10(&l_C_1686, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1686, l_X_1683, l_X_1683, l_X_1683), 0);
}
{ R26 rv1689 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1686, l_R_1684), l_A_1688);
return rv1689; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1690; memset(&l_N_1690, 0, sizeof l_N_1690);
l_N_1690 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1690))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1691 = l_N_1690;
return rv1691; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1692; memset(&l_K_1692, 0, sizeof l_K_1692);
l_K_1692 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1692 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1693 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1693; }
}
}
{ R26 rv1694 = r_INT_ET(((rt_int)64LL));
return rv1694; }
}
else if ((l_K_1692 == g_T_FLOAT))
{
{ R26 rv1695 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1695; }
}
else if ((l_K_1692 == g_T_BOOL))
{
{ R26 rv1696 = r_INT_ET(((rt_int)1LL));
return rv1696; }
}
else if ((l_K_1692 == g_T_ENUM))
{
{ R26 rv1697 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1697; }
}
else if ((l_K_1692 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1698 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1698; }
}
{ R26 rv1699 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1699; }
}
else if ((l_K_1692 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1700 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1700; }
}
{ R26 rv1701 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1701; }
}
else if (((l_K_1692 == g_T_PTR) || (l_K_1692 == g_T_SEM)))
{
{ R26 rv1702 = r_INT_ET(((rt_int)64LL));
return rv1702; }
}
else if ((l_K_1692 == g_T_ABS))
{
{ R26 rv1703 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1703; }
}
else if ((l_K_1692 == g_T_ARR))
{
{ R26 rv1704 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1704; }
}
{ R26 rv1705 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1705; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1706 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1706; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1707 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1707; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1708; memset(&l_RT_1708, 0, sizeof l_RT_1708);
l_RT_1708 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1708))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1708))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1709; memset(&l_TMP_1709, 0, sizeof l_TMP_1709);
S_R10(&l_TMP_1709, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1710; memset(&l_C_1710, 0, sizeof l_C_1710);
S_R10(&l_C_1710, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1709, l_TMP_1709, l_TMP_1709), 0);
S_R10(&l_C_1710, r_FMT3(rt_str("@@ @; })", 8), l_C_1710, r_INIT_CODE(l_RT_1708, l_TMP_1709), l_TMP_1709), 0);
{ R26 rv1711 = r_MKET(l_C_1710, p_T);
return rv1711; }
}
}
{ R26 rv1712 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1712; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1713 = 0;
return rv1713; }
}
{
R12 * l_Y_1714; memset(&l_Y_1714, 0, sizeof l_Y_1714);
l_Y_1714 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1714 == NULL))
{
{ rt_int rv1715 = 0;
return rv1715; }
}
{ rt_int rv1716 = (((*(R12 *)rt_nil_check(l_Y_1714))).f_KIND == g_Y_TYPE);
return rv1716; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1717 = r_INT_ET(((rt_int)100000000LL));
return rv1717; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1718 = r_INT_ET(((rt_int)15LL));
return rv1718; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1719 = r_INT_ET(((rt_int)0LL));
return rv1719; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1720; memset(&l_T_1720, 0, sizeof l_T_1720);
l_T_1720 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1720 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1720 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1720 = r_REAL_TYPE(l_T_1720);
if ((!(((*(R22 *)rt_nil_check(l_T_1720))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1720))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1721; memset(&l_TMP_1721, 0, sizeof l_TMP_1721);
S_R10(&l_TMP_1721, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1722; memset(&l_R_1722, 0, sizeof l_R_1722);
S_R10(&l_R_1722, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1720))).f_CNAME, l_TMP_1721, l_TMP_1721, l_TMP_1721), 0);
R24 * l_F_1723; memset(&l_F_1723, 0, sizeof l_F_1723);
l_F_1723 = ((*(R22 *)rt_nil_check(l_T_1720))).f_FIELDS;
S_R10(&l_R_1722, r_FMT2(rt_str("@@", 2), l_R_1722, r_INIT_CODE(l_T_1720, l_TMP_1721)), 0);
for (;;) {
if ((l_F_1723 == NULL)) goto L_end1724;
{
if ((((*(R24 *)rt_nil_check(l_F_1723))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1723))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1723))).f_LABELS, (r_TAG_VALUE(l_T_1720, ((*(R24 *)rt_nil_check(l_F_1723))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1720, ((*(R24 *)rt_nil_check(l_F_1723))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1725; memset(&l_INIT_1725, 0, sizeof l_INIT_1725);
l_INIT_1725 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1723))).f_NAME);
if ((l_INIT_1725 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1723))).f_NAME);
}
S_R10(&l_R_1722, r_FMT2(rt_str("@ @", 3), l_R_1722, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1723))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1721, ((*(R24 *)rt_nil_check(l_F_1723))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1725))).f_A, ((*(R24 *)rt_nil_check(l_F_1723))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1725))).f_LINE, l_TMP_1721)), 0);
}
}
}
l_F_1723 = ((*(R24 *)rt_nil_check(l_F_1723))).f_NEXT;
}
RT_B_TICK();
} L_end1724: ;
{
R21 * l_P_1726; memset(&l_P_1726, 0, sizeof l_P_1726);
l_P_1726 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1726 == NULL)) goto L_end1727;
{
{
R24 * l_G_1728; memset(&l_G_1728, 0, sizeof l_G_1728);
l_G_1728 = r_FIND_VFIELD(l_T_1720, ((*(R21 *)rt_nil_check(l_P_1726))).f_NAME);
if ((l_G_1728 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1726))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1726))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1728))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1726))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1726))).f_NAME);
}
r_CHECK_VARIANT(l_G_1728, l_T_1720, NULL, ((*(R21 *)rt_nil_check(l_P_1726))).f_LINE);
}
l_P_1726 = ((*(R21 *)rt_nil_check(l_P_1726))).f_NEXT;
}
RT_B_TICK();
} L_end1727: ;
}
{ R26 rv1729 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1722, l_TMP_1721), l_T_1720);
return rv1729; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1730; memset(&l_P_1730, 0, sizeof l_P_1730);
l_P_1730 = p_L;
for (;;) {
if ((l_P_1730 == NULL)) goto L_end1731;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1730))).f_NAME, p_NAME))
{
{ R21 * rv1732 = l_P_1730;
return rv1732; }
}
l_P_1730 = ((*(R21 *)rt_nil_check(l_P_1730))).f_NEXT;
}
RT_B_TICK();
} L_end1731: ;
{ R21 * rv1733 = NULL;
return rv1733; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1734; memset(&l_DIMS_1734, 0, sizeof l_DIMS_1734);
l_DIMS_1734 = ((rt_int)0LL);
R21 * l_P_1735; memset(&l_P_1735, 0, sizeof l_P_1735);
l_P_1735 = p_E;
R22 * l_ELEM_1736; memset(&l_ELEM_1736, 0, sizeof l_ELEM_1736);
l_ELEM_1736 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1735))).f_KIND == g_N_ARRCONS))) goto L_end1737;
{
l_DIMS_1734 = rt_add(l_DIMS_1734, ((rt_int)1LL));
l_P_1735 = ((*(R21 *)rt_nil_check(l_P_1735))).f_A;
}
RT_B_TICK();
} L_end1737: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1736 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1736 == NULL))
{
l_ELEM_1736 = (r_EXPR(l_P_1735, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1736))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1736))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1736 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1734);
{
R22 * l_A_1738; memset(&l_A_1738, 0, sizeof l_A_1738);
l_A_1738 = r_ARRAY_OF(l_ELEM_1736, l_DIMS_1734);
R10 l_TMP_1739; memset(&l_TMP_1739, 0, sizeof l_TMP_1739);
S_R10(&l_TMP_1739, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1740; memset(&l_R_1740, 0, sizeof l_R_1740);
S_R10(&l_R_1740, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1738))).f_CNAME, l_TMP_1739, l_TMP_1739), 0);
rt_int l_K_1741; memset(&l_K_1741, 0, sizeof l_K_1741);
l_K_1741 = ((rt_int)0LL);
{
R21 * l_Q_1742; memset(&l_Q_1742, 0, sizeof l_Q_1742);
l_Q_1742 = p_E;
R25 * l_TAIL_1743; memset(&l_TAIL_1743, 0, sizeof l_TAIL_1743);
l_TAIL_1743 = NULL;
{ rt_int it1745_lo = ((rt_int)1LL), it1745_hi = l_DIMS_1734;
for (rt_int it1745 = it1745_lo; it1745 <= it1745_hi; it1745++) {
{
{
R25 * l_B_1746; memset(&l_B_1746, 0, sizeof l_B_1746);
l_B_1746 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_1747; memset(&l_N_1747, 0, sizeof l_N_1747);
l_N_1747 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_Q_1742))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1746)), ({ R25 rc1748; memset(&rc1748, 0, sizeof rc1748);  S_R10(&rc1748.f_LO, r_MK(rt_str("0", 1)), 0); S_R10(&rc1748.f_HI, r_NUM(rt_sub(l_N_1747, ((rt_int)1LL))), 0); S_R23(&rc1748.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc1748.f_MHI, r_SOME(rt_sub(l_N_1747, ((rt_int)1LL))), 0); rc1748.f_ANYARG = 0; rc1748.f_NEXT = NULL; rc1748; }), 0);
if ((l_TAIL_1743 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1738))).f_BOUNDS = l_B_1746;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1743))).f_NEXT = l_B_1746;
}
l_TAIL_1743 = l_B_1746;
}
l_Q_1742 = ((*(R21 *)rt_nil_check(l_Q_1742))).f_A;
}
RT_B_TICK();
if (it1745 == it1745_hi) break;
} } L_end1744: ;
}
S_R10(&l_R_1740, r_FMT2(rt_str("@@); ", 5), l_R_1740, l_TMP_1739), 0);
l_P_1735 = p_E;
{ rt_int it1750_lo = ((rt_int)0LL), it1750_hi = rt_sub(l_DIMS_1734, ((rt_int)1LL));
for (rt_int it1750 = it1750_lo; it1750 <= it1750_hi; it1750++) {
{
S_R10(&l_R_1740, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1740, l_TMP_1739, r_NUM(it1750), l_TMP_1739), 0);
S_R10(&l_R_1740, r_FMT3(rt_str("@@] = @;", 8), l_R_1740, r_NUM(it1750), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1735))).f_A), ((rt_int)1LL)))), 0);
l_P_1735 = ((*(R21 *)rt_nil_check(l_P_1735))).f_A;
}
RT_B_TICK();
if (it1750 == it1750_hi) break;
} } L_end1749: ;
S_R10(&l_R_1740, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1740, l_TMP_1739, l_TMP_1739, r_NUM(l_DIMS_1734)), 0);
S_R10(&l_R_1740, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1740, l_TMP_1739, l_TMP_1739), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1734, l_A_1738, l_TMP_1739, &l_R_1740, &l_K_1741);
{ R26 rv1751 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1740, l_TMP_1739), l_A_1738);
return rv1751; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R21 * l_P_1752; memset(&l_P_1752, 0, sizeof l_P_1752);
l_P_1752 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_1752 == NULL)) goto L_end1753;
{
if (((!(((*(R21 *)rt_nil_check(l_P_1752))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_1752, ((*(R21 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_1752, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_1752 = ((*(R21 *)rt_nil_check(l_P_1752))).f_NEXT;
}
RT_B_TICK();
} L_end1753: ;
}
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv1754 = ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv1754; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv1755 = 0;
return rv1755; }
}
{ rt_int rv1756 = r_SAME_SHAPE(((*(R21 *)rt_nil_check(p_A))).f_A, ((*(R21 *)rt_nil_check(p_B))).f_A);
return rv1756; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1757; memset(&l_P_1757, 0, sizeof l_P_1757);
l_P_1757 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1757 == NULL)) goto L_end1758;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1757, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1757))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1757))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1757, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1757))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1757 = ((*(R21 *)rt_nil_check(l_P_1757))).f_NEXT;
}
RT_B_TICK();
} L_end1758: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1759; memset(&l_T_1759, 0, sizeof l_T_1759);
l_T_1759 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1759))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1759))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1759))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1760 = l_T_1759;
return rv1760; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1761; memset(&l_T_1761, 0, sizeof l_T_1761);
l_T_1761 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1762; memset(&l_V_1762, 0, sizeof l_V_1762);
S_R26(&l_V_1762, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1761), 0);
R22 * l_RT_1763; memset(&l_RT_1763, 0, sizeof l_RT_1763);
l_RT_1763 = r_REAL_TYPE(l_T_1761);
if (((((*(R22 *)rt_nil_check((l_V_1762).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1763))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1763))).f_KIND == g_T_INT))
{
{ R26 rv1764 = r_MKET(r_RANGE_CHECK(l_RT_1763, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1762).f_C), r_NO_TEXT()), l_T_1761);
return rv1764; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1763))).f_KIND == g_T_BOOL))
{
{ R26 rv1765 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1762).f_C), l_T_1761);
return rv1765; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1763))).f_KIND == g_T_ENUM))
{
{ R26 rv1766 = r_MKET(r_ENUM_OF_BITS(l_RT_1763, (l_V_1762).f_C), l_T_1761);
return rv1766; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1763))).f_KIND == g_T_FLOAT))
{
{ R26 rv1767 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1762).f_C), l_T_1761);
return rv1767; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1763))).f_KIND == g_T_STR))
{
{ R26 rv1768 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1762).f_C), l_T_1761);
return rv1768; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1769; memset(&l_C_1769, 0, sizeof l_C_1769);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1769, r_CONVERT(l_V_1762, l_T_1761, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1763))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1763))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1763))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1763))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1762).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1769, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1769, ((*(R22 *)rt_nil_check(l_RT_1763))).f_LEN_C), 0);
}
{ R26 rv1770 = r_MKET(l_C_1769, l_T_1761);
return rv1770; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1771 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1771; }
}
}
{ R10 rv1772 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1772; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1773; memset(&l_NAME_1773, 0, sizeof l_NAME_1773);
S_R10(&l_NAME_1773, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1774; memset(&l_L_1774, 0, sizeof l_L_1774);
l_L_1774 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1775; memset(&l_R_1775, 0, sizeof l_R_1775);
S_R10(&l_R_1775, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1774 == NULL)) goto L_end1776;
{
{
R21 * l_V_1777; memset(&l_V_1777, 0, sizeof l_V_1777);
l_V_1777 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1778; memset(&l_FOUND_1778, 0, sizeof l_FOUND_1778);
l_FOUND_1778 = 0;
for (;;) {
if ((l_V_1777 == NULL)) goto L_end1779;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1777))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1774))).f_NAME))
{
S_R10(&l_R_1775, r_FMT2(rt_str("@@, ", 4), l_R_1775, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1777))).f_A, NULL)).f_C), 0);
l_FOUND_1778 = 1;
}
l_V_1777 = ((*(R21 *)rt_nil_check(l_V_1777))).f_NEXT;
}
RT_B_TICK();
} L_end1779: ;
if ((!l_FOUND_1778))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1774))).f_NAME);
}
}
l_L_1774 = ((*(R21 *)rt_nil_check(l_L_1774))).f_NEXT;
}
RT_B_TICK();
} L_end1776: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1773, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1775, l_NAME_1773, l_NAME_1773));
{ R10 rv1780 = r_FMT2(rt_str("@, @", 4), l_NAME_1773, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1780; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1781; memset(&l_SEM_1781, 0, sizeof l_SEM_1781);
l_SEM_1781 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1781 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1781)
{
{
R22 * l_T_1782; memset(&l_T_1782, 0, sizeof l_T_1782);
l_T_1782 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1782 = p_WANT;
}
}
{ R26 rv1783 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1782))).f_SCALE)), l_T_1782);
return rv1783; }
}
}
{
R22 * l_T_1784; memset(&l_T_1784, 0, sizeof l_T_1784);
l_T_1784 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1785; memset(&l_P_1785, 0, sizeof l_P_1785);
l_P_1785 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1785))).f_TARGET = l_T_1784;
((*(R22 *)rt_nil_check(l_P_1785))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1784))
{
{ R26 rv1786 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1784), r_INIT_CODE(l_T_1784, r_MK(rt_str("(*p)", 4)))), l_P_1785);
return rv1786; }
}
{ R26 rv1787 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_1784), r_CTYPE(l_T_1784)), l_P_1785);
return rv1787; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1788; memset(&l_P_1788, 0, sizeof l_P_1788);
l_P_1788 = p_L;
{ rt_int it1790_lo = ((rt_int)1LL), it1790_hi = p_K;
for (rt_int it1790 = it1790_lo; it1790 <= it1790_hi; it1790++) {
{
if ((!(l_P_1788 == NULL)))
{
l_P_1788 = ((*(R21 *)rt_nil_check(l_P_1788))).f_NEXT;
}
}
RT_B_TICK();
if (it1790 == it1790_hi) break;
} } L_end1789: ;
{ R21 * rv1791 = l_P_1788;
return rv1791; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1792; memset(&l_N_1792, 0, sizeof l_N_1792);
l_N_1792 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1792 < p_LO) || (l_N_1792 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1793; memset(&l_L_1793, 0, sizeof l_L_1793);
l_L_1793 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1793 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1793))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1793))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1793))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1794 = r_MK(rt_str("1", 1));
return rv1794; }
}
{ R10 rv1795 = r_MK(rt_str("0", 1));
return rv1795; }
}
if (((((*(R21 *)rt_nil_check(l_L_1793))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1793))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1793))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1796 = r_MK(rt_str("1", 1));
return rv1796; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1793))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1797 = r_MK(rt_str("0", 1));
return rv1797; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1798 = r_MK(rt_str("1", 1));
return rv1798; }
}
{ R10 rv1799 = r_MK(rt_str("0", 1));
return rv1799; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1800 = 0;
return rv1800; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1801 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1801; }
}
{ rt_int rv1802 = 0;
return rv1802; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1803 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1803; }
}
{ R21 * rv1804 = p_E;
return rv1804; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1805; memset(&l_NAMES_1805, 0, sizeof l_NAMES_1805);
l_NAMES_1805 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_1805, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1806; memset(&l_L_1806, 0, sizeof l_L_1806);
l_L_1806 = (p_NAME).f_LEN;
{ rt_int it1808_lo = ((rt_int)0LL), it1808_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1806), ((rt_int)2LL));
for (rt_int it1808 = it1808_lo; it1808 <= it1808_hi; it1808++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1805, it1808, it1808), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1805, rt_add(rt_add(it1808, l_L_1806), ((rt_int)1LL)), rt_add(rt_add(it1808, l_L_1806), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1805, rt_add(it1808, ((rt_int)1LL)), rt_add(it1808, l_L_1806)), r_STR(p_NAME, l_L_1806)))
{
{
rt_int l_J_1809; memset(&l_J_1809, 0, sizeof l_J_1809);
l_J_1809 = rt_add(rt_add(it1808, l_L_1806), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1805, l_J_1809, l_J_1809), rt_str(" ", 1))) goto L_end1810;
{
l_J_1809 = rt_add(l_J_1809, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1810: ;
{ R10 rv1811 = r_MKN(rt_b_slice(l_NAMES_1805, rt_add(rt_add(it1808, l_L_1806), ((rt_int)2LL)), rt_sub(l_J_1809, ((rt_int)1LL))));
return rv1811; }
}
}
}
}
RT_B_TICK();
if (it1808 == it1808_hi) break;
} } L_end1807: ;
{ R10 rv1812 = r_NO_TEXT();
return rv1812; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1813; memset(&l_NAME_1813, 0, sizeof l_NAME_1813);
S_R10(&l_NAME_1813, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1814; memset(&l_LINE_1814, 0, sizeof l_LINE_1814);
l_LINE_1814 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1815; memset(&l_N_1815, 0, sizeof l_N_1815);
l_N_1815 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1813, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1813, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1816; memset(&l_TGT_1816, 0, sizeof l_TGT_1816);
l_TGT_1816 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1817; memset(&l_S_1817, 0, sizeof l_S_1817);
l_S_1817 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1814);
R21 * l_SRC_1818; memset(&l_SRC_1818, 0, sizeof l_SRC_1818);
l_SRC_1818 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1816 == NULL) || (l_SRC_1818 == NULL)))
{
r_FAILT(l_LINE_1814, rt_str("the wrong arguments for ", 24), l_NAME_1813);
}
if (r_TEQS(l_NAME_1813, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1817))).f_A = l_TGT_1816;
}
else
{
if ((l_N_1815 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1814, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1817))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1814);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1817))).f_A))).f_A = l_TGT_1816;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1817))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1817))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1817))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1818), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1813, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1814);
{
R14 l_SAVED_CODE_1819; memset(&l_SAVED_CODE_1819, 0, sizeof l_SAVED_CODE_1819);
S_R14(&l_SAVED_CODE_1819, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1820; memset(&l_C_1820, 0, sizeof l_C_1820);
S_R10(&l_C_1820, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1821; memset(&l_P_1821, 0, sizeof l_P_1821);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1822; memset(&rc1822, 0, sizeof rc1822);  rc1822.f_HEAD = NULL; rc1822.f_TAIL = NULL; rc1822; }), 0);
r_ASSIGN_STMT(l_S_1817);
l_P_1821 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1821 == NULL)) goto L_end1823;
{
S_R10(&l_C_1820, r_FMT2(rt_str("@ @", 3), l_C_1820, ((*(R15 *)rt_nil_check(l_P_1821))).f_T), 0);
l_P_1821 = ((*(R15 *)rt_nil_check(l_P_1821))).f_NEXT;
}
RT_B_TICK();
} L_end1823: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1819, 0);
{ R26 rv1824 = r_MKET(r_CATS(l_C_1820, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1824; }
}
}
}
if (r_TEQS(l_NAME_1813, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1825; memset(&l_S_1825, 0, sizeof l_S_1825);
l_S_1825 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1814);
((*(R21 *)rt_nil_check(l_S_1825))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1825))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1825))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1825))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1826 = r_EXPR(l_S_1825, p_WANT);
return rv1826; }
}
}
{
R10 l_SYM__1827; memset(&l_SYM__1827, 0, sizeof l_SYM__1827);
S_R10(&l_SYM__1827, r_OPERATOR_SYMBOL(l_NAME_1813), 0);
rt_int l_UNARY_OP_1828; memset(&l_UNARY_OP_1828, 0, sizeof l_UNARY_OP_1828);
l_UNARY_OP_1828 = ((r_TEQS(l_NAME_1813, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1813, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1813, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1829; memset(&l_X_1829, 0, sizeof l_X_1829);
if (l_UNARY_OP_1828)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1829 = r_NEW_NODE(g_N_UNOP, l_LINE_1814);
S_R10(&((*(R21 *)rt_nil_check(l_X_1829))).f_NAME, l_SYM__1827, 0);
((*(R21 *)rt_nil_check(l_X_1829))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1830 = r_EXPR(r_QUALIFIED(l_X_1829, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1814), p_WANT);
return rv1830; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1829 = r_BIN_NODE(l_SYM__1827, l_LINE_1814, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1827, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1829))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1813, (l_NAME_1813).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1829))).f_FL = ((rt_int)2LL);
}
{ R26 rv1831 = r_EXPR(r_QUALIFIED(l_X_1829, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1814), p_WANT);
return rv1831; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1832; memset(&l_R_1832, 0, sizeof l_R_1832);
l_R_1832 = p_X;
R21 * l_P_1833; memset(&l_P_1833, 0, sizeof l_P_1833);
l_P_1833 = p_Q;
for (;;) {
if ((l_P_1833 == NULL)) goto L_end1834;
{
if ((l_R_1832 == p_X))
{
l_R_1832 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1832))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1833))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1833))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1833))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1832))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1833))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1832))).f_B = l_P_1833;
}
l_P_1833 = ((*(R21 *)rt_nil_check(l_P_1833))).f_NEXT;
}
RT_B_TICK();
} L_end1834: ;
{ R21 * rv1835 = l_R_1832;
return rv1835; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1836 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1836; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1837; memset(&l_Y_1837, 0, sizeof l_Y_1837);
l_Y_1837 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1837 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1837))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1838; memset(&l_T_1838, 0, sizeof l_T_1838);
l_T_1838 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1837))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1838))).f_KIND == g_T_ENUM))
{
{ R22 * rv1839 = l_T_1838;
return rv1839; }
}
}
}
}
{ R22 * rv1840 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1840; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1841 = 1;
return rv1841; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1842 = 1;
return rv1842; }
}
{ rt_int rv1843 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1843; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1844 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1844; }
}
{ R21 * rv1845 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1845; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1846; memset(&l_NAME_1846, 0, sizeof l_NAME_1846);
S_R10(&l_NAME_1846, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1847; memset(&l_LINE_1847, 0, sizeof l_LINE_1847);
l_LINE_1847 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((((r_OPERATOR_SYMBOL(l_NAME_1846)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1846, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1846, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1846, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1848 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1848; }
}
if ((r_TEQS(l_NAME_1846, rt_str("PUT", 3)) || r_TEQS(l_NAME_1846, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1849; memset(&l_V_1849, 0, sizeof l_V_1849);
S_R26(&l_V_1849, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1849).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1847, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_1849).f_T, rt_str("the terminal", 12), l_LINE_1847);
if (r_TEQS(l_NAME_1846, rt_str("PUT", 3)))
{
{ R26 rv1850 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1849).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1850; }
}
{ R26 rv1851 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1849).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1851; }
}
}
else if (r_TEQS(l_NAME_1846, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1852 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1852; }
}
else if (r_TEQS(l_NAME_1846, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1853 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1853; }
}
else if (r_TEQS(l_NAME_1846, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1854 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1854; }
}
else if (r_TEQS(l_NAME_1846, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1855 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1855; }
}
else if (r_TEQS(l_NAME_1846, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1856 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1856; }
}
else if (r_TEQS(l_NAME_1846, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1857 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1857; }
}
if (r_TEQS(l_NAME_1846, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1858 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1847);
return rv1858; }
}
else if (r_TEQS(l_NAME_1846, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1859 = r_TO_FIXED_CALL(p_E);
return rv1859; }
}
else if (r_TEQS(l_NAME_1846, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1860; memset(&l_V_1860, 0, sizeof l_V_1860);
S_R26(&l_V_1860, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1861; memset(&l_P_1861, 0, sizeof l_P_1861);
S_R23(&l_P_1861, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1862; memset(&l_VT_1862, 0, sizeof l_VT_1862);
l_VT_1862 = r_REAL_TYPE((l_V_1860).f_T);
R22 * l_T_1863; memset(&l_T_1863, 0, sizeof l_T_1863);
l_T_1863 = r_FLOAT_TYPE((l_P_1861).f_V);
R10 l_SINGLE_1864; memset(&l_SINGLE_1864, 0, sizeof l_SINGLE_1864);
S_R10(&l_SINGLE_1864, r_SINGLE_C((l_P_1861).f_V), 0);
R10 l_TR_1865; memset(&l_TR_1865, 0, sizeof l_TR_1865);
S_R10(&l_TR_1865, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1866; memset(&l_R_1866, 0, sizeof l_R_1866);
l_R_1866 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1866 == NULL))
{
l_R_1866 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1866))).f_KIND == g_N_QUAL))
{
l_R_1866 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1866))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1866))).f_NAME).f_LEN), l_LINE_1847);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1866))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1865, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1866))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1847, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1862))).f_KIND == g_T_INT))
{
{ R26 rv1867 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1860).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1862))).f_SCALE), l_SINGLE_1864, l_TR_1865), l_T_1863);
return rv1867; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1862))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1861).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1862))).f_SCALE))))
{
{
R21 * l_Q_1868; memset(&l_Q_1868, 0, sizeof l_Q_1868);
l_Q_1868 = r_NEW_NODE(g_N_QUAL, l_LINE_1847);
R21 * l_SAVED_Q_1869; memset(&l_SAVED_Q_1869, 0, sizeof l_SAVED_Q_1869);
l_SAVED_Q_1869 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1870; memset(&l_L_1870, 0, sizeof l_L_1870);
((*(R21 *)rt_nil_check(l_Q_1868))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1868;
S_R26(&l_L_1870, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1869;
{ R26 rv1871 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1870).f_C, l_SINGLE_1864, l_TR_1865), l_T_1863);
return rv1871; }
}
}
{ R26 rv1872 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1860).f_C, l_SINGLE_1864, l_TR_1865), l_T_1863);
return rv1872; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1862))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1862))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1862))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1847, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1873 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1860).f_C, l_SINGLE_1864, l_TR_1865), l_T_1863);
return rv1873; }
}
r_FAIL(l_LINE_1847, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1846, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1874 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1847);
return rv1874; }
}
else if (r_TEQS(l_NAME_1846, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1875; memset(&l_V_1875, 0, sizeof l_V_1875);
S_R26(&l_V_1875, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1875).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1876 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1875).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1875).f_T))).f_SCALE));
return rv1876; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1875).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1877 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1875).f_C), (l_V_1875).f_T);
return rv1877; }
}
r_FAIL(l_LINE_1847, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1846, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1846, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1878; memset(&l_V_1878, 0, sizeof l_V_1878);
S_R26(&l_V_1878, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1879; memset(&l_T_1879, 0, sizeof l_T_1879);
l_T_1879 = r_REAL_TYPE((l_V_1878).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1879))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1847, rt_str("an enumerated value expected by ", 32), l_NAME_1846);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1879))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1847, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1846);
}
if (r_TEQS(l_NAME_1846, rt_str("SUCC", 4)))
{
{ R26 rv1880 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1878).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1879))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1879))).f_BASE);
return rv1880; }
}
{ R26 rv1881 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1878).f_C), ((*(R22 *)rt_nil_check(l_T_1879))).f_BASE);
return rv1881; }
}
}
else if (r_TEQS(l_NAME_1846, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1882; memset(&l_V_1882, 0, sizeof l_V_1882);
S_R26(&l_V_1882, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1883; memset(&l_K_1883, 0, sizeof l_K_1883);
l_K_1883 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1882).f_T)))).f_KIND;
R22 * l_T_1884; memset(&l_T_1884, 0, sizeof l_T_1884);
l_T_1884 = r_NEW_TYP(l_K_1883);
if (((!(l_K_1883 == g_T_STR)) && (!(l_K_1883 == g_T_BITS))))
{
r_FAIL(l_LINE_1847, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1884))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1882).f_T))).f_BASE;
{ R26 rv1885 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1882).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1884);
return rv1885; }
}
}
else if (r_TEQS(l_NAME_1846, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1886 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1886; }
}
else if (r_TEQS(l_NAME_1846, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1887 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1887; }
}
else if (((r_TEQS(l_NAME_1846, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1846, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1846, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1888; memset(&l_BITS_1888, 0, sizeof l_BITS_1888);
S_R10(&l_BITS_1888, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1846, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1888, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1846, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1888, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_1889; memset(&l_V_1889, 0, sizeof l_V_1889);
S_R26(&l_V_1889, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1889).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_1847, rt_str("a character string expected by ", 31), l_NAME_1846);
}
r_ASCII_ONLY((l_V_1889).f_T, r_STR(l_NAME_1846, (l_NAME_1846).f_LEN), l_LINE_1847);
{ R26 rv1890 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_1889).f_C, l_BITS_1888), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1890; }
}
}
}
else if ((r_TEQS(l_NAME_1846, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1846, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1891; memset(&l_S_1891, 0, sizeof l_S_1891);
S_R23(&l_S_1891, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1892; memset(&l_R_1892, 0, sizeof l_R_1892);
S_R23(&l_R_1892, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1892).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1847, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1847);
if (r_TEQS(l_NAME_1846, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1893 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1891).f_V));
return rv1893; }
}
{ R26 rv1894 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1891).f_V));
return rv1894; }
}
}
else if (((r_TEQS(l_NAME_1846, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1846, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1846, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1895; memset(&l_P_1895, 0, sizeof l_P_1895);
S_R23(&l_P_1895, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1896; memset(&l_T_1896, 0, sizeof l_T_1896);
l_T_1896 = r_FLOAT_TYPE((l_P_1895).f_V);
R10 l_C_1897; memset(&l_C_1897, 0, sizeof l_C_1897);
S_R10(&l_C_1897, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1895).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1897, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1846, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1898 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1897), l_T_1896);
return rv1898; }
}
else if (r_TEQS(l_NAME_1846, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1899 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1897), l_T_1896);
return rv1899; }
}
{ R26 rv1900 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1897), l_T_1896);
return rv1900; }
}
}
else if (r_TEQS(l_NAME_1846, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1901 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1901; }
}
else if (r_TEQS(l_NAME_1846, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1902 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1902; }
}
else if (r_TEQS(l_NAME_1846, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1903 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1903; }
}
{ R26 rv1904 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1904; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1905; memset(&l_T_1905, 0, sizeof l_T_1905);
l_T_1905 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1906; memset(&l_K_1906, 0, sizeof l_K_1906);
l_K_1906 = ((*(R22 *)rt_nil_check(l_T_1905))).f_KIND;
R22 * l_S_1907; memset(&l_S_1907, 0, sizeof l_S_1907);
l_S_1907 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1906 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1905))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1908 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1907);
return rv1908; }
}
{ R26 rv1909 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1905))).f_SCALE)), l_S_1907);
return rv1909; }
}
else if ((l_K_1906 == g_T_FLOAT))
{
{ R26 rv1910 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1905))).f_SCALE)), l_S_1907);
return rv1910; }
}
else if ((l_K_1906 == g_T_BOOL))
{
{ R26 rv1911 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1907);
return rv1911; }
}
else if ((l_K_1906 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1905))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1912 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1907);
return rv1912; }
}
{ R26 rv1913 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1905))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1907);
return rv1913; }
}
else if (((l_K_1906 == g_T_STR) || (l_K_1906 == g_T_BITS)))
{
{ R26 rv1914 = r_MKET((p_V).f_C, l_S_1907);
return rv1914; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1905));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1915; memset(&l_V_1915, 0, sizeof l_V_1915);
S_R26(&l_V_1915, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1916; memset(&l_T_1916, 0, sizeof l_T_1916);
l_T_1916 = r_REAL_TYPE((l_V_1915).f_T);
rt_int l_N_1917; memset(&l_N_1917, 0, sizeof l_N_1917);
l_N_1917 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1918; memset(&l_RND_1918, 0, sizeof l_RND_1918);
S_R10(&l_RND_1918, r_ROUNDING_ARG(p_E, l_N_1917), 0);
rt_int l_S_1919; memset(&l_S_1919, 0, sizeof l_S_1919);
l_S_1919 = ((rt_int)0LL);
if (((l_N_1917 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1919 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1920; memset(&l_K_1920, 0, sizeof l_K_1920);
l_K_1920 = ((rt_int)2LL);
for (;;) {
if ((l_K_1920 >= l_N_1917)) goto L_end1921;
{
{
R21 * l_R_1922; memset(&l_R_1922, 0, sizeof l_R_1922);
l_R_1922 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1920));
if ((r_IS_ROUNDING(l_R_1922) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1920)))).f_KIND == g_N_QUAL) && (l_K_1920 == rt_sub(l_N_1917, ((rt_int)1LL)))))))
{
if ((!(l_K_1920 == rt_sub(l_N_1917, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1922))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1922))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1922))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1922, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1922))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1922))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1922, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1920 = rt_add(l_K_1920, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1921: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1916))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1923 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1919), l_RND_1918), r_INT_TYPE(l_S_1919));
return rv1923; }
}
if ((((*(R22 *)rt_nil_check(l_T_1916))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1924; memset(&l_SAVED_1924, 0, sizeof l_SAVED_1924);
l_SAVED_1924 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1925; memset(&l_C_1925, 0, sizeof l_C_1925);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1918, rt_str("1", 1));
S_R10(&l_C_1925, r_RESCALE_C((l_V_1915).f_C, ((*(R22 *)rt_nil_check(l_T_1916))).f_SCALE, l_S_1919), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1924;
{ R26 rv1926 = r_MKET(l_C_1925, r_INT_TYPE(l_S_1919));
return rv1926; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1916))).f_KIND == g_T_FLOAT))
{
{ R26 rv1927 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1915).f_C, r_NUM(l_S_1919), l_RND_1918), r_INT_TYPE(l_S_1919));
return rv1927; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1916))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1916))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1916))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1916))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1916))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1916))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1928 = r_MKET(r_RESCALE_C((l_V_1915).f_C, ((rt_int)0LL), l_S_1919), r_INT_TYPE(l_S_1919));
return rv1928; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1916))).f_KIND == g_T_BITS))
{
{ R26 rv1929 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1915).f_C), ((rt_int)0LL), l_S_1919), r_INT_TYPE(l_S_1919));
return rv1929; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1916))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_1916, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1930 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1915).f_C, r_NUM(l_S_1919), l_RND_1918), r_INT_TYPE(l_S_1919));
return rv1930; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1915).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1931; memset(&l_T_1931, 0, sizeof l_T_1931);
l_T_1931 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1932; memset(&l_K_1932, 0, sizeof l_K_1932);
l_K_1932 = ((*(R22 *)rt_nil_check(l_T_1931))).f_KIND;
if ((l_K_1932 == g_T_BITS))
{
{ R26 rv1933 = p_V;
return rv1933; }
}
else if ((l_K_1932 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1931))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1931))).f_REPS))).f_B == NULL)))
{
{ R26 rv1934 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1931)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1931)));
return rv1934; }
}
}
{ R26 rv1935 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1931))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1931)));
return rv1935; }
}
else if ((l_K_1932 == g_T_STR))
{
{ R26 rv1936 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1936; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1932 == g_T_INT))
{
{ R26 rv1937 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1937; }
}
else if ((l_K_1932 == g_T_BOOL))
{
{ R26 rv1938 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1938; }
}
else if ((l_K_1932 == g_T_FLOAT))
{
{ R26 rv1939 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1939; }
}
else if ((l_K_1932 == g_T_STR))
{
{ R26 rv1940 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1940; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1931));
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
{ rt_int rv1941 = 0;
return rv1941; }
}
{ rt_int rv1942 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1942; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1943; memset(&l_N_1943, 0, sizeof l_N_1943);
l_N_1943 = ((rt_int)0LL);
R27 * l_P_1944; memset(&l_P_1944, 0, sizeof l_P_1944);
l_P_1944 = p_A;
for (;;) {
if ((l_P_1944 == NULL)) goto L_end1945;
{
l_N_1943 = rt_add(l_N_1943, ((rt_int)1LL));
l_P_1944 = ((*(R27 *)rt_nil_check(l_P_1944))).f_NEXT;
}
RT_B_TICK();
} L_end1945: ;
{ rt_int rv1946 = l_N_1943;
return rv1946; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1947; memset(&l_HEAD_1947, 0, sizeof l_HEAD_1947);
l_HEAD_1947 = NULL;
R27 * l_TAIL_1948; memset(&l_TAIL_1948, 0, sizeof l_TAIL_1948);
l_TAIL_1948 = NULL;
rt_int l_G_1949; memset(&l_G_1949, 0, sizeof l_G_1949);
l_G_1949 = ((rt_int)0LL);
{ rt_int it1951_lo = ((rt_int)0LL), it1951_hi = ((rt_int)2LL);
for (rt_int it1951 = it1951_lo; it1951 <= it1951_hi; it1951++) {
{
{
R21 * l_P_1952; memset(&l_P_1952, 0, sizeof l_P_1952);
l_P_1952 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1951 == ((rt_int)1LL)))
{
l_P_1952 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1951 == ((rt_int)2LL)))
{
l_P_1952 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1952 == NULL)) goto L_end1953;
{
{
R27 * l_A_1954; memset(&l_A_1954, 0, sizeof l_A_1954);
l_A_1954 = r_NODE_ARG(l_P_1952, it1951, NULL);
if ((l_TAIL_1948 == NULL))
{
l_HEAD_1947 = l_A_1954;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1948))).f_NEXT = l_A_1954;
}
l_TAIL_1948 = l_A_1954;
}
l_P_1952 = ((*(R21 *)rt_nil_check(l_P_1952))).f_NEXT;
}
RT_B_TICK();
} L_end1953: ;
}
}
RT_B_TICK();
if (it1951 == it1951_hi) break;
} } L_end1950: ;
{ R27 * rv1955 = l_HEAD_1947;
return rv1955; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1956; memset(&l_SAVED_1956, 0, sizeof l_SAVED_1956);
l_SAVED_1956 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1957; memset(&l_SAVED_Q_1957, 0, sizeof l_SAVED_Q_1957);
l_SAVED_Q_1957 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1958; memset(&l_V_1958, 0, sizeof l_V_1958);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1958, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1956;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1957;
{ R26 rv1959 = l_V_1958;
return rv1959; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1960; memset(&l_ARGS_1960, 0, sizeof l_ARGS_1960);
l_ARGS_1960 = r_CALL_ARGS(p_E);
R12 * l_Y_1961; memset(&l_Y_1961, 0, sizeof l_Y_1961);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1962 = r_START_IO_CALL(p_E);
return rv1962; }
}
l_Y_1961 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1961 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1961))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1963 = r_BUILTIN(p_E, p_WANT);
return rv1963; }
}
{ R26 rv1964 = r_CALL_SYM(l_Y_1961, l_ARGS_1960, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1964; }
}
l_Y_1961 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1960, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1961 == NULL))
{
{
R12 * l_P_1965; memset(&l_P_1965, 0, sizeof l_P_1965);
l_P_1965 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1965 == NULL)) goto L_end1966;
{
if ((((*(R12 *)rt_nil_check(l_P_1965))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1967 = r_BUILTIN(p_E, p_WANT);
return rv1967; }
}
l_P_1965 = r_LOOKUP_NEXT(l_P_1965);
}
RT_B_TICK();
} L_end1966: ;
}
{
R12 * l_B_1968; memset(&l_B_1968, 0, sizeof l_B_1968);
l_B_1968 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1968 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1968))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1969 = r_BUILTIN(p_E, p_WANT);
return rv1969; }
}
if (((((*(R12 *)rt_nil_check(l_B_1968))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1968))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_1970; memset(&l_BASE_1970, 0, sizeof l_BASE_1970);
S_R10(&l_BASE_1970, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_1970).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_1971; memset(&l_N_1971, 0, sizeof l_N_1971);
l_N_1971 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_1971))).f_NAME, l_BASE_1970, 0);
{ R26 rv1972 = r_BUILTIN(l_N_1971, p_WANT);
return rv1972; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1973 = r_CALL_SYM(l_Y_1961, l_ARGS_1960, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1973; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_1974; memset(&l_S_1974, 0, sizeof l_S_1974);
l_S_1974 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1974, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1976_lo = ((rt_int)1LL), it1976_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1976 = it1976_lo; it1976 <= it1976_hi; it1976++) {
{
if (rt_b_eq(rt_b_slice(l_S_1974, it1976, it1976), rt_str("$", 1)))
{
{
R10 l_P_1977; memset(&l_P_1977, 0, sizeof l_P_1977);
S_R10(&l_P_1977, r_MKN(rt_b_slice(l_S_1974, ((rt_int)0LL), rt_sub(it1976, ((rt_int)1LL)))), 0);
R10 l_B_1978; memset(&l_B_1978, 0, sizeof l_B_1978);
S_R10(&l_B_1978, r_MKN(rt_b_slice(l_S_1974, rt_add(it1976, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_1977) || r_TEQS(l_P_1977, rt_str("INTEGER", 7))) || r_TEQS(l_P_1977, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_1977, rt_str("ENUM", 4))) || r_TEQS(l_P_1977, rt_str("ARRAY", 5))) || r_TEQS(l_P_1977, rt_str("RECORD", 6))) || r_TEQS(l_P_1977, rt_str("PTR", 3))) || r_TEQS(l_P_1977, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_1979; memset(&l_Y_1979, 0, sizeof l_Y_1979);
l_Y_1979 = r_LOOKUP(l_B_1978);
for (;;) {
if ((l_Y_1979 == NULL)) goto L_end1980;
{
if ((((*(R12 *)rt_nil_check(l_Y_1979))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv1981 = l_B_1978;
return rv1981; }
}
l_Y_1979 = r_LOOKUP_NEXT(l_Y_1979);
}
RT_B_TICK();
} L_end1980: ;
}
}
}
{ R10 rv1982 = r_NO_TEXT();
return rv1982; }
}
}
RT_B_TICK();
if (it1976 == it1976_hi) break;
} } L_end1975: ;
{ R10 rv1983 = r_NO_TEXT();
return rv1983; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1984; memset(&l_B_1984, 0, sizeof l_B_1984);
l_B_1984 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1985; memset(&l_S_1985, 0, sizeof l_S_1985);
l_S_1985 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1985, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1987_lo = ((rt_int)1LL), it1987_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1987 = it1987_lo; it1987 <= it1987_hi; it1987++) {
{
if (rt_b_eq(rt_b_slice(l_S_1985, it1987, it1987), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1985, ((rt_int)0LL), rt_sub(it1987, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1988 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1985, rt_add(it1987, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1988; }
}
goto L_end1986;
}
}
RT_B_TICK();
if (it1987 == it1987_hi) break;
} } L_end1986: ;
}
for (;;) {
if ((l_B_1984 == NULL)) goto L_end1989;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1984))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1984))).f_NAME, p_NAME)))
{
{ R12 * rv1990 = ((*(R20 *)rt_nil_check(l_B_1984))).f_R;
return rv1990; }
}
l_B_1984 = ((*(R20 *)rt_nil_check(l_B_1984))).f_NEXT;
}
RT_B_TICK();
} L_end1989: ;
{ R12 * rv1991 = NULL;
return rv1991; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1992 = 0;
return rv1992; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1993 = 0;
return rv1993; }
}
}
}
{ rt_int rv1994 = 1;
return rv1994; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1995; memset(&l_Y_1995, 0, sizeof l_Y_1995);
l_Y_1995 = r_LOOKUP(p_NAME);
R12 * l_BEST_1996; memset(&l_BEST_1996, 0, sizeof l_BEST_1996);
l_BEST_1996 = NULL;
rt_int l_BEST_SCORE_1997; memset(&l_BEST_SCORE_1997, 0, sizeof l_BEST_SCORE_1997);
l_BEST_SCORE_1997 = ((rt_int)0LL);
rt_int l_TIES_1998; memset(&l_TIES_1998, 0, sizeof l_TIES_1998);
l_TIES_1998 = ((rt_int)0LL);
rt_int l_COUNT_1999; memset(&l_COUNT_1999, 0, sizeof l_COUNT_1999);
l_COUNT_1999 = ((rt_int)0LL);
rt_int l_N_2000; memset(&l_N_2000, 0, sizeof l_N_2000);
l_N_2000 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1995 == NULL)) goto L_end2001;
{
if ((!r_IS_ROUTINE(l_Y_1995)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1995))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2001;
}
}
else if (r_CANDIDATE(l_Y_1995, p_NAME))
{
{
R12 * l_R_2002; memset(&l_R_2002, 0, sizeof l_R_2002);
l_R_2002 = r_ORIGINAL(l_Y_1995);
rt_int l_SCORE_2003; memset(&l_SCORE_2003, 0, sizeof l_SCORE_2003);
r_ROUTINE_HEADER(l_R_2002);
if ((((r_PARAM_COUNT(l_R_2002) == l_N_2000) && (!r_SEEN_ROUTINE(l_R_2002, p_NAME, l_Y_1995))) && (!r_HIDDEN_ROUTINE(l_R_2002, p_NAME, l_Y_1995))))
{
l_COUNT_1999 = rt_add(l_COUNT_1999, ((rt_int)1LL));
l_SCORE_2003 = r_MATCH_SCORE(l_R_2002, p_ARGS);
if ((l_SCORE_2003 > l_BEST_SCORE_1997))
{
l_BEST_1996 = l_R_2002;
l_BEST_SCORE_1997 = l_SCORE_2003;
l_TIES_1998 = ((rt_int)0LL);
}
else if (((l_SCORE_2003 == l_BEST_SCORE_1997) && (l_SCORE_2003 > ((rt_int)0LL))))
{
l_TIES_1998 = rt_add(l_TIES_1998, ((rt_int)1LL));
}
}
}
}
l_Y_1995 = r_LOOKUP_NEXT(l_Y_1995);
}
RT_B_TICK();
} L_end2001: ;
if (((l_TIES_1998 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2004 = l_BEST_1996;
return rv2004; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2005; memset(&l_Y_2005, 0, sizeof l_Y_2005);
l_Y_2005 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2005 == p_STOP) || (l_Y_2005 == NULL))) goto L_end2006;
{
if ((((*(R12 *)rt_nil_check(l_Y_2005))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2005) == p_R))
{
{ rt_int rv2007 = 1;
return rv2007; }
}
}
l_Y_2005 = r_LOOKUP_NEXT(l_Y_2005);
}
RT_B_TICK();
} L_end2006: ;
{ rt_int rv2008 = 0;
return rv2008; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2009; memset(&l_Y_2009, 0, sizeof l_Y_2009);
l_Y_2009 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2009 == p_STOP) || (l_Y_2009 == NULL))) goto L_end2010;
{
if (((((*(R12 *)rt_nil_check(l_Y_2009))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2009))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2011; memset(&l_O_2011, 0, sizeof l_O_2011);
l_O_2011 = r_ORIGINAL(l_Y_2009);
if ((!(l_O_2011 == p_R)))
{
r_ROUTINE_HEADER(l_O_2011);
if (r_SAME_SIGNATURE(l_O_2011, p_R))
{
{ rt_int rv2012 = 1;
return rv2012; }
}
}
}
}
l_Y_2009 = r_LOOKUP_NEXT(l_Y_2009);
}
RT_B_TICK();
} L_end2010: ;
{ rt_int rv2013 = 0;
return rv2013; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2014; memset(&l_P_2014, 0, sizeof l_P_2014);
l_P_2014 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2015; memset(&l_Q_2015, 0, sizeof l_Q_2015);
l_Q_2015 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2016 = 0;
return rv2016; }
}
for (;;) {
if (((l_P_2014 == NULL) || (l_Q_2015 == NULL))) goto L_end2017;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2014))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2015))).f_MODE)))
{
{ rt_int rv2018 = 0;
return rv2018; }
}
if (((((*(R28 *)rt_nil_check(l_P_2014))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2015))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2014))).f_T == ((*(R28 *)rt_nil_check(l_Q_2015))).f_T)))
{
{ rt_int rv2019 = 0;
return rv2019; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2014))).f_T, ((*(R28 *)rt_nil_check(l_Q_2015))).f_T)))
{
{ rt_int rv2020 = 0;
return rv2020; }
}
l_P_2014 = ((*(R28 *)rt_nil_check(l_P_2014))).f_NEXT;
l_Q_2015 = ((*(R28 *)rt_nil_check(l_Q_2015))).f_NEXT;
}
RT_B_TICK();
} L_end2017: ;
{ rt_int rv2021 = ((l_P_2014 == NULL) && (l_Q_2015 == NULL));
return rv2021; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2022; memset(&l_N_2022, 0, sizeof l_N_2022);
l_N_2022 = ((rt_int)0LL);
R28 * l_P_2023; memset(&l_P_2023, 0, sizeof l_P_2023);
l_P_2023 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2023 == NULL)) goto L_end2024;
{
l_N_2022 = rt_add(l_N_2022, ((rt_int)1LL));
l_P_2023 = ((*(R28 *)rt_nil_check(l_P_2023))).f_NEXT;
}
RT_B_TICK();
} L_end2024: ;
{ rt_int rv2025 = l_N_2022;
return rv2025; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2026; memset(&l_P_2026, 0, sizeof l_P_2026);
l_P_2026 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2027; memset(&l_A_2027, 0, sizeof l_A_2027);
l_A_2027 = p_ARGS;
rt_int l_EXACT_2028; memset(&l_EXACT_2028, 0, sizeof l_EXACT_2028);
l_EXACT_2028 = 1;
R20 * l_BS_2029; memset(&l_BS_2029, 0, sizeof l_BS_2029);
l_BS_2029 = r_NEW_BINDS();
R22 * l_PT_2030; memset(&l_PT_2030, 0, sizeof l_PT_2030);
for (;;) {
if ((l_P_2026 == NULL)) goto L_end2031;
{
l_PT_2030 = r_FORMAL_VIEW(p_R, l_P_2026);
if ((!(((*(R28 *)rt_nil_check(l_P_2026))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2027))).f_MODE)))
{
{ rt_int rv2032 = ((rt_int)0LL);
return rv2032; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2026))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2026, l_A_2027, l_BS_2029)))
{
{ rt_int rv2033 = ((rt_int)0LL);
return rv2033; }
}
}
else if ((l_PT_2030 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2027))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2027))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2034 = ((rt_int)0LL);
return rv2034; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2027))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2027))).f_E, l_PT_2030)))
{
{ rt_int rv2035 = ((rt_int)0LL);
return rv2035; }
}
}
else
{
r_TYPE_ARG(l_A_2027);
{
R22 * l_AT_2036; memset(&l_AT_2036, 0, sizeof l_AT_2036);
l_AT_2036 = (((*(R27 *)rt_nil_check(l_A_2027))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2030, l_AT_2036) || (((((*(R22 *)rt_nil_check(l_AT_2036))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2030)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2037 = ((rt_int)0LL);
return rv2037; }
}
if ((!r_SAME_TYPE(l_PT_2030, l_AT_2036)))
{
if ((((*(R28 *)rt_nil_check(l_P_2026))).f_MODE == g_M_INOUT))
{
{ rt_int rv2038 = ((rt_int)0LL);
return rv2038; }
}
l_EXACT_2028 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2036)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2030)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2026))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2036))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2030))).f_SCALE)))
{
{ rt_int rv2039 = ((rt_int)0LL);
return rv2039; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2026))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2030))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2036))).f_SCALE)))
{
{ rt_int rv2040 = ((rt_int)0LL);
return rv2040; }
}
}
}
}
l_P_2026 = ((*(R28 *)rt_nil_check(l_P_2026))).f_NEXT;
l_A_2027 = ((*(R27 *)rt_nil_check(l_A_2027))).f_NEXT;
}
RT_B_TICK();
} L_end2031: ;
if (l_EXACT_2028)
{
{ rt_int rv2041 = ((rt_int)2LL);
return rv2041; }
}
{ rt_int rv2042 = ((rt_int)1LL);
return rv2042; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2043; memset(&l_RT_2043, 0, sizeof l_RT_2043);
l_RT_2043 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2043))).f_KIND == g_T_ENUM))
{
{ rt_int rv2044 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_2043) == NULL));
return rv2044; }
}
{ rt_int rv2045 = 0;
return rv2045; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2046 = (((*(R22 *)rt_nil_check(l_RT_2043))).f_KIND == g_T_PTR);
return rv2046; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2047 = (((*(R22 *)rt_nil_check(l_RT_2043))).f_KIND == g_T_REC);
return rv2047; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2048 = (((*(R22 *)rt_nil_check(l_RT_2043))).f_KIND == g_T_ARR);
return rv2048; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2049 = (((*(R22 *)rt_nil_check(l_RT_2043))).f_KIND == g_T_INT);
return rv2049; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2050 = ((((*(R22 *)rt_nil_check(l_RT_2043))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2043))).f_KIND == g_T_SEM));
return rv2050; }
}
{ rt_int rv2051 = 0;
return rv2051; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2052; memset(&l_Y_2052, 0, sizeof l_Y_2052);
l_Y_2052 = r_ORIGINAL(p_Y0);
R28 * l_P_2053; memset(&l_P_2053, 0, sizeof l_P_2053);
R27 * l_A_2054; memset(&l_A_2054, 0, sizeof l_A_2054);
l_A_2054 = p_ARGS;
R10 l_C_2055; memset(&l_C_2055, 0, sizeof l_C_2055);
S_R10(&l_C_2055, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2056; memset(&l_SEP_2056, 0, sizeof l_SEP_2056);
S_R10(&l_SEP_2056, r_MK(rt_str("", 0)), 0);
R10 l_PRE_2057; memset(&l_PRE_2057, 0, sizeof l_PRE_2057);
S_R10(&l_PRE_2057, r_MK(rt_str("", 0)), 0);
R10 l_POST_2058; memset(&l_POST_2058, 0, sizeof l_POST_2058);
S_R10(&l_POST_2058, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2059; memset(&l_SHARED_2059, 0, sizeof l_SHARED_2059);
l_SHARED_2059 = 0;
R22 * l_PT_2060; memset(&l_PT_2060, 0, sizeof l_PT_2060);
if (((*(R12 *)rt_nil_check(l_Y_2052))).f_GENERIC)
{
l_Y_2052 = r_INSTANCE(l_Y_2052, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_2052, p_LINE);
if (((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) && (!(((*(R12 *)rt_nil_check(l_Y_2052))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2052))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2052))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_2055, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2052))).f_LEVEL), 0);
S_R10(&l_SEP_2056, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2061; memset(&l_Q_2061, 0, sizeof l_Q_2061);
l_Q_2061 = p_ARGS;
for (;;) {
if ((l_Q_2061 == NULL)) goto L_end2062;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2061))).f_MODE == g_M_IN)))
{
l_SHARED_2059 = 1;
}
l_Q_2061 = ((*(R27 *)rt_nil_check(l_Q_2061))).f_NEXT;
}
RT_B_TICK();
} L_end2062: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2052))).f_USES == NULL)))
{
l_SHARED_2059 = 1;
}
}
l_P_2053 = ((*(R12 *)rt_nil_check(l_Y_2052))).f_PARAMS;
for (;;) {
if ((l_P_2053 == NULL)) goto L_end2063;
{
if ((l_A_2054 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2060 = r_FORMAL_VIEW(l_Y_2052, l_P_2053);
if ((l_PT_2060 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2053))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2060)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2064; memset(&l_V_2064, 0, sizeof l_V_2064);
R10 l_CV_2065; memset(&l_CV_2065, 0, sizeof l_CV_2065);
if ((((*(R27 *)rt_nil_check(l_A_2054))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2054))))
{
S_R26(&l_V_2064, ((*(R27 *)rt_nil_check(l_A_2054))).f_V, 0);
}
else
{
S_R26(&l_V_2064, r_EXPR(((*(R27 *)rt_nil_check(l_A_2054))).f_E, l_PT_2060), 0);
}
S_R10(&l_CV_2065, r_CONVERT(l_V_2064, l_PT_2060, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2059 && (l_V_2064).f_LVAL) && r_IS_STRUCTURED(l_PT_2060)))
{
S_R10(&l_CV_2065, r_COPY_OF(l_PT_2060, l_CV_2065), 0);
}
S_R10(&l_C_2055, r_FMT3(rt_str("@@@", 3), l_C_2055, l_SEP_2056, l_CV_2065), 0);
S_R10(&l_SEP_2056, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2066; memset(&l_V_2066, 0, sizeof l_V_2066);
if (((*(R27 *)rt_nil_check(l_A_2054))).f_HAVE)
{
S_R26(&l_V_2066, ((*(R27 *)rt_nil_check(l_A_2054))).f_V, 0);
}
else
{
S_R26(&l_V_2066, r_EXPR(((*(R27 *)rt_nil_check(l_A_2054))).f_E, l_PT_2060), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2054))).f_E == NULL)) && (!(l_V_2066).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2054))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2054))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2066, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2066).f_C), (l_V_2066).f_T), 0);
(l_V_2066).f_LVAL = 1;
}
}
if ((!(l_V_2066).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2060, (l_V_2066).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2060));
}
if (((((*(R28 *)rt_nil_check(l_P_2053))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2060, (l_V_2066).f_T) && r_SAME_RANGE(l_PT_2060, (l_V_2066).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2053))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2060, (l_V_2066).f_T) && r_SAME_RANGE(l_PT_2060, (l_V_2066).f_T))))))
{
{
R10 l_TMP_2067; memset(&l_TMP_2067, 0, sizeof l_TMP_2067);
S_R10(&l_TMP_2067, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_2068; memset(&l_AP_2068, 0, sizeof l_AP_2068);
S_R10(&l_AP_2068, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_2057, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2057, r_CTYPE((l_V_2066).f_T), l_AP_2068, (l_V_2066).f_C), 0);
S_R10(&l_PRE_2057, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2057, r_CTYPE(l_PT_2060), l_TMP_2067, r_COPY_OF((l_V_2066).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2068))), 0);
S_R10(&l_POST_2058, r_FMT2(rt_str("@ @", 3), l_POST_2058, r_STORE_CODE((l_V_2066).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2068), r_MKET(l_TMP_2067, l_PT_2060), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_2055, r_FMT3(rt_str("@@&@", 4), l_C_2055, l_SEP_2056, l_TMP_2067), 0);
}
}
else
{
S_R10(&l_C_2055, r_FMT3(rt_str("@@&@", 4), l_C_2055, l_SEP_2056, (l_V_2066).f_C), 0);
}
S_R10(&l_SEP_2056, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2054 = ((*(R27 *)rt_nil_check(l_A_2054))).f_NEXT;
l_P_2053 = ((*(R28 *)rt_nil_check(l_P_2053))).f_NEXT;
}
RT_B_TICK();
} L_end2063: ;
if ((!(l_A_2054 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2057).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2069 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2057, ((*(R12 *)rt_nil_check(l_Y_2052))).f_ACCESS, l_C_2055, l_POST_2058), r_RESULT_VIEW(l_Y_2052));
return rv2069; }
}
{ R26 rv2070 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2052))).f_ACCESS, l_C_2055), r_RESULT_VIEW(l_Y_2052));
return rv2070; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2071 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2071; }
}
{ R22 * rv2072 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2072; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2073 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2073; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2074 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2074; }
}
{ R22 * rv2075 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2075; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2076 = p_T;
return rv2076; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2077 = p_T;
return rv2077; }
}
{
R12 * l_M_2078; memset(&l_M_2078, 0, sizeof l_M_2078);
l_M_2078 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2078 == NULL)) goto L_end2079;
{
{
R12 * l_Y_2080; memset(&l_Y_2080, 0, sizeof l_Y_2080);
l_Y_2080 = r_MEMBER_TYPE(l_M_2078, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2080 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2080))).f_EXPORTED)
{
{ R22 * rv2081 = r_ABSTRACT_VIEW(l_Y_2080, p_T);
return rv2081; }
}
{ R22 * rv2082 = p_T;
return rv2082; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2078))).f_MODL))
{
goto L_end2079;
}
l_M_2078 = ((*(R12 *)rt_nil_check(l_M_2078))).f_MODL;
}
RT_B_TICK();
} L_end2079: ;
}
{ R22 * rv2083 = p_T;
return rv2083; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2084; memset(&l_Y_2084, 0, sizeof l_Y_2084);
l_Y_2084 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2085; memset(&l_Z_2085, 0, sizeof l_Z_2085);
l_Z_2085 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2085 == NULL)) goto L_end2086;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2085))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2085))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2085))).f_ORIG == NULL)))
{
{ R12 * rv2087 = l_Z_2085;
return rv2087; }
}
l_Z_2085 = r_LOOKUP_NEXT(l_Z_2085);
}
RT_B_TICK();
} L_end2086: ;
}
{ R12 * rv2088 = NULL;
return rv2088; }
}
for (;;) {
if ((l_Y_2084 == NULL)) goto L_end2089;
{
if (((((*(R12 *)rt_nil_check(l_Y_2084))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2084))).f_NAME, p_NAME)))
{
{ R12 * rv2090 = l_Y_2084;
return rv2090; }
}
l_Y_2084 = ((*(R12 *)rt_nil_check(l_Y_2084))).f_SNEXT;
}
RT_B_TICK();
} L_end2089: ;
{ R12 * rv2091 = NULL;
return rv2091; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2092; memset(&l_K_2092, 0, sizeof l_K_2092);
l_K_2092 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2093 = ((((l_K_2092 == g_T_STR) || (l_K_2092 == g_T_BITS)) || (l_K_2092 == g_T_ARR)) || (l_K_2092 == g_T_REC));
return rv2093; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2094; memset(&l_RA_2094, 0, sizeof l_RA_2094);
l_RA_2094 = r_REAL_TYPE(p_A);
R22 * l_RB_2095; memset(&l_RB_2095, 0, sizeof l_RB_2095);
l_RB_2095 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2094)))
{
{ rt_int rv2096 = 1;
return rv2096; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2094))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2094))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2095))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2095))).f_HI_C)))
{
{ rt_int rv2097 = 1;
return rv2097; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2094))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2095))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2098 = ((((*(R22 *)rt_nil_check(l_RA_2094))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2095))).f_LO_C).f_LEN);
return rv2098; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2094))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2095))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2094))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2095))).f_MHI).f_OK))
{
{ rt_int rv2099 = (((((*(R22 *)rt_nil_check(l_RA_2094))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2095))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2094))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2095))).f_MHI).f_V));
return rv2099; }
}
{ rt_int rv2100 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2094))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2095))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2094))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2095))).f_HI_C));
return rv2100; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2101 = 0;
return rv2101; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2102 = 1;
return rv2102; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2103 = 1;
return rv2103; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2104 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv2104; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2105 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2105; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2106 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2106; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2107 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2107; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2108 = 0;
return rv2108; }
}
{
R12 * l_Y_2109; memset(&l_Y_2109, 0, sizeof l_Y_2109);
l_Y_2109 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2110; memset(&l_A_2110, 0, sizeof l_A_2110);
l_A_2110 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2111; memset(&l_F_2111, 0, sizeof l_F_2111);
if ((l_Y_2109 == NULL))
{
{ rt_int rv2112 = 0;
return rv2112; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2109))).f_KIND == g_Y_GEN))
{
{ rt_int rv2113 = 1;
return rv2113; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2109))).f_DECL == NULL))
{
{ rt_int rv2114 = 0;
return rv2114; }
}
l_F_2111 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2109))).f_DECL))).f_A;
for (;;) {
if ((l_F_2111 == NULL)) goto L_end2115;
{
{
R21 * l_N_2116; memset(&l_N_2116, 0, sizeof l_N_2116);
l_N_2116 = ((*(R21 *)rt_nil_check(l_F_2111))).f_A;
for (;;) {
if ((l_N_2116 == NULL)) goto L_end2117;
{
if ((l_A_2110 == NULL))
{
{ rt_int rv2118 = 0;
return rv2118; }
}
if (((((*(R21 *)rt_nil_check(l_F_2111))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2110))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2110))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2110)))))
{
{ rt_int rv2119 = 1;
return rv2119; }
}
l_A_2110 = ((*(R21 *)rt_nil_check(l_A_2110))).f_NEXT;
l_N_2116 = ((*(R21 *)rt_nil_check(l_N_2116))).f_NEXT;
}
RT_B_TICK();
} L_end2117: ;
}
l_F_2111 = ((*(R21 *)rt_nil_check(l_F_2111))).f_NEXT;
}
RT_B_TICK();
} L_end2115: ;
}
}
{ rt_int rv2120 = 0;
return rv2120; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2121; memset(&l_P_2121, 0, sizeof l_P_2121);
l_P_2121 = p_A;
for (;;) {
if ((l_P_2121 == NULL)) goto L_end2122;
{
if (((((*(R21 *)rt_nil_check(l_P_2121))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2121))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2123 = 1;
return rv2123; }
}
l_P_2121 = ((*(R21 *)rt_nil_check(l_P_2121))).f_NEXT;
}
RT_B_TICK();
} L_end2122: ;
{ rt_int rv2124 = 0;
return rv2124; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2125; memset(&l_ENTERED_2125, 0, sizeof l_ENTERED_2125);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2125 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_2125)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2126; memset(&l_R_2126, 0, sizeof l_R_2126);
l_R_2126 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2127; memset(&l_P_2127, 0, sizeof l_P_2127);
R28 * l_TAIL_2128; memset(&l_TAIL_2128, 0, sizeof l_TAIL_2128);
l_TAIL_2128 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2127 = ((*(R21 *)rt_nil_check(l_R_2126))).f_A;
for (;;) {
if ((l_P_2127 == NULL)) goto L_end2129;
{
if (((((*(R21 *)rt_nil_check(l_P_2127))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2127))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2127 = ((*(R21 *)rt_nil_check(l_P_2127))).f_NEXT;
}
RT_B_TICK();
} L_end2129: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2126))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2127 = ((*(R21 *)rt_nil_check(l_R_2126))).f_A;
for (;;) {
if ((l_P_2127 == NULL)) goto L_end2130;
{
{
R28 * l_PM_2131; memset(&l_PM_2131, 0, sizeof l_PM_2131);
l_PM_2131 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2131)), ({ R28 rc2132; memset(&rc2132, 0, sizeof rc2132);  S_R10(&rc2132.f_NAME, ((*(R21 *)rt_nil_check(l_P_2127))).f_NAME, 0); rc2132.f_MODE = ((*(R21 *)rt_nil_check(l_P_2127))).f_IV; rc2132.f_T = NULL; rc2132.f_TS = ((*(R21 *)rt_nil_check(l_P_2127))).f_B; rc2132.f_NEXT = NULL; rc2132; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2126))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2127))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2127))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2131))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2127))).f_B);
}
if ((l_TAIL_2128 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2131;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2128))).f_NEXT = l_PM_2131;
}
l_TAIL_2128 = l_PM_2131;
}
l_P_2127 = ((*(R21 *)rt_nil_check(l_P_2127))).f_NEXT;
}
RT_B_TICK();
} L_end2130: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2133; memset(&l_R_2133, 0, sizeof l_R_2133);
l_R_2133 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2134; memset(&l_T_2134, 0, sizeof l_T_2134);
if ((((*(R21 *)rt_nil_check(l_R_2133))).f_B == NULL))
{
{ R22 * rv2135 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2135; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2136; memset(&l_P_2136, 0, sizeof l_P_2136);
l_P_2136 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2136 == NULL)) goto L_end2137;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2136))).f_T == NULL)))
{
{
R12 * l_V_2138; memset(&l_V_2138, 0, sizeof l_V_2138);
l_V_2138 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2136))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2138))).f_T = ((*(R28 *)rt_nil_check(l_P_2136))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2138))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2136))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2138))).f_INPUT = 1;
r_DEFINE(l_V_2138, ((*(R21 *)rt_nil_check(l_R_2133))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2136))).f_T, ((*(R12 *)rt_nil_check(l_V_2138))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2133))).f_LINE, 0);
}
}
l_P_2136 = ((*(R28 *)rt_nil_check(l_P_2136))).f_NEXT;
}
RT_B_TICK();
} L_end2137: ;
}
l_T_2134 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2133))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2139 = l_T_2134;
return rv2139; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2140; memset(&l_PS_2140, 0, sizeof l_PS_2140);
S_R10(&l_PS_2140, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2141; memset(&l_SEP_2141, 0, sizeof l_SEP_2141);
S_R10(&l_SEP_2141, r_MK(rt_str("", 0)), 0);
R28 * l_P_2142; memset(&l_P_2142, 0, sizeof l_P_2142);
l_P_2142 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2140, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2141, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2142 == NULL)) goto L_end2143;
{
if ((((*(R28 *)rt_nil_check(l_P_2142))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2142))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2142))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2140, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2140, l_SEP_2141, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2142))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2142))).f_NAME)), 0);
S_R10(&l_SEP_2141, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2140, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2140, l_SEP_2141, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2142))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2142))).f_NAME)), 0);
S_R10(&l_SEP_2141, r_MK(rt_str(", ", 2)), 0);
}
l_P_2142 = ((*(R28 *)rt_nil_check(l_P_2142))).f_NEXT;
}
RT_B_TICK();
} L_end2143: ;
if (((l_PS_2140).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2140, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2144 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2140);
return rv2144; }
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
R25 * l_B_2145; memset(&l_B_2145, 0, sizeof l_B_2145);
l_B_2145 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2146; memset(&l_I_2146, 0, sizeof l_I_2146);
l_I_2146 = ((rt_int)0LL);
for (;;) {
if ((l_B_2145 == NULL)) goto L_end2147;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2145))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2145))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2146)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2145))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2145))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2145))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2145))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2146)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2145))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2146), p_PC, r_NUM(l_I_2146)), ((*(R25 *)rt_nil_check(l_B_2145))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2146 = rt_add(l_I_2146, ((rt_int)1LL));
l_B_2145 = ((*(R25 *)rt_nil_check(l_B_2145))).f_NEXT;
}
RT_B_TICK();
} L_end2147: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2148; memset(&l_U_2148, 0, sizeof l_U_2148);
l_U_2148 = r_REAL_TYPE(p_T);
R24 * l_F_2149; memset(&l_F_2149, 0, sizeof l_F_2149);
l_F_2149 = ((*(R22 *)rt_nil_check(l_U_2148))).f_FIELDS;
R25 * l_A_2150; memset(&l_A_2150, 0, sizeof l_A_2150);
l_A_2150 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2149 == NULL) || (l_A_2150 == NULL))) goto L_end2151;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2149))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2150))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2150))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2149))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2150 = ((*(R25 *)rt_nil_check(l_A_2150))).f_NEXT;
}
l_F_2149 = ((*(R24 *)rt_nil_check(l_F_2149))).f_NEXT;
}
RT_B_TICK();
} L_end2151: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2152 = 0;
return rv2152; }
}
{ rt_int rv2153 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2153; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2154 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2154; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2155; memset(&l_OLD_2155, 0, sizeof l_OLD_2155);
l_OLD_2155 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2155 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2155))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2155))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2155))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2156; memset(&l_G_2156, 0, sizeof l_G_2156);
l_G_2156 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2156))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2156))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2156))).f_INPUT = 1;
r_DEFINE(l_G_2156, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2157; memset(&l_B_2157, 0, sizeof l_B_2157);
l_B_2157 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2157)), ({ R20 rc2158; memset(&rc2158, 0, sizeof rc2158);  S_R10(&rc2158.f_NAME, r_NO_TEXT(), 0); rc2158.f_T = NULL; S_R10(&rc2158.f_C, r_NO_TEXT(), 0); rc2158.f_HASMV = 0; rc2158.f_MV = ((rt_int)0LL); rc2158.f_R = NULL; rc2158.f_NEXT = NULL; rc2158; }), 0);
{ R20 * rv2159 = l_B_2157;
return rv2159; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2160; memset(&l_B_2160, 0, sizeof l_B_2160);
l_B_2160 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2160)), ({ R20 rc2161; memset(&rc2161, 0, sizeof rc2161);  S_R10(&rc2161.f_NAME, p_NAME, 0); rc2161.f_T = p_T; S_R10(&rc2161.f_C, r_NO_TEXT(), 0); rc2161.f_HASMV = (p_M).f_OK; rc2161.f_MV = (p_M).f_V; rc2161.f_R = p_R; rc2161.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2161; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2160))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2160;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2162; memset(&l_B_2162, 0, sizeof l_B_2162);
l_B_2162 = p_BS;
for (;;) {
if ((l_B_2162 == NULL)) goto L_end2163;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2162))).f_NAME, p_NAME))
{
{ R20 * rv2164 = l_B_2162;
return rv2164; }
}
l_B_2162 = ((*(R20 *)rt_nil_check(l_B_2162))).f_NEXT;
}
RT_B_TICK();
} L_end2163: ;
{ R20 * rv2165 = NULL;
return rv2165; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2166; memset(&l_RT_2166, 0, sizeof l_RT_2166);
l_RT_2166 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2167 = 1;
return rv2167; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2168 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2168; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2169 = 1;
return rv2169; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2170 = 1;
return rv2170; }
}
{
R20 * l_B_2171; memset(&l_B_2171, 0, sizeof l_B_2171);
l_B_2171 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2171 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2171))).f_T == NULL))
{
{ rt_int rv2172 = 0;
return rv2172; }
}
{ rt_int rv2173 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2171))).f_T, p_T);
return rv2173; }
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
{ rt_int rv2174 = 1;
return rv2174; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_ARR)))
{
{ rt_int rv2175 = 0;
return rv2175; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2166))).f_DIMS)))
{
{ rt_int rv2176 = 0;
return rv2176; }
}
{ rt_int rv2177 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2166))).f_ELEM, p_BS);
return rv2177; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2178 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2178; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2179 = 0;
return rv2179; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2166))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2166))).f_MHI, p_BS))))
{
{ rt_int rv2180 = 0;
return rv2180; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_INT)))
{
{ rt_int rv2181 = 0;
return rv2181; }
}
{ rt_int rv2182 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2166))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2182; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2183 = ((((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2166))).f_SCALE == ((rt_int)0LL)));
return rv2183; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2184 = 0;
return rv2184; }
}
{ rt_int rv2185 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2166))).f_SCALE), p_BS);
return rv2185; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2186 = (((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_BOOL);
return rv2186; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2187 = (((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_STR);
return rv2187; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_STR)))
{
{ rt_int rv2188 = 0;
return rv2188; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2189 = 1;
return rv2189; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2166))).f_BASE == NULL)))
{
{ rt_int rv2190 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2166))).f_BASE, p_BS);
return rv2190; }
}
{ rt_int rv2191 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2191; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2192 = (((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_BITS);
return rv2192; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2193 = (((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_SEM);
return rv2193; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_PTR)))
{
{ rt_int rv2194 = 0;
return rv2194; }
}
{ rt_int rv2195 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2166), p_BS);
return rv2195; }
}
{
R12 * l_Y_2196; memset(&l_Y_2196, 0, sizeof l_Y_2196);
l_Y_2196 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2196 == NULL))
{
{ rt_int rv2197 = 0;
return rv2197; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2196))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL == NULL)))
{
{ rt_int rv2198 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2196))).f_T, p_T);
return rv2198; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2196))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2199 = 0;
return rv2199; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2196))))
{
{ rt_int rv2200 = 0;
return rv2200; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2166))).f_KIND == g_T_REC)))
{
{ rt_int rv2201 = 0;
return rv2201; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2166))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2202 = 0;
return rv2202; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2166))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2196))))
{
{ rt_int rv2203 = 0;
return rv2203; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2204 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2204; }
}
{ rt_int rv2205 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2166, p_BS);
return rv2205; }
}
{
R21 * l_F_2206; memset(&l_F_2206, 0, sizeof l_F_2206);
l_F_2206 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL))).f_A;
R21 * l_A_2207; memset(&l_A_2207, 0, sizeof l_A_2207);
l_A_2207 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2208; memset(&l_V_2208, 0, sizeof l_V_2208);
l_V_2208 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2209; memset(&l_CLASS_2209, 0, sizeof l_CLASS_2209);
l_CLASS_2209 = r_RECORD_CLASS_OF(l_RT_2166);
for (;;) {
if ((l_F_2206 == NULL)) goto L_end2210;
{
{
R21 * l_N_2211; memset(&l_N_2211, 0, sizeof l_N_2211);
l_N_2211 = ((*(R21 *)rt_nil_check(l_F_2206))).f_A;
for (;;) {
if ((l_N_2211 == NULL)) goto L_end2212;
{
if ((l_A_2207 == NULL))
{
{ rt_int rv2213 = 0;
return rv2213; }
}
if ((((*(R21 *)rt_nil_check(l_F_2206))).f_B == NULL))
{
if ((!(l_CLASS_2209 == NULL)))
{
{
R20 * l_B_2214; memset(&l_B_2214, 0, sizeof l_B_2214);
l_B_2214 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2209))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2211))).f_NAME);
if ((!(l_B_2214 == NULL)))
{
if ((!r_UNIFY(l_A_2207, ((*(R20 *)rt_nil_check(l_B_2214))).f_T, p_BS)))
{
{ rt_int rv2215 = 0;
return rv2215; }
}
}
}
}
}
else
{
if ((!(l_V_2208 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2207))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2207))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2207))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2216; memset(&l_M_2216, 0, sizeof l_M_2216);
S_R23(&l_M_2216, r_MANIFEST(l_A_2207), 0);
if (((l_M_2216).f_OK && (((*(R25 *)rt_nil_check(l_V_2208))).f_MLO).f_OK))
{
if ((!((l_M_2216).f_V == (((*(R25 *)rt_nil_check(l_V_2208))).f_MLO).f_V)))
{
{ rt_int rv2217 = 0;
return rv2217; }
}
}
}
}
l_V_2208 = ((*(R25 *)rt_nil_check(l_V_2208))).f_NEXT;
}
}
l_A_2207 = ((*(R21 *)rt_nil_check(l_A_2207))).f_NEXT;
l_N_2211 = ((*(R21 *)rt_nil_check(l_N_2211))).f_NEXT;
}
RT_B_TICK();
} L_end2212: ;
}
l_F_2206 = ((*(R21 *)rt_nil_check(l_F_2206))).f_NEXT;
}
RT_B_TICK();
} L_end2210: ;
}
{ rt_int rv2218 = 1;
return rv2218; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2219; memset(&l_R_2219, 0, sizeof l_R_2219);
l_R_2219 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2220 = NULL;
return rv2220; }
}
for (;;) {
if ((l_R_2219 == NULL)) goto L_end2221;
{
if ((((*(R12 *)rt_nil_check(l_R_2219))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2222 = l_R_2219;
return rv2222; }
}
l_R_2219 = ((*(R12 *)rt_nil_check(l_R_2219))).f_INSTANCES;
}
RT_B_TICK();
} L_end2221: ;
{ R12 * rv2223 = NULL;
return rv2223; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2224 = 1;
return rv2224; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2225 = 1;
return rv2225; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2226 = 1;
return rv2226; }
}
{
R20 * l_B_2227; memset(&l_B_2227, 0, sizeof l_B_2227);
l_B_2227 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2227 == NULL)))
{
{ rt_int rv2228 = ((((*(R20 *)rt_nil_check(l_B_2227))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2227))).f_MV == (p_M).f_V));
return rv2228; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2229 = 0;
return rv2229; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2230 = 1;
return rv2230; }
}
{
R23 l_V_2231; memset(&l_V_2231, 0, sizeof l_V_2231);
S_R23(&l_V_2231, r_MANIFEST(p_A), 0);
if (((l_V_2231).f_OK && (p_M).f_OK))
{
{ rt_int rv2232 = ((l_V_2231).f_V == (p_M).f_V);
return rv2232; }
}
}
{ rt_int rv2233 = 1;
return rv2233; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2234 = 0;
return rv2234; }
}
{ rt_int rv2235 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv2235; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2236 = 1;
return rv2236; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2237 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2237; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2238; memset(&l_BS_2238, 0, sizeof l_BS_2238);
l_BS_2238 = r_NEW_BINDS();
R28 * l_P_2239; memset(&l_P_2239, 0, sizeof l_P_2239);
l_P_2239 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2240; memset(&l_A_2240, 0, sizeof l_A_2240);
l_A_2240 = p_ARGS;
for (;;) {
if ((l_P_2239 == NULL)) goto L_end2241;
{
if ((((*(R28 *)rt_nil_check(l_P_2239))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2240))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2239))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2240))).f_E), r_NO_MVAL(), NULL, l_BS_2238);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2239))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2239))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2239))).f_TS, ((*(R27 *)rt_nil_check(l_A_2240))).f_E, p_LINE), l_BS_2238);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2240))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2240))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2239))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2240))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2240))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2240))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2240))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2240))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2239))).f_TS, (((*(R27 *)rt_nil_check(l_A_2240))).f_V).f_T, l_BS_2238)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2239))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2239))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2239))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2239))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2240))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2238);
}
}
l_P_2239 = ((*(R28 *)rt_nil_check(l_P_2239))).f_NEXT;
l_A_2240 = ((*(R27 *)rt_nil_check(l_A_2240))).f_NEXT;
}
RT_B_TICK();
} L_end2241: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2238);
{
R12 * l_I_2242; memset(&l_I_2242, 0, sizeof l_I_2242);
l_I_2242 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2242 == NULL)) goto L_end2243;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2242))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2238))).f_NEXT))
{
{ R12 * rv2244 = l_I_2242;
return rv2244; }
}
l_I_2242 = ((*(R12 *)rt_nil_check(l_I_2242))).f_INSTANCES;
}
RT_B_TICK();
} L_end2243: ;
}
{ R12 * rv2245 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2238))).f_NEXT, p_ARGS);
return rv2245; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2246; memset(&l_P_2246, 0, sizeof l_P_2246);
l_P_2246 = p_A;
for (;;) {
if ((l_P_2246 == NULL)) goto L_end2247;
{
{
R20 * l_Q_2248; memset(&l_Q_2248, 0, sizeof l_Q_2248);
l_Q_2248 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2246))).f_NAME);
if ((l_Q_2248 == NULL))
{
{ rt_int rv2249 = 0;
return rv2249; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2246))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2248))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2246))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2248))).f_T == NULL)))
{
{ rt_int rv2250 = 0;
return rv2250; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2246))).f_T, ((*(R20 *)rt_nil_check(l_Q_2248))).f_T)))
{
{ rt_int rv2251 = 0;
return rv2251; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2246))).f_T, ((*(R20 *)rt_nil_check(l_Q_2248))).f_T)))
{
{ rt_int rv2252 = 0;
return rv2252; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2246))).f_T, ((*(R20 *)rt_nil_check(l_Q_2248))).f_T)))
{
{ rt_int rv2253 = 0;
return rv2253; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2246))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2248))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2246))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2248))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2246))).f_R == ((*(R20 *)rt_nil_check(l_Q_2248))).f_R))))
{
{ rt_int rv2254 = 0;
return rv2254; }
}
}
l_P_2246 = ((*(R20 *)rt_nil_check(l_P_2246))).f_NEXT;
}
RT_B_TICK();
} L_end2247: ;
{ rt_int rv2255 = 1;
return rv2255; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2256; memset(&l_RA_2256, 0, sizeof l_RA_2256);
l_RA_2256 = r_REAL_TYPE(p_A);
R22 * l_RB_2257; memset(&l_RB_2257, 0, sizeof l_RB_2257);
l_RB_2257 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2256))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2256))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2256))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2257))).f_KIND))))
{
{ rt_int rv2258 = 1;
return rv2258; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2256))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2257))).f_MLEN).f_OK))
{
{ rt_int rv2259 = ((((*(R22 *)rt_nil_check(l_RA_2256))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2257))).f_MLEN).f_V);
return rv2259; }
}
{ rt_int rv2260 = ((((*(R22 *)rt_nil_check(l_RA_2256))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2257))).f_MLEN).f_OK);
return rv2260; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2261; memset(&l_RA_2261, 0, sizeof l_RA_2261);
l_RA_2261 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2262; memset(&l_RB_2262, 0, sizeof l_RB_2262);
l_RB_2262 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2261 == NULL) || (l_RB_2262 == NULL)))
{
{ rt_int rv2263 = (l_RA_2261 == l_RB_2262);
return rv2263; }
}
if ((l_RA_2261 == l_RB_2262))
{
{ rt_int rv2264 = 1;
return rv2264; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2261))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2262))).f_NAME)))
{
{ rt_int rv2265 = 0;
return rv2265; }
}
{
R21 * l_X_2266; memset(&l_X_2266, 0, sizeof l_X_2266);
l_X_2266 = ((*(R21 *)rt_nil_check(l_RA_2261))).f_A;
R21 * l_Y_2267; memset(&l_Y_2267, 0, sizeof l_Y_2267);
l_Y_2267 = ((*(R21 *)rt_nil_check(l_RB_2262))).f_A;
for (;;) {
if (((l_X_2266 == NULL) || (l_Y_2267 == NULL))) goto L_end2268;
{
if (((((((*(R21 *)rt_nil_check(l_X_2266))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2266))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2267))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2267))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2266))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2267))).f_NAME)))
{
{ rt_int rv2269 = 0;
return rv2269; }
}
}
else
{
{
R23 l_MX_2270; memset(&l_MX_2270, 0, sizeof l_MX_2270);
S_R23(&l_MX_2270, r_MANIFEST(l_X_2266), 0);
R23 l_MY_2271; memset(&l_MY_2271, 0, sizeof l_MY_2271);
S_R23(&l_MY_2271, r_MANIFEST(l_Y_2267), 0);
if (((!((l_MX_2270).f_OK == (l_MY_2271).f_OK)) || (!((l_MX_2270).f_V == (l_MY_2271).f_V))))
{
{ rt_int rv2272 = 0;
return rv2272; }
}
}
}
l_X_2266 = ((*(R21 *)rt_nil_check(l_X_2266))).f_NEXT;
l_Y_2267 = ((*(R21 *)rt_nil_check(l_Y_2267))).f_NEXT;
}
RT_B_TICK();
} L_end2268: ;
{ rt_int rv2273 = ((((l_X_2266 == NULL) && (l_Y_2267 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2261))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2262))).f_B == NULL));
return rv2273; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2274; memset(&l_Y_2274, 0, sizeof l_Y_2274);
l_Y_2274 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2275; memset(&l_FOUND_2275, 0, sizeof l_FOUND_2275);
l_FOUND_2275 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_2274 == NULL)) goto L_end2276;
{
if ((((*(R12 *)rt_nil_check(l_Y_2274))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2277; memset(&l_R_2277, 0, sizeof l_R_2277);
l_R_2277 = r_ORIGINAL(l_Y_2274);
r_ROUTINE_HEADER(l_R_2277);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_2277)) && (!((*(R12 *)rt_nil_check(l_R_2277))).f_GENERIC)))
{
if (((!(l_FOUND_2275 == NULL)) && (!(l_FOUND_2275 == l_R_2277))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2275 = l_R_2277;
}
}
}
l_Y_2274 = r_LOOKUP_NEXT(l_Y_2274);
}
RT_B_TICK();
} L_end2276: ;
if ((l_FOUND_2275 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2275))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv2278 = l_FOUND_2275;
return rv2278; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2279; memset(&l_NEEDL_2279, 0, sizeof l_NEEDL_2279);
l_NEEDL_2279 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2280; memset(&l_SAVED_2280, 0, sizeof l_SAVED_2280);
l_SAVED_2280 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2279 == NULL)) goto L_end2281;
{
{
R21 * l_T_2282; memset(&l_T_2282, 0, sizeof l_T_2282);
l_T_2282 = ((*(R21 *)rt_nil_check(l_NEEDL_2279))).f_A;
for (;;) {
if ((l_T_2282 == NULL)) goto L_end2283;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2282))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2284; memset(&l_ARGS_2284, 0, sizeof l_ARGS_2284);
l_ARGS_2284 = NULL;
R27 * l_TAIL_2285; memset(&l_TAIL_2285, 0, sizeof l_TAIL_2285);
l_TAIL_2285 = NULL;
R21 * l_P_2286; memset(&l_P_2286, 0, sizeof l_P_2286);
l_P_2286 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2282))).f_B))).f_A;
R12 * l_R_2287; memset(&l_R_2287, 0, sizeof l_R_2287);
rt_int l_ENTERED_2288; memset(&l_ENTERED_2288, 0, sizeof l_ENTERED_2288);
l_ENTERED_2288 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2286 == NULL)) goto L_end2289;
{
{
R27 * l_A_2290; memset(&l_A_2290, 0, sizeof l_A_2290);
if ((((*(R21 *)rt_nil_check(l_P_2286))).f_B == NULL))
{
l_A_2290 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2290 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2286))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2290))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2286))).f_IV;
if ((l_TAIL_2285 == NULL))
{
l_ARGS_2284 = l_A_2290;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2285))).f_NEXT = l_A_2290;
}
l_TAIL_2285 = l_A_2290;
}
l_P_2286 = ((*(R21 *)rt_nil_check(l_P_2286))).f_NEXT;
}
RT_B_TICK();
} L_end2289: ;
if (l_ENTERED_2288)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2287 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2282))).f_NAME, l_ARGS_2284, p_LINE, 0);
if ((l_R_2287 == NULL))
{
l_R_2287 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2282))).f_NAME);
for (;;) {
if ((l_R_2287 == NULL)) goto L_end2291;
{
if ((((*(R12 *)rt_nil_check(l_R_2287))).f_KIND == g_Y_BUILTIN))
{
goto L_end2291;
}
l_R_2287 = r_LOOKUP_NEXT(l_R_2287);
}
RT_B_TICK();
} L_end2291: ;
}
if (((l_R_2287 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2282))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2282))).f_NAME);
}
if ((!(l_R_2287 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2282))).f_NAME, NULL, r_NO_MVAL(), l_R_2287, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2282 = ((*(R21 *)rt_nil_check(l_T_2282))).f_NEXT;
}
RT_B_TICK();
} L_end2283: ;
}
l_NEEDL_2279 = ((*(R21 *)rt_nil_check(l_NEEDL_2279))).f_NEXT;
}
RT_B_TICK();
} L_end2281: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2280;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2292 = 0;
return rv2292; }
}
{
R12 * l_Y_2293; memset(&l_Y_2293, 0, sizeof l_Y_2293);
l_Y_2293 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2294; memset(&l_A_2294, 0, sizeof l_A_2294);
l_A_2294 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2295; memset(&l_F_2295, 0, sizeof l_F_2295);
if ((l_Y_2293 == NULL))
{
{ rt_int rv2296 = 0;
return rv2296; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2293))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2293))).f_DECL == NULL)))
{
{ rt_int rv2297 = 0;
return rv2297; }
}
l_F_2295 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2293))).f_DECL))).f_A;
for (;;) {
if ((l_F_2295 == NULL)) goto L_end2298;
{
{
R21 * l_N_2299; memset(&l_N_2299, 0, sizeof l_N_2299);
l_N_2299 = ((*(R21 *)rt_nil_check(l_F_2295))).f_A;
for (;;) {
if ((l_N_2299 == NULL)) goto L_end2300;
{
if ((l_A_2294 == NULL))
{
{ rt_int rv2301 = 0;
return rv2301; }
}
if (((((*(R21 *)rt_nil_check(l_F_2295))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2294))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2302 = 1;
return rv2302; }
}
l_A_2294 = ((*(R21 *)rt_nil_check(l_A_2294))).f_NEXT;
l_N_2299 = ((*(R21 *)rt_nil_check(l_N_2299))).f_NEXT;
}
RT_B_TICK();
} L_end2300: ;
}
l_F_2295 = ((*(R21 *)rt_nil_check(l_F_2295))).f_NEXT;
}
RT_B_TICK();
} L_end2298: ;
}
{ rt_int rv2303 = 0;
return rv2303; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2304; memset(&l_A_2304, 0, sizeof l_A_2304);
l_A_2304 = p_ARGS;
R12 * l_I_2305; memset(&l_I_2305, 0, sizeof l_I_2305);
l_I_2305 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2306; memset(&l_SAVED_2306, 0, sizeof l_SAVED_2306);
l_SAVED_2306 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2307; memset(&l_P_2307, 0, sizeof l_P_2307);
l_P_2307 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2308; memset(&l_TAIL_2308, 0, sizeof l_TAIL_2308);
l_TAIL_2308 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2305)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2305))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2305))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2305))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2305))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2305))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2305;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2307 == NULL)) goto L_end2309;
{
{
R28 * l_PM_2310; memset(&l_PM_2310, 0, sizeof l_PM_2310);
l_PM_2310 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2310)), (*(R28 *)rt_nil_check(l_P_2307)), 0);
((*(R28 *)rt_nil_check(l_PM_2310))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2307))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2310))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2307))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2310))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2307))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2304))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2310))).f_T = (((*(R27 *)rt_nil_check(l_A_2304))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2310))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2310))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2310))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2310))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2310))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2307))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_2310))).f_TS = NULL;
if ((l_TAIL_2308 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2305))).f_PARAMS = l_PM_2310;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2308))).f_NEXT = l_PM_2310;
}
l_TAIL_2308 = l_PM_2310;
}
l_P_2307 = ((*(R28 *)rt_nil_check(l_P_2307))).f_NEXT;
l_A_2304 = ((*(R27 *)rt_nil_check(l_A_2304))).f_NEXT;
}
RT_B_TICK();
} L_end2309: ;
((*(R12 *)rt_nil_check(l_I_2305))).f_RESULT = r_RESULT_TYPE(l_I_2305);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2306;
S_R10(&((*(R12 *)rt_nil_check(l_I_2305))).f_FWD, r_C_HEADER(l_I_2305), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2305))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2305))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2305;
{ R12 * rv2311 = l_I_2305;
return rv2311; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2312 = 0;
return rv2312; }
}
{ rt_int rv2313 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2313; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2314; memset(&l_C_2314, 0, sizeof l_C_2314);
if ((p_TS == NULL))
{
{ R21 * rv2315 = NULL;
return rv2315; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2316; memset(&l_F_2316, 0, sizeof l_F_2316);
l_F_2316 = p_FORMALS;
R21 * l_A_2317; memset(&l_A_2317, 0, sizeof l_A_2317);
l_A_2317 = p_ARGS;
for (;;) {
if ((l_F_2316 == NULL)) goto L_end2318;
{
{
R21 * l_N_2319; memset(&l_N_2319, 0, sizeof l_N_2319);
l_N_2319 = ((*(R21 *)rt_nil_check(l_F_2316))).f_A;
for (;;) {
if ((l_N_2319 == NULL)) goto L_end2320;
{
if ((l_A_2317 == NULL))
{
{ R21 * rv2321 = p_TS;
return rv2321; }
}
if (((((*(R21 *)rt_nil_check(l_F_2316))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2319))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2322 = l_A_2317;
return rv2322; }
}
l_A_2317 = ((*(R21 *)rt_nil_check(l_A_2317))).f_NEXT;
l_N_2319 = ((*(R21 *)rt_nil_check(l_N_2319))).f_NEXT;
}
RT_B_TICK();
} L_end2320: ;
}
l_F_2316 = ((*(R21 *)rt_nil_check(l_F_2316))).f_NEXT;
}
RT_B_TICK();
} L_end2318: ;
}
{ R21 * rv2323 = p_TS;
return rv2323; }
}
l_C_2314 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2314))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2314))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2324 = l_C_2314;
return rv2324; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2325; memset(&l_C_2325, 0, sizeof l_C_2325);
l_C_2325 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2325)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2325))).f_NEXT = NULL;
{ R21 * rv2326 = l_C_2325;
return rv2326; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2327; memset(&l_P_2327, 0, sizeof l_P_2327);
l_P_2327 = p_L;
for (;;) {
if ((l_P_2327 == NULL)) goto L_end2328;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2327))).f_NAME, p_NAME))
{
{ rt_int rv2329 = 1;
return rv2329; }
}
l_P_2327 = ((*(R21 *)rt_nil_check(l_P_2327))).f_NEXT;
}
RT_B_TICK();
} L_end2328: ;
{ rt_int rv2330 = 0;
return rv2330; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2331; memset(&l_IS_2331, 0, sizeof l_IS_2331);
l_IS_2331 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2332 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2332; }
}
if ((l_IS_2331 == NULL))
{
{ rt_int rv2333 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2333; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2331))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2331))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2334 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2334; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2331))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2331))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2335 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2335; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2331))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2336 = 0;
return rv2336; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2337; memset(&l_ITEMS_2337, 0, sizeof l_ITEMS_2337);
l_ITEMS_2337 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2338; memset(&l_HEAD_2338, 0, sizeof l_HEAD_2338);
l_HEAD_2338 = NULL;
R21 * l_TAIL_2339; memset(&l_TAIL_2339, 0, sizeof l_TAIL_2339);
l_TAIL_2339 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2337 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2337))).f_A, &l_HEAD_2338, &l_TAIL_2339);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2337))).f_B, &l_HEAD_2338, &l_TAIL_2339);
{
R21 * l_R_2340; memset(&l_R_2340, 0, sizeof l_R_2340);
l_R_2340 = ((*(R21 *)rt_nil_check(l_ITEMS_2337))).f_C;
for (;;) {
if ((l_R_2340 == NULL)) goto L_end2341;
{
{
R12 * l_Z_2342; memset(&l_Z_2342, 0, sizeof l_Z_2342);
l_Z_2342 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2340))).f_NAME);
if (((l_Z_2342 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2340))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2340))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2340))).f_NAME);
}
for (;;) {
if ((l_Z_2342 == NULL)) goto L_end2343;
{
if ((((*(R12 *)rt_nil_check(l_Z_2342))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2344; memset(&l_O_2344, 0, sizeof l_O_2344);
l_O_2344 = r_ORIGINAL(l_Z_2342);
R21 * l_U_2345; memset(&l_U_2345, 0, sizeof l_U_2345);
r_COMPUTE_USES(l_O_2344);
l_U_2345 = ((*(R12 *)rt_nil_check(l_O_2344))).f_USES;
for (;;) {
if ((l_U_2345 == NULL)) goto L_end2346;
{
if ((!r_IN_IDENTS(l_HEAD_2338, ((*(R21 *)rt_nil_check(l_U_2345))).f_NAME)))
{
{
R21 * l_N_2347; memset(&l_N_2347, 0, sizeof l_N_2347);
l_N_2347 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2345))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2347))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2345))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2347))).f_IV = ((*(R21 *)rt_nil_check(l_U_2345))).f_IV;
r_ADD_LIST(l_N_2347, &l_HEAD_2338, &l_TAIL_2339);
}
}
l_U_2345 = ((*(R21 *)rt_nil_check(l_U_2345))).f_NEXT;
}
RT_B_TICK();
} L_end2346: ;
}
}
l_Z_2342 = r_LOOKUP_NEXT(l_Z_2342);
}
RT_B_TICK();
} L_end2343: ;
}
l_R_2340 = ((*(R21 *)rt_nil_check(l_R_2340))).f_NEXT;
}
RT_B_TICK();
} L_end2341: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2338;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2348; memset(&l_M_2348, 0, sizeof l_M_2348);
if ((p_B == NULL))
{
{ rt_int rv2349 = 0;
return rv2349; }
}
l_M_2348 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2348 == NULL)) goto L_end2350;
{
if ((((*(R21 *)rt_nil_check(l_M_2348))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2348))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2348))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2348))).f_C, p_NAME)))
{
{ rt_int rv2351 = 1;
return rv2351; }
}
}
l_M_2348 = ((*(R21 *)rt_nil_check(l_M_2348))).f_NEXT;
}
RT_B_TICK();
} L_end2350: ;
{ rt_int rv2352 = 0;
return rv2352; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2353; memset(&l_R_2353, 0, sizeof l_R_2353);
l_R_2353 = p_RS;
for (;;) {
if ((l_R_2353 == NULL)) goto L_end2354;
{
if ((((*(R21 *)rt_nil_check(l_R_2353))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2353));
}
l_R_2353 = ((*(R21 *)rt_nil_check(l_R_2353))).f_NEXT;
}
RT_B_TICK();
} L_end2354: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2355; memset(&l_P_2355, 0, sizeof l_P_2355);
l_P_2355 = p_L;
for (;;) {
if ((l_P_2355 == NULL)) goto L_end2356;
{
{
R12 * l_V_2357; memset(&l_V_2357, 0, sizeof l_V_2357);
l_V_2357 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2355))).f_NAME);
R21 * l_N_2358; memset(&l_N_2358, 0, sizeof l_N_2358);
l_N_2358 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2355))).f_LINE);
if ((l_V_2357 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2355))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2355))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2358))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2355))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2358))).f_IV = ((*(R12 *)rt_nil_check(l_V_2357))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2357))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2358, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2355 = ((*(R21 *)rt_nil_check(l_P_2355))).f_NEXT;
}
RT_B_TICK();
} L_end2356: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2359; memset(&l_IS_2359, 0, sizeof l_IS_2359);
l_IS_2359 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2360; memset(&l_U_2360, 0, sizeof l_U_2360);
l_U_2360 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2359 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2359))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2360 == NULL)) goto L_end2361;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2360))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2359))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2359))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2360))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2360))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2359))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2360))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2359))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2360))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2359))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2359))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2359))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2359))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2360))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2360))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2360))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2360 = ((*(R21 *)rt_nil_check(l_U_2360))).f_NEXT;
}
RT_B_TICK();
} L_end2361: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2362; memset(&l_R_2362, 0, sizeof l_R_2362);
l_R_2362 = p_RS;
for (;;) {
if ((l_R_2362 == NULL)) goto L_end2363;
{
{
R12 * l_Z_2364; memset(&l_Z_2364, 0, sizeof l_Z_2364);
l_Z_2364 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2362))).f_NAME);
for (;;) {
if ((l_Z_2364 == NULL)) goto L_end2365;
{
if ((((*(R12 *)rt_nil_check(l_Z_2364))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2366; memset(&l_O_2366, 0, sizeof l_O_2366);
l_O_2366 = r_ORIGINAL(l_Z_2364);
r_COMPUTE_USES(l_O_2366);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2366))).f_USES, p_NAME))
{
{ rt_int rv2367 = 1;
return rv2367; }
}
}
}
l_Z_2364 = r_LOOKUP_NEXT(l_Z_2364);
}
RT_B_TICK();
} L_end2365: ;
}
l_R_2362 = ((*(R21 *)rt_nil_check(l_R_2362))).f_NEXT;
}
RT_B_TICK();
} L_end2363: ;
{ rt_int rv2368 = 0;
return rv2368; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2369; memset(&l_M_2369, 0, sizeof l_M_2369);
l_M_2369 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2369 == NULL)) goto L_end2370;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2369))).f_NAME))
{
{ rt_int rv2371 = 1;
return rv2371; }
}
l_M_2369 = ((*(R12 *)rt_nil_check(l_M_2369))).f_MODL;
}
RT_B_TICK();
} L_end2370: ;
{ rt_int rv2372 = 0;
return rv2372; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2373 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2373; }
}
{ R10 rv2374 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2374; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2375; memset(&l_C_2375, 0, sizeof l_C_2375);
l_C_2375 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2375 == NULL)) goto L_end2376;
{
if ((((*(R17 *)rt_nil_check(l_C_2375))).f_KIND == ((rt_int)1LL)))
{
goto L_end2376;
}
if ((((*(R17 *)rt_nil_check(l_C_2375))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2377; memset(&l_H_2377, 0, sizeof l_H_2377);
l_H_2377 = ((*(R17 *)rt_nil_check(l_C_2375))).f_HANDLERS;
for (;;) {
if ((l_H_2377 == NULL)) goto L_end2378;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2377))).f_A, p_NAME))
{
{ rt_int rv2379 = 1;
return rv2379; }
}
l_H_2377 = ((*(R21 *)rt_nil_check(l_H_2377))).f_NEXT;
}
RT_B_TICK();
} L_end2378: ;
}
}
l_C_2375 = ((*(R17 *)rt_nil_check(l_C_2375))).f_NEXT;
}
RT_B_TICK();
} L_end2376: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2380 = 1;
return rv2380; }
}
}
{ rt_int rv2381 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2381; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2382; memset(&l_C_2382, 0, sizeof l_C_2382);
l_C_2382 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2382)), ({ R17 rc2383; memset(&rc2383, 0, sizeof rc2383);  rc2383.f_KIND = p_KIND; S_R10(&rc2383.f_NAME, p_NAME, 0); rc2383.f_HANDLERS = NULL; rc2383.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2383; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2382;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2384; memset(&l_C_2384, 0, sizeof l_C_2384);
l_C_2384 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2384 == NULL)) goto L_end2385;
{
if ((((*(R17 *)rt_nil_check(l_C_2384))).f_KIND == p_KIND))
{
{ R17 * rv2386 = l_C_2384;
return rv2386; }
}
if ((((*(R17 *)rt_nil_check(l_C_2384))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2387 = NULL;
return rv2387; }
}
if ((((*(R17 *)rt_nil_check(l_C_2384))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2384))).f_NAME));
}
l_C_2384 = ((*(R17 *)rt_nil_check(l_C_2384))).f_NEXT;
}
RT_B_TICK();
} L_end2385: ;
{ R17 * rv2388 = NULL;
return rv2388; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2389; memset(&l_C_2389, 0, sizeof l_C_2389);
l_C_2389 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2390; memset(&l_N_2390, 0, sizeof l_N_2390);
l_N_2390 = ((rt_int)0LL);
for (;;) {
if ((l_C_2389 == NULL)) goto L_end2391;
{
if ((((*(R17 *)rt_nil_check(l_C_2389))).f_KIND == ((rt_int)1LL)))
{
goto L_end2391;
}
if ((((*(R17 *)rt_nil_check(l_C_2389))).f_KIND == ((rt_int)3LL)))
{
l_N_2390 = rt_add(l_N_2390, ((rt_int)1LL));
}
l_C_2389 = ((*(R17 *)rt_nil_check(l_C_2389))).f_NEXT;
}
RT_B_TICK();
} L_end2391: ;
{ rt_int rv2392 = l_N_2390;
return rv2392; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2393; memset(&l_N_2393, 0, sizeof l_N_2393);
l_N_2393 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2393 == NULL)) goto L_end2394;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2393))).f_NAME, p_NAME))
{
{ R10 rv2395 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2395; }
}
l_N_2393 = ((*(R21 *)rt_nil_check(l_N_2393))).f_NEXT;
}
RT_B_TICK();
} L_end2394: ;
l_N_2393 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2393))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2393))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2393;
{ R10 rv2396 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2396; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2397; memset(&l_D_2397, 0, sizeof l_D_2397);
l_D_2397 = p_DECLS;
for (;;) {
if ((l_D_2397 == NULL)) goto L_end2398;
{
if (((((*(R21 *)rt_nil_check(l_D_2397))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2397))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2399; memset(&l_Y_2399, 0, sizeof l_Y_2399);
l_Y_2399 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2397))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2397))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2399))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2399))).f_DECL = l_D_2397;
r_DEFINE(l_Y_2399, ((*(R21 *)rt_nil_check(l_D_2397))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2397))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2397))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2397))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2397 = ((*(R21 *)rt_nil_check(l_D_2397))).f_NEXT;
}
RT_B_TICK();
} L_end2398: ;
l_D_2397 = p_DECLS;
for (;;) {
if ((l_D_2397 == NULL)) goto L_end2400;
{
if ((((*(R21 *)rt_nil_check(l_D_2397))).f_KIND == g_N_TYPE))
{
{
R21 * l_F_2401; memset(&l_F_2401, 0, sizeof l_F_2401);
l_F_2401 = ((*(R21 *)rt_nil_check(l_D_2397))).f_A;
for (;;) {
if ((l_F_2401 == NULL)) goto L_end2402;
{
if (((((*(R21 *)rt_nil_check(l_F_2401))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_F_2401))).f_B == NULL))))
{
{
R22 * l_FT_2403; memset(&l_FT_2403, 0, sizeof l_FT_2403);
l_FT_2403 = r_REAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(l_F_2401))).f_B));
if (((!r_IS_SCALAR(l_FT_2403)) || (!(((*(R22 *)rt_nil_check(l_FT_2403))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2401))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2401 = ((*(R21 *)rt_nil_check(l_F_2401))).f_NEXT;
}
RT_B_TICK();
} L_end2402: ;
}
}
l_D_2397 = ((*(R21 *)rt_nil_check(l_D_2397))).f_NEXT;
}
RT_B_TICK();
} L_end2400: ;
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2404; memset(&l_P_2404, 0, sizeof l_P_2404);
l_P_2404 = p_L;
for (;;) {
if ((l_P_2404 == NULL)) goto L_end2405;
{
if (((((*(R21 *)rt_nil_check(l_P_2404))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2404))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2406 = 1;
return rv2406; }
}
}
l_P_2404 = ((*(R21 *)rt_nil_check(l_P_2404))).f_NEXT;
}
RT_B_TICK();
} L_end2405: ;
{ rt_int rv2407 = 0;
return rv2407; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2408; memset(&l_A_2408, 0, sizeof l_A_2408);
l_A_2408 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2409; memset(&l_FOUND_2409, 0, sizeof l_FOUND_2409);
l_FOUND_2409 = NULL;
rt_int l_N_2410; memset(&l_N_2410, 0, sizeof l_N_2410);
l_N_2410 = ((rt_int)0LL);
R12 * l_Y_2411; memset(&l_Y_2411, 0, sizeof l_Y_2411);
l_Y_2411 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2408 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2408))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2408))).f_DECL == NULL)))
{
{ R22 * rv2412 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2412; }
}
}
for (;;) {
if ((l_Y_2411 == NULL)) goto L_end2413;
{
if (((((*(R12 *)rt_nil_check(l_Y_2411))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2411))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2411))).f_NAME) == l_Y_2411))
{
{
R22 * l_T_2414; memset(&l_T_2414, 0, sizeof l_T_2414);
l_T_2414 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2411))).f_DECL == NULL))
{
l_T_2414 = ((*(R12 *)rt_nil_check(l_Y_2411))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2411))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2411))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2411))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2411))).f_DECL))).f_B))).f_A)))
{
l_T_2414 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2411))).f_NAME, p_LINE);
}
}
if ((!(l_T_2414 == NULL)))
{
l_T_2414 = r_REAL_TYPE(l_T_2414);
if ((((*(R22 *)rt_nil_check(l_T_2414))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2414))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2414))).f_BASE == l_FOUND_2409))))
{
if ((!(l_FOUND_2409 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2409 = ((*(R22 *)rt_nil_check(l_T_2414))).f_BASE;
}
}
}
}
}
}
l_Y_2411 = ((*(R12 *)rt_nil_check(l_Y_2411))).f_SNEXT;
}
RT_B_TICK();
} L_end2413: ;
if ((l_FOUND_2409 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2415 = l_FOUND_2409;
return rv2415; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2416; memset(&l_R_2416, 0, sizeof l_R_2416);
l_R_2416 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2416))).f_BASE == NULL))
{
{ R22 * rv2417 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2417; }
}
{ R22 * rv2418 = ((*(R22 *)rt_nil_check(l_R_2416))).f_BASE;
return rv2418; }
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
R21 * l_S_2419; memset(&l_S_2419, 0, sizeof l_S_2419);
l_S_2419 = p_S0;
for (;;) {
if ((l_S_2419 == NULL)) goto L_end2420;
{
{
R21 * l_L_2421; memset(&l_L_2421, 0, sizeof l_L_2421);
l_L_2421 = l_S_2419;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2421))).f_KIND == g_N_LABELED))) goto L_end2422;
{
{
R12 * l_Y_2423; memset(&l_Y_2423, 0, sizeof l_Y_2423);
l_Y_2423 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2421))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2423))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2421))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2421))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2423))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2423, ((*(R21 *)rt_nil_check(l_L_2421))).f_LINE);
}
l_L_2421 = ((*(R21 *)rt_nil_check(l_L_2421))).f_A;
}
RT_B_TICK();
} L_end2422: ;
}
l_S_2419 = ((*(R21 *)rt_nil_check(l_S_2419))).f_NEXT;
}
RT_B_TICK();
} L_end2420: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2424; memset(&l_D_2424, 0, sizeof l_D_2424);
l_D_2424 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2425; memset(&l_S_2425, 0, sizeof l_S_2425);
l_S_2425 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2424 == NULL)) goto L_end2426;
{
if (((((*(R21 *)rt_nil_check(l_D_2424))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2424))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2424);
}
l_D_2424 = ((*(R21 *)rt_nil_check(l_D_2424))).f_NEXT;
}
RT_B_TICK();
} L_end2426: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2425 == NULL)) goto L_end2427;
{
r_STMT(l_S_2425);
l_S_2425 = ((*(R21 *)rt_nil_check(l_S_2425))).f_NEXT;
}
RT_B_TICK();
} L_end2427: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2428; memset(&l_F_2428, 0, sizeof l_F_2428);
S_R10(&l_F_2428, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2429; memset(&l_H_2429, 0, sizeof l_H_2429);
l_H_2429 = p_HANDLERS;
R10 l_WORD_2430; memset(&l_WORD_2430, 0, sizeof l_WORD_2430);
S_R10(&l_WORD_2430, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2428, l_F_2428));
r_PUSH_CTX(((rt_int)3LL), l_F_2428);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2428, l_F_2428, l_F_2428));
for (;;) {
if ((l_H_2429 == NULL)) goto L_end2431;
{
{
R21 * l_N_2432; memset(&l_N_2432, 0, sizeof l_N_2432);
l_N_2432 = ((*(R21 *)rt_nil_check(l_H_2429))).f_A;
R10 l_COND_2433; memset(&l_COND_2433, 0, sizeof l_COND_2433);
S_R10(&l_COND_2433, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2432 == NULL)) goto L_end2434;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2432))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2432))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2432))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2432))).f_NAME);
}
S_R10(&l_COND_2433, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2433, l_F_2428, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2432))).f_NAME)), 0);
l_N_2432 = ((*(R21 *)rt_nil_check(l_N_2432))).f_NEXT;
}
RT_B_TICK();
} L_end2434: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2430, l_COND_2433));
S_R10(&l_WORD_2430, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2428, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2429))).f_B);
r_POP_CTX();
}
l_H_2429 = ((*(R21 *)rt_nil_check(l_H_2429))).f_NEXT;
}
RT_B_TICK();
} L_end2431: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2428));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2435; memset(&l_K_2435, 0, sizeof l_K_2435);
l_K_2435 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2435 == g_N_NULL))
{
return;
}
else if ((l_K_2435 == g_N_LABELED))
{
{
R12 * l_Y_2436; memset(&l_Y_2436, 0, sizeof l_Y_2436);
l_Y_2436 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2436))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2435 == g_N_GOTO))
{
{
R12 * l_Y_2437; memset(&l_Y_2437, 0, sizeof l_Y_2437);
l_Y_2437 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2438; memset(&l_N_2438, 0, sizeof l_N_2438);
R17 * l_C_2439; memset(&l_C_2439, 0, sizeof l_C_2439);
l_C_2439 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2437 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2437))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2437))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2438 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2437))).f_MV);
for (;;) {
if ((l_N_2438 <= ((rt_int)0LL))) goto L_end2440;
{
if ((((*(R17 *)rt_nil_check(l_C_2439))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2439))).f_NAME));
l_N_2438 = rt_sub(l_N_2438, ((rt_int)1LL));
}
l_C_2439 = ((*(R17 *)rt_nil_check(l_C_2439))).f_NEXT;
}
RT_B_TICK();
} L_end2440: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2437))).f_ACCESS));
}
}
else if ((l_K_2435 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2435 == g_N_CALL))
{
{
R26 l_V_2441; memset(&l_V_2441, 0, sizeof l_V_2441);
S_R26(&l_V_2441, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2441).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2441).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2441).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2435 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2435 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2435 == g_N_LOOP))
{
{
R10 l_END_L_2442; memset(&l_END_L_2442, 0, sizeof l_END_L_2442);
S_R10(&l_END_L_2442, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2442));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2442);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2442));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2442));
}
}
else if ((l_K_2435 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2435 == g_N_EXIT))
{
{
R17 * l_C_2443; memset(&l_C_2443, 0, sizeof l_C_2443);
l_C_2443 = r_LEAVE(((rt_int)2LL));
if ((l_C_2443 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2443))).f_NAME));
}
}
else if ((l_K_2435 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2435 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2435 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2435 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2435 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2435 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2435 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2435 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2444; memset(&l_Y_2444, 0, sizeof l_Y_2444);
l_Y_2444 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2444 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2444))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2444))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2445 = r_CALL_EXPR(p_S, NULL);
return rv2445; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2446; memset(&l_ARM_2446, 0, sizeof l_ARM_2446);
l_ARM_2446 = p_ARMS;
R10 l_WORD_2447; memset(&l_WORD_2447, 0, sizeof l_WORD_2447);
S_R10(&l_WORD_2447, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2448; memset(&l_OPEN_2448, 0, sizeof l_OPEN_2448);
l_OPEN_2448 = ((rt_int)0LL);
rt_int l_CHOSEN_2449; memset(&l_CHOSEN_2449, 0, sizeof l_CHOSEN_2449);
l_CHOSEN_2449 = 0;
for (;;) {
if ((l_ARM_2446 == NULL)) goto L_end2450;
{
{
R23 l_M_2451; memset(&l_M_2451, 0, sizeof l_M_2451);
S_R23(&l_M_2451, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2446))).f_A), 0);
if (l_CHOSEN_2449)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2446))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2446))).f_B);
}
else if ((l_M_2451).f_OK)
{
if ((!r_TEQS(l_WORD_2447, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2448 = rt_add(l_OPEN_2448, ((rt_int)1LL));
S_R10(&l_WORD_2447, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2446))).f_A)));
if (((l_M_2451).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2446))).f_B);
l_CHOSEN_2449 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2446))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2447, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2446))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2446))).f_B);
S_R10(&l_WORD_2447, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2446 = ((*(R21 *)rt_nil_check(l_ARM_2446))).f_NEXT;
}
RT_B_TICK();
} L_end2450: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2449)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2447, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2453_lo = ((rt_int)1LL), it2453_hi = l_OPEN_2448;
for (rt_int it2453 = it2453_lo; it2453 <= it2453_hi; it2453++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2453 == it2453_hi) break;
} } L_end2452: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2454; memset(&l_SAVED_CODE_2454, 0, sizeof l_SAVED_CODE_2454);
S_R14(&l_SAVED_CODE_2454, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2455; memset(&rc2455, 0, sizeof rc2455);  rc2455.f_HEAD = NULL; rc2455.f_TAIL = NULL; rc2455; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2454, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2456; memset(&l_C_2456, 0, sizeof l_C_2456);
S_R10(&l_C_2456, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2457; memset(&l_END_L_2457, 0, sizeof l_END_L_2457);
S_R10(&l_END_L_2457, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2458; memset(&l_IT_2458, 0, sizeof l_IT_2458);
S_R10(&l_IT_2458, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2459; memset(&l_R_2459, 0, sizeof l_R_2459);
l_R_2459 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2460; memset(&l_LO_2460, 0, sizeof l_LO_2460);
S_R26(&l_LO_2460, r_EXPR(((*(R21 *)rt_nil_check(l_R_2459))).f_A, NULL), 0);
R26 l_HI_2461; memset(&l_HI_2461, 0, sizeof l_HI_2461);
S_R26(&l_HI_2461, r_EXPR(((*(R21 *)rt_nil_check(l_R_2459))).f_B, (l_LO_2460).f_T), 0);
R22 * l_T_2462; memset(&l_T_2462, 0, sizeof l_T_2462);
l_T_2462 = r_REAL_TYPE((l_LO_2460).f_T);
R10 l_LOC_2463; memset(&l_LOC_2463, 0, sizeof l_LOC_2463);
R10 l_HIC_2464; memset(&l_HIC_2464, 0, sizeof l_HIC_2464);
if ((((*(R22 *)rt_nil_check(l_T_2462))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2462))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2462))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2462))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2463, (l_LO_2460).f_C, 0);
S_R10(&l_HIC_2464, (l_HI_2461).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2459))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2459))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2463, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2463), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2459))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2464, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2464), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2458, l_LOC_2463, l_IT_2458, l_HIC_2464));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2458, l_IT_2458, l_IT_2458, l_IT_2458));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2465; memset(&l_Y_2465, 0, sizeof l_Y_2465);
l_Y_2465 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2465))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2462))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2465))).f_T = ((*(R22 *)rt_nil_check(l_T_2462))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2465))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2465, rt_str("", 0)), l_IT_2458));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2465, rt_str("", 0)), l_IT_2458));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2465))).f_ACCESS, l_IT_2458, 0);
}
r_DEFINE(l_Y_2465, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2457);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2458, l_IT_2458));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2457));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2466; memset(&l_CS_2466, 0, sizeof l_CS_2466);
l_CS_2466 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2467; memset(&l_C_2467, 0, sizeof l_C_2467);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2467 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2466))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2466))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2466))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2466))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2466))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2466))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2466))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2466))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2468; memset(&l_V_2468, 0, sizeof l_V_2468);
S_R10(&l_V_2468, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2466))).f_RESULT), l_V_2468, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2466))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2466))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2467 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2468));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2469; memset(&l_C_2469, 0, sizeof l_C_2469);
l_C_2469 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2469 == NULL)) goto L_end2470;
{
if ((((*(R17 *)rt_nil_check(l_C_2469))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2469))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2469))).f_KIND == ((rt_int)1LL)))
{
goto L_end2470;
}
l_C_2469 = ((*(R17 *)rt_nil_check(l_C_2469))).f_NEXT;
}
RT_B_TICK();
} L_end2470: ;
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
R21 * l_TG_2471; memset(&l_TG_2471, 0, sizeof l_TG_2471);
l_TG_2471 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2471))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2472; memset(&l_B_2472, 0, sizeof l_B_2472);
S_R26(&l_B_2472, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2471))).f_A, NULL), 0);
if ((!(l_B_2472).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2472).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2473; memset(&l_ARGS_2473, 0, sizeof l_ARGS_2473);
l_ARGS_2473 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2471))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2471))).f_C, g_M_IN, r_VAL_ARG(l_B_2472, NULL))));
R12 * l_Y_2474; memset(&l_Y_2474, 0, sizeof l_Y_2474);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2473))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2474 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2473, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2474 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2473))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2474 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2473, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2474 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2474, l_ARGS_2473, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2472).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2472).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2475; memset(&l_V_2475, 0, sizeof l_V_2475);
S_R26(&l_V_2475, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2472).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2475).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2472).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2472).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2471))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2471))).f_C), (l_V_2475).f_C));
}
}
return;
}
{
R26 l_LV_2476; memset(&l_LV_2476, 0, sizeof l_LV_2476);
S_R26(&l_LV_2476, r_EXPR(l_TG_2471, NULL), 0);
R21 * l_SAVED_Q_2477; memset(&l_SAVED_Q_2477, 0, sizeof l_SAVED_Q_2477);
l_SAVED_Q_2477 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2476).f_LVAL))
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
R26 l_V_2478; memset(&l_V_2478, 0, sizeof l_V_2478);
S_R26(&l_V_2478, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2476).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_2476).f_T, (l_LV_2476).f_C, l_V_2478, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2476).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2477;
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2479; memset(&l_Y_2479, 0, sizeof l_Y_2479);
l_Y_2479 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2480; memset(&l_V_2480, 0, sizeof l_V_2480);
S_R26(&l_V_2480, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2479))).f_T = (l_V_2480).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2481; memset(&l_CN_2481, 0, sizeof l_CN_2481);
S_R10(&l_CN_2481, r_NEW_OBJECT(l_Y_2479, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2480).f_T))
{
r_CODE(r_INIT_CODE((l_V_2480).f_T, l_CN_2481));
}
r_CODE(r_ASSIGN_CODE((l_V_2480).f_T, l_CN_2481, (l_V_2480).f_C));
}
}
else
{
if ((!(l_V_2480).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2482; memset(&l_P_2482, 0, sizeof l_P_2482);
S_R10(&l_P_2482, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2480).f_T), l_P_2482, (l_V_2480).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2479))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2482), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2479))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2479))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2479))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2479, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2483; memset(&l_ARM_2483, 0, sizeof l_ARM_2483);
l_ARM_2483 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2484; memset(&l_CH_2484, 0, sizeof l_CH_2484);
S_R26(&l_CH_2484, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2485; memset(&l_T_2485, 0, sizeof l_T_2485);
l_T_2485 = r_REAL_TYPE((l_CH_2484).f_T);
R12 * l_BOUND_2486; memset(&l_BOUND_2486, 0, sizeof l_BOUND_2486);
l_BOUND_2486 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2485))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2485))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2487; memset(&l_TMP_2487, 0, sizeof l_TMP_2487);
S_R10(&l_TMP_2487, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2488; memset(&l_WORD_2488, 0, sizeof l_WORD_2488);
S_R10(&l_WORD_2488, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2487, (l_CH_2484).f_C));
for (;;) {
if ((l_ARM_2483 == NULL)) goto L_end2489;
{
{
R21 * l_L_2490; memset(&l_L_2490, 0, sizeof l_L_2490);
l_L_2490 = ((*(R21 *)rt_nil_check(l_ARM_2483))).f_A;
R10 l_COND_2491; memset(&l_COND_2491, 0, sizeof l_COND_2491);
S_R10(&l_COND_2491, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2490 == NULL)) goto L_end2492;
{
S_R10(&l_COND_2491, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2491, l_TMP_2487, (r_EXPR(l_L_2490, l_T_2485)).f_C), 0);
l_L_2490 = ((*(R21 *)rt_nil_check(l_L_2490))).f_NEXT;
}
RT_B_TICK();
} L_end2492: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2488, l_COND_2491));
S_R10(&l_WORD_2488, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2483))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2483))).f_C);
}
l_ARM_2483 = ((*(R21 *)rt_nil_check(l_ARM_2483))).f_NEXT;
}
RT_B_TICK();
} L_end2489: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2488, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2485))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2485))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2485))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2485))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2485));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2484).f_C));
for (;;) {
if ((l_ARM_2483 == NULL)) goto L_end2493;
{
{
R21 * l_L_2494; memset(&l_L_2494, 0, sizeof l_L_2494);
l_L_2494 = ((*(R21 *)rt_nil_check(l_ARM_2483))).f_A;
R23 l_FIRST_2495; memset(&l_FIRST_2495, 0, sizeof l_FIRST_2495);
S_R23(&l_FIRST_2495, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2494 == NULL)) goto L_end2496;
{
if ((((*(R21 *)rt_nil_check(l_L_2494))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2497; memset(&l_LO_2497, 0, sizeof l_LO_2497);
S_R23(&l_LO_2497, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2494))).f_A, l_T_2485), 0);
R23 l_HI_2498; memset(&l_HI_2498, 0, sizeof l_HI_2498);
S_R23(&l_HI_2498, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2494))).f_B, l_T_2485), 0);
rt_int l_A_2499; memset(&l_A_2499, 0, sizeof l_A_2499);
l_A_2499 = (l_LO_2497).f_V;
rt_int l_B_2500; memset(&l_B_2500, 0, sizeof l_B_2500);
l_B_2500 = (l_HI_2498).f_V;
if ((!(((l_LO_2497).f_OK && (l_HI_2498).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2494))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2494))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2494))).f_IV == ((rt_int)3LL))))
{
l_A_2499 = rt_add(l_A_2499, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2494))).f_IV >= ((rt_int)2LL)))
{
l_B_2500 = rt_sub(l_B_2500, ((rt_int)1LL));
}
if ((!(l_FIRST_2495).f_OK))
{
S_R23(&l_FIRST_2495, r_SOME(l_A_2499), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2499), r_NUM(l_B_2500)));
}
}
else
{
{
R23 l_M_2501; memset(&l_M_2501, 0, sizeof l_M_2501);
S_R23(&l_M_2501, r_ENUM_MANIFEST(l_L_2494, l_T_2485), 0);
if ((!(l_M_2501).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2494))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2495).f_OK))
{
S_R23(&l_FIRST_2495, l_M_2501, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2501).f_V)));
}
}
l_L_2494 = ((*(R21 *)rt_nil_check(l_L_2494))).f_NEXT;
}
RT_B_TICK();
} L_end2496: ;
if ((!(l_BOUND_2486 == NULL)))
{
{
R22 * l_SAVED_2502; memset(&l_SAVED_2502, 0, sizeof l_SAVED_2502);
l_SAVED_2502 = ((*(R12 *)rt_nil_check(l_BOUND_2486))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2486))).f_T = r_NARROW(l_SAVED_2502, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2495).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2483))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2483))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2486))).f_T = l_SAVED_2502;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2483))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2483))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2483 = ((*(R21 *)rt_nil_check(l_ARM_2483))).f_NEXT;
}
RT_B_TICK();
} L_end2493: ;
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
{ R12 * rv2503 = NULL;
return rv2503; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2504 = NULL;
return rv2504; }
}
{
R12 * l_Y_2505; memset(&l_Y_2505, 0, sizeof l_Y_2505);
l_Y_2505 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2505 == NULL))
{
{ R12 * rv2506 = NULL;
return rv2506; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2505))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2507 = NULL;
return rv2507; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2505))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2508 = NULL;
return rv2508; }
}
{
R24 * l_F_2509; memset(&l_F_2509, 0, sizeof l_F_2509);
l_F_2509 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2505))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2509 == NULL))
{
{ R12 * rv2510 = NULL;
return rv2510; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2509))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2511 = NULL;
return rv2511; }
}
}
{ R12 * rv2512 = l_Y_2505;
return rv2512; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2513; memset(&l_N_2513, 0, sizeof l_N_2513);
l_N_2513 = r_COPY_TYP(p_T);
R24 * l_F_2514; memset(&l_F_2514, 0, sizeof l_F_2514);
l_F_2514 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2515; memset(&l_A_2515, 0, sizeof l_A_2515);
l_A_2515 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2516; memset(&l_HEAD_2516, 0, sizeof l_HEAD_2516);
l_HEAD_2516 = NULL;
R25 * l_TAIL_2517; memset(&l_TAIL_2517, 0, sizeof l_TAIL_2517);
l_TAIL_2517 = NULL;
for (;;) {
if ((l_F_2514 == NULL)) goto L_end2518;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2514))).f_KIND == ((rt_int)0LL))) && (!(l_A_2515 == NULL))))
{
{
R25 * l_B_2519; memset(&l_B_2519, 0, sizeof l_B_2519);
l_B_2519 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2519)), (*(R25 *)rt_nil_check(l_A_2515)), 0);
((*(R25 *)rt_nil_check(l_B_2519))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2514))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2519))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2519))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2519))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2517 == NULL))
{
l_HEAD_2516 = l_B_2519;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2517))).f_NEXT = l_B_2519;
}
l_TAIL_2517 = l_B_2519;
}
l_A_2515 = ((*(R25 *)rt_nil_check(l_A_2515))).f_NEXT;
}
l_F_2514 = ((*(R24 *)rt_nil_check(l_F_2514))).f_NEXT;
}
RT_B_TICK();
} L_end2518: ;
((*(R22 *)rt_nil_check(l_N_2513))).f_ARGS = l_HEAD_2516;
{ R22 * rv2520 = l_N_2513;
return rv2520; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2521; memset(&l_ARM_2521, 0, sizeof l_ARM_2521);
l_ARM_2521 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2522; memset(&l_SAVED_2522, 0, sizeof l_SAVED_2522);
l_SAVED_2522 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2521 == NULL)) goto L_end2523;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2521))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2521))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2521))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2522;
return;
}
l_ARM_2521 = ((*(R21 *)rt_nil_check(l_ARM_2521))).f_NEXT;
}
RT_B_TICK();
} L_end2523: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2522;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2524; memset(&l_T_2524, 0, sizeof l_T_2524);
l_T_2524 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2524))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2525 = l_T_2524;
return rv2525; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2526; memset(&l_TD_2526, 0, sizeof l_TD_2526);
S_R10(&l_TD_2526, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2527; memset(&l_P_2527, 0, sizeof l_P_2527);
l_P_2527 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2527 == NULL)) goto L_end2528;
{
{
R12 * l_Y_2529; memset(&l_Y_2529, 0, sizeof l_Y_2529);
l_Y_2529 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2527))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2529))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2529))).f_DECL = l_P_2527;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2529, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2529))).f_INPUT = 1;
r_DEFINE(l_Y_2529, ((*(R21 *)rt_nil_check(l_P_2527))).f_LINE);
}
l_P_2527 = ((*(R21 *)rt_nil_check(l_P_2527))).f_NEXT;
}
RT_B_TICK();
} L_end2528: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2526));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2526, l_TD_2526));
l_P_2527 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2527 == NULL)) goto L_end2530;
{
r_ACTIVATE_PATH(l_P_2527, l_TD_2526);
l_P_2527 = ((*(R21 *)rt_nil_check(l_P_2527))).f_NEXT;
}
RT_B_TICK();
} L_end2530: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2526, l_TD_2526, l_TD_2526));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2526));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2531; memset(&l_FN_2531, 0, sizeof l_FN_2531);
S_R10(&l_FN_2531, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2532; memset(&l_FT_2532, 0, sizeof l_FT_2532);
S_R10(&l_FT_2532, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2533; memset(&l_Y_2533, 0, sizeof l_Y_2533);
l_Y_2533 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2534; memset(&l_H_2534, 0, sizeof l_H_2534);
S_R10(&l_H_2534, r_OBJ_ACCESS(l_Y_2533), 0);
R10 l_IT_2535; memset(&l_IT_2535, 0, sizeof l_IT_2535);
S_R10(&l_IT_2535, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2536; memset(&l_PRIO_2536, 0, sizeof l_PRIO_2536);
S_R10(&l_PRIO_2536, r_MK(rt_str("0", 1)), 0);
R10 l_START_2537; memset(&l_START_2537, 0, sizeof l_START_2537);
R22 * l_LT_2538; memset(&l_LT_2538, 0, sizeof l_LT_2538);
l_LT_2538 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2532, l_FT_2532));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2536, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2539; memset(&l_R_2539, 0, sizeof l_R_2539);
l_R_2539 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2540; memset(&l_LV_2540, 0, sizeof l_LV_2540);
S_R26(&l_LV_2540, r_EXPR(((*(R21 *)rt_nil_check(l_R_2539))).f_A, NULL), 0);
R10 l_LO_2541; memset(&l_LO_2541, 0, sizeof l_LO_2541);
S_R10(&l_LO_2541, (l_LV_2540).f_C, 0);
R10 l_HI_2542; memset(&l_HI_2542, 0, sizeof l_HI_2542);
S_R10(&l_HI_2542, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2539))).f_B, (l_LV_2540).f_T)).f_C, 0);
R22 * l_RT_2543; memset(&l_RT_2543, 0, sizeof l_RT_2543);
l_RT_2543 = r_REAL_TYPE((l_LV_2540).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2543))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2543))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2538 = ((*(R22 *)rt_nil_check(l_RT_2543))).f_BASE;
S_R10(&l_HI_2542, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2539))).f_B, l_LT_2538)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2543))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2543))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2539))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2539))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2541, r_FMT1(rt_str("(@) + 1", 7), l_LO_2541), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2539))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2542, r_FMT1(rt_str("(@) - 1", 7), l_HI_2542), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2534, l_LO_2541, l_HI_2542));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2535, l_H_2534, l_IT_2535, l_H_2534), l_IT_2535));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2535));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2532, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2535));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2544; memset(&l_V_2544, 0, sizeof l_V_2544);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2545; memset(&l_I_2545, 0, sizeof l_I_2545);
l_I_2545 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2545))).f_T = l_LT_2538;
((*(R12 *)rt_nil_check(l_I_2545))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2545))).f_ACCESS, l_IT_2535, 0);
((*(R12 *)rt_nil_check(l_I_2545))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2545, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2544, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2544).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2544).f_C));
}
}
S_R10(&l_START_2537, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2534, l_IT_2535, l_FN_2531, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2537, p_TD, l_PRIO_2536, l_IT_2535));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2534));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2537, p_TD, l_PRIO_2536));
}
r_PATH_BODY(p_P, l_FN_2531, l_FT_2532, l_LT_2538);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2546 = r_MK(rt_str("NULL", 4));
return rv2546; }
}
{ R10 rv2547 = r_MK(rt_str("F", 1));
return rv2547; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2548; memset(&l_SAVED_CODE_2548, 0, sizeof l_SAVED_CODE_2548);
S_R14(&l_SAVED_CODE_2548, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2549; memset(&l_SAVED_CTXS_2549, 0, sizeof l_SAVED_CTXS_2549);
l_SAVED_CTXS_2549 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2550; memset(&l_OUTER_2550, 0, sizeof l_OUTER_2550);
l_OUTER_2550 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2551; memset(&l_H_2551, 0, sizeof l_H_2551);
l_H_2551 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2552; memset(&l_CS_2552, 0, sizeof l_CS_2552);
l_CS_2552 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_UPT_2553; memset(&l_UPT_2553, 0, sizeof l_UPT_2553);
S_R10(&l_UPT_2553, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2550))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2553, ((*(R18 *)rt_nil_check(l_OUTER_2550))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2552)), ({ R18 rc2554; memset(&rc2554, 0, sizeof rc2554);  rc2554.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2550))).f_LEVEL, ((rt_int)1LL)); rc2554.f_R = NULL; rc2554.f_FRAMED = 1; S_R10(&rc2554.f_FTYPE, p_FT, 0); S_R14(&rc2554.f_FIELDS, ({ R14 rc2555; memset(&rc2555, 0, sizeof rc2555);  rc2555.f_HEAD = NULL; rc2555.f_TAIL = NULL; rc2555; }), 0); rc2554.f_UP = l_OUTER_2550; rc2554.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2551))).f_B; rc2554.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2551))).f_A; rc2554.f_RESULT = NULL; rc2554.f_IS_PATH = 1; S_R10(&rc2554.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2554; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2553), &((*(R18 *)rt_nil_check(l_CS_2552))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2552;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2556; memset(&rc2556, 0, sizeof rc2556);  rc2556.f_HEAD = NULL; rc2556.f_TAIL = NULL; rc2556; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2551))).f_B, ((*(R21 *)rt_nil_check(l_H_2551))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2557; memset(&l_I_2557, 0, sizeof l_I_2557);
l_I_2557 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2557))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2557))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2557))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2557))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2552))).f_FIELDS);
r_DEFINE(l_I_2557, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2558; memset(&l_L_2558, 0, sizeof l_L_2558);
l_L_2558 = ((*(R21 *)rt_nil_check(l_H_2551))).f_A;
R10 l_C_2559; memset(&l_C_2559, 0, sizeof l_C_2559);
S_R10(&l_C_2559, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2558 == NULL)) goto L_end2560;
{
S_R10(&l_C_2559, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2559, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2558))).f_NAME)), 0);
l_L_2558 = ((*(R21 *)rt_nil_check(l_L_2558))).f_NEXT;
}
RT_B_TICK();
} L_end2560: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2559));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2552))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2550;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2548, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2549;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2561; memset(&l_C_2561, 0, sizeof l_C_2561);
l_C_2561 = (p_B).f_HEAD;
R10 l_R_2562; memset(&l_R_2562, 0, sizeof l_R_2562);
S_R10(&l_R_2562, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2561 == NULL)) goto L_end2563;
{
S_R10(&l_R_2562, r_CAT(l_R_2562, ((*(R15 *)rt_nil_check(l_C_2561))).f_T), 0);
l_C_2561 = ((*(R15 *)rt_nil_check(l_C_2561))).f_NEXT;
}
RT_B_TICK();
} L_end2563: ;
{ R10 rv2564 = l_R_2562;
return rv2564; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2565; memset(&l_NAME_2565, 0, sizeof l_NAME_2565);
S_R10(&l_NAME_2565, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2566; memset(&l_SUB_2566, 0, sizeof l_SUB_2566);
S_R10(&l_SUB_2566, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2566, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2567; memset(&l_Y_2567, 0, sizeof l_Y_2567);
l_Y_2567 = r_LOOKUP(l_NAME_2565);
if ((l_Y_2567 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2565);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2567))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2565);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2567))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2568 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2567), l_SUB_2566);
return rv2568; }
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
R10 l_NAME_2569; memset(&l_NAME_2569, 0, sizeof l_NAME_2569);
S_R10(&l_NAME_2569, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2570; memset(&l_LINE_2570, 0, sizeof l_LINE_2570);
l_LINE_2570 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2569, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2571; memset(&l_V_2571, 0, sizeof l_V_2571);
S_R26(&l_V_2571, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2571).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2570, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2572 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2571).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2571).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2572; }
}
}
else if (r_TEQS(l_NAME_2569, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2573 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2573; }
}
{ R26 rv2574 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2574; }
}
else if (r_TEQS(l_NAME_2569, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2575 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2575; }
}
{ R26 rv2576 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2576; }
}
else if ((r_TEQS(l_NAME_2569, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2569, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2570, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2569);
}
{
R26 l_V_2577; memset(&l_V_2577, 0, sizeof l_V_2577);
S_R26(&l_V_2577, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2577).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2570, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2577).f_LVAL))
{
r_FAIL(l_LINE_2570, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2569, rt_str("REQUEST", 7)))
{
{ R26 rv2578 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2577).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2578; }
}
{ R26 rv2579 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2577).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2579; }
}
}
else if (r_TEQS(l_NAME_2569, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2570);
{ R26 rv2580 = r_START_IO_CALL(p_E);
return rv2580; }
}
r_FAILT(l_LINE_2570, rt_str("unknown routine ", 16), l_NAME_2569);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2581; memset(&l_ARGS_2581, 0, sizeof l_ARGS_2581);
l_ARGS_2581 = r_CALL_ARGS(p_E);
R12 * l_Y_2582; memset(&l_Y_2582, 0, sizeof l_Y_2582);
l_Y_2582 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2581, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2583; memset(&l_R_2583, 0, sizeof l_R_2583);
if ((l_Y_2582 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2583, r_CALL_SYM(l_Y_2582, l_ARGS_2581, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2584 = l_R_2583;
return rv2584; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2585; memset(&l_I_2585, 0, sizeof l_I_2585);
l_I_2585 = ((R19 *)rt_b_new(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2585)), ({ R19 rc2586; memset(&rc2586, 0, sizeof rc2586);  rc2586.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2586.f_IMPORTS = p_IMPORTS; rc2586.f_SIGNALS = p_SIGNALS; S_R10(&rc2586.f_NAME, p_NAME, 0); rc2586.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2586; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2585;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2587; memset(&l_BASE_2587, 0, sizeof l_BASE_2587);
S_R10(&l_BASE_2587, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2588; memset(&l_S_2588, 0, sizeof l_S_2588);
l_S_2588 = rt_b_str_new((l_BASE_2587).f_LEN, 0);
rt_b_assign(&l_S_2588, r_STR(l_BASE_2587, (l_BASE_2587).f_LEN));
R21 * l_N_2589; memset(&l_N_2589, 0, sizeof l_N_2589);
l_N_2589 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2591_lo = ((rt_int)0LL), it2591_hi = rt_sub((l_BASE_2587).f_LEN, ((rt_int)1LL));
for (rt_int it2591 = it2591_lo; it2591 <= it2591_hi; it2591++) {
{
if (rt_b_eq(rt_b_slice(l_S_2588, it2591, it2591), rt_str("$", 1)))
{
S_R10(&l_BASE_2587, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_2588, ((rt_int)0LL), rt_sub(it2591, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2588, rt_add(it2591, ((rt_int)1LL)), rt_sub((l_BASE_2587).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2591 == it2591_hi) break;
} } L_end2590: ;
for (;;) {
if ((l_N_2589 == NULL)) goto L_end2592;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2589))).f_NAME, l_BASE_2587))
{
{ R10 rv2593 = r_FMT2(rt_str("@_@", 3), l_BASE_2587, r_NEW_NAME(rt_str("", 0)));
return rv2593; }
}
l_N_2589 = ((*(R21 *)rt_nil_check(l_N_2589))).f_NEXT;
}
RT_B_TICK();
} L_end2592: ;
l_N_2589 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2589))).f_NAME, l_BASE_2587, 0);
((*(R21 *)rt_nil_check(l_N_2589))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2589;
{ R10 rv2594 = l_BASE_2587;
return rv2594; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2595 = 0;
return rv2595; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2596 = 1;
return rv2596; }
}
{ rt_int rv2597 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2597; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2598; memset(&l_S_2598, 0, sizeof l_S_2598);
l_S_2598 = p_S0;
for (;;) {
if ((l_S_2598 == NULL)) goto L_end2599;
{
if (((((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_PAR)))
{
{ rt_int rv2600 = 1;
return rv2600; }
}
if (((((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2598))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2598))).f_B)))
{
{ rt_int rv2601 = 1;
return rv2601; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2598))).f_A))).f_B))
{
{ rt_int rv2602 = 1;
return rv2602; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2598))).f_B))).f_B))
{
{ rt_int rv2603 = 1;
return rv2603; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2604; memset(&l_A_2604, 0, sizeof l_A_2604);
l_A_2604 = ((*(R21 *)rt_nil_check(l_S_2598))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2598))).f_KIND == g_N_CASE))
{
l_A_2604 = ((*(R21 *)rt_nil_check(l_S_2598))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2598))).f_D == NULL)))
{
{ rt_int rv2605 = 1;
return rv2605; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2598))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2598))).f_C))).f_B))
{
{ rt_int rv2606 = 1;
return rv2606; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2598))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2598))).f_B))).f_B))
{
{ rt_int rv2607 = 1;
return rv2607; }
}
}
for (;;) {
if ((l_A_2604 == NULL)) goto L_end2608;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2604))).f_C == NULL)))
{
{ rt_int rv2609 = 1;
return rv2609; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2604))).f_B))).f_B))
{
{ rt_int rv2610 = 1;
return rv2610; }
}
l_A_2604 = ((*(R21 *)rt_nil_check(l_A_2604))).f_NEXT;
}
RT_B_TICK();
} L_end2608: ;
}
}
l_S_2598 = ((*(R21 *)rt_nil_check(l_S_2598))).f_NEXT;
}
RT_B_TICK();
} L_end2599: ;
{ rt_int rv2611 = 0;
return rv2611; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2612; memset(&l_Y_2612, 0, sizeof l_Y_2612);
l_Y_2612 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2613; memset(&l_S_2613, 0, sizeof l_S_2613);
l_S_2613 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_2613, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2612))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2612))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2612))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2612))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2612, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2615_lo = ((rt_int)1LL), it2615_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2615 = it2615_lo; it2615 <= it2615_hi; it2615++) {
{
if (rt_b_eq(rt_b_slice(l_S_2613, it2615, it2615), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2612))).f_PREFIX, r_MKN(rt_b_slice(l_S_2613, ((rt_int)0LL), rt_sub(it2615, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2616; memset(&l_SHORT_2616, 0, sizeof l_SHORT_2616);
l_SHORT_2616 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2613, rt_add(it2615, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2616))).f_ORIG = l_Y_2612;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2616))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2612))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2616))).f_DECL = p_R;
r_DEFINE(l_SHORT_2616, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2614;
}
}
RT_B_TICK();
if (it2615 == it2615_hi) break;
} } L_end2614: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2617; memset(&l_R_2617, 0, sizeof l_R_2617);
l_R_2617 = p_RS;
for (;;) {
if ((l_R_2617 == NULL)) goto L_end2618;
{
if ((((*(R21 *)rt_nil_check(l_R_2617))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2617);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2617);
}
l_R_2617 = ((*(R21 *)rt_nil_check(l_R_2617))).f_NEXT;
}
RT_B_TICK();
} L_end2618: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2619; memset(&l_R_2619, 0, sizeof l_R_2619);
l_R_2619 = p_RS;
for (;;) {
if ((l_R_2619 == NULL)) goto L_end2620;
{
if ((((*(R21 *)rt_nil_check(l_R_2619))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2621; memset(&l_M_2621, 0, sizeof l_M_2621);
l_M_2621 = r_FIND_DECL(l_R_2619);
r_ENTER_MODULE(l_M_2621);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2619))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2621);
}
}
else
{
{
R12 * l_Y_2622; memset(&l_Y_2622, 0, sizeof l_Y_2622);
l_Y_2622 = r_FIND_DECL(l_R_2619);
r_ROUTINE_HEADER(l_Y_2622);
}
}
l_R_2619 = ((*(R21 *)rt_nil_check(l_R_2619))).f_NEXT;
}
RT_B_TICK();
} L_end2620: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2623; memset(&l_Y_2623, 0, sizeof l_Y_2623);
l_Y_2623 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2623 == NULL)) goto L_end2624;
{
if (((((*(R12 *)rt_nil_check(l_Y_2623))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2623))).f_ORIG == NULL)))
{
{ R12 * rv2625 = l_Y_2623;
return rv2625; }
}
l_Y_2623 = r_LOOKUP_NEXT(l_Y_2623);
}
RT_B_TICK();
} L_end2624: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2626; memset(&l_D_2626, 0, sizeof l_D_2626);
l_D_2626 = p_DECLS;
for (;;) {
if ((l_D_2626 == NULL)) goto L_end2627;
{
if (((((*(R21 *)rt_nil_check(l_D_2626))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2626))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2626))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2628; memset(&l_Y_2628, 0, sizeof l_Y_2628);
l_Y_2628 = r_FIND_DECL(l_D_2626);
R22 * l_T_2629; memset(&l_T_2629, 0, sizeof l_T_2629);
l_T_2629 = r_RESOLVE_USER(r_TYPE_REF(l_D_2626));
}
}
}
l_D_2626 = ((*(R21 *)rt_nil_check(l_D_2626))).f_NEXT;
}
RT_B_TICK();
} L_end2627: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2630; memset(&l_TS_2630, 0, sizeof l_TS_2630);
l_TS_2630 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2630))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2631 = l_TS_2630;
return rv2631; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2632; memset(&l_Y_2632, 0, sizeof l_Y_2632);
l_Y_2632 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2633; memset(&l_SAVED_2633, 0, sizeof l_SAVED_2633);
l_SAVED_2633 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2632))).f_DECL = p_M;
r_DEFINE(l_Y_2632, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2634; memset(&l_MARK_2634, 0, sizeof l_MARK_2634);
l_MARK_2634 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2632;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2632))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2634);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2633;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2632);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2635; memset(&l_Y_2635, 0, sizeof l_Y_2635);
l_Y_2635 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2635 == NULL)) goto L_end2636;
{
{
R12 * l_NEXT_2637; memset(&l_NEXT_2637, 0, sizeof l_NEXT_2637);
l_NEXT_2637 = ((*(R12 *)rt_nil_check(l_Y_2635))).f_SNEXT;
r_DEFINE(l_Y_2635, ((rt_int)0LL));
l_Y_2635 = l_NEXT_2637;
}
}
RT_B_TICK();
} L_end2636: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2638; memset(&l_MARK_2638, 0, sizeof l_MARK_2638);
l_MARK_2638 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2638 == NULL)) goto L_end2639;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2638))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2639;
}
l_MARK_2638 = ((*(R12 *)rt_nil_check(l_MARK_2638))).f_SNEXT;
}
RT_B_TICK();
} L_end2639: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2638);
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
{ rt_int rv2640 = 1;
return rv2640; }
}
}
{ rt_int rv2641 = 0;
return rv2641; }
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
R21 * l_D_2642; memset(&l_D_2642, 0, sizeof l_D_2642);
l_D_2642 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2643; memset(&l_Y_2643, 0, sizeof l_Y_2643);
l_Y_2643 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2643 == NULL)) goto L_end2644;
{
if (r_EXPORTED_BY(l_D_2642, l_Y_2643))
{
((*(R12 *)rt_nil_check(l_Y_2643))).f_EXPORTED = 1;
{
R12 * l_A_2645; memset(&l_A_2645, 0, sizeof l_A_2645);
l_A_2645 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2643))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2643))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2645)), (*(R12 *)rt_nil_check(l_Y_2643)), 0);
((*(R12 *)rt_nil_check(l_A_2645))).f_ORIG = r_ORIGINAL(l_Y_2643);
((*(R12 *)rt_nil_check(l_A_2645))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2645, ((*(R21 *)rt_nil_check(l_D_2642))).f_LINE);
}
}
l_Y_2643 = ((*(R12 *)rt_nil_check(l_Y_2643))).f_SNEXT;
}
RT_B_TICK();
} L_end2644: ;
{
R21 * l_X_2646; memset(&l_X_2646, 0, sizeof l_X_2646);
l_X_2646 = ((*(R21 *)rt_nil_check(l_D_2642))).f_B;
for (;;) {
if ((l_X_2646 == NULL)) goto L_end2647;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2646))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2646))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2646))).f_NAME);
}
l_X_2646 = ((*(R21 *)rt_nil_check(l_X_2646))).f_NEXT;
}
RT_B_TICK();
} L_end2647: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2648; memset(&l_Y_2648, 0, sizeof l_Y_2648);
l_Y_2648 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2648 == NULL)) goto L_end2649;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2648))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2648))).f_PREFIX, p_NAME)))
{
{ rt_int rv2650 = 1;
return rv2650; }
}
l_Y_2648 = ((*(R12 *)rt_nil_check(l_Y_2648))).f_SNEXT;
}
RT_B_TICK();
} L_end2649: ;
{ rt_int rv2651 = 0;
return rv2651; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2652; memset(&l_X_2652, 0, sizeof l_X_2652);
l_X_2652 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2653 = 0;
return rv2653; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2654 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2654; }
}
for (;;) {
if ((l_X_2652 == NULL)) goto L_end2655;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2652))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2656 = 1;
return rv2656; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2652))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2652))).f_A == NULL))
{
{ rt_int rv2657 = 1;
return rv2657; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2652))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2658 = 1;
return rv2658; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2659; memset(&l_T_2659, 0, sizeof l_T_2659);
l_T_2659 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2652))).f_NAME, p_Y);
if ((!(l_T_2659 == NULL)))
{
{ rt_int rv2660 = 1;
return rv2660; }
}
}
}
l_X_2652 = ((*(R21 *)rt_nil_check(l_X_2652))).f_NEXT;
}
RT_B_TICK();
} L_end2655: ;
{ rt_int rv2661 = 0;
return rv2661; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2662; memset(&l_M_2662, 0, sizeof l_M_2662);
l_M_2662 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2663; memset(&l_Z_2663, 0, sizeof l_Z_2663);
if ((l_M_2662 == NULL))
{
{ R12 * rv2664 = NULL;
return rv2664; }
}
l_Z_2663 = ((*(R12 *)rt_nil_check(l_M_2662))).f_MEMBERS;
for (;;) {
if ((l_Z_2663 == NULL)) goto L_end2665;
{
if (((((*(R12 *)rt_nil_check(l_Z_2663))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2663))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2663))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2663))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2663))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2666 = l_Z_2663;
return rv2666; }
}
}
}
}
l_Z_2663 = ((*(R12 *)rt_nil_check(l_Z_2663))).f_SNEXT;
}
RT_B_TICK();
} L_end2665: ;
{ R12 * rv2667 = NULL;
return rv2667; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2668; memset(&l_R_2668, 0, sizeof l_R_2668);
l_R_2668 = p_RS;
for (;;) {
if ((l_R_2668 == NULL)) goto L_end2669;
{
if ((((*(R21 *)rt_nil_check(l_R_2668))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2670; memset(&l_M_2670, 0, sizeof l_M_2670);
l_M_2670 = r_FIND_DECL(l_R_2668);
R21 * l_D_2671; memset(&l_D_2671, 0, sizeof l_D_2671);
l_D_2671 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2668))).f_C))).f_A;
r_ENTER_MODULE(l_M_2670);
for (;;) {
if ((l_D_2671 == NULL)) goto L_end2672;
{
if (((((*(R21 *)rt_nil_check(l_D_2671))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2671))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2671);
}
l_D_2671 = ((*(R21 *)rt_nil_check(l_D_2671))).f_NEXT;
}
RT_B_TICK();
} L_end2672: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2668))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2668))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2670);
}
}
l_R_2668 = ((*(R21 *)rt_nil_check(l_R_2668))).f_NEXT;
}
RT_B_TICK();
} L_end2669: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2673; memset(&l_R_2673, 0, sizeof l_R_2673);
l_R_2673 = p_RS;
for (;;) {
if ((l_R_2673 == NULL)) goto L_end2674;
{
if ((((*(R21 *)rt_nil_check(l_R_2673))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2675; memset(&l_M_2675, 0, sizeof l_M_2675);
l_M_2675 = r_FIND_DECL(l_R_2673);
r_ENTER_MODULE(l_M_2675);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2673))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2675);
}
}
else
{
{
R12 * l_Y_2676; memset(&l_Y_2676, 0, sizeof l_Y_2676);
l_Y_2676 = r_FIND_DECL(l_R_2673);
if ((!((*(R12 *)rt_nil_check(l_Y_2676))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2676);
}
}
}
l_R_2673 = ((*(R21 *)rt_nil_check(l_R_2673))).f_NEXT;
}
RT_B_TICK();
} L_end2674: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2677; memset(&l_LEVEL_2677, 0, sizeof l_LEVEL_2677);
l_LEVEL_2677 = r_CUR_LEVEL();
rt_int l_MORE_2678; memset(&l_MORE_2678, 0, sizeof l_MORE_2678);
l_MORE_2678 = 1;
for (;;) {
if ((!l_MORE_2678)) goto L_end2679;
{
l_MORE_2678 = 0;
{
R12 * l_P_2680; memset(&l_P_2680, 0, sizeof l_P_2680);
l_P_2680 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2681; memset(&l_PREV_2681, 0, sizeof l_PREV_2681);
l_PREV_2681 = NULL;
for (;;) {
if ((l_P_2680 == NULL)) goto L_end2682;
{
if ((((*(R12 *)rt_nil_check(l_P_2680))).f_LEVEL == l_LEVEL_2677))
{
if ((l_PREV_2681 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2680))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2681))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2680))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2680);
r_ROUTINE_BODY(l_P_2680);
r_LEAVE_MODULE_OF(l_P_2680);
l_MORE_2678 = 1;
goto L_end2682;
}
l_PREV_2681 = l_P_2680;
l_P_2680 = ((*(R12 *)rt_nil_check(l_P_2680))).f_MEMBERS;
}
RT_B_TICK();
} L_end2682: ;
}
}
RT_B_TICK();
} L_end2679: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2683; memset(&l_D_2683, 0, sizeof l_D_2683);
l_D_2683 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2684; memset(&l_S_2684, 0, sizeof l_S_2684);
l_S_2684 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2683 == NULL)) goto L_end2685;
{
if (((((*(R21 *)rt_nil_check(l_D_2683))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2683))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2683);
}
l_D_2683 = ((*(R21 *)rt_nil_check(l_D_2683))).f_NEXT;
}
RT_B_TICK();
} L_end2685: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2684 == NULL)) goto L_end2686;
{
r_STMT(l_S_2684);
l_S_2684 = ((*(R21 *)rt_nil_check(l_S_2684))).f_NEXT;
}
RT_B_TICK();
} L_end2686: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2687; memset(&l_R_2687, 0, sizeof l_R_2687);
l_R_2687 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2688; memset(&l_SAVED_CODE_2688, 0, sizeof l_SAVED_CODE_2688);
S_R14(&l_SAVED_CODE_2688, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2689; memset(&l_SAVED_CTXS_2689, 0, sizeof l_SAVED_CTXS_2689);
l_SAVED_CTXS_2689 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2690; memset(&l_SAVED_BINDS_2690, 0, sizeof l_SAVED_BINDS_2690);
l_SAVED_BINDS_2690 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2691; memset(&l_OUTER_2691, 0, sizeof l_OUTER_2691);
l_OUTER_2691 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2692; memset(&l_CS_2692, 0, sizeof l_CS_2692);
l_CS_2692 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_PROLOGUE_2693; memset(&l_PROLOGUE_2693, 0, sizeof l_PROLOGUE_2693);
S_R10(&l_PROLOGUE_2693, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2692)), ({ R18 rc2694; memset(&rc2694, 0, sizeof rc2694);  rc2694.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2694.f_R = p_Y; rc2694.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2694.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2694.f_FIELDS, ({ R14 rc2695; memset(&rc2695, 0, sizeof rc2695);  rc2695.f_HEAD = NULL; rc2695.f_TAIL = NULL; rc2695; }), 0); rc2694.f_UP = l_OUTER_2691; rc2694.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2687))).f_E; rc2694.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2687))).f_D))).f_A; rc2694.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2694.f_IS_PATH = 0; S_R10(&rc2694.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2694; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2692))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2692))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2692))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2692))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2693, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2692))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2692))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2693, r_CATS(l_PROLOGUE_2693, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2692;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2696; memset(&rc2696, 0, sizeof rc2696);  rc2696.f_HEAD = NULL; rc2696.f_TAIL = NULL; rc2696; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2687))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2687))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2687))).f_LINE);
{
R28 * l_P_2697; memset(&l_P_2697, 0, sizeof l_P_2697);
l_P_2697 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2697 == NULL)) goto L_end2698;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2697))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2697))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2699; memset(&l_V_2699, 0, sizeof l_V_2699);
l_V_2699 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2697))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2699))).f_T = ((*(R28 *)rt_nil_check(l_P_2697))).f_T;
((*(R12 *)rt_nil_check(l_V_2699))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2697))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2699))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2697))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2699))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2699))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2697))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2692))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2697))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2692))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2693, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2693, r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2699))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2697))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2700; memset(&l_ARGA_2700, 0, sizeof l_ARGA_2700);
S_R10(&l_ARGA_2700, ((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2697))).f_T, l_ARGA_2700, ((*(R21 *)rt_nil_check(l_R_2687))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2699))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2697))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2692))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2693, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2693, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2697))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2697))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2693, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2693, ((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, l_ARGA_2700), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2697))).f_T))
{
S_R10(&l_PROLOGUE_2693, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2693, ((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2697))).f_T, l_ARGA_2700)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2692))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2692))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2697))).f_T, l_ARGA_2700, ((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS)), 0);
r_DEFINE(l_V_2699, ((*(R21 *)rt_nil_check(l_R_2687))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2699, ((*(R21 *)rt_nil_check(l_R_2687))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2697))).f_T, ((*(R12 *)rt_nil_check(l_V_2699))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2687))).f_LINE, 1);
}
}
}
}
l_P_2697 = ((*(R28 *)rt_nil_check(l_P_2697))).f_NEXT;
}
RT_B_TICK();
} L_end2698: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2687))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2687))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2687))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2692))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2692))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2693));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2692))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2692))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2691;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2688, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2689;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2690;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2701; memset(&l_B_2701, 0, sizeof l_B_2701);
l_B_2701 = p_BS;
for (;;) {
if ((l_B_2701 == NULL)) goto L_end2702;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2701))).f_T == NULL)))
{
{
R12 * l_Y_2703; memset(&l_Y_2703, 0, sizeof l_Y_2703);
l_Y_2703 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2701))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2703))).f_T = ((*(R20 *)rt_nil_check(l_B_2701))).f_T;
r_DEFINE(l_Y_2703, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2701))).f_HASMV)
{
{
R12 * l_Y_2704; memset(&l_Y_2704, 0, sizeof l_Y_2704);
l_Y_2704 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2701))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2704))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2704))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2704))).f_MV = ((*(R20 *)rt_nil_check(l_B_2701))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2704))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2701))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2704))).f_INPUT = 1;
r_DEFINE(l_Y_2704, p_LINE);
}
}
l_B_2701 = ((*(R20 *)rt_nil_check(l_B_2701))).f_NEXT;
}
RT_B_TICK();
} L_end2702: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2705; memset(&l_C_2705, 0, sizeof l_C_2705);
l_C_2705 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2705 == NULL)) goto L_end2706;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2705))).f_T), &(*p_DST));
l_C_2705 = ((*(R15 *)rt_nil_check(l_C_2705))).f_NEXT;
}
RT_B_TICK();
} L_end2706: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2707; memset(&l_U_2707, 0, sizeof l_U_2707);
l_U_2707 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2707 == NULL)) goto L_end2708;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2707))).f_NAME, p_NAME))
{
{ rt_int rv2709 = 1;
return rv2709; }
}
l_U_2707 = ((*(R21 *)rt_nil_check(l_U_2707))).f_NEXT;
}
RT_B_TICK();
} L_end2708: ;
{ rt_int rv2710 = 0;
return rv2710; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2711; memset(&l_U_2711, 0, sizeof l_U_2711);
l_U_2711 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2711 == NULL)) goto L_end2712;
{
{
R21 * l_T_2713; memset(&l_T_2713, 0, sizeof l_T_2713);
l_T_2713 = p_SEGS;
for (;;) {
if ((l_T_2713 == NULL)) goto L_end2714;
{
if ((((!(l_T_2713 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2713))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2713))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2711))).f_NAME)))
{
{ rt_int rv2715 = 0;
return rv2715; }
}
l_T_2713 = ((*(R21 *)rt_nil_check(l_T_2713))).f_NEXT;
}
RT_B_TICK();
} L_end2714: ;
}
l_U_2711 = ((*(R21 *)rt_nil_check(l_U_2711))).f_NEXT;
}
RT_B_TICK();
} L_end2712: ;
{ rt_int rv2716 = 1;
return rv2716; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2717; memset(&l_S_2717, 0, sizeof l_S_2717);
l_S_2717 = p_SEGS;
rt_int l_MAINS_2718; memset(&l_MAINS_2718, 0, sizeof l_MAINS_2718);
l_MAINS_2718 = ((rt_int)0LL);
R18 * l_ROOT_2719; memset(&l_ROOT_2719, 0, sizeof l_ROOT_2719);
l_ROOT_2719 = ((R18 *)rt_b_new(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2719)), ({ R18 rc2720; memset(&rc2720, 0, sizeof rc2720);  rc2720.f_LEVEL = ((rt_int)0LL); rc2720.f_R = NULL; rc2720.f_FRAMED = 0; S_R10(&rc2720.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2720.f_FIELDS, ({ R14 rc2721; memset(&rc2721, 0, sizeof rc2721);  rc2721.f_HEAD = NULL; rc2721.f_TAIL = NULL; rc2721; }), 0); rc2720.f_UP = NULL; rc2720.f_IMPORTS = NULL; rc2720.f_SIGNALS = NULL; rc2720.f_RESULT = NULL; rc2720.f_IS_PATH = 0; S_R10(&rc2720.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2720; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2719;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2722; memset(&rc2722, 0, sizeof rc2722);  rc2722.f_HEAD = NULL; rc2722.f_TAIL = NULL; rc2722; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2717 = p_SEGS;
for (;;) {
if ((l_S_2717 == NULL)) goto L_end2724;
{
if ((((*(R21 *)rt_nil_check(l_S_2717))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2717, p_SEGS))
{
goto L_end2724;
}
}
l_S_2717 = ((*(R21 *)rt_nil_check(l_S_2717))).f_NEXT;
}
RT_B_TICK();
} L_end2724: ;
if ((l_S_2717 == NULL))
{
goto L_end2723;
}
((*(R21 *)rt_nil_check(l_S_2717))).f_D = l_S_2717;
l_MAINS_2718 = rt_add(l_MAINS_2718, ((*(R21 *)rt_nil_check(l_S_2717))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2717))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2717))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2717))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2717, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2717))).f_B);
r_SEGMENT_EXPORTS(l_S_2717);
}
RT_B_TICK();
} L_end2723: ;
l_S_2717 = p_SEGS;
for (;;) {
if ((l_S_2717 == NULL)) goto L_end2725;
{
if ((((*(R21 *)rt_nil_check(l_S_2717))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2717))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2717))).f_NAME);
}
l_S_2717 = ((*(R21 *)rt_nil_check(l_S_2717))).f_NEXT;
}
RT_B_TICK();
} L_end2725: ;
if ((!(l_MAINS_2718 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2726; memset(&l_X_2726, 0, sizeof l_X_2726);
l_X_2726 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2726 == NULL)) goto L_end2727;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2726))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2726))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2726))).f_NAME)));
l_X_2726 = ((*(R21 *)rt_nil_check(l_X_2726))).f_NEXT;
}
RT_B_TICK();
} L_end2727: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2728; memset(&l_M_2728, 0, sizeof l_M_2728);
l_M_2728 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2729 = 0;
return rv2729; }
}
for (;;) {
if ((l_M_2728 == NULL)) goto L_end2730;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2728))).f_NAME))
{
{ rt_int rv2731 = 1;
return rv2731; }
}
l_M_2728 = ((*(R12 *)rt_nil_check(l_M_2728))).f_MODL;
}
RT_B_TICK();
} L_end2730: ;
{ rt_int rv2732 = 0;
return rv2732; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2733; memset(&l_MARK_2733, 0, sizeof l_MARK_2733);
l_MARK_2733 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2734; memset(&l_TAKEN_2734, 0, sizeof l_TAKEN_2734);
for (;;) {
if ((l_MARK_2733 == NULL)) goto L_end2735;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2733))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2735;
}
l_MARK_2733 = ((*(R12 *)rt_nil_check(l_MARK_2733))).f_SNEXT;
}
RT_B_TICK();
} L_end2735: ;
l_TAKEN_2734 = r_TAKE_SCOPE(l_MARK_2733);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2734 == NULL)) goto L_end2736;
{
{
R12 * l_NEXT_2737; memset(&l_NEXT_2737, 0, sizeof l_NEXT_2737);
l_NEXT_2737 = ((*(R12 *)rt_nil_check(l_TAKEN_2734))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2734))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2734))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2734))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2734)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2734))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2734))))))
{
r_DEFINE(l_TAKEN_2734, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2734 = l_NEXT_2737;
}
}
RT_B_TICK();
} L_end2736: ;
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
