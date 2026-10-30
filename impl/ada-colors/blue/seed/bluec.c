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
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; R21 * f_QUAL; R21 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_ARRAYS; R12 * f_RECS; };
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
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1155; };
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
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
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R21 *)rt_nil_check(l_N_235))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_235))).f_E = p_E;
{ R21 * rv239 = l_N_235;
return rv239; }
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
{ R21 * rv240 = p_N;
return rv240; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R21 * l_N_241; memset(&l_N_241, 0, sizeof l_N_241);
R21 * l_HEAD_242; memset(&l_HEAD_242, 0, sizeof l_HEAD_242);
l_HEAD_242 = NULL;
R21 * l_TAIL_243; memset(&l_TAIL_243, 0, sizeof l_TAIL_243);
l_TAIL_243 = NULL;
rt_int l_LINE_244; memset(&l_LINE_244, 0, sizeof l_LINE_244);
l_LINE_244 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_241 = r_NEW_NODE(g_TS_ARRAY, l_LINE_244);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R21 * l_R_246; memset(&l_R_246, 0, sizeof l_R_246);
l_R_246 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_R_246))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_246))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_246, &l_HEAD_242, &l_TAIL_243);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end245;
} L_end245: ;
r_EXPECT(rt_str("]", 1));
((*(R21 *)rt_nil_check(l_N_241))).f_A = l_HEAD_242;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_241))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R21 *)rt_nil_check(l_N_241))).f_C = r_PARSE_TYPE_SPEC();
{ R21 * rv247 = l_N_241;
return rv247; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_241 = r_NEW_NODE(g_TS_RECORD, l_LINE_244);
((*(R21 *)rt_nil_check(l_N_241))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_241))).f_D = r_PARSE_REP();
}
{ R21 * rv248 = l_N_241;
return rv248; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R21 * rv249 = r_PARSE_TYPE_ARG();
return rv249; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_241 = r_NEW_NODE(g_TS_ENUM, l_LINE_244);
((*(R21 *)rt_nil_check(l_N_241))).f_A = r_PARSE_LITERALS();
{ R21 * rv250 = r_TYPE_SPEC_TAIL(l_N_241);
return rv250; }
}
l_N_241 = r_NEW_NODE(g_TS_NAME, l_LINE_244);
S_R10(&((*(R21 *)rt_nil_check(l_N_241))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R21 * l_X_251; memset(&l_X_251, 0, sizeof l_X_251);
l_X_251 = r_NEW_NODE(g_N_NAME, l_LINE_244);
S_R10(&((*(R21 *)rt_nil_check(l_X_251))).f_NAME, ((*(R21 *)rt_nil_check(l_N_241))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end252;
{
r_SKIP();
{
R21 * l_F_253; memset(&l_F_253, 0, sizeof l_F_253);
l_F_253 = r_NEW_NODE(g_N_FIELD, l_LINE_244);
((*(R21 *)rt_nil_check(l_F_253))).f_A = l_X_251;
S_R10(&((*(R21 *)rt_nil_check(l_F_253))).f_NAME, r_IDENT(), 0);
l_X_251 = l_F_253;
}
}
RT_B_TICK();
} L_end252: ;
((*(R21 *)rt_nil_check(l_N_241))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_241))).f_E = l_X_251;
{ R21 * rv254 = r_TYPE_SPEC_TAIL(l_N_241);
return rv254; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_N_241))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_241))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_241))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R21 *)rt_nil_check(l_N_241))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_N_241))).f_KIND = g_TS_ENUM;
((*(R21 *)rt_nil_check(l_N_241))).f_A = r_PARSE_LITERALS();
{ R21 * rv255 = r_TYPE_SPEC_TAIL(l_N_241);
return rv255; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_241))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_242, &l_TAIL_243);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_242, &l_TAIL_243);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end256;
} L_end256: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_241))).f_A = l_HEAD_242;
}
{ R21 * rv257 = r_TYPE_SPEC_TAIL(l_N_241);
return rv257; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R21 * l_HEAD_258; memset(&l_HEAD_258, 0, sizeof l_HEAD_258);
l_HEAD_258 = NULL;
R21 * l_TAIL_259; memset(&l_TAIL_259, 0, sizeof l_TAIL_259);
l_TAIL_259 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_L_261; memset(&l_L_261, 0, sizeof l_L_261);
l_L_261 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R10(&((*(R21 *)rt_nil_check(l_L_261))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_261, &l_HEAD_258, &l_TAIL_259);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end260;
} L_end260: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv262 = l_HEAD_258;
return rv262; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R21 * l_HEAD_263; memset(&l_HEAD_263, 0, sizeof l_HEAD_263);
l_HEAD_263 = NULL;
R21 * l_TAIL_264; memset(&l_TAIL_264, 0, sizeof l_TAIL_264);
l_TAIL_264 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R21 * l_F_266; memset(&l_F_266, 0, sizeof l_F_266);
l_F_266 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R21 *)rt_nil_check(l_F_266))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_F_266))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_266, &l_HEAD_263, &l_TAIL_264);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R21 * l_V_267; memset(&l_V_267, 0, sizeof l_V_267);
l_V_267 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R21 * l_VH_268; memset(&l_VH_268, 0, sizeof l_VH_268);
l_VH_268 = NULL;
R21 * l_VT_269; memset(&l_VT_269, 0, sizeof l_VT_269);
l_VT_269 = NULL;
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_V_267))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end270;
{
{
R21 * l_S_271; memset(&l_S_271, 0, sizeof l_S_271);
l_S_271 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R21 * l_LH_272; memset(&l_LH_272, 0, sizeof l_LH_272);
l_LH_272 = NULL;
R21 * l_LT_273; memset(&l_LT_273, 0, sizeof l_LT_273);
l_LT_273 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_272, &l_LT_273);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end274;
} L_end274: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_271))).f_A = l_LH_272;
((*(R21 *)rt_nil_check(l_S_271))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_271, &l_VH_268, &l_VT_269);
}
}
RT_B_TICK();
} L_end270: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_V_267))).f_A = l_VH_268;
r_ADD_LIST(l_V_267, &l_HEAD_263, &l_TAIL_264);
}
}
else
{
goto L_end265;
}
}
RT_B_TICK();
} L_end265: ;
{ R21 * rv275 = l_HEAD_263;
return rv275; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R21 * l_R_276; memset(&l_R_276, 0, sizeof l_R_276);
l_R_276 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_276))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R21 *)rt_nil_check(l_R_276))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_276))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R21 *)rt_nil_check(l_R_276))).f_IV = rt_add(((*(R21 *)rt_nil_check(l_R_276))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R21 * rv277 = l_R_276;
return rv277; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_278; memset(&l_DEPTH_278, 0, sizeof l_DEPTH_278);
l_DEPTH_278 = ((rt_int)0LL);
rt_int l_K_279; memset(&l_K_279, 0, sizeof l_K_279);
l_K_279 = ((rt_int)0LL);
for (;;) {
{
{
R9 l_T_281; memset(&l_T_281, 0, sizeof l_T_281);
S_R9(&l_T_281, r_AHEAD(l_K_279), 0);
if (((l_T_281).f_KIND == g_K_EOF))
{
{ rt_int rv282 = 0;
return rv282; }
}
if (((l_T_281).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_281).f_TX, rt_str("(", 1)) || r_TEQS((l_T_281).f_TX, rt_str("[", 1))))
{
l_DEPTH_278 = rt_add(l_DEPTH_278, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_281).f_TX, rt_str(")", 1)) || r_TEQS((l_T_281).f_TX, rt_str("]", 1))))
{
l_DEPTH_278 = rt_sub(l_DEPTH_278, ((rt_int)1LL));
if ((l_DEPTH_278 == ((rt_int)0LL)))
{
{ rt_int rv283 = 0;
return rv283; }
}
}
else if (((l_DEPTH_278 == ((rt_int)1LL)) && ((r_TEQS((l_T_281).f_TX, rt_str(":", 1)) || r_TEQS((l_T_281).f_TX, rt_str(",", 1))))))
{
{ rt_int rv284 = r_TEQS((l_T_281).f_TX, rt_str(":", 1));
return rv284; }
}
}
}
l_K_279 = rt_add(l_K_279, ((rt_int)1LL));
}
RT_B_TICK();
} L_end280: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R21 * l_HEAD_285; memset(&l_HEAD_285, 0, sizeof l_HEAD_285);
l_HEAD_285 = NULL;
R21 * l_TAIL_286; memset(&l_TAIL_286, 0, sizeof l_TAIL_286);
l_TAIL_286 = NULL;
rt_int l_MODE_287; memset(&l_MODE_287, 0, sizeof l_MODE_287);
l_MODE_287 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end288;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_287 = rt_add(l_MODE_287, ((rt_int)1LL));
}
else
{
{
R21 * l_NAMES_289; memset(&l_NAMES_289, 0, sizeof l_NAMES_289);
l_NAMES_289 = r_IDENT_LIST();
R21 * l_TS_290; memset(&l_TS_290, 0, sizeof l_TS_290);
l_TS_290 = NULL;
R21 * l_P_291; memset(&l_P_291, 0, sizeof l_P_291);
l_P_291 = l_NAMES_289;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_290 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_290 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_291 == NULL)) goto L_end292;
{
{
R21 * l_PN_293; memset(&l_PN_293, 0, sizeof l_PN_293);
l_PN_293 = r_NEW_NODE(g_N_PARAM, ((*(R21 *)rt_nil_check(l_P_291))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_PN_293))).f_NAME, ((*(R21 *)rt_nil_check(l_P_291))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_PN_293))).f_IV = l_MODE_287;
((*(R21 *)rt_nil_check(l_PN_293))).f_B = l_TS_290;
r_ADD_LIST(l_PN_293, &l_HEAD_285, &l_TAIL_286);
}
l_P_291 = ((*(R21 *)rt_nil_check(l_P_291))).f_NEXT;
}
RT_B_TICK();
} L_end292: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end288: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv294 = l_HEAD_285;
return rv294; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R21 * l_R_295; memset(&l_R_295, 0, sizeof l_R_295);
l_R_295 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R21 * l_HEAD_296; memset(&l_HEAD_296, 0, sizeof l_HEAD_296);
l_HEAD_296 = NULL;
R21 * l_TAIL_297; memset(&l_TAIL_297, 0, sizeof l_TAIL_297);
l_TAIL_297 = NULL;
rt_int l_MODE_298; memset(&l_MODE_298, 0, sizeof l_MODE_298);
l_MODE_298 = g_M_IN;
if (p_FUNC)
{
((*(R21 *)rt_nil_check(l_R_295))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end299;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_298 = rt_add(l_MODE_298, ((rt_int)1LL));
}
else
{
{
R21 * l_P_300; memset(&l_P_300, 0, sizeof l_P_300);
l_P_300 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_P_300))).f_IV = l_MODE_298;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R21 *)rt_nil_check(l_P_300))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_300, &l_HEAD_296, &l_TAIL_297);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end299: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_295))).f_A = l_HEAD_296;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R21 *)rt_nil_check(l_R_295))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_295))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_295))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_R_295))).f_D = r_PAREN_IDENTS();
}
{ R21 * rv301 = l_R_295;
return rv301; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R21 * rv302 = r_PARSE_TEMPLATE(1);
return rv302; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R21 * rv303 = r_PARSE_TEMPLATE(0);
return rv303; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R21 * l_HEAD_304; memset(&l_HEAD_304, 0, sizeof l_HEAD_304);
l_HEAD_304 = NULL;
R21 * l_TAIL_305; memset(&l_TAIL_305, 0, sizeof l_TAIL_305);
l_TAIL_305 = NULL;
for (;;) {
{
{
R21 * l_N_307; memset(&l_N_307, 0, sizeof l_N_307);
l_N_307 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R21 * l_TH_308; memset(&l_TH_308, 0, sizeof l_TH_308);
l_TH_308 = NULL;
R21 * l_TT_309; memset(&l_TT_309, 0, sizeof l_TT_309);
l_TT_309 = NULL;
S_R10(&((*(R21 *)rt_nil_check(l_N_307))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_T_311; memset(&l_T_311, 0, sizeof l_T_311);
l_T_311 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_T_311))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_T_311))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_311, &l_TH_308, &l_TT_309);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end310;
} L_end310: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_307))).f_A = l_TH_308;
r_ADD_LIST(l_N_307, &l_HEAD_304, &l_TAIL_305);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end306;
} L_end306: ;
{ R21 * rv312 = l_HEAD_304;
return rv312; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R21 * l_R_313; memset(&l_R_313, 0, sizeof l_R_313);
l_R_313 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R21 * l_H_314; memset(&l_H_314, 0, sizeof l_H_314);
l_H_314 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R21 *)rt_nil_check(l_R_313))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
((*(R21 *)rt_nil_check(l_R_313))).f_FL = rt_add(((*(R21 *)rt_nil_check(l_R_313))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R21 *)rt_nil_check(l_R_313))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R10(&((*(R21 *)rt_nil_check(l_R_313))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_313))).f_A = r_PARSE_PARAMS();
}
if ((((*(R21 *)rt_nil_check(l_R_313))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_313))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_313))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_314))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_R_313))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R21 *)rt_nil_check(l_H_314))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end315;
}
}
RT_B_TICK();
} L_end315: ;
((*(R21 *)rt_nil_check(l_R_313))).f_D = l_H_314;
r_EXPECT(rt_str(";", 1));
if ((((*(R21 *)rt_nil_check(l_R_313))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_SKIP_PARENS();
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end316;
{
r_SKIP();
}
RT_B_TICK();
} L_end316: ;
}
else
{
((*(R21 *)rt_nil_check(l_R_313))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R21 *)rt_nil_check(l_R_313))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R21 *)rt_nil_check(l_R_313))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R21 *)rt_nil_check(l_R_313))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv317 = l_R_313;
return rv317; }
rt_raise(RT_X_INIT);
}
static R21 * r_BIN_NODE(R10 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_N_318; memset(&l_N_318, 0, sizeof l_N_318);
l_N_318 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_318))).f_NAME, p_OP, 0);
((*(R21 *)rt_nil_check(l_N_318))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_318))).f_B = p_B;
{ R21 * rv319 = l_N_318;
return rv319; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R21 * l_E_320; memset(&l_E_320, 0, sizeof l_E_320);
l_E_320 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R21 * l_Q_321; memset(&l_Q_321, 0, sizeof l_Q_321);
l_Q_321 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_Q_321))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_Q_321))).f_A = l_E_320;
l_E_320 = l_Q_321;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R21 * l_Q_322; memset(&l_Q_322, 0, sizeof l_Q_322);
l_Q_322 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R21 *)rt_nil_check(l_E_320))).f_KIND == g_N_QUAL))
{
l_Q_322 = l_E_320;
}
else
{
((*(R21 *)rt_nil_check(l_Q_322))).f_A = l_E_320;
}
((*(R21 *)rt_nil_check(l_Q_322))).f_B = r_PARSE_SIMPLE();
l_E_320 = l_Q_322;
}
}
{ R21 * rv323 = l_E_320;
return rv323; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R9 l_N_324; memset(&l_N_324, 0, sizeof l_N_324);
S_R9(&l_N_324, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv325 = 0;
return rv325; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv326 = 0;
return rv326; }
}
{ rt_int rv327 = (!(((((((r_TOK_IS(l_N_324, rt_str("(", 1)) || r_TOK_IS(l_N_324, rt_str(".", 1))) || r_TOK_IS(l_N_324, rt_str(":=", 2))) || r_TOK_IS(l_N_324, rt_str(":", 1))) || r_TOK_IS(l_N_324, rt_str("$", 1))) || r_TOK_IS(l_N_324, rt_str("@", 1))) || r_TOK_IS(l_N_324, rt_str("[", 1)))));
return rv327; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R21 * l_LEFT_328; memset(&l_LEFT_328, 0, sizeof l_LEFT_328);
l_LEFT_328 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end329;
{
{
R9 l_T_330; memset(&l_T_330, 0, sizeof l_T_330);
S_R9(&l_T_330, r_CUR(), 0);
r_SKIP();
l_LEFT_328 = r_BIN_NODE((l_T_330).f_TX, (l_T_330).f_LINE, l_LEFT_328, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end329: ;
{ R21 * rv331 = l_LEFT_328;
return rv331; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R21 * l_LEFT_332; memset(&l_LEFT_332, 0, sizeof l_LEFT_332);
l_LEFT_332 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end333;
{
{
R9 l_T_334; memset(&l_T_334, 0, sizeof l_T_334);
S_R9(&l_T_334, r_CUR(), 0);
r_SKIP();
l_LEFT_332 = r_BIN_NODE((l_T_334).f_TX, (l_T_334).f_LINE, l_LEFT_332, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end333: ;
{ R21 * rv335 = l_LEFT_332;
return rv335; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R21 * l_LEFT_336; memset(&l_LEFT_336, 0, sizeof l_LEFT_336);
l_LEFT_336 = r_PARSE_SUM();
for (;;) {
{
{
R9 l_T_338; memset(&l_T_338, 0, sizeof l_T_338);
S_R9(&l_T_338, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_336 = r_BIN_NODE((l_T_338).f_TX, (l_T_338).f_LINE, l_LEFT_336, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_339; memset(&l_N_339, 0, sizeof l_N_339);
l_N_339 = r_NEW_NODE(g_N_IN, (l_T_338).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_339))).f_A = l_LEFT_336;
((*(R21 *)rt_nil_check(l_N_339))).f_B = r_PARSE_RANGE();
l_LEFT_336 = l_N_339;
}
}
else
{
{ R21 * rv340 = l_LEFT_336;
return rv340; }
}
}
}
RT_B_TICK();
} L_end337: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_341; memset(&l_SAVED_341, 0, sizeof l_SAVED_341);
l_SAVED_341 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_342; memset(&l_LINE_342, 0, sizeof l_LINE_342);
l_LINE_342 = r_LINE_NOW();
R21 * l_N_343; memset(&l_N_343, 0, sizeof l_N_343);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv344 = NULL;
return rv344; }
}
{
R9 l_OP_345; memset(&l_OP_345, 0, sizeof l_OP_345);
S_R9(&l_OP_345, r_AHEAD(((rt_int)1LL)), 0);
R10 l_T_346; memset(&l_T_346, 0, sizeof l_T_346);
S_R10(&l_T_346, (l_OP_345).f_TX, 0);
rt_int l_FOUND_347; memset(&l_FOUND_347, 0, sizeof l_FOUND_347);
l_FOUND_347 = 0;
if (((!((l_OP_345).f_KIND == g_K_SYM)) && (!((l_OP_345).f_KIND == g_K_RES))))
{
{ R21 * rv348 = NULL;
return rv348; }
}
{ rt_int it350_lo = ((rt_int)0LL), it350_hi = rt_sub((rt_int)(p_OPS).len, (l_T_346).f_LEN);
for (rt_int it350 = it350_lo; it350 <= it350_hi; it350++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it350, rt_sub(rt_add(it350, (l_T_346).f_LEN), ((rt_int)1LL))), r_STR(l_T_346, (l_T_346).f_LEN)))
{
if (((((it350 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it350, ((rt_int)1LL)), rt_sub(it350, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it350, (l_T_346).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it350, (l_T_346).f_LEN), rt_add(it350, (l_T_346).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_347 = 1;
}
}
}
RT_B_TICK();
if (it350 == it350_hi) break;
} } L_end349: ;
if ((!l_FOUND_347))
{
{ R21 * rv351 = NULL;
return rv351; }
}
r_SKIP();
r_SKIP();
l_N_343 = r_BIN_NODE(l_T_346, l_LINE_342, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_343))).f_FL = ((rt_int)2LL);
{ R21 * rv352 = l_N_343;
return rv352; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_343))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_343))).f_FL = ((rt_int)1LL);
{ R21 * rv353 = l_N_343;
return rv353; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_341;
{ R21 * rv354 = NULL;
return rv354; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { RT_B_TICK(); 
R21 * l_LEFT_355; memset(&l_LEFT_355, 0, sizeof l_LEFT_355);
l_LEFT_355 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R9 l_T_357; memset(&l_T_357, 0, sizeof l_T_357);
S_R9(&l_T_357, r_CUR(), 0);
r_SKIP();
l_LEFT_355 = r_BIN_NODE((l_T_357).f_TX, (l_T_357).f_LINE, l_LEFT_355, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_358; memset(&l_N_358, 0, sizeof l_N_358);
l_N_358 = r_TRY_SCALED(l_LEFT_355, rt_str("+ -", 3));
if ((l_N_358 == NULL))
{
{ R21 * rv359 = l_LEFT_355;
return rv359; }
}
((*(R21 *)rt_nil_check(l_N_358))).f_B = r_PARSE_TERM();
l_LEFT_355 = l_N_358;
}
}
}
RT_B_TICK();
} L_end356: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { RT_B_TICK(); 
R21 * l_LEFT_360; memset(&l_LEFT_360, 0, sizeof l_LEFT_360);
l_LEFT_360 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R9 l_T_362; memset(&l_T_362, 0, sizeof l_T_362);
S_R9(&l_T_362, r_CUR(), 0);
r_SKIP();
l_LEFT_360 = r_BIN_NODE((l_T_362).f_TX, (l_T_362).f_LINE, l_LEFT_360, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_363; memset(&l_N_363, 0, sizeof l_N_363);
l_N_363 = r_TRY_SCALED(l_LEFT_360, rt_str("* / // MOD", 10));
if ((l_N_363 == NULL))
{
{ R21 * rv364 = l_LEFT_360;
return rv364; }
}
((*(R21 *)rt_nil_check(l_N_363))).f_B = r_PARSE_FACTOR();
l_LEFT_360 = l_N_363;
}
}
}
RT_B_TICK();
} L_end361: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R21 * l_LEFT_365; memset(&l_LEFT_365, 0, sizeof l_LEFT_365);
l_LEFT_365 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R9 l_T_367; memset(&l_T_367, 0, sizeof l_T_367);
S_R9(&l_T_367, r_CUR(), 0);
r_SKIP();
l_LEFT_365 = r_BIN_NODE((l_T_367).f_TX, (l_T_367).f_LINE, l_LEFT_365, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_368; memset(&l_N_368, 0, sizeof l_N_368);
l_N_368 = r_TRY_SCALED(l_LEFT_365, rt_str("**", 2));
if ((l_N_368 == NULL))
{
{ R21 * rv369 = l_LEFT_365;
return rv369; }
}
((*(R21 *)rt_nil_check(l_N_368))).f_B = r_PARSE_SECONDARY();
l_LEFT_365 = l_N_368;
}
}
}
RT_B_TICK();
} L_end366: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R9 l_T_370; memset(&l_T_370, 0, sizeof l_T_370);
S_R9(&l_T_370, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_371; memset(&l_N_371, 0, sizeof l_N_371);
l_N_371 = r_NEW_NODE(g_N_UNOP, (l_T_370).f_LINE);
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_371))).f_NAME, (l_T_370).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_371))).f_A = r_PARSE_POSTFIX();
{ R21 * rv372 = l_N_371;
return rv372; }
}
}
{ R21 * rv373 = r_PARSE_POSTFIX();
return rv373; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { RT_B_TICK(); 
R21 * l_HEAD_374; memset(&l_HEAD_374, 0, sizeof l_HEAD_374);
l_HEAD_374 = NULL;
R21 * l_TAIL_375; memset(&l_TAIL_375, 0, sizeof l_TAIL_375);
l_TAIL_375 = NULL;
rt_int l_GROUP_376; memset(&l_GROUP_376, 0, sizeof l_GROUP_376);
l_GROUP_376 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end377;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_376) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_374;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_374;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_376 = rt_add(l_GROUP_376, ((rt_int)1LL));
l_HEAD_374 = NULL;
l_TAIL_375 = NULL;
}
else
{
if ((l_GROUP_376 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_374, &l_TAIL_375);
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_374, &l_TAIL_375);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end377: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_376) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_374;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_374;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_374;
}
break;
}
{ R21 * rv378 = p_N;
return rv378; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R21 * l_E_379; memset(&l_E_379, 0, sizeof l_E_379);
l_E_379 = r_PARSE_ATOM();
R21 * l_N_380; memset(&l_N_380, 0, sizeof l_N_380);
for (;;) {
{
{
rt_int l_LINE_382; memset(&l_LINE_382, 0, sizeof l_LINE_382);
l_LINE_382 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_379))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_E_379))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_379))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_379))).f_KIND = g_N_APPLY;
l_E_379 = r_PARSE_ARGS(l_E_379);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_380 = r_NEW_NODE(g_N_INDEX, l_LINE_382);
l_N_380 = r_PARSE_ARGS(l_N_380);
((*(R21 *)rt_nil_check(l_N_380))).f_B = ((*(R21 *)rt_nil_check(l_N_380))).f_A;
((*(R21 *)rt_nil_check(l_N_380))).f_A = l_E_379;
l_E_379 = l_N_380;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_380 = r_NEW_NODE(g_N_FIELD, l_LINE_382);
((*(R21 *)rt_nil_check(l_N_380))).f_A = l_E_379;
S_R10(&((*(R21 *)rt_nil_check(l_N_380))).f_NAME, r_IDENT(), 0);
l_E_379 = l_N_380;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_380 = r_NEW_NODE(g_N_DEREF, l_LINE_382);
((*(R21 *)rt_nil_check(l_N_380))).f_A = l_E_379;
l_E_379 = l_N_380;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_380 = r_NEW_NODE(g_N_SUBSTR, l_LINE_382);
((*(R21 *)rt_nil_check(l_N_380))).f_A = l_E_379;
((*(R21 *)rt_nil_check(l_N_380))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_380))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_379 = l_N_380;
}
else
{
{ R21 * rv383 = l_E_379;
return rv383; }
}
}
}
RT_B_TICK();
} L_end381: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_384; memset(&l_AT_384, 0, sizeof l_AT_384);
l_AT_384 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_385; memset(&l_N_385, 0, sizeof l_N_385);
l_N_385 = r_NEW_NODE(g_N_BITS, p_LINE);
R10 l_R_386; memset(&l_R_386, 0, sizeof l_R_386);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end387;
{
{
R10 l_T_388; memset(&l_T_388, 0, sizeof l_T_388);
S_R10(&l_T_388, (r_CUR()).f_TX, 0);
rstr l_S_389; memset(&l_S_389, 0, sizeof l_S_389);
l_S_389 = rt_b_str_new((l_T_388).f_LEN, 0);
rt_b_assign(&l_S_389, r_STR(l_T_388, (l_T_388).f_LEN));
{ rt_int it391_lo = ((rt_int)0LL), it391_hi = rt_sub((l_T_388).f_LEN, ((rt_int)1LL));
for (rt_int it391 = it391_lo; it391 <= it391_hi; it391++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_389, it391, it391), rt_str(" ", 1))))
{
{
rt_int l_C_392; memset(&l_C_392, 0, sizeof l_C_392);
l_C_392 = r_CODE_OF(rt_b_slice(l_S_389, it391, it391));
rt_int l_V_393; memset(&l_V_393, 0, sizeof l_V_393);
l_V_393 = rt_sub(l_C_392, ((rt_int)48LL));
rt_int l_P_394; memset(&l_P_394, 0, sizeof l_P_394);
l_P_394 = ((rt_int)1LL);
if ((l_C_392 >= ((rt_int)65LL)))
{
l_V_393 = rt_sub(l_C_392, ((rt_int)55LL));
}
{ rt_int it396_lo = ((rt_int)1LL), it396_hi = p_BITS_PER;
for (rt_int it396 = it396_lo; it396 <= it396_hi; it396++) {
{
l_P_394 = rt_mul(l_P_394, ((rt_int)2LL));
}
RT_B_TICK();
if (it396 == it396_hi) break;
} } L_end395: ;
if (((l_V_393 < ((rt_int)0LL)) || (l_V_393 >= l_P_394)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it398_lo = ((rt_int)1LL), it398_hi = p_BITS_PER;
for (rt_int it398 = it398_lo; it398 <= it398_hi; it398++) {
{
l_P_394 = rt_quot(l_P_394, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_393, l_P_394)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R10(&l_R_386, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R10(&l_R_386, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it398 == it398_hi) break;
} } L_end397: ;
}
}
}
RT_B_TICK();
if (it391 == it391_hi) break;
} } L_end390: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end387: ;
S_R10(&((*(R21 *)rt_nil_check(l_N_385))).f_NAME, ({ R10 rc399; memset(&rc399, 0, sizeof rc399);  rc399.f_AT = l_AT_384; rc399.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_384); rc399.f_H = rt_neg(((rt_int)1LL)); rc399; }), 0);
{ R21 * rv400 = l_N_385;
return rv400; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R9 l_T_401; memset(&l_T_401, 0, sizeof l_T_401);
S_R9(&l_T_401, r_CUR(), 0);
R21 * l_N_402; memset(&l_N_402, 0, sizeof l_N_402);
if (((l_T_401).f_KIND == g_K_NUM))
{
l_N_402 = r_NEW_NODE(g_N_INT, (l_T_401).f_LINE);
((*(R21 *)rt_nil_check(l_N_402))).f_IV = (l_T_401).f_IV;
S_R10(&((*(R21 *)rt_nil_check(l_N_402))).f_NAME, (l_T_401).f_TX, 0);
r_SKIP();
{ R21 * rv403 = l_N_402;
return rv403; }
}
if ((((l_T_401).f_KIND == g_K_REAL) || ((l_T_401).f_KIND == g_K_FIX)))
{
l_N_402 = r_NEW_NODE(g_N_REAL, (l_T_401).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_402))).f_NAME, (l_T_401).f_TX, 0);
if (((l_T_401).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_402))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_402))).f_IV = (l_T_401).f_IV;
}
r_SKIP();
{ R21 * rv404 = l_N_402;
return rv404; }
}
if (((l_T_401).f_KIND == g_K_GEN))
{
{ R21 * rv405 = r_PARSE_TYPE_ARG();
return rv405; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_401, rt_str("BIN", 3)))
{
{ R21 * rv406 = r_PARSE_BITS(((rt_int)1LL), (l_T_401).f_LINE);
return rv406; }
}
else if (r_TOK_IS(l_T_401, rt_str("OCT", 3)))
{
{ R21 * rv407 = r_PARSE_BITS(((rt_int)3LL), (l_T_401).f_LINE);
return rv407; }
}
{ R21 * rv408 = r_PARSE_BITS(((rt_int)4LL), (l_T_401).f_LINE);
return rv408; }
}
if ((((l_T_401).f_KIND == g_K_STR) || ((l_T_401).f_KIND == g_K_ENUM)))
{
{ R21 * rv409 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv409; }
}
if ((((l_T_401).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R21 * rv410 = r_PARSE_CHARSTRING((l_T_401).f_TX);
return rv410; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_402 = r_NEW_NODE(g_N_BOOL, (l_T_401).f_LINE);
((*(R21 *)rt_nil_check(l_N_402))).f_IV = ((rt_int)1LL);
{ R21 * rv411 = l_N_402;
return rv411; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv412 = r_NEW_NODE(g_N_BOOL, (l_T_401).f_LINE);
return rv412; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv413 = r_NEW_NODE(g_N_NIL, (l_T_401).f_LINE);
return rv413; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv414 = r_NEW_NODE(g_N_ANY, (l_T_401).f_LINE);
return rv414; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_415; memset(&l_TS_415, 0, sizeof l_TS_415);
l_TS_415 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_402 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_402))).f_B = l_TS_415;
{ R21 * rv416 = l_N_402;
return rv416; }
}
l_N_402 = r_NEW_NODE(g_N_TYPESPEC, (l_T_401).f_LINE);
((*(R21 *)rt_nil_check(l_N_402))).f_A = l_TS_415;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_402))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv417 = l_N_402;
return rv417; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_418; memset(&l_HEAD_418, 0, sizeof l_HEAD_418);
l_HEAD_418 = NULL;
R21 * l_TAIL_419; memset(&l_TAIL_419, 0, sizeof l_TAIL_419);
l_TAIL_419 = NULL;
r_SKIP();
for (;;) {
{
l_N_402 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_402))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_402))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_402, &l_HEAD_418, &l_TAIL_419);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end420;
} L_end420: ;
r_EXPECT(rt_str(")", 1));
l_N_402 = r_NEW_NODE(g_N_RECCONS, (l_T_401).f_LINE);
((*(R21 *)rt_nil_check(l_N_402))).f_A = l_HEAD_418;
{ R21 * rv421 = l_N_402;
return rv421; }
}
}
r_SKIP();
{
R21 * l_E_422; memset(&l_E_422, 0, sizeof l_E_422);
l_E_422 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_423; memset(&l_HEAD_423, 0, sizeof l_HEAD_423);
l_HEAD_423 = NULL;
R21 * l_TAIL_424; memset(&l_TAIL_424, 0, sizeof l_TAIL_424);
l_TAIL_424 = NULL;
r_ADD_LIST(l_E_422, &l_HEAD_423, &l_TAIL_424);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end425;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_423, &l_TAIL_424);
}
RT_B_TICK();
} L_end425: ;
r_EXPECT(rt_str(")", 1));
l_N_402 = r_NEW_NODE(g_N_ARRCONS, (l_T_401).f_LINE);
((*(R21 *)rt_nil_check(l_N_402))).f_A = l_HEAD_423;
{ R21 * rv426 = l_N_402;
return rv426; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_402 = r_NEW_NODE(g_N_PAREN, (l_T_401).f_LINE);
((*(R21 *)rt_nil_check(l_N_402))).f_A = l_E_422;
{ R21 * rv427 = l_N_402;
return rv427; }
}
}
if (((l_T_401).f_KIND == g_K_ID))
{
l_N_402 = r_NEW_NODE(g_N_NAME, (l_T_401).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_402))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R21 *)rt_nil_check(l_N_402))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_402))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_402))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R21 *)rt_nil_check(l_N_402))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_402))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv428 = l_N_402;
return rv428; }
}
r_FAILT((l_T_401).f_LINE, rt_str("an expression expected, not ", 28), (l_T_401).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_429; memset(&l_LINE_429, 0, sizeof l_LINE_429);
l_LINE_429 = r_LINE_NOW();
R21 * l_HEAD_430; memset(&l_HEAD_430, 0, sizeof l_HEAD_430);
l_HEAD_430 = NULL;
R21 * l_TAIL_431; memset(&l_TAIL_431, 0, sizeof l_TAIL_431);
l_TAIL_431 = NULL;
rt_int l_STRINGS_432; memset(&l_STRINGS_432, 0, sizeof l_STRINGS_432);
l_STRINGS_432 = ((rt_int)0LL);
R21 * l_N_433; memset(&l_N_433, 0, sizeof l_N_433);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end434;
{
l_N_433 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_433))).f_IV = (r_CUR()).f_KIND;
S_R10(&((*(R21 *)rt_nil_check(l_N_433))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_433))).f_IV == g_K_STR))
{
l_STRINGS_432 = rt_add(l_STRINGS_432, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_433, &l_HEAD_430, &l_TAIL_431);
}
RT_B_TICK();
} L_end434: ;
if ((((l_STRINGS_432 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R21 *)rt_nil_check(l_HEAD_430))).f_NEXT == NULL)))
{
((*(R21 *)rt_nil_check(l_HEAD_430))).f_KIND = g_N_ENUMLIT;
{ R21 * rv435 = l_HEAD_430;
return rv435; }
}
l_N_433 = r_NEW_NODE(g_N_STR, l_LINE_429);
((*(R21 *)rt_nil_check(l_N_433))).f_A = l_HEAD_430;
S_R10(&((*(R21 *)rt_nil_check(l_N_433))).f_NAME, p_CHARSET, 0);
{ R21 * rv436 = l_N_433;
return rv436; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv437 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv437; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R21 * l_HEAD_438; memset(&l_HEAD_438, 0, sizeof l_HEAD_438);
l_HEAD_438 = NULL;
R21 * l_TAIL_439; memset(&l_TAIL_439, 0, sizeof l_TAIL_439);
l_TAIL_439 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end440;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_438, &l_TAIL_439);
}
RT_B_TICK();
} L_end440: ;
{ R21 * rv441 = l_HEAD_438;
return rv441; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R21 * l_HEAD_442; memset(&l_HEAD_442, 0, sizeof l_HEAD_442);
l_HEAD_442 = NULL;
R21 * l_TAIL_443; memset(&l_TAIL_443, 0, sizeof l_TAIL_443);
l_TAIL_443 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end444;
{
{
R21 * l_H_445; memset(&l_H_445, 0, sizeof l_H_445);
l_H_445 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_445))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_445))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_445, &l_HEAD_442, &l_TAIL_443);
}
}
RT_B_TICK();
} L_end444: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv446 = l_HEAD_442;
return rv446; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R21 * l_S_447; memset(&l_S_447, 0, sizeof l_S_447);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_447 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_S_447))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_447))).f_A = r_PARSE_STATEMENT();
{ R21 * rv448 = l_S_447;
return rv448; }
}
l_S_447 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_449; memset(&l_X_449, 0, sizeof l_X_449);
l_X_449 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_449))).f_A = l_S_447;
((*(R21 *)rt_nil_check(l_X_449))).f_B = r_PARSE_HANDLERS();
{ R21 * rv450 = l_X_449;
return rv450; }
}
}
{ R21 * rv451 = l_S_447;
return rv451; }
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
rt_int l_LINE_452; memset(&l_LINE_452, 0, sizeof l_LINE_452);
l_LINE_452 = r_LINE_NOW();
R21 * l_S_453; memset(&l_S_453, 0, sizeof l_S_453);
R21 * l_T_454; memset(&l_T_454, 0, sizeof l_T_454);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv455 = r_NEW_NODE(g_N_NULL, l_LINE_452);
return rv455; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv456 = r_PARSE_IF();
return rv456; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv457 = r_PARSE_CASE();
return rv457; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv458 = r_PARSE_LOOP();
return rv458; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv459 = r_PARSE_PAR();
return rv459; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_453 = r_NEW_NODE(g_N_BLOCK, l_LINE_452);
((*(R21 *)rt_nil_check(l_S_453))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv460 = l_S_453;
return rv460; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_453 = r_NEW_NODE(g_N_WITH, l_LINE_452);
S_R10(&((*(R21 *)rt_nil_check(l_S_453))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_453))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_453))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_453))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_453))).f_B = r_PARSE_UNLABELED();
{ R21 * rv461 = l_S_453;
return rv461; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv462 = r_NEW_NODE(g_N_EXIT, l_LINE_452);
return rv462; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_453 = r_NEW_NODE(g_N_GOTO, l_LINE_452);
S_R10(&((*(R21 *)rt_nil_check(l_S_453))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv463 = l_S_453;
return rv463; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_453 = r_NEW_NODE(g_N_RETURN, l_LINE_452);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_453))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv464 = l_S_453;
return rv464; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_453 = r_NEW_NODE(g_N_SIGNAL, l_LINE_452);
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_453))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv465 = l_S_453;
return rv465; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_453 = r_NEW_NODE(g_N_ASSERT, l_LINE_452);
((*(R21 *)rt_nil_check(l_S_453))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv466 = l_S_453;
return rv466; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_453 = r_NEW_NODE(g_N_TERMINATE, l_LINE_452);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_453))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv467 = l_S_453;
return rv467; }
}
l_T_454 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_452, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_453 = r_NEW_NODE(g_N_ASSIGN, l_LINE_452);
((*(R21 *)rt_nil_check(l_S_453))).f_A = l_T_454;
((*(R21 *)rt_nil_check(l_S_453))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv468 = l_S_453;
return rv468; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R21 *)rt_nil_check(l_T_454))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_454))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_T_454))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_T_454))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_452, rt_str("a statement expected", 20));
}
{ R21 * rv469 = l_T_454;
return rv469; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { RT_B_TICK(); 
R21 * l_S_470; memset(&l_S_470, 0, sizeof l_S_470);
l_S_470 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_471; memset(&l_HEAD_471, 0, sizeof l_HEAD_471);
l_HEAD_471 = NULL;
R21 * l_TAIL_472; memset(&l_TAIL_472, 0, sizeof l_TAIL_472);
l_TAIL_472 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_474; memset(&l_ARM_474, 0, sizeof l_ARM_474);
l_ARM_474 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_474))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_474))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_474, &l_HEAD_471, &l_TAIL_472);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end473;
} L_end473: ;
((*(R21 *)rt_nil_check(l_S_470))).f_A = l_HEAD_471;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_470))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv475 = l_S_470;
return rv475; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv476 = r_PARSE_RANGE();
return rv476; }
}
{ R21 * rv477 = r_PARSE_EXPR();
return rv477; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { RT_B_TICK(); 
R21 * l_S_478; memset(&l_S_478, 0, sizeof l_S_478);
l_S_478 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_479; memset(&l_HEAD_479, 0, sizeof l_HEAD_479);
l_HEAD_479 = NULL;
R21 * l_TAIL_480; memset(&l_TAIL_480, 0, sizeof l_TAIL_480);
l_TAIL_480 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_478))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end481;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_478))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_478))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_482; memset(&l_ARM_482, 0, sizeof l_ARM_482);
l_ARM_482 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_483; memset(&l_LH_483, 0, sizeof l_LH_483);
l_LH_483 = NULL;
R21 * l_LT_484; memset(&l_LT_484, 0, sizeof l_LT_484);
l_LT_484 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_483, &l_LT_484);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end485;
} L_end485: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_482))).f_A = l_LH_483;
((*(R21 *)rt_nil_check(l_ARM_482))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_482))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_482, &l_HEAD_479, &l_TAIL_480);
}
}
}
RT_B_TICK();
} L_end481: ;
((*(R21 *)rt_nil_check(l_S_478))).f_B = l_HEAD_479;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv486 = l_S_478;
return rv486; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R21 * l_S_487; memset(&l_S_487, 0, sizeof l_S_487);
l_S_487 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_487))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_487))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_487))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_487))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_487))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_487))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv488 = l_S_487;
return rv488; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_487))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_487))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_487))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_487))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv489 = l_S_487;
return rv489; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { RT_B_TICK(); 
R21 * l_S_490; memset(&l_S_490, 0, sizeof l_S_490);
l_S_490 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_491; memset(&l_HEAD_491, 0, sizeof l_HEAD_491);
l_HEAD_491 = NULL;
R21 * l_TAIL_492; memset(&l_TAIL_492, 0, sizeof l_TAIL_492);
l_TAIL_492 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end493;
{
{
R21 * l_P_494; memset(&l_P_494, 0, sizeof l_P_494);
l_P_494 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_495; memset(&l_H_495, 0, sizeof l_H_495);
l_H_495 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R10(&((*(R21 *)rt_nil_check(l_P_494))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_494))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_494))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_494))).f_E))).f_A = l_H_495;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_494))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_494))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_494))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_494))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_494))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_495))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_495))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end496;
}
}
RT_B_TICK();
} L_end496: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_494))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_494))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_494, &l_HEAD_491, &l_TAIL_492);
}
}
RT_B_TICK();
} L_end493: ;
((*(R21 *)rt_nil_check(l_S_490))).f_A = l_HEAD_491;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv497 = l_S_490;
return rv497; }
rt_raise(RT_X_INIT);
}
static R10 r_NO_TEXT(void) { RT_B_TICK(); 
{ R10 rv498 = ({ R10 rc499; memset(&rc499, 0, sizeof rc499);  rc499.f_AT = ((rt_int)0LL); rc499.f_LEN = ((rt_int)0LL); rc499.f_H = ((rt_int)0LL); rc499; });
return rv498; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv500 = ({ R23 rc501; memset(&rc501, 0, sizeof rc501);  rc501.f_OK = 0; rc501.f_V = ((rt_int)0LL); rc501; });
return rv500; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv502 = ({ R23 rc503; memset(&rc503, 0, sizeof rc503);  rc503.f_OK = 1; rc503.f_V = p_V; rc503; });
return rv502; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_504; memset(&l_Y_504, 0, sizeof l_Y_504);
l_Y_504 = ((R12 *)rt_alloc(sizeof (R12)));
rt_int l_LEVEL_505; memset(&l_LEVEL_505, 0, sizeof l_LEVEL_505);
l_LEVEL_505 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_505 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_504)), ({ R12 rc506; memset(&rc506, 0, sizeof rc506);  rc506.f_KIND = p_KIND; rc506.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc506.f_LEVEL = l_LEVEL_505; S_R10(&rc506.f_NAME, p_NAME, 0); rc506.f_T = NULL; S_R10(&rc506.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc506.f_FIELD, r_NO_TEXT(), 0); rc506.f_INPUT = 0; rc506.f_BYREF = 0; rc506.f_HASMV = 0; rc506.f_MV = ((rt_int)0LL); rc506.f_TS = NULL; rc506.f_BUSY = 0; S_R10(&rc506.f_FWD, r_NO_TEXT(), 0); rc506.f_PARAMS = NULL; rc506.f_RESULT = NULL; rc506.f_DECL = NULL; S_R10(&rc506.f_PREFIX, r_NO_TEXT(), 0); rc506.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc506.f_EXPORTED = 0; rc506.f_GENERIC = 0; rc506.f_FRAMED = 0; rc506.f_USES = NULL; rc506.f_INSTANCES = NULL; rc506.f_BINDINGS = NULL; rc506.f_ORIG = NULL; rc506.f_MEMBERS = NULL; rc506.f_SAVED = NULL; rc506.f_OWNER = r_CUR_OWNER(); rc506.f_CHAIN = NULL; rc506.f_SNEXT = NULL; rc506; }), 0);
{ R12 * rv507 = l_Y_504;
return rv507; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv508 = ((rt_int)0LL);
return rv508; }
}
{ rt_int rv509 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv509; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv510 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv510; }
}
{ R12 * rv511 = p_Y;
return rv511; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv512 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv512; }
}
{ rt_int rv513 = (p_NAME).f_H;
return rv513; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_514; memset(&l_Y_514, 0, sizeof l_Y_514);
l_Y_514 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_514 == NULL)) goto L_end515;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_514))).f_NAME, p_NAME))
{
{ R12 * rv516 = l_Y_514;
return rv516; }
}
l_Y_514 = ((*(R12 *)rt_nil_check(l_Y_514))).f_CHAIN;
}
RT_B_TICK();
} L_end515: ;
{ R12 * rv517 = NULL;
return rv517; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_518; memset(&l_Y_518, 0, sizeof l_Y_518);
l_Y_518 = r_LOOKUP(p_NAME);
if ((l_Y_518 == NULL))
{
{ R12 * rv519 = NULL;
return rv519; }
}
{ R12 * rv520 = r_ORIGINAL(l_Y_518);
return rv520; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv521 = r_LOOKUP(r_MKN(p_NAME));
return rv521; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_522; memset(&l_Z_522, 0, sizeof l_Z_522);
l_Z_522 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_522 == NULL)) goto L_end523;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_522))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv524 = l_Z_522;
return rv524; }
}
l_Z_522 = ((*(R12 *)rt_nil_check(l_Z_522))).f_CHAIN;
}
RT_B_TICK();
} L_end523: ;
{ R12 * rv525 = NULL;
return rv525; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv526 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv526; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_527; memset(&l_B_527, 0, sizeof l_B_527);
l_B_527 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_528; memset(&l_OLD_528, 0, sizeof l_OLD_528);
l_OLD_528 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_528 == NULL)) goto L_end529;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_528))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end529;
}
if ((!((((r_IS_ROUTINE(l_OLD_528) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_528))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_528 = r_LOOKUP_NEXT(l_OLD_528);
}
RT_B_TICK();
} L_end529: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_527, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_527, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end530;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end530;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end530: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_531; memset(&l_B_531, 0, sizeof l_B_531);
l_B_531 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_532; memset(&l_P_532, 0, sizeof l_P_532);
l_P_532 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_531, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_532 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_531, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_532 == NULL)) goto L_end533;
{
if ((((*(R12 *)rt_nil_check(l_P_532))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_532))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_532 = ((*(R12 *)rt_nil_check(l_P_532))).f_CHAIN;
}
RT_B_TICK();
} L_end533: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_534; memset(&l_HEAD_534, 0, sizeof l_HEAD_534);
l_HEAD_534 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end535;
{
{
R12 * l_Y_536; memset(&l_Y_536, 0, sizeof l_Y_536);
l_Y_536 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_536);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_536))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_536))).f_SNEXT = l_HEAD_534;
l_HEAD_534 = l_Y_536;
}
}
RT_B_TICK();
} L_end535: ;
{ R12 * rv537 = l_HEAD_534;
return rv537; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_538; memset(&l_T_538, 0, sizeof l_T_538);
l_T_538 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_538)), ({ R22 rc539; memset(&rc539, 0, sizeof rc539);  rc539.f_KIND = p_KIND; rc539.f_SCALE = ((rt_int)0LL); S_R10(&rc539.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc539.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc539.f_MLO, r_NO_MVAL(), 0); S_R23(&rc539.f_MHI, r_NO_MVAL(), 0); rc539.f_RLEVEL = ((rt_int)0LL); S_R10(&rc539.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc539.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc539.f_GEN, r_NO_TEXT(), 0); rc539.f_BASE = NULL; rc539.f_ELEM = NULL; rc539.f_TARGET = NULL; rc539.f_TARGET_TS = NULL; rc539.f_FIELDS = NULL; rc539.f_LITS = NULL; rc539.f_NLITS = ((rt_int)0LL); rc539.f_UNORDERED = 0; rc539.f_BOUNDS = NULL; rc539.f_DIMS = ((rt_int)0LL); rc539.f_ARGS = NULL; S_R10(&rc539.f_NAME, r_NO_TEXT(), 0); S_R10(&rc539.f_CNAME, r_NO_TEXT(), 0); rc539.f_MODL = NULL; rc539.f_REPS = NULL; rc539.f_DECL = NULL; rc539; }), 0);
{ R22 * rv540 = l_T_538;
return rv540; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_541; memset(&l_C_541, 0, sizeof l_C_541);
l_C_541 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_541)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv542 = l_C_541;
return rv542; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_543; memset(&l_Y_543, 0, sizeof l_Y_543);
l_Y_543 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_543))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_543))).f_NAME, 0);
}
r_DEFINE(l_Y_543, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_544; memset(&l_Y_544, 0, sizeof l_Y_544);
l_Y_544 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_544))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_544))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_544))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_544))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_544))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_544, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_545; memset(&l_HEAD_545, 0, sizeof l_HEAD_545);
l_HEAD_545 = NULL;
R21 * l_TAIL_546; memset(&l_TAIL_546, 0, sizeof l_TAIL_546);
l_TAIL_546 = NULL;
rt_int l_START_547; memset(&l_START_547, 0, sizeof l_START_547);
l_START_547 = ((rt_int)0LL);
{ rt_int it549_lo = ((rt_int)0LL), it549_hi = (rt_int)(p_NAMES).len;
for (rt_int it549 = it549_lo; it549 <= it549_hi; it549++) {
{
if (((it549 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it549, it549), rt_str(" ", 1))))
{
if ((it549 > l_START_547))
{
{
R21 * l_N_550; memset(&l_N_550, 0, sizeof l_N_550);
l_N_550 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_550))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_547, rt_sub(it549, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_550, &l_HEAD_545, &l_TAIL_546);
}
}
l_START_547 = rt_add(it549, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it549 == it549_hi) break;
} } L_end548: ;
{
R22 * l_T_551; memset(&l_T_551, 0, sizeof l_T_551);
l_T_551 = r_ENUM_CLASS(l_HEAD_545, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_551);
{ R22 * rv552 = l_T_551;
return rv552; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_553; memset(&l_T_553, 0, sizeof l_T_553);
R21 * l_ASCII_LITS_554; memset(&l_ASCII_LITS_554, 0, sizeof l_ASCII_LITS_554);
l_ASCII_LITS_554 = NULL;
R21 * l_TAIL_555; memset(&l_TAIL_555, 0, sizeof l_TAIL_555);
l_TAIL_555 = NULL;
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
{ rt_int it557_lo = ((rt_int)0LL), it557_hi = ((rt_int)127LL);
for (rt_int it557 = it557_lo; it557 <= it557_hi; it557++) {
{
{
R21 * l_N_558; memset(&l_N_558, 0, sizeof l_N_558);
l_N_558 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_558))).f_NAME, r_ASCII_NAME(it557), 0);
r_ADD_LIST(l_N_558, &l_ASCII_LITS_554, &l_TAIL_555);
}
}
RT_B_TICK();
if (it557 == it557_hi) break;
} } L_end556: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_554, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_553 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_553 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_553 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_553 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_559; memset(&l_OPS_559, 0, sizeof l_OPS_559);
l_OPS_559 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_559, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_560; memset(&l_START_560, 0, sizeof l_START_560);
l_START_560 = ((rt_int)1LL);
{ rt_int it562_lo = ((rt_int)1LL), it562_hi = ((rt_int)270LL);
for (rt_int it562 = it562_lo; it562 <= it562_hi; it562++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_559, it562, it562), rt_str(" ", 1)))
{
if ((it562 > l_START_560))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_559, l_START_560, rt_sub(it562, ((rt_int)1LL))));
}
l_START_560 = rt_add(it562, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it562 == it562_hi) break;
} } L_end561: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R21 * l_F_563; memset(&l_F_563, 0, sizeof l_F_563);
l_F_563 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R21 * l_V_564; memset(&l_V_564, 0, sizeof l_V_564);
l_V_564 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R21 * l_R_565; memset(&l_R_565, 0, sizeof l_R_565);
l_R_565 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R21 * l_D_566; memset(&l_D_566, 0, sizeof l_D_566);
l_D_566 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R21 * l_FX_567; memset(&l_FX_567, 0, sizeof l_FX_567);
l_FX_567 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_568; memset(&l_Y_568, 0, sizeof l_Y_568);
l_Y_568 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R21 *)rt_nil_check(l_F_563))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_563))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_F_563))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_563))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R10(&((*(R21 *)rt_nil_check(l_FX_567))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R21 *)rt_nil_check(l_FX_567))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_567))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_567))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_567))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_567))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_V_564))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_564))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_564))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_564))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R21 *)rt_nil_check(l_V_564))).f_B = l_FX_567;
((*(R21 *)rt_nil_check(l_R_565))).f_A = l_V_564;
S_R10(&((*(R21 *)rt_nil_check(l_D_566))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_568))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_D_566))).f_A = l_F_563;
((*(R21 *)rt_nil_check(l_D_566))).f_B = l_R_565;
((*(R12 *)rt_nil_check(l_Y_568))).f_DECL = l_D_566;
r_DEFINE(l_Y_568, ((rt_int)0LL));
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
rstr l_CONTROLS_569; memset(&l_CONTROLS_569, 0, sizeof l_CONTROLS_569);
l_CONTROLS_569 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_569, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_569, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv570 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_569, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv570; }
}
{ R10 rv571 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_569, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv571; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv572 = r_MKN(rt_str("\\''''", 5));
return rv572; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv573 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv573; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv574 = r_MKN(rt_str("\\ACCENT", 7));
return rv574; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv575 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv575; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv576 = r_MKN(rt_str("\\[", 2));
return rv576; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv577 = r_MKN(rt_str("\\BAR", 4));
return rv577; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv578 = r_MKN(rt_str("\\]", 2));
return rv578; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv579 = r_MKN(rt_str("\\TILDE", 6));
return rv579; }
}
{ R10 rv580 = r_MKN(rt_str("\\DEL", 4));
return rv580; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv581 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv581; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv582 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv582; }
}
{ R22 * rv583 = p_T;
return rv583; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_584; memset(&l_K_584, 0, sizeof l_K_584);
l_K_584 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv585 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv585; }
}
else if ((l_K_584 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv586 = r_MK(rt_str("INTEGER", 7));
return rv586; }
}
{ R10 rv587 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv587; }
}
else if ((l_K_584 == g_T_BOOL))
{
{ R10 rv588 = r_MK(rt_str("BOOLEAN", 7));
return rv588; }
}
else if ((l_K_584 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv589 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv589; }
}
{ R10 rv590 = r_MK(rt_str("an enumerated type", 18));
return rv590; }
}
else if ((l_K_584 == g_T_STR))
{
{ R10 rv591 = r_MK(rt_str("CHAR_STR", 8));
return rv591; }
}
else if ((l_K_584 == g_T_BITS))
{
{ R10 rv592 = r_MK(rt_str("BIT", 3));
return rv592; }
}
else if ((l_K_584 == g_T_FLOAT))
{
{ R10 rv593 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv593; }
}
else if ((l_K_584 == g_T_ARR))
{
{ R10 rv594 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv594; }
}
else if ((l_K_584 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv595 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv595; }
}
{ R10 rv596 = r_MK(rt_str("RECORD", 6));
return rv596; }
}
else if ((l_K_584 == g_T_PTR))
{
{ R10 rv597 = r_MK(rt_str("PTR", 3));
return rv597; }
}
else if ((l_K_584 == g_T_SEM))
{
{ R10 rv598 = r_MK(rt_str("SEMAPHORE", 9));
return rv598; }
}
else if ((l_K_584 == g_T_NIL))
{
{ R10 rv599 = r_MK(rt_str("NIL", 3));
return rv599; }
}
else if ((l_K_584 == g_T_VOID))
{
{ R10 rv600 = r_MK(rt_str("no value", 8));
return rv600; }
}
{ R10 rv601 = r_MK(rt_str("a type", 6));
return rv601; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { RT_B_TICK(); 
rstr l_S_602; memset(&l_S_602, 0, sizeof l_S_602);
l_S_602 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_602, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_603; memset(&l_AT_603, 0, sizeof l_AT_603);
l_AT_603 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_604; memset(&l_START_604, 0, sizeof l_START_604);
l_START_604 = ((rt_int)0LL);
R10 l_R_605; memset(&l_R_605, 0, sizeof l_R_605);
rt_int l_I_606; memset(&l_I_606, 0, sizeof l_I_606);
l_I_606 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv607 = p_T;
return rv607; }
}
for (;;) {
if ((l_I_606 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end608;
{
if (rt_b_eq(rt_b_slice(l_S_602, l_I_606, rt_add(l_I_606, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_605, r_MK(rt_b_slice(l_S_602, l_START_604, rt_sub(l_I_606, ((rt_int)1LL)))), 0);
S_R10(&l_R_605, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_606 = rt_add(l_I_606, ((rt_int)2LL));
l_START_604 = l_I_606;
}
else
{
l_I_606 = rt_add(l_I_606, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end608: ;
if ((l_START_604 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_603;
{ R10 rv609 = p_T;
return rv609; }
}
S_R10(&l_R_605, r_MK(rt_b_slice(l_S_602, l_START_604, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv610 = ({ R10 rc611; memset(&rc611, 0, sizeof rc611);  rc611.f_AT = l_AT_603; rc611.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_603); rc611.f_H = rt_neg(((rt_int)1LL)); rc611; });
return rv610; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_612; memset(&l_P_612, 0, sizeof l_P_612);
l_P_612 = p_A;
R21 * l_Q_613; memset(&l_Q_613, 0, sizeof l_Q_613);
l_Q_613 = p_B;
for (;;) {
if (((l_P_612 == NULL) || (l_Q_613 == NULL))) goto L_end614;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_612))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_613))).f_NAME)))
{
{ rt_int rv615 = 0;
return rv615; }
}
l_P_612 = ((*(R21 *)rt_nil_check(l_P_612))).f_NEXT;
l_Q_613 = ((*(R21 *)rt_nil_check(l_Q_613))).f_NEXT;
}
RT_B_TICK();
} L_end614: ;
{ rt_int rv616 = ((l_P_612 == NULL) && (l_Q_613 == NULL));
return rv616; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_617; memset(&l_Y_617, 0, sizeof l_Y_617);
l_Y_617 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_618; memset(&l_T_618, 0, sizeof l_T_618);
{
R21 * l_P_619; memset(&l_P_619, 0, sizeof l_P_619);
l_P_619 = p_LITS;
for (;;) {
if ((l_P_619 == NULL)) goto L_end620;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_P_619))).f_NEXT, ((*(R21 *)rt_nil_check(l_P_619))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R21 *)rt_nil_check(l_P_619))).f_NAME);
}
l_P_619 = ((*(R21 *)rt_nil_check(l_P_619))).f_NEXT;
}
RT_B_TICK();
} L_end620: ;
}
for (;;) {
if ((l_Y_617 == NULL)) goto L_end621;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_617))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_617))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_617))).f_T, p_LINE);
{ R22 * rv622 = ((*(R12 *)rt_nil_check(l_Y_617))).f_T;
return rv622; }
}
l_Y_617 = ((*(R12 *)rt_nil_check(l_Y_617))).f_INSTANCES;
}
RT_B_TICK();
} L_end621: ;
l_T_618 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_618))).f_BASE = l_T_618;
((*(R22 *)rt_nil_check(l_T_618))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_618))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_618))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_618))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_617 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_617))).f_T = l_T_618;
((*(R12 *)rt_nil_check(l_Y_617))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_617;
{
R21 * l_P_623; memset(&l_P_623, 0, sizeof l_P_623);
l_P_623 = p_LITS;
R10 l_NAMES_624; memset(&l_NAMES_624, 0, sizeof l_NAMES_624);
S_R10(&l_NAMES_624, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_623 == NULL)) goto L_end625;
{
S_R10(&l_NAMES_624, r_FMT2(rt_str("@@, ", 4), l_NAMES_624, r_CSTRING(((*(R21 *)rt_nil_check(l_P_623))).f_NAME)), 0);
l_P_623 = ((*(R21 *)rt_nil_check(l_P_623))).f_NEXT;
}
RT_B_TICK();
} L_end625: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_618))).f_CNAME, l_NAMES_624));
}
r_DECLARE_LITERALS(l_T_618, p_LINE);
{ R22 * rv626 = l_T_618;
return rv626; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_627; memset(&l_P_627, 0, sizeof l_P_627);
l_P_627 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_628; memset(&l_I_628, 0, sizeof l_I_628);
l_I_628 = ((rt_int)0LL);
for (;;) {
if ((l_P_627 == NULL)) goto L_end629;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_627))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_630; memset(&l_Y_630, 0, sizeof l_Y_630);
l_Y_630 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_627))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_630))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_630))).f_MV = l_I_628;
((*(R12 *)rt_nil_check(l_Y_630))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_630))).f_INPUT = 1;
r_DEFINE(l_Y_630, p_LINE);
}
}
l_I_628 = rt_add(l_I_628, ((rt_int)1LL));
l_P_627 = ((*(R21 *)rt_nil_check(l_P_627))).f_NEXT;
}
RT_B_TICK();
} L_end629: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_631; memset(&l_V_631, 0, sizeof l_V_631);
l_V_631 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_631 == NULL)) || (p_T == NULL)))
{
{ R12 * rv632 = l_V_631;
return rv632; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv633 = NULL;
return rv633; }
}
{
R21 * l_P_634; memset(&l_P_634, 0, sizeof l_P_634);
l_P_634 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_635; memset(&l_I_635, 0, sizeof l_I_635);
l_I_635 = ((rt_int)0LL);
for (;;) {
if ((l_P_634 == NULL)) goto L_end636;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_634))).f_NAME, p_NAME))
{
{
R12 * l_Y_637; memset(&l_Y_637, 0, sizeof l_Y_637);
l_Y_637 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_637))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_637))).f_MV = l_I_635;
((*(R12 *)rt_nil_check(l_Y_637))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_637))).f_INPUT = 1;
{ R12 * rv638 = l_Y_637;
return rv638; }
}
}
l_I_635 = rt_add(l_I_635, ((rt_int)1LL));
l_P_634 = ((*(R21 *)rt_nil_check(l_P_634))).f_NEXT;
}
RT_B_TICK();
} L_end636: ;
}
{ R12 * rv639 = NULL;
return rv639; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_640; memset(&l_Y_640, 0, sizeof l_Y_640);
l_Y_640 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_640 == NULL)) goto L_end641;
{
if ((((*(R12 *)rt_nil_check(l_Y_640))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv642 = l_Y_640;
return rv642; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_640))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv643 = l_Y_640;
return rv643; }
}
}
l_Y_640 = r_LOOKUP_NEXT(l_Y_640);
}
RT_B_TICK();
} L_end641: ;
{ R12 * rv644 = NULL;
return rv644; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_645; memset(&l_Y_645, 0, sizeof l_Y_645);
l_Y_645 = r_LOOKUP(p_NAME);
rt_int l_N_646; memset(&l_N_646, 0, sizeof l_N_646);
l_N_646 = ((rt_int)0LL);
for (;;) {
if ((l_Y_645 == NULL)) goto L_end647;
{
if ((((*(R12 *)rt_nil_check(l_Y_645))).f_KIND == g_Y_ENUMLIT))
{
l_N_646 = rt_add(l_N_646, ((rt_int)1LL));
}
l_Y_645 = r_LOOKUP_NEXT(l_Y_645);
}
RT_B_TICK();
} L_end647: ;
{ rt_int rv648 = l_N_646;
return rv648; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv649 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv649; }
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
R22 * l_N_650; memset(&l_N_650, 0, sizeof l_N_650);
if ((p_R == NULL))
{
{ R22 * rv651 = p_T;
return rv651; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_650 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv652 = l_N_650;
return rv652; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_650 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_650))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_653; memset(&l_LO_653, 0, sizeof l_LO_653);
R26 l_HI_654; memset(&l_HI_654, 0, sizeof l_HI_654);
S_R26(&l_LO_653, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_654, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_LO_C, (l_LO_653).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_HI_C, (l_HI_654).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_650))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_650))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_650))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_650))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_653).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_654).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_LO_C, r_RESCALE(l_LO_653, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_HI_C, r_RESCALE(l_HI_654, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_653).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_654).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_650))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_650))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_650))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_650))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_650))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_650))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_650))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_650))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_650))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_650))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_650))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv655 = l_N_650;
return rv655; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_656; memset(&l_Y_656, 0, sizeof l_Y_656);
l_Y_656 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_656 == NULL)))
{
{ R23 rv657 = r_SOME(((*(R12 *)rt_nil_check(l_Y_656))).f_MV);
return rv657; }
}
}
}
{ R23 rv658 = r_MANIFEST(p_E);
return rv658; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv659 = ((rt_int)0LL);
return rv659; }
}
{ rt_int rv660 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv660; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv661 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv661; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_662; memset(&l_A_662, 0, sizeof l_A_662);
l_A_662 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it664_lo = ((rt_int)1LL), it664_hi = p_K;
for (rt_int it664 = it664_lo; it664 <= it664_hi; it664++) {
{
if ((l_A_662 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_662 = ((*(R21 *)rt_nil_check(l_A_662))).f_NEXT;
}
RT_B_TICK();
if (it664 == it664_hi) break;
} } L_end663: ;
if ((l_A_662 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv665 = l_A_662;
return rv665; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_666; memset(&l_T_666, 0, sizeof l_T_666);
rt_int l_K_667; memset(&l_K_667, 0, sizeof l_K_667);
l_K_667 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_667 == g_TS_ARRAY))
{
{ R22 * rv668 = r_RESOLVE_ARRAY(p_TS);
return rv668; }
}
else if ((l_K_667 == g_TS_RECORD))
{
{ R22 * rv669 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv669; }
}
else if ((l_K_667 == g_TS_ENUM))
{
l_T_666 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_666 = r_WITH_RANGE(l_T_666, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_666 = r_COPY_TYP(l_T_666);
((*(R22 *)rt_nil_check(l_T_666))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
r_CHECK_ENUM_REP(l_T_666, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv670 = l_T_666;
return rv670; }
}
else if ((l_K_667 == g_TS_GEN))
{
{ R22 * rv671 = r_GEN_TYPE(p_TS);
return rv671; }
}
else if ((!(l_K_667 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_666 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_TS))).f_E), ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_666 = r_COPY_TYP(l_T_666);
((*(R22 *)rt_nil_check(l_T_666))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
}
{ R22 * rv672 = l_T_666;
return rv672; }
}
l_T_666 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_666 == NULL))
{
l_T_666 = r_RESOLVE_USER(p_TS);
}
l_T_666 = r_WITH_RANGE(l_T_666, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_666 = r_COPY_TYP(l_T_666);
((*(R22 *)rt_nil_check(l_T_666))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
if ((((*(R22 *)rt_nil_check(l_T_666))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_666, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
else if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
{ R22 * rv673 = l_T_666;
return rv673; }
rt_raise(RT_X_INIT);
}
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_674; memset(&l_T_674, 0, sizeof l_T_674);
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(p_E))).f_A)))
{
l_T_674 = r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_675; memset(&l_SAVED_CODE_675, 0, sizeof l_SAVED_CODE_675);
S_R14(&l_SAVED_CODE_675, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_674 = (r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_675, 0);
}
}
{
R22 * l_R_676; memset(&l_R_676, 0, sizeof l_R_676);
l_R_676 = r_REAL_TYPE(l_T_674);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_676))).f_KIND == g_T_ARR))
{
{ R22 * rv677 = ((*(R22 *)rt_nil_check(l_R_676))).f_ELEM;
return rv677; }
}
else if ((((*(R22 *)rt_nil_check(l_R_676))).f_KIND == g_T_PTR))
{
{ R22 * rv678 = r_TARGET(l_R_676);
return rv678; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_676))).f_KIND == g_T_STR)))
{
{ R22 * rv679 = r_CHARSET_OF(l_R_676);
return rv679; }
}
if ((((*(R22 *)rt_nil_check(l_R_676))).f_KIND == g_T_REC))
{
{
R12 * l_C_680; memset(&l_C_680, 0, sizeof l_C_680);
l_C_680 = r_RECORD_CLASS_OF(l_R_676);
if ((!(l_C_680 == NULL)))
{
{
R20 * l_B_681; memset(&l_B_681, 0, sizeof l_B_681);
l_B_681 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_680))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_681 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_681))).f_T == NULL)))
{
{ R22 * rv682 = ((*(R20 *)rt_nil_check(l_B_681))).f_T;
return rv682; }
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
{ rt_int rv683 = 0;
return rv683; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv684 = 1;
return rv684; }
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_685; memset(&l_Y_685, 0, sizeof l_Y_685);
l_Y_685 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_685 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_685))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_685))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_685))).f_T == NULL))))
{
{
R22 * l_R_686; memset(&l_R_686, 0, sizeof l_R_686);
l_R_686 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_685))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_686))).f_KIND == g_T_REC))
{
{
R12 * l_C_687; memset(&l_C_687, 0, sizeof l_C_687);
l_C_687 = r_RECORD_CLASS_OF(l_R_686);
if ((!(l_C_687 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_687))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv688 = 1;
return rv688; }
}
}
}
}
}
}
}
}
}
{ rt_int rv689 = 0;
return rv689; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_690; memset(&l_B_690, 0, sizeof l_B_690);
l_B_690 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_690 == NULL)) goto L_end691;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_690))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_690))).f_T == NULL))))
{
{ R22 * rv692 = ((*(R20 *)rt_nil_check(l_B_690))).f_T;
return rv692; }
}
l_B_690 = ((*(R20 *)rt_nil_check(l_B_690))).f_NEXT;
}
RT_B_TICK();
} L_end691: ;
{
R12 * l_Y_693; memset(&l_Y_693, 0, sizeof l_Y_693);
l_Y_693 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_693 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_693))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_693))).f_T == NULL))))
{
{ R22 * rv694 = ((*(R12 *)rt_nil_check(l_Y_693))).f_T;
return rv694; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_695; memset(&l_NAME_695, 0, sizeof l_NAME_695);
S_R10(&l_NAME_695, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_696; memset(&l_T_696, 0, sizeof l_T_696);
if (r_TEQS(l_NAME_695, rt_str("FIXED", 5)))
{
{
R23 l_S_697; memset(&l_S_697, 0, sizeof l_S_697);
S_R23(&l_S_697, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_698; memset(&l_R_698, 0, sizeof l_R_698);
S_R23(&l_R_698, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_699; memset(&l_P_699, 0, sizeof l_P_699);
l_P_699 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_698).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_699, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_697).f_V == ((rt_int)0LL)))
{
{ R22 * rv700 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv700; }
}
l_T_696 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_696))).f_SCALE = (l_S_697).f_V;
{ R22 * rv701 = l_T_696;
return rv701; }
}
}
else if (r_TEQS(l_NAME_695, rt_str("FLOAT", 5)))
{
{
R23 l_P_702; memset(&l_P_702, 0, sizeof l_P_702);
S_R23(&l_P_702, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_696 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_696))).f_SCALE = (l_P_702).f_V;
{ R22 * rv703 = l_T_696;
return rv703; }
}
}
else if (r_TEQS(l_NAME_695, rt_str("BIT", 3)))
{
l_T_696 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_696, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv704 = l_T_696;
return rv704; }
}
else if ((r_TEQS(l_NAME_695, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_695, rt_str("ASCII_STR", 9))))
{
l_T_696 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_696, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_696))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_695, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R21 * l_CS_705; memset(&l_CS_705, 0, sizeof l_CS_705);
l_CS_705 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_706; memset(&l_C_706, 0, sizeof l_C_706);
if (((((*(R21 *)rt_nil_check(l_CS_705))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_705))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_696))).f_BASE = NULL;
{ R22 * rv707 = l_T_696;
return rv707; }
}
if (((((*(R21 *)rt_nil_check(l_CS_705))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_CS_705))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_708; memset(&l_SAVED_CODE_708, 0, sizeof l_SAVED_CODE_708);
S_R14(&l_SAVED_CODE_708, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_709; memset(&l_V_709, 0, sizeof l_V_709);
S_R26(&l_V_709, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(l_CS_705))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_708, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_709).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_696))).f_BASE = r_CHARSET_OF((l_V_709).f_T);
}
{ R22 * rv710 = l_T_696;
return rv710; }
}
l_C_706 = r_REAL_TYPE(r_ARG_TYPE(l_CS_705));
if ((!(((*(R22 *)rt_nil_check(l_C_706))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_706))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_706))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_696))).f_BASE = ((*(R22 *)rt_nil_check(l_C_706))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv711 = l_T_696;
return rv711; }
}
else if (r_TEQS(l_NAME_695, rt_str("PTR", 3)))
{
l_T_696 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_696))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv712 = l_T_696;
return rv712; }
}
else if (r_TEQS(l_NAME_695, rt_str("SEMAPHORE", 9)))
{
l_T_696 = r_NEW_TYP(g_T_SEM);
{
R21 * l_U_713; memset(&l_U_713, 0, sizeof l_U_713);
l_U_713 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_713))).f_NAME, rt_str("REGION", 6)))
{
((*(R22 *)rt_nil_check(l_T_696))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_713))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R22 * rv714 = l_T_696;
return rv714; }
}
{ R22 * rv715 = NULL;
return rv715; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_716; memset(&l_M_716, 0, sizeof l_M_716);
S_R23(&l_M_716, r_MANIFEST(p_A), 0);
if ((!(l_M_716).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_717; memset(&l_SAVED_CODE_717, 0, sizeof l_SAVED_CODE_717);
S_R14(&l_SAVED_CODE_717, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_718; memset(&l_T_718, 0, sizeof l_T_718);
l_T_718 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_717, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_718)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_718))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_716).f_V < p_LO) || ((l_M_716).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv719 = l_M_716;
return rv719; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv720 = 0;
return rv720; }
}
{ rt_int rv721 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv721; }
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
R12 * l_Y_722; memset(&l_Y_722, 0, sizeof l_Y_722);
l_Y_722 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_722 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_722))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_722))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_722))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R21 * l_R_723; memset(&l_R_723, 0, sizeof l_R_723);
l_R_723 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R10 l_NAME_724; memset(&l_NAME_724, 0, sizeof l_NAME_724);
S_R10(&l_NAME_724, ((*(R21 *)rt_nil_check(l_R_723))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_723))).f_KIND == g_TS_GEN))
{
return;
}
if (r_TEQS(l_NAME_724, rt_str("ENUM_STD", 8)))
{
return;
}
if ((!((r_TEQS(l_NAME_724, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_724, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_724) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_724)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_724);
}
if ((((*(R21 *)rt_nil_check(l_R_723))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_724);
}
{
R23 l_N_725; memset(&l_N_725, 0, sizeof l_N_725);
S_R23(&l_N_725, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_723))).f_A), 0);
rt_int l_NL_726; memset(&l_NL_726, 0, sizeof l_NL_726);
l_NL_726 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_725).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_725).f_V > ((rt_int)64LL)) || ((l_N_725).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_724, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_723))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_725).f_V < r_BITS_FOR(l_NL_726)))
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
R21 * l_L_727; memset(&l_L_727, 0, sizeof l_L_727);
l_L_727 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_727 == NULL)) goto L_end728;
{
{
R21 * l_V_729; memset(&l_V_729, 0, sizeof l_V_729);
l_V_729 = ((*(R21 *)rt_nil_check(l_R_723))).f_B;
rt_int l_FOUND_730; memset(&l_FOUND_730, 0, sizeof l_FOUND_730);
l_FOUND_730 = ((rt_int)0LL);
for (;;) {
if ((l_V_729 == NULL)) goto L_end731;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_729))).f_NAME, ((*(R21 *)rt_nil_check(l_L_727))).f_NAME))
{
l_FOUND_730 = rt_add(l_FOUND_730, ((rt_int)1LL));
}
l_V_729 = ((*(R21 *)rt_nil_check(l_V_729))).f_NEXT;
}
RT_B_TICK();
} L_end731: ;
if ((!(l_FOUND_730 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_727))).f_NAME);
}
}
l_L_727 = ((*(R21 *)rt_nil_check(l_L_727))).f_NEXT;
}
RT_B_TICK();
} L_end728: ;
}
{
R21 * l_V_732; memset(&l_V_732, 0, sizeof l_V_732);
l_V_732 = ((*(R21 *)rt_nil_check(l_R_723))).f_B;
for (;;) {
if ((l_V_732 == NULL)) goto L_end733;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_732))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_732))).f_NAME);
}
{
R14 l_SAVED_CODE_734; memset(&l_SAVED_CODE_734, 0, sizeof l_SAVED_CODE_734);
S_R14(&l_SAVED_CODE_734, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_735; memset(&l_B_735, 0, sizeof l_B_735);
S_R26(&l_B_735, r_EXPR(((*(R21 *)rt_nil_check(l_V_732))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_734, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_735).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_735).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_735).f_T))).f_MLEN).f_V == (l_N_725).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_732))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_732))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_736; memset(&l_U_736, 0, sizeof l_U_736);
l_U_736 = ((*(R21 *)rt_nil_check(l_V_732))).f_NEXT;
for (;;) {
if ((l_U_736 == NULL)) goto L_end737;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_736))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_736))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_732))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_736))).f_NAME);
}
}
l_U_736 = ((*(R21 *)rt_nil_check(l_U_736))).f_NEXT;
}
RT_B_TICK();
} L_end737: ;
}
}
}
l_V_732 = ((*(R21 *)rt_nil_check(l_V_732))).f_NEXT;
}
RT_B_TICK();
} L_end733: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_738; memset(&l_B_738, 0, sizeof l_B_738);
l_B_738 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_738 == NULL)) goto L_end739;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_738))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_738))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_738))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc740; memset(&rc740, 0, sizeof rc740);  rc740.f_OK = ((*(R20 *)rt_nil_check(l_B_738))).f_HASMV; rc740.f_V = ((*(R20 *)rt_nil_check(l_B_738))).f_MV; rc740; }), 0);
return;
}
l_B_738 = ((*(R20 *)rt_nil_check(l_B_738))).f_NEXT;
}
RT_B_TICK();
} L_end739: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_741; memset(&l_C_741, 0, sizeof l_C_741);
R23 l_M_742; memset(&l_M_742, 0, sizeof l_M_742);
r_ATTR_VALUE(p_A, &l_C_741, &l_M_742);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_741, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_742, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_743; memset(&l_T_743, 0, sizeof l_T_743);
l_T_743 = r_NEW_TYP(g_T_ARR);
R21 * l_R_744; memset(&l_R_744, 0, sizeof l_R_744);
l_R_744 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_745; memset(&l_TAIL_745, 0, sizeof l_TAIL_745);
l_TAIL_745 = NULL;
for (;;) {
if ((l_R_744 == NULL)) goto L_end746;
{
{
R25 * l_B_747; memset(&l_B_747, 0, sizeof l_B_747);
l_B_747 = ((R25 *)rt_alloc(sizeof (R25)));
R26 l_LO_748; memset(&l_LO_748, 0, sizeof l_LO_748);
R26 l_HI_749; memset(&l_HI_749, 0, sizeof l_HI_749);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_744))).f_A))
{
S_R26(&l_LO_748, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_744))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_744))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_748, r_EXPR(((*(R21 *)rt_nil_check(l_R_744))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_744))).f_B))
{
S_R26(&l_HI_749, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_744))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_744))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_749, r_EXPR(((*(R21 *)rt_nil_check(l_R_744))).f_B, (l_LO_748).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_747)), ({ R25 rc750; memset(&rc750, 0, sizeof rc750);  S_R10(&rc750.f_LO, (l_LO_748).f_C, 0); S_R10(&rc750.f_HI, (l_HI_749).f_C, 0); S_R23(&rc750.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_744))).f_A), 0); S_R23(&rc750.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_744))).f_B), 0); rc750.f_ANYARG = 0; rc750.f_NEXT = NULL; rc750; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_744))).f_A)) && (!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_744))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_748).f_T), r_REAL_TYPE((l_HI_749).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_744))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R10(&((*(R25 *)rt_nil_check(l_B_747))).f_LO, r_INDEX_OF(l_LO_748, ((*(R21 *)rt_nil_check(l_R_744))).f_LINE), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_747))).f_HI, r_INDEX_OF(l_HI_749, ((*(R21 *)rt_nil_check(l_R_744))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_748).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_748).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_747))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_744))).f_A, (l_LO_748).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_747))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_744))).f_B, (l_LO_748).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_747))).f_LO, (l_LO_748).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_747))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_747))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_748).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_744))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_745 == NULL))
{
((*(R22 *)rt_nil_check(l_T_743))).f_BOUNDS = l_B_747;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_745))).f_NEXT = l_B_747;
}
l_TAIL_745 = l_B_747;
((*(R22 *)rt_nil_check(l_T_743))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_743))).f_DIMS, ((rt_int)1LL));
}
l_R_744 = ((*(R21 *)rt_nil_check(l_R_744))).f_NEXT;
}
RT_B_TICK();
} L_end746: ;
((*(R22 *)rt_nil_check(l_T_743))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_743))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_743))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_743))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_743))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_743))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_743))).f_DIMS), 0);
{ R22 * rv751 = l_T_743;
return rv751; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_752; memset(&l_Y_752, 0, sizeof l_Y_752);
l_Y_752 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_753; memset(&l_B_753, 0, sizeof l_B_753);
l_B_753 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_753 == NULL)) goto L_end754;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_753))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_753))).f_T == NULL))))
{
{ R22 * rv755 = ((*(R20 *)rt_nil_check(l_B_753))).f_T;
return rv755; }
}
l_B_753 = ((*(R20 *)rt_nil_check(l_B_753))).f_NEXT;
}
RT_B_TICK();
} L_end754: ;
}
}
if ((l_Y_752 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_752))).f_KIND == g_Y_GEN))
{
{ R22 * rv756 = r_GEN_TYPE(p_TS);
return rv756; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_752))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_752))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv757 = ((*(R12 *)rt_nil_check(l_Y_752))).f_T;
return rv757; }
}
{
R21 * l_D_758; memset(&l_D_758, 0, sizeof l_D_758);
l_D_758 = ((*(R12 *)rt_nil_check(l_Y_752))).f_DECL;
R22 * l_T_759; memset(&l_T_759, 0, sizeof l_T_759);
if ((((*(R21 *)rt_nil_check(l_D_758))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_752))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_752))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_752))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_758))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_752))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_758))).f_B, r_RECORD_NAME(l_Y_752), l_Y_752, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_752))).f_T = r_RESOLVE_IN_DECL(l_Y_752, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_752))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_752))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_752))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_752))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_752))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_752))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_752))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_752))).f_BUSY = 0;
}
l_T_759 = ((*(R12 *)rt_nil_check(l_Y_752))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_758))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_759 = r_RECORD_INSTANCE(l_Y_752, p_TS);
}
else
{
l_T_759 = r_RESOLVE_IN_DECL(l_Y_752, p_TS);
}
}
{ R22 * rv760 = r_ABSTRACT_VIEW(l_Y_752, l_T_759);
return rv760; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_761; memset(&l_A_761, 0, sizeof l_A_761);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv762 = p_T;
return rv762; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv763 = p_T;
return rv763; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv764 = p_T;
return rv764; }
}
l_A_761 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_761))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_761))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_761))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_761))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_761))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv765 = l_A_761;
return rv765; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_766; memset(&l_P_766, 0, sizeof l_P_766);
l_P_766 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_766 == NULL)) goto L_end767;
{
if ((l_P_766 == p_M))
{
{ rt_int rv768 = 1;
return rv768; }
}
l_P_766 = ((*(R12 *)rt_nil_check(l_P_766))).f_MODL;
}
RT_B_TICK();
} L_end767: ;
{ rt_int rv769 = 0;
return rv769; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_770; memset(&l_D_770, 0, sizeof l_D_770);
l_D_770 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_771; memset(&l_T_771, 0, sizeof l_T_771);
if ((p_TS == NULL))
{
{ R22 * rv772 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_770))).f_B);
return rv772; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_770))).f_A, p_TS);
l_T_771 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_770))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv773 = l_T_771;
return rv773; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_774; memset(&l_F_774, 0, sizeof l_F_774);
l_F_774 = p_FORMALS;
R21 * l_A_775; memset(&l_A_775, 0, sizeof l_A_775);
l_A_775 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_774 == NULL)) goto L_end776;
{
{
R21 * l_N_777; memset(&l_N_777, 0, sizeof l_N_777);
l_N_777 = ((*(R21 *)rt_nil_check(l_F_774))).f_A;
for (;;) {
if ((l_N_777 == NULL)) goto L_end778;
{
if ((l_A_775 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_774))).f_B == NULL))
{
{
R12 * l_Y_779; memset(&l_Y_779, 0, sizeof l_Y_779);
l_Y_779 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_777))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_779))).f_T = r_ARG_TYPE(l_A_775);
r_DEFINE(l_Y_779, ((*(R21 *)rt_nil_check(l_A_775))).f_LINE);
}
}
else
{
{
R12 * l_Y_780; memset(&l_Y_780, 0, sizeof l_Y_780);
l_Y_780 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_777))).f_NAME);
R10 l_C_781; memset(&l_C_781, 0, sizeof l_C_781);
R23 l_M_782; memset(&l_M_782, 0, sizeof l_M_782);
((*(R12 *)rt_nil_check(l_Y_780))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_774))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_775))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_775))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_775))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_775))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_781, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_775))).f_NAME, (((*(R21 *)rt_nil_check(l_A_775))).f_NAME).f_LEN))), 0);
S_R23(&l_M_782, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_775, &l_C_781, &l_M_782);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_780))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_781))))
{
S_R10(&l_C_781, (r_EXPR(l_A_775, ((*(R12 *)rt_nil_check(l_Y_780))).f_T)).f_C, 0);
S_R23(&l_M_782, r_ENUM_MANIFEST(l_A_775, ((*(R12 *)rt_nil_check(l_Y_780))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_780))).f_ACCESS, l_C_781, 0);
((*(R12 *)rt_nil_check(l_Y_780))).f_HASMV = (l_M_782).f_OK;
((*(R12 *)rt_nil_check(l_Y_780))).f_MV = (l_M_782).f_V;
((*(R12 *)rt_nil_check(l_Y_780))).f_INPUT = 1;
r_DEFINE(l_Y_780, ((*(R21 *)rt_nil_check(l_A_775))).f_LINE);
}
}
l_A_775 = ((*(R21 *)rt_nil_check(l_A_775))).f_NEXT;
l_N_777 = ((*(R21 *)rt_nil_check(l_N_777))).f_NEXT;
}
RT_B_TICK();
} L_end778: ;
}
l_F_774 = ((*(R21 *)rt_nil_check(l_F_774))).f_NEXT;
}
RT_B_TICK();
} L_end776: ;
if ((!(l_A_775 == NULL)))
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
{ R10 rv783 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv783; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv784 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv784; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_785; memset(&l_K_785, 0, sizeof l_K_785);
l_K_785 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv786 = r_MK(rt_str("rt_int", 6));
return rv786; }
}
else if ((l_K_785 == g_T_FLOAT))
{
{ R10 rv787 = r_MK(rt_str("double", 6));
return rv787; }
}
else if (((l_K_785 == g_T_STR) || (l_K_785 == g_T_BITS)))
{
{ R10 rv788 = r_MK(rt_str("rstr", 4));
return rv788; }
}
else if (((l_K_785 == g_T_REC) || (l_K_785 == g_T_ARR)))
{
{ R10 rv789 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv789; }
}
else if ((l_K_785 == g_T_ABS))
{
{ R10 rv790 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv790; }
}
else if ((l_K_785 == g_T_SEM))
{
{ R10 rv791 = r_MK(rt_str("rt_b_sem *", 10));
return rv791; }
}
else if ((l_K_785 == g_T_PATHS))
{
{ R10 rv792 = r_MK(rt_str("rt_b_paths", 10));
return rv792; }
}
else if ((l_K_785 == g_T_VOID))
{
{ R10 rv793 = r_MK(rt_str("void", 4));
return rv793; }
}
else if ((l_K_785 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_794; memset(&l_TT_794, 0, sizeof l_TT_794);
l_TT_794 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_794))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_794))).f_A == NULL)))
{
{
R12 * l_Y_795; memset(&l_Y_795, 0, sizeof l_Y_795);
l_Y_795 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_794))).f_NAME);
if ((!(l_Y_795 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_795))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_795))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_795))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_795))).f_DECL))).f_A == NULL)))
{
{ R10 rv796 = r_CATS(r_RECORD_NAME(l_Y_795), rt_str(" *", 2));
return rv796; }
}
}
}
}
}
}
}
{ R10 rv797 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv797; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv798 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv798; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_799; memset(&l_F_799, 0, sizeof l_F_799);
l_F_799 = ((R24 *)rt_alloc(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_799)), ({ R24 rc800; memset(&rc800, 0, sizeof rc800);  S_R10(&rc800.f_NAME, p_NAME, 0); S_R10(&rc800.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc800.f_T = p_T; rc800.f_KIND = p_KIND; S_R10(&rc800.f_TAGF, r_NO_TEXT(), 0); rc800.f_LABELS = NULL; rc800.f_NEXT = NULL; rc800; }), 0);
{ R24 * rv801 = l_F_799;
return rv801; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_802; memset(&l_F_802, 0, sizeof l_F_802);
l_F_802 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_802 == NULL)) goto L_end803;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_802))).f_NAME, p_NAME))
{
{ R24 * rv804 = l_F_802;
return rv804; }
}
l_F_802 = ((*(R24 *)rt_nil_check(l_F_802))).f_NEXT;
}
RT_B_TICK();
} L_end803: ;
{ R24 * rv805 = NULL;
return rv805; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_806; memset(&l_F_806, 0, sizeof l_F_806);
l_F_806 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_807; memset(&l_FIRST_807, 0, sizeof l_FIRST_807);
l_FIRST_807 = NULL;
for (;;) {
if ((l_F_806 == NULL)) goto L_end808;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_806))).f_NAME, p_NAME))
{
if ((l_FIRST_807 == NULL))
{
l_FIRST_807 = l_F_806;
}
if (((((*(R24 *)rt_nil_check(l_F_806))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv809 = l_F_806;
return rv809; }
}
{
R23 l_TAGV_810; memset(&l_TAGV_810, 0, sizeof l_TAGV_810);
S_R23(&l_TAGV_810, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_806))).f_TAGF), 0);
if ((l_TAGV_810).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_806))).f_LABELS, (l_TAGV_810).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_806))).f_TAGF)))).f_T))
{
{ R24 * rv811 = l_F_806;
return rv811; }
}
}
}
}
l_F_806 = ((*(R24 *)rt_nil_check(l_F_806))).f_NEXT;
}
RT_B_TICK();
} L_end808: ;
{ R24 * rv812 = l_FIRST_807;
return rv812; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_813; memset(&l_P_813, 0, sizeof l_P_813);
l_P_813 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_814; memset(&l_N_814, 0, sizeof l_N_814);
l_N_814 = ((rt_int)0LL);
for (;;) {
if ((l_P_813 == NULL)) goto L_end815;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_813))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_813))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_813))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_813))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_814 = rt_add(l_N_814, ((rt_int)1LL));
}
l_P_813 = ((*(R24 *)rt_nil_check(l_P_813))).f_NEXT;
}
RT_B_TICK();
} L_end815: ;
if ((l_N_814 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_814)), 0);
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
R21 * l_D_816; memset(&l_D_816, 0, sizeof l_D_816);
l_D_816 = p_DECLS;
for (;;) {
if ((l_D_816 == NULL)) goto L_end817;
{
if ((((*(R21 *)rt_nil_check(l_D_816))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_818; memset(&l_FT_818, 0, sizeof l_FT_818);
l_FT_818 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_816))).f_B);
R21 * l_N_819; memset(&l_N_819, 0, sizeof l_N_819);
l_N_819 = ((*(R21 *)rt_nil_check(l_D_816))).f_A;
for (;;) {
if ((l_N_819 == NULL)) goto L_end820;
{
{
R24 * l_F_821; memset(&l_F_821, 0, sizeof l_F_821);
l_F_821 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_819))).f_NAME, l_FT_818, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_821))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_821))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_821, &(*p_TAIL));
if (((r_LOOKUP(((*(R21 *)rt_nil_check(l_N_819))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_N_819))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_822; memset(&l_Y_822, 0, sizeof l_Y_822);
l_Y_822 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_819))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_822))).f_T = l_FT_818;
S_R10(&((*(R12 *)rt_nil_check(l_Y_822))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_821))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_822))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_822))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_822))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_822, ((*(R21 *)rt_nil_check(l_D_816))).f_LINE);
}
}
}
l_N_819 = ((*(R21 *)rt_nil_check(l_N_819))).f_NEXT;
}
RT_B_TICK();
} L_end820: ;
}
}
else
{
{
R24 * l_TF_823; memset(&l_TF_823, 0, sizeof l_TF_823);
l_TF_823 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_816))).f_NAME);
R21 * l_S_824; memset(&l_S_824, 0, sizeof l_S_824);
l_S_824 = ((*(R21 *)rt_nil_check(l_D_816))).f_A;
if ((l_TF_823 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_816))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_816))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_823))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_816))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_816))).f_NAME);
}
{
R21 * l_O_825; memset(&l_O_825, 0, sizeof l_O_825);
l_O_825 = p_DECLS;
for (;;) {
if ((l_O_825 == l_D_816)) goto L_end826;
{
if ((((*(R21 *)rt_nil_check(l_O_825))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_O_825))).f_NAME, ((*(R21 *)rt_nil_check(l_D_816))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_816))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R21 *)rt_nil_check(l_D_816))).f_NAME);
}
}
l_O_825 = ((*(R21 *)rt_nil_check(l_O_825))).f_NEXT;
}
RT_B_TICK();
} L_end826: ;
}
r_CHECK_VARIANT_NAMES(l_D_816, ((*(R24 *)rt_nil_check(l_TF_823))).f_T);
for (;;) {
if ((l_S_824 == NULL)) goto L_end827;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_824))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_816))).f_NAME), ((*(R21 *)rt_nil_check(l_S_824))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_824 = ((*(R21 *)rt_nil_check(l_S_824))).f_NEXT;
}
RT_B_TICK();
} L_end827: ;
}
}
l_D_816 = ((*(R21 *)rt_nil_check(l_D_816))).f_NEXT;
}
RT_B_TICK();
} L_end817: ;
}
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT) { RT_B_TICK(); 
R21 * l_S_828; memset(&l_S_828, 0, sizeof l_S_828);
l_S_828 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R21 * l_LOS_829; memset(&l_LOS_829, 0, sizeof l_LOS_829);
l_LOS_829 = NULL;
R21 * l_HIS_830; memset(&l_HIS_830, 0, sizeof l_HIS_830);
l_HIS_830 = NULL;
rt_int l_LO_LIM_831; memset(&l_LO_LIM_831, 0, sizeof l_LO_LIM_831);
rt_int l_HI_LIM_832; memset(&l_HI_LIM_832, 0, sizeof l_HI_LIM_832);
R22 * l_R_833; memset(&l_R_833, 0, sizeof l_R_833);
l_R_833 = r_REAL_TYPE(p_TT);
l_LO_LIM_831 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_832 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_833))).f_KIND == g_T_ENUM))
{
l_LO_LIM_831 = ((rt_int)0LL);
l_HI_LIM_832 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_833))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_833))).f_KIND == g_T_BOOL))
{
l_LO_LIM_831 = ((rt_int)0LL);
l_HI_LIM_832 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_833))).f_MLO).f_OK)
{
l_LO_LIM_831 = (((*(R22 *)rt_nil_check(l_R_833))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_833))).f_MHI).f_OK)
{
l_HI_LIM_832 = (((*(R22 *)rt_nil_check(l_R_833))).f_MHI).f_V;
}
for (;;) {
if ((l_S_828 == NULL)) goto L_end834;
{
{
R21 * l_L_835; memset(&l_L_835, 0, sizeof l_L_835);
l_L_835 = ((*(R21 *)rt_nil_check(l_S_828))).f_A;
for (;;) {
if ((l_L_835 == NULL)) goto L_end836;
{
{
R23 l_A_837; memset(&l_A_837, 0, sizeof l_A_837);
R23 l_B_838; memset(&l_B_838, 0, sizeof l_B_838);
if ((((*(R21 *)rt_nil_check(l_L_835))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_837, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_835))).f_A, p_TT), 0);
S_R23(&l_B_838, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_835))).f_B, p_TT), 0);
if (((l_A_837).f_OK && (((((*(R21 *)rt_nil_check(l_L_835))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_835))).f_IV == ((rt_int)3LL))))))
{
(l_A_837).f_V = rt_add((l_A_837).f_V, ((rt_int)1LL));
}
if (((l_B_838).f_OK && (((*(R21 *)rt_nil_check(l_L_835))).f_IV >= ((rt_int)2LL))))
{
(l_B_838).f_V = rt_sub((l_B_838).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_837, r_ENUM_MANIFEST(l_L_835, p_TT), 0);
S_R23(&l_B_838, l_A_837, 0);
}
if ((!(((l_A_837).f_OK && (l_B_838).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_835))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_837).f_V < l_LO_LIM_831) || ((l_B_838).f_V > l_HI_LIM_832)) || ((l_A_837).f_V > (l_B_838).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_835))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R21 * l_P_839; memset(&l_P_839, 0, sizeof l_P_839);
l_P_839 = l_LOS_829;
R21 * l_Q_840; memset(&l_Q_840, 0, sizeof l_Q_840);
l_Q_840 = l_HIS_830;
for (;;) {
if ((l_P_839 == NULL)) goto L_end841;
{
if ((((l_A_837).f_V <= ((*(R21 *)rt_nil_check(l_Q_840))).f_IV) && ((l_B_838).f_V >= ((*(R21 *)rt_nil_check(l_P_839))).f_IV)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_835))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_839 = ((*(R21 *)rt_nil_check(l_P_839))).f_NEXT;
l_Q_840 = ((*(R21 *)rt_nil_check(l_Q_840))).f_NEXT;
}
RT_B_TICK();
} L_end841: ;
}
{
R21 * l_P_842; memset(&l_P_842, 0, sizeof l_P_842);
l_P_842 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R21 * l_Q_843; memset(&l_Q_843, 0, sizeof l_Q_843);
l_Q_843 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(l_P_842))).f_IV = (l_A_837).f_V;
((*(R21 *)rt_nil_check(l_Q_843))).f_IV = (l_B_838).f_V;
((*(R21 *)rt_nil_check(l_P_842))).f_NEXT = l_LOS_829;
((*(R21 *)rt_nil_check(l_Q_843))).f_NEXT = l_HIS_830;
l_LOS_829 = l_P_842;
l_HIS_830 = l_Q_843;
}
}
l_L_835 = ((*(R21 *)rt_nil_check(l_L_835))).f_NEXT;
}
RT_B_TICK();
} L_end836: ;
}
l_S_828 = ((*(R21 *)rt_nil_check(l_S_828))).f_NEXT;
}
RT_B_TICK();
} L_end834: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_844; memset(&l_T_844, 0, sizeof l_T_844);
l_T_844 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_845; memset(&l_TAIL_845, 0, sizeof l_TAIL_845);
l_TAIL_845 = NULL;
((*(R22 *)rt_nil_check(l_T_844))).f_BASE = l_T_844;
((*(R22 *)rt_nil_check(l_T_844))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_844))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_844))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_844))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_844))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_844))).f_CNAME));
}
{
R21 * l_F_846; memset(&l_F_846, 0, sizeof l_F_846);
l_F_846 = p_FORMALS;
for (;;) {
if ((l_F_846 == NULL)) goto L_end847;
{
if ((!(((*(R21 *)rt_nil_check(l_F_846))).f_B == NULL)))
{
{
R22 * l_FT_848; memset(&l_FT_848, 0, sizeof l_FT_848);
l_FT_848 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_846))).f_B);
R21 * l_N_849; memset(&l_N_849, 0, sizeof l_N_849);
l_N_849 = ((*(R21 *)rt_nil_check(l_F_846))).f_A;
rt_int l_KIND_850; memset(&l_KIND_850, 0, sizeof l_KIND_850);
l_KIND_850 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_846))).f_IV == ((rt_int)1LL)))
{
l_KIND_850 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_848))) || (!(((*(R22 *)rt_nil_check(l_FT_848))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_846))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_849 == NULL)) goto L_end851;
{
r_ADD_FIELD(l_T_844, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_849))).f_NAME, l_FT_848, l_KIND_850), &l_TAIL_845);
l_N_849 = ((*(R21 *)rt_nil_check(l_N_849))).f_NEXT;
}
RT_B_TICK();
} L_end851: ;
}
}
l_F_846 = ((*(R21 *)rt_nil_check(l_F_846))).f_NEXT;
}
RT_B_TICK();
} L_end847: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_844, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_845);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_COMPLETE_RECORD(l_T_844);
{ R22 * rv852 = l_T_844;
return rv852; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_853; memset(&l_D_853, 0, sizeof l_D_853);
l_D_853 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_854; memset(&l_CLASS_854, 0, sizeof l_CLASS_854);
l_CLASS_854 = NULL;
R20 * l_TARGS_855; memset(&l_TARGS_855, 0, sizeof l_TARGS_855);
l_TARGS_855 = NULL;
R25 * l_VARGS_856; memset(&l_VARGS_856, 0, sizeof l_VARGS_856);
l_VARGS_856 = NULL;
R25 * l_VTAIL_857; memset(&l_VTAIL_857, 0, sizeof l_VTAIL_857);
l_VTAIL_857 = NULL;
R21 * l_A_858; memset(&l_A_858, 0, sizeof l_A_858);
l_A_858 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_859; memset(&l_F_859, 0, sizeof l_F_859);
l_F_859 = ((*(R21 *)rt_nil_check(l_D_853))).f_A;
for (;;) {
if ((l_F_859 == NULL)) goto L_end860;
{
{
R21 * l_N_861; memset(&l_N_861, 0, sizeof l_N_861);
l_N_861 = ((*(R21 *)rt_nil_check(l_F_859))).f_A;
for (;;) {
if ((l_N_861 == NULL)) goto L_end862;
{
if ((l_A_858 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_859))).f_B == NULL))
{
{
R20 * l_B_863; memset(&l_B_863, 0, sizeof l_B_863);
l_B_863 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_863)), ({ R20 rc864; memset(&rc864, 0, sizeof rc864);  S_R10(&rc864.f_NAME, ((*(R21 *)rt_nil_check(l_N_861))).f_NAME, 0); rc864.f_T = r_ARG_TYPE(l_A_858); S_R10(&rc864.f_C, r_NO_TEXT(), 0); rc864.f_HASMV = 0; rc864.f_MV = ((rt_int)0LL); rc864.f_R = NULL; rc864.f_NEXT = l_TARGS_855; rc864; }), 0);
l_TARGS_855 = l_B_863;
}
}
else
{
{
R25 * l_V_865; memset(&l_V_865, 0, sizeof l_V_865);
l_V_865 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_865)), ({ R25 rc866; memset(&rc866, 0, sizeof rc866);  S_R10(&rc866.f_LO, r_NO_TEXT(), 0); S_R10(&rc866.f_HI, r_NO_TEXT(), 0); S_R23(&rc866.f_MLO, r_NO_MVAL(), 0); S_R23(&rc866.f_MHI, r_NO_MVAL(), 0); rc866.f_ANYARG = 0; rc866.f_NEXT = NULL; rc866; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_858))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_859))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_858))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_865))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_858))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_865))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_865))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_858))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_865))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_865))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_858))).f_NAME, (((*(R21 *)rt_nil_check(l_A_858))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_867; memset(&l_FT_867, 0, sizeof l_FT_867);
l_FT_867 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_859))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_865))).f_LO, r_CONVERT(r_EXPR(l_A_858, l_FT_867), l_FT_867, ((*(R21 *)rt_nil_check(l_A_858))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_865))).f_MLO, r_ENUM_MANIFEST(l_A_858, l_FT_867), 0);
if ((((((*(R25 *)rt_nil_check(l_V_865))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_867))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_867))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_865))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_867))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_865))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_867))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_858))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R21 *)rt_nil_check(l_F_859))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_865))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_858))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_857 == NULL))
{
l_VARGS_856 = l_V_865;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_857))).f_NEXT = l_V_865;
}
l_VTAIL_857 = l_V_865;
}
}
l_A_858 = ((*(R21 *)rt_nil_check(l_A_858))).f_NEXT;
l_N_861 = ((*(R21 *)rt_nil_check(l_N_861))).f_NEXT;
}
RT_B_TICK();
} L_end862: ;
}
l_F_859 = ((*(R21 *)rt_nil_check(l_F_859))).f_NEXT;
}
RT_B_TICK();
} L_end860: ;
if ((!(l_A_858 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_868; memset(&l_R_868, 0, sizeof l_R_868);
l_R_868 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_868 == NULL)) goto L_end869;
{
if (((((*(R12 *)rt_nil_check(l_R_868))).f_DECL == l_D_853) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_868))).f_BINDINGS, l_TARGS_855)))
{
l_CLASS_854 = ((*(R12 *)rt_nil_check(l_R_868))).f_T;
goto L_end869;
}
l_R_868 = ((*(R12 *)rt_nil_check(l_R_868))).f_INSTANCES;
}
RT_B_TICK();
} L_end869: ;
}
if ((l_CLASS_854 == NULL))
{
{
R12 * l_R_870; memset(&l_R_870, 0, sizeof l_R_870);
l_R_870 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_871; memset(&l_B_871, 0, sizeof l_B_871);
l_B_871 = l_TARGS_855;
R20 * l_SAVED_872; memset(&l_SAVED_872, 0, sizeof l_SAVED_872);
l_SAVED_872 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_873; memset(&l_ENTERED_873, 0, sizeof l_ENTERED_873);
((*(R12 *)rt_nil_check(l_R_870))).f_DECL = l_D_853;
((*(R12 *)rt_nil_check(l_R_870))).f_BINDINGS = l_TARGS_855;
((*(R12 *)rt_nil_check(l_R_870))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_870;
l_ENTERED_873 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_871 == NULL)) goto L_end874;
{
{
R12 * l_TY_875; memset(&l_TY_875, 0, sizeof l_TY_875);
l_TY_875 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_871))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_875))).f_T = ((*(R20 *)rt_nil_check(l_B_871))).f_T;
r_DEFINE(l_TY_875, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_871 = ((*(R20 *)rt_nil_check(l_B_871))).f_NEXT;
}
RT_B_TICK();
} L_end874: ;
l_F_859 = ((*(R21 *)rt_nil_check(l_D_853))).f_A;
for (;;) {
if ((l_F_859 == NULL)) goto L_end876;
{
if ((!(((*(R21 *)rt_nil_check(l_F_859))).f_B == NULL)))
{
{
R21 * l_N_877; memset(&l_N_877, 0, sizeof l_N_877);
l_N_877 = ((*(R21 *)rt_nil_check(l_F_859))).f_A;
for (;;) {
if ((l_N_877 == NULL)) goto L_end878;
{
{
R12 * l_P_879; memset(&l_P_879, 0, sizeof l_P_879);
l_P_879 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_877))).f_NAME);
((*(R12 *)rt_nil_check(l_P_879))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_859))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_879))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_877))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_879))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_879))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_879, ((*(R21 *)rt_nil_check(l_F_859))).f_LINE);
}
l_N_877 = ((*(R21 *)rt_nil_check(l_N_877))).f_NEXT;
}
RT_B_TICK();
} L_end878: ;
}
}
l_F_859 = ((*(R21 *)rt_nil_check(l_F_859))).f_NEXT;
}
RT_B_TICK();
} L_end876: ;
if ((l_TARGS_855 == NULL))
{
l_CLASS_854 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_853))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_853))).f_A);
}
else
{
l_CLASS_854 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_853))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_853))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_854))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_870))).f_T = l_CLASS_854;
r_CLOSE_SCOPE();
if (l_ENTERED_873)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_872;
}
}
{
R22 * l_T_880; memset(&l_T_880, 0, sizeof l_T_880);
l_T_880 = r_COPY_TYP(l_CLASS_854);
((*(R22 *)rt_nil_check(l_T_880))).f_ARGS = l_VARGS_856;
{ R22 * rv881 = l_T_880;
return rv881; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_882; memset(&l_P_882, 0, sizeof l_P_882);
l_P_882 = p_A;
R20 * l_Q_883; memset(&l_Q_883, 0, sizeof l_Q_883);
l_Q_883 = p_B;
for (;;) {
if (((l_P_882 == NULL) || (l_Q_883 == NULL))) goto L_end884;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_882))).f_T, ((*(R20 *)rt_nil_check(l_Q_883))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_882))).f_T, ((*(R20 *)rt_nil_check(l_Q_883))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_882))).f_T, ((*(R20 *)rt_nil_check(l_Q_883))).f_T))))
{
{ rt_int rv885 = 0;
return rv885; }
}
l_P_882 = ((*(R20 *)rt_nil_check(l_P_882))).f_NEXT;
l_Q_883 = ((*(R20 *)rt_nil_check(l_Q_883))).f_NEXT;
}
RT_B_TICK();
} L_end884: ;
{ rt_int rv886 = ((l_P_882 == NULL) && (l_Q_883 == NULL));
return rv886; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_887; memset(&l_A_887, 0, sizeof l_A_887);
l_A_887 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_887 == NULL)) goto L_end888;
{
if (((*(R25 *)rt_nil_check(l_A_887))).f_ANYARG)
{
{ rt_int rv889 = 1;
return rv889; }
}
l_A_887 = ((*(R25 *)rt_nil_check(l_A_887))).f_NEXT;
}
RT_B_TICK();
} L_end888: ;
{ rt_int rv890 = 0;
return rv890; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_891; memset(&l_L_891, 0, sizeof l_L_891);
l_L_891 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_892; memset(&l_C_892, 0, sizeof l_C_892);
S_R10(&l_C_892, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_893; memset(&l_TF_893, 0, sizeof l_TF_893);
l_TF_893 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_891 == NULL)) goto L_end894;
{
if ((((*(R21 *)rt_nil_check(l_L_891))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_892, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_892, p_SELF, ((*(R24 *)rt_nil_check(l_TF_893))).f_CNAME), 0);
S_R10(&l_C_892, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_892, (r_EXPR(((*(R21 *)rt_nil_check(l_L_891))).f_A, ((*(R24 *)rt_nil_check(l_TF_893))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_893))).f_CNAME), 0);
S_R10(&l_C_892, r_FMT2(rt_str("@@)", 3), l_C_892, (r_EXPR(((*(R21 *)rt_nil_check(l_L_891))).f_B, ((*(R24 *)rt_nil_check(l_TF_893))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_892, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_892, p_SELF, ((*(R24 *)rt_nil_check(l_TF_893))).f_CNAME, (r_EXPR(l_L_891, ((*(R24 *)rt_nil_check(l_TF_893))).f_T)).f_C), 0);
}
l_L_891 = ((*(R21 *)rt_nil_check(l_L_891))).f_NEXT;
}
RT_B_TICK();
} L_end894: ;
{ R10 rv895 = r_FMT1(rt_str("(@)", 3), l_C_892);
return rv895; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_896; memset(&l_C_896, 0, sizeof l_C_896);
S_R10(&l_C_896, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_897; memset(&l_F_897, 0, sizeof l_F_897);
l_F_897 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_898; memset(&l_BODY_898, 0, sizeof l_BODY_898);
S_R10(&l_BODY_898, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_899; memset(&l_ASSIGN_899, 0, sizeof l_ASSIGN_899);
S_R10(&l_ASSIGN_899, r_MK(rt_str("", 0)), 0);
R10 l_COPY_900; memset(&l_COPY_900, 0, sizeof l_COPY_900);
S_R10(&l_COPY_900, r_MK(rt_str("", 0)), 0);
R10 l_EQ_901; memset(&l_EQ_901, 0, sizeof l_EQ_901);
S_R10(&l_EQ_901, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_897 == NULL)) goto L_end902;
{
S_R10(&l_BODY_898, r_FMT3(rt_str("@ @ @;", 6), l_BODY_898, r_CTYPE(((*(R24 *)rt_nil_check(l_F_897))).f_T), ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME), 0);
S_R10(&l_COPY_900, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_900, ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_897))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_897))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_899, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_899, ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_897))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_899, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_899, ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_899, r_FMT2(rt_str("@ @", 3), l_ASSIGN_899, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_897))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_897))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_901, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_901, r_VARIANT_COND(l_F_897, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_897))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_901, r_FMT2(rt_str("@ && @", 6), l_EQ_901, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_897))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_897))).f_CNAME))), 0);
}
l_F_897 = ((*(R24 *)rt_nil_check(l_F_897))).f_NEXT;
}
RT_B_TICK();
} L_end902: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_896, l_BODY_898));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_896, l_C_896, l_C_896));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_896, l_C_896, l_C_896));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_896, l_C_896, l_C_896, l_ASSIGN_899));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_896, l_C_896, l_C_896, l_EQ_901));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_896, l_C_896, l_C_896));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_896, l_C_896, l_C_896, l_C_896));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_900));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_903; memset(&l_ET_C_903, 0, sizeof l_ET_C_903);
S_R10(&l_ET_C_903, r_CTYPE(p_ELEM), 0);
R10 l_KEY_904; memset(&l_KEY_904, 0, sizeof l_KEY_904);
S_R10(&l_KEY_904, r_FMT3(rt_str("@/@/@", 5), l_ET_C_903, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_905; memset(&l_Y_905, 0, sizeof l_Y_905);
l_Y_905 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_905 == NULL)) goto L_end906;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_905))).f_NAME, l_KEY_904) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_905))).f_T, p_ELEM)))
{
{ R10 rv907 = ((*(R12 *)rt_nil_check(l_Y_905))).f_ACCESS;
return rv907; }
}
l_Y_905 = ((*(R12 *)rt_nil_check(l_Y_905))).f_INSTANCES;
}
RT_B_TICK();
} L_end906: ;
l_Y_905 = r_NEW_SYM(g_Y_TYPE, l_KEY_904);
((*(R12 *)rt_nil_check(l_Y_905))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_905))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_905))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_905;
{
R10 l_C_908; memset(&l_C_908, 0, sizeof l_C_908);
S_R10(&l_C_908, ((*(R12 *)rt_nil_check(l_Y_905))).f_ACCESS, 0);
R10 l_D_909; memset(&l_D_909, 0, sizeof l_D_909);
S_R10(&l_D_909, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_908, l_C_908));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_908, l_D_909, l_D_909, l_ET_C_903));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_908, l_C_908, l_C_908));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_908, l_C_908, l_C_908));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_908, l_C_908, l_C_908, l_D_909));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_909, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_908, l_C_908, l_C_908, l_D_909));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_909, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_908, l_C_908, l_C_908));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_908, l_C_908, l_C_908, l_C_908));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_909, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv910 = ((*(R12 *)rt_nil_check(l_Y_905))).f_ACCESS;
return rv910; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_911; memset(&l_K_911, 0, sizeof l_K_911);
l_K_911 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_911 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv912 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv912; }
}
{ R10 rv913 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv913; }
}
else if ((l_K_911 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv914 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv914; }
}
{ R10 rv915 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv915; }
}
else if ((l_K_911 == g_T_SEM))
{
{ R10 rv916 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv916; }
}
else if ((l_K_911 == g_T_ABS))
{
{ R10 rv917 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv917; }
}
else if ((l_K_911 == g_T_ARR))
{
{
R25 * l_B_918; memset(&l_B_918, 0, sizeof l_B_918);
l_B_918 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_919; memset(&l_I_919, 0, sizeof l_I_919);
l_I_919 = ((rt_int)0LL);
R10 l_R_920; memset(&l_R_920, 0, sizeof l_R_920);
S_R10(&l_R_920, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_918 == NULL)) goto L_end921;
{
S_R10(&l_R_920, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_920, p_LV, r_NUM(l_I_919), ((*(R25 *)rt_nil_check(l_B_918))).f_LO), 0);
S_R10(&l_R_920, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_920, p_LV, r_NUM(l_I_919), ((*(R25 *)rt_nil_check(l_B_918))).f_HI), 0);
l_I_919 = rt_add(l_I_919, ((rt_int)1LL));
l_B_918 = ((*(R25 *)rt_nil_check(l_B_918))).f_NEXT;
}
RT_B_TICK();
} L_end921: ;
S_R10(&l_R_920, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_920, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_920, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_920, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_922; memset(&l_IV_922, 0, sizeof l_IV_922);
S_R10(&l_IV_922, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_920, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_920, l_IV_922, l_IV_922, l_IV_922), 0);
S_R10(&l_R_920, r_FMT2(rt_str("@ @ }", 5), l_R_920, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_922))), 0);
}
}
{ R10 rv923 = r_CATS(l_R_920, rt_str(" }", 2));
return rv923; }
}
}
else if ((l_K_911 == g_T_REC))
{
{
R24 * l_F_924; memset(&l_F_924, 0, sizeof l_F_924);
l_F_924 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_925; memset(&l_A_925, 0, sizeof l_A_925);
l_A_925 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_926; memset(&l_R_926, 0, sizeof l_R_926);
S_R10(&l_R_926, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_924 == NULL)) goto L_end927;
{
if ((!(((*(R24 *)rt_nil_check(l_F_924))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_925 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_925))).f_ANYARG))
{
S_R10(&l_R_926, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_926, p_LV, ((*(R24 *)rt_nil_check(l_F_924))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_925))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_924))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_925))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R10(&l_R_926, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_926, p_LV, ((*(R24 *)rt_nil_check(l_F_924))).f_CNAME), 0);
}
l_A_925 = ((*(R25 *)rt_nil_check(l_A_925))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_924))).f_T))
{
S_R10(&l_R_926, r_FMT2(rt_str("@ @", 3), l_R_926, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_924))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_924))).f_CNAME)), p_LV)), 0);
}
l_F_924 = ((*(R24 *)rt_nil_check(l_F_924))).f_NEXT;
}
RT_B_TICK();
} L_end927: ;
{ R10 rv928 = l_R_926;
return rv928; }
}
}
{ R10 rv929 = r_NO_TEXT();
return rv929; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_930; memset(&l_K_930, 0, sizeof l_K_930);
l_K_930 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_930 == g_T_STR) || (l_K_930 == g_T_BITS)) || (l_K_930 == g_T_ARR)) || (l_K_930 == g_T_SEM)))
{
{ rt_int rv931 = 1;
return rv931; }
}
else if ((l_K_930 == g_T_ABS))
{
{ rt_int rv932 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv932; }
}
else if ((l_K_930 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv933 = 1;
return rv933; }
}
{
R24 * l_F_934; memset(&l_F_934, 0, sizeof l_F_934);
l_F_934 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_934 == NULL)) goto L_end935;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_934))).f_T))
{
{ rt_int rv936 = 1;
return rv936; }
}
l_F_934 = ((*(R24 *)rt_nil_check(l_F_934))).f_NEXT;
}
RT_B_TICK();
} L_end935: ;
}
}
{ rt_int rv937 = 0;
return rv937; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_938; memset(&l_K_938, 0, sizeof l_K_938);
l_K_938 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_938 == g_T_STR) || (l_K_938 == g_T_BITS)))
{
{ R10 rv939 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv939; }
}
else if ((l_K_938 == g_T_ABS))
{
{ R10 rv940 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv940; }
}
else if (((l_K_938 == g_T_ARR) || (l_K_938 == g_T_REC)))
{
{ R10 rv941 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv941; }
}
{ R10 rv942 = p_V;
return rv942; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_943; memset(&l_K_943, 0, sizeof l_K_943);
l_K_943 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_943 == g_T_STR) || (l_K_943 == g_T_BITS)))
{
{ R10 rv944 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv944; }
}
else if ((l_K_943 == g_T_ABS))
{
{ R10 rv945 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv945; }
}
else if ((l_K_943 == g_T_SEM))
{
{ R10 rv946 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv946; }
}
else if ((l_K_943 == g_T_ARR))
{
{ R10 rv947 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv947; }
}
else if ((l_K_943 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv948 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv948; }
}
{ R10 rv949 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv949; }
}
{ R10 rv950 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv950; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_951; memset(&l_K_951, 0, sizeof l_K_951);
l_K_951 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_951 == g_T_STR) || (l_K_951 == g_T_BITS)))
{
{ R10 rv952 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv952; }
}
else if ((l_K_951 == g_T_ABS))
{
{ R10 rv953 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv953; }
}
else if (((l_K_951 == g_T_ARR) || (l_K_951 == g_T_REC)))
{
{ R10 rv954 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv954; }
}
else if ((l_K_951 == g_T_SEM))
{
{ R10 rv955 = r_MK(rt_str("0", 1));
return rv955; }
}
{ R10 rv956 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv956; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv957 = p_V;
return rv957; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv958 = p_V;
return rv958; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv959 = p_V;
return rv959; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv960 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv960; }
}
{ R10 rv961 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv961; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv962 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv962; }
}
{ R10 rv963 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv963; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv964 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv964; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv965 = 1;
return rv965; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv966 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv966; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv967 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv967; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv968 = 0;
return rv968; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv969 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv969; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv970 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv970; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv971 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv971; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv972 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv972; }
}
{ rt_int rv973 = 1;
return rv973; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv974 = 1;
return rv974; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv975 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv975; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv976 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv976; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv977 = 0;
return rv977; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv978 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv978; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv979 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv979; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv980 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv980; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv981 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv981; }
}
{ rt_int rv982 = 1;
return rv982; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv983 = 0;
return rv983; }
}
{ rt_int rv984 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv984; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_985; memset(&l_P_985, 0, sizeof l_P_985);
l_P_985 = p_A;
R25 * l_Q_986; memset(&l_Q_986, 0, sizeof l_Q_986);
l_Q_986 = p_B;
for (;;) {
if (((l_P_985 == NULL) || (l_Q_986 == NULL))) goto L_end987;
{
if ((r_IS_GEN_ARG(l_P_985) || r_IS_GEN_ARG(l_Q_986)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_985))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_986))).f_ANYARG)))
{
{ rt_int rv988 = 0;
return rv988; }
}
if (((((*(R25 *)rt_nil_check(l_P_985))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_986))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_985))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_986))).f_MLO).f_V)))
{
{ rt_int rv989 = 0;
return rv989; }
}
}
l_P_985 = ((*(R25 *)rt_nil_check(l_P_985))).f_NEXT;
l_Q_986 = ((*(R25 *)rt_nil_check(l_Q_986))).f_NEXT;
}
RT_B_TICK();
} L_end987: ;
{ rt_int rv990 = ((l_P_985 == NULL) && (l_Q_986 == NULL));
return rv990; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_991; memset(&l_CS_991, 0, sizeof l_CS_991);
l_CS_991 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_992; memset(&l_T_992, 0, sizeof l_T_992);
rt_int l_LEV_993; memset(&l_LEV_993, 0, sizeof l_LEV_993);
if ((((*(R18 *)rt_nil_check(l_CS_991))).f_LEVEL == p_LEVEL))
{
{ R10 rv994 = r_MK(rt_str("F", 1));
return rv994; }
}
if (((*(R18 *)rt_nil_check(l_CS_991))).f_FRAMED)
{
S_R10(&l_T_992, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_992, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_993 = rt_sub(((*(R18 *)rt_nil_check(l_CS_991))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_993 <= p_LEVEL)) goto L_end995;
{
S_R10(&l_T_992, r_CATS(l_T_992, rt_str("->up", 4)), 0);
l_LEV_993 = rt_sub(l_LEV_993, ((rt_int)1LL));
}
RT_B_TICK();
} L_end995: ;
{ R10 rv996 = l_T_992;
return rv996; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv997 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv997; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv998 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv998; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv999 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv999; }
}
{ R10 rv1000 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1000; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_1001; memset(&l_CS_1001, 0, sizeof l_CS_1001);
l_CS_1001 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1002; memset(&l_T_1002, 0, sizeof l_T_1002);
l_T_1002 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_1003; memset(&l_CN_1003, 0, sizeof l_CN_1003);
if ((((*(R18 *)rt_nil_check(l_CS_1001))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_1003, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_1003, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1002), l_CN_1003));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1003, 0);
{ R10 rv1004 = l_CN_1003;
return rv1004; }
}
S_R10(&l_CN_1003, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1003, 0);
if (((*(R18 *)rt_nil_check(l_CS_1001))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1002), l_CN_1003), &((*(R18 *)rt_nil_check(l_CS_1001))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1003), 0);
{ R10 rv1005 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1005; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1002), l_CN_1003, l_CN_1003, l_CN_1003));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1003, 0);
{ R10 rv1006 = l_CN_1003;
return rv1006; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_1007; memset(&l_T_1007, 0, sizeof l_T_1007);
l_T_1007 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_1008; memset(&l_N_1008, 0, sizeof l_N_1008);
l_N_1008 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_1009; memset(&l_V_1009, 0, sizeof l_V_1009);
rt_int l_HAVE_V_1010; memset(&l_HAVE_V_1010, 0, sizeof l_HAVE_V_1010);
l_HAVE_V_1010 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1007))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1007))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1008 == NULL)) goto L_end1011;
{
{
R12 * l_Y_1012; memset(&l_Y_1012, 0, sizeof l_Y_1012);
l_Y_1012 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_1008))).f_NAME);
R10 l_CN_1013; memset(&l_CN_1013, 0, sizeof l_CN_1013);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1012))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1012))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1007) && (((*(R22 *)rt_nil_check(l_T_1007))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1014; memset(&l_M_1014, 0, sizeof l_M_1014);
S_R23(&l_M_1014, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1012))).f_HASMV = (l_M_1014).f_OK;
((*(R12 *)rt_nil_check(l_Y_1012))).f_MV = (l_M_1014).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1012))).f_T = l_T_1007;
S_R10(&l_CN_1013, r_NEW_OBJECT(l_Y_1012, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1007))
{
r_CODE(r_INIT_CODE(l_T_1007, l_CN_1013));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1010))
{
S_R26(&l_V_1009, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_1007), 0);
l_HAVE_V_1010 = 1;
}
r_CODE(r_STORE_CODE(l_T_1007, l_CN_1013, l_V_1009, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1012, ((*(R21 *)rt_nil_check(l_N_1008))).f_LINE);
}
l_N_1008 = ((*(R21 *)rt_nil_check(l_N_1008))).f_NEXT;
}
RT_B_TICK();
} L_end1011: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1015 = ({ R26 rc1016; memset(&rc1016, 0, sizeof rc1016);  S_R10(&rc1016.f_C, p_C, 0); rc1016.f_T = p_T; rc1016.f_LVAL = 0; S_R10(&rc1016.f_SELF, r_NO_TEXT(), 0); rc1016; });
return rv1015; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv1017 = ({ R26 rc1018; memset(&rc1018, 0, sizeof rc1018);  S_R10(&rc1018.f_C, p_C, 0); rc1018.f_T = p_T; rc1018.f_LVAL = p_LVAL; S_R10(&rc1018.f_SELF, p_SELF, 0); rc1018; });
return rv1017; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1019; memset(&l_T_1019, 0, sizeof l_T_1019);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1020 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1020; }
}
l_T_1019 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1019))).f_SCALE = p_SCALE;
{ R22 * rv1021 = l_T_1019;
return rv1021; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1022; memset(&l_T_1022, 0, sizeof l_T_1022);
l_T_1022 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_1022))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1022))).f_MLEN, p_M, 0);
{ R22 * rv1023 = l_T_1022;
return rv1023; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_1024; memset(&l_S_1024, 0, sizeof l_S_1024);
l_S_1024 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1024, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1025; memset(&l_AT_1025, 0, sizeof l_AT_1025);
l_AT_1025 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_1026; memset(&l_R_1026, 0, sizeof l_R_1026);
S_R10(&l_R_1026, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1028_lo = ((rt_int)0LL), it1028_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1028 = it1028_lo; it1028 <= it1028_hi; it1028++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1024, it1028, it1028), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1024, it1028, it1028), rt_str("\\", 1))))
{
S_R10(&l_R_1026, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1024, it1028, it1028))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1024, it1028, it1028), rt_str("\?", 1)))
{
S_R10(&l_R_1026, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1029; memset(&l_C_1029, 0, sizeof l_C_1029);
l_C_1029 = r_CODE_OF(rt_b_slice(l_S_1024, it1028, it1028));
if (({ rt_int iv1030 = l_C_1029; (((rt_int)32LL) <= iv1030) && (iv1030 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_1026, r_MK(rt_b_slice(l_S_1024, it1028, it1028)), 0);
}
else
{
S_R10(&l_R_1026, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1029, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1029, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1029, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1028 == it1028_hi) break;
} } L_end1027: ;
S_R10(&l_R_1026, r_MK(rt_str("\"", 1)), 0);
{ R10 rv1031 = ({ R10 rc1032; memset(&rc1032, 0, sizeof rc1032);  rc1032.f_AT = l_AT_1025; rc1032.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1025); rc1032.f_H = rt_neg(((rt_int)1LL)); rc1032; });
return rv1031; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_1033; memset(&l_K_1033, 0, sizeof l_K_1033);
l_K_1033 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1034; memset(&l_NO_1034, 0, sizeof l_NO_1034);
S_R23(&l_NO_1034, ({ R23 rc1035; memset(&rc1035, 0, sizeof rc1035);  rc1035.f_OK = 0; rc1035.f_V = ((rt_int)0LL); rc1035; }), 0);
if ((l_K_1033 == g_N_INT))
{
{ R23 rv1036 = ({ R23 rc1037; memset(&rc1037, 0, sizeof rc1037);  rc1037.f_OK = 1; rc1037.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1037; });
return rv1036; }
}
else if ((l_K_1033 == g_N_PAREN))
{
{ R23 rv1038 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv1038; }
}
else if ((l_K_1033 == g_N_BOOL))
{
{ R23 rv1039 = ({ R23 rc1040; memset(&rc1040, 0, sizeof rc1040);  rc1040.f_OK = 1; rc1040.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1040; });
return rv1039; }
}
else if ((l_K_1033 == g_N_UNOP))
{
{
R23 l_A_1041; memset(&l_A_1041, 0, sizeof l_A_1041);
S_R23(&l_A_1041, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1041).f_OK))
{
{ R23 rv1042 = l_NO_1034;
return rv1042; }
}
{ R23 rv1043 = ({ R23 rc1044; memset(&rc1044, 0, sizeof rc1044);  rc1044.f_OK = 1; rc1044.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1041).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1044; });
return rv1043; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1045 = l_A_1041;
return rv1045; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1046 = ({ R23 rc1047; memset(&rc1047, 0, sizeof rc1047);  rc1047.f_OK = (l_A_1041).f_OK; rc1047.f_V = rt_sub(((rt_int)1LL), (l_A_1041).f_V); rc1047; });
return rv1046; }
}
}
}
else if ((l_K_1033 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1048 = l_NO_1034;
return rv1048; }
}
{
R23 l_A_1049; memset(&l_A_1049, 0, sizeof l_A_1049);
S_R23(&l_A_1049, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1050; memset(&l_B_1050, 0, sizeof l_B_1050);
S_R23(&l_B_1050, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1051; memset(&l_OP_1051, 0, sizeof l_OP_1051);
S_R10(&l_OP_1051, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1051, rt_str("&", 1)))
{
if (((((l_A_1049).f_OK && ((l_A_1049).f_V == ((rt_int)0LL)))) || (((l_B_1050).f_OK && ((l_B_1050).f_V == ((rt_int)0LL))))))
{
{ R23 rv1052 = ({ R23 rc1053; memset(&rc1053, 0, sizeof rc1053);  rc1053.f_OK = 1; rc1053.f_V = ((rt_int)0LL); rc1053; });
return rv1052; }
}
if (((l_A_1049).f_OK && (l_B_1050).f_OK))
{
{ R23 rv1054 = ({ R23 rc1055; memset(&rc1055, 0, sizeof rc1055);  rc1055.f_OK = 1; rc1055.f_V = ((rt_int)1LL); rc1055; });
return rv1054; }
}
{ R23 rv1056 = l_NO_1034;
return rv1056; }
}
else if (r_TEQS(l_OP_1051, rt_str("!", 1)))
{
if (((((l_A_1049).f_OK && ((l_A_1049).f_V == ((rt_int)1LL)))) || (((l_B_1050).f_OK && ((l_B_1050).f_V == ((rt_int)1LL))))))
{
{ R23 rv1057 = ({ R23 rc1058; memset(&rc1058, 0, sizeof rc1058);  rc1058.f_OK = 1; rc1058.f_V = ((rt_int)1LL); rc1058; });
return rv1057; }
}
if (((l_A_1049).f_OK && (l_B_1050).f_OK))
{
{ R23 rv1059 = ({ R23 rc1060; memset(&rc1060, 0, sizeof rc1060);  rc1060.f_OK = 1; rc1060.f_V = ((rt_int)0LL); rc1060; });
return rv1059; }
}
{ R23 rv1061 = l_NO_1034;
return rv1061; }
}
if ((!(((l_A_1049).f_OK && (l_B_1050).f_OK))))
{
{ R23 rv1062 = l_NO_1034;
return rv1062; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1063 = l_NO_1034;
return rv1063; }
}
if (((r_TEQS(l_OP_1051, rt_str("+", 1)) || r_TEQS(l_OP_1051, rt_str("-", 1))) || r_TEQS(l_OP_1051, rt_str("*", 1))))
{
{ R23 rv1064 = ({ R23 rc1065; memset(&rc1065, 0, sizeof rc1065);  rc1065.f_OK = 1; rc1065.f_V = r_MANIFEST_ARITH(l_OP_1051, (l_A_1049).f_V, (l_B_1050).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1065; });
return rv1064; }
}
else if ((r_TEQS(l_OP_1051, rt_str("//", 2)) && (!((l_B_1050).f_V == ((rt_int)0LL)))))
{
{ R23 rv1066 = ({ R23 rc1067; memset(&rc1067, 0, sizeof rc1067);  rc1067.f_OK = 1; rc1067.f_V = rt_quot((l_A_1049).f_V, (l_B_1050).f_V); rc1067; });
return rv1066; }
}
else if ((r_TEQS(l_OP_1051, rt_str("MOD", 3)) && (!((l_B_1050).f_V == ((rt_int)0LL)))))
{
{ R23 rv1068 = ({ R23 rc1069; memset(&rc1069, 0, sizeof rc1069);  rc1069.f_OK = 1; rc1069.f_V = rt_rem((l_A_1049).f_V, (l_B_1050).f_V); rc1069; });
return rv1068; }
}
else if (r_TEQS(l_OP_1051, rt_str("=", 1)))
{
{ R23 rv1070 = ({ R23 rc1071; memset(&rc1071, 0, sizeof rc1071);  rc1071.f_OK = 1; rc1071.f_V = r_BOOL_INT(((l_A_1049).f_V == (l_B_1050).f_V)); rc1071; });
return rv1070; }
}
else if (r_TEQS(l_OP_1051, rt_str("<>", 2)))
{
{ R23 rv1072 = ({ R23 rc1073; memset(&rc1073, 0, sizeof rc1073);  rc1073.f_OK = 1; rc1073.f_V = r_BOOL_INT((!((l_A_1049).f_V == (l_B_1050).f_V))); rc1073; });
return rv1072; }
}
else if (r_TEQS(l_OP_1051, rt_str("<", 1)))
{
{ R23 rv1074 = ({ R23 rc1075; memset(&rc1075, 0, sizeof rc1075);  rc1075.f_OK = 1; rc1075.f_V = r_BOOL_INT(((l_A_1049).f_V < (l_B_1050).f_V)); rc1075; });
return rv1074; }
}
else if (r_TEQS(l_OP_1051, rt_str(">", 1)))
{
{ R23 rv1076 = ({ R23 rc1077; memset(&rc1077, 0, sizeof rc1077);  rc1077.f_OK = 1; rc1077.f_V = r_BOOL_INT(((l_A_1049).f_V > (l_B_1050).f_V)); rc1077; });
return rv1076; }
}
else if (r_TEQS(l_OP_1051, rt_str("<=", 2)))
{
{ R23 rv1078 = ({ R23 rc1079; memset(&rc1079, 0, sizeof rc1079);  rc1079.f_OK = 1; rc1079.f_V = r_BOOL_INT(((l_A_1049).f_V <= (l_B_1050).f_V)); rc1079; });
return rv1078; }
}
else if (r_TEQS(l_OP_1051, rt_str(">=", 2)))
{
{ R23 rv1080 = ({ R23 rc1081; memset(&rc1081, 0, sizeof rc1081);  rc1081.f_OK = 1; rc1081.f_V = r_BOOL_INT(((l_A_1049).f_V >= (l_B_1050).f_V)); rc1081; });
return rv1080; }
}
}
}
else if ((l_K_1033 == g_N_IN))
{
{
R23 l_A_1082; memset(&l_A_1082, 0, sizeof l_A_1082);
S_R23(&l_A_1082, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1083; memset(&l_L_1083, 0, sizeof l_L_1083);
S_R23(&l_L_1083, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1084; memset(&l_U_1084, 0, sizeof l_U_1084);
S_R23(&l_U_1084, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1085; memset(&l_LO_1085, 0, sizeof l_LO_1085);
rt_int l_HI_1086; memset(&l_HI_1086, 0, sizeof l_HI_1086);
if ((!(((((l_A_1082).f_OK && (l_L_1083).f_OK) && (l_U_1084).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1087 = l_NO_1034;
return rv1087; }
}
l_LO_1085 = (l_L_1083).f_V;
l_HI_1086 = (l_U_1084).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1085 = rt_add(l_LO_1085, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1086 = rt_sub(l_HI_1086, ((rt_int)1LL));
}
{ R23 rv1088 = ({ R23 rc1089; memset(&rc1089, 0, sizeof rc1089);  rc1089.f_OK = 1; rc1089.f_V = r_BOOL_INT((((l_A_1082).f_V >= l_LO_1085) && ((l_A_1082).f_V <= l_HI_1086))); rc1089; });
return rv1088; }
}
}
else if (((l_K_1033 == g_N_NAME) || (l_K_1033 == g_TS_GEN)))
{
{
R12 * l_Y_1090; memset(&l_Y_1090, 0, sizeof l_Y_1090);
l_Y_1090 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1091; memset(&l_B_1091, 0, sizeof l_B_1091);
l_B_1091 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1091 == NULL)) goto L_end1092;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1091))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1091))).f_HASMV))
{
{ R23 rv1093 = ({ R23 rc1094; memset(&rc1094, 0, sizeof rc1094);  rc1094.f_OK = 1; rc1094.f_V = ((*(R20 *)rt_nil_check(l_B_1091))).f_MV; rc1094; });
return rv1093; }
}
l_B_1091 = ((*(R20 *)rt_nil_check(l_B_1091))).f_NEXT;
}
RT_B_TICK();
} L_end1092: ;
if ((!(l_Y_1090 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1090))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1090))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1090))).f_HASMV))
{
{ R23 rv1095 = ({ R23 rc1096; memset(&rc1096, 0, sizeof rc1096);  rc1096.f_OK = 1; rc1096.f_V = ((*(R12 *)rt_nil_check(l_Y_1090))).f_MV; rc1096; });
return rv1095; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1090))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1097 = ({ R23 rc1098; memset(&rc1098, 0, sizeof rc1098);  rc1098.f_OK = 1; rc1098.f_V = ((*(R12 *)rt_nil_check(l_Y_1090))).f_MV; rc1098; });
return rv1097; }
}
}
}
}
}
else if ((l_K_1033 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1099 = ({ R23 rc1100; memset(&rc1100, 0, sizeof rc1100);  rc1100.f_OK = 1; rc1100.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1100; });
return rv1099; }
}
}
else if ((l_K_1033 == g_N_FIELD))
{
{ R23 rv1101 = r_ATTR_MANIFEST(p_E);
return rv1101; }
}
else if ((l_K_1033 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1102 = ({ R23 rc1103; memset(&rc1103, 0, sizeof rc1103);  rc1103.f_OK = 1; rc1103.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1103; });
return rv1102; }
}
}
{ R23 rv1104 = l_NO_1034;
return rv1104; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1105; memset(&l_A_1105, 0, sizeof l_A_1105);
l_A_1105 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1106; memset(&l_NAME_1106, 0, sizeof l_NAME_1106);
S_R10(&l_NAME_1106, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1107; memset(&l_T_1107, 0, sizeof l_T_1107);
l_T_1107 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1105))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1108; memset(&l_INNER_1108, 0, sizeof l_INNER_1108);
l_INNER_1108 = ((*(R21 *)rt_nil_check(l_A_1105))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1108))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1106, rt_str("MAX", 3)))
{
{ R23 rv1109 = r_SOME(r_MAX_LENGTH());
return rv1109; }
}
else if (r_TEQS(l_NAME_1106, rt_str("MIN", 3)))
{
{ R23 rv1110 = r_SOME(((rt_int)0LL));
return rv1110; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1108))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1108))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1106, rt_str("MAX", 3)))
{
{ R23 rv1111 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1111; }
}
else if (r_TEQS(l_NAME_1106, rt_str("MIN", 3)))
{
{ R23 rv1112 = r_SOME(((rt_int)1LL));
return rv1112; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1108))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1106, rt_str("MAX", 3)))
{
{ R23 rv1113 = r_SOME(((rt_int)1000LL));
return rv1113; }
}
else if (r_TEQS(l_NAME_1106, rt_str("MIN", 3)))
{
{ R23 rv1114 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1114; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1108))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1106, rt_str("MAX", 3)))
{
{ R23 rv1115 = r_SOME(((rt_int)1000LL));
return rv1115; }
}
else if (r_TEQS(l_NAME_1106, rt_str("MIN", 3)))
{
{ R23 rv1116 = r_SOME(((rt_int)2LL));
return rv1116; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1117; memset(&l_Y_1117, 0, sizeof l_Y_1117);
l_Y_1117 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1105))).f_NAME);
if ((l_Y_1117 == NULL))
{
{ R23 rv1118 = r_NO_MVAL();
return rv1118; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1117))).f_KIND == g_Y_TYPE))
{
l_T_1107 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1105))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1105))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1117))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1117))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1117))).f_KIND == g_Y_GEN)))
{
l_T_1107 = ((*(R12 *)rt_nil_check(l_Y_1117))).f_T;
}
else
{
{ R23 rv1119 = r_NO_MVAL();
return rv1119; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1106, rt_str("MIN", 3)) || r_TEQS(l_NAME_1106, rt_str("MAX", 3))))
{
{ R23 rv1120 = r_SOME(((*(R21 *)rt_nil_check(l_A_1105))).f_IV);
return rv1120; }
}
l_T_1107 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1105))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1105))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1106, rt_str("MIN", 3)) || r_TEQS(l_NAME_1106, rt_str("MAX", 3))))))
{
{ R23 rv1121 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1105))).f_A))).f_IV);
return rv1121; }
}
}
{
R14 l_SAVED_CODE_1122; memset(&l_SAVED_CODE_1122, 0, sizeof l_SAVED_CODE_1122);
S_R14(&l_SAVED_CODE_1122, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1123; memset(&rc1123, 0, sizeof rc1123);  rc1123.f_HEAD = NULL; rc1123.f_TAIL = NULL; rc1123; }), 0);
l_T_1107 = (r_EXPR(l_A_1105, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1122, 0);
}
}
else
{
{ R23 rv1124 = r_NO_MVAL();
return rv1124; }
}
if ((l_T_1107 == NULL))
{
{ R23 rv1125 = r_NO_MVAL();
return rv1125; }
}
{ R23 rv1126 = r_TYPE_ATTR_MANIFEST(l_T_1107, l_NAME_1106);
return rv1126; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1127; memset(&l_T_1127, 0, sizeof l_T_1127);
l_T_1127 = r_REAL_TYPE(p_T0);
rt_int l_K_1128; memset(&l_K_1128, 0, sizeof l_K_1128);
l_K_1128 = ((*(R22 *)rt_nil_check(l_T_1127))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1129 = r_STATIC_SIZE(p_T0);
return rv1129; }
}
if ((l_K_1128 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1130 = r_SOME(((*(R22 *)rt_nil_check(l_T_1127))).f_SCALE);
return rv1130; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1131 = r_SOME(((rt_int)2LL));
return rv1131; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1127))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1132 = ((*(R22 *)rt_nil_check(l_T_1127))).f_MLO;
return rv1132; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1127))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1133 = ((*(R22 *)rt_nil_check(l_T_1127))).f_MHI;
return rv1133; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1127))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1134 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1134; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1127))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1135 = r_SOME(INT64_MAX);
return rv1135; }
}
}
else if ((l_K_1128 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1136 = r_SOME(((*(R22 *)rt_nil_check(l_T_1127))).f_SCALE);
return rv1136; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1137 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1127))).f_SCALE));
return rv1137; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1138 = r_SOME(((rt_int)2LL));
return rv1138; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1139 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1127))).f_SCALE, p_NAME));
return rv1139; }
}
}
else if ((l_K_1128 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1127))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1140 = ((*(R22 *)rt_nil_check(l_T_1127))).f_MLO;
return rv1140; }
}
{ R23 rv1141 = r_SOME(((rt_int)0LL));
return rv1141; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1127))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1142 = ((*(R22 *)rt_nil_check(l_T_1127))).f_MHI;
return rv1142; }
}
{ R23 rv1143 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1127))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1143; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1127))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1144 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1127))).f_BASE))).f_NLITS);
return rv1144; }
}
if (((((*(R22 *)rt_nil_check(l_T_1127))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1127))).f_MHI).f_OK))
{
{ R23 rv1145 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1127))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1127))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1145; }
}
}
}
else if (((l_K_1128 == g_T_STR) || (l_K_1128 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1146 = ((*(R22 *)rt_nil_check(l_T_1127))).f_MLEN;
return rv1146; }
}
}
else if ((l_K_1128 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1147 = r_SOME(((*(R22 *)rt_nil_check(l_T_1127))).f_DIMS);
return rv1147; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1127))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1127))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1127))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1148 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1127))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1127))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1148; }
}
}
}
else if ((l_K_1128 == g_T_REC))
{
{
R24 * l_F_1149; memset(&l_F_1149, 0, sizeof l_F_1149);
l_F_1149 = ((*(R22 *)rt_nil_check(l_T_1127))).f_FIELDS;
R25 * l_B_1150; memset(&l_B_1150, 0, sizeof l_B_1150);
l_B_1150 = ((*(R22 *)rt_nil_check(l_T_1127))).f_ARGS;
for (;;) {
if (((l_F_1149 == NULL) || (l_B_1150 == NULL))) goto L_end1151;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1149))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1149))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1150))).f_ANYARG)
{
{ R23 rv1152 = r_NO_MVAL();
return rv1152; }
}
{ R23 rv1153 = ((*(R25 *)rt_nil_check(l_B_1150))).f_MLO;
return rv1153; }
}
l_B_1150 = ((*(R25 *)rt_nil_check(l_B_1150))).f_NEXT;
}
l_F_1149 = ((*(R24 *)rt_nil_check(l_F_1149))).f_NEXT;
}
RT_B_TICK();
} L_end1151: ;
}
}
{ R23 rv1154 = r_NO_MVAL();
return rv1154; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1155 = ((rt_int)0LL);
{ rt_frame xf1156; if (RT_TRY(xf1156)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1155 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1155 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1155 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1156); } else { RT_POP(xf1156); int xf1156x = rt_xcur;
if (0 || xf1156x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1156x); } }
{ rt_int rv1157 = F->l_R_1155;
return rv1157; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1158 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1158; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1159 = ((rt_int)1LL);
return rv1159; }
}
{ rt_int rv1160 = ((rt_int)0LL);
return rv1160; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1161; memset(&l_K_1161, 0, sizeof l_K_1161);
l_K_1161 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1161 == g_N_INT))
{
{ R26 rv1162 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1162; }
}
else if ((l_K_1161 == g_N_REAL))
{
{ R26 rv1163 = r_REAL_LITERAL(p_E);
return rv1163; }
}
else if ((l_K_1161 == g_N_BOOL))
{
{ R26 rv1164 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1164; }
}
else if ((l_K_1161 == g_N_NIL))
{
{ R26 rv1165 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1165; }
}
else if ((l_K_1161 == g_N_PAREN))
{
{
R26 l_V_1166; memset(&l_V_1166, 0, sizeof l_V_1166);
S_R26(&l_V_1166, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1166).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1166).f_C), 0);
{ R26 rv1167 = l_V_1166;
return rv1167; }
}
}
else if ((l_K_1161 == g_N_STR))
{
{ R26 rv1168 = r_STRING_LITERAL(p_E);
return rv1168; }
}
else if ((l_K_1161 == g_N_BITS))
{
{ R26 rv1169 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1169; }
}
else if ((l_K_1161 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1170 = r_NAME_EXPR(p_E, p_WANT);
return rv1170; }
}
{ R26 rv1171 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1171; }
}
else if ((l_K_1161 == g_N_RECCONS))
{
{ R26 rv1172 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1172; }
}
else if ((l_K_1161 == g_N_ARRCONS))
{
{ R26 rv1173 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1173; }
}
else if ((l_K_1161 == g_N_TYPESPEC))
{
{ R26 rv1174 = r_TYPE_SPECIFIER(p_E);
return rv1174; }
}
else if ((l_K_1161 == g_N_QUAL))
{
{
rt_int l_SAVED_1175; memset(&l_SAVED_1175, 0, sizeof l_SAVED_1175);
l_SAVED_1175 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1176; memset(&l_SAVED_Q_1176, 0, sizeof l_SAVED_Q_1176);
l_SAVED_Q_1176 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1177; memset(&l_V_1177, 0, sizeof l_V_1177);
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
R23 l_P_1178; memset(&l_P_1178, 0, sizeof l_P_1178);
S_R23(&l_P_1178, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1177, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1175;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1176;
{ R26 rv1179 = l_V_1177;
return rv1179; }
}
}
else if ((l_K_1161 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1180; memset(&l_N_1180, 0, sizeof l_N_1180);
l_N_1180 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1180))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1180))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1181 = r_EXPR(l_N_1180, p_WANT);
return rv1181; }
}
}
{ R26 rv1182 = r_NEW_EXPR(p_E, p_WANT);
return rv1182; }
}
else if ((l_K_1161 == g_N_NAME))
{
{ R26 rv1183 = r_NAME_EXPR(p_E, p_WANT);
return rv1183; }
}
else if ((l_K_1161 == g_N_APPLY))
{
{
R12 * l_Y_1184; memset(&l_Y_1184, 0, sizeof l_Y_1184);
l_Y_1184 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1184 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1184))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1184))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1185; memset(&l_N_1185, 0, sizeof l_N_1185);
l_N_1185 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1186; memset(&l_A_1186, 0, sizeof l_A_1186);
l_A_1186 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1186))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1185))).f_A = l_A_1186;
((*(R21 *)rt_nil_check(l_N_1185))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1187 = r_EXPR(l_N_1185, p_WANT);
return rv1187; }
}
}
}
{ R26 rv1188 = r_CALL_EXPR(p_E, p_WANT);
return rv1188; }
}
}
else if ((l_K_1161 == g_N_FIELD))
{
{ R26 rv1189 = r_FIELD_EXPR(p_E);
return rv1189; }
}
else if ((l_K_1161 == g_N_DEREF))
{
{
R26 l_B_1190; memset(&l_B_1190, 0, sizeof l_B_1190);
S_R26(&l_B_1190, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1190).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1191; memset(&l_TT_1191, 0, sizeof l_TT_1191);
l_TT_1191 = r_TARGET((l_B_1190).f_T);
{ R26 rv1192 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1191), (l_B_1190).f_C), l_TT_1191, 1, r_NO_TEXT());
return rv1192; }
}
}
}
else if ((l_K_1161 == g_N_INDEX))
{
{ R26 rv1193 = r_INDEX_EXPR(p_E);
return rv1193; }
}
else if ((l_K_1161 == g_N_SUBSTR))
{
{
R26 l_B_1194; memset(&l_B_1194, 0, sizeof l_B_1194);
S_R26(&l_B_1194, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1195; memset(&l_BT_1195, 0, sizeof l_BT_1195);
l_BT_1195 = r_REAL_TYPE((l_B_1194).f_T);
R10 l_LO_1196; memset(&l_LO_1196, 0, sizeof l_LO_1196);
R10 l_HI_1197; memset(&l_HI_1197, 0, sizeof l_HI_1197);
if (((((*(R22 *)rt_nil_check((l_B_1194).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1198; memset(&l_ARGS_1198, 0, sizeof l_ARGS_1198);
l_ARGS_1198 = r_VAL_ARG(l_B_1194, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1199; memset(&l_Y_1199, 0, sizeof l_Y_1199);
l_Y_1199 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1198, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1199 == NULL)))
{
{ R26 rv1200 = r_CALL_SYM(l_Y_1199, l_ARGS_1198, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1200; }
}
if ((((*(R22 *)rt_nil_check((l_B_1194).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1195))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1195))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1196, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1197, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1195))).f_KIND == g_T_BITS))
{
{ R26 rv1201 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1194).f_C, l_LO_1196, l_HI_1197), r_BITS_TYPE(((rt_int)1LL)));
return rv1201; }
}
{
R22 * l_T_1202; memset(&l_T_1202, 0, sizeof l_T_1202);
l_T_1202 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1202))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1195))).f_BASE;
{ R26 rv1203 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1194).f_C, l_LO_1196, l_HI_1197), l_T_1202);
return rv1203; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1195))).f_KIND == g_T_BITS))
{
{ R26 rv1204 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1194).f_C, l_LO_1196, l_HI_1197), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1204; }
}
{
R22 * l_T_1205; memset(&l_T_1205, 0, sizeof l_T_1205);
l_T_1205 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1205))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1195))).f_BASE;
{ R26 rv1206 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1194).f_C, l_LO_1196, l_HI_1197), l_T_1205);
return rv1206; }
}
}
}
else if ((l_K_1161 == g_N_UNOP))
{
{ R26 rv1207 = r_UNARY(p_E);
return rv1207; }
}
else if ((l_K_1161 == g_N_BINOP))
{
{ R26 rv1208 = r_BINARY(p_E);
return rv1208; }
}
else if ((l_K_1161 == g_N_IN))
{
{ R26 rv1209 = r_IN_EXPR(p_E);
return rv1209; }
}
else if (((l_K_1161 == g_N_ANY) || (l_K_1161 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1161 == g_TS_GEN))
{
{
R21 * l_N_1210; memset(&l_N_1210, 0, sizeof l_N_1210);
l_N_1210 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1210))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1210))).f_NAME))
{
{ R26 rv1211 = r_NAME_EXPR(l_N_1210, p_WANT);
return rv1211; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1161 == g_TS_NAME) || (l_K_1161 == g_TS_ARRAY)) || (l_K_1161 == g_TS_RECORD)) || (l_K_1161 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1212; memset(&l_SAVED_1212, 0, sizeof l_SAVED_1212);
l_SAVED_1212 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1213; memset(&l_SAVED_Q_1213, 0, sizeof l_SAVED_Q_1213);
l_SAVED_Q_1213 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1214; memset(&l_V_1214, 0, sizeof l_V_1214);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1214, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1212;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1213;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1214).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1215 = (l_V_1214).f_C;
return rv1215; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1214).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1214).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1214).f_T));
}
{ R10 rv1216 = (l_V_1214).f_C;
return rv1216; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1217; memset(&l_V_1217, 0, sizeof l_V_1217);
S_R26(&l_V_1217, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1217).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1217).f_T));
}
{ R10 rv1218 = (l_V_1217).f_C;
return rv1218; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1219; memset(&l_T_1219, 0, sizeof l_T_1219);
l_T_1219 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1219))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1219))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1220 = l_T_1219;
return rv1220; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1221; memset(&l_T_1221, 0, sizeof l_T_1221);
S_R10(&l_T_1221, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1222; memset(&l_S_1222, 0, sizeof l_S_1222);
l_S_1222 = rt_b_str_new((l_T_1221).f_LEN, 0);
rt_b_assign(&l_S_1222, r_STR(l_T_1221, (l_T_1221).f_LEN));
rt_int l_POINT_1223; memset(&l_POINT_1223, 0, sizeof l_POINT_1223);
l_POINT_1223 = 0;
rt_int l_DIGITS_1224; memset(&l_DIGITS_1224, 0, sizeof l_DIGITS_1224);
l_DIGITS_1224 = ((rt_int)0LL);
{ rt_int it1226_lo = ((rt_int)0LL), it1226_hi = rt_sub((l_T_1221).f_LEN, ((rt_int)1LL));
for (rt_int it1226 = it1226_lo; it1226 <= it1226_hi; it1226++) {
{
if (rt_b_eq(rt_b_slice(l_S_1222, it1226, it1226), rt_str(".", 1)))
{
l_POINT_1223 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1222, it1226, it1226), rt_str("E", 1)))
{
goto L_end1225;
}
else
{
l_DIGITS_1224 = rt_add(l_DIGITS_1224, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1226 == it1226_hi) break;
} } L_end1225: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1223)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1227 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1221), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1227; }
}
if ((!l_POINT_1223))
{
{ R26 rv1228 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1221)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1228; }
}
{
R22 * l_F_1229; memset(&l_F_1229, 0, sizeof l_F_1229);
l_F_1229 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1230; memset(&l_C_1230, 0, sizeof l_C_1230);
S_R10(&l_C_1230, l_T_1221, 0);
((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE = r_MAX_INT(l_DIGITS_1224, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1222, rt_sub((l_T_1221).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1221).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1230, r_FMT1(rt_str("@0", 2), l_T_1221), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1222, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1230, r_FMT1(rt_str("0@", 2), l_T_1221), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1229))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1231 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1230), l_F_1229);
return rv1231; }
}
{ R26 rv1232 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1230), l_F_1229);
return rv1232; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1233; memset(&l_T_1233, 0, sizeof l_T_1233);
S_R10(&l_T_1233, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1234; memset(&l_S_1234, 0, sizeof l_S_1234);
l_S_1234 = rt_b_str_new((l_T_1233).f_LEN, 0);
rt_b_assign(&l_S_1234, r_STR(l_T_1233, (l_T_1233).f_LEN));
rt_int l_INT_1235; memset(&l_INT_1235, 0, sizeof l_INT_1235);
l_INT_1235 = ((rt_int)0LL);
rt_int l_SIG_1236; memset(&l_SIG_1236, 0, sizeof l_SIG_1236);
l_SIG_1236 = 0;
rt_int l_POINT_1237; memset(&l_POINT_1237, 0, sizeof l_POINT_1237);
l_POINT_1237 = 0;
rt_int l_LEAD_1238; memset(&l_LEAD_1238, 0, sizeof l_LEAD_1238);
l_LEAD_1238 = ((rt_int)0LL);
rt_int l_I_1239; memset(&l_I_1239, 0, sizeof l_I_1239);
l_I_1239 = ((rt_int)0LL);
rt_int l_EXP_1240; memset(&l_EXP_1240, 0, sizeof l_EXP_1240);
l_EXP_1240 = ((rt_int)0LL);
for (;;) {
if ((l_I_1239 >= (l_T_1233).f_LEN)) goto L_end1241;
{
if (rt_b_eq(rt_b_slice(l_S_1234, l_I_1239, l_I_1239), rt_str("E", 1)))
{
goto L_end1241;
}
else if (rt_b_eq(rt_b_slice(l_S_1234, l_I_1239, l_I_1239), rt_str(".", 1)))
{
l_POINT_1237 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1234, l_I_1239, l_I_1239), rt_str("0", 1))))
{
if ((!l_POINT_1237))
{
l_INT_1235 = rt_add(l_INT_1235, ((rt_int)1LL));
}
l_SIG_1236 = 1;
}
else if ((l_SIG_1236 && (!l_POINT_1237)))
{
l_INT_1235 = rt_add(l_INT_1235, ((rt_int)1LL));
}
else if ((l_POINT_1237 && (!l_SIG_1236)))
{
l_LEAD_1238 = rt_add(l_LEAD_1238, ((rt_int)1LL));
}
l_I_1239 = rt_add(l_I_1239, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1241: ;
if ((!l_SIG_1236))
{
{ rt_int rv1242 = 1;
return rv1242; }
}
if ((l_I_1239 < (l_T_1233).f_LEN))
{
{
rt_int l_NEG_1243; memset(&l_NEG_1243, 0, sizeof l_NEG_1243);
l_NEG_1243 = 0;
l_I_1239 = rt_add(l_I_1239, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1234, l_I_1239, l_I_1239), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1234, l_I_1239, l_I_1239), rt_str("+", 1))))
{
l_NEG_1243 = rt_b_eq(rt_b_slice(l_S_1234, l_I_1239, l_I_1239), rt_str("-", 1));
l_I_1239 = rt_add(l_I_1239, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1239 >= (l_T_1233).f_LEN)) goto L_end1244;
{
if ((l_EXP_1240 <= ((rt_int)100000LL)))
{
l_EXP_1240 = rt_add(rt_mul(l_EXP_1240, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1234, l_I_1239, l_I_1239)), ((rt_int)48LL))));
}
l_I_1239 = rt_add(l_I_1239, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1244: ;
if (l_NEG_1243)
{
l_EXP_1240 = rt_neg(l_EXP_1240);
}
}
}
{
rt_int l_D_1245; memset(&l_D_1245, 0, sizeof l_D_1245);
l_D_1245 = rt_add(rt_sub(l_INT_1235, ((rt_int)1LL)), l_EXP_1240);
rt_int l_LIM_1246; memset(&l_LIM_1246, 0, sizeof l_LIM_1246);
l_LIM_1246 = ((rt_int)308LL);
if ((l_INT_1235 == ((rt_int)0LL)))
{
l_D_1245 = rt_add(rt_sub(rt_neg(l_LEAD_1238), ((rt_int)1LL)), l_EXP_1240);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1246 = ((rt_int)38LL);
}
{ rt_int rv1247 = ((l_D_1245 <= l_LIM_1246) && (l_D_1245 >= rt_add(rt_neg(l_LIM_1246), ((rt_int)1LL))));
return rv1247; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1248; memset(&l_T_1248, 0, sizeof l_T_1248);
S_R10(&l_T_1248, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1249; memset(&l_S_1249, 0, sizeof l_S_1249);
l_S_1249 = rt_b_str_new((l_T_1248).f_LEN, 0);
rt_b_assign(&l_S_1249, r_STR(l_T_1248, (l_T_1248).f_LEN));
rt_int l_SIG_1250; memset(&l_SIG_1250, 0, sizeof l_SIG_1250);
l_SIG_1250 = ((rt_int)0LL);
rt_int l_FRAC_1251; memset(&l_FRAC_1251, 0, sizeof l_FRAC_1251);
l_FRAC_1251 = ((rt_int)0LL);
rt_int l_POINT_1252; memset(&l_POINT_1252, 0, sizeof l_POINT_1252);
l_POINT_1252 = 0;
rt_int l_EXP_1253; memset(&l_EXP_1253, 0, sizeof l_EXP_1253);
l_EXP_1253 = ((rt_int)0LL);
rt_int l_I_1254; memset(&l_I_1254, 0, sizeof l_I_1254);
l_I_1254 = ((rt_int)0LL);
for (;;) {
if ((l_I_1254 >= (l_T_1248).f_LEN)) goto L_end1255;
{
if (rt_b_eq(rt_b_slice(l_S_1249, l_I_1254, l_I_1254), rt_str("E", 1)))
{
goto L_end1255;
}
if (rt_b_eq(rt_b_slice(l_S_1249, l_I_1254, l_I_1254), rt_str(".", 1)))
{
l_POINT_1252 = 1;
}
else
{
if (((l_SIG_1250 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1249, l_I_1254, l_I_1254), rt_str("0", 1)))))
{
l_SIG_1250 = rt_add(l_SIG_1250, ((rt_int)1LL));
}
if (l_POINT_1252)
{
l_FRAC_1251 = rt_add(l_FRAC_1251, ((rt_int)1LL));
}
}
l_I_1254 = rt_add(l_I_1254, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1255: ;
if ((rt_sub(l_I_1254, r_BOOL_INT(l_POINT_1252)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1254 < (l_T_1248).f_LEN))
{
{
rt_int l_NEG_1256; memset(&l_NEG_1256, 0, sizeof l_NEG_1256);
l_NEG_1256 = 0;
l_I_1254 = rt_add(l_I_1254, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1249, l_I_1254, l_I_1254), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1249, l_I_1254, l_I_1254), rt_str("+", 1))))
{
l_NEG_1256 = rt_b_eq(rt_b_slice(l_S_1249, l_I_1254, l_I_1254), rt_str("-", 1));
l_I_1254 = rt_add(l_I_1254, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1254 >= (l_T_1248).f_LEN)) goto L_end1257;
{
if ((l_EXP_1253 <= ((rt_int)1000LL)))
{
l_EXP_1253 = rt_sub(rt_add(rt_mul(l_EXP_1253, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1249, l_I_1254, l_I_1254))), ((rt_int)48LL));
}
l_I_1254 = rt_add(l_I_1254, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1257: ;
if ((l_EXP_1253 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1256)
{
l_EXP_1253 = rt_neg(l_EXP_1253);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1250 > ((rt_int)0LL)))
{
{
rt_int l_P10_1258; memset(&l_P10_1258, 0, sizeof l_P10_1258);
l_P10_1258 = rt_sub(rt_add(rt_sub(l_SIG_1250, ((rt_int)1LL)), l_EXP_1253), l_FRAC_1251);
rt_int l_BITS_1259; memset(&l_BITS_1259, 0, sizeof l_BITS_1259);
l_BITS_1259 = rt_add(rt_quot((rt_mul(l_P10_1258, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1258 < ((rt_int)0LL)))
{
l_BITS_1259 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1258), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1259 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1260; memset(&l_CS_1260, 0, sizeof l_CS_1260);
l_CS_1260 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1261; memset(&l_P_1261, 0, sizeof l_P_1261);
l_P_1261 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1262; memset(&l_S_1262, 0, sizeof l_S_1262);
S_R10(&l_S_1262, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1260 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1263; memset(&l_Y_1263, 0, sizeof l_Y_1263);
l_Y_1263 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1263 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1263))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1260 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1260)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1260 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1260)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1260))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1261 == NULL)) goto L_end1264;
{
if ((((*(R21 *)rt_nil_check(l_P_1261))).f_IV == g_K_STR))
{
if ((l_CS_1260 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1262, r_CAT(l_S_1262, ((*(R21 *)rt_nil_check(l_P_1261))).f_NAME), 0);
}
else
{
{
R10 l_Q_1265; memset(&l_Q_1265, 0, sizeof l_Q_1265);
S_R10(&l_Q_1265, ((*(R21 *)rt_nil_check(l_P_1261))).f_NAME, 0);
rstr l_QS_1266; memset(&l_QS_1266, 0, sizeof l_QS_1266);
l_QS_1266 = rt_b_str_new((l_Q_1265).f_LEN, 0);
rt_b_assign(&l_QS_1266, r_STR(l_Q_1265, (l_Q_1265).f_LEN));
{ rt_int it1268_lo = ((rt_int)0LL), it1268_hi = rt_sub((l_Q_1265).f_LEN, ((rt_int)1LL));
for (rt_int it1268 = it1268_lo; it1268 <= it1268_hi; it1268++) {
{
{
R10 l_LIT_1269; memset(&l_LIT_1269, 0, sizeof l_LIT_1269);
R12 * l_Y_1270; memset(&l_Y_1270, 0, sizeof l_Y_1270);
if (rt_b_eq(rt_b_slice(l_QS_1266, it1268, it1268), rt_str("'", 1)))
{
S_R10(&l_LIT_1269, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1269, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1266, it1268, it1268)), rt_str("'", 1))), 0);
}
l_Y_1270 = r_FIND_LITERAL(l_LIT_1269, l_CS_1260);
if ((l_Y_1270 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1261))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1266, it1268, it1268)));
}
S_R10(&l_S_1262, r_CATS(l_S_1262, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1270))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1268 == it1268_hi) break;
} } L_end1267: ;
}
}
}
else
{
{
R12 * l_Y_1271; memset(&l_Y_1271, 0, sizeof l_Y_1271);
l_Y_1271 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1261))).f_NAME, l_CS_1260);
if ((l_Y_1271 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1261))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1261))).f_NAME);
}
S_R10(&l_S_1262, r_CATS(l_S_1262, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1271))).f_MV)), 0);
}
}
l_P_1261 = ((*(R21 *)rt_nil_check(l_P_1261))).f_NEXT;
}
RT_B_TICK();
} L_end1264: ;
{
R22 * l_T_1272; memset(&l_T_1272, 0, sizeof l_T_1272);
l_T_1272 = r_STR_TYPE(r_NUM((l_S_1262).f_LEN), r_SOME((l_S_1262).f_LEN));
((*(R22 *)rt_nil_check(l_T_1272))).f_BASE = l_CS_1260;
{ R26 rv1273 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1262), r_NUM((l_S_1262).f_LEN)), l_T_1272);
return rv1273; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1274; memset(&l_TS_1274, 0, sizeof l_TS_1274);
l_TS_1274 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1274))).f_NAME, p_NAME, 0);
{ R22 * rv1275 = r_RESOLVE(l_TS_1274);
return rv1275; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1276; memset(&l_Y_1276, 0, sizeof l_Y_1276);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1277; memset(&l_WT_1277, 0, sizeof l_WT_1277);
l_WT_1277 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1277))).f_KIND == g_T_ENUM))
{
l_Y_1276 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1277);
if ((!(l_Y_1276 == NULL)))
{
{ R26 rv1278 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1276))).f_MV), r_ENUM_RESULT(l_Y_1276, p_WANT));
return rv1278; }
}
}
}
}
l_Y_1276 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1279; memset(&l_FOUND_1279, 0, sizeof l_FOUND_1279);
l_FOUND_1279 = NULL;
rt_int l_N_1280; memset(&l_N_1280, 0, sizeof l_N_1280);
l_N_1280 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1276 == NULL)) goto L_end1281;
{
if ((((*(R12 *)rt_nil_check(l_Y_1276))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1279 == NULL))
{
l_FOUND_1279 = l_Y_1276;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1279))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1276))).f_T))).f_BASE)))
{
l_N_1280 = rt_add(l_N_1280, ((rt_int)1LL));
}
}
l_Y_1276 = r_LOOKUP_NEXT(l_Y_1276);
}
RT_B_TICK();
} L_end1281: ;
if ((l_FOUND_1279 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1280 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1282 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1279))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1279))).f_T);
return rv1282; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1283 = p_WANT;
return rv1283; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1284; memset(&l_T_1284, 0, sizeof l_T_1284);
l_T_1284 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1284))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1285 = l_T_1284;
return rv1285; }
}
}
{ R22 * rv1286 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1286; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1287; memset(&l_Y_1287, 0, sizeof l_Y_1287);
l_Y_1287 = r_LOOKUP(p_NAME);
if ((l_Y_1287 == NULL))
{
{ rt_int rv1288 = 0;
return rv1288; }
}
{ rt_int rv1289 = (((((*(R12 *)rt_nil_check(l_Y_1287))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1287))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1287))).f_KIND == g_Y_ROUTINE));
return rv1289; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1290; memset(&l_Y_1290, 0, sizeof l_Y_1290);
l_Y_1290 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1290 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1291; memset(&l_WRITABLE_1291, 0, sizeof l_WRITABLE_1291);
l_WRITABLE_1291 = r_CHECK_IMPORTED(l_Y_1290, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1292 = r_MKLV(r_OBJ_ACCESS(l_Y_1290), ((*(R12 *)rt_nil_check(l_Y_1290))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_VAR) && l_WRITABLE_1291), r_NO_TEXT());
return rv1292; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_GEN))
{
{ R26 rv1293 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1290))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1290))).f_T);
return rv1293; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1294 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1294; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1295; memset(&l_N_1295, 0, sizeof l_N_1295);
l_N_1295 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1295))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1296 = r_CALL_EXPR(l_N_1295, p_WANT);
return rv1296; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1297; memset(&l_A_1297, 0, sizeof l_A_1297);
l_A_1297 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1297)))
{
{ R26 rv1298 = r_EXPR(l_A_1297, NULL);
return rv1298; }
}
if ((((*(R21 *)rt_nil_check(l_A_1297))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1297))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1297))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1299; memset(&l_B_1299, 0, sizeof l_B_1299);
S_R26(&l_B_1299, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1297))).f_A))).f_A), 0);
R10 l_I_1300; memset(&l_I_1300, 0, sizeof l_I_1300);
S_R10(&l_I_1300, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1297))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1299).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1301 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1299).f_C, l_I_1300, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1299).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1301; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1302 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1299).f_C, l_I_1300, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1299).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1302; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1297))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(l_A_1297))).f_A))
{
{ R26 rv1303 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(l_A_1297))).f_A)), ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1303; }
}
}
if ((((*(R21 *)rt_nil_check(l_A_1297))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1297))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1297))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1297))).f_A))).f_A))).f_NAME))
{
{ R26 rv1304 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1297))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1297))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1304; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1297))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1305; memset(&l_Y_1305, 0, sizeof l_Y_1305);
l_Y_1305 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1297))).f_NAME);
if ((!(l_Y_1305 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1305))).f_KIND == g_Y_TYPE))
{
{ R26 rv1306 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1297))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1306; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1297))).f_NAME))
{
{ R26 rv1307 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1297))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1307; }
}
}
}
{
R26 l_B_1308; memset(&l_B_1308, 0, sizeof l_B_1308);
S_R26(&l_B_1308, r_EXPR(l_A_1297, NULL), 0);
R22 * l_BT_1309; memset(&l_BT_1309, 0, sizeof l_BT_1309);
l_BT_1309 = (l_B_1308).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1309))).f_KIND == g_T_REC))
{
{
R24 * l_F_1310; memset(&l_F_1310, 0, sizeof l_F_1310);
l_F_1310 = r_FIND_VFIELD(l_BT_1309, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1310 == NULL)))
{
r_CHECK_VARIANT(l_F_1310, l_BT_1309, l_A_1297, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1310))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1309)))
{
{ R26 rv1311 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1308).f_C, ((*(R24 *)rt_nil_check(l_F_1310))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1310))).f_T);
return rv1311; }
}
{ R26 rv1312 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1308).f_C, ((*(R24 *)rt_nil_check(l_F_1310))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1310))).f_T, ((l_B_1308).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1310))).f_KIND == ((rt_int)0LL))), (l_B_1308).f_C);
return rv1312; }
}
}
}
{ R26 rv1313 = r_ATTRIBUTE(l_B_1308, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1313; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1314 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1314; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1315 = 1;
return rv1315; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1316 = 1;
return rv1316; }
}
{
rstr l_S_1317; memset(&l_S_1317, 0, sizeof l_S_1317);
l_S_1317 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1317, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1319_lo = ((rt_int)0LL), it1319_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1319 = it1319_lo; it1319 <= it1319_hi; it1319++) {
{
if (rt_b_eq(rt_b_slice(l_S_1317, it1319, it1319), rt_str(".", 1)))
{
{ rt_int rv1320 = 0;
return rv1320; }
}
}
RT_B_TICK();
if (it1319 == it1319_hi) break;
} } L_end1318: ;
}
{ rt_int rv1321 = 1;
return rv1321; }
}
{ rt_int rv1322 = 0;
return rv1322; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1323 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1323; }
}
{ rt_int rv1324 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1324; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1325 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1325; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1326; memset(&l_TAGV_1326, 0, sizeof l_TAGV_1326);
S_R23(&l_TAGV_1326, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1326).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1326).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1327; memset(&l_F_1327, 0, sizeof l_F_1327);
l_F_1327 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1328; memset(&l_A_1328, 0, sizeof l_A_1328);
l_A_1328 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1327 == NULL)) goto L_end1329;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1327))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1328 == NULL))
{
{ R23 rv1330 = r_NO_MVAL();
return rv1330; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1327))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1328))).f_ANYARG)
{
{ R23 rv1331 = r_NO_MVAL();
return rv1331; }
}
{ R23 rv1332 = ((*(R25 *)rt_nil_check(l_A_1328))).f_MLO;
return rv1332; }
}
l_A_1328 = ((*(R25 *)rt_nil_check(l_A_1328))).f_NEXT;
}
l_F_1327 = ((*(R24 *)rt_nil_check(l_F_1327))).f_NEXT;
}
RT_B_TICK();
} L_end1329: ;
{ R23 rv1333 = r_NO_MVAL();
return rv1333; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1334; memset(&l_P_1334, 0, sizeof l_P_1334);
l_P_1334 = p_L;
for (;;) {
if ((l_P_1334 == NULL)) goto L_end1335;
{
if ((((*(R21 *)rt_nil_check(l_P_1334))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1334))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1334))).f_B, p_T)).f_V)))
{
{ rt_int rv1336 = 1;
return rv1336; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1334, p_T)).f_V == p_V))
{
{ rt_int rv1337 = 1;
return rv1337; }
}
l_P_1334 = ((*(R21 *)rt_nil_check(l_P_1334))).f_NEXT;
}
RT_B_TICK();
} L_end1335: ;
{ rt_int rv1338 = 0;
return rv1338; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1339 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1339; }
}
{ R26 rv1340 = r_EXPR(p_E, NULL);
return rv1340; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1341; memset(&l_A_1341, 0, sizeof l_A_1341);
S_R26(&l_A_1341, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1342; memset(&l_I_1342, 0, sizeof l_I_1342);
S_R10(&l_I_1342, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1341).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1343 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1341).f_C, (l_A_1341).f_C, l_I_1342, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1341).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1343; }
}
}
}
{ R26 rv1344 = r_INDEX_EXPR2(p_E);
return rv1344; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_VALUE(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1345; memset(&l_SAVED_1345, 0, sizeof l_SAVED_1345);
l_SAVED_1345 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1346; memset(&l_SAVED_Q_1346, 0, sizeof l_SAVED_Q_1346);
l_SAVED_Q_1346 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1347; memset(&l_V_1347, 0, sizeof l_V_1347);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1347, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1345;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1346;
{ R10 rv1348 = r_INDEX_OF(l_V_1347, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1348; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1349; memset(&l_T_1349, 0, sizeof l_T_1349);
l_T_1349 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1349))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1349))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1349))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1350; memset(&l_ARGS_1350, 0, sizeof l_ARGS_1350);
l_ARGS_1350 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1351; memset(&l_Y_1351, 0, sizeof l_Y_1351);
l_Y_1351 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1350, p_LINE, 0);
if ((l_Y_1351 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1352 = (r_CALL_SYM(l_Y_1351, l_ARGS_1350, p_LINE)).f_C;
return rv1352; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1349))).f_KIND == g_T_ENUM))
{
{ R10 rv1353 = (p_V).f_C;
return rv1353; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1349))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1349))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1354 = (p_V).f_C;
return rv1354; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1355; memset(&l_B_1355, 0, sizeof l_B_1355);
S_R26(&l_B_1355, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1356; memset(&l_T_1356, 0, sizeof l_T_1356);
l_T_1356 = r_REAL_TYPE((l_B_1355).f_T);
R21 * l_S_1357; memset(&l_S_1357, 0, sizeof l_S_1357);
l_S_1357 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1358; memset(&l_IX_1358, 0, sizeof l_IX_1358);
S_R10(&l_IX_1358, r_MK(rt_str("", 0)), 0);
rt_int l_N_1359; memset(&l_N_1359, 0, sizeof l_N_1359);
l_N_1359 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1356))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1357 == NULL)) goto L_end1360;
{
if ((l_N_1359 > ((rt_int)0LL)))
{
S_R10(&l_IX_1358, r_CATS(l_IX_1358, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1358, r_CAT(l_IX_1358, r_INDEX_VALUE(l_S_1357)), 0);
l_N_1359 = rt_add(l_N_1359, ((rt_int)1LL));
l_S_1357 = ((*(R21 *)rt_nil_check(l_S_1357))).f_NEXT;
}
RT_B_TICK();
} L_end1360: ;
if ((!(l_N_1359 == ((*(R22 *)rt_nil_check(l_T_1356))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1359 == ((rt_int)1LL)))
{
{ R26 rv1361 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1355).f_C, l_IX_1358, (l_B_1355).f_C, (l_B_1355).f_C), ((*(R22 *)rt_nil_check(l_T_1356))).f_ELEM, (l_B_1355).f_LVAL, r_NO_TEXT());
return rv1361; }
}
{
R10 l_X_1362; memset(&l_X_1362, 0, sizeof l_X_1362);
S_R10(&l_X_1362, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1355).f_C, r_NUM(l_N_1359), (l_B_1355).f_C, (l_B_1355).f_C), 0);
{ R26 rv1363 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1362, l_IX_1358), ((*(R22 *)rt_nil_check(l_T_1356))).f_ELEM, (l_B_1355).f_LVAL, r_NO_TEXT());
return rv1363; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1364 = r_MKN(rt_str("NEGATE_", 7));
return rv1364; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1365 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1365; }
}
{ R10 rv1366 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1366; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1367 = r_MKN(rt_str("ADD_", 4));
return rv1367; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1368 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1368; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1369 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1369; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1370 = r_MKN(rt_str("DIVIDE_", 7));
return rv1370; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1371 = r_MKN(rt_str("MODULUS_", 8));
return rv1371; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1372 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1372; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1373 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1373; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1374 = r_MKN(rt_str("EQUAL_", 6));
return rv1374; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1375 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1375; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1376 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1376; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1377 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1377; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1378 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1378; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1379 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1379; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1380 = r_MKN(rt_str("AND_", 4));
return rv1380; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1381 = r_MKN(rt_str("OR_", 3));
return rv1381; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1382 = r_MKN(rt_str("XOR_", 4));
return rv1382; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1383 = r_MKN(rt_str("IMPLIES_", 8));
return rv1383; }
}
{ R10 rv1384 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1384; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1385; memset(&l_A_1385, 0, sizeof l_A_1385);
l_A_1385 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1385)), ({ R27 rc1386; memset(&rc1386, 0, sizeof rc1386);  rc1386.f_E = NULL; S_R26(&rc1386.f_V, p_V, 0); rc1386.f_HAVE = 1; rc1386.f_MODE = g_M_IN; rc1386.f_NEXT = p_NEXT; rc1386; }), 0);
{ R27 * rv1387 = l_A_1385;
return rv1387; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1388; memset(&l_A_1388, 0, sizeof l_A_1388);
l_A_1388 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1388)), ({ R27 rc1389; memset(&rc1389, 0, sizeof rc1389);  rc1389.f_E = p_E; S_R26(&rc1389.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1389.f_HAVE = 0; rc1389.f_MODE = p_MODE; rc1389.f_NEXT = p_NEXT; rc1389; }), 0);
{ R27 * rv1390 = l_A_1388;
return rv1390; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1391; memset(&l_Y_1391, 0, sizeof l_Y_1391);
l_Y_1391 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1391 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1391 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1392 = l_Y_1391;
return rv1392; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1393; memset(&l_Y_1393, 0, sizeof l_Y_1393);
l_Y_1393 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1393 == NULL)) goto L_end1394;
{
if ((((*(R12 *)rt_nil_check(l_Y_1393))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1395 = 1;
return rv1395; }
}
l_Y_1393 = r_LOOKUP_NEXT(l_Y_1393);
}
RT_B_TICK();
} L_end1394: ;
l_Y_1393 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1393 == NULL)) goto L_end1396;
{
if ((((*(R12 *)rt_nil_check(l_Y_1393))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1397 = 1;
return rv1397; }
}
l_Y_1393 = r_LOOKUP_NEXT(l_Y_1393);
}
RT_B_TICK();
} L_end1396: ;
{ rt_int rv1398 = 0;
return rv1398; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1399; memset(&l_Q_1399, 0, sizeof l_Q_1399);
l_Q_1399 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1400; memset(&l_R_1400, 0, sizeof l_R_1400);
l_R_1400 = NULL;
if ((l_Q_1399 == NULL))
{
{ R27 * rv1401 = NULL;
return rv1401; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1399))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1400 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1399))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1399))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1399))).f_B == NULL)))
{
l_R_1400 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1399))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1400);
}
{ R27 * rv1402 = l_R_1400;
return rv1402; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1403; memset(&l_ARGS_1403, 0, sizeof l_ARGS_1403);
l_ARGS_1403 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1404; memset(&l_Y_1404, 0, sizeof l_Y_1404);
l_Y_1404 = r_USER_OPERATOR(p_NAME, l_ARGS_1403, p_LINE);
if ((l_Y_1404 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1405 = r_CALL_SYM(l_Y_1404, l_ARGS_1403, p_LINE);
return rv1405; }
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
{ R10 rv1406 = p_C;
return rv1406; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1407 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1407; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1408 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1408; }
}
{ R10 rv1409 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1409; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1410 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1410; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1411; memset(&l_RT_1411, 0, sizeof l_RT_1411);
l_RT_1411 = r_REAL_TYPE(p_T);
R22 * l_VT_1412; memset(&l_VT_1412, 0, sizeof l_VT_1412);
l_VT_1412 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1412))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_PTR)))
{
{ R10 rv1413 = (p_V).f_C;
return rv1413; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1412))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1412)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1414 = (p_V).f_C;
return rv1414; }
}
if ((!r_SAME_CLASS(l_RT_1411, l_VT_1412)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1412), (r_TYPE_NAME(l_VT_1412)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1411), (r_TYPE_NAME(l_RT_1411)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1411))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1411))).f_SCALE))
{
{ R10 rv1415 = r_RANGE_CHECK(l_RT_1411, (p_V).f_C, p_SELF);
return rv1415; }
}
{ R10 rv1416 = r_RANGE_CHECK(l_RT_1411, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1411))).f_SCALE)), p_SELF);
return rv1416; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1411))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1412))).f_SCALE)))
{
{ R10 rv1417 = r_RANGE_CHECK(l_RT_1411, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1411))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1417; }
}
{ R10 rv1418 = r_RANGE_CHECK(l_RT_1411, (p_V).f_C, p_SELF);
return rv1418; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1411))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1411) || r_HAS_VALUES(l_VT_1412)))) && (!r_SAME_REPS(l_RT_1411, l_VT_1412))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1419 = r_RANGE_CHECK(l_RT_1411, (p_V).f_C, p_SELF);
return rv1419; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1411, l_VT_1412, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1411))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1412))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1411))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1412))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1411), r_TARGET(l_VT_1412))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1411)) && (!r_HAS_ANY(l_VT_1412))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1411))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1412))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1411))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1411))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1412))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1411, l_VT_1412)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R10 rv1420 = (p_V).f_C;
return rv1420; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1421; memset(&l_ARGS_1421, 0, sizeof l_ARGS_1421);
l_ARGS_1421 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1422; memset(&l_Y_1422, 0, sizeof l_Y_1422);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1423; memset(&l_SAVED_Q_1423, 0, sizeof l_SAVED_Q_1423);
l_SAVED_Q_1423 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1424; memset(&l_X_1424, 0, sizeof l_X_1424);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1424 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1423;
if ((!(l_X_1424 == NULL)))
{
{
R27 * l_P_1425; memset(&l_P_1425, 0, sizeof l_P_1425);
l_P_1425 = l_X_1424;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1425))).f_NEXT == NULL)) goto L_end1426;
{
l_P_1425 = ((*(R27 *)rt_nil_check(l_P_1425))).f_NEXT;
}
RT_B_TICK();
} L_end1426: ;
((*(R27 *)rt_nil_check(l_P_1425))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1421))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1421))).f_NEXT = l_X_1424;
}
}
}
}
{
R27 * l_LAST_1427; memset(&l_LAST_1427, 0, sizeof l_LAST_1427);
l_LAST_1427 = l_ARGS_1421;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1427))).f_NEXT == NULL)) goto L_end1428;
{
l_LAST_1427 = ((*(R27 *)rt_nil_check(l_LAST_1427))).f_NEXT;
}
RT_B_TICK();
} L_end1428: ;
((*(R27 *)rt_nil_check(l_LAST_1427))).f_MODE = g_M_OUT;
l_Y_1422 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1421, p_LINE, 0);
if ((l_Y_1422 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1427))).f_MODE = g_M_INOUT;
l_Y_1422 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1421, p_LINE, 0);
}
}
if ((l_Y_1422 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1429 = r_CATS((r_CALL_SYM(l_Y_1422, l_ARGS_1421, p_LINE)).f_C, rt_str(";", 1));
return rv1429; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1430 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1430; }
}
}
{ R10 rv1431 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1431; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1432 = 1;
return rv1432; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1433 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1433; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1434; memset(&l_F_1434, 0, sizeof l_F_1434);
l_F_1434 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1434 == NULL)) goto L_end1435;
{
if ((((*(R24 *)rt_nil_check(l_F_1434))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1434))).f_T))
{
{ rt_int rv1436 = 1;
return rv1436; }
}
}
l_F_1434 = ((*(R24 *)rt_nil_check(l_F_1434))).f_NEXT;
}
RT_B_TICK();
} L_end1435: ;
}
}
{ rt_int rv1437 = 0;
return rv1437; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1438 = 0;
return rv1438; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1439 = 0;
return rv1439; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1440 = 0;
return rv1440; }
}
{ rt_int rv1441 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1441; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1442 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1442; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1443; memset(&l_D_1443, 0, sizeof l_D_1443);
S_R10(&l_D_1443, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1444; memset(&l_S_1444, 0, sizeof l_S_1444);
S_R10(&l_S_1444, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1445; memset(&l_I_1445, 0, sizeof l_I_1445);
S_R10(&l_I_1445, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1446; memset(&l_N_1446, 0, sizeof l_N_1446);
S_R10(&l_N_1446, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1447; memset(&l_VE_1447, 0, sizeof l_VE_1447);
l_VE_1447 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1448; memset(&l_R_1448, 0, sizeof l_R_1448);
S_R10(&l_R_1448, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1443, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1448, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1448, l_S_1444, p_RV), 0);
S_R10(&l_R_1448, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1448, l_N_1446, l_D_1443, l_D_1443), 0);
S_R10(&l_R_1448, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1448, l_S_1444, l_S_1444), 0);
S_R10(&l_R_1448, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1448, l_I_1445, l_N_1446, l_D_1443), 0);
S_R10(&l_R_1448, r_FMT2(rt_str("@@->hi);", 8), l_R_1448, l_D_1443), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1448, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1448, l_I_1445, l_I_1445, l_I_1445), 0);
S_R10(&l_R_1448, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1448, l_I_1445, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1444, l_I_1445), r_NO_TEXT())), 0);
}
S_R10(&l_R_1448, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1448, l_I_1445, l_I_1445, l_I_1445), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1448, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1448, l_I_1445, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1447, r_FMT2(rt_str("@->p[@]", 7), l_D_1443, l_I_1445), r_FMT2(rt_str("@.p[@]", 6), l_S_1444, l_I_1445), p_LINE)), 0);
}
else
{
S_R10(&l_R_1448, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1448, l_I_1445, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1443, l_I_1445), r_FMT2(rt_str("@.p[@]", 6), l_S_1444, l_I_1445))), 0);
}
{ R10 rv1449 = l_R_1448;
return rv1449; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1450; memset(&l_D_1450, 0, sizeof l_D_1450);
S_R10(&l_D_1450, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1451; memset(&l_S_1451, 0, sizeof l_S_1451);
S_R10(&l_S_1451, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1452; memset(&l_F_1452, 0, sizeof l_F_1452);
l_F_1452 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1453; memset(&l_R_1453, 0, sizeof l_R_1453);
S_R10(&l_R_1453, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1450, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1453, r_FMT3(rt_str("@@ = @;", 7), l_R_1453, l_S_1451, p_RV), 0);
for (;;) {
if ((l_F_1452 == NULL)) goto L_end1454;
{
{
R10 l_DF_1455; memset(&l_DF_1455, 0, sizeof l_DF_1455);
S_R10(&l_DF_1455, r_FMT2(rt_str("@->@", 4), l_D_1450, ((*(R24 *)rt_nil_check(l_F_1452))).f_CNAME), 0);
R10 l_SF_1456; memset(&l_SF_1456, 0, sizeof l_SF_1456);
S_R10(&l_SF_1456, r_FMT2(rt_str("@.@", 3), l_S_1451, ((*(R24 *)rt_nil_check(l_F_1452))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1452))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1452))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1453, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1453, l_DF_1455, l_SF_1456), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1452))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1453, r_FMT3(rt_str("@ @ = @;", 8), l_R_1453, l_DF_1455, l_SF_1456), 0);
}
else
{
S_R10(&l_R_1453, r_FMT2(rt_str("@ @", 3), l_R_1453, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1452))).f_T, ((*(R24 *)rt_nil_check(l_F_1452))).f_T, l_DF_1455, l_SF_1456, p_LINE)), 0);
}
}
l_F_1452 = ((*(R24 *)rt_nil_check(l_F_1452))).f_NEXT;
}
RT_B_TICK();
} L_end1454: ;
{ R10 rv1457 = r_CATS(l_R_1453, rt_str(" }", 2));
return rv1457; }
}
}
{ R10 rv1458 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1458; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1459; memset(&l_ARGS_1459, 0, sizeof l_ARGS_1459);
l_ARGS_1459 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1460; memset(&l_Y_1460, 0, sizeof l_Y_1460);
l_Y_1460 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1459, p_LINE);
if ((l_Y_1460 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1461 = (r_CALL_SYM(l_Y_1460, l_ARGS_1459, p_LINE)).f_C;
return rv1461; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1462; memset(&l_X_1462, 0, sizeof l_X_1462);
S_R10(&l_X_1462, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1463; memset(&l_Z_1463, 0, sizeof l_Z_1463);
S_R10(&l_Z_1463, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1464; memset(&l_I_1464, 0, sizeof l_I_1464);
S_R10(&l_I_1464, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1465; memset(&l_N_1465, 0, sizeof l_N_1465);
S_R10(&l_N_1465, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1466; memset(&l_R_1466, 0, sizeof l_R_1466);
S_R10(&l_R_1466, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1462, p_A, l_Z_1463), 0);
S_R10(&l_R_1466, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1466, p_B, l_I_1464, l_N_1465), 0);
S_R10(&l_R_1466, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1466, l_X_1462, l_X_1462, l_Z_1463), 0);
S_R10(&l_R_1466, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1466, l_Z_1463, l_I_1464, l_N_1465), 0);
S_R10(&l_R_1466, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1466, l_X_1462, l_X_1462), 0);
S_R10(&l_R_1466, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1466, l_I_1464, l_I_1464, l_I_1464), 0);
S_R10(&l_R_1466, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1466, l_I_1464, l_I_1464, l_I_1464), 0);
S_R10(&l_R_1466, r_FMT2(rt_str("@@;", 3), l_R_1466, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1462, l_I_1464), r_FMT2(rt_str("@.p[@]", 6), l_Z_1463, l_I_1464), p_LINE)), 0);
{ R10 rv1467 = r_FMT2(rt_str("@ @r; })", 8), l_R_1466, l_I_1464);
return rv1467; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1468; memset(&l_X_1468, 0, sizeof l_X_1468);
S_R10(&l_X_1468, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1469; memset(&l_Z_1469, 0, sizeof l_Z_1469);
S_R10(&l_Z_1469, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1470; memset(&l_F_1470, 0, sizeof l_F_1470);
l_F_1470 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1471; memset(&l_R_1471, 0, sizeof l_R_1471);
S_R10(&l_R_1471, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1468, p_A, l_Z_1469), 0);
R10 l_EQ_1472; memset(&l_EQ_1472, 0, sizeof l_EQ_1472);
S_R10(&l_EQ_1472, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1471, r_FMT2(rt_str("@@;", 3), l_R_1471, p_B), 0);
for (;;) {
if ((l_F_1470 == NULL)) goto L_end1473;
{
{
R10 l_C_1474; memset(&l_C_1474, 0, sizeof l_C_1474);
S_R10(&l_C_1474, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1470))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1468, ((*(R24 *)rt_nil_check(l_F_1470))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1469, ((*(R24 *)rt_nil_check(l_F_1470))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1470))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1472, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1472, r_VARIANT_COND(l_F_1470, p_T, l_X_1468), l_C_1474), 0);
}
else
{
S_R10(&l_EQ_1472, r_FMT2(rt_str("@ && @", 6), l_EQ_1472, l_C_1474), 0);
}
}
l_F_1470 = ((*(R24 *)rt_nil_check(l_F_1470))).f_NEXT;
}
RT_B_TICK();
} L_end1473: ;
{ R10 rv1475 = r_FMT2(rt_str("@ @; })", 7), l_R_1471, l_EQ_1472);
return rv1475; }
}
}
{ R10 rv1476 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1476; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1477; memset(&l_A_1477, 0, sizeof l_A_1477);
S_R26(&l_A_1477, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1478; memset(&l_T_1478, 0, sizeof l_T_1478);
l_T_1478 = (l_A_1477).f_T;
R10 l_OP_1479; memset(&l_OP_1479, 0, sizeof l_OP_1479);
S_R10(&l_OP_1479, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1479, 1))))
{
{
R27 * l_ARGS_1480; memset(&l_ARGS_1480, 0, sizeof l_ARGS_1480);
l_ARGS_1480 = r_VAL_ARG(l_A_1477, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1481; memset(&l_Y_1481, 0, sizeof l_Y_1481);
l_Y_1481 = r_USER_OPERATOR(r_OP_NAME(l_OP_1479, 1), l_ARGS_1480, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1481 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1480))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1480))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1479, 1), l_ARGS_1480, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1479, 1));
}
}
if ((!(l_Y_1481 == NULL)))
{
{ R26 rv1482 = r_CALL_SYM(l_Y_1481, l_ARGS_1480, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1482; }
}
if ((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1478));
}
}
}
if (r_TEQS(l_OP_1479, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_BOOL))
{
{ R26 rv1483 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1477).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1483; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_BITS))
{
{ R26 rv1484 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1477).f_C), l_T_1478);
return rv1484; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1479, rt_str("-", 1)))
{
{ R26 rv1485 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1477).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1478))).f_SCALE));
return rv1485; }
}
{ R26 rv1486 = r_MKET((l_A_1477).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1478))).f_SCALE));
return rv1486; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1487; memset(&l_FT_1487, 0, sizeof l_FT_1487);
l_FT_1487 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1478))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1479, rt_str("-", 1)))
{
{ R26 rv1488 = r_MKET(r_FLOAT_OP(l_OP_1479, r_MK(rt_str("0.0", 3)), (l_A_1477).f_C, l_FT_1487), l_FT_1487);
return rv1488; }
}
{ R26 rv1489 = r_MKET((l_A_1477).f_C, l_FT_1487);
return rv1489; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1478));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1490 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1490; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1491; memset(&l_OP_1491, 0, sizeof l_OP_1491);
S_R10(&l_OP_1491, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1492; memset(&l_A_1492, 0, sizeof l_A_1492);
R26 l_B_1493; memset(&l_B_1493, 0, sizeof l_B_1493);
if ((r_TEQS(l_OP_1491, rt_str("&", 1)) || r_TEQS(l_OP_1491, rt_str("!", 1))))
{
{
R23 l_MA_1494; memset(&l_MA_1494, 0, sizeof l_MA_1494);
S_R23(&l_MA_1494, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1495; memset(&l_CA_1495, 0, sizeof l_CA_1495);
S_R10(&l_CA_1495, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1496; memset(&l_CB_1496, 0, sizeof l_CB_1496);
S_R10(&l_CB_1496, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1491, rt_str("&", 1)))
{
{ R26 rv1497 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1495, l_CB_1496), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1497; }
}
{ R26 rv1498 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1495, l_CB_1496), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1498; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1493, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1492, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1493).f_T), 0);
}
else
{
S_R26(&l_A_1492, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1493, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1492).f_T), 0);
}
{ R26 rv1499 = r_APPLY_OPERATOR(p_E, l_OP_1491, l_A_1492, l_B_1493);
return rv1499; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1500; memset(&l_AT_1500, 0, sizeof l_AT_1500);
l_AT_1500 = (p_A).f_T;
R22 * l_BT_1501; memset(&l_BT_1501, 0, sizeof l_BT_1501);
l_BT_1501 = (p_B).f_T;
rt_int l_LINE_1502; memset(&l_LINE_1502, 0, sizeof l_LINE_1502);
l_LINE_1502 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1503; memset(&l_NAME_1503, 0, sizeof l_NAME_1503);
S_R10(&l_NAME_1503, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1503, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1503, (l_NAME_1503).f_LEN))), 0);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1503) || (((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1504; memset(&l_ARGS_1504, 0, sizeof l_ARGS_1504);
l_ARGS_1504 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1505; memset(&l_EXTRA_1505, 0, sizeof l_EXTRA_1505);
l_EXTRA_1505 = r_QUAL_ARGS(l_LINE_1502);
R12 * l_Y_1506; memset(&l_Y_1506, 0, sizeof l_Y_1506);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1505 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1505);
}
if ((!(l_EXTRA_1505 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1504))).f_NEXT))).f_NEXT = l_EXTRA_1505;
l_Y_1506 = r_USER_OPERATOR(l_NAME_1503, l_ARGS_1504, l_LINE_1502);
if ((!(l_Y_1506 == NULL)))
{
{ R26 rv1507 = r_CALL_SYM(l_Y_1506, l_ARGS_1504, l_LINE_1502);
return rv1507; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1504))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1503, l_ARGS_1504, l_LINE_1502) == NULL)))
{
r_FAILT(l_LINE_1502, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1503);
}
}
else
{
l_Y_1506 = r_USER_OPERATOR(l_NAME_1503, l_ARGS_1504, l_LINE_1502);
if ((!(l_Y_1506 == NULL)))
{
{ R26 rv1508 = r_CALL_SYM(l_Y_1506, l_ARGS_1504, l_LINE_1502);
return rv1508; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1509; memset(&l_Q_1509, 0, sizeof l_Q_1509);
l_Q_1509 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1504, l_LINE_1502);
if ((!(l_Q_1509 == NULL)))
{
{ R26 rv1510 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1509, l_ARGS_1504, l_LINE_1502)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1510; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1502, rt_str("no such operation for the abstract type: ", 41), l_NAME_1503);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1502, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1511 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1511; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1512 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1512; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_INT)))
{
{ R26 rv1513 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1513; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1514 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1514; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1500, l_BT_1501)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1500))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1502, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1515 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1515; }
}
r_FAILT(l_LINE_1502, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1500, l_BT_1501, l_LINE_1502);
{
R22 * l_T_1516; memset(&l_T_1516, 0, sizeof l_T_1516);
l_T_1516 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1516))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1500))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1500))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1501))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1516))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1500))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1501))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1516))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1516))).f_MLEN).f_V), 0);
}
{ R26 rv1517 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1516);
return rv1517; }
}
}
r_FAIL(l_LINE_1502, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_BITS)))
{
{ R26 rv1518 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1500);
return rv1518; }
}
r_FAILT(l_LINE_1502, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_INT)))
{
{ R26 rv1519 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1519; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1520; memset(&l_T_1520, 0, sizeof l_T_1520);
l_T_1520 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1500))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1501))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1521 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1520), l_T_1520);
return rv1521; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1502, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1500))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1501))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1502, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1502, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1500), (r_TYPE_NAME(l_AT_1500)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1522; memset(&l_P_1522, 0, sizeof l_P_1522);
l_P_1522 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1523; memset(&l_Q_1523, 0, sizeof l_Q_1523);
l_Q_1523 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1522 == NULL) || (l_Q_1523 == NULL))) goto L_end1524;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1522))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1522))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1523))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1523))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1522))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1522))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1523))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1523))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1522))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1522))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1523))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1523))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1525 = 0;
return rv1525; }
}
}
l_P_1522 = ((*(R25 *)rt_nil_check(l_P_1522))).f_NEXT;
l_Q_1523 = ((*(R25 *)rt_nil_check(l_Q_1523))).f_NEXT;
}
RT_B_TICK();
} L_end1524: ;
{ rt_int rv1526 = 1;
return rv1526; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1527 = 0;
return rv1527; }
}
{ rt_int rv1528 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1528; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1529; memset(&l_T_1529, 0, sizeof l_T_1529);
l_T_1529 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1529))).f_SCALE = p_P;
{ R22 * rv1530 = l_T_1529;
return rv1530; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1531 = r_MK(rt_str("1", 1));
return rv1531; }
}
{ R10 rv1532 = r_MK(rt_str("0", 1));
return rv1532; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1533 = r_MK(rt_str("1", 1));
return rv1533; }
}
}
{ R10 rv1534 = r_MK(rt_str("0", 1));
return rv1534; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1535 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1535; }
}
}
{ rt_int rv1536 = ((rt_int)0LL);
return rv1536; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1537 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1537; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1538 = r_MK(rt_str("and", 3));
return rv1538; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1539 = r_MK(rt_str("or", 2));
return rv1539; }
}
{ R10 rv1540 = r_MK(rt_str("xor", 3));
return rv1540; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1541 = p_A;
return rv1541; }
}
{ rt_int rv1542 = p_B;
return rv1542; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1543 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1543; }
}
{ R10 rv1544 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1544; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1545; memset(&l_AT_1545, 0, sizeof l_AT_1545);
l_AT_1545 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1546; memset(&l_BT_1546, 0, sizeof l_BT_1546);
l_BT_1546 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1547; memset(&l_R_1547, 0, sizeof l_R_1547);
if (((((*(R22 *)rt_nil_check(l_AT_1545))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1546))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1545))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1546))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1545))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1546))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1547, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1545))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1546))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1547, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1545, l_BT_1546)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1545))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1545, l_BT_1546, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1545))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1545) || r_HAS_ANY(l_BT_1546)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1545))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1545, l_BT_1546)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1545))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1545))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1546))).f_ARGS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1545))
{
S_R10(&l_R_1547, r_COMPONENT_EQUAL(l_AT_1545, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1547, r_EQUAL_CODE(l_AT_1545, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1547, r_FMT1(rt_str("(!@)", 4), l_R_1547), 0);
}
{ R26 rv1548 = r_MKET(l_R_1547, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1548; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1549; memset(&l_S1_1549, 0, sizeof l_S1_1549);
l_S1_1549 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1550; memset(&l_S2_1550, 0, sizeof l_S2_1550);
l_S2_1550 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1551; memset(&l_S_1551, 0, sizeof l_S_1551);
l_S_1551 = r_MAX_INT(l_S1_1549, l_S2_1550);
R10 l_FN_1552; memset(&l_FN_1552, 0, sizeof l_FN_1552);
S_R10(&l_FN_1552, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1552, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1553 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1552, r_RESCALE_C((p_A).f_C, l_S1_1549, l_S_1551), r_RESCALE_C((p_B).f_C, l_S2_1550, l_S_1551)), r_INT_TYPE(l_S_1551));
return rv1553; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1554 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1549, l_S2_1550)));
return rv1554; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1555 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1549, l_S2_1550)));
return rv1555; }
}
{ R26 rv1556 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1549, l_S2_1550)));
return rv1556; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1557 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1549));
return rv1557; }
}
{ R26 rv1558 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1549));
return rv1558; }
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
rt_int l_S1_1559; memset(&l_S1_1559, 0, sizeof l_S1_1559);
l_S1_1559 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1560; memset(&l_S2_1560, 0, sizeof l_S2_1560);
l_S2_1560 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1561; memset(&l_RND_1561, 0, sizeof l_RND_1561);
S_R10(&l_RND_1561, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1562 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1562; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1561, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1563 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1563; }
}
{
R23 l_SM_1564; memset(&l_SM_1564, 0, sizeof l_SM_1564);
S_R23(&l_SM_1564, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1565; memset(&l_S_1565, 0, sizeof l_S_1565);
l_S_1565 = (l_SM_1564).f_V;
rt_int l_SR_1566; memset(&l_SR_1566, 0, sizeof l_SR_1566);
l_SR_1566 = r_MAX_INT(l_S1_1559, l_S2_1560);
if ((!(l_SM_1564).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1567 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1565, l_S1_1559), l_S2_1560)), l_RND_1561), r_INT_TYPE(l_S_1565));
return rv1567; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1568 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1565, l_S1_1559), l_S2_1560)), l_RND_1561), r_INT_TYPE(l_S_1565));
return rv1568; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1569 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1559), r_NUM(l_S_1565), l_RND_1561), r_INT_TYPE(l_S_1565));
return rv1569; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1570; memset(&l_SUB_1570, 0, sizeof l_SUB_1570);
S_R10(&l_SUB_1570, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1570, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1571 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1559), (p_B).f_C, r_NUM(l_S2_1560)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1565), l_SUB_1570, l_RND_1561)), r_INT_TYPE(l_S_1565));
return rv1571; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1572; memset(&l_V_1572, 0, sizeof l_V_1572);
S_R26(&l_V_1572, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1573; memset(&l_T_1573, 0, sizeof l_T_1573);
l_T_1573 = r_REAL_TYPE((l_V_1572).f_T);
R21 * l_R_1574; memset(&l_R_1574, 0, sizeof l_R_1574);
l_R_1574 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1575; memset(&l_TMP_1575, 0, sizeof l_TMP_1575);
S_R10(&l_TMP_1575, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1576; memset(&l_LO_1576, 0, sizeof l_LO_1576);
R26 l_HI_1577; memset(&l_HI_1577, 0, sizeof l_HI_1577);
R10 l_LOC_1578; memset(&l_LOC_1578, 0, sizeof l_LOC_1578);
R10 l_HIC_1579; memset(&l_HIC_1579, 0, sizeof l_HIC_1579);
R10 l_LO_OP_1580; memset(&l_LO_OP_1580, 0, sizeof l_LO_OP_1580);
S_R10(&l_LO_OP_1580, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1581; memset(&l_HI_OP_1581, 0, sizeof l_HI_OP_1581);
S_R10(&l_HI_OP_1581, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1576, r_EXPR(((*(R21 *)rt_nil_check(l_R_1574))).f_A, l_T_1573), 0);
S_R26(&l_HI_1577, r_EXPR(((*(R21 *)rt_nil_check(l_R_1574))).f_B, l_T_1573), 0);
if (((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1573))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1576).f_T), l_T_1573)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1577).f_T), l_T_1573))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1574))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1574))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1580, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1574))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1581, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_INT))
{
{
R26 l_X_1582; memset(&l_X_1582, 0, sizeof l_X_1582);
S_R26(&l_X_1582, r_MKET(l_TMP_1575, (l_V_1572).f_T), 0);
S_R10(&l_LOC_1578, r_FIXED_COMPARE(l_LO_1576, l_X_1582, l_LO_OP_1580), 0);
S_R10(&l_HIC_1579, r_FIXED_COMPARE(l_X_1582, l_HI_1577, l_HI_OP_1581), 0);
}
}
else
{
S_R10(&l_LOC_1578, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1576).f_C, l_LO_OP_1580, l_TMP_1575), 0);
S_R10(&l_HIC_1579, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1575, l_HI_OP_1581, (l_HI_1577).f_C), 0);
}
{ R26 rv1583 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1573), l_TMP_1575, (l_V_1572).f_C, l_LOC_1578), r_FMT1(rt_str("@; })", 5), l_HIC_1579)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1583; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1584 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1584; }
}
{ R10 rv1585 = (p_V).f_C;
return rv1585; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1586 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1586; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1587; memset(&l_B_1587, 0, sizeof l_B_1587);
l_B_1587 = ((rt_int)0LL);
rt_int l_P_1588; memset(&l_P_1588, 0, sizeof l_P_1588);
l_P_1588 = ((rt_int)1LL);
for (;;) {
if ((l_P_1588 >= p_N)) goto L_end1589;
{
l_B_1587 = rt_add(l_B_1587, ((rt_int)1LL));
l_P_1588 = rt_mul(l_P_1588, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1589: ;
{ rt_int rv1590 = l_B_1587;
return rv1590; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1591; memset(&l_M_1591, 0, sizeof l_M_1591);
S_R23(&l_M_1591, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1591).f_OK)
{
{ rt_int rv1592 = (l_M_1591).f_V;
return rv1592; }
}
}
}
}
{ rt_int rv1593 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1593; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1594 = ((rt_int)100000000LL);
return rv1594; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1595 = ((rt_int)15LL);
return rv1595; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1596 = ((rt_int)7LL);
return rv1596; }
}
{ rt_int rv1597 = ((rt_int)15LL);
return rv1597; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1598; memset(&l_SINGLE_1598, 0, sizeof l_SINGLE_1598);
l_SINGLE_1598 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1598)
{
{ rt_int rv1599 = rt_neg(((rt_int)125LL));
return rv1599; }
}
{ rt_int rv1600 = rt_neg(((rt_int)1021LL));
return rv1600; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1598)
{
{ rt_int rv1601 = ((rt_int)128LL);
return rv1601; }
}
{ rt_int rv1602 = ((rt_int)1024LL);
return rv1602; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1598)
{
{ rt_int rv1603 = ((rt_int)25LL);
return rv1603; }
}
{ rt_int rv1604 = ((rt_int)54LL);
return rv1604; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1598)
{
{ rt_int rv1605 = ((rt_int)8LL);
return rv1605; }
}
{ rt_int rv1606 = ((rt_int)11LL);
return rv1606; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1598)
{
{ rt_int rv1607 = ((rt_int)32LL);
return rv1607; }
}
{ rt_int rv1608 = ((rt_int)64LL);
return rv1608; }
}
{ rt_int rv1609 = ((rt_int)0LL);
return rv1609; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1610; memset(&l_K_1610, 0, sizeof l_K_1610);
l_K_1610 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1610 == g_T_ABS))
{
{ R23 rv1611 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1611; }
}
else if ((l_K_1610 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1612 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1612; }
}
}
{ R23 rv1613 = r_SOME(((rt_int)64LL));
return rv1613; }
}
else if ((l_K_1610 == g_T_FLOAT))
{
{ R23 rv1614 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1614; }
}
else if ((l_K_1610 == g_T_BOOL))
{
{ R23 rv1615 = r_SOME(((rt_int)1LL));
return rv1615; }
}
else if ((l_K_1610 == g_T_ENUM))
{
{ R23 rv1616 = r_SOME(r_ENUM_SIZE(p_T));
return rv1616; }
}
else if ((l_K_1610 == g_T_BITS))
{
{ R23 rv1617 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1617; }
}
else if ((l_K_1610 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1618 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1618; }
}
}
else if (((l_K_1610 == g_T_PTR) || (l_K_1610 == g_T_SEM)))
{
{ R23 rv1619 = r_SOME(((rt_int)64LL));
return rv1619; }
}
{ R23 rv1620 = r_NO_MVAL();
return rv1620; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1621; memset(&l_T_1621, 0, sizeof l_T_1621);
l_T_1621 = (p_B).f_T;
rt_int l_K_1622; memset(&l_K_1622, 0, sizeof l_K_1622);
l_K_1622 = ((*(R22 *)rt_nil_check(l_T_1621))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1623 = r_SIZE_OF(l_T_1621, (p_B).f_C);
return rv1623; }
}
if ((l_K_1622 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1624 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE);
return rv1624; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1625 = r_INT_ET(((rt_int)2LL));
return rv1625; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1626 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1626; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1627 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1627; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1628 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE));
return rv1628; }
}
{ R26 rv1629 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE));
return rv1629; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1621))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1630 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1621))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE));
return rv1630; }
}
{ R26 rv1631 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE));
return rv1631; }
}
}
else if ((l_K_1622 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1632 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE);
return rv1632; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1633 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE));
return rv1633; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1634 = r_INT_ET(((rt_int)2LL));
return rv1634; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1635 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE, p_NAME));
return rv1635; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1636; memset(&l_MT_1636, 0, sizeof l_MT_1636);
l_MT_1636 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE));
R10 l_C_1637; memset(&l_C_1637, 0, sizeof l_C_1637);
S_R10(&l_C_1637, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1637, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1638 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C, (p_B).f_SELF), l_MT_1636);
return rv1638; }
}
{ R26 rv1639 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1637), l_MT_1636);
return rv1639; }
}
if (((((*(R22 *)rt_nil_check(l_T_1621))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1640 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1621))).f_HI_C, (p_B).f_SELF), l_MT_1636);
return rv1640; }
}
{ R26 rv1641 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1637), l_MT_1636);
return rv1641; }
}
}
}
else if ((l_K_1622 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1642 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1621))).f_BASE);
return rv1642; }
}
{ R26 rv1643 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1621))).f_BASE);
return rv1643; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1621))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1644 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1621))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1621))).f_BASE);
return rv1644; }
}
{ R26 rv1645 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1621))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1621))).f_BASE);
return rv1645; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1646 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1621))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1621))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1621))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1646; }
}
{ R26 rv1647 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1621))).f_BASE))).f_NLITS);
return rv1647; }
}
}
else if (((l_K_1622 == g_T_STR) || (l_K_1622 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1648 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1648; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1649 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1649; }
}
}
else if ((l_K_1622 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1650 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1621))).f_DIMS);
return rv1650; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1651 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1651; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1652 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1652; }
}
}
else if ((l_K_1622 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1621))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1653 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1653; }
}
{ R26 rv1654 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1654; }
}
}
else if (((l_K_1622 == g_T_ABS) || (l_K_1622 == g_T_REC)))
{
{
R22 * l_U_1655; memset(&l_U_1655, 0, sizeof l_U_1655);
l_U_1655 = l_T_1621;
if ((l_K_1622 == g_T_ABS))
{
l_U_1655 = ((*(R22 *)rt_nil_check(l_T_1621))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1655))).f_KIND == g_T_REC))
{
{
R24 * l_F_1656; memset(&l_F_1656, 0, sizeof l_F_1656);
l_F_1656 = r_FIND_FIELD(l_U_1655, p_NAME);
if ((!(l_F_1656 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1656))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1657 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1656))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1656))).f_T);
return rv1657; }
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
R22 * l_T_1658; memset(&l_T_1658, 0, sizeof l_T_1658);
l_T_1658 = r_REAL_TYPE((p_B).f_T);
R10 l_D_1659; memset(&l_D_1659, 0, sizeof l_D_1659);
S_R10(&l_D_1659, r_NUM(((*(R22 *)rt_nil_check(l_T_1658))).f_DIMS), 0);
R10 l_X_1660; memset(&l_X_1660, 0, sizeof l_X_1660);
S_R10(&l_X_1660, r_NEW_NAME(rt_str("sx", 2)), 0);
R10 l_R_1661; memset(&l_R_1661, 0, sizeof l_R_1661);
S_R10(&l_R_1661, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1662; memset(&l_ELEM_1662, 0, sizeof l_ELEM_1662);
l_ELEM_1662 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R10 l_C_1663; memset(&l_C_1663, 0, sizeof l_C_1663);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R21 * l_TS_1664; memset(&l_TS_1664, 0, sizeof l_TS_1664);
l_TS_1664 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_TS_1664))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R21 *)rt_nil_check(l_TS_1664))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_TS_1664))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1662 = r_RESOLVE(l_TS_1664);
}
}
{
R22 * l_A_1665; memset(&l_A_1665, 0, sizeof l_A_1665);
l_A_1665 = r_ARRAY_OF(l_ELEM_1662, ((rt_int)1LL));
S_R10(&l_C_1663, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1658), l_X_1660, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1665))).f_CNAME), 0);
S_R10(&l_C_1663, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1663, l_R_1661, l_R_1661, l_R_1661), 0);
S_R10(&l_C_1663, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1663, l_R_1661, l_R_1661, l_D_1659), 0);
S_R10(&l_C_1663, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1663, l_R_1661, l_D_1659, l_R_1661), 0);
S_R10(&l_C_1663, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1663, l_D_1659), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R10(&l_C_1663, r_FMT2(rt_str("@ @", 3), l_C_1663, r_INIT_CODE(l_ELEM_1662, r_FMT1(rt_str("@.p[i]", 6), l_R_1661))), 0);
S_R10(&l_C_1663, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1663, l_R_1661, l_X_1660, l_R_1661), 0);
S_R10(&l_C_1663, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1663, l_X_1660), 0);
}
else
{
S_R10(&l_C_1663, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1663, l_R_1661, l_X_1660, l_X_1660), 0);
S_R10(&l_C_1663, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1663, l_X_1660, l_X_1660, l_X_1660), 0);
}
{ R26 rv1666 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1663, l_R_1661), l_A_1665);
return rv1666; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1667; memset(&l_N_1667, 0, sizeof l_N_1667);
l_N_1667 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1667))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1668 = l_N_1667;
return rv1668; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1669; memset(&l_K_1669, 0, sizeof l_K_1669);
l_K_1669 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1669 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1670 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1670; }
}
}
{ R26 rv1671 = r_INT_ET(((rt_int)64LL));
return rv1671; }
}
else if ((l_K_1669 == g_T_FLOAT))
{
{ R26 rv1672 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1672; }
}
else if ((l_K_1669 == g_T_BOOL))
{
{ R26 rv1673 = r_INT_ET(((rt_int)1LL));
return rv1673; }
}
else if ((l_K_1669 == g_T_ENUM))
{
{ R26 rv1674 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1674; }
}
else if ((l_K_1669 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1675 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1675; }
}
{ R26 rv1676 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1676; }
}
else if ((l_K_1669 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1677 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1677; }
}
{ R26 rv1678 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1678; }
}
else if (((l_K_1669 == g_T_PTR) || (l_K_1669 == g_T_SEM)))
{
{ R26 rv1679 = r_INT_ET(((rt_int)64LL));
return rv1679; }
}
else if ((l_K_1669 == g_T_ABS))
{
{ R26 rv1680 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1680; }
}
else if ((l_K_1669 == g_T_ARR))
{
{ R26 rv1681 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1681; }
}
{ R26 rv1682 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1682; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1683 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1683; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1684 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1684; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1685; memset(&l_RT_1685, 0, sizeof l_RT_1685);
l_RT_1685 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1686; memset(&l_TMP_1686, 0, sizeof l_TMP_1686);
S_R10(&l_TMP_1686, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1687; memset(&l_C_1687, 0, sizeof l_C_1687);
S_R10(&l_C_1687, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1686, l_TMP_1686, l_TMP_1686), 0);
S_R10(&l_C_1687, r_FMT3(rt_str("@@ @; })", 8), l_C_1687, r_INIT_CODE(l_RT_1685, l_TMP_1686), l_TMP_1686), 0);
{ R26 rv1688 = r_MKET(l_C_1687, p_T);
return rv1688; }
}
}
{ R26 rv1689 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1689; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1690 = 0;
return rv1690; }
}
{
R12 * l_Y_1691; memset(&l_Y_1691, 0, sizeof l_Y_1691);
l_Y_1691 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1691 == NULL))
{
{ rt_int rv1692 = 0;
return rv1692; }
}
{ rt_int rv1693 = (((*(R12 *)rt_nil_check(l_Y_1691))).f_KIND == g_Y_TYPE);
return rv1693; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1694 = r_INT_ET(((rt_int)100000000LL));
return rv1694; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1695 = r_INT_ET(((rt_int)15LL));
return rv1695; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1696 = r_INT_ET(((rt_int)0LL));
return rv1696; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1697; memset(&l_T_1697, 0, sizeof l_T_1697);
l_T_1697 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1697 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1697 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1697 = r_REAL_TYPE(l_T_1697);
if ((!(((*(R22 *)rt_nil_check(l_T_1697))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1697))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1698; memset(&l_TMP_1698, 0, sizeof l_TMP_1698);
S_R10(&l_TMP_1698, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1699; memset(&l_R_1699, 0, sizeof l_R_1699);
S_R10(&l_R_1699, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1697))).f_CNAME, l_TMP_1698, l_TMP_1698, l_TMP_1698), 0);
R24 * l_F_1700; memset(&l_F_1700, 0, sizeof l_F_1700);
l_F_1700 = ((*(R22 *)rt_nil_check(l_T_1697))).f_FIELDS;
S_R10(&l_R_1699, r_FMT2(rt_str("@@", 2), l_R_1699, r_INIT_CODE(l_T_1697, l_TMP_1698)), 0);
for (;;) {
if ((l_F_1700 == NULL)) goto L_end1701;
{
if ((((*(R24 *)rt_nil_check(l_F_1700))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1700))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1700))).f_LABELS, (r_TAG_VALUE(l_T_1697, ((*(R24 *)rt_nil_check(l_F_1700))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1697, ((*(R24 *)rt_nil_check(l_F_1700))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1702; memset(&l_INIT_1702, 0, sizeof l_INIT_1702);
l_INIT_1702 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1700))).f_NAME);
if ((l_INIT_1702 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1700))).f_NAME);
}
S_R10(&l_R_1699, r_FMT2(rt_str("@ @", 3), l_R_1699, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1700))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1698, ((*(R24 *)rt_nil_check(l_F_1700))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1702))).f_A, ((*(R24 *)rt_nil_check(l_F_1700))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1702))).f_LINE, l_TMP_1698)), 0);
}
}
}
l_F_1700 = ((*(R24 *)rt_nil_check(l_F_1700))).f_NEXT;
}
RT_B_TICK();
} L_end1701: ;
{
R21 * l_P_1703; memset(&l_P_1703, 0, sizeof l_P_1703);
l_P_1703 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1703 == NULL)) goto L_end1704;
{
{
R24 * l_G_1705; memset(&l_G_1705, 0, sizeof l_G_1705);
l_G_1705 = r_FIND_VFIELD(l_T_1697, ((*(R21 *)rt_nil_check(l_P_1703))).f_NAME);
if ((l_G_1705 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1703))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1703))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1705))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1703))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1703))).f_NAME);
}
r_CHECK_VARIANT(l_G_1705, l_T_1697, NULL, ((*(R21 *)rt_nil_check(l_P_1703))).f_LINE);
}
l_P_1703 = ((*(R21 *)rt_nil_check(l_P_1703))).f_NEXT;
}
RT_B_TICK();
} L_end1704: ;
}
{ R26 rv1706 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1699, l_TMP_1698), l_T_1697);
return rv1706; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1707; memset(&l_P_1707, 0, sizeof l_P_1707);
l_P_1707 = p_L;
for (;;) {
if ((l_P_1707 == NULL)) goto L_end1708;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1707))).f_NAME, p_NAME))
{
{ R21 * rv1709 = l_P_1707;
return rv1709; }
}
l_P_1707 = ((*(R21 *)rt_nil_check(l_P_1707))).f_NEXT;
}
RT_B_TICK();
} L_end1708: ;
{ R21 * rv1710 = NULL;
return rv1710; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1711; memset(&l_DIMS_1711, 0, sizeof l_DIMS_1711);
l_DIMS_1711 = ((rt_int)0LL);
R21 * l_P_1712; memset(&l_P_1712, 0, sizeof l_P_1712);
l_P_1712 = p_E;
R22 * l_ELEM_1713; memset(&l_ELEM_1713, 0, sizeof l_ELEM_1713);
l_ELEM_1713 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1712))).f_KIND == g_N_ARRCONS))) goto L_end1714;
{
l_DIMS_1711 = rt_add(l_DIMS_1711, ((rt_int)1LL));
l_P_1712 = ((*(R21 *)rt_nil_check(l_P_1712))).f_A;
}
RT_B_TICK();
} L_end1714: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1713 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1713 == NULL))
{
l_ELEM_1713 = (r_EXPR(l_P_1712, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1713))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1713))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1713 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1711);
{
R22 * l_A_1715; memset(&l_A_1715, 0, sizeof l_A_1715);
l_A_1715 = r_ARRAY_OF(l_ELEM_1713, l_DIMS_1711);
R10 l_TMP_1716; memset(&l_TMP_1716, 0, sizeof l_TMP_1716);
S_R10(&l_TMP_1716, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1717; memset(&l_R_1717, 0, sizeof l_R_1717);
S_R10(&l_R_1717, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1715))).f_CNAME, l_TMP_1716, l_TMP_1716), 0);
rt_int l_K_1718; memset(&l_K_1718, 0, sizeof l_K_1718);
l_K_1718 = ((rt_int)0LL);
{
R21 * l_Q_1719; memset(&l_Q_1719, 0, sizeof l_Q_1719);
l_Q_1719 = p_E;
R25 * l_TAIL_1720; memset(&l_TAIL_1720, 0, sizeof l_TAIL_1720);
l_TAIL_1720 = NULL;
{ rt_int it1722_lo = ((rt_int)1LL), it1722_hi = l_DIMS_1711;
for (rt_int it1722 = it1722_lo; it1722 <= it1722_hi; it1722++) {
{
{
R25 * l_B_1723; memset(&l_B_1723, 0, sizeof l_B_1723);
l_B_1723 = ((R25 *)rt_alloc(sizeof (R25)));
rt_int l_N_1724; memset(&l_N_1724, 0, sizeof l_N_1724);
l_N_1724 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_Q_1719))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1723)), ({ R25 rc1725; memset(&rc1725, 0, sizeof rc1725);  S_R10(&rc1725.f_LO, r_MK(rt_str("0", 1)), 0); S_R10(&rc1725.f_HI, r_NUM(rt_sub(l_N_1724, ((rt_int)1LL))), 0); S_R23(&rc1725.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc1725.f_MHI, r_SOME(rt_sub(l_N_1724, ((rt_int)1LL))), 0); rc1725.f_ANYARG = 0; rc1725.f_NEXT = NULL; rc1725; }), 0);
if ((l_TAIL_1720 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1715))).f_BOUNDS = l_B_1723;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1720))).f_NEXT = l_B_1723;
}
l_TAIL_1720 = l_B_1723;
}
l_Q_1719 = ((*(R21 *)rt_nil_check(l_Q_1719))).f_A;
}
RT_B_TICK();
if (it1722 == it1722_hi) break;
} } L_end1721: ;
}
S_R10(&l_R_1717, r_FMT2(rt_str("@@); ", 5), l_R_1717, l_TMP_1716), 0);
l_P_1712 = p_E;
{ rt_int it1727_lo = ((rt_int)0LL), it1727_hi = rt_sub(l_DIMS_1711, ((rt_int)1LL));
for (rt_int it1727 = it1727_lo; it1727 <= it1727_hi; it1727++) {
{
S_R10(&l_R_1717, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1717, l_TMP_1716, r_NUM(it1727), l_TMP_1716), 0);
S_R10(&l_R_1717, r_FMT3(rt_str("@@] = @;", 8), l_R_1717, r_NUM(it1727), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1712))).f_A), ((rt_int)1LL)))), 0);
l_P_1712 = ((*(R21 *)rt_nil_check(l_P_1712))).f_A;
}
RT_B_TICK();
if (it1727 == it1727_hi) break;
} } L_end1726: ;
S_R10(&l_R_1717, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1717, l_TMP_1716, l_TMP_1716, r_NUM(l_DIMS_1711)), 0);
S_R10(&l_R_1717, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1717, l_TMP_1716, l_TMP_1716), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1711, l_A_1715, l_TMP_1716, &l_R_1717, &l_K_1718);
{ R26 rv1728 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1717, l_TMP_1716), l_A_1715);
return rv1728; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R21 * l_P_1729; memset(&l_P_1729, 0, sizeof l_P_1729);
l_P_1729 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_1729 == NULL)) goto L_end1730;
{
if (((!(((*(R21 *)rt_nil_check(l_P_1729))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_1729, ((*(R21 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_1729, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_1729 = ((*(R21 *)rt_nil_check(l_P_1729))).f_NEXT;
}
RT_B_TICK();
} L_end1730: ;
}
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv1731 = ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv1731; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv1732 = 0;
return rv1732; }
}
{ rt_int rv1733 = r_SAME_SHAPE(((*(R21 *)rt_nil_check(p_A))).f_A, ((*(R21 *)rt_nil_check(p_B))).f_A);
return rv1733; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1734; memset(&l_P_1734, 0, sizeof l_P_1734);
l_P_1734 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1734 == NULL)) goto L_end1735;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1734, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1734))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1734))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1734, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1734))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1734 = ((*(R21 *)rt_nil_check(l_P_1734))).f_NEXT;
}
RT_B_TICK();
} L_end1735: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1736; memset(&l_T_1736, 0, sizeof l_T_1736);
l_T_1736 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1736))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1736))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1736))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1737 = l_T_1736;
return rv1737; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1738; memset(&l_T_1738, 0, sizeof l_T_1738);
l_T_1738 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1739; memset(&l_V_1739, 0, sizeof l_V_1739);
S_R26(&l_V_1739, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1738), 0);
R22 * l_RT_1740; memset(&l_RT_1740, 0, sizeof l_RT_1740);
l_RT_1740 = r_REAL_TYPE(l_T_1738);
if (((((*(R22 *)rt_nil_check((l_V_1739).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1740))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1740))).f_KIND == g_T_INT))
{
{ R26 rv1741 = r_MKET(r_RANGE_CHECK(l_RT_1740, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1739).f_C), r_NO_TEXT()), l_T_1738);
return rv1741; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1740))).f_KIND == g_T_BOOL))
{
{ R26 rv1742 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1739).f_C), l_T_1738);
return rv1742; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1740))).f_KIND == g_T_ENUM))
{
{ R26 rv1743 = r_MKET(r_ENUM_OF_BITS(l_RT_1740, (l_V_1739).f_C), l_T_1738);
return rv1743; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1740))).f_KIND == g_T_FLOAT))
{
{ R26 rv1744 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1739).f_C), l_T_1738);
return rv1744; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1740))).f_KIND == g_T_STR))
{
{ R26 rv1745 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1739).f_C), l_T_1738);
return rv1745; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1746; memset(&l_C_1746, 0, sizeof l_C_1746);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1746, r_CONVERT(l_V_1739, l_T_1738, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1740))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1740))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1740))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1740))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1739).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1746, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1746, ((*(R22 *)rt_nil_check(l_RT_1740))).f_LEN_C), 0);
}
{ R26 rv1747 = r_MKET(l_C_1746, l_T_1738);
return rv1747; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1748 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1748; }
}
}
{ R10 rv1749 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1749; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1750; memset(&l_NAME_1750, 0, sizeof l_NAME_1750);
S_R10(&l_NAME_1750, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1751; memset(&l_L_1751, 0, sizeof l_L_1751);
l_L_1751 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1752; memset(&l_R_1752, 0, sizeof l_R_1752);
S_R10(&l_R_1752, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1751 == NULL)) goto L_end1753;
{
{
R21 * l_V_1754; memset(&l_V_1754, 0, sizeof l_V_1754);
l_V_1754 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1755; memset(&l_FOUND_1755, 0, sizeof l_FOUND_1755);
l_FOUND_1755 = 0;
for (;;) {
if ((l_V_1754 == NULL)) goto L_end1756;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1754))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1751))).f_NAME))
{
S_R10(&l_R_1752, r_FMT2(rt_str("@@, ", 4), l_R_1752, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1754))).f_A, NULL)).f_C), 0);
l_FOUND_1755 = 1;
}
l_V_1754 = ((*(R21 *)rt_nil_check(l_V_1754))).f_NEXT;
}
RT_B_TICK();
} L_end1756: ;
if ((!l_FOUND_1755))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1751))).f_NAME);
}
}
l_L_1751 = ((*(R21 *)rt_nil_check(l_L_1751))).f_NEXT;
}
RT_B_TICK();
} L_end1753: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1750, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1752, l_NAME_1750, l_NAME_1750));
{ R10 rv1757 = r_FMT2(rt_str("@, @", 4), l_NAME_1750, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1757; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1758; memset(&l_SEM_1758, 0, sizeof l_SEM_1758);
l_SEM_1758 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1758 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1758)
{
{
R22 * l_T_1759; memset(&l_T_1759, 0, sizeof l_T_1759);
l_T_1759 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1759 = p_WANT;
}
}
{ R26 rv1760 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1759))).f_SCALE)), l_T_1759);
return rv1760; }
}
}
{
R22 * l_T_1761; memset(&l_T_1761, 0, sizeof l_T_1761);
l_T_1761 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1762; memset(&l_P_1762, 0, sizeof l_P_1762);
l_P_1762 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1762))).f_TARGET = l_T_1761;
((*(R22 *)rt_nil_check(l_P_1762))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1761))
{
{ R26 rv1763 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1761), r_INIT_CODE(l_T_1761, r_MK(rt_str("(*p)", 4)))), l_P_1762);
return rv1763; }
}
{ R26 rv1764 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1761), r_CTYPE(l_T_1761)), l_P_1762);
return rv1764; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1765; memset(&l_P_1765, 0, sizeof l_P_1765);
l_P_1765 = p_L;
{ rt_int it1767_lo = ((rt_int)1LL), it1767_hi = p_K;
for (rt_int it1767 = it1767_lo; it1767 <= it1767_hi; it1767++) {
{
if ((!(l_P_1765 == NULL)))
{
l_P_1765 = ((*(R21 *)rt_nil_check(l_P_1765))).f_NEXT;
}
}
RT_B_TICK();
if (it1767 == it1767_hi) break;
} } L_end1766: ;
{ R21 * rv1768 = l_P_1765;
return rv1768; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1769; memset(&l_N_1769, 0, sizeof l_N_1769);
l_N_1769 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1769 < p_LO) || (l_N_1769 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1770; memset(&l_L_1770, 0, sizeof l_L_1770);
l_L_1770 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1770 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1770))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1770))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1770))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1771 = r_MK(rt_str("1", 1));
return rv1771; }
}
{ R10 rv1772 = r_MK(rt_str("0", 1));
return rv1772; }
}
if (((((*(R21 *)rt_nil_check(l_L_1770))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1770))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1770))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1773 = r_MK(rt_str("1", 1));
return rv1773; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1770))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1774 = r_MK(rt_str("0", 1));
return rv1774; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1775 = r_MK(rt_str("1", 1));
return rv1775; }
}
{ R10 rv1776 = r_MK(rt_str("0", 1));
return rv1776; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1777 = 0;
return rv1777; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1778 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1778; }
}
{ rt_int rv1779 = 0;
return rv1779; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1780 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1780; }
}
{ R21 * rv1781 = p_E;
return rv1781; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1782; memset(&l_NAMES_1782, 0, sizeof l_NAMES_1782);
l_NAMES_1782 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_1782, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1783; memset(&l_L_1783, 0, sizeof l_L_1783);
l_L_1783 = (p_NAME).f_LEN;
{ rt_int it1785_lo = ((rt_int)0LL), it1785_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1783), ((rt_int)2LL));
for (rt_int it1785 = it1785_lo; it1785 <= it1785_hi; it1785++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1782, it1785, it1785), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1782, rt_add(rt_add(it1785, l_L_1783), ((rt_int)1LL)), rt_add(rt_add(it1785, l_L_1783), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1782, rt_add(it1785, ((rt_int)1LL)), rt_add(it1785, l_L_1783)), r_STR(p_NAME, l_L_1783)))
{
{
rt_int l_J_1786; memset(&l_J_1786, 0, sizeof l_J_1786);
l_J_1786 = rt_add(rt_add(it1785, l_L_1783), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1782, l_J_1786, l_J_1786), rt_str(" ", 1))) goto L_end1787;
{
l_J_1786 = rt_add(l_J_1786, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1787: ;
{ R10 rv1788 = r_MKN(rt_b_slice(l_NAMES_1782, rt_add(rt_add(it1785, l_L_1783), ((rt_int)2LL)), rt_sub(l_J_1786, ((rt_int)1LL))));
return rv1788; }
}
}
}
}
RT_B_TICK();
if (it1785 == it1785_hi) break;
} } L_end1784: ;
{ R10 rv1789 = r_NO_TEXT();
return rv1789; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1790; memset(&l_NAME_1790, 0, sizeof l_NAME_1790);
S_R10(&l_NAME_1790, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1791; memset(&l_LINE_1791, 0, sizeof l_LINE_1791);
l_LINE_1791 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1792; memset(&l_N_1792, 0, sizeof l_N_1792);
l_N_1792 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1790, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1790, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1793; memset(&l_TGT_1793, 0, sizeof l_TGT_1793);
l_TGT_1793 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1794; memset(&l_S_1794, 0, sizeof l_S_1794);
l_S_1794 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1791);
R21 * l_SRC_1795; memset(&l_SRC_1795, 0, sizeof l_SRC_1795);
l_SRC_1795 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1793 == NULL) || (l_SRC_1795 == NULL)))
{
r_FAILT(l_LINE_1791, rt_str("the wrong arguments for ", 24), l_NAME_1790);
}
if (r_TEQS(l_NAME_1790, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1794))).f_A = l_TGT_1793;
}
else
{
if ((l_N_1792 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1791, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1794))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1791);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1794))).f_A))).f_A = l_TGT_1793;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1794))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1794))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1794))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1795), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1790, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1791);
{
R14 l_SAVED_CODE_1796; memset(&l_SAVED_CODE_1796, 0, sizeof l_SAVED_CODE_1796);
S_R14(&l_SAVED_CODE_1796, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1797; memset(&l_C_1797, 0, sizeof l_C_1797);
S_R10(&l_C_1797, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1798; memset(&l_P_1798, 0, sizeof l_P_1798);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1799; memset(&rc1799, 0, sizeof rc1799);  rc1799.f_HEAD = NULL; rc1799.f_TAIL = NULL; rc1799; }), 0);
r_ASSIGN_STMT(l_S_1794);
l_P_1798 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1798 == NULL)) goto L_end1800;
{
S_R10(&l_C_1797, r_FMT2(rt_str("@ @", 3), l_C_1797, ((*(R15 *)rt_nil_check(l_P_1798))).f_T), 0);
l_P_1798 = ((*(R15 *)rt_nil_check(l_P_1798))).f_NEXT;
}
RT_B_TICK();
} L_end1800: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1796, 0);
{ R26 rv1801 = r_MKET(r_CATS(l_C_1797, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1801; }
}
}
}
if (r_TEQS(l_NAME_1790, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1802; memset(&l_S_1802, 0, sizeof l_S_1802);
l_S_1802 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1791);
((*(R21 *)rt_nil_check(l_S_1802))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1802))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1802))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1802))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1803 = r_EXPR(l_S_1802, p_WANT);
return rv1803; }
}
}
{
R10 l_SYM__1804; memset(&l_SYM__1804, 0, sizeof l_SYM__1804);
S_R10(&l_SYM__1804, r_OPERATOR_SYMBOL(l_NAME_1790), 0);
rt_int l_UNARY_OP_1805; memset(&l_UNARY_OP_1805, 0, sizeof l_UNARY_OP_1805);
l_UNARY_OP_1805 = ((r_TEQS(l_NAME_1790, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1790, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1790, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1806; memset(&l_X_1806, 0, sizeof l_X_1806);
if (l_UNARY_OP_1805)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1806 = r_NEW_NODE(g_N_UNOP, l_LINE_1791);
S_R10(&((*(R21 *)rt_nil_check(l_X_1806))).f_NAME, l_SYM__1804, 0);
((*(R21 *)rt_nil_check(l_X_1806))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1807 = r_EXPR(r_QUALIFIED(l_X_1806, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1791), p_WANT);
return rv1807; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1806 = r_BIN_NODE(l_SYM__1804, l_LINE_1791, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1804, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1806))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1790, (l_NAME_1790).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1806))).f_FL = ((rt_int)2LL);
}
{ R26 rv1808 = r_EXPR(r_QUALIFIED(l_X_1806, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1791), p_WANT);
return rv1808; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1809; memset(&l_R_1809, 0, sizeof l_R_1809);
l_R_1809 = p_X;
R21 * l_P_1810; memset(&l_P_1810, 0, sizeof l_P_1810);
l_P_1810 = p_Q;
for (;;) {
if ((l_P_1810 == NULL)) goto L_end1811;
{
if ((l_R_1809 == p_X))
{
l_R_1809 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1809))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1810))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1810))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1810))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1809))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1810))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1809))).f_B = l_P_1810;
}
l_P_1810 = ((*(R21 *)rt_nil_check(l_P_1810))).f_NEXT;
}
RT_B_TICK();
} L_end1811: ;
{ R21 * rv1812 = l_R_1809;
return rv1812; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1813 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1813; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1814; memset(&l_Y_1814, 0, sizeof l_Y_1814);
l_Y_1814 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1814 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1814))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1815; memset(&l_T_1815, 0, sizeof l_T_1815);
l_T_1815 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1814))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1815))).f_KIND == g_T_ENUM))
{
{ R22 * rv1816 = l_T_1815;
return rv1816; }
}
}
}
}
{ R22 * rv1817 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1817; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1818 = 1;
return rv1818; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1819 = 1;
return rv1819; }
}
{ rt_int rv1820 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1820; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1821 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1821; }
}
{ R21 * rv1822 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1822; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1823; memset(&l_NAME_1823, 0, sizeof l_NAME_1823);
S_R10(&l_NAME_1823, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1824; memset(&l_LINE_1824, 0, sizeof l_LINE_1824);
l_LINE_1824 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((((r_OPERATOR_SYMBOL(l_NAME_1823)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1823, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1823, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1823, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1825 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1825; }
}
if ((r_TEQS(l_NAME_1823, rt_str("PUT", 3)) || r_TEQS(l_NAME_1823, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1826; memset(&l_V_1826, 0, sizeof l_V_1826);
S_R26(&l_V_1826, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1826).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1824, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_1826).f_T, rt_str("the terminal", 12), l_LINE_1824);
if (r_TEQS(l_NAME_1823, rt_str("PUT", 3)))
{
{ R26 rv1827 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1826).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1827; }
}
{ R26 rv1828 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1826).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1828; }
}
}
else if (r_TEQS(l_NAME_1823, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1829 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1829; }
}
else if (r_TEQS(l_NAME_1823, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1830 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1830; }
}
else if (r_TEQS(l_NAME_1823, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1831 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1831; }
}
else if (r_TEQS(l_NAME_1823, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1832 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1832; }
}
else if (r_TEQS(l_NAME_1823, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1833 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1833; }
}
else if (r_TEQS(l_NAME_1823, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1834 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1834; }
}
if (r_TEQS(l_NAME_1823, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1835 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1824);
return rv1835; }
}
else if (r_TEQS(l_NAME_1823, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1836 = r_TO_FIXED_CALL(p_E);
return rv1836; }
}
else if (r_TEQS(l_NAME_1823, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1837; memset(&l_V_1837, 0, sizeof l_V_1837);
S_R26(&l_V_1837, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1838; memset(&l_P_1838, 0, sizeof l_P_1838);
S_R23(&l_P_1838, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1839; memset(&l_VT_1839, 0, sizeof l_VT_1839);
l_VT_1839 = r_REAL_TYPE((l_V_1837).f_T);
R22 * l_T_1840; memset(&l_T_1840, 0, sizeof l_T_1840);
l_T_1840 = r_FLOAT_TYPE((l_P_1838).f_V);
R10 l_SINGLE_1841; memset(&l_SINGLE_1841, 0, sizeof l_SINGLE_1841);
S_R10(&l_SINGLE_1841, r_SINGLE_C((l_P_1838).f_V), 0);
R10 l_TR_1842; memset(&l_TR_1842, 0, sizeof l_TR_1842);
S_R10(&l_TR_1842, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1843; memset(&l_R_1843, 0, sizeof l_R_1843);
l_R_1843 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1843 == NULL))
{
l_R_1843 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1843))).f_KIND == g_N_QUAL))
{
l_R_1843 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1843))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1843))).f_NAME).f_LEN), l_LINE_1824);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1843))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1842, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1843))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1824, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1839))).f_KIND == g_T_INT))
{
{ R26 rv1844 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1837).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1839))).f_SCALE), l_SINGLE_1841, l_TR_1842), l_T_1840);
return rv1844; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1839))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1838).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1839))).f_SCALE))))
{
{
R21 * l_Q_1845; memset(&l_Q_1845, 0, sizeof l_Q_1845);
l_Q_1845 = r_NEW_NODE(g_N_QUAL, l_LINE_1824);
R21 * l_SAVED_Q_1846; memset(&l_SAVED_Q_1846, 0, sizeof l_SAVED_Q_1846);
l_SAVED_Q_1846 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1847; memset(&l_L_1847, 0, sizeof l_L_1847);
((*(R21 *)rt_nil_check(l_Q_1845))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1845;
S_R26(&l_L_1847, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1846;
{ R26 rv1848 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1847).f_C, l_SINGLE_1841, l_TR_1842), l_T_1840);
return rv1848; }
}
}
{ R26 rv1849 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1837).f_C, l_SINGLE_1841, l_TR_1842), l_T_1840);
return rv1849; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1839))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1839))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1839))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1824, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1850 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1837).f_C, l_SINGLE_1841, l_TR_1842), l_T_1840);
return rv1850; }
}
r_FAIL(l_LINE_1824, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1823, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1851 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1824);
return rv1851; }
}
else if (r_TEQS(l_NAME_1823, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1852; memset(&l_V_1852, 0, sizeof l_V_1852);
S_R26(&l_V_1852, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1852).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1853 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1852).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1852).f_T))).f_SCALE));
return rv1853; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1852).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1854 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1852).f_C), (l_V_1852).f_T);
return rv1854; }
}
r_FAIL(l_LINE_1824, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1823, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1823, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1855; memset(&l_V_1855, 0, sizeof l_V_1855);
S_R26(&l_V_1855, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1856; memset(&l_T_1856, 0, sizeof l_T_1856);
l_T_1856 = r_REAL_TYPE((l_V_1855).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1856))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1824, rt_str("an enumerated value expected by ", 32), l_NAME_1823);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1856))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1824, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1823);
}
if (r_TEQS(l_NAME_1823, rt_str("SUCC", 4)))
{
{ R26 rv1857 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1855).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1856))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1856))).f_BASE);
return rv1857; }
}
{ R26 rv1858 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1855).f_C), ((*(R22 *)rt_nil_check(l_T_1856))).f_BASE);
return rv1858; }
}
}
else if (r_TEQS(l_NAME_1823, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1859; memset(&l_V_1859, 0, sizeof l_V_1859);
S_R26(&l_V_1859, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1860; memset(&l_K_1860, 0, sizeof l_K_1860);
l_K_1860 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1859).f_T)))).f_KIND;
R22 * l_T_1861; memset(&l_T_1861, 0, sizeof l_T_1861);
l_T_1861 = r_NEW_TYP(l_K_1860);
if (((!(l_K_1860 == g_T_STR)) && (!(l_K_1860 == g_T_BITS))))
{
r_FAIL(l_LINE_1824, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1861))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1859).f_T))).f_BASE;
{ R26 rv1862 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1859).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1861);
return rv1862; }
}
}
else if (r_TEQS(l_NAME_1823, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1863 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1863; }
}
else if (r_TEQS(l_NAME_1823, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1864 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1864; }
}
else if (((r_TEQS(l_NAME_1823, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1823, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1823, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1865; memset(&l_BITS_1865, 0, sizeof l_BITS_1865);
S_R10(&l_BITS_1865, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1823, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1865, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1823, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1865, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_1866; memset(&l_V_1866, 0, sizeof l_V_1866);
S_R26(&l_V_1866, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1866).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_1824, rt_str("a character string expected by ", 31), l_NAME_1823);
}
r_ASCII_ONLY((l_V_1866).f_T, r_STR(l_NAME_1823, (l_NAME_1823).f_LEN), l_LINE_1824);
{ R26 rv1867 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_1866).f_C, l_BITS_1865), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1867; }
}
}
}
else if ((r_TEQS(l_NAME_1823, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1823, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1868; memset(&l_S_1868, 0, sizeof l_S_1868);
S_R23(&l_S_1868, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1869; memset(&l_R_1869, 0, sizeof l_R_1869);
S_R23(&l_R_1869, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1869).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1824, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1824);
if (r_TEQS(l_NAME_1823, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1870 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1868).f_V));
return rv1870; }
}
{ R26 rv1871 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1868).f_V));
return rv1871; }
}
}
else if (((r_TEQS(l_NAME_1823, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1823, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1823, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1872; memset(&l_P_1872, 0, sizeof l_P_1872);
S_R23(&l_P_1872, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1873; memset(&l_T_1873, 0, sizeof l_T_1873);
l_T_1873 = r_FLOAT_TYPE((l_P_1872).f_V);
R10 l_C_1874; memset(&l_C_1874, 0, sizeof l_C_1874);
S_R10(&l_C_1874, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1872).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1874, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1823, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1875 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1874), l_T_1873);
return rv1875; }
}
else if (r_TEQS(l_NAME_1823, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1876 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1874), l_T_1873);
return rv1876; }
}
{ R26 rv1877 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1874), l_T_1873);
return rv1877; }
}
}
else if (r_TEQS(l_NAME_1823, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1878 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1878; }
}
else if (r_TEQS(l_NAME_1823, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1879 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1879; }
}
else if (r_TEQS(l_NAME_1823, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1880 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1880; }
}
{ R26 rv1881 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1881; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1882; memset(&l_T_1882, 0, sizeof l_T_1882);
l_T_1882 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1883; memset(&l_K_1883, 0, sizeof l_K_1883);
l_K_1883 = ((*(R22 *)rt_nil_check(l_T_1882))).f_KIND;
R22 * l_S_1884; memset(&l_S_1884, 0, sizeof l_S_1884);
l_S_1884 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1883 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1882))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1885 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1884);
return rv1885; }
}
{ R26 rv1886 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1882))).f_SCALE)), l_S_1884);
return rv1886; }
}
else if ((l_K_1883 == g_T_FLOAT))
{
{ R26 rv1887 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1882))).f_SCALE)), l_S_1884);
return rv1887; }
}
else if ((l_K_1883 == g_T_BOOL))
{
{ R26 rv1888 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1884);
return rv1888; }
}
else if ((l_K_1883 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1882))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1889 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1884);
return rv1889; }
}
{ R26 rv1890 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1882))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1884);
return rv1890; }
}
else if (((l_K_1883 == g_T_STR) || (l_K_1883 == g_T_BITS)))
{
{ R26 rv1891 = r_MKET((p_V).f_C, l_S_1884);
return rv1891; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1882));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1892; memset(&l_V_1892, 0, sizeof l_V_1892);
S_R26(&l_V_1892, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1893; memset(&l_T_1893, 0, sizeof l_T_1893);
l_T_1893 = r_REAL_TYPE((l_V_1892).f_T);
rt_int l_N_1894; memset(&l_N_1894, 0, sizeof l_N_1894);
l_N_1894 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1895; memset(&l_RND_1895, 0, sizeof l_RND_1895);
S_R10(&l_RND_1895, r_ROUNDING_ARG(p_E, l_N_1894), 0);
rt_int l_S_1896; memset(&l_S_1896, 0, sizeof l_S_1896);
l_S_1896 = ((rt_int)0LL);
if (((l_N_1894 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1896 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1897; memset(&l_K_1897, 0, sizeof l_K_1897);
l_K_1897 = ((rt_int)2LL);
for (;;) {
if ((l_K_1897 >= l_N_1894)) goto L_end1898;
{
{
R21 * l_R_1899; memset(&l_R_1899, 0, sizeof l_R_1899);
l_R_1899 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1897));
if ((r_IS_ROUNDING(l_R_1899) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1897)))).f_KIND == g_N_QUAL) && (l_K_1897 == rt_sub(l_N_1894, ((rt_int)1LL)))))))
{
if ((!(l_K_1897 == rt_sub(l_N_1894, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1899))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1899))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1899))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1899, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1899))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1899))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1899, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1897 = rt_add(l_K_1897, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1898: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1893))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1900 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1896), l_RND_1895), r_INT_TYPE(l_S_1896));
return rv1900; }
}
if ((((*(R22 *)rt_nil_check(l_T_1893))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1901; memset(&l_SAVED_1901, 0, sizeof l_SAVED_1901);
l_SAVED_1901 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1902; memset(&l_C_1902, 0, sizeof l_C_1902);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1895, rt_str("1", 1));
S_R10(&l_C_1902, r_RESCALE_C((l_V_1892).f_C, ((*(R22 *)rt_nil_check(l_T_1893))).f_SCALE, l_S_1896), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1901;
{ R26 rv1903 = r_MKET(l_C_1902, r_INT_TYPE(l_S_1896));
return rv1903; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1893))).f_KIND == g_T_FLOAT))
{
{ R26 rv1904 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1892).f_C, r_NUM(l_S_1896), l_RND_1895), r_INT_TYPE(l_S_1896));
return rv1904; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1893))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1893))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1893))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1893))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1893))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1893))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1905 = r_MKET(r_RESCALE_C((l_V_1892).f_C, ((rt_int)0LL), l_S_1896), r_INT_TYPE(l_S_1896));
return rv1905; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1893))).f_KIND == g_T_BITS))
{
{ R26 rv1906 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1892).f_C), ((rt_int)0LL), l_S_1896), r_INT_TYPE(l_S_1896));
return rv1906; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1893))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_1893, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1907 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1892).f_C, r_NUM(l_S_1896), l_RND_1895), r_INT_TYPE(l_S_1896));
return rv1907; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1892).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1908; memset(&l_T_1908, 0, sizeof l_T_1908);
l_T_1908 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1909; memset(&l_K_1909, 0, sizeof l_K_1909);
l_K_1909 = ((*(R22 *)rt_nil_check(l_T_1908))).f_KIND;
if ((l_K_1909 == g_T_BITS))
{
{ R26 rv1910 = p_V;
return rv1910; }
}
else if ((l_K_1909 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1908))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1908))).f_REPS))).f_B == NULL)))
{
{ R26 rv1911 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1908)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1908)));
return rv1911; }
}
}
{ R26 rv1912 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1908))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1908)));
return rv1912; }
}
else if ((l_K_1909 == g_T_STR))
{
{ R26 rv1913 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1913; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1909 == g_T_INT))
{
{ R26 rv1914 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1914; }
}
else if ((l_K_1909 == g_T_BOOL))
{
{ R26 rv1915 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1915; }
}
else if ((l_K_1909 == g_T_FLOAT))
{
{ R26 rv1916 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1916; }
}
else if ((l_K_1909 == g_T_STR))
{
{ R26 rv1917 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1917; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1908));
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
{ rt_int rv1918 = 0;
return rv1918; }
}
{ rt_int rv1919 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1919; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1920; memset(&l_N_1920, 0, sizeof l_N_1920);
l_N_1920 = ((rt_int)0LL);
R27 * l_P_1921; memset(&l_P_1921, 0, sizeof l_P_1921);
l_P_1921 = p_A;
for (;;) {
if ((l_P_1921 == NULL)) goto L_end1922;
{
l_N_1920 = rt_add(l_N_1920, ((rt_int)1LL));
l_P_1921 = ((*(R27 *)rt_nil_check(l_P_1921))).f_NEXT;
}
RT_B_TICK();
} L_end1922: ;
{ rt_int rv1923 = l_N_1920;
return rv1923; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1924; memset(&l_HEAD_1924, 0, sizeof l_HEAD_1924);
l_HEAD_1924 = NULL;
R27 * l_TAIL_1925; memset(&l_TAIL_1925, 0, sizeof l_TAIL_1925);
l_TAIL_1925 = NULL;
rt_int l_G_1926; memset(&l_G_1926, 0, sizeof l_G_1926);
l_G_1926 = ((rt_int)0LL);
{ rt_int it1928_lo = ((rt_int)0LL), it1928_hi = ((rt_int)2LL);
for (rt_int it1928 = it1928_lo; it1928 <= it1928_hi; it1928++) {
{
{
R21 * l_P_1929; memset(&l_P_1929, 0, sizeof l_P_1929);
l_P_1929 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1928 == ((rt_int)1LL)))
{
l_P_1929 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1928 == ((rt_int)2LL)))
{
l_P_1929 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1929 == NULL)) goto L_end1930;
{
{
R27 * l_A_1931; memset(&l_A_1931, 0, sizeof l_A_1931);
l_A_1931 = r_NODE_ARG(l_P_1929, it1928, NULL);
if ((l_TAIL_1925 == NULL))
{
l_HEAD_1924 = l_A_1931;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1925))).f_NEXT = l_A_1931;
}
l_TAIL_1925 = l_A_1931;
}
l_P_1929 = ((*(R21 *)rt_nil_check(l_P_1929))).f_NEXT;
}
RT_B_TICK();
} L_end1930: ;
}
}
RT_B_TICK();
if (it1928 == it1928_hi) break;
} } L_end1927: ;
{ R27 * rv1932 = l_HEAD_1924;
return rv1932; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1933; memset(&l_SAVED_1933, 0, sizeof l_SAVED_1933);
l_SAVED_1933 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1934; memset(&l_SAVED_Q_1934, 0, sizeof l_SAVED_Q_1934);
l_SAVED_Q_1934 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1935; memset(&l_V_1935, 0, sizeof l_V_1935);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1935, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1933;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1934;
{ R26 rv1936 = l_V_1935;
return rv1936; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1937; memset(&l_ARGS_1937, 0, sizeof l_ARGS_1937);
l_ARGS_1937 = r_CALL_ARGS(p_E);
R12 * l_Y_1938; memset(&l_Y_1938, 0, sizeof l_Y_1938);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1939 = r_START_IO_CALL(p_E);
return rv1939; }
}
l_Y_1938 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1938 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1938))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1940 = r_BUILTIN(p_E, p_WANT);
return rv1940; }
}
{ R26 rv1941 = r_CALL_SYM(l_Y_1938, l_ARGS_1937, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1941; }
}
l_Y_1938 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1937, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1938 == NULL))
{
{
R12 * l_P_1942; memset(&l_P_1942, 0, sizeof l_P_1942);
l_P_1942 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1942 == NULL)) goto L_end1943;
{
if ((((*(R12 *)rt_nil_check(l_P_1942))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1944 = r_BUILTIN(p_E, p_WANT);
return rv1944; }
}
l_P_1942 = r_LOOKUP_NEXT(l_P_1942);
}
RT_B_TICK();
} L_end1943: ;
}
{
R12 * l_B_1945; memset(&l_B_1945, 0, sizeof l_B_1945);
l_B_1945 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1945 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1945))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1946 = r_BUILTIN(p_E, p_WANT);
return rv1946; }
}
if (((((*(R12 *)rt_nil_check(l_B_1945))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1945))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_1947; memset(&l_BASE_1947, 0, sizeof l_BASE_1947);
S_R10(&l_BASE_1947, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_1947).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_1948; memset(&l_N_1948, 0, sizeof l_N_1948);
l_N_1948 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_1948))).f_NAME, l_BASE_1947, 0);
{ R26 rv1949 = r_BUILTIN(l_N_1948, p_WANT);
return rv1949; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1950 = r_CALL_SYM(l_Y_1938, l_ARGS_1937, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1950; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_1951; memset(&l_S_1951, 0, sizeof l_S_1951);
l_S_1951 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1951, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1953_lo = ((rt_int)1LL), it1953_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1953 = it1953_lo; it1953 <= it1953_hi; it1953++) {
{
if (rt_b_eq(rt_b_slice(l_S_1951, it1953, it1953), rt_str("$", 1)))
{
{
R10 l_P_1954; memset(&l_P_1954, 0, sizeof l_P_1954);
S_R10(&l_P_1954, r_MKN(rt_b_slice(l_S_1951, ((rt_int)0LL), rt_sub(it1953, ((rt_int)1LL)))), 0);
R10 l_B_1955; memset(&l_B_1955, 0, sizeof l_B_1955);
S_R10(&l_B_1955, r_MKN(rt_b_slice(l_S_1951, rt_add(it1953, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_1954) || r_TEQS(l_P_1954, rt_str("INTEGER", 7))) || r_TEQS(l_P_1954, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_1954, rt_str("ENUM", 4))) || r_TEQS(l_P_1954, rt_str("ARRAY", 5))) || r_TEQS(l_P_1954, rt_str("RECORD", 6))) || r_TEQS(l_P_1954, rt_str("PTR", 3))) || r_TEQS(l_P_1954, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_1956; memset(&l_Y_1956, 0, sizeof l_Y_1956);
l_Y_1956 = r_LOOKUP(l_B_1955);
for (;;) {
if ((l_Y_1956 == NULL)) goto L_end1957;
{
if ((((*(R12 *)rt_nil_check(l_Y_1956))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv1958 = l_B_1955;
return rv1958; }
}
l_Y_1956 = r_LOOKUP_NEXT(l_Y_1956);
}
RT_B_TICK();
} L_end1957: ;
}
}
}
{ R10 rv1959 = r_NO_TEXT();
return rv1959; }
}
}
RT_B_TICK();
if (it1953 == it1953_hi) break;
} } L_end1952: ;
{ R10 rv1960 = r_NO_TEXT();
return rv1960; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1961; memset(&l_B_1961, 0, sizeof l_B_1961);
l_B_1961 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1962; memset(&l_S_1962, 0, sizeof l_S_1962);
l_S_1962 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1962, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1964_lo = ((rt_int)1LL), it1964_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1964 = it1964_lo; it1964 <= it1964_hi; it1964++) {
{
if (rt_b_eq(rt_b_slice(l_S_1962, it1964, it1964), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1962, ((rt_int)0LL), rt_sub(it1964, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1965 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1962, rt_add(it1964, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1965; }
}
goto L_end1963;
}
}
RT_B_TICK();
if (it1964 == it1964_hi) break;
} } L_end1963: ;
}
for (;;) {
if ((l_B_1961 == NULL)) goto L_end1966;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1961))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1961))).f_NAME, p_NAME)))
{
{ R12 * rv1967 = ((*(R20 *)rt_nil_check(l_B_1961))).f_R;
return rv1967; }
}
l_B_1961 = ((*(R20 *)rt_nil_check(l_B_1961))).f_NEXT;
}
RT_B_TICK();
} L_end1966: ;
{ R12 * rv1968 = NULL;
return rv1968; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1969 = 0;
return rv1969; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1970 = 0;
return rv1970; }
}
}
}
{ rt_int rv1971 = 1;
return rv1971; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1972; memset(&l_Y_1972, 0, sizeof l_Y_1972);
l_Y_1972 = r_LOOKUP(p_NAME);
R12 * l_BEST_1973; memset(&l_BEST_1973, 0, sizeof l_BEST_1973);
l_BEST_1973 = NULL;
rt_int l_BEST_SCORE_1974; memset(&l_BEST_SCORE_1974, 0, sizeof l_BEST_SCORE_1974);
l_BEST_SCORE_1974 = ((rt_int)0LL);
rt_int l_TIES_1975; memset(&l_TIES_1975, 0, sizeof l_TIES_1975);
l_TIES_1975 = ((rt_int)0LL);
rt_int l_COUNT_1976; memset(&l_COUNT_1976, 0, sizeof l_COUNT_1976);
l_COUNT_1976 = ((rt_int)0LL);
rt_int l_N_1977; memset(&l_N_1977, 0, sizeof l_N_1977);
l_N_1977 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1972 == NULL)) goto L_end1978;
{
if ((!r_IS_ROUTINE(l_Y_1972)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1972))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1978;
}
}
else if (r_CANDIDATE(l_Y_1972, p_NAME))
{
{
R12 * l_R_1979; memset(&l_R_1979, 0, sizeof l_R_1979);
l_R_1979 = r_ORIGINAL(l_Y_1972);
rt_int l_SCORE_1980; memset(&l_SCORE_1980, 0, sizeof l_SCORE_1980);
r_ROUTINE_HEADER(l_R_1979);
if ((((r_PARAM_COUNT(l_R_1979) == l_N_1977) && (!r_SEEN_ROUTINE(l_R_1979, p_NAME, l_Y_1972))) && (!r_HIDDEN_ROUTINE(l_R_1979, p_NAME, l_Y_1972))))
{
l_COUNT_1976 = rt_add(l_COUNT_1976, ((rt_int)1LL));
l_SCORE_1980 = r_MATCH_SCORE(l_R_1979, p_ARGS);
if ((l_SCORE_1980 > l_BEST_SCORE_1974))
{
l_BEST_1973 = l_R_1979;
l_BEST_SCORE_1974 = l_SCORE_1980;
l_TIES_1975 = ((rt_int)0LL);
}
else if (((l_SCORE_1980 == l_BEST_SCORE_1974) && (l_SCORE_1980 > ((rt_int)0LL))))
{
l_TIES_1975 = rt_add(l_TIES_1975, ((rt_int)1LL));
}
}
}
}
l_Y_1972 = r_LOOKUP_NEXT(l_Y_1972);
}
RT_B_TICK();
} L_end1978: ;
if (((l_TIES_1975 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1981 = l_BEST_1973;
return rv1981; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1982; memset(&l_Y_1982, 0, sizeof l_Y_1982);
l_Y_1982 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1982 == p_STOP) || (l_Y_1982 == NULL))) goto L_end1983;
{
if ((((*(R12 *)rt_nil_check(l_Y_1982))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1982) == p_R))
{
{ rt_int rv1984 = 1;
return rv1984; }
}
}
l_Y_1982 = r_LOOKUP_NEXT(l_Y_1982);
}
RT_B_TICK();
} L_end1983: ;
{ rt_int rv1985 = 0;
return rv1985; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1986; memset(&l_Y_1986, 0, sizeof l_Y_1986);
l_Y_1986 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1986 == p_STOP) || (l_Y_1986 == NULL))) goto L_end1987;
{
if (((((*(R12 *)rt_nil_check(l_Y_1986))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_1986))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_1988; memset(&l_O_1988, 0, sizeof l_O_1988);
l_O_1988 = r_ORIGINAL(l_Y_1986);
if ((!(l_O_1988 == p_R)))
{
r_ROUTINE_HEADER(l_O_1988);
if (r_SAME_SIGNATURE(l_O_1988, p_R))
{
{ rt_int rv1989 = 1;
return rv1989; }
}
}
}
}
l_Y_1986 = r_LOOKUP_NEXT(l_Y_1986);
}
RT_B_TICK();
} L_end1987: ;
{ rt_int rv1990 = 0;
return rv1990; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_1991; memset(&l_P_1991, 0, sizeof l_P_1991);
l_P_1991 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_1992; memset(&l_Q_1992, 0, sizeof l_Q_1992);
l_Q_1992 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv1993 = 0;
return rv1993; }
}
for (;;) {
if (((l_P_1991 == NULL) || (l_Q_1992 == NULL))) goto L_end1994;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1991))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_1992))).f_MODE)))
{
{ rt_int rv1995 = 0;
return rv1995; }
}
if (((((*(R28 *)rt_nil_check(l_P_1991))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_1992))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_1991))).f_T == ((*(R28 *)rt_nil_check(l_Q_1992))).f_T)))
{
{ rt_int rv1996 = 0;
return rv1996; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1991))).f_T, ((*(R28 *)rt_nil_check(l_Q_1992))).f_T)))
{
{ rt_int rv1997 = 0;
return rv1997; }
}
l_P_1991 = ((*(R28 *)rt_nil_check(l_P_1991))).f_NEXT;
l_Q_1992 = ((*(R28 *)rt_nil_check(l_Q_1992))).f_NEXT;
}
RT_B_TICK();
} L_end1994: ;
{ rt_int rv1998 = ((l_P_1991 == NULL) && (l_Q_1992 == NULL));
return rv1998; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_1999; memset(&l_N_1999, 0, sizeof l_N_1999);
l_N_1999 = ((rt_int)0LL);
R28 * l_P_2000; memset(&l_P_2000, 0, sizeof l_P_2000);
l_P_2000 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2000 == NULL)) goto L_end2001;
{
l_N_1999 = rt_add(l_N_1999, ((rt_int)1LL));
l_P_2000 = ((*(R28 *)rt_nil_check(l_P_2000))).f_NEXT;
}
RT_B_TICK();
} L_end2001: ;
{ rt_int rv2002 = l_N_1999;
return rv2002; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2003; memset(&l_P_2003, 0, sizeof l_P_2003);
l_P_2003 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2004; memset(&l_A_2004, 0, sizeof l_A_2004);
l_A_2004 = p_ARGS;
rt_int l_EXACT_2005; memset(&l_EXACT_2005, 0, sizeof l_EXACT_2005);
l_EXACT_2005 = 1;
R20 * l_BS_2006; memset(&l_BS_2006, 0, sizeof l_BS_2006);
l_BS_2006 = r_NEW_BINDS();
R22 * l_PT_2007; memset(&l_PT_2007, 0, sizeof l_PT_2007);
for (;;) {
if ((l_P_2003 == NULL)) goto L_end2008;
{
l_PT_2007 = r_FORMAL_VIEW(p_R, l_P_2003);
if ((!(((*(R28 *)rt_nil_check(l_P_2003))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2004))).f_MODE)))
{
{ rt_int rv2009 = ((rt_int)0LL);
return rv2009; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2003))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2003, l_A_2004, l_BS_2006)))
{
{ rt_int rv2010 = ((rt_int)0LL);
return rv2010; }
}
}
else if ((l_PT_2007 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2004))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2004))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2011 = ((rt_int)0LL);
return rv2011; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2004))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2004))).f_E, l_PT_2007)))
{
{ rt_int rv2012 = ((rt_int)0LL);
return rv2012; }
}
}
else
{
r_TYPE_ARG(l_A_2004);
{
R22 * l_AT_2013; memset(&l_AT_2013, 0, sizeof l_AT_2013);
l_AT_2013 = (((*(R27 *)rt_nil_check(l_A_2004))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2007, l_AT_2013) || (((((*(R22 *)rt_nil_check(l_AT_2013))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2007)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2014 = ((rt_int)0LL);
return rv2014; }
}
if ((!r_SAME_TYPE(l_PT_2007, l_AT_2013)))
{
if ((((*(R28 *)rt_nil_check(l_P_2003))).f_MODE == g_M_INOUT))
{
{ rt_int rv2015 = ((rt_int)0LL);
return rv2015; }
}
l_EXACT_2005 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2013)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2007)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2003))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2013))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2007))).f_SCALE)))
{
{ rt_int rv2016 = ((rt_int)0LL);
return rv2016; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2003))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2007))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2013))).f_SCALE)))
{
{ rt_int rv2017 = ((rt_int)0LL);
return rv2017; }
}
}
}
}
l_P_2003 = ((*(R28 *)rt_nil_check(l_P_2003))).f_NEXT;
l_A_2004 = ((*(R27 *)rt_nil_check(l_A_2004))).f_NEXT;
}
RT_B_TICK();
} L_end2008: ;
if (l_EXACT_2005)
{
{ rt_int rv2018 = ((rt_int)2LL);
return rv2018; }
}
{ rt_int rv2019 = ((rt_int)1LL);
return rv2019; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2020; memset(&l_RT_2020, 0, sizeof l_RT_2020);
l_RT_2020 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2020))).f_KIND == g_T_ENUM))
{
{ rt_int rv2021 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_2020) == NULL));
return rv2021; }
}
{ rt_int rv2022 = 0;
return rv2022; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2023 = (((*(R22 *)rt_nil_check(l_RT_2020))).f_KIND == g_T_PTR);
return rv2023; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2024 = (((*(R22 *)rt_nil_check(l_RT_2020))).f_KIND == g_T_REC);
return rv2024; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2025 = (((*(R22 *)rt_nil_check(l_RT_2020))).f_KIND == g_T_ARR);
return rv2025; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2026 = (((*(R22 *)rt_nil_check(l_RT_2020))).f_KIND == g_T_INT);
return rv2026; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2027 = ((((*(R22 *)rt_nil_check(l_RT_2020))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2020))).f_KIND == g_T_SEM));
return rv2027; }
}
{ rt_int rv2028 = 0;
return rv2028; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2029; memset(&l_Y_2029, 0, sizeof l_Y_2029);
l_Y_2029 = r_ORIGINAL(p_Y0);
R28 * l_P_2030; memset(&l_P_2030, 0, sizeof l_P_2030);
R27 * l_A_2031; memset(&l_A_2031, 0, sizeof l_A_2031);
l_A_2031 = p_ARGS;
R10 l_C_2032; memset(&l_C_2032, 0, sizeof l_C_2032);
S_R10(&l_C_2032, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2033; memset(&l_SEP_2033, 0, sizeof l_SEP_2033);
S_R10(&l_SEP_2033, r_MK(rt_str("", 0)), 0);
R10 l_PRE_2034; memset(&l_PRE_2034, 0, sizeof l_PRE_2034);
S_R10(&l_PRE_2034, r_MK(rt_str("", 0)), 0);
R10 l_POST_2035; memset(&l_POST_2035, 0, sizeof l_POST_2035);
S_R10(&l_POST_2035, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2036; memset(&l_SHARED_2036, 0, sizeof l_SHARED_2036);
l_SHARED_2036 = 0;
R22 * l_PT_2037; memset(&l_PT_2037, 0, sizeof l_PT_2037);
if (((*(R12 *)rt_nil_check(l_Y_2029))).f_GENERIC)
{
l_Y_2029 = r_INSTANCE(l_Y_2029, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_2029, p_LINE);
if (((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) && (!(((*(R12 *)rt_nil_check(l_Y_2029))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2029))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2029))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_2032, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2029))).f_LEVEL), 0);
S_R10(&l_SEP_2033, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2038; memset(&l_Q_2038, 0, sizeof l_Q_2038);
l_Q_2038 = p_ARGS;
for (;;) {
if ((l_Q_2038 == NULL)) goto L_end2039;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2038))).f_MODE == g_M_IN)))
{
l_SHARED_2036 = 1;
}
l_Q_2038 = ((*(R27 *)rt_nil_check(l_Q_2038))).f_NEXT;
}
RT_B_TICK();
} L_end2039: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2029))).f_USES == NULL)))
{
l_SHARED_2036 = 1;
}
}
l_P_2030 = ((*(R12 *)rt_nil_check(l_Y_2029))).f_PARAMS;
for (;;) {
if ((l_P_2030 == NULL)) goto L_end2040;
{
if ((l_A_2031 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2037 = r_FORMAL_VIEW(l_Y_2029, l_P_2030);
if ((l_PT_2037 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2030))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2037)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2041; memset(&l_V_2041, 0, sizeof l_V_2041);
R10 l_CV_2042; memset(&l_CV_2042, 0, sizeof l_CV_2042);
if ((((*(R27 *)rt_nil_check(l_A_2031))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2031))))
{
S_R26(&l_V_2041, ((*(R27 *)rt_nil_check(l_A_2031))).f_V, 0);
}
else
{
S_R26(&l_V_2041, r_EXPR(((*(R27 *)rt_nil_check(l_A_2031))).f_E, l_PT_2037), 0);
}
S_R10(&l_CV_2042, r_CONVERT(l_V_2041, l_PT_2037, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2036 && (l_V_2041).f_LVAL) && r_IS_STRUCTURED(l_PT_2037)))
{
S_R10(&l_CV_2042, r_COPY_OF(l_PT_2037, l_CV_2042), 0);
}
S_R10(&l_C_2032, r_FMT3(rt_str("@@@", 3), l_C_2032, l_SEP_2033, l_CV_2042), 0);
S_R10(&l_SEP_2033, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2043; memset(&l_V_2043, 0, sizeof l_V_2043);
if (((*(R27 *)rt_nil_check(l_A_2031))).f_HAVE)
{
S_R26(&l_V_2043, ((*(R27 *)rt_nil_check(l_A_2031))).f_V, 0);
}
else
{
S_R26(&l_V_2043, r_EXPR(((*(R27 *)rt_nil_check(l_A_2031))).f_E, l_PT_2037), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2031))).f_E == NULL)) && (!(l_V_2043).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2031))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2031))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2043, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2043).f_C), (l_V_2043).f_T), 0);
(l_V_2043).f_LVAL = 1;
}
}
if ((!(l_V_2043).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2037, (l_V_2043).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2037));
}
if (((((*(R28 *)rt_nil_check(l_P_2030))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2037, (l_V_2043).f_T) && r_SAME_RANGE(l_PT_2037, (l_V_2043).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2030))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2037, (l_V_2043).f_T) && r_SAME_RANGE(l_PT_2037, (l_V_2043).f_T))))))
{
{
R10 l_TMP_2044; memset(&l_TMP_2044, 0, sizeof l_TMP_2044);
S_R10(&l_TMP_2044, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_2045; memset(&l_AP_2045, 0, sizeof l_AP_2045);
S_R10(&l_AP_2045, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_2034, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2034, r_CTYPE((l_V_2043).f_T), l_AP_2045, (l_V_2043).f_C), 0);
S_R10(&l_PRE_2034, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2034, r_CTYPE(l_PT_2037), l_TMP_2044, r_COPY_OF((l_V_2043).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2045))), 0);
S_R10(&l_POST_2035, r_FMT2(rt_str("@ @", 3), l_POST_2035, r_STORE_CODE((l_V_2043).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2045), r_MKET(l_TMP_2044, l_PT_2037), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_2032, r_FMT3(rt_str("@@&@", 4), l_C_2032, l_SEP_2033, l_TMP_2044), 0);
}
}
else
{
S_R10(&l_C_2032, r_FMT3(rt_str("@@&@", 4), l_C_2032, l_SEP_2033, (l_V_2043).f_C), 0);
}
S_R10(&l_SEP_2033, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2031 = ((*(R27 *)rt_nil_check(l_A_2031))).f_NEXT;
l_P_2030 = ((*(R28 *)rt_nil_check(l_P_2030))).f_NEXT;
}
RT_B_TICK();
} L_end2040: ;
if ((!(l_A_2031 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2034).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2046 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2034, ((*(R12 *)rt_nil_check(l_Y_2029))).f_ACCESS, l_C_2032, l_POST_2035), r_RESULT_VIEW(l_Y_2029));
return rv2046; }
}
{ R26 rv2047 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2029))).f_ACCESS, l_C_2032), r_RESULT_VIEW(l_Y_2029));
return rv2047; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2048 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2048; }
}
{ R22 * rv2049 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2049; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2050 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2050; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2051 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2051; }
}
{ R22 * rv2052 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2052; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2053 = p_T;
return rv2053; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2054 = p_T;
return rv2054; }
}
{
R12 * l_M_2055; memset(&l_M_2055, 0, sizeof l_M_2055);
l_M_2055 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2055 == NULL)) goto L_end2056;
{
{
R12 * l_Y_2057; memset(&l_Y_2057, 0, sizeof l_Y_2057);
l_Y_2057 = r_MEMBER_TYPE(l_M_2055, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2057 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2057))).f_EXPORTED)
{
{ R22 * rv2058 = r_ABSTRACT_VIEW(l_Y_2057, p_T);
return rv2058; }
}
{ R22 * rv2059 = p_T;
return rv2059; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2055))).f_MODL))
{
goto L_end2056;
}
l_M_2055 = ((*(R12 *)rt_nil_check(l_M_2055))).f_MODL;
}
RT_B_TICK();
} L_end2056: ;
}
{ R22 * rv2060 = p_T;
return rv2060; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2061; memset(&l_Y_2061, 0, sizeof l_Y_2061);
l_Y_2061 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2062; memset(&l_Z_2062, 0, sizeof l_Z_2062);
l_Z_2062 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2062 == NULL)) goto L_end2063;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2062))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2062))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2062))).f_ORIG == NULL)))
{
{ R12 * rv2064 = l_Z_2062;
return rv2064; }
}
l_Z_2062 = r_LOOKUP_NEXT(l_Z_2062);
}
RT_B_TICK();
} L_end2063: ;
}
{ R12 * rv2065 = NULL;
return rv2065; }
}
for (;;) {
if ((l_Y_2061 == NULL)) goto L_end2066;
{
if (((((*(R12 *)rt_nil_check(l_Y_2061))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2061))).f_NAME, p_NAME)))
{
{ R12 * rv2067 = l_Y_2061;
return rv2067; }
}
l_Y_2061 = ((*(R12 *)rt_nil_check(l_Y_2061))).f_SNEXT;
}
RT_B_TICK();
} L_end2066: ;
{ R12 * rv2068 = NULL;
return rv2068; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2069; memset(&l_K_2069, 0, sizeof l_K_2069);
l_K_2069 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2070 = ((((l_K_2069 == g_T_STR) || (l_K_2069 == g_T_BITS)) || (l_K_2069 == g_T_ARR)) || (l_K_2069 == g_T_REC));
return rv2070; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2071; memset(&l_RA_2071, 0, sizeof l_RA_2071);
l_RA_2071 = r_REAL_TYPE(p_A);
R22 * l_RB_2072; memset(&l_RB_2072, 0, sizeof l_RB_2072);
l_RB_2072 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2071)))
{
{ rt_int rv2073 = 1;
return rv2073; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2071))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2071))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2072))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2072))).f_HI_C)))
{
{ rt_int rv2074 = 1;
return rv2074; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2071))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2072))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2075 = ((((*(R22 *)rt_nil_check(l_RA_2071))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2072))).f_LO_C).f_LEN);
return rv2075; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2071))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2072))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2071))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2072))).f_MHI).f_OK))
{
{ rt_int rv2076 = (((((*(R22 *)rt_nil_check(l_RA_2071))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2072))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2071))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2072))).f_MHI).f_V));
return rv2076; }
}
{ rt_int rv2077 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2071))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2072))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2071))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2072))).f_HI_C));
return rv2077; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2078 = 0;
return rv2078; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2079 = 1;
return rv2079; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2080 = 1;
return rv2080; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2081 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv2081; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2082 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2082; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2083 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2083; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2084 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2084; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2085 = 0;
return rv2085; }
}
{
R12 * l_Y_2086; memset(&l_Y_2086, 0, sizeof l_Y_2086);
l_Y_2086 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2087; memset(&l_A_2087, 0, sizeof l_A_2087);
l_A_2087 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2088; memset(&l_F_2088, 0, sizeof l_F_2088);
if ((l_Y_2086 == NULL))
{
{ rt_int rv2089 = 0;
return rv2089; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2086))).f_KIND == g_Y_GEN))
{
{ rt_int rv2090 = 1;
return rv2090; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2086))).f_DECL == NULL))
{
{ rt_int rv2091 = 0;
return rv2091; }
}
l_F_2088 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2086))).f_DECL))).f_A;
for (;;) {
if ((l_F_2088 == NULL)) goto L_end2092;
{
{
R21 * l_N_2093; memset(&l_N_2093, 0, sizeof l_N_2093);
l_N_2093 = ((*(R21 *)rt_nil_check(l_F_2088))).f_A;
for (;;) {
if ((l_N_2093 == NULL)) goto L_end2094;
{
if ((l_A_2087 == NULL))
{
{ rt_int rv2095 = 0;
return rv2095; }
}
if (((((*(R21 *)rt_nil_check(l_F_2088))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2087))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2087))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2087)))))
{
{ rt_int rv2096 = 1;
return rv2096; }
}
l_A_2087 = ((*(R21 *)rt_nil_check(l_A_2087))).f_NEXT;
l_N_2093 = ((*(R21 *)rt_nil_check(l_N_2093))).f_NEXT;
}
RT_B_TICK();
} L_end2094: ;
}
l_F_2088 = ((*(R21 *)rt_nil_check(l_F_2088))).f_NEXT;
}
RT_B_TICK();
} L_end2092: ;
}
}
{ rt_int rv2097 = 0;
return rv2097; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2098; memset(&l_P_2098, 0, sizeof l_P_2098);
l_P_2098 = p_A;
for (;;) {
if ((l_P_2098 == NULL)) goto L_end2099;
{
if (((((*(R21 *)rt_nil_check(l_P_2098))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2098))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2100 = 1;
return rv2100; }
}
l_P_2098 = ((*(R21 *)rt_nil_check(l_P_2098))).f_NEXT;
}
RT_B_TICK();
} L_end2099: ;
{ rt_int rv2101 = 0;
return rv2101; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2102; memset(&l_ENTERED_2102, 0, sizeof l_ENTERED_2102);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2102 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_2102)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2103; memset(&l_R_2103, 0, sizeof l_R_2103);
l_R_2103 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2104; memset(&l_P_2104, 0, sizeof l_P_2104);
R28 * l_TAIL_2105; memset(&l_TAIL_2105, 0, sizeof l_TAIL_2105);
l_TAIL_2105 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2104 = ((*(R21 *)rt_nil_check(l_R_2103))).f_A;
for (;;) {
if ((l_P_2104 == NULL)) goto L_end2106;
{
if (((((*(R21 *)rt_nil_check(l_P_2104))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2104))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2104 = ((*(R21 *)rt_nil_check(l_P_2104))).f_NEXT;
}
RT_B_TICK();
} L_end2106: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2103))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2104 = ((*(R21 *)rt_nil_check(l_R_2103))).f_A;
for (;;) {
if ((l_P_2104 == NULL)) goto L_end2107;
{
{
R28 * l_PM_2108; memset(&l_PM_2108, 0, sizeof l_PM_2108);
l_PM_2108 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2108)), ({ R28 rc2109; memset(&rc2109, 0, sizeof rc2109);  S_R10(&rc2109.f_NAME, ((*(R21 *)rt_nil_check(l_P_2104))).f_NAME, 0); rc2109.f_MODE = ((*(R21 *)rt_nil_check(l_P_2104))).f_IV; rc2109.f_T = NULL; rc2109.f_TS = ((*(R21 *)rt_nil_check(l_P_2104))).f_B; rc2109.f_NEXT = NULL; rc2109; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2103))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2104))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2104))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2108))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2104))).f_B);
}
if ((l_TAIL_2105 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2108;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2105))).f_NEXT = l_PM_2108;
}
l_TAIL_2105 = l_PM_2108;
}
l_P_2104 = ((*(R21 *)rt_nil_check(l_P_2104))).f_NEXT;
}
RT_B_TICK();
} L_end2107: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2110; memset(&l_R_2110, 0, sizeof l_R_2110);
l_R_2110 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2111; memset(&l_T_2111, 0, sizeof l_T_2111);
if ((((*(R21 *)rt_nil_check(l_R_2110))).f_B == NULL))
{
{ R22 * rv2112 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2112; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2113; memset(&l_P_2113, 0, sizeof l_P_2113);
l_P_2113 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2113 == NULL)) goto L_end2114;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2113))).f_T == NULL)))
{
{
R12 * l_V_2115; memset(&l_V_2115, 0, sizeof l_V_2115);
l_V_2115 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2113))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2115))).f_T = ((*(R28 *)rt_nil_check(l_P_2113))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2115))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2113))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2115))).f_INPUT = 1;
r_DEFINE(l_V_2115, ((*(R21 *)rt_nil_check(l_R_2110))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2113))).f_T, ((*(R12 *)rt_nil_check(l_V_2115))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2110))).f_LINE, 0);
}
}
l_P_2113 = ((*(R28 *)rt_nil_check(l_P_2113))).f_NEXT;
}
RT_B_TICK();
} L_end2114: ;
}
l_T_2111 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2110))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2116 = l_T_2111;
return rv2116; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2117; memset(&l_PS_2117, 0, sizeof l_PS_2117);
S_R10(&l_PS_2117, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2118; memset(&l_SEP_2118, 0, sizeof l_SEP_2118);
S_R10(&l_SEP_2118, r_MK(rt_str("", 0)), 0);
R28 * l_P_2119; memset(&l_P_2119, 0, sizeof l_P_2119);
l_P_2119 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2117, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2118, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2119 == NULL)) goto L_end2120;
{
if ((((*(R28 *)rt_nil_check(l_P_2119))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2119))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2119))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2117, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2117, l_SEP_2118, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2119))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2119))).f_NAME)), 0);
S_R10(&l_SEP_2118, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2117, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2117, l_SEP_2118, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2119))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2119))).f_NAME)), 0);
S_R10(&l_SEP_2118, r_MK(rt_str(", ", 2)), 0);
}
l_P_2119 = ((*(R28 *)rt_nil_check(l_P_2119))).f_NEXT;
}
RT_B_TICK();
} L_end2120: ;
if (((l_PS_2117).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2117, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2121 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2117);
return rv2121; }
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
R25 * l_B_2122; memset(&l_B_2122, 0, sizeof l_B_2122);
l_B_2122 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2123; memset(&l_I_2123, 0, sizeof l_I_2123);
l_I_2123 = ((rt_int)0LL);
for (;;) {
if ((l_B_2122 == NULL)) goto L_end2124;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2122))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2122))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2123)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2122))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2122))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2122))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2122))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2123)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2122))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2123), p_PC, r_NUM(l_I_2123)), ((*(R25 *)rt_nil_check(l_B_2122))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2123 = rt_add(l_I_2123, ((rt_int)1LL));
l_B_2122 = ((*(R25 *)rt_nil_check(l_B_2122))).f_NEXT;
}
RT_B_TICK();
} L_end2124: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2125; memset(&l_U_2125, 0, sizeof l_U_2125);
l_U_2125 = r_REAL_TYPE(p_T);
R24 * l_F_2126; memset(&l_F_2126, 0, sizeof l_F_2126);
l_F_2126 = ((*(R22 *)rt_nil_check(l_U_2125))).f_FIELDS;
R25 * l_A_2127; memset(&l_A_2127, 0, sizeof l_A_2127);
l_A_2127 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2126 == NULL) || (l_A_2127 == NULL))) goto L_end2128;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2126))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2127))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2127))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2126))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2127 = ((*(R25 *)rt_nil_check(l_A_2127))).f_NEXT;
}
l_F_2126 = ((*(R24 *)rt_nil_check(l_F_2126))).f_NEXT;
}
RT_B_TICK();
} L_end2128: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2129 = 0;
return rv2129; }
}
{ rt_int rv2130 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2130; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2131 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2131; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2132; memset(&l_OLD_2132, 0, sizeof l_OLD_2132);
l_OLD_2132 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2132 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2132))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2132))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2132))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2133; memset(&l_G_2133, 0, sizeof l_G_2133);
l_G_2133 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2133))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2133))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2133))).f_INPUT = 1;
r_DEFINE(l_G_2133, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2134; memset(&l_B_2134, 0, sizeof l_B_2134);
l_B_2134 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2134)), ({ R20 rc2135; memset(&rc2135, 0, sizeof rc2135);  S_R10(&rc2135.f_NAME, r_NO_TEXT(), 0); rc2135.f_T = NULL; S_R10(&rc2135.f_C, r_NO_TEXT(), 0); rc2135.f_HASMV = 0; rc2135.f_MV = ((rt_int)0LL); rc2135.f_R = NULL; rc2135.f_NEXT = NULL; rc2135; }), 0);
{ R20 * rv2136 = l_B_2134;
return rv2136; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2137; memset(&l_B_2137, 0, sizeof l_B_2137);
l_B_2137 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2137)), ({ R20 rc2138; memset(&rc2138, 0, sizeof rc2138);  S_R10(&rc2138.f_NAME, p_NAME, 0); rc2138.f_T = p_T; S_R10(&rc2138.f_C, r_NO_TEXT(), 0); rc2138.f_HASMV = (p_M).f_OK; rc2138.f_MV = (p_M).f_V; rc2138.f_R = p_R; rc2138.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2138; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2137))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2137;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2139; memset(&l_B_2139, 0, sizeof l_B_2139);
l_B_2139 = p_BS;
for (;;) {
if ((l_B_2139 == NULL)) goto L_end2140;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2139))).f_NAME, p_NAME))
{
{ R20 * rv2141 = l_B_2139;
return rv2141; }
}
l_B_2139 = ((*(R20 *)rt_nil_check(l_B_2139))).f_NEXT;
}
RT_B_TICK();
} L_end2140: ;
{ R20 * rv2142 = NULL;
return rv2142; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2143; memset(&l_RT_2143, 0, sizeof l_RT_2143);
l_RT_2143 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2144 = 1;
return rv2144; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2145 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2145; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2146 = 1;
return rv2146; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2147 = 1;
return rv2147; }
}
{
R20 * l_B_2148; memset(&l_B_2148, 0, sizeof l_B_2148);
l_B_2148 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2148 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2148))).f_T == NULL))
{
{ rt_int rv2149 = 0;
return rv2149; }
}
{ rt_int rv2150 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2148))).f_T, p_T);
return rv2150; }
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
{ rt_int rv2151 = 1;
return rv2151; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_ARR)))
{
{ rt_int rv2152 = 0;
return rv2152; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2143))).f_DIMS)))
{
{ rt_int rv2153 = 0;
return rv2153; }
}
{ rt_int rv2154 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2143))).f_ELEM, p_BS);
return rv2154; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2155 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2155; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2156 = 0;
return rv2156; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2143))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2143))).f_MHI, p_BS))))
{
{ rt_int rv2157 = 0;
return rv2157; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_INT)))
{
{ rt_int rv2158 = 0;
return rv2158; }
}
{ rt_int rv2159 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2143))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2159; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2160 = ((((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2143))).f_SCALE == ((rt_int)0LL)));
return rv2160; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2161 = 0;
return rv2161; }
}
{ rt_int rv2162 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2143))).f_SCALE), p_BS);
return rv2162; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2163 = (((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_BOOL);
return rv2163; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2164 = (((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_STR);
return rv2164; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_STR)))
{
{ rt_int rv2165 = 0;
return rv2165; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2166 = 1;
return rv2166; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2143))).f_BASE == NULL)))
{
{ rt_int rv2167 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2143))).f_BASE, p_BS);
return rv2167; }
}
{ rt_int rv2168 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2168; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2169 = (((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_BITS);
return rv2169; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2170 = (((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_SEM);
return rv2170; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_PTR)))
{
{ rt_int rv2171 = 0;
return rv2171; }
}
{ rt_int rv2172 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2143), p_BS);
return rv2172; }
}
{
R12 * l_Y_2173; memset(&l_Y_2173, 0, sizeof l_Y_2173);
l_Y_2173 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2173 == NULL))
{
{ rt_int rv2174 = 0;
return rv2174; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2173))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2173))).f_DECL == NULL)))
{
{ rt_int rv2175 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2173))).f_T, p_T);
return rv2175; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2173))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2176 = 0;
return rv2176; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2173))))
{
{ rt_int rv2177 = 0;
return rv2177; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2173))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2143))).f_KIND == g_T_REC)))
{
{ rt_int rv2178 = 0;
return rv2178; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2143))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2179 = 0;
return rv2179; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2143))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2173))))
{
{ rt_int rv2180 = 0;
return rv2180; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2181 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2181; }
}
{ rt_int rv2182 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2173))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2173))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2143, p_BS);
return rv2182; }
}
{
R21 * l_F_2183; memset(&l_F_2183, 0, sizeof l_F_2183);
l_F_2183 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2173))).f_DECL))).f_A;
R21 * l_A_2184; memset(&l_A_2184, 0, sizeof l_A_2184);
l_A_2184 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2185; memset(&l_V_2185, 0, sizeof l_V_2185);
l_V_2185 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2186; memset(&l_CLASS_2186, 0, sizeof l_CLASS_2186);
l_CLASS_2186 = r_RECORD_CLASS_OF(l_RT_2143);
for (;;) {
if ((l_F_2183 == NULL)) goto L_end2187;
{
{
R21 * l_N_2188; memset(&l_N_2188, 0, sizeof l_N_2188);
l_N_2188 = ((*(R21 *)rt_nil_check(l_F_2183))).f_A;
for (;;) {
if ((l_N_2188 == NULL)) goto L_end2189;
{
if ((l_A_2184 == NULL))
{
{ rt_int rv2190 = 0;
return rv2190; }
}
if ((((*(R21 *)rt_nil_check(l_F_2183))).f_B == NULL))
{
if ((!(l_CLASS_2186 == NULL)))
{
{
R20 * l_B_2191; memset(&l_B_2191, 0, sizeof l_B_2191);
l_B_2191 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2186))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2188))).f_NAME);
if ((!(l_B_2191 == NULL)))
{
if ((!r_UNIFY(l_A_2184, ((*(R20 *)rt_nil_check(l_B_2191))).f_T, p_BS)))
{
{ rt_int rv2192 = 0;
return rv2192; }
}
}
}
}
}
else
{
if ((!(l_V_2185 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2184))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2184))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2184))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2193; memset(&l_M_2193, 0, sizeof l_M_2193);
S_R23(&l_M_2193, r_MANIFEST(l_A_2184), 0);
if (((l_M_2193).f_OK && (((*(R25 *)rt_nil_check(l_V_2185))).f_MLO).f_OK))
{
if ((!((l_M_2193).f_V == (((*(R25 *)rt_nil_check(l_V_2185))).f_MLO).f_V)))
{
{ rt_int rv2194 = 0;
return rv2194; }
}
}
}
}
l_V_2185 = ((*(R25 *)rt_nil_check(l_V_2185))).f_NEXT;
}
}
l_A_2184 = ((*(R21 *)rt_nil_check(l_A_2184))).f_NEXT;
l_N_2188 = ((*(R21 *)rt_nil_check(l_N_2188))).f_NEXT;
}
RT_B_TICK();
} L_end2189: ;
}
l_F_2183 = ((*(R21 *)rt_nil_check(l_F_2183))).f_NEXT;
}
RT_B_TICK();
} L_end2187: ;
}
{ rt_int rv2195 = 1;
return rv2195; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2196; memset(&l_R_2196, 0, sizeof l_R_2196);
l_R_2196 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2197 = NULL;
return rv2197; }
}
for (;;) {
if ((l_R_2196 == NULL)) goto L_end2198;
{
if ((((*(R12 *)rt_nil_check(l_R_2196))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2199 = l_R_2196;
return rv2199; }
}
l_R_2196 = ((*(R12 *)rt_nil_check(l_R_2196))).f_INSTANCES;
}
RT_B_TICK();
} L_end2198: ;
{ R12 * rv2200 = NULL;
return rv2200; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2201 = 1;
return rv2201; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2202 = 1;
return rv2202; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2203 = 1;
return rv2203; }
}
{
R20 * l_B_2204; memset(&l_B_2204, 0, sizeof l_B_2204);
l_B_2204 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2204 == NULL)))
{
{ rt_int rv2205 = ((((*(R20 *)rt_nil_check(l_B_2204))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2204))).f_MV == (p_M).f_V));
return rv2205; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2206 = 0;
return rv2206; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2207 = 1;
return rv2207; }
}
{
R23 l_V_2208; memset(&l_V_2208, 0, sizeof l_V_2208);
S_R23(&l_V_2208, r_MANIFEST(p_A), 0);
if (((l_V_2208).f_OK && (p_M).f_OK))
{
{ rt_int rv2209 = ((l_V_2208).f_V == (p_M).f_V);
return rv2209; }
}
}
{ rt_int rv2210 = 1;
return rv2210; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2211 = 0;
return rv2211; }
}
{ rt_int rv2212 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv2212; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2213 = 1;
return rv2213; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2214 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2214; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2215; memset(&l_BS_2215, 0, sizeof l_BS_2215);
l_BS_2215 = r_NEW_BINDS();
R28 * l_P_2216; memset(&l_P_2216, 0, sizeof l_P_2216);
l_P_2216 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2217; memset(&l_A_2217, 0, sizeof l_A_2217);
l_A_2217 = p_ARGS;
for (;;) {
if ((l_P_2216 == NULL)) goto L_end2218;
{
if ((((*(R28 *)rt_nil_check(l_P_2216))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2217))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2216))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2217))).f_E), r_NO_MVAL(), NULL, l_BS_2215);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2216))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2216))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2216))).f_TS, ((*(R27 *)rt_nil_check(l_A_2217))).f_E, p_LINE), l_BS_2215);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2217))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2217))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2216))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2217))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2217))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2217))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2217))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2217))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2216))).f_TS, (((*(R27 *)rt_nil_check(l_A_2217))).f_V).f_T, l_BS_2215)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2216))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2216))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2216))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2216))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2217))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2215);
}
}
l_P_2216 = ((*(R28 *)rt_nil_check(l_P_2216))).f_NEXT;
l_A_2217 = ((*(R27 *)rt_nil_check(l_A_2217))).f_NEXT;
}
RT_B_TICK();
} L_end2218: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2215);
{
R12 * l_I_2219; memset(&l_I_2219, 0, sizeof l_I_2219);
l_I_2219 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2219 == NULL)) goto L_end2220;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2219))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2215))).f_NEXT))
{
{ R12 * rv2221 = l_I_2219;
return rv2221; }
}
l_I_2219 = ((*(R12 *)rt_nil_check(l_I_2219))).f_INSTANCES;
}
RT_B_TICK();
} L_end2220: ;
}
{ R12 * rv2222 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2215))).f_NEXT, p_ARGS);
return rv2222; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2223; memset(&l_P_2223, 0, sizeof l_P_2223);
l_P_2223 = p_A;
for (;;) {
if ((l_P_2223 == NULL)) goto L_end2224;
{
{
R20 * l_Q_2225; memset(&l_Q_2225, 0, sizeof l_Q_2225);
l_Q_2225 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2223))).f_NAME);
if ((l_Q_2225 == NULL))
{
{ rt_int rv2226 = 0;
return rv2226; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2223))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2225))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2223))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2225))).f_T == NULL)))
{
{ rt_int rv2227 = 0;
return rv2227; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2223))).f_T, ((*(R20 *)rt_nil_check(l_Q_2225))).f_T)))
{
{ rt_int rv2228 = 0;
return rv2228; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2223))).f_T, ((*(R20 *)rt_nil_check(l_Q_2225))).f_T)))
{
{ rt_int rv2229 = 0;
return rv2229; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2223))).f_T, ((*(R20 *)rt_nil_check(l_Q_2225))).f_T)))
{
{ rt_int rv2230 = 0;
return rv2230; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2223))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2225))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2223))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2225))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2223))).f_R == ((*(R20 *)rt_nil_check(l_Q_2225))).f_R))))
{
{ rt_int rv2231 = 0;
return rv2231; }
}
}
l_P_2223 = ((*(R20 *)rt_nil_check(l_P_2223))).f_NEXT;
}
RT_B_TICK();
} L_end2224: ;
{ rt_int rv2232 = 1;
return rv2232; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2233; memset(&l_RA_2233, 0, sizeof l_RA_2233);
l_RA_2233 = r_REAL_TYPE(p_A);
R22 * l_RB_2234; memset(&l_RB_2234, 0, sizeof l_RB_2234);
l_RB_2234 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2233))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2233))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2233))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2234))).f_KIND))))
{
{ rt_int rv2235 = 1;
return rv2235; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2233))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2234))).f_MLEN).f_OK))
{
{ rt_int rv2236 = ((((*(R22 *)rt_nil_check(l_RA_2233))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2234))).f_MLEN).f_V);
return rv2236; }
}
{ rt_int rv2237 = ((((*(R22 *)rt_nil_check(l_RA_2233))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2234))).f_MLEN).f_OK);
return rv2237; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2238; memset(&l_RA_2238, 0, sizeof l_RA_2238);
l_RA_2238 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2239; memset(&l_RB_2239, 0, sizeof l_RB_2239);
l_RB_2239 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2238 == NULL) || (l_RB_2239 == NULL)))
{
{ rt_int rv2240 = (l_RA_2238 == l_RB_2239);
return rv2240; }
}
if ((l_RA_2238 == l_RB_2239))
{
{ rt_int rv2241 = 1;
return rv2241; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2238))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2239))).f_NAME)))
{
{ rt_int rv2242 = 0;
return rv2242; }
}
{
R21 * l_X_2243; memset(&l_X_2243, 0, sizeof l_X_2243);
l_X_2243 = ((*(R21 *)rt_nil_check(l_RA_2238))).f_A;
R21 * l_Y_2244; memset(&l_Y_2244, 0, sizeof l_Y_2244);
l_Y_2244 = ((*(R21 *)rt_nil_check(l_RB_2239))).f_A;
for (;;) {
if (((l_X_2243 == NULL) || (l_Y_2244 == NULL))) goto L_end2245;
{
if (((((((*(R21 *)rt_nil_check(l_X_2243))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2243))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2244))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2244))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2243))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2244))).f_NAME)))
{
{ rt_int rv2246 = 0;
return rv2246; }
}
}
else
{
{
R23 l_MX_2247; memset(&l_MX_2247, 0, sizeof l_MX_2247);
S_R23(&l_MX_2247, r_MANIFEST(l_X_2243), 0);
R23 l_MY_2248; memset(&l_MY_2248, 0, sizeof l_MY_2248);
S_R23(&l_MY_2248, r_MANIFEST(l_Y_2244), 0);
if (((!((l_MX_2247).f_OK == (l_MY_2248).f_OK)) || (!((l_MX_2247).f_V == (l_MY_2248).f_V))))
{
{ rt_int rv2249 = 0;
return rv2249; }
}
}
}
l_X_2243 = ((*(R21 *)rt_nil_check(l_X_2243))).f_NEXT;
l_Y_2244 = ((*(R21 *)rt_nil_check(l_Y_2244))).f_NEXT;
}
RT_B_TICK();
} L_end2245: ;
{ rt_int rv2250 = ((((l_X_2243 == NULL) && (l_Y_2244 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2238))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2239))).f_B == NULL));
return rv2250; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2251; memset(&l_Y_2251, 0, sizeof l_Y_2251);
l_Y_2251 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2252; memset(&l_FOUND_2252, 0, sizeof l_FOUND_2252);
l_FOUND_2252 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_2251 == NULL)) goto L_end2253;
{
if ((((*(R12 *)rt_nil_check(l_Y_2251))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2254; memset(&l_R_2254, 0, sizeof l_R_2254);
l_R_2254 = r_ORIGINAL(l_Y_2251);
r_ROUTINE_HEADER(l_R_2254);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_2254)) && (!((*(R12 *)rt_nil_check(l_R_2254))).f_GENERIC)))
{
if (((!(l_FOUND_2252 == NULL)) && (!(l_FOUND_2252 == l_R_2254))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2252 = l_R_2254;
}
}
}
l_Y_2251 = r_LOOKUP_NEXT(l_Y_2251);
}
RT_B_TICK();
} L_end2253: ;
if ((l_FOUND_2252 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2252))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv2255 = l_FOUND_2252;
return rv2255; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2256; memset(&l_NEEDL_2256, 0, sizeof l_NEEDL_2256);
l_NEEDL_2256 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2257; memset(&l_SAVED_2257, 0, sizeof l_SAVED_2257);
l_SAVED_2257 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2256 == NULL)) goto L_end2258;
{
{
R21 * l_T_2259; memset(&l_T_2259, 0, sizeof l_T_2259);
l_T_2259 = ((*(R21 *)rt_nil_check(l_NEEDL_2256))).f_A;
for (;;) {
if ((l_T_2259 == NULL)) goto L_end2260;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2259))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2261; memset(&l_ARGS_2261, 0, sizeof l_ARGS_2261);
l_ARGS_2261 = NULL;
R27 * l_TAIL_2262; memset(&l_TAIL_2262, 0, sizeof l_TAIL_2262);
l_TAIL_2262 = NULL;
R21 * l_P_2263; memset(&l_P_2263, 0, sizeof l_P_2263);
l_P_2263 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2259))).f_B))).f_A;
R12 * l_R_2264; memset(&l_R_2264, 0, sizeof l_R_2264);
rt_int l_ENTERED_2265; memset(&l_ENTERED_2265, 0, sizeof l_ENTERED_2265);
l_ENTERED_2265 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2263 == NULL)) goto L_end2266;
{
{
R27 * l_A_2267; memset(&l_A_2267, 0, sizeof l_A_2267);
if ((((*(R21 *)rt_nil_check(l_P_2263))).f_B == NULL))
{
l_A_2267 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2267 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2263))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2267))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2263))).f_IV;
if ((l_TAIL_2262 == NULL))
{
l_ARGS_2261 = l_A_2267;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2262))).f_NEXT = l_A_2267;
}
l_TAIL_2262 = l_A_2267;
}
l_P_2263 = ((*(R21 *)rt_nil_check(l_P_2263))).f_NEXT;
}
RT_B_TICK();
} L_end2266: ;
if (l_ENTERED_2265)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2264 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2259))).f_NAME, l_ARGS_2261, p_LINE, 0);
if ((l_R_2264 == NULL))
{
l_R_2264 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2259))).f_NAME);
for (;;) {
if ((l_R_2264 == NULL)) goto L_end2268;
{
if ((((*(R12 *)rt_nil_check(l_R_2264))).f_KIND == g_Y_BUILTIN))
{
goto L_end2268;
}
l_R_2264 = r_LOOKUP_NEXT(l_R_2264);
}
RT_B_TICK();
} L_end2268: ;
}
if (((l_R_2264 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2259))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2259))).f_NAME);
}
if ((!(l_R_2264 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2259))).f_NAME, NULL, r_NO_MVAL(), l_R_2264, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2259 = ((*(R21 *)rt_nil_check(l_T_2259))).f_NEXT;
}
RT_B_TICK();
} L_end2260: ;
}
l_NEEDL_2256 = ((*(R21 *)rt_nil_check(l_NEEDL_2256))).f_NEXT;
}
RT_B_TICK();
} L_end2258: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2257;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2269 = 0;
return rv2269; }
}
{
R12 * l_Y_2270; memset(&l_Y_2270, 0, sizeof l_Y_2270);
l_Y_2270 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2271; memset(&l_A_2271, 0, sizeof l_A_2271);
l_A_2271 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2272; memset(&l_F_2272, 0, sizeof l_F_2272);
if ((l_Y_2270 == NULL))
{
{ rt_int rv2273 = 0;
return rv2273; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2270))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2270))).f_DECL == NULL)))
{
{ rt_int rv2274 = 0;
return rv2274; }
}
l_F_2272 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2270))).f_DECL))).f_A;
for (;;) {
if ((l_F_2272 == NULL)) goto L_end2275;
{
{
R21 * l_N_2276; memset(&l_N_2276, 0, sizeof l_N_2276);
l_N_2276 = ((*(R21 *)rt_nil_check(l_F_2272))).f_A;
for (;;) {
if ((l_N_2276 == NULL)) goto L_end2277;
{
if ((l_A_2271 == NULL))
{
{ rt_int rv2278 = 0;
return rv2278; }
}
if (((((*(R21 *)rt_nil_check(l_F_2272))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2271))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2279 = 1;
return rv2279; }
}
l_A_2271 = ((*(R21 *)rt_nil_check(l_A_2271))).f_NEXT;
l_N_2276 = ((*(R21 *)rt_nil_check(l_N_2276))).f_NEXT;
}
RT_B_TICK();
} L_end2277: ;
}
l_F_2272 = ((*(R21 *)rt_nil_check(l_F_2272))).f_NEXT;
}
RT_B_TICK();
} L_end2275: ;
}
{ rt_int rv2280 = 0;
return rv2280; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2281; memset(&l_A_2281, 0, sizeof l_A_2281);
l_A_2281 = p_ARGS;
R12 * l_I_2282; memset(&l_I_2282, 0, sizeof l_I_2282);
l_I_2282 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2283; memset(&l_SAVED_2283, 0, sizeof l_SAVED_2283);
l_SAVED_2283 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2284; memset(&l_P_2284, 0, sizeof l_P_2284);
l_P_2284 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2285; memset(&l_TAIL_2285, 0, sizeof l_TAIL_2285);
l_TAIL_2285 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2282)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2282))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2282))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2282))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2282))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2282))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2282;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2284 == NULL)) goto L_end2286;
{
{
R28 * l_PM_2287; memset(&l_PM_2287, 0, sizeof l_PM_2287);
l_PM_2287 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2287)), (*(R28 *)rt_nil_check(l_P_2284)), 0);
((*(R28 *)rt_nil_check(l_PM_2287))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2284))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2287))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2284))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2287))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2284))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2281))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2287))).f_T = (((*(R27 *)rt_nil_check(l_A_2281))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2287))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2287))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2287))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2287))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2287))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2284))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_2287))).f_TS = NULL;
if ((l_TAIL_2285 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2282))).f_PARAMS = l_PM_2287;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2285))).f_NEXT = l_PM_2287;
}
l_TAIL_2285 = l_PM_2287;
}
l_P_2284 = ((*(R28 *)rt_nil_check(l_P_2284))).f_NEXT;
l_A_2281 = ((*(R27 *)rt_nil_check(l_A_2281))).f_NEXT;
}
RT_B_TICK();
} L_end2286: ;
((*(R12 *)rt_nil_check(l_I_2282))).f_RESULT = r_RESULT_TYPE(l_I_2282);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2283;
S_R10(&((*(R12 *)rt_nil_check(l_I_2282))).f_FWD, r_C_HEADER(l_I_2282), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2282))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2282))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2282;
{ R12 * rv2288 = l_I_2282;
return rv2288; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2289 = 0;
return rv2289; }
}
{ rt_int rv2290 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2290; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2291; memset(&l_C_2291, 0, sizeof l_C_2291);
if ((p_TS == NULL))
{
{ R21 * rv2292 = NULL;
return rv2292; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2293; memset(&l_F_2293, 0, sizeof l_F_2293);
l_F_2293 = p_FORMALS;
R21 * l_A_2294; memset(&l_A_2294, 0, sizeof l_A_2294);
l_A_2294 = p_ARGS;
for (;;) {
if ((l_F_2293 == NULL)) goto L_end2295;
{
{
R21 * l_N_2296; memset(&l_N_2296, 0, sizeof l_N_2296);
l_N_2296 = ((*(R21 *)rt_nil_check(l_F_2293))).f_A;
for (;;) {
if ((l_N_2296 == NULL)) goto L_end2297;
{
if ((l_A_2294 == NULL))
{
{ R21 * rv2298 = p_TS;
return rv2298; }
}
if (((((*(R21 *)rt_nil_check(l_F_2293))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2296))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2299 = l_A_2294;
return rv2299; }
}
l_A_2294 = ((*(R21 *)rt_nil_check(l_A_2294))).f_NEXT;
l_N_2296 = ((*(R21 *)rt_nil_check(l_N_2296))).f_NEXT;
}
RT_B_TICK();
} L_end2297: ;
}
l_F_2293 = ((*(R21 *)rt_nil_check(l_F_2293))).f_NEXT;
}
RT_B_TICK();
} L_end2295: ;
}
{ R21 * rv2300 = p_TS;
return rv2300; }
}
l_C_2291 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2291))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2291))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2301 = l_C_2291;
return rv2301; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2302; memset(&l_C_2302, 0, sizeof l_C_2302);
l_C_2302 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2302)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2302))).f_NEXT = NULL;
{ R21 * rv2303 = l_C_2302;
return rv2303; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2304; memset(&l_P_2304, 0, sizeof l_P_2304);
l_P_2304 = p_L;
for (;;) {
if ((l_P_2304 == NULL)) goto L_end2305;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2304))).f_NAME, p_NAME))
{
{ rt_int rv2306 = 1;
return rv2306; }
}
l_P_2304 = ((*(R21 *)rt_nil_check(l_P_2304))).f_NEXT;
}
RT_B_TICK();
} L_end2305: ;
{ rt_int rv2307 = 0;
return rv2307; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2308; memset(&l_IS_2308, 0, sizeof l_IS_2308);
l_IS_2308 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2309 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2309; }
}
if ((l_IS_2308 == NULL))
{
{ rt_int rv2310 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2310; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2308))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2308))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2311 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2311; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2308))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2308))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2312 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2312; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2308))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2313 = 0;
return rv2313; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2314; memset(&l_ITEMS_2314, 0, sizeof l_ITEMS_2314);
l_ITEMS_2314 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2315; memset(&l_HEAD_2315, 0, sizeof l_HEAD_2315);
l_HEAD_2315 = NULL;
R21 * l_TAIL_2316; memset(&l_TAIL_2316, 0, sizeof l_TAIL_2316);
l_TAIL_2316 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2314 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2314))).f_A, &l_HEAD_2315, &l_TAIL_2316);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2314))).f_B, &l_HEAD_2315, &l_TAIL_2316);
{
R21 * l_R_2317; memset(&l_R_2317, 0, sizeof l_R_2317);
l_R_2317 = ((*(R21 *)rt_nil_check(l_ITEMS_2314))).f_C;
for (;;) {
if ((l_R_2317 == NULL)) goto L_end2318;
{
{
R12 * l_Z_2319; memset(&l_Z_2319, 0, sizeof l_Z_2319);
l_Z_2319 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2317))).f_NAME);
if (((l_Z_2319 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2317))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2317))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2317))).f_NAME);
}
for (;;) {
if ((l_Z_2319 == NULL)) goto L_end2320;
{
if ((((*(R12 *)rt_nil_check(l_Z_2319))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2321; memset(&l_O_2321, 0, sizeof l_O_2321);
l_O_2321 = r_ORIGINAL(l_Z_2319);
R21 * l_U_2322; memset(&l_U_2322, 0, sizeof l_U_2322);
r_COMPUTE_USES(l_O_2321);
l_U_2322 = ((*(R12 *)rt_nil_check(l_O_2321))).f_USES;
for (;;) {
if ((l_U_2322 == NULL)) goto L_end2323;
{
if ((!r_IN_IDENTS(l_HEAD_2315, ((*(R21 *)rt_nil_check(l_U_2322))).f_NAME)))
{
{
R21 * l_N_2324; memset(&l_N_2324, 0, sizeof l_N_2324);
l_N_2324 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2322))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2324))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2322))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2324))).f_IV = ((*(R21 *)rt_nil_check(l_U_2322))).f_IV;
r_ADD_LIST(l_N_2324, &l_HEAD_2315, &l_TAIL_2316);
}
}
l_U_2322 = ((*(R21 *)rt_nil_check(l_U_2322))).f_NEXT;
}
RT_B_TICK();
} L_end2323: ;
}
}
l_Z_2319 = r_LOOKUP_NEXT(l_Z_2319);
}
RT_B_TICK();
} L_end2320: ;
}
l_R_2317 = ((*(R21 *)rt_nil_check(l_R_2317))).f_NEXT;
}
RT_B_TICK();
} L_end2318: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2315;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2325; memset(&l_M_2325, 0, sizeof l_M_2325);
if ((p_B == NULL))
{
{ rt_int rv2326 = 0;
return rv2326; }
}
l_M_2325 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2325 == NULL)) goto L_end2327;
{
if ((((*(R21 *)rt_nil_check(l_M_2325))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2325))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2325))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2325))).f_C, p_NAME)))
{
{ rt_int rv2328 = 1;
return rv2328; }
}
}
l_M_2325 = ((*(R21 *)rt_nil_check(l_M_2325))).f_NEXT;
}
RT_B_TICK();
} L_end2327: ;
{ rt_int rv2329 = 0;
return rv2329; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2330; memset(&l_R_2330, 0, sizeof l_R_2330);
l_R_2330 = p_RS;
for (;;) {
if ((l_R_2330 == NULL)) goto L_end2331;
{
if ((((*(R21 *)rt_nil_check(l_R_2330))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2330));
}
l_R_2330 = ((*(R21 *)rt_nil_check(l_R_2330))).f_NEXT;
}
RT_B_TICK();
} L_end2331: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2332; memset(&l_P_2332, 0, sizeof l_P_2332);
l_P_2332 = p_L;
for (;;) {
if ((l_P_2332 == NULL)) goto L_end2333;
{
{
R12 * l_V_2334; memset(&l_V_2334, 0, sizeof l_V_2334);
l_V_2334 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2332))).f_NAME);
R21 * l_N_2335; memset(&l_N_2335, 0, sizeof l_N_2335);
l_N_2335 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2332))).f_LINE);
if ((l_V_2334 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2332))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2332))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2335))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2332))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2335))).f_IV = ((*(R12 *)rt_nil_check(l_V_2334))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2334))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2335, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2332 = ((*(R21 *)rt_nil_check(l_P_2332))).f_NEXT;
}
RT_B_TICK();
} L_end2333: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2336; memset(&l_IS_2336, 0, sizeof l_IS_2336);
l_IS_2336 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2337; memset(&l_U_2337, 0, sizeof l_U_2337);
l_U_2337 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2336 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2336))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2337 == NULL)) goto L_end2338;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2337))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2336))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2336))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2337))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2337))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2336))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2337))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2336))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2337))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2336))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2336))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2336))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2336))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2337))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2337))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2337))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2337 = ((*(R21 *)rt_nil_check(l_U_2337))).f_NEXT;
}
RT_B_TICK();
} L_end2338: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2339; memset(&l_R_2339, 0, sizeof l_R_2339);
l_R_2339 = p_RS;
for (;;) {
if ((l_R_2339 == NULL)) goto L_end2340;
{
{
R12 * l_Z_2341; memset(&l_Z_2341, 0, sizeof l_Z_2341);
l_Z_2341 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2339))).f_NAME);
for (;;) {
if ((l_Z_2341 == NULL)) goto L_end2342;
{
if ((((*(R12 *)rt_nil_check(l_Z_2341))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2343; memset(&l_O_2343, 0, sizeof l_O_2343);
l_O_2343 = r_ORIGINAL(l_Z_2341);
r_COMPUTE_USES(l_O_2343);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2343))).f_USES, p_NAME))
{
{ rt_int rv2344 = 1;
return rv2344; }
}
}
}
l_Z_2341 = r_LOOKUP_NEXT(l_Z_2341);
}
RT_B_TICK();
} L_end2342: ;
}
l_R_2339 = ((*(R21 *)rt_nil_check(l_R_2339))).f_NEXT;
}
RT_B_TICK();
} L_end2340: ;
{ rt_int rv2345 = 0;
return rv2345; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2346; memset(&l_M_2346, 0, sizeof l_M_2346);
l_M_2346 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2346 == NULL)) goto L_end2347;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2346))).f_NAME))
{
{ rt_int rv2348 = 1;
return rv2348; }
}
l_M_2346 = ((*(R12 *)rt_nil_check(l_M_2346))).f_MODL;
}
RT_B_TICK();
} L_end2347: ;
{ rt_int rv2349 = 0;
return rv2349; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2350 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2350; }
}
{ R10 rv2351 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2351; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2352; memset(&l_C_2352, 0, sizeof l_C_2352);
l_C_2352 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2352 == NULL)) goto L_end2353;
{
if ((((*(R17 *)rt_nil_check(l_C_2352))).f_KIND == ((rt_int)1LL)))
{
goto L_end2353;
}
if ((((*(R17 *)rt_nil_check(l_C_2352))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2354; memset(&l_H_2354, 0, sizeof l_H_2354);
l_H_2354 = ((*(R17 *)rt_nil_check(l_C_2352))).f_HANDLERS;
for (;;) {
if ((l_H_2354 == NULL)) goto L_end2355;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2354))).f_A, p_NAME))
{
{ rt_int rv2356 = 1;
return rv2356; }
}
l_H_2354 = ((*(R21 *)rt_nil_check(l_H_2354))).f_NEXT;
}
RT_B_TICK();
} L_end2355: ;
}
}
l_C_2352 = ((*(R17 *)rt_nil_check(l_C_2352))).f_NEXT;
}
RT_B_TICK();
} L_end2353: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2357 = 1;
return rv2357; }
}
}
{ rt_int rv2358 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2358; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2359; memset(&l_C_2359, 0, sizeof l_C_2359);
l_C_2359 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2359)), ({ R17 rc2360; memset(&rc2360, 0, sizeof rc2360);  rc2360.f_KIND = p_KIND; S_R10(&rc2360.f_NAME, p_NAME, 0); rc2360.f_HANDLERS = NULL; rc2360.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2360; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2359;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2361; memset(&l_C_2361, 0, sizeof l_C_2361);
l_C_2361 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2361 == NULL)) goto L_end2362;
{
if ((((*(R17 *)rt_nil_check(l_C_2361))).f_KIND == p_KIND))
{
{ R17 * rv2363 = l_C_2361;
return rv2363; }
}
if ((((*(R17 *)rt_nil_check(l_C_2361))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2364 = NULL;
return rv2364; }
}
if ((((*(R17 *)rt_nil_check(l_C_2361))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2361))).f_NAME));
}
l_C_2361 = ((*(R17 *)rt_nil_check(l_C_2361))).f_NEXT;
}
RT_B_TICK();
} L_end2362: ;
{ R17 * rv2365 = NULL;
return rv2365; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2366; memset(&l_C_2366, 0, sizeof l_C_2366);
l_C_2366 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2367; memset(&l_N_2367, 0, sizeof l_N_2367);
l_N_2367 = ((rt_int)0LL);
for (;;) {
if ((l_C_2366 == NULL)) goto L_end2368;
{
if ((((*(R17 *)rt_nil_check(l_C_2366))).f_KIND == ((rt_int)1LL)))
{
goto L_end2368;
}
if ((((*(R17 *)rt_nil_check(l_C_2366))).f_KIND == ((rt_int)3LL)))
{
l_N_2367 = rt_add(l_N_2367, ((rt_int)1LL));
}
l_C_2366 = ((*(R17 *)rt_nil_check(l_C_2366))).f_NEXT;
}
RT_B_TICK();
} L_end2368: ;
{ rt_int rv2369 = l_N_2367;
return rv2369; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2370; memset(&l_N_2370, 0, sizeof l_N_2370);
l_N_2370 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2370 == NULL)) goto L_end2371;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2370))).f_NAME, p_NAME))
{
{ R10 rv2372 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2372; }
}
l_N_2370 = ((*(R21 *)rt_nil_check(l_N_2370))).f_NEXT;
}
RT_B_TICK();
} L_end2371: ;
l_N_2370 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2370))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2370))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2370;
{ R10 rv2373 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2373; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2374; memset(&l_D_2374, 0, sizeof l_D_2374);
l_D_2374 = p_DECLS;
for (;;) {
if ((l_D_2374 == NULL)) goto L_end2375;
{
if (((((*(R21 *)rt_nil_check(l_D_2374))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2374))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2376; memset(&l_Y_2376, 0, sizeof l_Y_2376);
l_Y_2376 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2374))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2374))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2376))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2376))).f_DECL = l_D_2374;
r_DEFINE(l_Y_2376, ((*(R21 *)rt_nil_check(l_D_2374))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2374))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2374))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2374))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2374 = ((*(R21 *)rt_nil_check(l_D_2374))).f_NEXT;
}
RT_B_TICK();
} L_end2375: ;
l_D_2374 = p_DECLS;
for (;;) {
if ((l_D_2374 == NULL)) goto L_end2377;
{
if ((((*(R21 *)rt_nil_check(l_D_2374))).f_KIND == g_N_TYPE))
{
{
R21 * l_F_2378; memset(&l_F_2378, 0, sizeof l_F_2378);
l_F_2378 = ((*(R21 *)rt_nil_check(l_D_2374))).f_A;
for (;;) {
if ((l_F_2378 == NULL)) goto L_end2379;
{
if (((((*(R21 *)rt_nil_check(l_F_2378))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_F_2378))).f_B == NULL))))
{
{
R22 * l_FT_2380; memset(&l_FT_2380, 0, sizeof l_FT_2380);
l_FT_2380 = r_REAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(l_F_2378))).f_B));
if (((!r_IS_SCALAR(l_FT_2380)) || (!(((*(R22 *)rt_nil_check(l_FT_2380))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2378))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2378 = ((*(R21 *)rt_nil_check(l_F_2378))).f_NEXT;
}
RT_B_TICK();
} L_end2379: ;
}
}
l_D_2374 = ((*(R21 *)rt_nil_check(l_D_2374))).f_NEXT;
}
RT_B_TICK();
} L_end2377: ;
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2381; memset(&l_P_2381, 0, sizeof l_P_2381);
l_P_2381 = p_L;
for (;;) {
if ((l_P_2381 == NULL)) goto L_end2382;
{
if (((((*(R21 *)rt_nil_check(l_P_2381))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2381))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2383 = 1;
return rv2383; }
}
}
l_P_2381 = ((*(R21 *)rt_nil_check(l_P_2381))).f_NEXT;
}
RT_B_TICK();
} L_end2382: ;
{ rt_int rv2384 = 0;
return rv2384; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2385; memset(&l_A_2385, 0, sizeof l_A_2385);
l_A_2385 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2386; memset(&l_FOUND_2386, 0, sizeof l_FOUND_2386);
l_FOUND_2386 = NULL;
rt_int l_N_2387; memset(&l_N_2387, 0, sizeof l_N_2387);
l_N_2387 = ((rt_int)0LL);
R12 * l_Y_2388; memset(&l_Y_2388, 0, sizeof l_Y_2388);
l_Y_2388 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2385 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2385))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2385))).f_DECL == NULL)))
{
{ R22 * rv2389 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2389; }
}
}
for (;;) {
if ((l_Y_2388 == NULL)) goto L_end2390;
{
if (((((*(R12 *)rt_nil_check(l_Y_2388))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2388))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2388))).f_NAME) == l_Y_2388))
{
{
R22 * l_T_2391; memset(&l_T_2391, 0, sizeof l_T_2391);
l_T_2391 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2388))).f_DECL == NULL))
{
l_T_2391 = ((*(R12 *)rt_nil_check(l_Y_2388))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2388))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2388))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2388))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2388))).f_DECL))).f_B))).f_A)))
{
l_T_2391 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2388))).f_NAME, p_LINE);
}
}
if ((!(l_T_2391 == NULL)))
{
l_T_2391 = r_REAL_TYPE(l_T_2391);
if ((((*(R22 *)rt_nil_check(l_T_2391))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2391))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2391))).f_BASE == l_FOUND_2386))))
{
if ((!(l_FOUND_2386 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2386 = ((*(R22 *)rt_nil_check(l_T_2391))).f_BASE;
}
}
}
}
}
}
l_Y_2388 = ((*(R12 *)rt_nil_check(l_Y_2388))).f_SNEXT;
}
RT_B_TICK();
} L_end2390: ;
if ((l_FOUND_2386 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2392 = l_FOUND_2386;
return rv2392; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2393; memset(&l_R_2393, 0, sizeof l_R_2393);
l_R_2393 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2393))).f_BASE == NULL))
{
{ R22 * rv2394 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2394; }
}
{ R22 * rv2395 = ((*(R22 *)rt_nil_check(l_R_2393))).f_BASE;
return rv2395; }
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
R21 * l_S_2396; memset(&l_S_2396, 0, sizeof l_S_2396);
l_S_2396 = p_S0;
for (;;) {
if ((l_S_2396 == NULL)) goto L_end2397;
{
{
R21 * l_L_2398; memset(&l_L_2398, 0, sizeof l_L_2398);
l_L_2398 = l_S_2396;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2398))).f_KIND == g_N_LABELED))) goto L_end2399;
{
{
R12 * l_Y_2400; memset(&l_Y_2400, 0, sizeof l_Y_2400);
l_Y_2400 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2398))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2400))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2398))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2398))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2400))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2400, ((*(R21 *)rt_nil_check(l_L_2398))).f_LINE);
}
l_L_2398 = ((*(R21 *)rt_nil_check(l_L_2398))).f_A;
}
RT_B_TICK();
} L_end2399: ;
}
l_S_2396 = ((*(R21 *)rt_nil_check(l_S_2396))).f_NEXT;
}
RT_B_TICK();
} L_end2397: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2401; memset(&l_D_2401, 0, sizeof l_D_2401);
l_D_2401 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2402; memset(&l_S_2402, 0, sizeof l_S_2402);
l_S_2402 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2401 == NULL)) goto L_end2403;
{
if (((((*(R21 *)rt_nil_check(l_D_2401))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2401))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2401);
}
l_D_2401 = ((*(R21 *)rt_nil_check(l_D_2401))).f_NEXT;
}
RT_B_TICK();
} L_end2403: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2402 == NULL)) goto L_end2404;
{
r_STMT(l_S_2402);
l_S_2402 = ((*(R21 *)rt_nil_check(l_S_2402))).f_NEXT;
}
RT_B_TICK();
} L_end2404: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2405; memset(&l_F_2405, 0, sizeof l_F_2405);
S_R10(&l_F_2405, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2406; memset(&l_H_2406, 0, sizeof l_H_2406);
l_H_2406 = p_HANDLERS;
R10 l_WORD_2407; memset(&l_WORD_2407, 0, sizeof l_WORD_2407);
S_R10(&l_WORD_2407, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2405, l_F_2405));
r_PUSH_CTX(((rt_int)3LL), l_F_2405);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2405, l_F_2405, l_F_2405));
for (;;) {
if ((l_H_2406 == NULL)) goto L_end2408;
{
{
R21 * l_N_2409; memset(&l_N_2409, 0, sizeof l_N_2409);
l_N_2409 = ((*(R21 *)rt_nil_check(l_H_2406))).f_A;
R10 l_COND_2410; memset(&l_COND_2410, 0, sizeof l_COND_2410);
S_R10(&l_COND_2410, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2409 == NULL)) goto L_end2411;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2409))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2409))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2409))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2409))).f_NAME);
}
S_R10(&l_COND_2410, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2410, l_F_2405, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2409))).f_NAME)), 0);
l_N_2409 = ((*(R21 *)rt_nil_check(l_N_2409))).f_NEXT;
}
RT_B_TICK();
} L_end2411: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2407, l_COND_2410));
S_R10(&l_WORD_2407, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2405, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2406))).f_B);
r_POP_CTX();
}
l_H_2406 = ((*(R21 *)rt_nil_check(l_H_2406))).f_NEXT;
}
RT_B_TICK();
} L_end2408: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2405));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2412; memset(&l_K_2412, 0, sizeof l_K_2412);
l_K_2412 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2412 == g_N_NULL))
{
return;
}
else if ((l_K_2412 == g_N_LABELED))
{
{
R12 * l_Y_2413; memset(&l_Y_2413, 0, sizeof l_Y_2413);
l_Y_2413 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2413))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2412 == g_N_GOTO))
{
{
R12 * l_Y_2414; memset(&l_Y_2414, 0, sizeof l_Y_2414);
l_Y_2414 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2415; memset(&l_N_2415, 0, sizeof l_N_2415);
R17 * l_C_2416; memset(&l_C_2416, 0, sizeof l_C_2416);
l_C_2416 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2414 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2414))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2414))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2415 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2414))).f_MV);
for (;;) {
if ((l_N_2415 <= ((rt_int)0LL))) goto L_end2417;
{
if ((((*(R17 *)rt_nil_check(l_C_2416))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2416))).f_NAME));
l_N_2415 = rt_sub(l_N_2415, ((rt_int)1LL));
}
l_C_2416 = ((*(R17 *)rt_nil_check(l_C_2416))).f_NEXT;
}
RT_B_TICK();
} L_end2417: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2414))).f_ACCESS));
}
}
else if ((l_K_2412 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2412 == g_N_CALL))
{
{
R26 l_V_2418; memset(&l_V_2418, 0, sizeof l_V_2418);
S_R26(&l_V_2418, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2418).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2418).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2418).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2412 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2412 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2412 == g_N_LOOP))
{
{
R10 l_END_L_2419; memset(&l_END_L_2419, 0, sizeof l_END_L_2419);
S_R10(&l_END_L_2419, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2419));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2419);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2419));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2419));
}
}
else if ((l_K_2412 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2412 == g_N_EXIT))
{
{
R17 * l_C_2420; memset(&l_C_2420, 0, sizeof l_C_2420);
l_C_2420 = r_LEAVE(((rt_int)2LL));
if ((l_C_2420 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2420))).f_NAME));
}
}
else if ((l_K_2412 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2412 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2412 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2412 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2412 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2412 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2412 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2412 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2421; memset(&l_Y_2421, 0, sizeof l_Y_2421);
l_Y_2421 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2421 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2421))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2421))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2422 = r_CALL_EXPR(p_S, NULL);
return rv2422; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2423; memset(&l_ARM_2423, 0, sizeof l_ARM_2423);
l_ARM_2423 = p_ARMS;
R10 l_WORD_2424; memset(&l_WORD_2424, 0, sizeof l_WORD_2424);
S_R10(&l_WORD_2424, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2425; memset(&l_OPEN_2425, 0, sizeof l_OPEN_2425);
l_OPEN_2425 = ((rt_int)0LL);
rt_int l_CHOSEN_2426; memset(&l_CHOSEN_2426, 0, sizeof l_CHOSEN_2426);
l_CHOSEN_2426 = 0;
for (;;) {
if ((l_ARM_2423 == NULL)) goto L_end2427;
{
{
R23 l_M_2428; memset(&l_M_2428, 0, sizeof l_M_2428);
S_R23(&l_M_2428, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2423))).f_A), 0);
if (l_CHOSEN_2426)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2423))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2423))).f_B);
}
else if ((l_M_2428).f_OK)
{
if ((!r_TEQS(l_WORD_2424, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2425 = rt_add(l_OPEN_2425, ((rt_int)1LL));
S_R10(&l_WORD_2424, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2423))).f_A)));
if (((l_M_2428).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2423))).f_B);
l_CHOSEN_2426 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2423))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2424, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2423))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2423))).f_B);
S_R10(&l_WORD_2424, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2423 = ((*(R21 *)rt_nil_check(l_ARM_2423))).f_NEXT;
}
RT_B_TICK();
} L_end2427: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2426)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2424, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2430_lo = ((rt_int)1LL), it2430_hi = l_OPEN_2425;
for (rt_int it2430 = it2430_lo; it2430 <= it2430_hi; it2430++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2430 == it2430_hi) break;
} } L_end2429: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2431; memset(&l_SAVED_CODE_2431, 0, sizeof l_SAVED_CODE_2431);
S_R14(&l_SAVED_CODE_2431, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2432; memset(&rc2432, 0, sizeof rc2432);  rc2432.f_HEAD = NULL; rc2432.f_TAIL = NULL; rc2432; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2431, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2433; memset(&l_C_2433, 0, sizeof l_C_2433);
S_R10(&l_C_2433, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2434; memset(&l_END_L_2434, 0, sizeof l_END_L_2434);
S_R10(&l_END_L_2434, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2435; memset(&l_IT_2435, 0, sizeof l_IT_2435);
S_R10(&l_IT_2435, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2436; memset(&l_R_2436, 0, sizeof l_R_2436);
l_R_2436 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2437; memset(&l_LO_2437, 0, sizeof l_LO_2437);
S_R26(&l_LO_2437, r_EXPR(((*(R21 *)rt_nil_check(l_R_2436))).f_A, NULL), 0);
R26 l_HI_2438; memset(&l_HI_2438, 0, sizeof l_HI_2438);
S_R26(&l_HI_2438, r_EXPR(((*(R21 *)rt_nil_check(l_R_2436))).f_B, (l_LO_2437).f_T), 0);
R22 * l_T_2439; memset(&l_T_2439, 0, sizeof l_T_2439);
l_T_2439 = r_REAL_TYPE((l_LO_2437).f_T);
R10 l_LOC_2440; memset(&l_LOC_2440, 0, sizeof l_LOC_2440);
R10 l_HIC_2441; memset(&l_HIC_2441, 0, sizeof l_HIC_2441);
if ((((*(R22 *)rt_nil_check(l_T_2439))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2439))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2439))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2439))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2440, (l_LO_2437).f_C, 0);
S_R10(&l_HIC_2441, (l_HI_2438).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2436))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2436))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2440, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2440), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2436))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2441, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2441), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2435, l_LOC_2440, l_IT_2435, l_HIC_2441));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2435, l_IT_2435, l_IT_2435, l_IT_2435));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2442; memset(&l_Y_2442, 0, sizeof l_Y_2442);
l_Y_2442 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2442))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2439))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2442))).f_T = ((*(R22 *)rt_nil_check(l_T_2439))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2442))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2442, rt_str("", 0)), l_IT_2435));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2442, rt_str("", 0)), l_IT_2435));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2442))).f_ACCESS, l_IT_2435, 0);
}
r_DEFINE(l_Y_2442, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2434);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2435, l_IT_2435));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2434));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2443; memset(&l_CS_2443, 0, sizeof l_CS_2443);
l_CS_2443 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2444; memset(&l_C_2444, 0, sizeof l_C_2444);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2444 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2443))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2443))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2443))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2443))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2443))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2443))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2443))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2443))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2445; memset(&l_V_2445, 0, sizeof l_V_2445);
S_R10(&l_V_2445, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2443))).f_RESULT), l_V_2445, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2443))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2443))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2444 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2445));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2446; memset(&l_C_2446, 0, sizeof l_C_2446);
l_C_2446 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2446 == NULL)) goto L_end2447;
{
if ((((*(R17 *)rt_nil_check(l_C_2446))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2446))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2446))).f_KIND == ((rt_int)1LL)))
{
goto L_end2447;
}
l_C_2446 = ((*(R17 *)rt_nil_check(l_C_2446))).f_NEXT;
}
RT_B_TICK();
} L_end2447: ;
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
R21 * l_TG_2448; memset(&l_TG_2448, 0, sizeof l_TG_2448);
l_TG_2448 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2448))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2449; memset(&l_B_2449, 0, sizeof l_B_2449);
S_R26(&l_B_2449, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2448))).f_A, NULL), 0);
if ((!(l_B_2449).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2449).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2450; memset(&l_ARGS_2450, 0, sizeof l_ARGS_2450);
l_ARGS_2450 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2448))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2448))).f_C, g_M_IN, r_VAL_ARG(l_B_2449, NULL))));
R12 * l_Y_2451; memset(&l_Y_2451, 0, sizeof l_Y_2451);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2450))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2451 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2450, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2451 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2450))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2451 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2450, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2451 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2451, l_ARGS_2450, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2449).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2449).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2452; memset(&l_V_2452, 0, sizeof l_V_2452);
S_R26(&l_V_2452, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2449).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2452).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2449).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2449).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2448))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2448))).f_C), (l_V_2452).f_C));
}
}
return;
}
{
R26 l_LV_2453; memset(&l_LV_2453, 0, sizeof l_LV_2453);
S_R26(&l_LV_2453, r_EXPR(l_TG_2448, NULL), 0);
R21 * l_SAVED_Q_2454; memset(&l_SAVED_Q_2454, 0, sizeof l_SAVED_Q_2454);
l_SAVED_Q_2454 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2453).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
r_CODE(r_STORE_CODE((l_LV_2453).f_T, (l_LV_2453).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2453).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2453).f_SELF));
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2454;
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2455; memset(&l_Y_2455, 0, sizeof l_Y_2455);
l_Y_2455 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2456; memset(&l_V_2456, 0, sizeof l_V_2456);
S_R26(&l_V_2456, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2455))).f_T = (l_V_2456).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2457; memset(&l_CN_2457, 0, sizeof l_CN_2457);
S_R10(&l_CN_2457, r_NEW_OBJECT(l_Y_2455, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2456).f_T))
{
r_CODE(r_INIT_CODE((l_V_2456).f_T, l_CN_2457));
}
r_CODE(r_ASSIGN_CODE((l_V_2456).f_T, l_CN_2457, (l_V_2456).f_C));
}
}
else
{
if ((!(l_V_2456).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2458; memset(&l_P_2458, 0, sizeof l_P_2458);
S_R10(&l_P_2458, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2456).f_T), l_P_2458, (l_V_2456).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2455))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2458), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2455))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2455))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2455))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2455, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2459; memset(&l_ARM_2459, 0, sizeof l_ARM_2459);
l_ARM_2459 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2460; memset(&l_CH_2460, 0, sizeof l_CH_2460);
S_R26(&l_CH_2460, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2461; memset(&l_T_2461, 0, sizeof l_T_2461);
l_T_2461 = r_REAL_TYPE((l_CH_2460).f_T);
R12 * l_BOUND_2462; memset(&l_BOUND_2462, 0, sizeof l_BOUND_2462);
l_BOUND_2462 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2461))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2461))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2463; memset(&l_TMP_2463, 0, sizeof l_TMP_2463);
S_R10(&l_TMP_2463, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2464; memset(&l_WORD_2464, 0, sizeof l_WORD_2464);
S_R10(&l_WORD_2464, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2463, (l_CH_2460).f_C));
for (;;) {
if ((l_ARM_2459 == NULL)) goto L_end2465;
{
{
R21 * l_L_2466; memset(&l_L_2466, 0, sizeof l_L_2466);
l_L_2466 = ((*(R21 *)rt_nil_check(l_ARM_2459))).f_A;
R10 l_COND_2467; memset(&l_COND_2467, 0, sizeof l_COND_2467);
S_R10(&l_COND_2467, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2466 == NULL)) goto L_end2468;
{
S_R10(&l_COND_2467, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2467, l_TMP_2463, (r_EXPR(l_L_2466, l_T_2461)).f_C), 0);
l_L_2466 = ((*(R21 *)rt_nil_check(l_L_2466))).f_NEXT;
}
RT_B_TICK();
} L_end2468: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2464, l_COND_2467));
S_R10(&l_WORD_2464, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2459))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2459))).f_C);
}
l_ARM_2459 = ((*(R21 *)rt_nil_check(l_ARM_2459))).f_NEXT;
}
RT_B_TICK();
} L_end2465: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2464, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2461))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2461))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2461))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2461))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2461));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2460).f_C));
for (;;) {
if ((l_ARM_2459 == NULL)) goto L_end2469;
{
{
R21 * l_L_2470; memset(&l_L_2470, 0, sizeof l_L_2470);
l_L_2470 = ((*(R21 *)rt_nil_check(l_ARM_2459))).f_A;
R23 l_FIRST_2471; memset(&l_FIRST_2471, 0, sizeof l_FIRST_2471);
S_R23(&l_FIRST_2471, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2470 == NULL)) goto L_end2472;
{
if ((((*(R21 *)rt_nil_check(l_L_2470))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2473; memset(&l_LO_2473, 0, sizeof l_LO_2473);
S_R23(&l_LO_2473, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2470))).f_A, l_T_2461), 0);
R23 l_HI_2474; memset(&l_HI_2474, 0, sizeof l_HI_2474);
S_R23(&l_HI_2474, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2470))).f_B, l_T_2461), 0);
rt_int l_A_2475; memset(&l_A_2475, 0, sizeof l_A_2475);
l_A_2475 = (l_LO_2473).f_V;
rt_int l_B_2476; memset(&l_B_2476, 0, sizeof l_B_2476);
l_B_2476 = (l_HI_2474).f_V;
if ((!(((l_LO_2473).f_OK && (l_HI_2474).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2470))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2470))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2470))).f_IV == ((rt_int)3LL))))
{
l_A_2475 = rt_add(l_A_2475, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2470))).f_IV >= ((rt_int)2LL)))
{
l_B_2476 = rt_sub(l_B_2476, ((rt_int)1LL));
}
if ((!(l_FIRST_2471).f_OK))
{
S_R23(&l_FIRST_2471, r_SOME(l_A_2475), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2475), r_NUM(l_B_2476)));
}
}
else
{
{
R23 l_M_2477; memset(&l_M_2477, 0, sizeof l_M_2477);
S_R23(&l_M_2477, r_ENUM_MANIFEST(l_L_2470, l_T_2461), 0);
if ((!(l_M_2477).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2470))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2471).f_OK))
{
S_R23(&l_FIRST_2471, l_M_2477, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2477).f_V)));
}
}
l_L_2470 = ((*(R21 *)rt_nil_check(l_L_2470))).f_NEXT;
}
RT_B_TICK();
} L_end2472: ;
if ((!(l_BOUND_2462 == NULL)))
{
{
R22 * l_SAVED_2478; memset(&l_SAVED_2478, 0, sizeof l_SAVED_2478);
l_SAVED_2478 = ((*(R12 *)rt_nil_check(l_BOUND_2462))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2462))).f_T = r_NARROW(l_SAVED_2478, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2471).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2459))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2459))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2462))).f_T = l_SAVED_2478;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2459))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2459))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2459 = ((*(R21 *)rt_nil_check(l_ARM_2459))).f_NEXT;
}
RT_B_TICK();
} L_end2469: ;
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
{ R12 * rv2479 = NULL;
return rv2479; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2480 = NULL;
return rv2480; }
}
{
R12 * l_Y_2481; memset(&l_Y_2481, 0, sizeof l_Y_2481);
l_Y_2481 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2481 == NULL))
{
{ R12 * rv2482 = NULL;
return rv2482; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2481))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2483 = NULL;
return rv2483; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2481))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2484 = NULL;
return rv2484; }
}
{
R24 * l_F_2485; memset(&l_F_2485, 0, sizeof l_F_2485);
l_F_2485 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2481))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2485 == NULL))
{
{ R12 * rv2486 = NULL;
return rv2486; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2485))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2487 = NULL;
return rv2487; }
}
}
{ R12 * rv2488 = l_Y_2481;
return rv2488; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2489; memset(&l_N_2489, 0, sizeof l_N_2489);
l_N_2489 = r_COPY_TYP(p_T);
R24 * l_F_2490; memset(&l_F_2490, 0, sizeof l_F_2490);
l_F_2490 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2491; memset(&l_A_2491, 0, sizeof l_A_2491);
l_A_2491 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2492; memset(&l_HEAD_2492, 0, sizeof l_HEAD_2492);
l_HEAD_2492 = NULL;
R25 * l_TAIL_2493; memset(&l_TAIL_2493, 0, sizeof l_TAIL_2493);
l_TAIL_2493 = NULL;
for (;;) {
if ((l_F_2490 == NULL)) goto L_end2494;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2490))).f_KIND == ((rt_int)0LL))) && (!(l_A_2491 == NULL))))
{
{
R25 * l_B_2495; memset(&l_B_2495, 0, sizeof l_B_2495);
l_B_2495 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2495)), (*(R25 *)rt_nil_check(l_A_2491)), 0);
((*(R25 *)rt_nil_check(l_B_2495))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2490))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2495))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2495))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2495))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2493 == NULL))
{
l_HEAD_2492 = l_B_2495;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2493))).f_NEXT = l_B_2495;
}
l_TAIL_2493 = l_B_2495;
}
l_A_2491 = ((*(R25 *)rt_nil_check(l_A_2491))).f_NEXT;
}
l_F_2490 = ((*(R24 *)rt_nil_check(l_F_2490))).f_NEXT;
}
RT_B_TICK();
} L_end2494: ;
((*(R22 *)rt_nil_check(l_N_2489))).f_ARGS = l_HEAD_2492;
{ R22 * rv2496 = l_N_2489;
return rv2496; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2497; memset(&l_ARM_2497, 0, sizeof l_ARM_2497);
l_ARM_2497 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2498; memset(&l_SAVED_2498, 0, sizeof l_SAVED_2498);
l_SAVED_2498 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2497 == NULL)) goto L_end2499;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2497))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2497))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2497))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2498;
return;
}
l_ARM_2497 = ((*(R21 *)rt_nil_check(l_ARM_2497))).f_NEXT;
}
RT_B_TICK();
} L_end2499: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2498;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2500; memset(&l_T_2500, 0, sizeof l_T_2500);
l_T_2500 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2500))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2501 = l_T_2500;
return rv2501; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2502; memset(&l_TD_2502, 0, sizeof l_TD_2502);
S_R10(&l_TD_2502, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2503; memset(&l_P_2503, 0, sizeof l_P_2503);
l_P_2503 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2503 == NULL)) goto L_end2504;
{
{
R12 * l_Y_2505; memset(&l_Y_2505, 0, sizeof l_Y_2505);
l_Y_2505 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2503))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2505))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2505))).f_DECL = l_P_2503;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2505, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2505))).f_INPUT = 1;
r_DEFINE(l_Y_2505, ((*(R21 *)rt_nil_check(l_P_2503))).f_LINE);
}
l_P_2503 = ((*(R21 *)rt_nil_check(l_P_2503))).f_NEXT;
}
RT_B_TICK();
} L_end2504: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2502));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2502, l_TD_2502));
l_P_2503 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2503 == NULL)) goto L_end2506;
{
r_ACTIVATE_PATH(l_P_2503, l_TD_2502);
l_P_2503 = ((*(R21 *)rt_nil_check(l_P_2503))).f_NEXT;
}
RT_B_TICK();
} L_end2506: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2502, l_TD_2502, l_TD_2502));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2502));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2507; memset(&l_FN_2507, 0, sizeof l_FN_2507);
S_R10(&l_FN_2507, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2508; memset(&l_FT_2508, 0, sizeof l_FT_2508);
S_R10(&l_FT_2508, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2509; memset(&l_Y_2509, 0, sizeof l_Y_2509);
l_Y_2509 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2510; memset(&l_H_2510, 0, sizeof l_H_2510);
S_R10(&l_H_2510, r_OBJ_ACCESS(l_Y_2509), 0);
R10 l_IT_2511; memset(&l_IT_2511, 0, sizeof l_IT_2511);
S_R10(&l_IT_2511, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2512; memset(&l_PRIO_2512, 0, sizeof l_PRIO_2512);
S_R10(&l_PRIO_2512, r_MK(rt_str("0", 1)), 0);
R10 l_START_2513; memset(&l_START_2513, 0, sizeof l_START_2513);
R22 * l_LT_2514; memset(&l_LT_2514, 0, sizeof l_LT_2514);
l_LT_2514 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2508, l_FT_2508));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2512, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2515; memset(&l_R_2515, 0, sizeof l_R_2515);
l_R_2515 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2516; memset(&l_LV_2516, 0, sizeof l_LV_2516);
S_R26(&l_LV_2516, r_EXPR(((*(R21 *)rt_nil_check(l_R_2515))).f_A, NULL), 0);
R10 l_LO_2517; memset(&l_LO_2517, 0, sizeof l_LO_2517);
S_R10(&l_LO_2517, (l_LV_2516).f_C, 0);
R10 l_HI_2518; memset(&l_HI_2518, 0, sizeof l_HI_2518);
S_R10(&l_HI_2518, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2515))).f_B, (l_LV_2516).f_T)).f_C, 0);
R22 * l_RT_2519; memset(&l_RT_2519, 0, sizeof l_RT_2519);
l_RT_2519 = r_REAL_TYPE((l_LV_2516).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2519))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2519))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2514 = ((*(R22 *)rt_nil_check(l_RT_2519))).f_BASE;
S_R10(&l_HI_2518, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2515))).f_B, l_LT_2514)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2519))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2519))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2515))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2515))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2517, r_FMT1(rt_str("(@) + 1", 7), l_LO_2517), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2515))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2518, r_FMT1(rt_str("(@) - 1", 7), l_HI_2518), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2510, l_LO_2517, l_HI_2518));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2511, l_H_2510, l_IT_2511, l_H_2510), l_IT_2511));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2511));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2508, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2511));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2520; memset(&l_V_2520, 0, sizeof l_V_2520);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2521; memset(&l_I_2521, 0, sizeof l_I_2521);
l_I_2521 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2521))).f_T = l_LT_2514;
((*(R12 *)rt_nil_check(l_I_2521))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2521))).f_ACCESS, l_IT_2511, 0);
((*(R12 *)rt_nil_check(l_I_2521))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2521, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2520, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2520).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2520).f_C));
}
}
S_R10(&l_START_2513, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2510, l_IT_2511, l_FN_2507, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2513, p_TD, l_PRIO_2512, l_IT_2511));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2510));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2513, p_TD, l_PRIO_2512));
}
r_PATH_BODY(p_P, l_FN_2507, l_FT_2508, l_LT_2514);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2522 = r_MK(rt_str("NULL", 4));
return rv2522; }
}
{ R10 rv2523 = r_MK(rt_str("F", 1));
return rv2523; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2524; memset(&l_SAVED_CODE_2524, 0, sizeof l_SAVED_CODE_2524);
S_R14(&l_SAVED_CODE_2524, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2525; memset(&l_SAVED_CTXS_2525, 0, sizeof l_SAVED_CTXS_2525);
l_SAVED_CTXS_2525 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2526; memset(&l_OUTER_2526, 0, sizeof l_OUTER_2526);
l_OUTER_2526 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2527; memset(&l_H_2527, 0, sizeof l_H_2527);
l_H_2527 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2528; memset(&l_CS_2528, 0, sizeof l_CS_2528);
l_CS_2528 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_2529; memset(&l_UPT_2529, 0, sizeof l_UPT_2529);
S_R10(&l_UPT_2529, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2526))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2529, ((*(R18 *)rt_nil_check(l_OUTER_2526))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2528)), ({ R18 rc2530; memset(&rc2530, 0, sizeof rc2530);  rc2530.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2526))).f_LEVEL, ((rt_int)1LL)); rc2530.f_R = NULL; rc2530.f_FRAMED = 1; S_R10(&rc2530.f_FTYPE, p_FT, 0); S_R14(&rc2530.f_FIELDS, ({ R14 rc2531; memset(&rc2531, 0, sizeof rc2531);  rc2531.f_HEAD = NULL; rc2531.f_TAIL = NULL; rc2531; }), 0); rc2530.f_UP = l_OUTER_2526; rc2530.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2527))).f_B; rc2530.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2527))).f_A; rc2530.f_RESULT = NULL; rc2530.f_IS_PATH = 1; S_R10(&rc2530.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2530; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2529), &((*(R18 *)rt_nil_check(l_CS_2528))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2528;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2532; memset(&rc2532, 0, sizeof rc2532);  rc2532.f_HEAD = NULL; rc2532.f_TAIL = NULL; rc2532; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2527))).f_B, ((*(R21 *)rt_nil_check(l_H_2527))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2533; memset(&l_I_2533, 0, sizeof l_I_2533);
l_I_2533 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2533))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2533))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2533))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2533))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2528))).f_FIELDS);
r_DEFINE(l_I_2533, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2534; memset(&l_L_2534, 0, sizeof l_L_2534);
l_L_2534 = ((*(R21 *)rt_nil_check(l_H_2527))).f_A;
R10 l_C_2535; memset(&l_C_2535, 0, sizeof l_C_2535);
S_R10(&l_C_2535, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2534 == NULL)) goto L_end2536;
{
S_R10(&l_C_2535, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2535, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2534))).f_NAME)), 0);
l_L_2534 = ((*(R21 *)rt_nil_check(l_L_2534))).f_NEXT;
}
RT_B_TICK();
} L_end2536: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2535));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2528))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2526;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2524, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2525;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2537; memset(&l_C_2537, 0, sizeof l_C_2537);
l_C_2537 = (p_B).f_HEAD;
R10 l_R_2538; memset(&l_R_2538, 0, sizeof l_R_2538);
S_R10(&l_R_2538, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2537 == NULL)) goto L_end2539;
{
S_R10(&l_R_2538, r_CAT(l_R_2538, ((*(R15 *)rt_nil_check(l_C_2537))).f_T), 0);
l_C_2537 = ((*(R15 *)rt_nil_check(l_C_2537))).f_NEXT;
}
RT_B_TICK();
} L_end2539: ;
{ R10 rv2540 = l_R_2538;
return rv2540; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2541; memset(&l_NAME_2541, 0, sizeof l_NAME_2541);
S_R10(&l_NAME_2541, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2542; memset(&l_SUB_2542, 0, sizeof l_SUB_2542);
S_R10(&l_SUB_2542, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2542, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2543; memset(&l_Y_2543, 0, sizeof l_Y_2543);
l_Y_2543 = r_LOOKUP(l_NAME_2541);
if ((l_Y_2543 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2541);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2543))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2541);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2543))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2544 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2543), l_SUB_2542);
return rv2544; }
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
R10 l_NAME_2545; memset(&l_NAME_2545, 0, sizeof l_NAME_2545);
S_R10(&l_NAME_2545, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2546; memset(&l_LINE_2546, 0, sizeof l_LINE_2546);
l_LINE_2546 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2545, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2547; memset(&l_V_2547, 0, sizeof l_V_2547);
S_R26(&l_V_2547, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2547).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2546, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2548 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2547).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2547).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2548; }
}
}
else if (r_TEQS(l_NAME_2545, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2549 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2549; }
}
{ R26 rv2550 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2550; }
}
else if (r_TEQS(l_NAME_2545, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2551 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2551; }
}
{ R26 rv2552 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2552; }
}
else if ((r_TEQS(l_NAME_2545, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2545, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2546, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2545);
}
{
R26 l_V_2553; memset(&l_V_2553, 0, sizeof l_V_2553);
S_R26(&l_V_2553, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2553).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2546, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2553).f_LVAL))
{
r_FAIL(l_LINE_2546, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2545, rt_str("REQUEST", 7)))
{
{ R26 rv2554 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2553).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2554; }
}
{ R26 rv2555 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2553).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2555; }
}
}
else if (r_TEQS(l_NAME_2545, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2546);
{ R26 rv2556 = r_START_IO_CALL(p_E);
return rv2556; }
}
r_FAILT(l_LINE_2546, rt_str("unknown routine ", 16), l_NAME_2545);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2557; memset(&l_ARGS_2557, 0, sizeof l_ARGS_2557);
l_ARGS_2557 = r_CALL_ARGS(p_E);
R12 * l_Y_2558; memset(&l_Y_2558, 0, sizeof l_Y_2558);
l_Y_2558 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2557, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2559; memset(&l_R_2559, 0, sizeof l_R_2559);
if ((l_Y_2558 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2559, r_CALL_SYM(l_Y_2558, l_ARGS_2557, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2560 = l_R_2559;
return rv2560; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2561; memset(&l_I_2561, 0, sizeof l_I_2561);
l_I_2561 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2561)), ({ R19 rc2562; memset(&rc2562, 0, sizeof rc2562);  rc2562.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2562.f_IMPORTS = p_IMPORTS; rc2562.f_SIGNALS = p_SIGNALS; S_R10(&rc2562.f_NAME, p_NAME, 0); rc2562.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2562; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2561;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2563; memset(&l_BASE_2563, 0, sizeof l_BASE_2563);
S_R10(&l_BASE_2563, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2564; memset(&l_S_2564, 0, sizeof l_S_2564);
l_S_2564 = rt_b_str_new((l_BASE_2563).f_LEN, 0);
rt_b_assign(&l_S_2564, r_STR(l_BASE_2563, (l_BASE_2563).f_LEN));
R21 * l_N_2565; memset(&l_N_2565, 0, sizeof l_N_2565);
l_N_2565 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2567_lo = ((rt_int)0LL), it2567_hi = rt_sub((l_BASE_2563).f_LEN, ((rt_int)1LL));
for (rt_int it2567 = it2567_lo; it2567 <= it2567_hi; it2567++) {
{
if (rt_b_eq(rt_b_slice(l_S_2564, it2567, it2567), rt_str("$", 1)))
{
S_R10(&l_BASE_2563, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_2564, ((rt_int)0LL), rt_sub(it2567, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2564, rt_add(it2567, ((rt_int)1LL)), rt_sub((l_BASE_2563).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2567 == it2567_hi) break;
} } L_end2566: ;
for (;;) {
if ((l_N_2565 == NULL)) goto L_end2568;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2565))).f_NAME, l_BASE_2563))
{
{ R10 rv2569 = r_FMT2(rt_str("@_@", 3), l_BASE_2563, r_NEW_NAME(rt_str("", 0)));
return rv2569; }
}
l_N_2565 = ((*(R21 *)rt_nil_check(l_N_2565))).f_NEXT;
}
RT_B_TICK();
} L_end2568: ;
l_N_2565 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2565))).f_NAME, l_BASE_2563, 0);
((*(R21 *)rt_nil_check(l_N_2565))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2565;
{ R10 rv2570 = l_BASE_2563;
return rv2570; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2571 = 0;
return rv2571; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2572 = 1;
return rv2572; }
}
{ rt_int rv2573 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2573; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2574; memset(&l_S_2574, 0, sizeof l_S_2574);
l_S_2574 = p_S0;
for (;;) {
if ((l_S_2574 == NULL)) goto L_end2575;
{
if (((((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_PAR)))
{
{ rt_int rv2576 = 1;
return rv2576; }
}
if (((((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2574))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2574))).f_B)))
{
{ rt_int rv2577 = 1;
return rv2577; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2574))).f_A))).f_B))
{
{ rt_int rv2578 = 1;
return rv2578; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2574))).f_B))).f_B))
{
{ rt_int rv2579 = 1;
return rv2579; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2580; memset(&l_A_2580, 0, sizeof l_A_2580);
l_A_2580 = ((*(R21 *)rt_nil_check(l_S_2574))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2574))).f_KIND == g_N_CASE))
{
l_A_2580 = ((*(R21 *)rt_nil_check(l_S_2574))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2574))).f_D == NULL)))
{
{ rt_int rv2581 = 1;
return rv2581; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2574))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2574))).f_C))).f_B))
{
{ rt_int rv2582 = 1;
return rv2582; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2574))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2574))).f_B))).f_B))
{
{ rt_int rv2583 = 1;
return rv2583; }
}
}
for (;;) {
if ((l_A_2580 == NULL)) goto L_end2584;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2580))).f_C == NULL)))
{
{ rt_int rv2585 = 1;
return rv2585; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2580))).f_B))).f_B))
{
{ rt_int rv2586 = 1;
return rv2586; }
}
l_A_2580 = ((*(R21 *)rt_nil_check(l_A_2580))).f_NEXT;
}
RT_B_TICK();
} L_end2584: ;
}
}
l_S_2574 = ((*(R21 *)rt_nil_check(l_S_2574))).f_NEXT;
}
RT_B_TICK();
} L_end2575: ;
{ rt_int rv2587 = 0;
return rv2587; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2588; memset(&l_Y_2588, 0, sizeof l_Y_2588);
l_Y_2588 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2589; memset(&l_S_2589, 0, sizeof l_S_2589);
l_S_2589 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_2589, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2588))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2588))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2588))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2588))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2588, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2591_lo = ((rt_int)1LL), it2591_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2591 = it2591_lo; it2591 <= it2591_hi; it2591++) {
{
if (rt_b_eq(rt_b_slice(l_S_2589, it2591, it2591), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2588))).f_PREFIX, r_MKN(rt_b_slice(l_S_2589, ((rt_int)0LL), rt_sub(it2591, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2592; memset(&l_SHORT_2592, 0, sizeof l_SHORT_2592);
l_SHORT_2592 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2589, rt_add(it2591, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2592))).f_ORIG = l_Y_2588;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2592))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2588))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2592))).f_DECL = p_R;
r_DEFINE(l_SHORT_2592, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2590;
}
}
RT_B_TICK();
if (it2591 == it2591_hi) break;
} } L_end2590: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2593; memset(&l_R_2593, 0, sizeof l_R_2593);
l_R_2593 = p_RS;
for (;;) {
if ((l_R_2593 == NULL)) goto L_end2594;
{
if ((((*(R21 *)rt_nil_check(l_R_2593))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2593);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2593);
}
l_R_2593 = ((*(R21 *)rt_nil_check(l_R_2593))).f_NEXT;
}
RT_B_TICK();
} L_end2594: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2595; memset(&l_R_2595, 0, sizeof l_R_2595);
l_R_2595 = p_RS;
for (;;) {
if ((l_R_2595 == NULL)) goto L_end2596;
{
if ((((*(R21 *)rt_nil_check(l_R_2595))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2597; memset(&l_M_2597, 0, sizeof l_M_2597);
l_M_2597 = r_FIND_DECL(l_R_2595);
r_ENTER_MODULE(l_M_2597);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2595))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2597);
}
}
else
{
{
R12 * l_Y_2598; memset(&l_Y_2598, 0, sizeof l_Y_2598);
l_Y_2598 = r_FIND_DECL(l_R_2595);
r_ROUTINE_HEADER(l_Y_2598);
}
}
l_R_2595 = ((*(R21 *)rt_nil_check(l_R_2595))).f_NEXT;
}
RT_B_TICK();
} L_end2596: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2599; memset(&l_Y_2599, 0, sizeof l_Y_2599);
l_Y_2599 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2599 == NULL)) goto L_end2600;
{
if (((((*(R12 *)rt_nil_check(l_Y_2599))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2599))).f_ORIG == NULL)))
{
{ R12 * rv2601 = l_Y_2599;
return rv2601; }
}
l_Y_2599 = r_LOOKUP_NEXT(l_Y_2599);
}
RT_B_TICK();
} L_end2600: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2602; memset(&l_D_2602, 0, sizeof l_D_2602);
l_D_2602 = p_DECLS;
for (;;) {
if ((l_D_2602 == NULL)) goto L_end2603;
{
if (((((*(R21 *)rt_nil_check(l_D_2602))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2602))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2602))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2604; memset(&l_Y_2604, 0, sizeof l_Y_2604);
l_Y_2604 = r_FIND_DECL(l_D_2602);
R22 * l_T_2605; memset(&l_T_2605, 0, sizeof l_T_2605);
l_T_2605 = r_RESOLVE_USER(r_TYPE_REF(l_D_2602));
}
}
}
l_D_2602 = ((*(R21 *)rt_nil_check(l_D_2602))).f_NEXT;
}
RT_B_TICK();
} L_end2603: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2606; memset(&l_TS_2606, 0, sizeof l_TS_2606);
l_TS_2606 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2606))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2607 = l_TS_2606;
return rv2607; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2608; memset(&l_Y_2608, 0, sizeof l_Y_2608);
l_Y_2608 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2609; memset(&l_SAVED_2609, 0, sizeof l_SAVED_2609);
l_SAVED_2609 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2608))).f_DECL = p_M;
r_DEFINE(l_Y_2608, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2610; memset(&l_MARK_2610, 0, sizeof l_MARK_2610);
l_MARK_2610 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2608;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2608))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2610);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2609;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2608);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2611; memset(&l_Y_2611, 0, sizeof l_Y_2611);
l_Y_2611 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2611 == NULL)) goto L_end2612;
{
{
R12 * l_NEXT_2613; memset(&l_NEXT_2613, 0, sizeof l_NEXT_2613);
l_NEXT_2613 = ((*(R12 *)rt_nil_check(l_Y_2611))).f_SNEXT;
r_DEFINE(l_Y_2611, ((rt_int)0LL));
l_Y_2611 = l_NEXT_2613;
}
}
RT_B_TICK();
} L_end2612: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2614; memset(&l_MARK_2614, 0, sizeof l_MARK_2614);
l_MARK_2614 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2614 == NULL)) goto L_end2615;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2614))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2615;
}
l_MARK_2614 = ((*(R12 *)rt_nil_check(l_MARK_2614))).f_SNEXT;
}
RT_B_TICK();
} L_end2615: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2614);
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
{ rt_int rv2616 = 1;
return rv2616; }
}
}
{ rt_int rv2617 = 0;
return rv2617; }
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
R21 * l_D_2618; memset(&l_D_2618, 0, sizeof l_D_2618);
l_D_2618 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2619; memset(&l_Y_2619, 0, sizeof l_Y_2619);
l_Y_2619 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2619 == NULL)) goto L_end2620;
{
if (r_EXPORTED_BY(l_D_2618, l_Y_2619))
{
((*(R12 *)rt_nil_check(l_Y_2619))).f_EXPORTED = 1;
{
R12 * l_A_2621; memset(&l_A_2621, 0, sizeof l_A_2621);
l_A_2621 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2619))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2619))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2621)), (*(R12 *)rt_nil_check(l_Y_2619)), 0);
((*(R12 *)rt_nil_check(l_A_2621))).f_ORIG = r_ORIGINAL(l_Y_2619);
((*(R12 *)rt_nil_check(l_A_2621))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2621, ((*(R21 *)rt_nil_check(l_D_2618))).f_LINE);
}
}
l_Y_2619 = ((*(R12 *)rt_nil_check(l_Y_2619))).f_SNEXT;
}
RT_B_TICK();
} L_end2620: ;
{
R21 * l_X_2622; memset(&l_X_2622, 0, sizeof l_X_2622);
l_X_2622 = ((*(R21 *)rt_nil_check(l_D_2618))).f_B;
for (;;) {
if ((l_X_2622 == NULL)) goto L_end2623;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2622))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2622))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2622))).f_NAME);
}
l_X_2622 = ((*(R21 *)rt_nil_check(l_X_2622))).f_NEXT;
}
RT_B_TICK();
} L_end2623: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2624; memset(&l_Y_2624, 0, sizeof l_Y_2624);
l_Y_2624 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2624 == NULL)) goto L_end2625;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2624))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2624))).f_PREFIX, p_NAME)))
{
{ rt_int rv2626 = 1;
return rv2626; }
}
l_Y_2624 = ((*(R12 *)rt_nil_check(l_Y_2624))).f_SNEXT;
}
RT_B_TICK();
} L_end2625: ;
{ rt_int rv2627 = 0;
return rv2627; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2628; memset(&l_X_2628, 0, sizeof l_X_2628);
l_X_2628 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2629 = 0;
return rv2629; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2630 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2630; }
}
for (;;) {
if ((l_X_2628 == NULL)) goto L_end2631;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2628))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2632 = 1;
return rv2632; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2628))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2628))).f_A == NULL))
{
{ rt_int rv2633 = 1;
return rv2633; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2628))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2634 = 1;
return rv2634; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2635; memset(&l_T_2635, 0, sizeof l_T_2635);
l_T_2635 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2628))).f_NAME, p_Y);
if ((!(l_T_2635 == NULL)))
{
{ rt_int rv2636 = 1;
return rv2636; }
}
}
}
l_X_2628 = ((*(R21 *)rt_nil_check(l_X_2628))).f_NEXT;
}
RT_B_TICK();
} L_end2631: ;
{ rt_int rv2637 = 0;
return rv2637; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2638; memset(&l_M_2638, 0, sizeof l_M_2638);
l_M_2638 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2639; memset(&l_Z_2639, 0, sizeof l_Z_2639);
if ((l_M_2638 == NULL))
{
{ R12 * rv2640 = NULL;
return rv2640; }
}
l_Z_2639 = ((*(R12 *)rt_nil_check(l_M_2638))).f_MEMBERS;
for (;;) {
if ((l_Z_2639 == NULL)) goto L_end2641;
{
if (((((*(R12 *)rt_nil_check(l_Z_2639))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2639))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2639))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2639))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2639))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2642 = l_Z_2639;
return rv2642; }
}
}
}
}
l_Z_2639 = ((*(R12 *)rt_nil_check(l_Z_2639))).f_SNEXT;
}
RT_B_TICK();
} L_end2641: ;
{ R12 * rv2643 = NULL;
return rv2643; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2644; memset(&l_R_2644, 0, sizeof l_R_2644);
l_R_2644 = p_RS;
for (;;) {
if ((l_R_2644 == NULL)) goto L_end2645;
{
if ((((*(R21 *)rt_nil_check(l_R_2644))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2646; memset(&l_M_2646, 0, sizeof l_M_2646);
l_M_2646 = r_FIND_DECL(l_R_2644);
R21 * l_D_2647; memset(&l_D_2647, 0, sizeof l_D_2647);
l_D_2647 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2644))).f_C))).f_A;
r_ENTER_MODULE(l_M_2646);
for (;;) {
if ((l_D_2647 == NULL)) goto L_end2648;
{
if (((((*(R21 *)rt_nil_check(l_D_2647))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2647))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2647);
}
l_D_2647 = ((*(R21 *)rt_nil_check(l_D_2647))).f_NEXT;
}
RT_B_TICK();
} L_end2648: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2644))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2644))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2646);
}
}
l_R_2644 = ((*(R21 *)rt_nil_check(l_R_2644))).f_NEXT;
}
RT_B_TICK();
} L_end2645: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2649; memset(&l_R_2649, 0, sizeof l_R_2649);
l_R_2649 = p_RS;
for (;;) {
if ((l_R_2649 == NULL)) goto L_end2650;
{
if ((((*(R21 *)rt_nil_check(l_R_2649))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2651; memset(&l_M_2651, 0, sizeof l_M_2651);
l_M_2651 = r_FIND_DECL(l_R_2649);
r_ENTER_MODULE(l_M_2651);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2649))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2651);
}
}
else
{
{
R12 * l_Y_2652; memset(&l_Y_2652, 0, sizeof l_Y_2652);
l_Y_2652 = r_FIND_DECL(l_R_2649);
if ((!((*(R12 *)rt_nil_check(l_Y_2652))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2652);
}
}
}
l_R_2649 = ((*(R21 *)rt_nil_check(l_R_2649))).f_NEXT;
}
RT_B_TICK();
} L_end2650: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2653; memset(&l_LEVEL_2653, 0, sizeof l_LEVEL_2653);
l_LEVEL_2653 = r_CUR_LEVEL();
rt_int l_MORE_2654; memset(&l_MORE_2654, 0, sizeof l_MORE_2654);
l_MORE_2654 = 1;
for (;;) {
if ((!l_MORE_2654)) goto L_end2655;
{
l_MORE_2654 = 0;
{
R12 * l_P_2656; memset(&l_P_2656, 0, sizeof l_P_2656);
l_P_2656 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2657; memset(&l_PREV_2657, 0, sizeof l_PREV_2657);
l_PREV_2657 = NULL;
for (;;) {
if ((l_P_2656 == NULL)) goto L_end2658;
{
if ((((*(R12 *)rt_nil_check(l_P_2656))).f_LEVEL == l_LEVEL_2653))
{
if ((l_PREV_2657 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2656))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2657))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2656))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2656);
r_ROUTINE_BODY(l_P_2656);
r_LEAVE_MODULE_OF(l_P_2656);
l_MORE_2654 = 1;
goto L_end2658;
}
l_PREV_2657 = l_P_2656;
l_P_2656 = ((*(R12 *)rt_nil_check(l_P_2656))).f_MEMBERS;
}
RT_B_TICK();
} L_end2658: ;
}
}
RT_B_TICK();
} L_end2655: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2659; memset(&l_D_2659, 0, sizeof l_D_2659);
l_D_2659 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2660; memset(&l_S_2660, 0, sizeof l_S_2660);
l_S_2660 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2659 == NULL)) goto L_end2661;
{
if (((((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2659);
}
l_D_2659 = ((*(R21 *)rt_nil_check(l_D_2659))).f_NEXT;
}
RT_B_TICK();
} L_end2661: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2660 == NULL)) goto L_end2662;
{
r_STMT(l_S_2660);
l_S_2660 = ((*(R21 *)rt_nil_check(l_S_2660))).f_NEXT;
}
RT_B_TICK();
} L_end2662: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2663; memset(&l_R_2663, 0, sizeof l_R_2663);
l_R_2663 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2664; memset(&l_SAVED_CODE_2664, 0, sizeof l_SAVED_CODE_2664);
S_R14(&l_SAVED_CODE_2664, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2665; memset(&l_SAVED_CTXS_2665, 0, sizeof l_SAVED_CTXS_2665);
l_SAVED_CTXS_2665 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2666; memset(&l_SAVED_BINDS_2666, 0, sizeof l_SAVED_BINDS_2666);
l_SAVED_BINDS_2666 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2667; memset(&l_OUTER_2667, 0, sizeof l_OUTER_2667);
l_OUTER_2667 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2668; memset(&l_CS_2668, 0, sizeof l_CS_2668);
l_CS_2668 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2669; memset(&l_PROLOGUE_2669, 0, sizeof l_PROLOGUE_2669);
S_R10(&l_PROLOGUE_2669, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2668)), ({ R18 rc2670; memset(&rc2670, 0, sizeof rc2670);  rc2670.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2670.f_R = p_Y; rc2670.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2670.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2670.f_FIELDS, ({ R14 rc2671; memset(&rc2671, 0, sizeof rc2671);  rc2671.f_HEAD = NULL; rc2671.f_TAIL = NULL; rc2671; }), 0); rc2670.f_UP = l_OUTER_2667; rc2670.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2663))).f_E; rc2670.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2663))).f_D))).f_A; rc2670.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2670.f_IS_PATH = 0; S_R10(&rc2670.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2670; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2668))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2668))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2668))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2668))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2669, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2668))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2668))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2669, r_CATS(l_PROLOGUE_2669, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2668;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2672; memset(&rc2672, 0, sizeof rc2672);  rc2672.f_HEAD = NULL; rc2672.f_TAIL = NULL; rc2672; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2663))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2663))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2663))).f_LINE);
{
R28 * l_P_2673; memset(&l_P_2673, 0, sizeof l_P_2673);
l_P_2673 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2673 == NULL)) goto L_end2674;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2673))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2673))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2675; memset(&l_V_2675, 0, sizeof l_V_2675);
l_V_2675 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2673))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2675))).f_T = ((*(R28 *)rt_nil_check(l_P_2673))).f_T;
((*(R12 *)rt_nil_check(l_V_2675))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2673))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2675))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2673))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2675))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2675))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2673))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2668))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2673))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2668))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2669, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2669, r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2675))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2673))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2676; memset(&l_ARGA_2676, 0, sizeof l_ARGA_2676);
S_R10(&l_ARGA_2676, ((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2673))).f_T, l_ARGA_2676, ((*(R21 *)rt_nil_check(l_R_2663))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2675))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2673))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2668))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2669, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2669, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2673))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2669, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2669, ((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, l_ARGA_2676), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2673))).f_T))
{
S_R10(&l_PROLOGUE_2669, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2669, ((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2673))).f_T, l_ARGA_2676)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2668))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2668))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2673))).f_T, l_ARGA_2676, ((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS)), 0);
r_DEFINE(l_V_2675, ((*(R21 *)rt_nil_check(l_R_2663))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2675, ((*(R21 *)rt_nil_check(l_R_2663))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2673))).f_T, ((*(R12 *)rt_nil_check(l_V_2675))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2663))).f_LINE, 1);
}
}
}
}
l_P_2673 = ((*(R28 *)rt_nil_check(l_P_2673))).f_NEXT;
}
RT_B_TICK();
} L_end2674: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2663))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2663))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2663))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2668))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2668))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2669));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2668))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2668))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2667;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2664, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2665;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2666;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2677; memset(&l_B_2677, 0, sizeof l_B_2677);
l_B_2677 = p_BS;
for (;;) {
if ((l_B_2677 == NULL)) goto L_end2678;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2677))).f_T == NULL)))
{
{
R12 * l_Y_2679; memset(&l_Y_2679, 0, sizeof l_Y_2679);
l_Y_2679 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2677))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2679))).f_T = ((*(R20 *)rt_nil_check(l_B_2677))).f_T;
r_DEFINE(l_Y_2679, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2677))).f_HASMV)
{
{
R12 * l_Y_2680; memset(&l_Y_2680, 0, sizeof l_Y_2680);
l_Y_2680 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2677))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2680))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2680))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2680))).f_MV = ((*(R20 *)rt_nil_check(l_B_2677))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2680))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2677))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2680))).f_INPUT = 1;
r_DEFINE(l_Y_2680, p_LINE);
}
}
l_B_2677 = ((*(R20 *)rt_nil_check(l_B_2677))).f_NEXT;
}
RT_B_TICK();
} L_end2678: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2681; memset(&l_C_2681, 0, sizeof l_C_2681);
l_C_2681 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2681 == NULL)) goto L_end2682;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2681))).f_T), &(*p_DST));
l_C_2681 = ((*(R15 *)rt_nil_check(l_C_2681))).f_NEXT;
}
RT_B_TICK();
} L_end2682: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2683; memset(&l_U_2683, 0, sizeof l_U_2683);
l_U_2683 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2683 == NULL)) goto L_end2684;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2683))).f_NAME, p_NAME))
{
{ rt_int rv2685 = 1;
return rv2685; }
}
l_U_2683 = ((*(R21 *)rt_nil_check(l_U_2683))).f_NEXT;
}
RT_B_TICK();
} L_end2684: ;
{ rt_int rv2686 = 0;
return rv2686; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2687; memset(&l_U_2687, 0, sizeof l_U_2687);
l_U_2687 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2687 == NULL)) goto L_end2688;
{
{
R21 * l_T_2689; memset(&l_T_2689, 0, sizeof l_T_2689);
l_T_2689 = p_SEGS;
for (;;) {
if ((l_T_2689 == NULL)) goto L_end2690;
{
if ((((!(l_T_2689 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2689))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2689))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2687))).f_NAME)))
{
{ rt_int rv2691 = 0;
return rv2691; }
}
l_T_2689 = ((*(R21 *)rt_nil_check(l_T_2689))).f_NEXT;
}
RT_B_TICK();
} L_end2690: ;
}
l_U_2687 = ((*(R21 *)rt_nil_check(l_U_2687))).f_NEXT;
}
RT_B_TICK();
} L_end2688: ;
{ rt_int rv2692 = 1;
return rv2692; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2693; memset(&l_S_2693, 0, sizeof l_S_2693);
l_S_2693 = p_SEGS;
rt_int l_MAINS_2694; memset(&l_MAINS_2694, 0, sizeof l_MAINS_2694);
l_MAINS_2694 = ((rt_int)0LL);
R18 * l_ROOT_2695; memset(&l_ROOT_2695, 0, sizeof l_ROOT_2695);
l_ROOT_2695 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2695)), ({ R18 rc2696; memset(&rc2696, 0, sizeof rc2696);  rc2696.f_LEVEL = ((rt_int)0LL); rc2696.f_R = NULL; rc2696.f_FRAMED = 0; S_R10(&rc2696.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2696.f_FIELDS, ({ R14 rc2697; memset(&rc2697, 0, sizeof rc2697);  rc2697.f_HEAD = NULL; rc2697.f_TAIL = NULL; rc2697; }), 0); rc2696.f_UP = NULL; rc2696.f_IMPORTS = NULL; rc2696.f_SIGNALS = NULL; rc2696.f_RESULT = NULL; rc2696.f_IS_PATH = 0; S_R10(&rc2696.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2696; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2695;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2698; memset(&rc2698, 0, sizeof rc2698);  rc2698.f_HEAD = NULL; rc2698.f_TAIL = NULL; rc2698; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2693 = p_SEGS;
for (;;) {
if ((l_S_2693 == NULL)) goto L_end2700;
{
if ((((*(R21 *)rt_nil_check(l_S_2693))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2693, p_SEGS))
{
goto L_end2700;
}
}
l_S_2693 = ((*(R21 *)rt_nil_check(l_S_2693))).f_NEXT;
}
RT_B_TICK();
} L_end2700: ;
if ((l_S_2693 == NULL))
{
goto L_end2699;
}
((*(R21 *)rt_nil_check(l_S_2693))).f_D = l_S_2693;
l_MAINS_2694 = rt_add(l_MAINS_2694, ((*(R21 *)rt_nil_check(l_S_2693))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2693))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2693))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2693))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2693, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2693))).f_B);
r_SEGMENT_EXPORTS(l_S_2693);
}
RT_B_TICK();
} L_end2699: ;
l_S_2693 = p_SEGS;
for (;;) {
if ((l_S_2693 == NULL)) goto L_end2701;
{
if ((((*(R21 *)rt_nil_check(l_S_2693))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2693))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2693))).f_NAME);
}
l_S_2693 = ((*(R21 *)rt_nil_check(l_S_2693))).f_NEXT;
}
RT_B_TICK();
} L_end2701: ;
if ((!(l_MAINS_2694 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2702; memset(&l_X_2702, 0, sizeof l_X_2702);
l_X_2702 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2702 == NULL)) goto L_end2703;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2702))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2702))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2702))).f_NAME)));
l_X_2702 = ((*(R21 *)rt_nil_check(l_X_2702))).f_NEXT;
}
RT_B_TICK();
} L_end2703: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2704; memset(&l_M_2704, 0, sizeof l_M_2704);
l_M_2704 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2705 = 0;
return rv2705; }
}
for (;;) {
if ((l_M_2704 == NULL)) goto L_end2706;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2704))).f_NAME))
{
{ rt_int rv2707 = 1;
return rv2707; }
}
l_M_2704 = ((*(R12 *)rt_nil_check(l_M_2704))).f_MODL;
}
RT_B_TICK();
} L_end2706: ;
{ rt_int rv2708 = 0;
return rv2708; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2709; memset(&l_MARK_2709, 0, sizeof l_MARK_2709);
l_MARK_2709 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2710; memset(&l_TAKEN_2710, 0, sizeof l_TAKEN_2710);
for (;;) {
if ((l_MARK_2709 == NULL)) goto L_end2711;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2709))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2711;
}
l_MARK_2709 = ((*(R12 *)rt_nil_check(l_MARK_2709))).f_SNEXT;
}
RT_B_TICK();
} L_end2711: ;
l_TAKEN_2710 = r_TAKE_SCOPE(l_MARK_2709);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2710 == NULL)) goto L_end2712;
{
{
R12 * l_NEXT_2713; memset(&l_NEXT_2713, 0, sizeof l_NEXT_2713);
l_NEXT_2713 = ((*(R12 *)rt_nil_check(l_TAKEN_2710))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2710))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2710))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2710))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2710)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2710))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2710))))))
{
r_DEFINE(l_TAKEN_2710, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2710 = l_NEXT_2713;
}
}
RT_B_TICK();
} L_end2712: ;
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
g_W = ({ R7 *p = rt_alloc(sizeof *p);  (*p).f_ARENA = rt_b_str_new(((rt_int)64000000LL), 0); { (*p).f_SRC.lo[0] = ((rt_int)0LL); (*p).f_SRC.hi[0] = g_MAX_SOURCE; rt_int n = rt_b_extent(1, (*p).f_SRC.lo, (*p).f_SRC.hi); (*p).f_SRC.p = rt_b_array_alloc(n, sizeof *(*p).f_SRC.p); } { (*p).f_TOKS.lo[0] = ((rt_int)0LL); (*p).f_TOKS.hi[0] = g_MAX_TOKENS; rt_int n = rt_b_extent(1, (*p).f_TOKS.lo, (*p).f_TOKS.hi); (*p).f_TOKS.p = rt_b_array_alloc(n, sizeof *(*p).f_TOKS.p); } { (*p).f_TABLE.lo[0] = ((rt_int)0LL); (*p).f_TABLE.hi[0] = g_HASH_SIZE; rt_int n = rt_b_extent(1, (*p).f_TABLE.lo, (*p).f_TABLE.hi); (*p).f_TABLE.p = rt_b_array_alloc(n, sizeof *(*p).f_TABLE.p); } { (*p).f_OUT.lo[0] = ((rt_int)0LL); (*p).f_OUT.hi[0] = g_O_LAST; rt_int n = rt_b_extent(1, (*p).f_OUT.lo, (*p).f_OUT.hi); (*p).f_OUT.p = rt_b_array_alloc(n, sizeof *(*p).f_OUT.p); } p; });
r_READ_SOURCE();
r_LEX();
r_PREDEFINE();
r_TRANSLATE(r_PARSE_COMPILATION());
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
