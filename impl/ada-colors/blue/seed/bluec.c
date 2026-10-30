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
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; R21 * f_QUAL; R21 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; rt_int f_IN_TYPEDECL; R21 * f_NEW_OK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_ARRAYS; R12 * f_RECS; };
struct R23 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R26 { int dummy_; R10 f_C; R22 * f_T; rt_int f_LVAL; R10 f_SELF; };
struct R21 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R10 f_NAME; R21 * f_A; R21 * f_B; R21 * f_C; R21 * f_D; R21 * f_E; R21 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R10 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R10 f_NAME; R22 * f_T; R10 f_ACCESS; R10 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R21 * f_TS; rt_int f_BUSY; R10 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R21 * f_DECL; R10 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R21 * f_USES; R12 * f_INSTANCES; R20 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R18 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R10 f_FTYPE; R14 f_FIELDS; R18 * f_UP; R21 * f_IMPORTS; R21 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R10 f_COPYOUT; };
struct R19 { int dummy_; rt_int f_ID; R21 * f_IMPORTS; R21 * f_SIGNALS; R10 f_NAME; R19 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R10 f_LO_C; R10 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R10 f_LEN_C; R23 f_MLEN; R10 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R21 * f_TARGET_TS; R24 * f_FIELDS; R21 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R10 f_NAME; R10 f_CNAME; R12 * f_MODL; R21 * f_REPS; R12 * f_DECL; R10 f_GENP; };
struct R20 { int dummy_; R10 f_NAME; R22 * f_T; R10 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R20 * f_NEXT; };
struct R25 { int dummy_; R10 f_LO; R10 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R10 f_NAME; R10 f_CNAME; R22 * f_T; rt_int f_KIND; R10 f_TAGF; R21 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1224; };
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
static R22 * r_APPLY_REP(R22 * p_T0, R21 * p_R0, rt_int p_LINE);
static R21 * r_EXPAND_REP(R21 * p_R, R22 * p_T, rt_int p_LINE);
static R21 * r_REP_ARG_VALUE(R21 * p_A);
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE);
static rt_int r_POW2(rt_int p_N);
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE);
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
static rt_int r_IS_ANY_TAG(R21 * p_A);
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
static rt_int r_GENERIC_OBJECT_ARG(R21 * p_L);
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
static R10 r_WHERE_SHORT_NAME(R10 p_NAME);
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
static rt_int r_DECLARES_DERIVED(R21 * p_L);
static R22 * r_MARK_GENP(R22 * p_T, R10 p_NAME);
static R12 * r_CUR_GENERIC(void);
static rt_int r_IN_WHERE(R12 * p_G, R10 p_NAME);
static void r_REQUIRE_WHERE(R10 p_NAME, rt_int p_LINE);
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE);
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
static rt_int r_SAME_DERIVED_LENGTH(R21 * p_A, R22 * p_RT, R20 * p_BS);
static rt_int r_UNIFY_REP(R21 * p_R, R22 * p_RT, R20 * p_BS);
static rt_int r_NONSTANDARD_REP(R22 * p_T);
static R12 * r_RECORD_CLASS_OF(R22 * p_T);
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS);
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS);
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B);
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B);
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B);
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE);
static R12 * r_FIND_ROUTINE_ARG(R21 * p_TS, R21 * p_E, R20 * p_BS0, rt_int p_LINE, rt_int p_STRICT);
static rt_int r_EXPLICIT_TEMPLATE_FITS(R21 * p_E, R12 * p_R);
static rt_int r_TEMPLATE_FITS(R21 * p_TS, R12 * p_R, R20 * p_BS);
static rt_int r_TYPE_FITS_SPEC(R21 * p_TS, R22 * p_T, R20 * p_BS);
static rt_int r_HAS_DERIVED(R21 * p_TS);
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
static void r_REFERS(R21 * p_L, R10 p_TARGET, R21 * p_DECLS, R21 * *p_SEEN, rt_int *p_FOUND);
static rt_int r_TAG_MISUSED(R21 * p_L, R10 p_NAME);
static rt_int r_TAG_MISUSED1(R21 * p_N, R10 p_NAME);
static rt_int r_NAMES_VARIABLE(R21 * p_L, R21 * p_DECLS);
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_IN_TYPEDECL = s.f_IN_TYPEDECL; d->f_NEW_OK = s.f_NEW_OK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_IN_TYPEDECL == b.f_IN_TYPEDECL) && (a.f_NEW_OK == b.f_NEW_OK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_IN_TYPEDECL = s.f_IN_TYPEDECL; d.f_NEW_OK = s.f_NEW_OK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
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
static void S_R22(R22 *d, R22 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R10(&d->f_LO_C, s.f_LO_C, 0); S_R10(&d->f_HI_C, s.f_HI_C, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R10(&d->f_LEN_C, s.f_LEN_C, 0); S_R23(&d->f_MLEN, s.f_MLEN, 0); S_R10(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R10(&d->f_NAME, s.f_NAME, 0); S_R10(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; S_R10(&d->f_GENP, s.f_GENP, 0); }
static int E_R22(R22 a, R22 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R10(a.f_LO_C, b.f_LO_C) && E_R10(a.f_HI_C, b.f_HI_C) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R10(a.f_LEN_C, b.f_LEN_C) && E_R23(a.f_MLEN, b.f_MLEN) && E_R10(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R10(a.f_NAME, b.f_NAME) && E_R10(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL) && E_R10(a.f_GENP, b.f_GENP); }
static R22 C_R22(R22 s) { R22 d = s;
 d.f_KIND = s.f_KIND; d.f_SCALE = s.f_SCALE; d.f_LO_C = C_R10(s.f_LO_C); d.f_HI_C = C_R10(s.f_HI_C); d.f_MLO = C_R23(s.f_MLO); d.f_MHI = C_R23(s.f_MHI); d.f_RLEVEL = s.f_RLEVEL; d.f_LEN_C = C_R10(s.f_LEN_C); d.f_MLEN = C_R23(s.f_MLEN); d.f_GEN = C_R10(s.f_GEN); d.f_BASE = s.f_BASE; d.f_ELEM = s.f_ELEM; d.f_TARGET = s.f_TARGET; d.f_TARGET_TS = s.f_TARGET_TS; d.f_FIELDS = s.f_FIELDS; d.f_LITS = s.f_LITS; d.f_NLITS = s.f_NLITS; d.f_UNORDERED = s.f_UNORDERED; d.f_BOUNDS = s.f_BOUNDS; d.f_DIMS = s.f_DIMS; d.f_ARGS = s.f_ARGS; d.f_NAME = C_R10(s.f_NAME); d.f_CNAME = C_R10(s.f_CNAME); d.f_MODL = s.f_MODL; d.f_REPS = s.f_REPS; d.f_DECL = s.f_DECL; d.f_GENP = C_R10(s.f_GENP); return d; }
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
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_296))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
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
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R21 *)rt_nil_check(l_TAIL_376))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_TAIL_376))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
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
S_R22(&(*(R22 *)rt_nil_check(l_T_545)), ({ R22 rc546; memset(&rc546, 0, sizeof rc546);  rc546.f_KIND = p_KIND; rc546.f_SCALE = ((rt_int)0LL); S_R10(&rc546.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc546.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc546.f_MLO, r_NO_MVAL(), 0); S_R23(&rc546.f_MHI, r_NO_MVAL(), 0); rc546.f_RLEVEL = ((rt_int)0LL); S_R10(&rc546.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc546.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc546.f_GEN, r_NO_TEXT(), 0); rc546.f_BASE = NULL; rc546.f_ELEM = NULL; rc546.f_TARGET = NULL; rc546.f_TARGET_TS = NULL; rc546.f_FIELDS = NULL; rc546.f_LITS = NULL; rc546.f_NLITS = ((rt_int)0LL); rc546.f_UNORDERED = 0; rc546.f_BOUNDS = NULL; rc546.f_DIMS = ((rt_int)0LL); rc546.f_ARGS = NULL; S_R10(&rc546.f_NAME, r_NO_TEXT(), 0); S_R10(&rc546.f_CNAME, r_NO_TEXT(), 0); rc546.f_MODL = NULL; rc546.f_REPS = NULL; rc546.f_DECL = NULL; S_R10(&rc546.f_GENP, r_NO_TEXT(), 0); rc546; }), 0);
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
l_T_673 = r_APPLY_REP(l_T_673, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
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
l_T_673 = r_APPLY_REP(l_T_673, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
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
l_T_673 = r_APPLY_REP(l_T_673, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv680 = l_T_673;
return rv680; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R21 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_681; memset(&l_T_681, 0, sizeof l_T_681);
l_T_681 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_681))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_681, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_681))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_681, p_LINE);
}
else if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_681))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv682 = l_T_681;
return rv682; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPAND_REP(R21 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_683; memset(&l_Y_683, 0, sizeof l_Y_683);
if ((p_R == NULL))
{
{ R21 * rv684 = p_R;
return rv684; }
}
if ((((*(R21 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R21 * rv685 = p_R;
return rv685; }
}
l_Y_683 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_683 == NULL))
{
{ R21 * rv686 = p_R;
return rv686; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_683))).f_KIND == g_Y_REPTYPE)))
{
{ R21 * rv687 = p_R;
return rv687; }
}
if (((*(R12 *)rt_nil_check(l_Y_683))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R21 *)rt_nil_check(p_R))).f_NAME);
}
{
R21 * l_D_688; memset(&l_D_688, 0, sizeof l_D_688);
l_D_688 = ((*(R12 *)rt_nil_check(l_Y_683))).f_DECL;
R21 * l_X_689; memset(&l_X_689, 0, sizeof l_X_689);
l_X_689 = r_NEW_NODE(g_N_REP, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
R21 * l_HEAD_690; memset(&l_HEAD_690, 0, sizeof l_HEAD_690);
l_HEAD_690 = NULL;
R21 * l_TAIL_691; memset(&l_TAIL_691, 0, sizeof l_TAIL_691);
l_TAIL_691 = NULL;
((*(R12 *)rt_nil_check(l_Y_683))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R21 *)rt_nil_check(l_D_688))).f_A == NULL)) || (!(((*(R21 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_688))).f_A, p_R);
}
if ((!(((*(R21 *)rt_nil_check(l_D_688))).f_C == NULL)))
{
{
R12 * l_B_692; memset(&l_B_692, 0, sizeof l_B_692);
l_B_692 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_688))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_692))).f_T = p_T;
r_DEFINE(l_B_692, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R10(&((*(R21 *)rt_nil_check(l_X_689))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_688))).f_B))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_X_689))).f_B = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_688))).f_B))).f_B;
{
R21 * l_A_693; memset(&l_A_693, 0, sizeof l_A_693);
l_A_693 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_688))).f_B))).f_A;
for (;;) {
if ((l_A_693 == NULL)) goto L_end694;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_693), &l_HEAD_690, &l_TAIL_691);
l_A_693 = ((*(R21 *)rt_nil_check(l_A_693))).f_NEXT;
}
RT_B_TICK();
} L_end694: ;
}
((*(R21 *)rt_nil_check(l_X_689))).f_A = l_HEAD_690;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_689 = r_EXPAND_REP(l_X_689, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_683))).f_BUSY = 0;
{ R21 * rv695 = l_X_689;
return rv695; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_REP_ARG_VALUE(R21 * p_A) { RT_B_TICK(); 
R21 * l_N_696; memset(&l_N_696, 0, sizeof l_N_696);
R23 l_M_697; memset(&l_M_697, 0, sizeof l_M_697);
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_698; memset(&l_Y_698, 0, sizeof l_Y_698);
l_Y_698 = r_LOOKUP(((*(R21 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_698 == NULL) || (((!(l_Y_698 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_698))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_696 = r_NEW_NODE(((*(R21 *)rt_nil_check(p_A))).f_KIND, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_696))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
{ R21 * rv699 = l_N_696;
return rv699; }
}
if (((((*(R12 *)rt_nil_check(l_Y_698))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_698))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_698))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_698))).f_HASMV))
{
{
R21 * l_L_700; memset(&l_L_700, 0, sizeof l_L_700);
l_L_700 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_698))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_701; memset(&l_I_701, 0, sizeof l_I_701);
l_I_701 = ((rt_int)0LL);
for (;;) {
if (((l_L_700 == NULL) || (l_I_701 == ((*(R12 *)rt_nil_check(l_Y_698))).f_MV))) goto L_end702;
{
l_I_701 = rt_add(l_I_701, ((rt_int)1LL));
l_L_700 = ((*(R21 *)rt_nil_check(l_L_700))).f_NEXT;
}
RT_B_TICK();
} L_end702: ;
if ((!(l_L_700 == NULL)))
{
l_N_696 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_696))).f_NAME, ((*(R21 *)rt_nil_check(l_L_700))).f_NAME, 0);
{ R21 * rv703 = l_N_696;
return rv703; }
}
}
}
}
}
}
S_R23(&l_M_697, r_MANIFEST(p_A), 0);
if ((!(l_M_697).f_OK))
{
{
R14 l_SAVED_CODE_704; memset(&l_SAVED_CODE_704, 0, sizeof l_SAVED_CODE_704);
S_R14(&l_SAVED_CODE_704, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_705; memset(&l_V_705, 0, sizeof l_V_705);
S_R26(&l_V_705, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_704, 0);
}
{ R21 * rv706 = p_A;
return rv706; }
}
l_N_696 = r_NEW_NODE(g_N_INT, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_697).f_V < ((rt_int)0LL)))
{
((*(R21 *)rt_nil_check(l_N_696))).f_IV = rt_neg((l_M_697).f_V);
S_R10(&((*(R21 *)rt_nil_check(l_N_696))).f_NAME, r_NUM(rt_neg((l_M_697).f_V)), 0);
{
R21 * l_U_707; memset(&l_U_707, 0, sizeof l_U_707);
l_U_707 = r_NEW_NODE(g_N_UNOP, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_U_707))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R21 *)rt_nil_check(l_U_707))).f_A = l_N_696;
{ R21 * rv708 = l_U_707;
return rv708; }
}
}
((*(R21 *)rt_nil_check(l_N_696))).f_IV = (l_M_697).f_V;
S_R10(&((*(R21 *)rt_nil_check(l_N_696))).f_NAME, r_NUM((l_M_697).f_V), 0);
{ R21 * rv709 = l_N_696;
return rv709; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_710; memset(&l_R_710, 0, sizeof l_R_710);
l_R_710 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_711; memset(&l_K_711, 0, sizeof l_K_711);
l_K_711 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_712; memset(&l_OK_712, 0, sizeof l_OK_712);
l_OK_712 = 0;
if ((((*(R21 *)rt_nil_check(l_R_710))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(l_R_710))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R21 *)rt_nil_check(l_R_710))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_R_710))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R10 l_N_713; memset(&l_N_713, 0, sizeof l_N_713);
S_R10(&l_N_713, ((*(R21 *)rt_nil_check(l_R_710))).f_NAME, 0);
if ((l_K_711 == g_T_INT))
{
l_OK_712 = (r_TEQS(l_N_713, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_713, rt_str("FIXED_REP", 9)));
}
else if ((l_K_711 == g_T_FLOAT))
{
l_OK_712 = r_TEQS(l_N_713, rt_str("FLOAT_STD", 9));
}
else if ((l_K_711 == g_T_BOOL))
{
l_OK_712 = r_TEQS(l_N_713, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_711 == g_T_ENUM))
{
l_OK_712 = ((r_TEQS(l_N_713, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_713, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_713, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_711 == g_T_STR))
{
l_OK_712 = (r_TEQS(l_N_713, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_713, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_711 == g_T_BITS))
{
l_OK_712 = r_TEQS(l_N_713, rt_str("BIT_STD", 7));
}
else if ((l_K_711 == g_T_ARR))
{
l_OK_712 = (r_TEQS(l_N_713, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_713, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_711 == g_T_REC))
{
l_OK_712 = (r_TEQS(l_N_713, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_713, rt_str("RECORD_REP", 10)));
}
else if ((l_K_711 == g_T_PTR))
{
l_OK_712 = r_TEQS(l_N_713, rt_str("PTR_STD", 7));
}
else if ((l_K_711 == g_T_SEM))
{
l_OK_712 = r_TEQS(l_N_713, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_711 == g_T_TYPE))
{
l_OK_712 = 1;
}
if ((!l_OK_712))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_713);
}
if (r_TEQS(l_N_713, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_714; memset(&l_P_714, 0, sizeof l_P_714);
l_P_714 = ((rt_int)1LL);
{ rt_int it716_lo = ((rt_int)1LL), it716_hi = p_N;
for (rt_int it716 = it716_lo; it716 <= it716_hi; it716++) {
{
l_P_714 = rt_mul(l_P_714, ((rt_int)2LL));
}
RT_B_TICK();
if (it716 == it716_hi) break;
} } L_end715: ;
{ rt_int rv717 = l_P_714;
return rv717; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_718; memset(&l_R_718, 0, sizeof l_R_718);
l_R_718 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_719; memset(&l_UNSIGNED_719, 0, sizeof l_UNSIGNED_719);
l_UNSIGNED_719 = 0;
if ((((*(R21 *)rt_nil_check(l_R_718))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_718))).f_A))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_718))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R23 l_N_720; memset(&l_N_720, 0, sizeof l_N_720);
S_R23(&l_N_720, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_718))).f_A), 0);
if ((!(l_N_720).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_720).f_V < ((rt_int)0LL)) || ((l_N_720).f_V > ((rt_int)64LL))))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:64], the default size (3.2.3)", 60));
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_718))).f_A))).f_NEXT == NULL)))
{
{
R21 * l_S_721; memset(&l_S_721, 0, sizeof l_S_721);
l_S_721 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_718))).f_A))).f_NEXT;
if (((((*(R21 *)rt_nil_check(l_S_721))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_S_721))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R21 *)rt_nil_check(l_S_721))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_S_721))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R21 *)rt_nil_check(l_S_721))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R21 *)rt_nil_check(l_S_721))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_719 = r_TEQS(((*(R21 *)rt_nil_check(l_S_721))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R21 *)rt_nil_check(l_S_721))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (l_UNSIGNED_719)
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
r_FAIL(p_LINE, rt_str("UNSIGNED needs an explicitly specified range (3.2.3)", 52));
}
if (((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && ((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("UNSIGNED needs a range whose lower bound is non-negative (3.2.3)", 64));
}
}
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_720).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_722; memset(&l_LO_722, 0, sizeof l_LO_722);
l_LO_722 = ((rt_int)0LL);
rt_int l_HI_723; memset(&l_HI_723, 0, sizeof l_HI_723);
l_HI_723 = ((rt_int)0LL);
if (l_UNSIGNED_719)
{
l_HI_723 = rt_sub(r_POW2((l_N_720).f_V), ((rt_int)1LL));
}
else if (((l_N_720).f_V > ((rt_int)0LL)))
{
l_LO_722 = rt_neg(r_POW2(rt_sub((l_N_720).f_V, ((rt_int)1LL))));
l_HI_723 = rt_sub(r_POW2(rt_sub((l_N_720).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_722) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_723)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_724; memset(&l_T_724, 0, sizeof l_T_724);
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(p_E))).f_A)))
{
l_T_724 = r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_725; memset(&l_SAVED_CODE_725, 0, sizeof l_SAVED_CODE_725);
S_R14(&l_SAVED_CODE_725, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_724 = (r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_725, 0);
}
}
{
R22 * l_R_726; memset(&l_R_726, 0, sizeof l_R_726);
l_R_726 = r_REAL_TYPE(l_T_724);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_726))).f_KIND == g_T_ARR))
{
{ R22 * rv727 = ((*(R22 *)rt_nil_check(l_R_726))).f_ELEM;
return rv727; }
}
else if ((((*(R22 *)rt_nil_check(l_R_726))).f_KIND == g_T_PTR))
{
{ R22 * rv728 = r_TARGET(l_R_726);
return rv728; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_726))).f_KIND == g_T_STR)))
{
{ R22 * rv729 = r_CHARSET_OF(l_R_726);
return rv729; }
}
if ((((*(R22 *)rt_nil_check(l_R_726))).f_KIND == g_T_REC))
{
{
R12 * l_C_730; memset(&l_C_730, 0, sizeof l_C_730);
l_C_730 = r_RECORD_CLASS_OF(l_R_726);
if ((!(l_C_730 == NULL)))
{
{
R20 * l_B_731; memset(&l_B_731, 0, sizeof l_B_731);
l_B_731 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_730))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_731 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_731))).f_T == NULL)))
{
{ R22 * rv732 = ((*(R20 *)rt_nil_check(l_B_731))).f_T;
return rv732; }
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
{ rt_int rv733 = 0;
return rv733; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv734 = 1;
return rv734; }
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_735; memset(&l_Y_735, 0, sizeof l_Y_735);
l_Y_735 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_735 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_735))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_735))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_735))).f_T == NULL))))
{
{
R22 * l_R_736; memset(&l_R_736, 0, sizeof l_R_736);
l_R_736 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_735))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_736))).f_KIND == g_T_REC))
{
{
R12 * l_C_737; memset(&l_C_737, 0, sizeof l_C_737);
l_C_737 = r_RECORD_CLASS_OF(l_R_736);
if ((!(l_C_737 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_737))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv738 = 1;
return rv738; }
}
}
}
}
}
}
}
}
}
{ rt_int rv739 = 0;
return rv739; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_740; memset(&l_B_740, 0, sizeof l_B_740);
l_B_740 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_740 == NULL)) goto L_end741;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_740))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_740))).f_T == NULL))))
{
{ R22 * rv742 = ((*(R20 *)rt_nil_check(l_B_740))).f_T;
return rv742; }
}
l_B_740 = ((*(R20 *)rt_nil_check(l_B_740))).f_NEXT;
}
RT_B_TICK();
} L_end741: ;
{
R12 * l_Y_743; memset(&l_Y_743, 0, sizeof l_Y_743);
l_Y_743 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_743 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_743))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_743))).f_T == NULL))))
{
{ R22 * rv744 = ((*(R12 *)rt_nil_check(l_Y_743))).f_T;
return rv744; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_745; memset(&l_NAME_745, 0, sizeof l_NAME_745);
S_R10(&l_NAME_745, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_746; memset(&l_T_746, 0, sizeof l_T_746);
if (r_TEQS(l_NAME_745, rt_str("FIXED", 5)))
{
{
R23 l_S_747; memset(&l_S_747, 0, sizeof l_S_747);
S_R23(&l_S_747, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_748; memset(&l_R_748, 0, sizeof l_R_748);
S_R23(&l_R_748, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_749; memset(&l_P_749, 0, sizeof l_P_749);
l_P_749 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_748).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_749, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_747).f_V == ((rt_int)0LL)))
{
{ R22 * rv750 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv750; }
}
l_T_746 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_746))).f_SCALE = (l_S_747).f_V;
{ R22 * rv751 = l_T_746;
return rv751; }
}
}
else if (r_TEQS(l_NAME_745, rt_str("FLOAT", 5)))
{
{
R23 l_P_752; memset(&l_P_752, 0, sizeof l_P_752);
S_R23(&l_P_752, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_746 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_746))).f_SCALE = (l_P_752).f_V;
{ R22 * rv753 = l_T_746;
return rv753; }
}
}
else if (r_TEQS(l_NAME_745, rt_str("BIT", 3)))
{
l_T_746 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_746, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv754 = l_T_746;
return rv754; }
}
else if ((r_TEQS(l_NAME_745, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_745, rt_str("ASCII_STR", 9))))
{
l_T_746 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_746, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_746))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_745, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R21 * l_CS_755; memset(&l_CS_755, 0, sizeof l_CS_755);
l_CS_755 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_756; memset(&l_C_756, 0, sizeof l_C_756);
if (((((*(R21 *)rt_nil_check(l_CS_755))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_755))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_746))).f_BASE = NULL;
{ R22 * rv757 = l_T_746;
return rv757; }
}
if (((((*(R21 *)rt_nil_check(l_CS_755))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_CS_755))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_758; memset(&l_SAVED_CODE_758, 0, sizeof l_SAVED_CODE_758);
S_R14(&l_SAVED_CODE_758, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_759; memset(&l_V_759, 0, sizeof l_V_759);
S_R26(&l_V_759, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(l_CS_755))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_758, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_759).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_746))).f_BASE = r_CHARSET_OF((l_V_759).f_T);
}
{ R22 * rv760 = l_T_746;
return rv760; }
}
l_C_756 = r_REAL_TYPE(r_ARG_TYPE(l_CS_755));
if ((!(((*(R22 *)rt_nil_check(l_C_756))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_756))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_756))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_746))).f_BASE = ((*(R22 *)rt_nil_check(l_C_756))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv761 = l_T_746;
return rv761; }
}
else if (r_TEQS(l_NAME_745, rt_str("PTR", 3)))
{
l_T_746 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_746))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv762 = l_T_746;
return rv762; }
}
else if (r_TEQS(l_NAME_745, rt_str("SEMAPHORE", 9)))
{
l_T_746 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R21 * l_U_763; memset(&l_U_763, 0, sizeof l_U_763);
l_U_763 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_764; memset(&l_UT_764, 0, sizeof l_UT_764);
l_UT_764 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_765; memset(&l_M_765, 0, sizeof l_M_765);
S_R23(&l_M_765, r_NO_MVAL(), 0);
if (((((((*(R21 *)rt_nil_check(l_U_763))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_U_763))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_U_763))).f_NAME, l_UT_764) == NULL))))
{
S_R23(&l_M_765, r_ENUM_MANIFEST(l_U_763, l_UT_764), 0);
}
else
{
{
R14 l_SAVED_CODE_766; memset(&l_SAVED_CODE_766, 0, sizeof l_SAVED_CODE_766);
S_R14(&l_SAVED_CODE_766, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_767; memset(&l_V_767, 0, sizeof l_V_767);
S_R26(&l_V_767, r_EXPR(l_U_763, l_UT_764), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_766, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_767).f_T), r_REAL_TYPE(l_UT_764)))
{
S_R23(&l_M_765, r_MANIFEST(l_U_763), 0);
}
}
}
if ((!(l_M_765).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_746))).f_SCALE = (l_M_765).f_V;
}
{ R22 * rv768 = l_T_746;
return rv768; }
}
{ R22 * rv769 = NULL;
return rv769; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_770; memset(&l_M_770, 0, sizeof l_M_770);
S_R23(&l_M_770, r_MANIFEST(p_A), 0);
if ((!(l_M_770).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_771; memset(&l_SAVED_CODE_771, 0, sizeof l_SAVED_CODE_771);
S_R14(&l_SAVED_CODE_771, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_772; memset(&l_T_772, 0, sizeof l_T_772);
l_T_772 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_771, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_772)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_772))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_770).f_V < p_LO) || ((l_M_770).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv773 = l_M_770;
return rv773; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv774 = 0;
return rv774; }
}
{ rt_int rv775 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv775; }
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
R12 * l_Y_776; memset(&l_Y_776, 0, sizeof l_Y_776);
l_Y_776 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_776 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_776))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_776))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_776))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R21 * l_R_777; memset(&l_R_777, 0, sizeof l_R_777);
l_R_777 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R10 l_NAME_778; memset(&l_NAME_778, 0, sizeof l_NAME_778);
S_R10(&l_NAME_778, ((*(R21 *)rt_nil_check(l_R_777))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_777))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_778, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_778) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_778, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_778, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_778) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_778)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_778);
}
if ((((*(R21 *)rt_nil_check(l_R_777))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_778);
}
{
R23 l_N_779; memset(&l_N_779, 0, sizeof l_N_779);
S_R23(&l_N_779, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_777))).f_A), 0);
rt_int l_NL_780; memset(&l_NL_780, 0, sizeof l_NL_780);
l_NL_780 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_779).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_779).f_V > ((rt_int)64LL)) || ((l_N_779).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_778, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_777))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_779).f_V < r_BITS_FOR(l_NL_780)))
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
R21 * l_L_781; memset(&l_L_781, 0, sizeof l_L_781);
l_L_781 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_781 == NULL)) goto L_end782;
{
{
R21 * l_V_783; memset(&l_V_783, 0, sizeof l_V_783);
l_V_783 = ((*(R21 *)rt_nil_check(l_R_777))).f_B;
rt_int l_FOUND_784; memset(&l_FOUND_784, 0, sizeof l_FOUND_784);
l_FOUND_784 = ((rt_int)0LL);
for (;;) {
if ((l_V_783 == NULL)) goto L_end785;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_783))).f_NAME, ((*(R21 *)rt_nil_check(l_L_781))).f_NAME))
{
l_FOUND_784 = rt_add(l_FOUND_784, ((rt_int)1LL));
}
l_V_783 = ((*(R21 *)rt_nil_check(l_V_783))).f_NEXT;
}
RT_B_TICK();
} L_end785: ;
if ((!(l_FOUND_784 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_781))).f_NAME);
}
}
l_L_781 = ((*(R21 *)rt_nil_check(l_L_781))).f_NEXT;
}
RT_B_TICK();
} L_end782: ;
}
{
R21 * l_V_786; memset(&l_V_786, 0, sizeof l_V_786);
l_V_786 = ((*(R21 *)rt_nil_check(l_R_777))).f_B;
for (;;) {
if ((l_V_786 == NULL)) goto L_end787;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_786))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_786))).f_NAME);
}
{
R14 l_SAVED_CODE_788; memset(&l_SAVED_CODE_788, 0, sizeof l_SAVED_CODE_788);
S_R14(&l_SAVED_CODE_788, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_789; memset(&l_B_789, 0, sizeof l_B_789);
S_R26(&l_B_789, r_EXPR(((*(R21 *)rt_nil_check(l_V_786))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_788, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_789).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_789).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_789).f_T))).f_MLEN).f_V == (l_N_779).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_786))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_786))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_790; memset(&l_U_790, 0, sizeof l_U_790);
l_U_790 = ((*(R21 *)rt_nil_check(l_V_786))).f_NEXT;
for (;;) {
if ((l_U_790 == NULL)) goto L_end791;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_790))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_790))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_786))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_790))).f_NAME);
}
}
l_U_790 = ((*(R21 *)rt_nil_check(l_U_790))).f_NEXT;
}
RT_B_TICK();
} L_end791: ;
}
}
}
l_V_786 = ((*(R21 *)rt_nil_check(l_V_786))).f_NEXT;
}
RT_B_TICK();
} L_end787: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_792; memset(&l_B_792, 0, sizeof l_B_792);
l_B_792 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_792 == NULL)) goto L_end793;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_792))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_792))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_792))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc794; memset(&rc794, 0, sizeof rc794);  rc794.f_OK = ((*(R20 *)rt_nil_check(l_B_792))).f_HASMV; rc794.f_V = ((*(R20 *)rt_nil_check(l_B_792))).f_MV; rc794; }), 0);
return;
}
l_B_792 = ((*(R20 *)rt_nil_check(l_B_792))).f_NEXT;
}
RT_B_TICK();
} L_end793: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_795; memset(&l_C_795, 0, sizeof l_C_795);
R23 l_M_796; memset(&l_M_796, 0, sizeof l_M_796);
r_ATTR_VALUE(p_A, &l_C_795, &l_M_796);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_795, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_796, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_797; memset(&l_T_797, 0, sizeof l_T_797);
l_T_797 = r_NEW_TYP(g_T_ARR);
R21 * l_R_798; memset(&l_R_798, 0, sizeof l_R_798);
l_R_798 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_799; memset(&l_TAIL_799, 0, sizeof l_TAIL_799);
l_TAIL_799 = NULL;
for (;;) {
if ((l_R_798 == NULL)) goto L_end800;
{
{
R25 * l_B_801; memset(&l_B_801, 0, sizeof l_B_801);
l_B_801 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_802; memset(&l_LO_802, 0, sizeof l_LO_802);
R26 l_HI_803; memset(&l_HI_803, 0, sizeof l_HI_803);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_798))).f_A))
{
S_R26(&l_LO_802, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_798))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_798))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_802, r_EXPR(((*(R21 *)rt_nil_check(l_R_798))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_798))).f_B))
{
S_R26(&l_HI_803, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_798))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_798))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_803, r_EXPR(((*(R21 *)rt_nil_check(l_R_798))).f_B, (l_LO_802).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_801)), ({ R25 rc804; memset(&rc804, 0, sizeof rc804);  S_R10(&rc804.f_LO, (l_LO_802).f_C, 0); S_R10(&rc804.f_HI, (l_HI_803).f_C, 0); S_R23(&rc804.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_798))).f_A), 0); S_R23(&rc804.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_798))).f_B), 0); rc804.f_ANYARG = 0; rc804.f_NEXT = NULL; rc804; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_798))).f_A)) && (!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_798))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_802).f_T), r_REAL_TYPE((l_HI_803).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_798))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R10(&((*(R25 *)rt_nil_check(l_B_801))).f_LO, r_INDEX_OF(l_LO_802, ((*(R21 *)rt_nil_check(l_R_798))).f_LINE), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_801))).f_HI, r_INDEX_OF(l_HI_803, ((*(R21 *)rt_nil_check(l_R_798))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_802).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_802).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_801))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_798))).f_A, (l_LO_802).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_801))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_798))).f_B, (l_LO_802).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_801))).f_LO, (l_LO_802).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_801))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_801))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_802).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_798))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_799 == NULL))
{
((*(R22 *)rt_nil_check(l_T_797))).f_BOUNDS = l_B_801;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_799))).f_NEXT = l_B_801;
}
l_TAIL_799 = l_B_801;
((*(R22 *)rt_nil_check(l_T_797))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_797))).f_DIMS, ((rt_int)1LL));
}
l_R_798 = ((*(R21 *)rt_nil_check(l_R_798))).f_NEXT;
}
RT_B_TICK();
} L_end800: ;
((*(R22 *)rt_nil_check(l_T_797))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_797))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_797))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_797))).f_REPS = r_EXPAND_REP(((*(R21 *)rt_nil_check(p_TS))).f_D, l_T_797, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_797, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
S_R10(&((*(R22 *)rt_nil_check(l_T_797))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_797))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_797))).f_DIMS), 0);
{ R22 * rv805 = l_T_797;
return rv805; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_806; memset(&l_Y_806, 0, sizeof l_Y_806);
l_Y_806 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_807; memset(&l_B_807, 0, sizeof l_B_807);
l_B_807 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_807 == NULL)) goto L_end808;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_807))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_807))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) == l_B_807))
{
{ R22 * rv809 = r_MARK_GENP(((*(R20 *)rt_nil_check(l_B_807))).f_T, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
return rv809; }
}
}
{ R22 * rv810 = ((*(R20 *)rt_nil_check(l_B_807))).f_T;
return rv810; }
}
l_B_807 = ((*(R20 *)rt_nil_check(l_B_807))).f_NEXT;
}
RT_B_TICK();
} L_end808: ;
}
}
if ((l_Y_806 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_806))).f_KIND == g_Y_GEN))
{
{ R22 * rv811 = r_GEN_TYPE(p_TS);
return rv811; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_806))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_806))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv812 = ((*(R12 *)rt_nil_check(l_Y_806))).f_T;
return rv812; }
}
{
R21 * l_D_813; memset(&l_D_813, 0, sizeof l_D_813);
l_D_813 = ((*(R12 *)rt_nil_check(l_Y_806))).f_DECL;
R22 * l_T_814; memset(&l_T_814, 0, sizeof l_T_814);
if ((((*(R21 *)rt_nil_check(l_D_813))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_806))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_806))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_806))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_813))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_806))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_813))).f_B, r_RECORD_NAME(l_Y_806), l_Y_806, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_806))).f_T = r_RESOLVE_IN_DECL(l_Y_806, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_806))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_806))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_806))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_806))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_806))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_806))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_806))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_806))).f_BUSY = 0;
}
l_T_814 = ((*(R12 *)rt_nil_check(l_Y_806))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_813))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_814 = r_RECORD_INSTANCE(l_Y_806, p_TS);
}
else
{
l_T_814 = r_RESOLVE_IN_DECL(l_Y_806, p_TS);
}
}
{ R22 * rv815 = r_ABSTRACT_VIEW(l_Y_806, l_T_814);
return rv815; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_816; memset(&l_A_816, 0, sizeof l_A_816);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv817 = p_T;
return rv817; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv818 = p_T;
return rv818; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv819 = p_T;
return rv819; }
}
l_A_816 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_816))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_816))).f_DECL = p_Y;
{ R22 * rv820 = l_A_816;
return rv820; }
}
l_A_816 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_816))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_816))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_816))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_816))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_816))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv821 = l_A_816;
return rv821; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv822 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv822; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_823; memset(&l_R_823, 0, sizeof l_R_823);
l_R_823 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_823 == NULL)) goto L_end824;
{
if ((((((*(R12 *)rt_nil_check(l_R_823))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_823))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_823))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_823)), p_OP))
{
{ rt_int rv825 = 1;
return rv825; }
}
}
l_R_823 = ((*(R12 *)rt_nil_check(l_R_823))).f_SNEXT;
}
RT_B_TICK();
} L_end824: ;
{ rt_int rv826 = 0;
return rv826; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv827 = 0;
return rv827; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv828 = 1;
return rv828; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv829 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv829; }
}
{ rt_int rv830 = 0;
return rv830; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_831; memset(&l_P_831, 0, sizeof l_P_831);
l_P_831 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_831 == NULL)) goto L_end832;
{
if ((l_P_831 == p_M))
{
{ rt_int rv833 = 1;
return rv833; }
}
l_P_831 = ((*(R12 *)rt_nil_check(l_P_831))).f_MODL;
}
RT_B_TICK();
} L_end832: ;
{ rt_int rv834 = 0;
return rv834; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_835; memset(&l_D_835, 0, sizeof l_D_835);
l_D_835 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_836; memset(&l_T_836, 0, sizeof l_T_836);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_836 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_835))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv837 = l_T_836;
return rv837; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_835))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_836 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_835))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv838 = l_T_836;
return rv838; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_839; memset(&l_F_839, 0, sizeof l_F_839);
l_F_839 = p_FORMALS;
R21 * l_A_840; memset(&l_A_840, 0, sizeof l_A_840);
l_A_840 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_839 == NULL)) goto L_end841;
{
{
R21 * l_N_842; memset(&l_N_842, 0, sizeof l_N_842);
l_N_842 = ((*(R21 *)rt_nil_check(l_F_839))).f_A;
for (;;) {
if ((l_N_842 == NULL)) goto L_end843;
{
if ((l_A_840 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_839))).f_B == NULL))
{
{
R12 * l_Y_844; memset(&l_Y_844, 0, sizeof l_Y_844);
l_Y_844 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_842))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_844))).f_T = r_ARG_TYPE(l_A_840);
r_DEFINE(l_Y_844, ((*(R21 *)rt_nil_check(l_A_840))).f_LINE);
}
}
else
{
{
R12 * l_Y_845; memset(&l_Y_845, 0, sizeof l_Y_845);
l_Y_845 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_842))).f_NAME);
R10 l_C_846; memset(&l_C_846, 0, sizeof l_C_846);
R23 l_M_847; memset(&l_M_847, 0, sizeof l_M_847);
((*(R12 *)rt_nil_check(l_Y_845))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_839))).f_B);
if (((((*(R21 *)rt_nil_check(l_A_840))).f_KIND == g_N_ANY) && (!(((*(R21 *)rt_nil_check(l_F_839))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_840))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R21 *)rt_nil_check(l_A_840))).f_KIND == g_N_ANY))
{
S_R10(&l_C_846, r_MK(rt_str("ANY", 3)), 0);
S_R23(&l_M_847, r_NO_MVAL(), 0);
}
else if (((((*(R21 *)rt_nil_check(l_A_840))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_840))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_846, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_840))).f_NAME, (((*(R21 *)rt_nil_check(l_A_840))).f_NAME).f_LEN))), 0);
S_R23(&l_M_847, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_840, &l_C_846, &l_M_847);
}
if (((((l_M_847).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_845))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_845))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_845))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_847).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_845))).f_T))).f_MLO).f_V) || ((l_M_847).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_845))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_840))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_845))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_846))) && (!(((*(R21 *)rt_nil_check(l_A_840))).f_KIND == g_N_ANY))))
{
S_R10(&l_C_846, (r_EXPR(l_A_840, ((*(R12 *)rt_nil_check(l_Y_845))).f_T)).f_C, 0);
S_R23(&l_M_847, r_ENUM_MANIFEST(l_A_840, ((*(R12 *)rt_nil_check(l_Y_845))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_845))).f_ACCESS, l_C_846, 0);
((*(R12 *)rt_nil_check(l_Y_845))).f_HASMV = (l_M_847).f_OK;
((*(R12 *)rt_nil_check(l_Y_845))).f_MV = (l_M_847).f_V;
((*(R12 *)rt_nil_check(l_Y_845))).f_INPUT = 1;
r_DEFINE(l_Y_845, ((*(R21 *)rt_nil_check(l_A_840))).f_LINE);
}
}
l_A_840 = ((*(R21 *)rt_nil_check(l_A_840))).f_NEXT;
l_N_842 = ((*(R21 *)rt_nil_check(l_N_842))).f_NEXT;
}
RT_B_TICK();
} L_end843: ;
}
l_F_839 = ((*(R21 *)rt_nil_check(l_F_839))).f_NEXT;
}
RT_B_TICK();
} L_end841: ;
if ((!(l_A_840 == NULL)))
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
{ R10 rv848 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv848; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv849 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv849; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_850; memset(&l_K_850, 0, sizeof l_K_850);
l_K_850 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv851 = r_MK(rt_str("rt_int", 6));
return rv851; }
}
else if ((l_K_850 == g_T_FLOAT))
{
{ R10 rv852 = r_MK(rt_str("double", 6));
return rv852; }
}
else if (((l_K_850 == g_T_STR) || (l_K_850 == g_T_BITS)))
{
{ R10 rv853 = r_MK(rt_str("rstr", 4));
return rv853; }
}
else if (((l_K_850 == g_T_REC) || (l_K_850 == g_T_ARR)))
{
{ R10 rv854 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv854; }
}
else if ((l_K_850 == g_T_ABS))
{
{ R10 rv855 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv855; }
}
else if ((l_K_850 == g_T_SEM))
{
{ R10 rv856 = r_MK(rt_str("rt_b_sem *", 10));
return rv856; }
}
else if ((l_K_850 == g_T_PATHS))
{
{ R10 rv857 = r_MK(rt_str("rt_b_paths", 10));
return rv857; }
}
else if ((l_K_850 == g_T_VOID))
{
{ R10 rv858 = r_MK(rt_str("void", 4));
return rv858; }
}
else if ((l_K_850 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_859; memset(&l_TT_859, 0, sizeof l_TT_859);
l_TT_859 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_859))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_859))).f_A == NULL)))
{
{
R12 * l_Y_860; memset(&l_Y_860, 0, sizeof l_Y_860);
l_Y_860 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_859))).f_NAME);
if ((!(l_Y_860 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_860))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_860))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_860))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_860))).f_DECL))).f_A == NULL)))
{
{ R10 rv861 = r_CATS(r_RECORD_NAME(l_Y_860), rt_str(" *", 2));
return rv861; }
}
}
}
}
}
}
}
{ R10 rv862 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv862; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv863 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv863; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_864; memset(&l_F_864, 0, sizeof l_F_864);
l_F_864 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_864)), ({ R24 rc865; memset(&rc865, 0, sizeof rc865);  S_R10(&rc865.f_NAME, p_NAME, 0); S_R10(&rc865.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc865.f_T = p_T; rc865.f_KIND = p_KIND; S_R10(&rc865.f_TAGF, r_NO_TEXT(), 0); rc865.f_LABELS = NULL; rc865.f_NEXT = NULL; rc865; }), 0);
{ R24 * rv866 = l_F_864;
return rv866; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_867; memset(&l_F_867, 0, sizeof l_F_867);
l_F_867 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_867 == NULL)) goto L_end868;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_867))).f_NAME, p_NAME))
{
{ R24 * rv869 = l_F_867;
return rv869; }
}
l_F_867 = ((*(R24 *)rt_nil_check(l_F_867))).f_NEXT;
}
RT_B_TICK();
} L_end868: ;
{ R24 * rv870 = NULL;
return rv870; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_871; memset(&l_F_871, 0, sizeof l_F_871);
l_F_871 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_872; memset(&l_FIRST_872, 0, sizeof l_FIRST_872);
l_FIRST_872 = NULL;
for (;;) {
if ((l_F_871 == NULL)) goto L_end873;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_871))).f_NAME, p_NAME))
{
if ((l_FIRST_872 == NULL))
{
l_FIRST_872 = l_F_871;
}
if (((((*(R24 *)rt_nil_check(l_F_871))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv874 = l_F_871;
return rv874; }
}
{
R23 l_TAGV_875; memset(&l_TAGV_875, 0, sizeof l_TAGV_875);
S_R23(&l_TAGV_875, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_871))).f_TAGF), 0);
if ((l_TAGV_875).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_871))).f_LABELS, (l_TAGV_875).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_871))).f_TAGF)))).f_T))
{
{ R24 * rv876 = l_F_871;
return rv876; }
}
}
}
}
l_F_871 = ((*(R24 *)rt_nil_check(l_F_871))).f_NEXT;
}
RT_B_TICK();
} L_end873: ;
{ R24 * rv877 = l_FIRST_872;
return rv877; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_878; memset(&l_P_878, 0, sizeof l_P_878);
l_P_878 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_879; memset(&l_N_879, 0, sizeof l_N_879);
l_N_879 = ((rt_int)0LL);
for (;;) {
if ((l_P_878 == NULL)) goto L_end880;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_878))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_878))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_878))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_878))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_879 = rt_add(l_N_879, ((rt_int)1LL));
}
l_P_878 = ((*(R24 *)rt_nil_check(l_P_878))).f_NEXT;
}
RT_B_TICK();
} L_end880: ;
if ((l_N_879 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_879)), 0);
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
R21 * l_D_881; memset(&l_D_881, 0, sizeof l_D_881);
l_D_881 = p_DECLS;
for (;;) {
if ((l_D_881 == NULL)) goto L_end882;
{
if ((((*(R21 *)rt_nil_check(l_D_881))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_883; memset(&l_FT_883, 0, sizeof l_FT_883);
l_FT_883 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_881))).f_B);
R21 * l_N_884; memset(&l_N_884, 0, sizeof l_N_884);
l_N_884 = ((*(R21 *)rt_nil_check(l_D_881))).f_A;
for (;;) {
if ((l_N_884 == NULL)) goto L_end885;
{
{
R24 * l_F_886; memset(&l_F_886, 0, sizeof l_F_886);
l_F_886 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_884))).f_NAME, l_FT_883, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_886))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_886))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_886, &(*p_TAIL));
if (((r_LOOKUP(((*(R21 *)rt_nil_check(l_N_884))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_N_884))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_887; memset(&l_Y_887, 0, sizeof l_Y_887);
l_Y_887 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_884))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_887))).f_T = l_FT_883;
S_R10(&((*(R12 *)rt_nil_check(l_Y_887))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_886))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_887))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_887))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_887))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_887, ((*(R21 *)rt_nil_check(l_D_881))).f_LINE);
}
}
}
l_N_884 = ((*(R21 *)rt_nil_check(l_N_884))).f_NEXT;
}
RT_B_TICK();
} L_end885: ;
}
}
else
{
{
R24 * l_TF_888; memset(&l_TF_888, 0, sizeof l_TF_888);
l_TF_888 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_881))).f_NAME);
R21 * l_S_889; memset(&l_S_889, 0, sizeof l_S_889);
l_S_889 = ((*(R21 *)rt_nil_check(l_D_881))).f_A;
if ((l_TF_888 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_881))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_881))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_888))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_881))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_881))).f_NAME);
}
{
R21 * l_O_890; memset(&l_O_890, 0, sizeof l_O_890);
l_O_890 = p_DECLS;
for (;;) {
if ((l_O_890 == l_D_881)) goto L_end891;
{
if ((((*(R21 *)rt_nil_check(l_O_890))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_O_890))).f_NAME, ((*(R21 *)rt_nil_check(l_D_881))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_881))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R21 *)rt_nil_check(l_D_881))).f_NAME);
}
}
l_O_890 = ((*(R21 *)rt_nil_check(l_O_890))).f_NEXT;
}
RT_B_TICK();
} L_end891: ;
}
r_CHECK_VARIANT_NAMES(l_D_881, ((*(R24 *)rt_nil_check(l_TF_888))).f_T);
for (;;) {
if ((l_S_889 == NULL)) goto L_end892;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_889))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_881))).f_NAME), ((*(R21 *)rt_nil_check(l_S_889))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_889 = ((*(R21 *)rt_nil_check(l_S_889))).f_NEXT;
}
RT_B_TICK();
} L_end892: ;
}
}
l_D_881 = ((*(R21 *)rt_nil_check(l_D_881))).f_NEXT;
}
RT_B_TICK();
} L_end882: ;
}
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT) { RT_B_TICK(); 
R21 * l_S_893; memset(&l_S_893, 0, sizeof l_S_893);
l_S_893 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R21 * l_LOS_894; memset(&l_LOS_894, 0, sizeof l_LOS_894);
l_LOS_894 = NULL;
R21 * l_HIS_895; memset(&l_HIS_895, 0, sizeof l_HIS_895);
l_HIS_895 = NULL;
rt_int l_LO_LIM_896; memset(&l_LO_LIM_896, 0, sizeof l_LO_LIM_896);
rt_int l_HI_LIM_897; memset(&l_HI_LIM_897, 0, sizeof l_HI_LIM_897);
R22 * l_R_898; memset(&l_R_898, 0, sizeof l_R_898);
l_R_898 = r_REAL_TYPE(p_TT);
l_LO_LIM_896 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_897 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_898))).f_KIND == g_T_ENUM))
{
l_LO_LIM_896 = ((rt_int)0LL);
l_HI_LIM_897 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_898))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_898))).f_KIND == g_T_BOOL))
{
l_LO_LIM_896 = ((rt_int)0LL);
l_HI_LIM_897 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_898))).f_MLO).f_OK)
{
l_LO_LIM_896 = (((*(R22 *)rt_nil_check(l_R_898))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_898))).f_MHI).f_OK)
{
l_HI_LIM_897 = (((*(R22 *)rt_nil_check(l_R_898))).f_MHI).f_V;
}
for (;;) {
if ((l_S_893 == NULL)) goto L_end899;
{
{
R21 * l_L_900; memset(&l_L_900, 0, sizeof l_L_900);
l_L_900 = ((*(R21 *)rt_nil_check(l_S_893))).f_A;
for (;;) {
if ((l_L_900 == NULL)) goto L_end901;
{
{
R23 l_A_902; memset(&l_A_902, 0, sizeof l_A_902);
R23 l_B_903; memset(&l_B_903, 0, sizeof l_B_903);
if ((((*(R21 *)rt_nil_check(l_L_900))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_902, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_900))).f_A, p_TT), 0);
S_R23(&l_B_903, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_900))).f_B, p_TT), 0);
if (((l_A_902).f_OK && (((((*(R21 *)rt_nil_check(l_L_900))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_900))).f_IV == ((rt_int)3LL))))))
{
(l_A_902).f_V = rt_add((l_A_902).f_V, ((rt_int)1LL));
}
if (((l_B_903).f_OK && (((*(R21 *)rt_nil_check(l_L_900))).f_IV >= ((rt_int)2LL))))
{
(l_B_903).f_V = rt_sub((l_B_903).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_902, r_ENUM_MANIFEST(l_L_900, p_TT), 0);
S_R23(&l_B_903, l_A_902, 0);
}
if ((!(((l_A_902).f_OK && (l_B_903).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_900))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_902).f_V < l_LO_LIM_896) || ((l_B_903).f_V > l_HI_LIM_897)) || ((l_A_902).f_V > (l_B_903).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_900))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R21 * l_P_904; memset(&l_P_904, 0, sizeof l_P_904);
l_P_904 = l_LOS_894;
R21 * l_Q_905; memset(&l_Q_905, 0, sizeof l_Q_905);
l_Q_905 = l_HIS_895;
for (;;) {
if ((l_P_904 == NULL)) goto L_end906;
{
if ((((l_A_902).f_V <= ((*(R21 *)rt_nil_check(l_Q_905))).f_IV) && ((l_B_903).f_V >= ((*(R21 *)rt_nil_check(l_P_904))).f_IV)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_900))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_904 = ((*(R21 *)rt_nil_check(l_P_904))).f_NEXT;
l_Q_905 = ((*(R21 *)rt_nil_check(l_Q_905))).f_NEXT;
}
RT_B_TICK();
} L_end906: ;
}
{
R21 * l_P_907; memset(&l_P_907, 0, sizeof l_P_907);
l_P_907 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R21 * l_Q_908; memset(&l_Q_908, 0, sizeof l_Q_908);
l_Q_908 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(l_P_907))).f_IV = (l_A_902).f_V;
((*(R21 *)rt_nil_check(l_Q_908))).f_IV = (l_B_903).f_V;
((*(R21 *)rt_nil_check(l_P_907))).f_NEXT = l_LOS_894;
((*(R21 *)rt_nil_check(l_Q_908))).f_NEXT = l_HIS_895;
l_LOS_894 = l_P_907;
l_HIS_895 = l_Q_908;
}
}
l_L_900 = ((*(R21 *)rt_nil_check(l_L_900))).f_NEXT;
}
RT_B_TICK();
} L_end901: ;
}
l_S_893 = ((*(R21 *)rt_nil_check(l_S_893))).f_NEXT;
}
RT_B_TICK();
} L_end899: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_909; memset(&l_T_909, 0, sizeof l_T_909);
l_T_909 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_910; memset(&l_TAIL_910, 0, sizeof l_TAIL_910);
l_TAIL_910 = NULL;
((*(R22 *)rt_nil_check(l_T_909))).f_BASE = l_T_909;
((*(R22 *)rt_nil_check(l_T_909))).f_DECL = p_Y;
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_909))).f_REPS = r_EXPAND_REP(((*(R21 *)rt_nil_check(p_TS))).f_D, l_T_909, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_909, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_909))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_909))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_909))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_909))).f_CNAME));
}
{
R21 * l_F_911; memset(&l_F_911, 0, sizeof l_F_911);
l_F_911 = p_FORMALS;
for (;;) {
if ((l_F_911 == NULL)) goto L_end912;
{
if ((!(((*(R21 *)rt_nil_check(l_F_911))).f_B == NULL)))
{
{
R22 * l_FT_913; memset(&l_FT_913, 0, sizeof l_FT_913);
l_FT_913 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_911))).f_B);
R21 * l_N_914; memset(&l_N_914, 0, sizeof l_N_914);
l_N_914 = ((*(R21 *)rt_nil_check(l_F_911))).f_A;
rt_int l_KIND_915; memset(&l_KIND_915, 0, sizeof l_KIND_915);
l_KIND_915 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_911))).f_IV == ((rt_int)1LL)))
{
l_KIND_915 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_913))) || (!(((*(R22 *)rt_nil_check(l_FT_913))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_911))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_914 == NULL)) goto L_end916;
{
r_ADD_FIELD(l_T_909, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_914))).f_NAME, l_FT_913, l_KIND_915), &l_TAIL_910);
l_N_914 = ((*(R21 *)rt_nil_check(l_N_914))).f_NEXT;
}
RT_B_TICK();
} L_end916: ;
}
}
l_F_911 = ((*(R21 *)rt_nil_check(l_F_911))).f_NEXT;
}
RT_B_TICK();
} L_end912: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_909, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_910);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_COMPLETE_RECORD(l_T_909);
{ R22 * rv917 = l_T_909;
return rv917; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv918 = 0;
return rv918; }
}
{
R12 * l_Y_919; memset(&l_Y_919, 0, sizeof l_Y_919);
l_Y_919 = r_LOOKUP(((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_919 == NULL))
{
{ rt_int rv920 = 0;
return rv920; }
}
{ rt_int rv921 = ((((*(R12 *)rt_nil_check(l_Y_919))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_919))).f_ACCESS, rt_str("ANY", 3)));
return rv921; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_922; memset(&l_D_922, 0, sizeof l_D_922);
l_D_922 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_923; memset(&l_CLASS_923, 0, sizeof l_CLASS_923);
l_CLASS_923 = NULL;
R20 * l_TARGS_924; memset(&l_TARGS_924, 0, sizeof l_TARGS_924);
l_TARGS_924 = NULL;
R25 * l_VARGS_925; memset(&l_VARGS_925, 0, sizeof l_VARGS_925);
l_VARGS_925 = NULL;
R25 * l_VTAIL_926; memset(&l_VTAIL_926, 0, sizeof l_VTAIL_926);
l_VTAIL_926 = NULL;
R21 * l_A_927; memset(&l_A_927, 0, sizeof l_A_927);
l_A_927 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_928; memset(&l_F_928, 0, sizeof l_F_928);
l_F_928 = ((*(R21 *)rt_nil_check(l_D_922))).f_A;
for (;;) {
if ((l_F_928 == NULL)) goto L_end929;
{
{
R21 * l_N_930; memset(&l_N_930, 0, sizeof l_N_930);
l_N_930 = ((*(R21 *)rt_nil_check(l_F_928))).f_A;
for (;;) {
if ((l_N_930 == NULL)) goto L_end931;
{
if ((l_A_927 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_928))).f_B == NULL))
{
{
R20 * l_B_932; memset(&l_B_932, 0, sizeof l_B_932);
l_B_932 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_932)), ({ R20 rc933; memset(&rc933, 0, sizeof rc933);  S_R10(&rc933.f_NAME, ((*(R21 *)rt_nil_check(l_N_930))).f_NAME, 0); rc933.f_T = r_ARG_TYPE(l_A_927); S_R10(&rc933.f_C, r_NO_TEXT(), 0); rc933.f_HASMV = 0; rc933.f_MV = ((rt_int)0LL); rc933.f_R = NULL; rc933.f_NEXT = l_TARGS_924; rc933; }), 0);
l_TARGS_924 = l_B_932;
}
}
else
{
{
R25 * l_V_934; memset(&l_V_934, 0, sizeof l_V_934);
l_V_934 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_934)), ({ R25 rc935; memset(&rc935, 0, sizeof rc935);  S_R10(&rc935.f_LO, r_NO_TEXT(), 0); S_R10(&rc935.f_HI, r_NO_TEXT(), 0); S_R23(&rc935.f_MLO, r_NO_MVAL(), 0); S_R23(&rc935.f_MHI, r_NO_MVAL(), 0); rc935.f_ANYARG = 0; rc935.f_NEXT = NULL; rc935; }), 0);
if (((((*(R21 *)rt_nil_check(l_A_927))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_927)))
{
if ((!(((*(R21 *)rt_nil_check(l_F_928))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_927))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_934))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_927))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_934))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_934))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_927))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_934))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_934))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_927))).f_NAME, (((*(R21 *)rt_nil_check(l_A_927))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_936; memset(&l_FT_936, 0, sizeof l_FT_936);
l_FT_936 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_928))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_934))).f_LO, r_CONVERT(r_EXPR(l_A_927, l_FT_936), l_FT_936, ((*(R21 *)rt_nil_check(l_A_927))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_934))).f_MLO, r_ENUM_MANIFEST(l_A_927, l_FT_936), 0);
if ((((((*(R25 *)rt_nil_check(l_V_934))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_936))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_936))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_934))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_936))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_934))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_936))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_927))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R21 *)rt_nil_check(l_F_928))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_934))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_927))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_926 == NULL))
{
l_VARGS_925 = l_V_934;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_926))).f_NEXT = l_V_934;
}
l_VTAIL_926 = l_V_934;
}
}
l_A_927 = ((*(R21 *)rt_nil_check(l_A_927))).f_NEXT;
l_N_930 = ((*(R21 *)rt_nil_check(l_N_930))).f_NEXT;
}
RT_B_TICK();
} L_end931: ;
}
l_F_928 = ((*(R21 *)rt_nil_check(l_F_928))).f_NEXT;
}
RT_B_TICK();
} L_end929: ;
if ((!(l_A_927 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_937; memset(&l_R_937, 0, sizeof l_R_937);
l_R_937 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_937 == NULL)) goto L_end938;
{
if (((((*(R12 *)rt_nil_check(l_R_937))).f_DECL == l_D_922) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_937))).f_BINDINGS, l_TARGS_924)))
{
l_CLASS_923 = ((*(R12 *)rt_nil_check(l_R_937))).f_T;
goto L_end938;
}
l_R_937 = ((*(R12 *)rt_nil_check(l_R_937))).f_INSTANCES;
}
RT_B_TICK();
} L_end938: ;
}
if ((l_CLASS_923 == NULL))
{
{
R12 * l_R_939; memset(&l_R_939, 0, sizeof l_R_939);
l_R_939 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_940; memset(&l_B_940, 0, sizeof l_B_940);
l_B_940 = l_TARGS_924;
R20 * l_SAVED_941; memset(&l_SAVED_941, 0, sizeof l_SAVED_941);
l_SAVED_941 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_942; memset(&l_ENTERED_942, 0, sizeof l_ENTERED_942);
((*(R12 *)rt_nil_check(l_R_939))).f_DECL = l_D_922;
((*(R12 *)rt_nil_check(l_R_939))).f_BINDINGS = l_TARGS_924;
((*(R12 *)rt_nil_check(l_R_939))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_939;
l_ENTERED_942 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_940 == NULL)) goto L_end943;
{
{
R12 * l_TY_944; memset(&l_TY_944, 0, sizeof l_TY_944);
l_TY_944 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_940))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_944))).f_T = ((*(R20 *)rt_nil_check(l_B_940))).f_T;
r_DEFINE(l_TY_944, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_940 = ((*(R20 *)rt_nil_check(l_B_940))).f_NEXT;
}
RT_B_TICK();
} L_end943: ;
l_F_928 = ((*(R21 *)rt_nil_check(l_D_922))).f_A;
for (;;) {
if ((l_F_928 == NULL)) goto L_end945;
{
if ((!(((*(R21 *)rt_nil_check(l_F_928))).f_B == NULL)))
{
{
R21 * l_N_946; memset(&l_N_946, 0, sizeof l_N_946);
l_N_946 = ((*(R21 *)rt_nil_check(l_F_928))).f_A;
for (;;) {
if ((l_N_946 == NULL)) goto L_end947;
{
{
R12 * l_P_948; memset(&l_P_948, 0, sizeof l_P_948);
l_P_948 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_946))).f_NAME);
((*(R12 *)rt_nil_check(l_P_948))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_928))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_948))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_946))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_948))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_948))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_948, ((*(R21 *)rt_nil_check(l_F_928))).f_LINE);
}
l_N_946 = ((*(R21 *)rt_nil_check(l_N_946))).f_NEXT;
}
RT_B_TICK();
} L_end947: ;
}
}
l_F_928 = ((*(R21 *)rt_nil_check(l_F_928))).f_NEXT;
}
RT_B_TICK();
} L_end945: ;
if ((l_TARGS_924 == NULL))
{
l_CLASS_923 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_922))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_922))).f_A);
}
else
{
l_CLASS_923 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_922))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_922))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_923))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_939))).f_T = l_CLASS_923;
r_CLOSE_SCOPE();
if (l_ENTERED_942)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_941;
}
}
{
R22 * l_T_949; memset(&l_T_949, 0, sizeof l_T_949);
l_T_949 = r_COPY_TYP(l_CLASS_923);
((*(R22 *)rt_nil_check(l_T_949))).f_ARGS = l_VARGS_925;
{ R22 * rv950 = l_T_949;
return rv950; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_951; memset(&l_P_951, 0, sizeof l_P_951);
l_P_951 = p_A;
R20 * l_Q_952; memset(&l_Q_952, 0, sizeof l_Q_952);
l_Q_952 = p_B;
for (;;) {
if (((l_P_951 == NULL) || (l_Q_952 == NULL))) goto L_end953;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_951))).f_T, ((*(R20 *)rt_nil_check(l_Q_952))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_951))).f_T, ((*(R20 *)rt_nil_check(l_Q_952))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_951))).f_T, ((*(R20 *)rt_nil_check(l_Q_952))).f_T))))
{
{ rt_int rv954 = 0;
return rv954; }
}
l_P_951 = ((*(R20 *)rt_nil_check(l_P_951))).f_NEXT;
l_Q_952 = ((*(R20 *)rt_nil_check(l_Q_952))).f_NEXT;
}
RT_B_TICK();
} L_end953: ;
{ rt_int rv955 = ((l_P_951 == NULL) && (l_Q_952 == NULL));
return rv955; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_956; memset(&l_A_956, 0, sizeof l_A_956);
l_A_956 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_956 == NULL)) goto L_end957;
{
if (((*(R25 *)rt_nil_check(l_A_956))).f_ANYARG)
{
{ rt_int rv958 = 1;
return rv958; }
}
l_A_956 = ((*(R25 *)rt_nil_check(l_A_956))).f_NEXT;
}
RT_B_TICK();
} L_end957: ;
{ rt_int rv959 = 0;
return rv959; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_960; memset(&l_L_960, 0, sizeof l_L_960);
l_L_960 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_961; memset(&l_C_961, 0, sizeof l_C_961);
S_R10(&l_C_961, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_962; memset(&l_TF_962, 0, sizeof l_TF_962);
l_TF_962 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_960 == NULL)) goto L_end963;
{
if ((((*(R21 *)rt_nil_check(l_L_960))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_961, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_961, p_SELF, ((*(R24 *)rt_nil_check(l_TF_962))).f_CNAME), 0);
S_R10(&l_C_961, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_961, (r_EXPR(((*(R21 *)rt_nil_check(l_L_960))).f_A, ((*(R24 *)rt_nil_check(l_TF_962))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_962))).f_CNAME), 0);
S_R10(&l_C_961, r_FMT2(rt_str("@@)", 3), l_C_961, (r_EXPR(((*(R21 *)rt_nil_check(l_L_960))).f_B, ((*(R24 *)rt_nil_check(l_TF_962))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_961, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_961, p_SELF, ((*(R24 *)rt_nil_check(l_TF_962))).f_CNAME, (r_EXPR(l_L_960, ((*(R24 *)rt_nil_check(l_TF_962))).f_T)).f_C), 0);
}
l_L_960 = ((*(R21 *)rt_nil_check(l_L_960))).f_NEXT;
}
RT_B_TICK();
} L_end963: ;
{ R10 rv964 = r_FMT1(rt_str("(@)", 3), l_C_961);
return rv964; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_965; memset(&l_C_965, 0, sizeof l_C_965);
S_R10(&l_C_965, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_966; memset(&l_F_966, 0, sizeof l_F_966);
l_F_966 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_967; memset(&l_BODY_967, 0, sizeof l_BODY_967);
S_R10(&l_BODY_967, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_968; memset(&l_ASSIGN_968, 0, sizeof l_ASSIGN_968);
S_R10(&l_ASSIGN_968, r_MK(rt_str("", 0)), 0);
R10 l_COPY_969; memset(&l_COPY_969, 0, sizeof l_COPY_969);
S_R10(&l_COPY_969, r_MK(rt_str("", 0)), 0);
R10 l_EQ_970; memset(&l_EQ_970, 0, sizeof l_EQ_970);
S_R10(&l_EQ_970, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_966 == NULL)) goto L_end971;
{
S_R10(&l_BODY_967, r_FMT3(rt_str("@ @ @;", 6), l_BODY_967, r_CTYPE(((*(R24 *)rt_nil_check(l_F_966))).f_T), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME), 0);
S_R10(&l_COPY_969, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_969, ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_966))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_966))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_968, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_968, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_966))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME))), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_966))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_968, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_968, ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_968, r_FMT2(rt_str("@ @", 3), l_ASSIGN_968, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_966))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_966))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_970, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_970, r_VARIANT_COND(l_F_966, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_966))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_970, r_FMT2(rt_str("@ && @", 6), l_EQ_970, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_966))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_966))).f_CNAME))), 0);
}
l_F_966 = ((*(R24 *)rt_nil_check(l_F_966))).f_NEXT;
}
RT_B_TICK();
} L_end971: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_965, l_BODY_967));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_965, l_C_965, l_C_965));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_965, l_C_965, l_C_965));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_965, l_C_965, l_C_965, l_ASSIGN_968));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_965, l_C_965, l_C_965, l_EQ_970));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_965, l_C_965, l_C_965));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_965, l_C_965, l_C_965, l_C_965));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_969));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_972; memset(&l_ET_C_972, 0, sizeof l_ET_C_972);
S_R10(&l_ET_C_972, r_CTYPE(p_ELEM), 0);
R10 l_KEY_973; memset(&l_KEY_973, 0, sizeof l_KEY_973);
S_R10(&l_KEY_973, r_FMT3(rt_str("@/@/@", 5), l_ET_C_972, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_974; memset(&l_Y_974, 0, sizeof l_Y_974);
l_Y_974 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_974 == NULL)) goto L_end975;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_974))).f_NAME, l_KEY_973) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_974))).f_T, p_ELEM)))
{
{ R10 rv976 = ((*(R12 *)rt_nil_check(l_Y_974))).f_ACCESS;
return rv976; }
}
l_Y_974 = ((*(R12 *)rt_nil_check(l_Y_974))).f_INSTANCES;
}
RT_B_TICK();
} L_end975: ;
l_Y_974 = r_NEW_SYM(g_Y_TYPE, l_KEY_973);
((*(R12 *)rt_nil_check(l_Y_974))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_974))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_974))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_974;
{
R10 l_C_977; memset(&l_C_977, 0, sizeof l_C_977);
S_R10(&l_C_977, ((*(R12 *)rt_nil_check(l_Y_974))).f_ACCESS, 0);
R10 l_D_978; memset(&l_D_978, 0, sizeof l_D_978);
S_R10(&l_D_978, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_977, l_C_977));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_977, l_D_978, l_D_978, l_ET_C_972));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_977, l_C_977, l_C_977));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_977, l_C_977, l_C_977));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_977, l_C_977, l_C_977, l_D_978));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_978, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_977, l_C_977, l_C_977, l_D_978));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_978, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_977, l_C_977, l_C_977));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_977, l_C_977, l_C_977, l_C_977));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_978, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv979 = ((*(R12 *)rt_nil_check(l_Y_974))).f_ACCESS;
return rv979; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_980; memset(&l_K_980, 0, sizeof l_K_980);
l_K_980 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_980 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv981 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv981; }
}
{ R10 rv982 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv982; }
}
else if ((l_K_980 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv983 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv983; }
}
{ R10 rv984 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv984; }
}
else if ((l_K_980 == g_T_SEM))
{
{ R10 rv985 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv985; }
}
else if ((l_K_980 == g_T_ABS))
{
{ R10 rv986 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv986; }
}
else if ((l_K_980 == g_T_ARR))
{
{
R25 * l_B_987; memset(&l_B_987, 0, sizeof l_B_987);
l_B_987 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_988; memset(&l_I_988, 0, sizeof l_I_988);
l_I_988 = ((rt_int)0LL);
R10 l_R_989; memset(&l_R_989, 0, sizeof l_R_989);
S_R10(&l_R_989, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_987 == NULL)) goto L_end990;
{
S_R10(&l_R_989, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_989, p_LV, r_NUM(l_I_988), ((*(R25 *)rt_nil_check(l_B_987))).f_LO), 0);
S_R10(&l_R_989, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_989, p_LV, r_NUM(l_I_988), ((*(R25 *)rt_nil_check(l_B_987))).f_HI), 0);
l_I_988 = rt_add(l_I_988, ((rt_int)1LL));
l_B_987 = ((*(R25 *)rt_nil_check(l_B_987))).f_NEXT;
}
RT_B_TICK();
} L_end990: ;
S_R10(&l_R_989, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_989, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_989, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_989, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_991; memset(&l_IV_991, 0, sizeof l_IV_991);
S_R10(&l_IV_991, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_989, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_989, l_IV_991, l_IV_991, l_IV_991), 0);
S_R10(&l_R_989, r_FMT2(rt_str("@ @ }", 5), l_R_989, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_991))), 0);
}
}
{ R10 rv992 = r_CATS(l_R_989, rt_str(" }", 2));
return rv992; }
}
}
else if ((l_K_980 == g_T_REC))
{
{
R24 * l_F_993; memset(&l_F_993, 0, sizeof l_F_993);
l_F_993 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_994; memset(&l_A_994, 0, sizeof l_A_994);
l_A_994 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_995; memset(&l_R_995, 0, sizeof l_R_995);
S_R10(&l_R_995, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_993 == NULL)) goto L_end996;
{
if ((!(((*(R24 *)rt_nil_check(l_F_993))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_994 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_994))).f_ANYARG))
{
S_R10(&l_R_995, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_995, p_LV, ((*(R24 *)rt_nil_check(l_F_993))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_994))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_993))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_994))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R10(&l_R_995, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_995, p_LV, ((*(R24 *)rt_nil_check(l_F_993))).f_CNAME), 0);
}
l_A_994 = ((*(R25 *)rt_nil_check(l_A_994))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_993))).f_T))
{
S_R10(&l_R_995, r_FMT2(rt_str("@ @", 3), l_R_995, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_993))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_993))).f_CNAME)), p_LV)), 0);
}
l_F_993 = ((*(R24 *)rt_nil_check(l_F_993))).f_NEXT;
}
RT_B_TICK();
} L_end996: ;
{ R10 rv997 = l_R_995;
return rv997; }
}
}
{ R10 rv998 = r_NO_TEXT();
return rv998; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_999; memset(&l_K_999, 0, sizeof l_K_999);
l_K_999 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_999 == g_T_STR) || (l_K_999 == g_T_BITS)) || (l_K_999 == g_T_ARR)) || (l_K_999 == g_T_SEM)))
{
{ rt_int rv1000 = 1;
return rv1000; }
}
else if ((l_K_999 == g_T_ABS))
{
{ rt_int rv1001 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1001; }
}
else if ((l_K_999 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1002 = 1;
return rv1002; }
}
{
R24 * l_F_1003; memset(&l_F_1003, 0, sizeof l_F_1003);
l_F_1003 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1003 == NULL)) goto L_end1004;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1003))).f_T))
{
{ rt_int rv1005 = 1;
return rv1005; }
}
l_F_1003 = ((*(R24 *)rt_nil_check(l_F_1003))).f_NEXT;
}
RT_B_TICK();
} L_end1004: ;
}
}
{ rt_int rv1006 = 0;
return rv1006; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_1007; memset(&l_K_1007, 0, sizeof l_K_1007);
l_K_1007 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1007 == g_T_STR) || (l_K_1007 == g_T_BITS)))
{
{ R10 rv1008 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1008; }
}
else if ((l_K_1007 == g_T_ABS))
{
{ R10 rv1009 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1009; }
}
else if (((l_K_1007 == g_T_ARR) || (l_K_1007 == g_T_REC)))
{
{ R10 rv1010 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1010; }
}
{ R10 rv1011 = p_V;
return rv1011; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_1012; memset(&l_K_1012, 0, sizeof l_K_1012);
l_K_1012 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1012 == g_T_STR) || (l_K_1012 == g_T_BITS)))
{
{ R10 rv1013 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1013; }
}
else if ((l_K_1012 == g_T_ABS))
{
{ R10 rv1014 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1014; }
}
else if ((l_K_1012 == g_T_SEM))
{
{ R10 rv1015 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1015; }
}
else if ((l_K_1012 == g_T_ARR))
{
{ R10 rv1016 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1016; }
}
else if ((l_K_1012 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv1017 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1017; }
}
{ R10 rv1018 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1018; }
}
{ R10 rv1019 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1019; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_1020; memset(&l_K_1020, 0, sizeof l_K_1020);
l_K_1020 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1020 == g_T_STR) || (l_K_1020 == g_T_BITS)))
{
{ R10 rv1021 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1021; }
}
else if ((l_K_1020 == g_T_ABS))
{
{ R10 rv1022 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1022; }
}
else if (((l_K_1020 == g_T_ARR) || (l_K_1020 == g_T_REC)))
{
{ R10 rv1023 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1023; }
}
else if ((l_K_1020 == g_T_SEM))
{
{ R10 rv1024 = r_MK(rt_str("0", 1));
return rv1024; }
}
{ R10 rv1025 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1025; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv1026 = p_V;
return rv1026; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv1027 = p_V;
return rv1027; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv1028 = p_V;
return rv1028; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv1029 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1029; }
}
{ R10 rv1030 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1030; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv1031 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1031; }
}
{ R10 rv1032 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1032; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1033 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1033; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1034 = 1;
return rv1034; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1035 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1035; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1036 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1036; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1037 = 0;
return rv1037; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1038 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1038; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1039 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1039; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1040 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1040; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1041 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1041; }
}
{ rt_int rv1042 = 1;
return rv1042; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1043 = 1;
return rv1043; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1044 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1044; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1045 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1045; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1046 = 0;
return rv1046; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1047 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1047; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1048 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1048; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1049 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1049; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1050 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1050; }
}
{ rt_int rv1051 = 1;
return rv1051; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1052 = 0;
return rv1052; }
}
{ rt_int rv1053 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1053; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1054; memset(&l_P_1054, 0, sizeof l_P_1054);
l_P_1054 = p_A;
R25 * l_Q_1055; memset(&l_Q_1055, 0, sizeof l_Q_1055);
l_Q_1055 = p_B;
for (;;) {
if (((l_P_1054 == NULL) || (l_Q_1055 == NULL))) goto L_end1056;
{
if ((r_IS_GEN_ARG(l_P_1054) || r_IS_GEN_ARG(l_Q_1055)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1054))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1055))).f_ANYARG)))
{
{ rt_int rv1057 = 0;
return rv1057; }
}
if (((((*(R25 *)rt_nil_check(l_P_1054))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1055))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1054))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1055))).f_MLO).f_V)))
{
{ rt_int rv1058 = 0;
return rv1058; }
}
}
l_P_1054 = ((*(R25 *)rt_nil_check(l_P_1054))).f_NEXT;
l_Q_1055 = ((*(R25 *)rt_nil_check(l_Q_1055))).f_NEXT;
}
RT_B_TICK();
} L_end1056: ;
{ rt_int rv1059 = ((l_P_1054 == NULL) && (l_Q_1055 == NULL));
return rv1059; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_1060; memset(&l_CS_1060, 0, sizeof l_CS_1060);
l_CS_1060 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_1061; memset(&l_T_1061, 0, sizeof l_T_1061);
rt_int l_LEV_1062; memset(&l_LEV_1062, 0, sizeof l_LEV_1062);
if ((((*(R18 *)rt_nil_check(l_CS_1060))).f_LEVEL == p_LEVEL))
{
{ R10 rv1063 = r_MK(rt_str("F", 1));
return rv1063; }
}
if (((*(R18 *)rt_nil_check(l_CS_1060))).f_FRAMED)
{
S_R10(&l_T_1061, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_1061, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1062 = rt_sub(((*(R18 *)rt_nil_check(l_CS_1060))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1062 <= p_LEVEL)) goto L_end1064;
{
S_R10(&l_T_1061, r_CATS(l_T_1061, rt_str("->up", 4)), 0);
l_LEV_1062 = rt_sub(l_LEV_1062, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1064: ;
{ R10 rv1065 = l_T_1061;
return rv1065; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv1066 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1066; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1067 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1067; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv1068 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1068; }
}
{ R10 rv1069 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1069; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_1070; memset(&l_CS_1070, 0, sizeof l_CS_1070);
l_CS_1070 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1071; memset(&l_T_1071, 0, sizeof l_T_1071);
l_T_1071 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_1072; memset(&l_CN_1072, 0, sizeof l_CN_1072);
if ((((*(R18 *)rt_nil_check(l_CS_1070))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_1072, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_1072, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1071), l_CN_1072));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1072, 0);
{ R10 rv1073 = l_CN_1072;
return rv1073; }
}
S_R10(&l_CN_1072, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1072, 0);
if (((*(R18 *)rt_nil_check(l_CS_1070))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1071), l_CN_1072), &((*(R18 *)rt_nil_check(l_CS_1070))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1072), 0);
{ R10 rv1074 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1074; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1071), l_CN_1072, l_CN_1072, l_CN_1072));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1072, 0);
{ R10 rv1075 = l_CN_1072;
return rv1075; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_1076; memset(&l_T_1076, 0, sizeof l_T_1076);
l_T_1076 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_1077; memset(&l_N_1077, 0, sizeof l_N_1077);
l_N_1077 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_1078; memset(&l_V_1078, 0, sizeof l_V_1078);
rt_int l_HAVE_V_1079; memset(&l_HAVE_V_1079, 0, sizeof l_HAVE_V_1079);
l_HAVE_V_1079 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1076))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1076))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1077 == NULL)) goto L_end1080;
{
{
R12 * l_Y_1081; memset(&l_Y_1081, 0, sizeof l_Y_1081);
l_Y_1081 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_1077))).f_NAME);
R10 l_CN_1082; memset(&l_CN_1082, 0, sizeof l_CN_1082);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1081))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1081))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1076) && (((*(R22 *)rt_nil_check(l_T_1076))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1083; memset(&l_M_1083, 0, sizeof l_M_1083);
S_R23(&l_M_1083, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1081))).f_HASMV = (l_M_1083).f_OK;
((*(R12 *)rt_nil_check(l_Y_1081))).f_MV = (l_M_1083).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1081))).f_T = l_T_1076;
S_R10(&l_CN_1082, r_NEW_OBJECT(l_Y_1081, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1076))
{
r_CODE(r_INIT_CODE(l_T_1076, l_CN_1082));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1079))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1078, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_1076), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1079 = 1;
}
r_CODE(r_STORE_CODE(l_T_1076, l_CN_1082, l_V_1078, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1081, ((*(R21 *)rt_nil_check(l_N_1077))).f_LINE);
}
l_N_1077 = ((*(R21 *)rt_nil_check(l_N_1077))).f_NEXT;
}
RT_B_TICK();
} L_end1080: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1084 = ({ R26 rc1085; memset(&rc1085, 0, sizeof rc1085);  S_R10(&rc1085.f_C, p_C, 0); rc1085.f_T = p_T; rc1085.f_LVAL = 0; S_R10(&rc1085.f_SELF, r_NO_TEXT(), 0); rc1085; });
return rv1084; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv1086 = ({ R26 rc1087; memset(&rc1087, 0, sizeof rc1087);  S_R10(&rc1087.f_C, p_C, 0); rc1087.f_T = p_T; rc1087.f_LVAL = p_LVAL; S_R10(&rc1087.f_SELF, p_SELF, 0); rc1087; });
return rv1086; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1088; memset(&l_T_1088, 0, sizeof l_T_1088);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1089 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1089; }
}
l_T_1088 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1088))).f_SCALE = p_SCALE;
{ R22 * rv1090 = l_T_1088;
return rv1090; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1091; memset(&l_T_1091, 0, sizeof l_T_1091);
l_T_1091 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_1091))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1091))).f_MLEN, p_M, 0);
{ R22 * rv1092 = l_T_1091;
return rv1092; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_1093; memset(&l_S_1093, 0, sizeof l_S_1093);
l_S_1093 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1093, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1094; memset(&l_AT_1094, 0, sizeof l_AT_1094);
l_AT_1094 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_1095; memset(&l_R_1095, 0, sizeof l_R_1095);
S_R10(&l_R_1095, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1097_lo = ((rt_int)0LL), it1097_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1097 = it1097_lo; it1097 <= it1097_hi; it1097++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1093, it1097, it1097), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1093, it1097, it1097), rt_str("\\", 1))))
{
S_R10(&l_R_1095, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1093, it1097, it1097))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1093, it1097, it1097), rt_str("\?", 1)))
{
S_R10(&l_R_1095, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1098; memset(&l_C_1098, 0, sizeof l_C_1098);
l_C_1098 = r_CODE_OF(rt_b_slice(l_S_1093, it1097, it1097));
if (({ rt_int iv1099 = l_C_1098; (((rt_int)32LL) <= iv1099) && (iv1099 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_1095, r_MK(rt_b_slice(l_S_1093, it1097, it1097)), 0);
}
else
{
S_R10(&l_R_1095, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1098, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1098, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1098, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1097 == it1097_hi) break;
} } L_end1096: ;
S_R10(&l_R_1095, r_MK(rt_str("\"", 1)), 0);
{ R10 rv1100 = ({ R10 rc1101; memset(&rc1101, 0, sizeof rc1101);  rc1101.f_AT = l_AT_1094; rc1101.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1094); rc1101.f_H = rt_neg(((rt_int)1LL)); rc1101; });
return rv1100; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_1102; memset(&l_K_1102, 0, sizeof l_K_1102);
l_K_1102 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1103; memset(&l_NO_1103, 0, sizeof l_NO_1103);
S_R23(&l_NO_1103, ({ R23 rc1104; memset(&rc1104, 0, sizeof rc1104);  rc1104.f_OK = 0; rc1104.f_V = ((rt_int)0LL); rc1104; }), 0);
if ((l_K_1102 == g_N_INT))
{
{ R23 rv1105 = ({ R23 rc1106; memset(&rc1106, 0, sizeof rc1106);  rc1106.f_OK = 1; rc1106.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1106; });
return rv1105; }
}
else if ((l_K_1102 == g_N_PAREN))
{
{ R23 rv1107 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv1107; }
}
else if ((l_K_1102 == g_N_BOOL))
{
{ R23 rv1108 = ({ R23 rc1109; memset(&rc1109, 0, sizeof rc1109);  rc1109.f_OK = 1; rc1109.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1109; });
return rv1108; }
}
else if ((l_K_1102 == g_N_UNOP))
{
{
R23 l_A_1110; memset(&l_A_1110, 0, sizeof l_A_1110);
S_R23(&l_A_1110, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1110).f_OK))
{
{ R23 rv1111 = l_NO_1103;
return rv1111; }
}
{ R23 rv1112 = ({ R23 rc1113; memset(&rc1113, 0, sizeof rc1113);  rc1113.f_OK = 1; rc1113.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1110).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1113; });
return rv1112; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1114 = l_A_1110;
return rv1114; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1115 = ({ R23 rc1116; memset(&rc1116, 0, sizeof rc1116);  rc1116.f_OK = (l_A_1110).f_OK; rc1116.f_V = rt_sub(((rt_int)1LL), (l_A_1110).f_V); rc1116; });
return rv1115; }
}
}
}
else if ((l_K_1102 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1117 = l_NO_1103;
return rv1117; }
}
{
R23 l_A_1118; memset(&l_A_1118, 0, sizeof l_A_1118);
S_R23(&l_A_1118, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1119; memset(&l_B_1119, 0, sizeof l_B_1119);
S_R23(&l_B_1119, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1120; memset(&l_OP_1120, 0, sizeof l_OP_1120);
S_R10(&l_OP_1120, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1120, rt_str("&", 1)))
{
if (((((l_A_1118).f_OK && ((l_A_1118).f_V == ((rt_int)0LL)))) || (((l_B_1119).f_OK && ((l_B_1119).f_V == ((rt_int)0LL))))))
{
{ R23 rv1121 = ({ R23 rc1122; memset(&rc1122, 0, sizeof rc1122);  rc1122.f_OK = 1; rc1122.f_V = ((rt_int)0LL); rc1122; });
return rv1121; }
}
if (((l_A_1118).f_OK && (l_B_1119).f_OK))
{
{ R23 rv1123 = ({ R23 rc1124; memset(&rc1124, 0, sizeof rc1124);  rc1124.f_OK = 1; rc1124.f_V = ((rt_int)1LL); rc1124; });
return rv1123; }
}
{ R23 rv1125 = l_NO_1103;
return rv1125; }
}
else if (r_TEQS(l_OP_1120, rt_str("!", 1)))
{
if (((((l_A_1118).f_OK && ((l_A_1118).f_V == ((rt_int)1LL)))) || (((l_B_1119).f_OK && ((l_B_1119).f_V == ((rt_int)1LL))))))
{
{ R23 rv1126 = ({ R23 rc1127; memset(&rc1127, 0, sizeof rc1127);  rc1127.f_OK = 1; rc1127.f_V = ((rt_int)1LL); rc1127; });
return rv1126; }
}
if (((l_A_1118).f_OK && (l_B_1119).f_OK))
{
{ R23 rv1128 = ({ R23 rc1129; memset(&rc1129, 0, sizeof rc1129);  rc1129.f_OK = 1; rc1129.f_V = ((rt_int)0LL); rc1129; });
return rv1128; }
}
{ R23 rv1130 = l_NO_1103;
return rv1130; }
}
if ((!(((l_A_1118).f_OK && (l_B_1119).f_OK))))
{
{ R23 rv1131 = l_NO_1103;
return rv1131; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1132 = l_NO_1103;
return rv1132; }
}
if (((r_TEQS(l_OP_1120, rt_str("+", 1)) || r_TEQS(l_OP_1120, rt_str("-", 1))) || r_TEQS(l_OP_1120, rt_str("*", 1))))
{
{ R23 rv1133 = ({ R23 rc1134; memset(&rc1134, 0, sizeof rc1134);  rc1134.f_OK = 1; rc1134.f_V = r_MANIFEST_ARITH(l_OP_1120, (l_A_1118).f_V, (l_B_1119).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1134; });
return rv1133; }
}
else if ((r_TEQS(l_OP_1120, rt_str("//", 2)) && (!((l_B_1119).f_V == ((rt_int)0LL)))))
{
{ R23 rv1135 = ({ R23 rc1136; memset(&rc1136, 0, sizeof rc1136);  rc1136.f_OK = 1; rc1136.f_V = rt_quot((l_A_1118).f_V, (l_B_1119).f_V); rc1136; });
return rv1135; }
}
else if ((r_TEQS(l_OP_1120, rt_str("MOD", 3)) && (!((l_B_1119).f_V == ((rt_int)0LL)))))
{
{ R23 rv1137 = ({ R23 rc1138; memset(&rc1138, 0, sizeof rc1138);  rc1138.f_OK = 1; rc1138.f_V = rt_rem((l_A_1118).f_V, (l_B_1119).f_V); rc1138; });
return rv1137; }
}
else if (r_TEQS(l_OP_1120, rt_str("=", 1)))
{
{ R23 rv1139 = ({ R23 rc1140; memset(&rc1140, 0, sizeof rc1140);  rc1140.f_OK = 1; rc1140.f_V = r_BOOL_INT(((l_A_1118).f_V == (l_B_1119).f_V)); rc1140; });
return rv1139; }
}
else if (r_TEQS(l_OP_1120, rt_str("<>", 2)))
{
{ R23 rv1141 = ({ R23 rc1142; memset(&rc1142, 0, sizeof rc1142);  rc1142.f_OK = 1; rc1142.f_V = r_BOOL_INT((!((l_A_1118).f_V == (l_B_1119).f_V))); rc1142; });
return rv1141; }
}
else if (r_TEQS(l_OP_1120, rt_str("<", 1)))
{
{ R23 rv1143 = ({ R23 rc1144; memset(&rc1144, 0, sizeof rc1144);  rc1144.f_OK = 1; rc1144.f_V = r_BOOL_INT(((l_A_1118).f_V < (l_B_1119).f_V)); rc1144; });
return rv1143; }
}
else if (r_TEQS(l_OP_1120, rt_str(">", 1)))
{
{ R23 rv1145 = ({ R23 rc1146; memset(&rc1146, 0, sizeof rc1146);  rc1146.f_OK = 1; rc1146.f_V = r_BOOL_INT(((l_A_1118).f_V > (l_B_1119).f_V)); rc1146; });
return rv1145; }
}
else if (r_TEQS(l_OP_1120, rt_str("<=", 2)))
{
{ R23 rv1147 = ({ R23 rc1148; memset(&rc1148, 0, sizeof rc1148);  rc1148.f_OK = 1; rc1148.f_V = r_BOOL_INT(((l_A_1118).f_V <= (l_B_1119).f_V)); rc1148; });
return rv1147; }
}
else if (r_TEQS(l_OP_1120, rt_str(">=", 2)))
{
{ R23 rv1149 = ({ R23 rc1150; memset(&rc1150, 0, sizeof rc1150);  rc1150.f_OK = 1; rc1150.f_V = r_BOOL_INT(((l_A_1118).f_V >= (l_B_1119).f_V)); rc1150; });
return rv1149; }
}
}
}
else if ((l_K_1102 == g_N_IN))
{
{
R23 l_A_1151; memset(&l_A_1151, 0, sizeof l_A_1151);
S_R23(&l_A_1151, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1152; memset(&l_L_1152, 0, sizeof l_L_1152);
S_R23(&l_L_1152, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1153; memset(&l_U_1153, 0, sizeof l_U_1153);
S_R23(&l_U_1153, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1154; memset(&l_LO_1154, 0, sizeof l_LO_1154);
rt_int l_HI_1155; memset(&l_HI_1155, 0, sizeof l_HI_1155);
if ((!(((((l_A_1151).f_OK && (l_L_1152).f_OK) && (l_U_1153).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1156 = l_NO_1103;
return rv1156; }
}
l_LO_1154 = (l_L_1152).f_V;
l_HI_1155 = (l_U_1153).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1154 = rt_add(l_LO_1154, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1155 = rt_sub(l_HI_1155, ((rt_int)1LL));
}
{ R23 rv1157 = ({ R23 rc1158; memset(&rc1158, 0, sizeof rc1158);  rc1158.f_OK = 1; rc1158.f_V = r_BOOL_INT((((l_A_1151).f_V >= l_LO_1154) && ((l_A_1151).f_V <= l_HI_1155))); rc1158; });
return rv1157; }
}
}
else if (((l_K_1102 == g_N_NAME) || (l_K_1102 == g_TS_GEN)))
{
{
R12 * l_Y_1159; memset(&l_Y_1159, 0, sizeof l_Y_1159);
l_Y_1159 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1160; memset(&l_B_1160, 0, sizeof l_B_1160);
l_B_1160 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1160 == NULL)) goto L_end1161;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1160))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1160))).f_HASMV))
{
{ R23 rv1162 = ({ R23 rc1163; memset(&rc1163, 0, sizeof rc1163);  rc1163.f_OK = 1; rc1163.f_V = ((*(R20 *)rt_nil_check(l_B_1160))).f_MV; rc1163; });
return rv1162; }
}
l_B_1160 = ((*(R20 *)rt_nil_check(l_B_1160))).f_NEXT;
}
RT_B_TICK();
} L_end1161: ;
if ((!(l_Y_1159 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1159))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1159))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1159))).f_HASMV))
{
{ R23 rv1164 = ({ R23 rc1165; memset(&rc1165, 0, sizeof rc1165);  rc1165.f_OK = 1; rc1165.f_V = ((*(R12 *)rt_nil_check(l_Y_1159))).f_MV; rc1165; });
return rv1164; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1159))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1166 = ({ R23 rc1167; memset(&rc1167, 0, sizeof rc1167);  rc1167.f_OK = 1; rc1167.f_V = ((*(R12 *)rt_nil_check(l_Y_1159))).f_MV; rc1167; });
return rv1166; }
}
}
}
}
}
else if ((l_K_1102 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1168 = ({ R23 rc1169; memset(&rc1169, 0, sizeof rc1169);  rc1169.f_OK = 1; rc1169.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1169; });
return rv1168; }
}
}
else if ((l_K_1102 == g_N_FIELD))
{
{ R23 rv1170 = r_ATTR_MANIFEST(p_E);
return rv1170; }
}
else if ((l_K_1102 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1171 = ({ R23 rc1172; memset(&rc1172, 0, sizeof rc1172);  rc1172.f_OK = 1; rc1172.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1172; });
return rv1171; }
}
}
{ R23 rv1173 = l_NO_1103;
return rv1173; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1174; memset(&l_A_1174, 0, sizeof l_A_1174);
l_A_1174 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1175; memset(&l_NAME_1175, 0, sizeof l_NAME_1175);
S_R10(&l_NAME_1175, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1176; memset(&l_T_1176, 0, sizeof l_T_1176);
l_T_1176 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1174))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1177; memset(&l_INNER_1177, 0, sizeof l_INNER_1177);
l_INNER_1177 = ((*(R21 *)rt_nil_check(l_A_1174))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1177))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1175, rt_str("MAX", 3)))
{
{ R23 rv1178 = r_SOME(r_MAX_LENGTH());
return rv1178; }
}
else if (r_TEQS(l_NAME_1175, rt_str("MIN", 3)))
{
{ R23 rv1179 = r_SOME(((rt_int)0LL));
return rv1179; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1177))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1177))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1175, rt_str("MAX", 3)))
{
{ R23 rv1180 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1180; }
}
else if (r_TEQS(l_NAME_1175, rt_str("MIN", 3)))
{
{ R23 rv1181 = r_SOME(((rt_int)1LL));
return rv1181; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1177))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1175, rt_str("MAX", 3)))
{
{ R23 rv1182 = r_SOME(((rt_int)1000LL));
return rv1182; }
}
else if (r_TEQS(l_NAME_1175, rt_str("MIN", 3)))
{
{ R23 rv1183 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1183; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1177))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1175, rt_str("MAX", 3)))
{
{ R23 rv1184 = r_SOME(((rt_int)1000LL));
return rv1184; }
}
else if (r_TEQS(l_NAME_1175, rt_str("MIN", 3)))
{
{ R23 rv1185 = r_SOME(((rt_int)2LL));
return rv1185; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1186; memset(&l_Y_1186, 0, sizeof l_Y_1186);
l_Y_1186 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1174))).f_NAME);
if ((l_Y_1186 == NULL))
{
{ R23 rv1187 = r_NO_MVAL();
return rv1187; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1186))).f_KIND == g_Y_TYPE))
{
l_T_1176 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1174))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1174))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1186))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1186))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1186))).f_KIND == g_Y_GEN)))
{
l_T_1176 = ((*(R12 *)rt_nil_check(l_Y_1186))).f_T;
}
else
{
{ R23 rv1188 = r_NO_MVAL();
return rv1188; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1175, rt_str("MIN", 3)) || r_TEQS(l_NAME_1175, rt_str("MAX", 3))))
{
{ R23 rv1189 = r_SOME(((*(R21 *)rt_nil_check(l_A_1174))).f_IV);
return rv1189; }
}
l_T_1176 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1174))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1174))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1175, rt_str("MIN", 3)) || r_TEQS(l_NAME_1175, rt_str("MAX", 3))))))
{
{ R23 rv1190 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1174))).f_A))).f_IV);
return rv1190; }
}
}
{
R14 l_SAVED_CODE_1191; memset(&l_SAVED_CODE_1191, 0, sizeof l_SAVED_CODE_1191);
S_R14(&l_SAVED_CODE_1191, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1192; memset(&rc1192, 0, sizeof rc1192);  rc1192.f_HEAD = NULL; rc1192.f_TAIL = NULL; rc1192; }), 0);
l_T_1176 = (r_EXPR(l_A_1174, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1191, 0);
}
}
else
{
{ R23 rv1193 = r_NO_MVAL();
return rv1193; }
}
if ((l_T_1176 == NULL))
{
{ R23 rv1194 = r_NO_MVAL();
return rv1194; }
}
{ R23 rv1195 = r_TYPE_ATTR_MANIFEST(l_T_1176, l_NAME_1175);
return rv1195; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1196; memset(&l_T_1196, 0, sizeof l_T_1196);
l_T_1196 = r_REAL_TYPE(p_T0);
rt_int l_K_1197; memset(&l_K_1197, 0, sizeof l_K_1197);
l_K_1197 = ((*(R22 *)rt_nil_check(l_T_1196))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1198 = r_STATIC_SIZE(p_T0);
return rv1198; }
}
if ((l_K_1197 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1199 = r_SOME(((*(R22 *)rt_nil_check(l_T_1196))).f_SCALE);
return rv1199; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1200 = r_SOME(((rt_int)2LL));
return rv1200; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1196))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1201 = ((*(R22 *)rt_nil_check(l_T_1196))).f_MLO;
return rv1201; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1196))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1202 = ((*(R22 *)rt_nil_check(l_T_1196))).f_MHI;
return rv1202; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1196))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1203 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1203; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1196))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1204 = r_SOME(INT64_MAX);
return rv1204; }
}
}
else if ((l_K_1197 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1205 = r_SOME(((*(R22 *)rt_nil_check(l_T_1196))).f_SCALE);
return rv1205; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1206 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1196))).f_SCALE));
return rv1206; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1207 = r_SOME(((rt_int)2LL));
return rv1207; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1208 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1196))).f_SCALE, p_NAME));
return rv1208; }
}
}
else if ((l_K_1197 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1196))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1209 = ((*(R22 *)rt_nil_check(l_T_1196))).f_MLO;
return rv1209; }
}
{ R23 rv1210 = r_SOME(((rt_int)0LL));
return rv1210; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1196))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1211 = ((*(R22 *)rt_nil_check(l_T_1196))).f_MHI;
return rv1211; }
}
{ R23 rv1212 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1196))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1212; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1196))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1213 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1196))).f_BASE))).f_NLITS);
return rv1213; }
}
if (((((*(R22 *)rt_nil_check(l_T_1196))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1196))).f_MHI).f_OK))
{
{ R23 rv1214 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1196))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1196))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1214; }
}
}
}
else if (((l_K_1197 == g_T_STR) || (l_K_1197 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1215 = ((*(R22 *)rt_nil_check(l_T_1196))).f_MLEN;
return rv1215; }
}
}
else if ((l_K_1197 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1216 = r_SOME(((*(R22 *)rt_nil_check(l_T_1196))).f_DIMS);
return rv1216; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1196))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1196))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1196))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1217 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1196))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1196))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1217; }
}
}
}
else if ((l_K_1197 == g_T_REC))
{
{
R24 * l_F_1218; memset(&l_F_1218, 0, sizeof l_F_1218);
l_F_1218 = ((*(R22 *)rt_nil_check(l_T_1196))).f_FIELDS;
R25 * l_B_1219; memset(&l_B_1219, 0, sizeof l_B_1219);
l_B_1219 = ((*(R22 *)rt_nil_check(l_T_1196))).f_ARGS;
for (;;) {
if (((l_F_1218 == NULL) || (l_B_1219 == NULL))) goto L_end1220;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1218))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1218))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1219))).f_ANYARG)
{
{ R23 rv1221 = r_NO_MVAL();
return rv1221; }
}
{ R23 rv1222 = ((*(R25 *)rt_nil_check(l_B_1219))).f_MLO;
return rv1222; }
}
l_B_1219 = ((*(R25 *)rt_nil_check(l_B_1219))).f_NEXT;
}
l_F_1218 = ((*(R24 *)rt_nil_check(l_F_1218))).f_NEXT;
}
RT_B_TICK();
} L_end1220: ;
}
}
{ R23 rv1223 = r_NO_MVAL();
return rv1223; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1224 = ((rt_int)0LL);
{ rt_frame xf1225; if (RT_TRY(xf1225)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1224 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1224 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1224 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1225); } else { RT_POP(xf1225); int xf1225x = rt_xcur;
if (0 || xf1225x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1225x); } }
{ rt_int rv1226 = F->l_R_1224;
return rv1226; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1227 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1227; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1228 = ((rt_int)1LL);
return rv1228; }
}
{ rt_int rv1229 = ((rt_int)0LL);
return rv1229; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1230; memset(&l_K_1230, 0, sizeof l_K_1230);
l_K_1230 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1230 == g_N_INT))
{
{ R26 rv1231 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1231; }
}
else if ((l_K_1230 == g_N_REAL))
{
{ R26 rv1232 = r_REAL_LITERAL(p_E);
return rv1232; }
}
else if ((l_K_1230 == g_N_BOOL))
{
{ R26 rv1233 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1233; }
}
else if ((l_K_1230 == g_N_NIL))
{
{ R26 rv1234 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1234; }
}
else if ((l_K_1230 == g_N_PAREN))
{
{
R26 l_V_1235; memset(&l_V_1235, 0, sizeof l_V_1235);
S_R26(&l_V_1235, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1235).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1235).f_C), 0);
{ R26 rv1236 = l_V_1235;
return rv1236; }
}
}
else if ((l_K_1230 == g_N_STR))
{
{ R26 rv1237 = r_STRING_LITERAL(p_E);
return rv1237; }
}
else if ((l_K_1230 == g_N_BITS))
{
{ R26 rv1238 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1238; }
}
else if ((l_K_1230 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1239 = r_NAME_EXPR(p_E, p_WANT);
return rv1239; }
}
{ R26 rv1240 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1240; }
}
else if ((l_K_1230 == g_N_RECCONS))
{
{ R26 rv1241 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1241; }
}
else if ((l_K_1230 == g_N_ARRCONS))
{
{ R26 rv1242 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1242; }
}
else if ((l_K_1230 == g_N_TYPESPEC))
{
{ R26 rv1243 = r_TYPE_SPECIFIER(p_E);
return rv1243; }
}
else if ((l_K_1230 == g_N_QUAL))
{
{
rt_int l_SAVED_1244; memset(&l_SAVED_1244, 0, sizeof l_SAVED_1244);
l_SAVED_1244 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1245; memset(&l_SAVED_Q_1245, 0, sizeof l_SAVED_Q_1245);
l_SAVED_Q_1245 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1246; memset(&l_V_1246, 0, sizeof l_V_1246);
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
R23 l_P_1247; memset(&l_P_1247, 0, sizeof l_P_1247);
S_R23(&l_P_1247, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1246, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1244;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1245;
{ R26 rv1248 = l_V_1246;
return rv1248; }
}
}
else if ((l_K_1230 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1249; memset(&l_N_1249, 0, sizeof l_N_1249);
l_N_1249 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1249))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1249))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1250 = r_EXPR(l_N_1249, p_WANT);
return rv1250; }
}
}
{ R26 rv1251 = r_NEW_EXPR(p_E, p_WANT);
return rv1251; }
}
else if ((l_K_1230 == g_N_NAME))
{
{ R26 rv1252 = r_NAME_EXPR(p_E, p_WANT);
return rv1252; }
}
else if ((l_K_1230 == g_N_APPLY))
{
{
R12 * l_Y_1253; memset(&l_Y_1253, 0, sizeof l_Y_1253);
l_Y_1253 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1253 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1253))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1253))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1254; memset(&l_N_1254, 0, sizeof l_N_1254);
l_N_1254 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1255; memset(&l_A_1255, 0, sizeof l_A_1255);
l_A_1255 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1255))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1254))).f_A = l_A_1255;
((*(R21 *)rt_nil_check(l_N_1254))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1256 = r_EXPR(l_N_1254, p_WANT);
return rv1256; }
}
}
}
{ R26 rv1257 = r_CALL_EXPR(p_E, p_WANT);
return rv1257; }
}
}
else if ((l_K_1230 == g_N_FIELD))
{
{ R26 rv1258 = r_FIELD_EXPR(p_E);
return rv1258; }
}
else if ((l_K_1230 == g_N_DEREF))
{
{
R26 l_B_1259; memset(&l_B_1259, 0, sizeof l_B_1259);
S_R26(&l_B_1259, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1259).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1260; memset(&l_TT_1260, 0, sizeof l_TT_1260);
l_TT_1260 = r_TARGET((l_B_1259).f_T);
{ R26 rv1261 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1260), (l_B_1259).f_C), l_TT_1260, 1, r_NO_TEXT());
return rv1261; }
}
}
}
else if ((l_K_1230 == g_N_INDEX))
{
{ R26 rv1262 = r_INDEX_EXPR(p_E);
return rv1262; }
}
else if ((l_K_1230 == g_N_SUBSTR))
{
{
R26 l_B_1263; memset(&l_B_1263, 0, sizeof l_B_1263);
S_R26(&l_B_1263, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1264; memset(&l_BT_1264, 0, sizeof l_BT_1264);
l_BT_1264 = r_REAL_TYPE((l_B_1263).f_T);
R10 l_LO_1265; memset(&l_LO_1265, 0, sizeof l_LO_1265);
R10 l_HI_1266; memset(&l_HI_1266, 0, sizeof l_HI_1266);
if (((((*(R22 *)rt_nil_check((l_B_1263).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1267; memset(&l_ARGS_1267, 0, sizeof l_ARGS_1267);
l_ARGS_1267 = r_VAL_ARG(l_B_1263, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1268; memset(&l_Y_1268, 0, sizeof l_Y_1268);
l_Y_1268 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1267, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1268 == NULL)))
{
{ R26 rv1269 = r_CALL_SYM(l_Y_1268, l_ARGS_1267, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1269; }
}
if ((((*(R22 *)rt_nil_check((l_B_1263).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1264))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1264))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1265, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1266, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1264))).f_KIND == g_T_BITS))
{
{ R26 rv1270 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1263).f_C, l_LO_1265, l_HI_1266), r_BITS_TYPE(((rt_int)1LL)));
return rv1270; }
}
{
R22 * l_T_1271; memset(&l_T_1271, 0, sizeof l_T_1271);
l_T_1271 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1271))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1264))).f_BASE;
{ R26 rv1272 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1263).f_C, l_LO_1265, l_HI_1266), l_T_1271);
return rv1272; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1264))).f_KIND == g_T_BITS))
{
{ R26 rv1273 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1263).f_C, l_LO_1265, l_HI_1266), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1273; }
}
{
R22 * l_T_1274; memset(&l_T_1274, 0, sizeof l_T_1274);
l_T_1274 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1274))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1264))).f_BASE;
{ R26 rv1275 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1263).f_C, l_LO_1265, l_HI_1266), l_T_1274);
return rv1275; }
}
}
}
else if ((l_K_1230 == g_N_UNOP))
{
{ R26 rv1276 = r_UNARY(p_E);
return rv1276; }
}
else if ((l_K_1230 == g_N_BINOP))
{
{ R26 rv1277 = r_BINARY(p_E);
return rv1277; }
}
else if ((l_K_1230 == g_N_IN))
{
{ R26 rv1278 = r_IN_EXPR(p_E);
return rv1278; }
}
else if (((l_K_1230 == g_N_ANY) || (l_K_1230 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1230 == g_TS_GEN))
{
{
R21 * l_N_1279; memset(&l_N_1279, 0, sizeof l_N_1279);
l_N_1279 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1279))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1279))).f_NAME))
{
{ R26 rv1280 = r_NAME_EXPR(l_N_1279, p_WANT);
return rv1280; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1230 == g_TS_NAME) || (l_K_1230 == g_TS_ARRAY)) || (l_K_1230 == g_TS_RECORD)) || (l_K_1230 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1281; memset(&l_SAVED_1281, 0, sizeof l_SAVED_1281);
l_SAVED_1281 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1282; memset(&l_SAVED_Q_1282, 0, sizeof l_SAVED_Q_1282);
l_SAVED_Q_1282 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1283; memset(&l_V_1283, 0, sizeof l_V_1283);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1283, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1281;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1282;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1283).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1284 = (l_V_1283).f_C;
return rv1284; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1283).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1283).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1283).f_T));
}
{ R10 rv1285 = (l_V_1283).f_C;
return rv1285; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1286; memset(&l_V_1286, 0, sizeof l_V_1286);
S_R26(&l_V_1286, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1286).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1286).f_T));
}
{ R10 rv1287 = (l_V_1286).f_C;
return rv1287; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1288; memset(&l_T_1288, 0, sizeof l_T_1288);
l_T_1288 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1288))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1288))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1289 = l_T_1288;
return rv1289; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1290; memset(&l_T_1290, 0, sizeof l_T_1290);
S_R10(&l_T_1290, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1291; memset(&l_S_1291, 0, sizeof l_S_1291);
l_S_1291 = rt_b_str_new((l_T_1290).f_LEN, 0);
rt_b_assign(&l_S_1291, r_STR(l_T_1290, (l_T_1290).f_LEN));
rt_int l_POINT_1292; memset(&l_POINT_1292, 0, sizeof l_POINT_1292);
l_POINT_1292 = 0;
rt_int l_DIGITS_1293; memset(&l_DIGITS_1293, 0, sizeof l_DIGITS_1293);
l_DIGITS_1293 = ((rt_int)0LL);
{ rt_int it1295_lo = ((rt_int)0LL), it1295_hi = rt_sub((l_T_1290).f_LEN, ((rt_int)1LL));
for (rt_int it1295 = it1295_lo; it1295 <= it1295_hi; it1295++) {
{
if (rt_b_eq(rt_b_slice(l_S_1291, it1295, it1295), rt_str(".", 1)))
{
l_POINT_1292 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1291, it1295, it1295), rt_str("E", 1)))
{
goto L_end1294;
}
else
{
l_DIGITS_1293 = rt_add(l_DIGITS_1293, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1295 == it1295_hi) break;
} } L_end1294: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1292)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1296 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1290), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1296; }
}
if ((!l_POINT_1292))
{
{ R26 rv1297 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1290)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1297; }
}
{
R22 * l_F_1298; memset(&l_F_1298, 0, sizeof l_F_1298);
l_F_1298 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1299; memset(&l_C_1299, 0, sizeof l_C_1299);
S_R10(&l_C_1299, l_T_1290, 0);
((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE = r_MAX_INT(l_DIGITS_1293, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1291, rt_sub((l_T_1290).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1290).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1299, r_FMT1(rt_str("@0", 2), l_T_1290), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1291, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1299, r_FMT1(rt_str("0@", 2), l_T_1290), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1298))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1300 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1299), l_F_1298);
return rv1300; }
}
{ R26 rv1301 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1299), l_F_1298);
return rv1301; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1302; memset(&l_T_1302, 0, sizeof l_T_1302);
S_R10(&l_T_1302, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1303; memset(&l_S_1303, 0, sizeof l_S_1303);
l_S_1303 = rt_b_str_new((l_T_1302).f_LEN, 0);
rt_b_assign(&l_S_1303, r_STR(l_T_1302, (l_T_1302).f_LEN));
rt_int l_INT_1304; memset(&l_INT_1304, 0, sizeof l_INT_1304);
l_INT_1304 = ((rt_int)0LL);
rt_int l_SIG_1305; memset(&l_SIG_1305, 0, sizeof l_SIG_1305);
l_SIG_1305 = 0;
rt_int l_POINT_1306; memset(&l_POINT_1306, 0, sizeof l_POINT_1306);
l_POINT_1306 = 0;
rt_int l_LEAD_1307; memset(&l_LEAD_1307, 0, sizeof l_LEAD_1307);
l_LEAD_1307 = ((rt_int)0LL);
rt_int l_I_1308; memset(&l_I_1308, 0, sizeof l_I_1308);
l_I_1308 = ((rt_int)0LL);
rt_int l_EXP_1309; memset(&l_EXP_1309, 0, sizeof l_EXP_1309);
l_EXP_1309 = ((rt_int)0LL);
for (;;) {
if ((l_I_1308 >= (l_T_1302).f_LEN)) goto L_end1310;
{
if (rt_b_eq(rt_b_slice(l_S_1303, l_I_1308, l_I_1308), rt_str("E", 1)))
{
goto L_end1310;
}
else if (rt_b_eq(rt_b_slice(l_S_1303, l_I_1308, l_I_1308), rt_str(".", 1)))
{
l_POINT_1306 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1303, l_I_1308, l_I_1308), rt_str("0", 1))))
{
if ((!l_POINT_1306))
{
l_INT_1304 = rt_add(l_INT_1304, ((rt_int)1LL));
}
l_SIG_1305 = 1;
}
else if ((l_SIG_1305 && (!l_POINT_1306)))
{
l_INT_1304 = rt_add(l_INT_1304, ((rt_int)1LL));
}
else if ((l_POINT_1306 && (!l_SIG_1305)))
{
l_LEAD_1307 = rt_add(l_LEAD_1307, ((rt_int)1LL));
}
l_I_1308 = rt_add(l_I_1308, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1310: ;
if ((!l_SIG_1305))
{
{ rt_int rv1311 = 1;
return rv1311; }
}
if ((l_I_1308 < (l_T_1302).f_LEN))
{
{
rt_int l_NEG_1312; memset(&l_NEG_1312, 0, sizeof l_NEG_1312);
l_NEG_1312 = 0;
l_I_1308 = rt_add(l_I_1308, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1303, l_I_1308, l_I_1308), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1303, l_I_1308, l_I_1308), rt_str("+", 1))))
{
l_NEG_1312 = rt_b_eq(rt_b_slice(l_S_1303, l_I_1308, l_I_1308), rt_str("-", 1));
l_I_1308 = rt_add(l_I_1308, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1308 >= (l_T_1302).f_LEN)) goto L_end1313;
{
if ((l_EXP_1309 <= ((rt_int)100000LL)))
{
l_EXP_1309 = rt_add(rt_mul(l_EXP_1309, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1303, l_I_1308, l_I_1308)), ((rt_int)48LL))));
}
l_I_1308 = rt_add(l_I_1308, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1313: ;
if (l_NEG_1312)
{
l_EXP_1309 = rt_neg(l_EXP_1309);
}
}
}
{
rt_int l_D_1314; memset(&l_D_1314, 0, sizeof l_D_1314);
l_D_1314 = rt_add(rt_sub(l_INT_1304, ((rt_int)1LL)), l_EXP_1309);
rt_int l_LIM_1315; memset(&l_LIM_1315, 0, sizeof l_LIM_1315);
l_LIM_1315 = ((rt_int)308LL);
if ((l_INT_1304 == ((rt_int)0LL)))
{
l_D_1314 = rt_add(rt_sub(rt_neg(l_LEAD_1307), ((rt_int)1LL)), l_EXP_1309);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1315 = ((rt_int)38LL);
}
{ rt_int rv1316 = ((l_D_1314 <= l_LIM_1315) && (l_D_1314 >= rt_add(rt_neg(l_LIM_1315), ((rt_int)1LL))));
return rv1316; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1317; memset(&l_T_1317, 0, sizeof l_T_1317);
S_R10(&l_T_1317, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1318; memset(&l_S_1318, 0, sizeof l_S_1318);
l_S_1318 = rt_b_str_new((l_T_1317).f_LEN, 0);
rt_b_assign(&l_S_1318, r_STR(l_T_1317, (l_T_1317).f_LEN));
rt_int l_SIG_1319; memset(&l_SIG_1319, 0, sizeof l_SIG_1319);
l_SIG_1319 = ((rt_int)0LL);
rt_int l_FRAC_1320; memset(&l_FRAC_1320, 0, sizeof l_FRAC_1320);
l_FRAC_1320 = ((rt_int)0LL);
rt_int l_POINT_1321; memset(&l_POINT_1321, 0, sizeof l_POINT_1321);
l_POINT_1321 = 0;
rt_int l_EXP_1322; memset(&l_EXP_1322, 0, sizeof l_EXP_1322);
l_EXP_1322 = ((rt_int)0LL);
rt_int l_I_1323; memset(&l_I_1323, 0, sizeof l_I_1323);
l_I_1323 = ((rt_int)0LL);
for (;;) {
if ((l_I_1323 >= (l_T_1317).f_LEN)) goto L_end1324;
{
if (rt_b_eq(rt_b_slice(l_S_1318, l_I_1323, l_I_1323), rt_str("E", 1)))
{
goto L_end1324;
}
if (rt_b_eq(rt_b_slice(l_S_1318, l_I_1323, l_I_1323), rt_str(".", 1)))
{
l_POINT_1321 = 1;
}
else
{
if (((l_SIG_1319 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1318, l_I_1323, l_I_1323), rt_str("0", 1)))))
{
l_SIG_1319 = rt_add(l_SIG_1319, ((rt_int)1LL));
}
if (l_POINT_1321)
{
l_FRAC_1320 = rt_add(l_FRAC_1320, ((rt_int)1LL));
}
}
l_I_1323 = rt_add(l_I_1323, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1324: ;
if ((rt_sub(l_I_1323, r_BOOL_INT(l_POINT_1321)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1323 < (l_T_1317).f_LEN))
{
{
rt_int l_NEG_1325; memset(&l_NEG_1325, 0, sizeof l_NEG_1325);
l_NEG_1325 = 0;
l_I_1323 = rt_add(l_I_1323, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1318, l_I_1323, l_I_1323), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1318, l_I_1323, l_I_1323), rt_str("+", 1))))
{
l_NEG_1325 = rt_b_eq(rt_b_slice(l_S_1318, l_I_1323, l_I_1323), rt_str("-", 1));
l_I_1323 = rt_add(l_I_1323, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1323 >= (l_T_1317).f_LEN)) goto L_end1326;
{
if ((l_EXP_1322 <= ((rt_int)1000LL)))
{
l_EXP_1322 = rt_sub(rt_add(rt_mul(l_EXP_1322, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1318, l_I_1323, l_I_1323))), ((rt_int)48LL));
}
l_I_1323 = rt_add(l_I_1323, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1326: ;
if ((l_EXP_1322 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1325)
{
l_EXP_1322 = rt_neg(l_EXP_1322);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1319 > ((rt_int)0LL)))
{
{
rt_int l_P10_1327; memset(&l_P10_1327, 0, sizeof l_P10_1327);
l_P10_1327 = rt_sub(rt_add(rt_sub(l_SIG_1319, ((rt_int)1LL)), l_EXP_1322), l_FRAC_1320);
rt_int l_BITS_1328; memset(&l_BITS_1328, 0, sizeof l_BITS_1328);
l_BITS_1328 = rt_add(rt_quot((rt_mul(l_P10_1327, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1327 < ((rt_int)0LL)))
{
l_BITS_1328 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1327), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1328 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1329; memset(&l_CS_1329, 0, sizeof l_CS_1329);
l_CS_1329 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1330; memset(&l_P_1330, 0, sizeof l_P_1330);
l_P_1330 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1331; memset(&l_S_1331, 0, sizeof l_S_1331);
S_R10(&l_S_1331, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1329 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1332; memset(&l_Y_1332, 0, sizeof l_Y_1332);
l_Y_1332 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1332 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1332))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1329 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1329)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1329 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1329)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1329))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1330 == NULL)) goto L_end1333;
{
if ((((*(R21 *)rt_nil_check(l_P_1330))).f_IV == g_K_STR))
{
if ((l_CS_1329 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1331, r_CAT(l_S_1331, ((*(R21 *)rt_nil_check(l_P_1330))).f_NAME), 0);
}
else
{
{
R10 l_Q_1334; memset(&l_Q_1334, 0, sizeof l_Q_1334);
S_R10(&l_Q_1334, ((*(R21 *)rt_nil_check(l_P_1330))).f_NAME, 0);
rstr l_QS_1335; memset(&l_QS_1335, 0, sizeof l_QS_1335);
l_QS_1335 = rt_b_str_new((l_Q_1334).f_LEN, 0);
rt_b_assign(&l_QS_1335, r_STR(l_Q_1334, (l_Q_1334).f_LEN));
{ rt_int it1337_lo = ((rt_int)0LL), it1337_hi = rt_sub((l_Q_1334).f_LEN, ((rt_int)1LL));
for (rt_int it1337 = it1337_lo; it1337 <= it1337_hi; it1337++) {
{
{
R10 l_LIT_1338; memset(&l_LIT_1338, 0, sizeof l_LIT_1338);
R12 * l_Y_1339; memset(&l_Y_1339, 0, sizeof l_Y_1339);
if (rt_b_eq(rt_b_slice(l_QS_1335, it1337, it1337), rt_str("'", 1)))
{
S_R10(&l_LIT_1338, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1338, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1335, it1337, it1337)), rt_str("'", 1))), 0);
}
l_Y_1339 = r_FIND_LITERAL(l_LIT_1338, l_CS_1329);
if ((l_Y_1339 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1330))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1335, it1337, it1337)));
}
S_R10(&l_S_1331, r_CATS(l_S_1331, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1339))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1337 == it1337_hi) break;
} } L_end1336: ;
}
}
}
else
{
{
R12 * l_Y_1340; memset(&l_Y_1340, 0, sizeof l_Y_1340);
l_Y_1340 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1330))).f_NAME, l_CS_1329);
if ((l_Y_1340 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1330))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1330))).f_NAME);
}
S_R10(&l_S_1331, r_CATS(l_S_1331, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1340))).f_MV)), 0);
}
}
l_P_1330 = ((*(R21 *)rt_nil_check(l_P_1330))).f_NEXT;
}
RT_B_TICK();
} L_end1333: ;
{
R22 * l_T_1341; memset(&l_T_1341, 0, sizeof l_T_1341);
l_T_1341 = r_STR_TYPE(r_NUM((l_S_1331).f_LEN), r_SOME((l_S_1331).f_LEN));
((*(R22 *)rt_nil_check(l_T_1341))).f_BASE = l_CS_1329;
{ R26 rv1342 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1331), r_NUM((l_S_1331).f_LEN)), l_T_1341);
return rv1342; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1343; memset(&l_TS_1343, 0, sizeof l_TS_1343);
l_TS_1343 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1343))).f_NAME, p_NAME, 0);
{ R22 * rv1344 = r_RESOLVE(l_TS_1343);
return rv1344; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1345; memset(&l_Y_1345, 0, sizeof l_Y_1345);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1346; memset(&l_WT_1346, 0, sizeof l_WT_1346);
l_WT_1346 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1346))).f_KIND == g_T_ENUM))
{
l_Y_1345 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1346);
if ((!(l_Y_1345 == NULL)))
{
{ R26 rv1347 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1345))).f_MV), r_ENUM_RESULT(l_Y_1345, p_WANT));
return rv1347; }
}
}
}
}
l_Y_1345 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1348; memset(&l_FOUND_1348, 0, sizeof l_FOUND_1348);
l_FOUND_1348 = NULL;
rt_int l_N_1349; memset(&l_N_1349, 0, sizeof l_N_1349);
l_N_1349 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1345 == NULL)) goto L_end1350;
{
if ((((*(R12 *)rt_nil_check(l_Y_1345))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1348 == NULL))
{
l_FOUND_1348 = l_Y_1345;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1348))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1345))).f_T))).f_BASE)))
{
l_N_1349 = rt_add(l_N_1349, ((rt_int)1LL));
}
}
l_Y_1345 = r_LOOKUP_NEXT(l_Y_1345);
}
RT_B_TICK();
} L_end1350: ;
if ((l_FOUND_1348 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1349 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1351 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1348))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1348))).f_T);
return rv1351; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1352 = p_WANT;
return rv1352; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1353; memset(&l_T_1353, 0, sizeof l_T_1353);
l_T_1353 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1353))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1354 = l_T_1353;
return rv1354; }
}
}
{ R22 * rv1355 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1355; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1356; memset(&l_Y_1356, 0, sizeof l_Y_1356);
l_Y_1356 = r_LOOKUP(p_NAME);
if ((l_Y_1356 == NULL))
{
{ rt_int rv1357 = 0;
return rv1357; }
}
{ rt_int rv1358 = (((((*(R12 *)rt_nil_check(l_Y_1356))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1356))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1356))).f_KIND == g_Y_ROUTINE));
return rv1358; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1359; memset(&l_Y_1359, 0, sizeof l_Y_1359);
l_Y_1359 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1359 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1359))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1359))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1360; memset(&l_WRITABLE_1360, 0, sizeof l_WRITABLE_1360);
l_WRITABLE_1360 = r_CHECK_IMPORTED(l_Y_1359, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1361 = r_MKLV(r_OBJ_ACCESS(l_Y_1359), ((*(R12 *)rt_nil_check(l_Y_1359))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_VAR) && l_WRITABLE_1360), r_NO_TEXT());
return rv1361; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_GEN))
{
{ R26 rv1362 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1359))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1359))).f_T);
return rv1362; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1363 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1363; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1364; memset(&l_N_1364, 0, sizeof l_N_1364);
l_N_1364 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1364))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1365 = r_CALL_EXPR(l_N_1364, p_WANT);
return rv1365; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1366; memset(&l_A_1366, 0, sizeof l_A_1366);
l_A_1366 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1366)))
{
{ R26 rv1367 = r_EXPR(l_A_1366, NULL);
return rv1367; }
}
if ((((*(R21 *)rt_nil_check(l_A_1366))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1366))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1366))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1368; memset(&l_B_1368, 0, sizeof l_B_1368);
S_R26(&l_B_1368, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1366))).f_A))).f_A), 0);
R10 l_I_1369; memset(&l_I_1369, 0, sizeof l_I_1369);
S_R10(&l_I_1369, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1366))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1368).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1370 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1368).f_C, l_I_1369, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1368).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1370; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1371 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1368).f_C, l_I_1369, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1368).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1371; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1366))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(l_A_1366))).f_A))
{
{ R26 rv1372 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(l_A_1366))).f_A)), ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1372; }
}
}
if ((((*(R21 *)rt_nil_check(l_A_1366))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1366))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1366))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1366))).f_A))).f_A))).f_NAME))
{
{ R26 rv1373 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1366))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1366))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1373; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1366))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1374; memset(&l_Y_1374, 0, sizeof l_Y_1374);
l_Y_1374 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1366))).f_NAME);
if ((!(l_Y_1374 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1374))).f_KIND == g_Y_TYPE))
{
{ R26 rv1375 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1366))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1375; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1366))).f_NAME))
{
{ R26 rv1376 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1366))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1376; }
}
}
}
{
R26 l_B_1377; memset(&l_B_1377, 0, sizeof l_B_1377);
S_R26(&l_B_1377, r_EXPR(l_A_1366, NULL), 0);
R22 * l_BT_1378; memset(&l_BT_1378, 0, sizeof l_BT_1378);
l_BT_1378 = (l_B_1377).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1378))).f_KIND == g_T_REC))
{
{
R24 * l_F_1379; memset(&l_F_1379, 0, sizeof l_F_1379);
l_F_1379 = r_FIND_VFIELD(l_BT_1378, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1379 == NULL)))
{
r_CHECK_VARIANT(l_F_1379, l_BT_1378, l_A_1366, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1379))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1378)))
{
{ R26 rv1380 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1377).f_C, ((*(R24 *)rt_nil_check(l_F_1379))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1379))).f_T);
return rv1380; }
}
{ R26 rv1381 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1377).f_C, ((*(R24 *)rt_nil_check(l_F_1379))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1379))).f_T, ((l_B_1377).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1379))).f_KIND == ((rt_int)0LL))), (l_B_1377).f_C);
return rv1381; }
}
}
}
{ R26 rv1382 = r_ATTRIBUTE(l_B_1377, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1382; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1383 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1383; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1384 = 1;
return rv1384; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1385 = 1;
return rv1385; }
}
{
rstr l_S_1386; memset(&l_S_1386, 0, sizeof l_S_1386);
l_S_1386 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1386, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1388_lo = ((rt_int)0LL), it1388_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1388 = it1388_lo; it1388 <= it1388_hi; it1388++) {
{
if (rt_b_eq(rt_b_slice(l_S_1386, it1388, it1388), rt_str(".", 1)))
{
{ rt_int rv1389 = 0;
return rv1389; }
}
}
RT_B_TICK();
if (it1388 == it1388_hi) break;
} } L_end1387: ;
}
{ rt_int rv1390 = 1;
return rv1390; }
}
{ rt_int rv1391 = 0;
return rv1391; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1392 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1392; }
}
{ rt_int rv1393 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1393; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1394 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1394; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1395; memset(&l_TAGV_1395, 0, sizeof l_TAGV_1395);
S_R23(&l_TAGV_1395, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1395).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1395).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1396; memset(&l_F_1396, 0, sizeof l_F_1396);
l_F_1396 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1397; memset(&l_A_1397, 0, sizeof l_A_1397);
l_A_1397 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1396 == NULL)) goto L_end1398;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1396))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1397 == NULL))
{
{ R23 rv1399 = r_NO_MVAL();
return rv1399; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1396))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1397))).f_ANYARG)
{
{ R23 rv1400 = r_NO_MVAL();
return rv1400; }
}
{ R23 rv1401 = ((*(R25 *)rt_nil_check(l_A_1397))).f_MLO;
return rv1401; }
}
l_A_1397 = ((*(R25 *)rt_nil_check(l_A_1397))).f_NEXT;
}
l_F_1396 = ((*(R24 *)rt_nil_check(l_F_1396))).f_NEXT;
}
RT_B_TICK();
} L_end1398: ;
{ R23 rv1402 = r_NO_MVAL();
return rv1402; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1403; memset(&l_P_1403, 0, sizeof l_P_1403);
l_P_1403 = p_L;
for (;;) {
if ((l_P_1403 == NULL)) goto L_end1404;
{
if ((((*(R21 *)rt_nil_check(l_P_1403))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1403))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1403))).f_B, p_T)).f_V)))
{
{ rt_int rv1405 = 1;
return rv1405; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1403, p_T)).f_V == p_V))
{
{ rt_int rv1406 = 1;
return rv1406; }
}
l_P_1403 = ((*(R21 *)rt_nil_check(l_P_1403))).f_NEXT;
}
RT_B_TICK();
} L_end1404: ;
{ rt_int rv1407 = 0;
return rv1407; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1408 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1408; }
}
{ R26 rv1409 = r_EXPR(p_E, NULL);
return rv1409; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1410; memset(&l_A_1410, 0, sizeof l_A_1410);
S_R26(&l_A_1410, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1411; memset(&l_I_1411, 0, sizeof l_I_1411);
S_R10(&l_I_1411, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1410).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1412 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1410).f_C, (l_A_1410).f_C, l_I_1411, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1410).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1412; }
}
}
}
{ R26 rv1413 = r_INDEX_EXPR2(p_E);
return rv1413; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_VALUE(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1414; memset(&l_SAVED_1414, 0, sizeof l_SAVED_1414);
l_SAVED_1414 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1415; memset(&l_SAVED_Q_1415, 0, sizeof l_SAVED_Q_1415);
l_SAVED_Q_1415 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1416; memset(&l_V_1416, 0, sizeof l_V_1416);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1416, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1414;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1415;
{ R10 rv1417 = r_INDEX_OF(l_V_1416, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1417; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1418; memset(&l_T_1418, 0, sizeof l_T_1418);
l_T_1418 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1418))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1418))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1418))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1419; memset(&l_ARGS_1419, 0, sizeof l_ARGS_1419);
l_ARGS_1419 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1420; memset(&l_Y_1420, 0, sizeof l_Y_1420);
l_Y_1420 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1419, p_LINE, 0);
if ((l_Y_1420 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1421 = (r_CALL_SYM(l_Y_1420, l_ARGS_1419, p_LINE)).f_C;
return rv1421; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1418))).f_KIND == g_T_ENUM))
{
{ R10 rv1422 = (p_V).f_C;
return rv1422; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1418))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1418))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1423 = (p_V).f_C;
return rv1423; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1424; memset(&l_B_1424, 0, sizeof l_B_1424);
S_R26(&l_B_1424, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1425; memset(&l_T_1425, 0, sizeof l_T_1425);
l_T_1425 = r_REAL_TYPE((l_B_1424).f_T);
R21 * l_S_1426; memset(&l_S_1426, 0, sizeof l_S_1426);
l_S_1426 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1427; memset(&l_IX_1427, 0, sizeof l_IX_1427);
S_R10(&l_IX_1427, r_MK(rt_str("", 0)), 0);
rt_int l_N_1428; memset(&l_N_1428, 0, sizeof l_N_1428);
l_N_1428 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1425))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1426 == NULL)) goto L_end1429;
{
if ((l_N_1428 > ((rt_int)0LL)))
{
S_R10(&l_IX_1427, r_CATS(l_IX_1427, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1427, r_CAT(l_IX_1427, r_INDEX_VALUE(l_S_1426)), 0);
l_N_1428 = rt_add(l_N_1428, ((rt_int)1LL));
l_S_1426 = ((*(R21 *)rt_nil_check(l_S_1426))).f_NEXT;
}
RT_B_TICK();
} L_end1429: ;
if ((!(l_N_1428 == ((*(R22 *)rt_nil_check(l_T_1425))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1428 == ((rt_int)1LL)))
{
{ R26 rv1430 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1424).f_C, l_IX_1427, (l_B_1424).f_C, (l_B_1424).f_C), ((*(R22 *)rt_nil_check(l_T_1425))).f_ELEM, (l_B_1424).f_LVAL, r_NO_TEXT());
return rv1430; }
}
{
R10 l_X_1431; memset(&l_X_1431, 0, sizeof l_X_1431);
S_R10(&l_X_1431, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1424).f_C, r_NUM(l_N_1428), (l_B_1424).f_C, (l_B_1424).f_C), 0);
{ R26 rv1432 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1431, l_IX_1427), ((*(R22 *)rt_nil_check(l_T_1425))).f_ELEM, (l_B_1424).f_LVAL, r_NO_TEXT());
return rv1432; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1433 = r_MKN(rt_str("NEGATE_", 7));
return rv1433; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1434 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1434; }
}
{ R10 rv1435 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1435; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1436 = r_MKN(rt_str("ADD_", 4));
return rv1436; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1437 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1437; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1438 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1438; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1439 = r_MKN(rt_str("DIVIDE_", 7));
return rv1439; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1440 = r_MKN(rt_str("MODULUS_", 8));
return rv1440; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1441 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1441; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1442 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1442; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1443 = r_MKN(rt_str("EQUAL_", 6));
return rv1443; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1444 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1444; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1445 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1445; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1446 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1446; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1447 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1447; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1448 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1448; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1449 = r_MKN(rt_str("AND_", 4));
return rv1449; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1450 = r_MKN(rt_str("OR_", 3));
return rv1450; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1451 = r_MKN(rt_str("XOR_", 4));
return rv1451; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1452 = r_MKN(rt_str("IMPLIES_", 8));
return rv1452; }
}
{ R10 rv1453 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1453; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1454; memset(&l_A_1454, 0, sizeof l_A_1454);
l_A_1454 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1454)), ({ R27 rc1455; memset(&rc1455, 0, sizeof rc1455);  rc1455.f_E = NULL; S_R26(&rc1455.f_V, p_V, 0); rc1455.f_HAVE = 1; rc1455.f_MODE = g_M_IN; rc1455.f_NEXT = p_NEXT; rc1455; }), 0);
{ R27 * rv1456 = l_A_1454;
return rv1456; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1457; memset(&l_A_1457, 0, sizeof l_A_1457);
l_A_1457 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1457)), ({ R27 rc1458; memset(&rc1458, 0, sizeof rc1458);  rc1458.f_E = p_E; S_R26(&rc1458.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1458.f_HAVE = 0; rc1458.f_MODE = p_MODE; rc1458.f_NEXT = p_NEXT; rc1458; }), 0);
{ R27 * rv1459 = l_A_1457;
return rv1459; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1460; memset(&l_Y_1460, 0, sizeof l_Y_1460);
l_Y_1460 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1460 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1460 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1461 = l_Y_1460;
return rv1461; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1462; memset(&l_Y_1462, 0, sizeof l_Y_1462);
l_Y_1462 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1462 == NULL)) goto L_end1463;
{
if ((((*(R12 *)rt_nil_check(l_Y_1462))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1464 = 1;
return rv1464; }
}
l_Y_1462 = r_LOOKUP_NEXT(l_Y_1462);
}
RT_B_TICK();
} L_end1463: ;
l_Y_1462 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1462 == NULL)) goto L_end1465;
{
if ((((*(R12 *)rt_nil_check(l_Y_1462))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1466 = 1;
return rv1466; }
}
l_Y_1462 = r_LOOKUP_NEXT(l_Y_1462);
}
RT_B_TICK();
} L_end1465: ;
{ rt_int rv1467 = 0;
return rv1467; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1468; memset(&l_Q_1468, 0, sizeof l_Q_1468);
l_Q_1468 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1469; memset(&l_R_1469, 0, sizeof l_R_1469);
l_R_1469 = NULL;
if ((l_Q_1468 == NULL))
{
{ R27 * rv1470 = NULL;
return rv1470; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1468))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1469 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1468))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1468))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1468))).f_B == NULL)))
{
l_R_1469 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1468))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1469);
}
{ R27 * rv1471 = l_R_1469;
return rv1471; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1472; memset(&l_ARGS_1472, 0, sizeof l_ARGS_1472);
l_ARGS_1472 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1473; memset(&l_Y_1473, 0, sizeof l_Y_1473);
l_Y_1473 = r_USER_OPERATOR(p_NAME, l_ARGS_1472, p_LINE);
if ((l_Y_1473 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1474 = r_CALL_SYM(l_Y_1473, l_ARGS_1472, p_LINE);
return rv1474; }
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
{ R10 rv1475 = p_C;
return rv1475; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1476 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1476; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1477 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1477; }
}
{ R10 rv1478 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1478; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1479 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1479; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1480; memset(&l_RT_1480, 0, sizeof l_RT_1480);
l_RT_1480 = r_REAL_TYPE(p_T);
R22 * l_VT_1481; memset(&l_VT_1481, 0, sizeof l_VT_1481);
l_VT_1481 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1481))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_PTR)))
{
{ R10 rv1482 = (p_V).f_C;
return rv1482; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1481))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1481)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1483 = (p_V).f_C;
return rv1483; }
}
if ((!r_SAME_CLASS(l_RT_1480, l_VT_1481)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1481), (r_TYPE_NAME(l_VT_1481)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1480), (r_TYPE_NAME(l_RT_1480)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1480))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1480))).f_SCALE))
{
{ R10 rv1484 = r_RANGE_CHECK(l_RT_1480, (p_V).f_C, p_SELF);
return rv1484; }
}
{ R10 rv1485 = r_RANGE_CHECK(l_RT_1480, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1480))).f_SCALE)), p_SELF);
return rv1485; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1480))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1481))).f_SCALE)))
{
{ R10 rv1486 = r_RANGE_CHECK(l_RT_1480, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1480))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1486; }
}
{ R10 rv1487 = r_RANGE_CHECK(l_RT_1480, (p_V).f_C, p_SELF);
return rv1487; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1480))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1480) || r_HAS_VALUES(l_VT_1481)))) && (!r_SAME_REPS(l_RT_1480, l_VT_1481))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1488 = r_RANGE_CHECK(l_RT_1480, (p_V).f_C, p_SELF);
return rv1488; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1480, l_VT_1481, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1480))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1481))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1480))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1481))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1480), r_TARGET(l_VT_1481))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R10 rv1489 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1480), r_TARGET(l_VT_1481), (p_V).f_C);
return rv1489; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1480)) && (!r_HAS_ANY(l_VT_1481))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1480))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1481))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1480))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1480))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1481))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1480, l_VT_1481)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R10 rv1490 = (p_V).f_C;
return rv1490; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1491; memset(&l_ARGS_1491, 0, sizeof l_ARGS_1491);
l_ARGS_1491 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1492; memset(&l_Y_1492, 0, sizeof l_Y_1492);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1493; memset(&l_SAVED_Q_1493, 0, sizeof l_SAVED_Q_1493);
l_SAVED_Q_1493 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1494; memset(&l_X_1494, 0, sizeof l_X_1494);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1494 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1493;
if ((!(l_X_1494 == NULL)))
{
{
R27 * l_P_1495; memset(&l_P_1495, 0, sizeof l_P_1495);
l_P_1495 = l_X_1494;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1495))).f_NEXT == NULL)) goto L_end1496;
{
l_P_1495 = ((*(R27 *)rt_nil_check(l_P_1495))).f_NEXT;
}
RT_B_TICK();
} L_end1496: ;
((*(R27 *)rt_nil_check(l_P_1495))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1491))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1491))).f_NEXT = l_X_1494;
}
}
}
}
{
R27 * l_LAST_1497; memset(&l_LAST_1497, 0, sizeof l_LAST_1497);
l_LAST_1497 = l_ARGS_1491;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1497))).f_NEXT == NULL)) goto L_end1498;
{
l_LAST_1497 = ((*(R27 *)rt_nil_check(l_LAST_1497))).f_NEXT;
}
RT_B_TICK();
} L_end1498: ;
((*(R27 *)rt_nil_check(l_LAST_1497))).f_MODE = g_M_OUT;
l_Y_1492 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1491, p_LINE, 0);
if ((l_Y_1492 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1497))).f_MODE = g_M_INOUT;
l_Y_1492 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1491, p_LINE, 0);
}
}
if ((l_Y_1492 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1499 = r_CATS((r_CALL_SYM(l_Y_1492, l_ARGS_1491, p_LINE)).f_C, rt_str(";", 1));
return rv1499; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1500 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1500; }
}
}
{ R10 rv1501 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1501; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1502 = 1;
return rv1502; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1503 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1503; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1504; memset(&l_F_1504, 0, sizeof l_F_1504);
l_F_1504 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1504 == NULL)) goto L_end1505;
{
if ((((*(R24 *)rt_nil_check(l_F_1504))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1504))).f_T))
{
{ rt_int rv1506 = 1;
return rv1506; }
}
}
l_F_1504 = ((*(R24 *)rt_nil_check(l_F_1504))).f_NEXT;
}
RT_B_TICK();
} L_end1505: ;
}
}
{ rt_int rv1507 = 0;
return rv1507; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1508 = 0;
return rv1508; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1509 = 0;
return rv1509; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1510 = 0;
return rv1510; }
}
{ rt_int rv1511 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1511; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1512 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1512; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1513; memset(&l_D_1513, 0, sizeof l_D_1513);
S_R10(&l_D_1513, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1514; memset(&l_S_1514, 0, sizeof l_S_1514);
S_R10(&l_S_1514, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1515; memset(&l_I_1515, 0, sizeof l_I_1515);
S_R10(&l_I_1515, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1516; memset(&l_N_1516, 0, sizeof l_N_1516);
S_R10(&l_N_1516, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1517; memset(&l_VE_1517, 0, sizeof l_VE_1517);
l_VE_1517 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1518; memset(&l_R_1518, 0, sizeof l_R_1518);
S_R10(&l_R_1518, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1513, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1518, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1518, l_S_1514, p_RV), 0);
S_R10(&l_R_1518, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1518, l_N_1516, l_D_1513, l_D_1513), 0);
S_R10(&l_R_1518, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1518, l_S_1514, l_S_1514), 0);
S_R10(&l_R_1518, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1518, l_I_1515, l_N_1516, l_D_1513), 0);
S_R10(&l_R_1518, r_FMT2(rt_str("@@->hi);", 8), l_R_1518, l_D_1513), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1518, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1518, l_I_1515, l_I_1515, l_I_1515), 0);
S_R10(&l_R_1518, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1518, l_I_1515, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1514, l_I_1515), r_NO_TEXT())), 0);
}
S_R10(&l_R_1518, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1518, l_I_1515, l_I_1515, l_I_1515), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1518, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1518, l_I_1515, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1517, r_FMT2(rt_str("@->p[@]", 7), l_D_1513, l_I_1515), r_FMT2(rt_str("@.p[@]", 6), l_S_1514, l_I_1515), p_LINE)), 0);
}
else
{
S_R10(&l_R_1518, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1518, l_I_1515, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1513, l_I_1515), r_FMT2(rt_str("@.p[@]", 6), l_S_1514, l_I_1515))), 0);
}
{ R10 rv1519 = l_R_1518;
return rv1519; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1520; memset(&l_D_1520, 0, sizeof l_D_1520);
S_R10(&l_D_1520, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1521; memset(&l_S_1521, 0, sizeof l_S_1521);
S_R10(&l_S_1521, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1522; memset(&l_F_1522, 0, sizeof l_F_1522);
l_F_1522 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1523; memset(&l_R_1523, 0, sizeof l_R_1523);
S_R10(&l_R_1523, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1520, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1523, r_FMT3(rt_str("@@ = @;", 7), l_R_1523, l_S_1521, p_RV), 0);
for (;;) {
if ((l_F_1522 == NULL)) goto L_end1524;
{
{
R10 l_DF_1525; memset(&l_DF_1525, 0, sizeof l_DF_1525);
S_R10(&l_DF_1525, r_FMT2(rt_str("@->@", 4), l_D_1520, ((*(R24 *)rt_nil_check(l_F_1522))).f_CNAME), 0);
R10 l_SF_1526; memset(&l_SF_1526, 0, sizeof l_SF_1526);
S_R10(&l_SF_1526, r_FMT2(rt_str("@.@", 3), l_S_1521, ((*(R24 *)rt_nil_check(l_F_1522))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1522))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1522))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1523, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1523, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1522))).f_T, l_DF_1525, l_SF_1526)), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1522))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1523, r_FMT3(rt_str("@ @ = @;", 8), l_R_1523, l_DF_1525, l_SF_1526), 0);
}
else
{
S_R10(&l_R_1523, r_FMT2(rt_str("@ @", 3), l_R_1523, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1522))).f_T, ((*(R24 *)rt_nil_check(l_F_1522))).f_T, l_DF_1525, l_SF_1526, p_LINE)), 0);
}
}
l_F_1522 = ((*(R24 *)rt_nil_check(l_F_1522))).f_NEXT;
}
RT_B_TICK();
} L_end1524: ;
{ R10 rv1527 = r_CATS(l_R_1523, rt_str(" }", 2));
return rv1527; }
}
}
{ R10 rv1528 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1528; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1529; memset(&l_ARGS_1529, 0, sizeof l_ARGS_1529);
l_ARGS_1529 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1530; memset(&l_Y_1530, 0, sizeof l_Y_1530);
l_Y_1530 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1529, p_LINE);
if ((l_Y_1530 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1531 = (r_CALL_SYM(l_Y_1530, l_ARGS_1529, p_LINE)).f_C;
return rv1531; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1532; memset(&l_X_1532, 0, sizeof l_X_1532);
S_R10(&l_X_1532, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1533; memset(&l_Z_1533, 0, sizeof l_Z_1533);
S_R10(&l_Z_1533, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1534; memset(&l_I_1534, 0, sizeof l_I_1534);
S_R10(&l_I_1534, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1535; memset(&l_N_1535, 0, sizeof l_N_1535);
S_R10(&l_N_1535, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1536; memset(&l_R_1536, 0, sizeof l_R_1536);
S_R10(&l_R_1536, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1532, p_A, l_Z_1533), 0);
S_R10(&l_R_1536, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1536, p_B, l_I_1534, l_N_1535), 0);
S_R10(&l_R_1536, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1536, l_X_1532, l_X_1532, l_Z_1533), 0);
S_R10(&l_R_1536, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1536, l_Z_1533, l_I_1534, l_N_1535), 0);
S_R10(&l_R_1536, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1536, l_X_1532, l_X_1532), 0);
S_R10(&l_R_1536, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1536, l_I_1534, l_I_1534, l_I_1534), 0);
S_R10(&l_R_1536, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1536, l_I_1534, l_I_1534, l_I_1534), 0);
S_R10(&l_R_1536, r_FMT2(rt_str("@@;", 3), l_R_1536, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1532, l_I_1534), r_FMT2(rt_str("@.p[@]", 6), l_Z_1533, l_I_1534), p_LINE)), 0);
{ R10 rv1537 = r_FMT2(rt_str("@ @r; })", 8), l_R_1536, l_I_1534);
return rv1537; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1538; memset(&l_X_1538, 0, sizeof l_X_1538);
S_R10(&l_X_1538, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1539; memset(&l_Z_1539, 0, sizeof l_Z_1539);
S_R10(&l_Z_1539, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1540; memset(&l_F_1540, 0, sizeof l_F_1540);
l_F_1540 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1541; memset(&l_R_1541, 0, sizeof l_R_1541);
S_R10(&l_R_1541, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1538, p_A, l_Z_1539), 0);
R10 l_EQ_1542; memset(&l_EQ_1542, 0, sizeof l_EQ_1542);
S_R10(&l_EQ_1542, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1541, r_FMT2(rt_str("@@;", 3), l_R_1541, p_B), 0);
for (;;) {
if ((l_F_1540 == NULL)) goto L_end1543;
{
{
R10 l_C_1544; memset(&l_C_1544, 0, sizeof l_C_1544);
S_R10(&l_C_1544, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1540))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1538, ((*(R24 *)rt_nil_check(l_F_1540))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1539, ((*(R24 *)rt_nil_check(l_F_1540))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1540))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1542, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1542, r_VARIANT_COND(l_F_1540, p_T, l_X_1538), l_C_1544), 0);
}
else
{
S_R10(&l_EQ_1542, r_FMT2(rt_str("@ && @", 6), l_EQ_1542, l_C_1544), 0);
}
}
l_F_1540 = ((*(R24 *)rt_nil_check(l_F_1540))).f_NEXT;
}
RT_B_TICK();
} L_end1543: ;
{ R10 rv1545 = r_FMT2(rt_str("@ @; })", 7), l_R_1541, l_EQ_1542);
return rv1545; }
}
}
{ R10 rv1546 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1546; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1547; memset(&l_A_1547, 0, sizeof l_A_1547);
S_R26(&l_A_1547, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1548; memset(&l_T_1548, 0, sizeof l_T_1548);
l_T_1548 = (l_A_1547).f_T;
R10 l_OP_1549; memset(&l_OP_1549, 0, sizeof l_OP_1549);
S_R10(&l_OP_1549, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1548))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1549, 1), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1548))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1549, 1))))
{
{
R27 * l_ARGS_1550; memset(&l_ARGS_1550, 0, sizeof l_ARGS_1550);
l_ARGS_1550 = r_VAL_ARG(l_A_1547, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1551; memset(&l_Y_1551, 0, sizeof l_Y_1551);
l_Y_1551 = r_USER_OPERATOR(r_OP_NAME(l_OP_1549, 1), l_ARGS_1550, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1551 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1550))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1550))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1549, 1), l_ARGS_1550, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1549, 1));
}
}
if ((!(l_Y_1551 == NULL)))
{
{ R26 rv1552 = r_CALL_SYM(l_Y_1551, l_ARGS_1550, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1552; }
}
if ((((*(R22 *)rt_nil_check(l_T_1548))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1548));
}
}
}
if (r_TEQS(l_OP_1549, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1548))).f_KIND == g_T_BOOL))
{
{ R26 rv1553 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1547).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1553; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1548))).f_KIND == g_T_BITS))
{
{ R26 rv1554 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1547).f_C), l_T_1548);
return rv1554; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1548))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1549, rt_str("-", 1)))
{
{ R26 rv1555 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1547).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1548))).f_SCALE));
return rv1555; }
}
{ R26 rv1556 = r_MKET((l_A_1547).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1548))).f_SCALE));
return rv1556; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1548))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1557; memset(&l_FT_1557, 0, sizeof l_FT_1557);
l_FT_1557 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1548))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1549, rt_str("-", 1)))
{
{ R26 rv1558 = r_MKET(r_FLOAT_OP(l_OP_1549, r_MK(rt_str("0.0", 3)), (l_A_1547).f_C, l_FT_1557), l_FT_1557);
return rv1558; }
}
{ R26 rv1559 = r_MKET((l_A_1547).f_C, l_FT_1557);
return rv1559; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1548));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1560 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1560; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1561; memset(&l_OP_1561, 0, sizeof l_OP_1561);
S_R10(&l_OP_1561, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1562; memset(&l_A_1562, 0, sizeof l_A_1562);
R26 l_B_1563; memset(&l_B_1563, 0, sizeof l_B_1563);
if ((r_TEQS(l_OP_1561, rt_str("&", 1)) || r_TEQS(l_OP_1561, rt_str("!", 1))))
{
{
R23 l_MA_1564; memset(&l_MA_1564, 0, sizeof l_MA_1564);
S_R23(&l_MA_1564, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1565; memset(&l_CA_1565, 0, sizeof l_CA_1565);
S_R10(&l_CA_1565, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1566; memset(&l_CB_1566, 0, sizeof l_CB_1566);
S_R10(&l_CB_1566, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1561, rt_str("&", 1)))
{
{ R26 rv1567 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1565, l_CB_1566), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1567; }
}
{ R26 rv1568 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1565, l_CB_1566), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1568; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1563, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1562, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1563).f_T), 0);
}
else
{
S_R26(&l_A_1562, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1563, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1562).f_T), 0);
}
{ R26 rv1569 = r_APPLY_OPERATOR(p_E, l_OP_1561, l_A_1562, l_B_1563);
return rv1569; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1570; memset(&l_AT_1570, 0, sizeof l_AT_1570);
l_AT_1570 = (p_A).f_T;
R22 * l_BT_1571; memset(&l_BT_1571, 0, sizeof l_BT_1571);
l_BT_1571 = (p_B).f_T;
rt_int l_LINE_1572; memset(&l_LINE_1572, 0, sizeof l_LINE_1572);
l_LINE_1572 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1573; memset(&l_NAME_1573, 0, sizeof l_NAME_1573);
S_R10(&l_NAME_1573, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1573, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1573, (l_NAME_1573).f_LEN))), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1570))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1571))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1573, l_LINE_1572);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1573) || (((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1574; memset(&l_ARGS_1574, 0, sizeof l_ARGS_1574);
l_ARGS_1574 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1575; memset(&l_EXTRA_1575, 0, sizeof l_EXTRA_1575);
l_EXTRA_1575 = r_QUAL_ARGS(l_LINE_1572);
R12 * l_Y_1576; memset(&l_Y_1576, 0, sizeof l_Y_1576);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1575 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1575);
}
if ((!(l_EXTRA_1575 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1574))).f_NEXT))).f_NEXT = l_EXTRA_1575;
l_Y_1576 = r_USER_OPERATOR(l_NAME_1573, l_ARGS_1574, l_LINE_1572);
if ((!(l_Y_1576 == NULL)))
{
{ R26 rv1577 = r_CALL_SYM(l_Y_1576, l_ARGS_1574, l_LINE_1572);
return rv1577; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1574))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1573, l_ARGS_1574, l_LINE_1572) == NULL)))
{
r_FAILT(l_LINE_1572, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1573);
}
}
else
{
l_Y_1576 = r_USER_OPERATOR(l_NAME_1573, l_ARGS_1574, l_LINE_1572);
if ((!(l_Y_1576 == NULL)))
{
{ R26 rv1578 = r_CALL_SYM(l_Y_1576, l_ARGS_1574, l_LINE_1572);
return rv1578; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1579; memset(&l_Q_1579, 0, sizeof l_Q_1579);
l_Q_1579 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1574, l_LINE_1572);
if ((!(l_Q_1579 == NULL)))
{
{ R26 rv1580 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1579, l_ARGS_1574, l_LINE_1572)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1580; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1572, rt_str("no such operation for the abstract type: ", 41), l_NAME_1573);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1572, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1581 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1581; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1582 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1582; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_INT)))
{
{ R26 rv1583 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1583; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1584 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1584; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1570, l_BT_1571)))
{
if ((r_IS_UNORDERED(l_AT_1570) || r_IS_UNORDERED(l_BT_1571)))
{
r_FAIL(l_LINE_1572, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1585 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1585; }
}
r_FAILT(l_LINE_1572, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1570, l_BT_1571, l_LINE_1572);
{
R22 * l_T_1586; memset(&l_T_1586, 0, sizeof l_T_1586);
l_T_1586 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1586))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1570))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1570))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1571))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1586))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1570))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1571))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1586))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1586))).f_MLEN).f_V), 0);
}
{ R26 rv1587 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1586);
return rv1587; }
}
}
r_FAIL(l_LINE_1572, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_BITS)))
{
{ R26 rv1588 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1570);
return rv1588; }
}
r_FAILT(l_LINE_1572, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_INT)))
{
{ R26 rv1589 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1589; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1590; memset(&l_T_1590, 0, sizeof l_T_1590);
l_T_1590 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1570))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1571))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1591 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1590), l_T_1590);
return rv1591; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1572, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1570))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1571))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1572, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1572, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1570), (r_TYPE_NAME(l_AT_1570)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1592; memset(&l_RA_1592, 0, sizeof l_RA_1592);
l_RA_1592 = r_REAL_TYPE(p_A);
R22 * l_RB_1593; memset(&l_RB_1593, 0, sizeof l_RB_1593);
l_RB_1593 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1594 = 1;
return rv1594; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1595 = 0;
return rv1595; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1592))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1592))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1592))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1593))).f_MLEN).f_OK))
{
{ rt_int rv1596 = ((((*(R22 *)rt_nil_check(l_RA_1592))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1593))).f_MLEN).f_V);
return rv1596; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1592))).f_KIND == g_T_ARR))
{
{ rt_int rv1597 = (r_SAME_EXTENTS(l_RA_1592, l_RB_1593) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1592))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1593))).f_ELEM));
return rv1597; }
}
{ rt_int rv1598 = 1;
return rv1598; }
rt_raise(RT_X_INIT);
}
static R10 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R10 p_C) { RT_B_TICK(); 
R22 * l_A_1599; memset(&l_A_1599, 0, sizeof l_A_1599);
l_A_1599 = r_REAL_TYPE(p_RT);
R22 * l_B_1600; memset(&l_B_1600, 0, sizeof l_B_1600);
l_B_1600 = r_REAL_TYPE(p_VT);
R10 l_R_1601; memset(&l_R_1601, 0, sizeof l_R_1601);
S_R10(&l_R_1601, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1599))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1600))).f_KIND == g_T_REC))))
{
{ R10 rv1602 = p_C;
return rv1602; }
}
{
R24 * l_F_1603; memset(&l_F_1603, 0, sizeof l_F_1603);
l_F_1603 = ((*(R22 *)rt_nil_check(l_A_1599))).f_FIELDS;
R25 * l_P_1604; memset(&l_P_1604, 0, sizeof l_P_1604);
l_P_1604 = ((*(R22 *)rt_nil_check(l_A_1599))).f_ARGS;
R25 * l_Q_1605; memset(&l_Q_1605, 0, sizeof l_Q_1605);
l_Q_1605 = ((*(R22 *)rt_nil_check(l_B_1600))).f_ARGS;
for (;;) {
if ((((l_F_1603 == NULL) || (l_P_1604 == NULL)) || (l_Q_1605 == NULL))) goto L_end1606;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1603))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1604))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1604))) && (!r_IS_GEN_ARG(l_Q_1605))) && (!(((((*(R25 *)rt_nil_check(l_P_1604))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1605))).f_MLO).f_OK)))))
{
S_R10(&l_R_1601, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1601, ((*(R24 *)rt_nil_check(l_F_1603))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1604))).f_LO), 0);
}
l_P_1604 = ((*(R25 *)rt_nil_check(l_P_1604))).f_NEXT;
l_Q_1605 = ((*(R25 *)rt_nil_check(l_Q_1605))).f_NEXT;
}
l_F_1603 = ((*(R24 *)rt_nil_check(l_F_1603))).f_NEXT;
}
RT_B_TICK();
} L_end1606: ;
}
if (((l_R_1601).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1607 = p_C;
return rv1607; }
}
{ R10 rv1608 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1601);
return rv1608; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1609; memset(&l_P_1609, 0, sizeof l_P_1609);
l_P_1609 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1610; memset(&l_Q_1610, 0, sizeof l_Q_1610);
l_Q_1610 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1609 == NULL) || (l_Q_1610 == NULL))) goto L_end1611;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1609))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1609))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1610))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1610))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1609))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1609))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1610))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1610))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1609))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1609))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1610))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1610))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1612 = 0;
return rv1612; }
}
}
l_P_1609 = ((*(R25 *)rt_nil_check(l_P_1609))).f_NEXT;
l_Q_1610 = ((*(R25 *)rt_nil_check(l_Q_1610))).f_NEXT;
}
RT_B_TICK();
} L_end1611: ;
{ rt_int rv1613 = 1;
return rv1613; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1614 = 0;
return rv1614; }
}
{ rt_int rv1615 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1615; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1616; memset(&l_T_1616, 0, sizeof l_T_1616);
l_T_1616 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1616))).f_SCALE = p_P;
{ R22 * rv1617 = l_T_1616;
return rv1617; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1618 = r_MK(rt_str("1", 1));
return rv1618; }
}
{ R10 rv1619 = r_MK(rt_str("0", 1));
return rv1619; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1620 = r_MK(rt_str("1", 1));
return rv1620; }
}
}
{ R10 rv1621 = r_MK(rt_str("0", 1));
return rv1621; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1622 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1622; }
}
}
{ rt_int rv1623 = ((rt_int)0LL);
return rv1623; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1624 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1624; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1625 = r_MK(rt_str("and", 3));
return rv1625; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1626 = r_MK(rt_str("or", 2));
return rv1626; }
}
{ R10 rv1627 = r_MK(rt_str("xor", 3));
return rv1627; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1628 = p_A;
return rv1628; }
}
{ rt_int rv1629 = p_B;
return rv1629; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1630 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1630; }
}
{ R10 rv1631 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1631; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1632; memset(&l_AT_1632, 0, sizeof l_AT_1632);
l_AT_1632 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1633; memset(&l_BT_1633, 0, sizeof l_BT_1633);
l_BT_1633 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1634; memset(&l_R_1634, 0, sizeof l_R_1634);
if (((((*(R22 *)rt_nil_check(l_AT_1632))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1633))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1632))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1633))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1632))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1633))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1634, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1632))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1633))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1634, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1632, l_BT_1633)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1632))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1632, l_BT_1633, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1632))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1632) || r_HAS_ANY(l_BT_1633)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1632))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1632, l_BT_1633)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1632))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1632))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1633))).f_ARGS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1632))
{
S_R10(&l_R_1634, r_COMPONENT_EQUAL(l_AT_1632, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1634, r_EQUAL_CODE(l_AT_1632, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1634, r_FMT1(rt_str("(!@)", 4), l_R_1634), 0);
}
{ R26 rv1635 = r_MKET(l_R_1634, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1635; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1636; memset(&l_S1_1636, 0, sizeof l_S1_1636);
l_S1_1636 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1637; memset(&l_S2_1637, 0, sizeof l_S2_1637);
l_S2_1637 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1638; memset(&l_S_1638, 0, sizeof l_S_1638);
l_S_1638 = r_MAX_INT(l_S1_1636, l_S2_1637);
R10 l_FN_1639; memset(&l_FN_1639, 0, sizeof l_FN_1639);
S_R10(&l_FN_1639, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1639, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1640 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1639, r_RESCALE_C((p_A).f_C, l_S1_1636, l_S_1638), r_RESCALE_C((p_B).f_C, l_S2_1637, l_S_1638)), r_INT_TYPE(l_S_1638));
return rv1640; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1641 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1636, l_S2_1637)));
return rv1641; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1642 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1636, l_S2_1637)));
return rv1642; }
}
{ R26 rv1643 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1636, l_S2_1637)));
return rv1643; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1644 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1636));
return rv1644; }
}
{ R26 rv1645 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1636));
return rv1645; }
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
rt_int l_S1_1646; memset(&l_S1_1646, 0, sizeof l_S1_1646);
l_S1_1646 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1647; memset(&l_S2_1647, 0, sizeof l_S2_1647);
l_S2_1647 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1648; memset(&l_RND_1648, 0, sizeof l_RND_1648);
S_R10(&l_RND_1648, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1649 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1649; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1648, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1650 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1650; }
}
{
R23 l_SM_1651; memset(&l_SM_1651, 0, sizeof l_SM_1651);
S_R23(&l_SM_1651, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1652; memset(&l_S_1652, 0, sizeof l_S_1652);
l_S_1652 = (l_SM_1651).f_V;
rt_int l_SR_1653; memset(&l_SR_1653, 0, sizeof l_SR_1653);
l_SR_1653 = r_MAX_INT(l_S1_1646, l_S2_1647);
if ((!(l_SM_1651).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1654 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1652, l_S1_1646), l_S2_1647)), l_RND_1648), r_INT_TYPE(l_S_1652));
return rv1654; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1655 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1652, l_S1_1646), l_S2_1647)), l_RND_1648), r_INT_TYPE(l_S_1652));
return rv1655; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1656 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1646), r_NUM(l_S_1652), l_RND_1648), r_INT_TYPE(l_S_1652));
return rv1656; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1657; memset(&l_SUB_1657, 0, sizeof l_SUB_1657);
S_R10(&l_SUB_1657, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1657, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1658 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1646), (p_B).f_C, r_NUM(l_S2_1647)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1652), l_SUB_1657, l_RND_1648)), r_INT_TYPE(l_S_1652));
return rv1658; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1659; memset(&l_V_1659, 0, sizeof l_V_1659);
S_R26(&l_V_1659, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1660; memset(&l_T_1660, 0, sizeof l_T_1660);
l_T_1660 = r_REAL_TYPE((l_V_1659).f_T);
R21 * l_R_1661; memset(&l_R_1661, 0, sizeof l_R_1661);
l_R_1661 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1662; memset(&l_TMP_1662, 0, sizeof l_TMP_1662);
S_R10(&l_TMP_1662, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1663; memset(&l_LO_1663, 0, sizeof l_LO_1663);
R26 l_HI_1664; memset(&l_HI_1664, 0, sizeof l_HI_1664);
R10 l_LOC_1665; memset(&l_LOC_1665, 0, sizeof l_LOC_1665);
R10 l_HIC_1666; memset(&l_HIC_1666, 0, sizeof l_HIC_1666);
R10 l_LO_OP_1667; memset(&l_LO_OP_1667, 0, sizeof l_LO_OP_1667);
S_R10(&l_LO_OP_1667, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1668; memset(&l_HI_OP_1668, 0, sizeof l_HI_OP_1668);
S_R10(&l_HI_OP_1668, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1663, r_EXPR(((*(R21 *)rt_nil_check(l_R_1661))).f_A, l_T_1660), 0);
S_R26(&l_HI_1664, r_EXPR(((*(R21 *)rt_nil_check(l_R_1661))).f_B, l_T_1660), 0);
if (r_IS_UNORDERED(l_T_1660))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1660))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1660))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1660))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1663).f_T), l_T_1660)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1664).f_T), l_T_1660))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1661))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1661))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1667, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1661))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1668, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1660))).f_KIND == g_T_INT))
{
{
R26 l_X_1669; memset(&l_X_1669, 0, sizeof l_X_1669);
S_R26(&l_X_1669, r_MKET(l_TMP_1662, (l_V_1659).f_T), 0);
S_R10(&l_LOC_1665, r_FIXED_COMPARE(l_LO_1663, l_X_1669, l_LO_OP_1667), 0);
S_R10(&l_HIC_1666, r_FIXED_COMPARE(l_X_1669, l_HI_1664, l_HI_OP_1668), 0);
}
}
else
{
S_R10(&l_LOC_1665, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1663).f_C, l_LO_OP_1667, l_TMP_1662), 0);
S_R10(&l_HIC_1666, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1662, l_HI_OP_1668, (l_HI_1664).f_C), 0);
}
{ R26 rv1670 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1660), l_TMP_1662, (l_V_1659).f_C, l_LOC_1665), r_FMT1(rt_str("@; })", 5), l_HIC_1666)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1670; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1671 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1671; }
}
{ R10 rv1672 = (p_V).f_C;
return rv1672; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1673 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1673; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1674; memset(&l_B_1674, 0, sizeof l_B_1674);
l_B_1674 = ((rt_int)0LL);
rt_int l_P_1675; memset(&l_P_1675, 0, sizeof l_P_1675);
l_P_1675 = ((rt_int)1LL);
for (;;) {
if ((l_P_1675 >= p_N)) goto L_end1676;
{
l_B_1674 = rt_add(l_B_1674, ((rt_int)1LL));
l_P_1675 = rt_mul(l_P_1675, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1676: ;
{ rt_int rv1677 = l_B_1674;
return rv1677; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1678; memset(&l_M_1678, 0, sizeof l_M_1678);
S_R23(&l_M_1678, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1678).f_OK)
{
{ rt_int rv1679 = (l_M_1678).f_V;
return rv1679; }
}
}
}
}
{ rt_int rv1680 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1680; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1681 = ((rt_int)100000000LL);
return rv1681; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1682 = ((rt_int)15LL);
return rv1682; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1683 = ((rt_int)7LL);
return rv1683; }
}
{ rt_int rv1684 = ((rt_int)15LL);
return rv1684; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1685; memset(&l_SINGLE_1685, 0, sizeof l_SINGLE_1685);
l_SINGLE_1685 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1685)
{
{ rt_int rv1686 = rt_neg(((rt_int)125LL));
return rv1686; }
}
{ rt_int rv1687 = rt_neg(((rt_int)1021LL));
return rv1687; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1685)
{
{ rt_int rv1688 = ((rt_int)128LL);
return rv1688; }
}
{ rt_int rv1689 = ((rt_int)1024LL);
return rv1689; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1685)
{
{ rt_int rv1690 = ((rt_int)25LL);
return rv1690; }
}
{ rt_int rv1691 = ((rt_int)54LL);
return rv1691; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1685)
{
{ rt_int rv1692 = ((rt_int)8LL);
return rv1692; }
}
{ rt_int rv1693 = ((rt_int)11LL);
return rv1693; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1685)
{
{ rt_int rv1694 = ((rt_int)32LL);
return rv1694; }
}
{ rt_int rv1695 = ((rt_int)64LL);
return rv1695; }
}
{ rt_int rv1696 = ((rt_int)0LL);
return rv1696; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1697; memset(&l_K_1697, 0, sizeof l_K_1697);
l_K_1697 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1697 == g_T_ABS))
{
{ R23 rv1698 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1698; }
}
else if ((l_K_1697 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1699 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1699; }
}
}
{ R23 rv1700 = r_SOME(((rt_int)64LL));
return rv1700; }
}
else if ((l_K_1697 == g_T_FLOAT))
{
{ R23 rv1701 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1701; }
}
else if ((l_K_1697 == g_T_BOOL))
{
{ R23 rv1702 = r_SOME(((rt_int)1LL));
return rv1702; }
}
else if ((l_K_1697 == g_T_ENUM))
{
{ R23 rv1703 = r_SOME(r_ENUM_SIZE(p_T));
return rv1703; }
}
else if ((l_K_1697 == g_T_BITS))
{
{ R23 rv1704 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1704; }
}
else if ((l_K_1697 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1705 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1705; }
}
}
else if (((l_K_1697 == g_T_PTR) || (l_K_1697 == g_T_SEM)))
{
{ R23 rv1706 = r_SOME(((rt_int)64LL));
return rv1706; }
}
{ R23 rv1707 = r_NO_MVAL();
return rv1707; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1708; memset(&l_T_1708, 0, sizeof l_T_1708);
l_T_1708 = (p_B).f_T;
rt_int l_K_1709; memset(&l_K_1709, 0, sizeof l_K_1709);
l_K_1709 = ((*(R22 *)rt_nil_check(l_T_1708))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1710 = r_SIZE_OF(l_T_1708, (p_B).f_C);
return rv1710; }
}
if ((l_K_1709 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1711 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE);
return rv1711; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1712 = r_INT_ET(((rt_int)2LL));
return rv1712; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1713 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1713; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1708))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1708))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1708))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1708))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1708))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv1714 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1714; }
}
}
}
}
{ R26 rv1715 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1715; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1716 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE));
return rv1716; }
}
{ R26 rv1717 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE));
return rv1717; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1708))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1718 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1708))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE));
return rv1718; }
}
{ R26 rv1719 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE));
return rv1719; }
}
}
else if ((l_K_1709 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1720 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE);
return rv1720; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1721 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE));
return rv1721; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1722 = r_INT_ET(((rt_int)2LL));
return rv1722; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1723 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE, p_NAME));
return rv1723; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1724; memset(&l_MT_1724, 0, sizeof l_MT_1724);
l_MT_1724 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE));
R10 l_C_1725; memset(&l_C_1725, 0, sizeof l_C_1725);
S_R10(&l_C_1725, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1725, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1726 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C, (p_B).f_SELF), l_MT_1724);
return rv1726; }
}
{ R26 rv1727 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1725), l_MT_1724);
return rv1727; }
}
if (((((*(R22 *)rt_nil_check(l_T_1708))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1728 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1708))).f_HI_C, (p_B).f_SELF), l_MT_1724);
return rv1728; }
}
{ R26 rv1729 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1725), l_MT_1724);
return rv1729; }
}
}
}
else if ((l_K_1709 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1730 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1708))).f_BASE);
return rv1730; }
}
{ R26 rv1731 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1708))).f_BASE);
return rv1731; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1708))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1732 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1708))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1708))).f_BASE);
return rv1732; }
}
{ R26 rv1733 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1708))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1708))).f_BASE);
return rv1733; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1734 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1708))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1708))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1708))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1734; }
}
{ R26 rv1735 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1708))).f_BASE))).f_NLITS);
return rv1735; }
}
}
else if (((l_K_1709 == g_T_STR) || (l_K_1709 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1736 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1736; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1737 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1737; }
}
}
else if ((l_K_1709 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1738 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1708))).f_DIMS);
return rv1738; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1739 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1739; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1740 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1740; }
}
}
else if ((l_K_1709 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1708))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1741 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1741; }
}
{ R26 rv1742 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1742; }
}
}
else if (((l_K_1709 == g_T_ABS) || (l_K_1709 == g_T_REC)))
{
{
R22 * l_U_1743; memset(&l_U_1743, 0, sizeof l_U_1743);
l_U_1743 = l_T_1708;
if ((l_K_1709 == g_T_ABS))
{
l_U_1743 = ((*(R22 *)rt_nil_check(l_T_1708))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1743))).f_KIND == g_T_REC))
{
{
R24 * l_F_1744; memset(&l_F_1744, 0, sizeof l_F_1744);
l_F_1744 = r_FIND_FIELD(l_U_1743, p_NAME);
if ((!(l_F_1744 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1744))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1745 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1744))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1744))).f_T);
return rv1745; }
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
R22 * l_T_1746; memset(&l_T_1746, 0, sizeof l_T_1746);
l_T_1746 = r_REAL_TYPE((p_B).f_T);
R10 l_D_1747; memset(&l_D_1747, 0, sizeof l_D_1747);
S_R10(&l_D_1747, r_NUM(((*(R22 *)rt_nil_check(l_T_1746))).f_DIMS), 0);
R10 l_X_1748; memset(&l_X_1748, 0, sizeof l_X_1748);
S_R10(&l_X_1748, r_NEW_NAME(rt_str("sx", 2)), 0);
R10 l_R_1749; memset(&l_R_1749, 0, sizeof l_R_1749);
S_R10(&l_R_1749, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1750; memset(&l_ELEM_1750, 0, sizeof l_ELEM_1750);
l_ELEM_1750 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R10 l_C_1751; memset(&l_C_1751, 0, sizeof l_C_1751);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R21 * l_TS_1752; memset(&l_TS_1752, 0, sizeof l_TS_1752);
l_TS_1752 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_TS_1752))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R21 *)rt_nil_check(l_TS_1752))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_TS_1752))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1750 = r_RESOLVE(l_TS_1752);
}
}
{
R22 * l_A_1753; memset(&l_A_1753, 0, sizeof l_A_1753);
l_A_1753 = r_ARRAY_OF(l_ELEM_1750, ((rt_int)1LL));
S_R10(&l_C_1751, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1746), l_X_1748, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1753))).f_CNAME), 0);
S_R10(&l_C_1751, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1751, l_R_1749, l_R_1749, l_R_1749), 0);
S_R10(&l_C_1751, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1751, l_R_1749, l_R_1749, l_D_1747), 0);
S_R10(&l_C_1751, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1751, l_R_1749, l_D_1747, l_R_1749), 0);
S_R10(&l_C_1751, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1751, l_D_1747), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R10(&l_C_1751, r_FMT2(rt_str("@ @", 3), l_C_1751, r_INIT_CODE(l_ELEM_1750, r_FMT1(rt_str("@.p[i]", 6), l_R_1749))), 0);
S_R10(&l_C_1751, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1751, l_R_1749, l_X_1748, l_R_1749), 0);
S_R10(&l_C_1751, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1751, l_X_1748), 0);
}
else
{
S_R10(&l_C_1751, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1751, l_R_1749, l_X_1748, l_X_1748), 0);
S_R10(&l_C_1751, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1751, l_X_1748, l_X_1748, l_X_1748), 0);
}
{ R26 rv1754 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1751, l_R_1749), l_A_1753);
return rv1754; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1755; memset(&l_N_1755, 0, sizeof l_N_1755);
l_N_1755 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1755))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1756 = l_N_1755;
return rv1756; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1757; memset(&l_K_1757, 0, sizeof l_K_1757);
l_K_1757 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1757 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1758 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1758; }
}
}
{ R26 rv1759 = r_INT_ET(((rt_int)64LL));
return rv1759; }
}
else if ((l_K_1757 == g_T_FLOAT))
{
{ R26 rv1760 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1760; }
}
else if ((l_K_1757 == g_T_BOOL))
{
{ R26 rv1761 = r_INT_ET(((rt_int)1LL));
return rv1761; }
}
else if ((l_K_1757 == g_T_ENUM))
{
{ R26 rv1762 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1762; }
}
else if ((l_K_1757 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1763 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1763; }
}
{ R26 rv1764 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1764; }
}
else if ((l_K_1757 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1765 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1765; }
}
{ R26 rv1766 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1766; }
}
else if (((l_K_1757 == g_T_PTR) || (l_K_1757 == g_T_SEM)))
{
{ R26 rv1767 = r_INT_ET(((rt_int)64LL));
return rv1767; }
}
else if ((l_K_1757 == g_T_ABS))
{
{ R26 rv1768 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1768; }
}
else if ((l_K_1757 == g_T_ARR))
{
{ R26 rv1769 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1769; }
}
{ R26 rv1770 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1770; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1771 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1771; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1772 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1772; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1773; memset(&l_RT_1773, 0, sizeof l_RT_1773);
l_RT_1773 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1773))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1773))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1774; memset(&l_TMP_1774, 0, sizeof l_TMP_1774);
S_R10(&l_TMP_1774, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1775; memset(&l_C_1775, 0, sizeof l_C_1775);
S_R10(&l_C_1775, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1774, l_TMP_1774, l_TMP_1774), 0);
S_R10(&l_C_1775, r_FMT3(rt_str("@@ @; })", 8), l_C_1775, r_INIT_CODE(l_RT_1773, l_TMP_1774), l_TMP_1774), 0);
{ R26 rv1776 = r_MKET(l_C_1775, p_T);
return rv1776; }
}
}
{ R26 rv1777 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1777; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1778 = 0;
return rv1778; }
}
{
R12 * l_Y_1779; memset(&l_Y_1779, 0, sizeof l_Y_1779);
l_Y_1779 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1779 == NULL))
{
{ rt_int rv1780 = 0;
return rv1780; }
}
{ rt_int rv1781 = (((*(R12 *)rt_nil_check(l_Y_1779))).f_KIND == g_Y_TYPE);
return rv1781; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1782 = r_INT_ET(((rt_int)100000000LL));
return rv1782; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1783 = r_INT_ET(((rt_int)15LL));
return rv1783; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1784 = r_INT_ET(((rt_int)0LL));
return rv1784; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1785; memset(&l_T_1785, 0, sizeof l_T_1785);
l_T_1785 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1785 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1785 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1785 = r_REAL_TYPE(l_T_1785);
if ((!(((*(R22 *)rt_nil_check(l_T_1785))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1785))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1786; memset(&l_TMP_1786, 0, sizeof l_TMP_1786);
S_R10(&l_TMP_1786, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1787; memset(&l_R_1787, 0, sizeof l_R_1787);
S_R10(&l_R_1787, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1785))).f_CNAME, l_TMP_1786, l_TMP_1786, l_TMP_1786), 0);
R24 * l_F_1788; memset(&l_F_1788, 0, sizeof l_F_1788);
l_F_1788 = ((*(R22 *)rt_nil_check(l_T_1785))).f_FIELDS;
S_R10(&l_R_1787, r_FMT2(rt_str("@@", 2), l_R_1787, r_INIT_CODE(l_T_1785, l_TMP_1786)), 0);
for (;;) {
if ((l_F_1788 == NULL)) goto L_end1789;
{
if ((((*(R24 *)rt_nil_check(l_F_1788))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1788))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1788))).f_LABELS, (r_TAG_VALUE(l_T_1785, ((*(R24 *)rt_nil_check(l_F_1788))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1785, ((*(R24 *)rt_nil_check(l_F_1788))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1790; memset(&l_INIT_1790, 0, sizeof l_INIT_1790);
l_INIT_1790 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1788))).f_NAME);
if ((l_INIT_1790 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1788))).f_NAME);
}
S_R10(&l_R_1787, r_FMT2(rt_str("@ @", 3), l_R_1787, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1788))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1786, ((*(R24 *)rt_nil_check(l_F_1788))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1790))).f_A, ((*(R24 *)rt_nil_check(l_F_1788))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1790))).f_LINE, l_TMP_1786)), 0);
}
}
}
l_F_1788 = ((*(R24 *)rt_nil_check(l_F_1788))).f_NEXT;
}
RT_B_TICK();
} L_end1789: ;
{
R21 * l_P_1791; memset(&l_P_1791, 0, sizeof l_P_1791);
l_P_1791 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1791 == NULL)) goto L_end1792;
{
{
R24 * l_G_1793; memset(&l_G_1793, 0, sizeof l_G_1793);
l_G_1793 = r_FIND_VFIELD(l_T_1785, ((*(R21 *)rt_nil_check(l_P_1791))).f_NAME);
if ((l_G_1793 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1791))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1791))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1793))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1791))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1791))).f_NAME);
}
r_CHECK_VARIANT(l_G_1793, l_T_1785, NULL, ((*(R21 *)rt_nil_check(l_P_1791))).f_LINE);
}
l_P_1791 = ((*(R21 *)rt_nil_check(l_P_1791))).f_NEXT;
}
RT_B_TICK();
} L_end1792: ;
}
{ R26 rv1794 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1787, l_TMP_1786), l_T_1785);
return rv1794; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1795; memset(&l_P_1795, 0, sizeof l_P_1795);
l_P_1795 = p_L;
for (;;) {
if ((l_P_1795 == NULL)) goto L_end1796;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1795))).f_NAME, p_NAME))
{
{ R21 * rv1797 = l_P_1795;
return rv1797; }
}
l_P_1795 = ((*(R21 *)rt_nil_check(l_P_1795))).f_NEXT;
}
RT_B_TICK();
} L_end1796: ;
{ R21 * rv1798 = NULL;
return rv1798; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1799; memset(&l_DIMS_1799, 0, sizeof l_DIMS_1799);
l_DIMS_1799 = ((rt_int)0LL);
R21 * l_P_1800; memset(&l_P_1800, 0, sizeof l_P_1800);
l_P_1800 = p_E;
R22 * l_ELEM_1801; memset(&l_ELEM_1801, 0, sizeof l_ELEM_1801);
l_ELEM_1801 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1800))).f_KIND == g_N_ARRCONS))) goto L_end1802;
{
l_DIMS_1799 = rt_add(l_DIMS_1799, ((rt_int)1LL));
l_P_1800 = ((*(R21 *)rt_nil_check(l_P_1800))).f_A;
}
RT_B_TICK();
} L_end1802: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1801 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1801 == NULL))
{
l_ELEM_1801 = (r_EXPR(l_P_1800, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1801))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1801))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1801 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1799);
{
R22 * l_A_1803; memset(&l_A_1803, 0, sizeof l_A_1803);
l_A_1803 = r_ARRAY_OF(l_ELEM_1801, l_DIMS_1799);
R10 l_TMP_1804; memset(&l_TMP_1804, 0, sizeof l_TMP_1804);
S_R10(&l_TMP_1804, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1805; memset(&l_R_1805, 0, sizeof l_R_1805);
S_R10(&l_R_1805, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1803))).f_CNAME, l_TMP_1804, l_TMP_1804), 0);
rt_int l_K_1806; memset(&l_K_1806, 0, sizeof l_K_1806);
l_K_1806 = ((rt_int)0LL);
{
R21 * l_Q_1807; memset(&l_Q_1807, 0, sizeof l_Q_1807);
l_Q_1807 = p_E;
R25 * l_TAIL_1808; memset(&l_TAIL_1808, 0, sizeof l_TAIL_1808);
l_TAIL_1808 = NULL;
{ rt_int it1810_lo = ((rt_int)1LL), it1810_hi = l_DIMS_1799;
for (rt_int it1810 = it1810_lo; it1810 <= it1810_hi; it1810++) {
{
{
R25 * l_B_1811; memset(&l_B_1811, 0, sizeof l_B_1811);
l_B_1811 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_1812; memset(&l_N_1812, 0, sizeof l_N_1812);
l_N_1812 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_Q_1807))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1811)), ({ R25 rc1813; memset(&rc1813, 0, sizeof rc1813);  S_R10(&rc1813.f_LO, r_MK(rt_str("0", 1)), 0); S_R10(&rc1813.f_HI, r_NUM(rt_sub(l_N_1812, ((rt_int)1LL))), 0); S_R23(&rc1813.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc1813.f_MHI, r_SOME(rt_sub(l_N_1812, ((rt_int)1LL))), 0); rc1813.f_ANYARG = 0; rc1813.f_NEXT = NULL; rc1813; }), 0);
if ((l_TAIL_1808 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1803))).f_BOUNDS = l_B_1811;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1808))).f_NEXT = l_B_1811;
}
l_TAIL_1808 = l_B_1811;
}
l_Q_1807 = ((*(R21 *)rt_nil_check(l_Q_1807))).f_A;
}
RT_B_TICK();
if (it1810 == it1810_hi) break;
} } L_end1809: ;
}
S_R10(&l_R_1805, r_FMT2(rt_str("@@); ", 5), l_R_1805, l_TMP_1804), 0);
l_P_1800 = p_E;
{ rt_int it1815_lo = ((rt_int)0LL), it1815_hi = rt_sub(l_DIMS_1799, ((rt_int)1LL));
for (rt_int it1815 = it1815_lo; it1815 <= it1815_hi; it1815++) {
{
S_R10(&l_R_1805, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1805, l_TMP_1804, r_NUM(it1815), l_TMP_1804), 0);
S_R10(&l_R_1805, r_FMT3(rt_str("@@] = @;", 8), l_R_1805, r_NUM(it1815), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1800))).f_A), ((rt_int)1LL)))), 0);
l_P_1800 = ((*(R21 *)rt_nil_check(l_P_1800))).f_A;
}
RT_B_TICK();
if (it1815 == it1815_hi) break;
} } L_end1814: ;
S_R10(&l_R_1805, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1805, l_TMP_1804, l_TMP_1804, r_NUM(l_DIMS_1799)), 0);
S_R10(&l_R_1805, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1805, l_TMP_1804, l_TMP_1804), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1799, l_A_1803, l_TMP_1804, &l_R_1805, &l_K_1806);
{ R26 rv1816 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1805, l_TMP_1804), l_A_1803);
return rv1816; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R21 * l_P_1817; memset(&l_P_1817, 0, sizeof l_P_1817);
l_P_1817 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_1817 == NULL)) goto L_end1818;
{
if (((!(((*(R21 *)rt_nil_check(l_P_1817))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_1817, ((*(R21 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_1817, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_1817 = ((*(R21 *)rt_nil_check(l_P_1817))).f_NEXT;
}
RT_B_TICK();
} L_end1818: ;
}
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv1819 = ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv1819; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv1820 = 0;
return rv1820; }
}
{ rt_int rv1821 = r_SAME_SHAPE(((*(R21 *)rt_nil_check(p_A))).f_A, ((*(R21 *)rt_nil_check(p_B))).f_A);
return rv1821; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1822; memset(&l_P_1822, 0, sizeof l_P_1822);
l_P_1822 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1822 == NULL)) goto L_end1823;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1822, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1822))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1822))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1822, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1822))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1822 = ((*(R21 *)rt_nil_check(l_P_1822))).f_NEXT;
}
RT_B_TICK();
} L_end1823: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1824; memset(&l_T_1824, 0, sizeof l_T_1824);
l_T_1824 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1824))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1824))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1824))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1825 = l_T_1824;
return rv1825; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1826; memset(&l_T_1826, 0, sizeof l_T_1826);
l_T_1826 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1827; memset(&l_V_1827, 0, sizeof l_V_1827);
S_R26(&l_V_1827, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1826), 0);
R22 * l_RT_1828; memset(&l_RT_1828, 0, sizeof l_RT_1828);
l_RT_1828 = r_REAL_TYPE(l_T_1826);
if (((((*(R22 *)rt_nil_check((l_V_1827).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1828))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1828))).f_KIND == g_T_INT))
{
{ R26 rv1829 = r_MKET(r_RANGE_CHECK(l_RT_1828, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1827).f_C), r_NO_TEXT()), l_T_1826);
return rv1829; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1828))).f_KIND == g_T_BOOL))
{
{ R26 rv1830 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1827).f_C), l_T_1826);
return rv1830; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1828))).f_KIND == g_T_ENUM))
{
{ R26 rv1831 = r_MKET(r_ENUM_OF_BITS(l_RT_1828, (l_V_1827).f_C), l_T_1826);
return rv1831; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1828))).f_KIND == g_T_FLOAT))
{
{ R26 rv1832 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1827).f_C), l_T_1826);
return rv1832; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1828))).f_KIND == g_T_STR))
{
{ R26 rv1833 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1827).f_C), l_T_1826);
return rv1833; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1834; memset(&l_C_1834, 0, sizeof l_C_1834);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1834, r_CONVERT(l_V_1827, l_T_1826, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1828))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1828))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1828))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1828))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1827).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1834, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1834, ((*(R22 *)rt_nil_check(l_RT_1828))).f_LEN_C), 0);
}
{ R26 rv1835 = r_MKET(l_C_1834, l_T_1826);
return rv1835; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1836 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1836; }
}
}
{ R10 rv1837 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1837; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1838; memset(&l_NAME_1838, 0, sizeof l_NAME_1838);
S_R10(&l_NAME_1838, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1839; memset(&l_L_1839, 0, sizeof l_L_1839);
l_L_1839 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1840; memset(&l_R_1840, 0, sizeof l_R_1840);
S_R10(&l_R_1840, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1839 == NULL)) goto L_end1841;
{
{
R21 * l_V_1842; memset(&l_V_1842, 0, sizeof l_V_1842);
l_V_1842 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1843; memset(&l_FOUND_1843, 0, sizeof l_FOUND_1843);
l_FOUND_1843 = 0;
for (;;) {
if ((l_V_1842 == NULL)) goto L_end1844;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1842))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1839))).f_NAME))
{
S_R10(&l_R_1840, r_FMT2(rt_str("@@, ", 4), l_R_1840, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1842))).f_A, NULL)).f_C), 0);
l_FOUND_1843 = 1;
}
l_V_1842 = ((*(R21 *)rt_nil_check(l_V_1842))).f_NEXT;
}
RT_B_TICK();
} L_end1844: ;
if ((!l_FOUND_1843))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1839))).f_NAME);
}
}
l_L_1839 = ((*(R21 *)rt_nil_check(l_L_1839))).f_NEXT;
}
RT_B_TICK();
} L_end1841: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1838, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1840, l_NAME_1838, l_NAME_1838));
{ R10 rv1845 = r_FMT2(rt_str("@, @", 4), l_NAME_1838, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1845; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1846; memset(&l_SEM_1846, 0, sizeof l_SEM_1846);
l_SEM_1846 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1846 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1846)
{
{
R22 * l_T_1847; memset(&l_T_1847, 0, sizeof l_T_1847);
l_T_1847 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1847 = p_WANT;
}
}
{ R26 rv1848 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1847))).f_SCALE)), l_T_1847);
return rv1848; }
}
}
{
R22 * l_T_1849; memset(&l_T_1849, 0, sizeof l_T_1849);
l_T_1849 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1850; memset(&l_P_1850, 0, sizeof l_P_1850);
l_P_1850 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1850))).f_TARGET = l_T_1849;
((*(R22 *)rt_nil_check(l_P_1850))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1849))
{
{ R26 rv1851 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1849), r_INIT_CODE(l_T_1849, r_MK(rt_str("(*p)", 4)))), l_P_1850);
return rv1851; }
}
{ R26 rv1852 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_1849), r_CTYPE(l_T_1849)), l_P_1850);
return rv1852; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1853; memset(&l_P_1853, 0, sizeof l_P_1853);
l_P_1853 = p_L;
{ rt_int it1855_lo = ((rt_int)1LL), it1855_hi = p_K;
for (rt_int it1855 = it1855_lo; it1855 <= it1855_hi; it1855++) {
{
if ((!(l_P_1853 == NULL)))
{
l_P_1853 = ((*(R21 *)rt_nil_check(l_P_1853))).f_NEXT;
}
}
RT_B_TICK();
if (it1855 == it1855_hi) break;
} } L_end1854: ;
{ R21 * rv1856 = l_P_1853;
return rv1856; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1857; memset(&l_N_1857, 0, sizeof l_N_1857);
l_N_1857 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1857 < p_LO) || (l_N_1857 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1858; memset(&l_L_1858, 0, sizeof l_L_1858);
l_L_1858 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1858 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1858))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1858))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1858))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1859 = r_MK(rt_str("1", 1));
return rv1859; }
}
{ R10 rv1860 = r_MK(rt_str("0", 1));
return rv1860; }
}
if (((((*(R21 *)rt_nil_check(l_L_1858))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1858))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1858))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1861 = r_MK(rt_str("1", 1));
return rv1861; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1858))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1862 = r_MK(rt_str("0", 1));
return rv1862; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1863 = r_MK(rt_str("1", 1));
return rv1863; }
}
{ R10 rv1864 = r_MK(rt_str("0", 1));
return rv1864; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1865 = 0;
return rv1865; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1866 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1866; }
}
{ rt_int rv1867 = 0;
return rv1867; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1868 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1868; }
}
{ R21 * rv1869 = p_E;
return rv1869; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1870; memset(&l_NAMES_1870, 0, sizeof l_NAMES_1870);
l_NAMES_1870 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_1870, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1871; memset(&l_L_1871, 0, sizeof l_L_1871);
l_L_1871 = (p_NAME).f_LEN;
{ rt_int it1873_lo = ((rt_int)0LL), it1873_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1871), ((rt_int)2LL));
for (rt_int it1873 = it1873_lo; it1873 <= it1873_hi; it1873++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1870, it1873, it1873), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1870, rt_add(rt_add(it1873, l_L_1871), ((rt_int)1LL)), rt_add(rt_add(it1873, l_L_1871), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1870, rt_add(it1873, ((rt_int)1LL)), rt_add(it1873, l_L_1871)), r_STR(p_NAME, l_L_1871)))
{
{
rt_int l_J_1874; memset(&l_J_1874, 0, sizeof l_J_1874);
l_J_1874 = rt_add(rt_add(it1873, l_L_1871), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1870, l_J_1874, l_J_1874), rt_str(" ", 1))) goto L_end1875;
{
l_J_1874 = rt_add(l_J_1874, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1875: ;
{ R10 rv1876 = r_MKN(rt_b_slice(l_NAMES_1870, rt_add(rt_add(it1873, l_L_1871), ((rt_int)2LL)), rt_sub(l_J_1874, ((rt_int)1LL))));
return rv1876; }
}
}
}
}
RT_B_TICK();
if (it1873 == it1873_hi) break;
} } L_end1872: ;
{ R10 rv1877 = r_NO_TEXT();
return rv1877; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1878; memset(&l_NAME_1878, 0, sizeof l_NAME_1878);
S_R10(&l_NAME_1878, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1879; memset(&l_LINE_1879, 0, sizeof l_LINE_1879);
l_LINE_1879 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1880; memset(&l_N_1880, 0, sizeof l_N_1880);
l_N_1880 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1878, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1878, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1881; memset(&l_TGT_1881, 0, sizeof l_TGT_1881);
l_TGT_1881 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1882; memset(&l_S_1882, 0, sizeof l_S_1882);
l_S_1882 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1879);
R21 * l_SRC_1883; memset(&l_SRC_1883, 0, sizeof l_SRC_1883);
l_SRC_1883 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1881 == NULL) || (l_SRC_1883 == NULL)))
{
r_FAILT(l_LINE_1879, rt_str("the wrong arguments for ", 24), l_NAME_1878);
}
if (r_TEQS(l_NAME_1878, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1882))).f_A = l_TGT_1881;
}
else
{
if ((l_N_1880 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1879, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1882))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1879);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1882))).f_A))).f_A = l_TGT_1881;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1882))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1882))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1882))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1883), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1878, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1879);
{
R14 l_SAVED_CODE_1884; memset(&l_SAVED_CODE_1884, 0, sizeof l_SAVED_CODE_1884);
S_R14(&l_SAVED_CODE_1884, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1885; memset(&l_C_1885, 0, sizeof l_C_1885);
S_R10(&l_C_1885, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1886; memset(&l_P_1886, 0, sizeof l_P_1886);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1887; memset(&rc1887, 0, sizeof rc1887);  rc1887.f_HEAD = NULL; rc1887.f_TAIL = NULL; rc1887; }), 0);
r_ASSIGN_STMT(l_S_1882);
l_P_1886 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1886 == NULL)) goto L_end1888;
{
S_R10(&l_C_1885, r_FMT2(rt_str("@ @", 3), l_C_1885, ((*(R15 *)rt_nil_check(l_P_1886))).f_T), 0);
l_P_1886 = ((*(R15 *)rt_nil_check(l_P_1886))).f_NEXT;
}
RT_B_TICK();
} L_end1888: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1884, 0);
{ R26 rv1889 = r_MKET(r_CATS(l_C_1885, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1889; }
}
}
}
if (r_TEQS(l_NAME_1878, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1890; memset(&l_S_1890, 0, sizeof l_S_1890);
l_S_1890 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1879);
((*(R21 *)rt_nil_check(l_S_1890))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1890))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1890))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1890))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1891 = r_EXPR(l_S_1890, p_WANT);
return rv1891; }
}
}
{
R10 l_SYM__1892; memset(&l_SYM__1892, 0, sizeof l_SYM__1892);
S_R10(&l_SYM__1892, r_OPERATOR_SYMBOL(l_NAME_1878), 0);
rt_int l_UNARY_OP_1893; memset(&l_UNARY_OP_1893, 0, sizeof l_UNARY_OP_1893);
l_UNARY_OP_1893 = ((r_TEQS(l_NAME_1878, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1878, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1878, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1894; memset(&l_X_1894, 0, sizeof l_X_1894);
if (l_UNARY_OP_1893)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1894 = r_NEW_NODE(g_N_UNOP, l_LINE_1879);
S_R10(&((*(R21 *)rt_nil_check(l_X_1894))).f_NAME, l_SYM__1892, 0);
((*(R21 *)rt_nil_check(l_X_1894))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1895 = r_EXPR(r_QUALIFIED(l_X_1894, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1879), p_WANT);
return rv1895; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1894 = r_BIN_NODE(l_SYM__1892, l_LINE_1879, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1892, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1894))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1878, (l_NAME_1878).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1894))).f_FL = ((rt_int)2LL);
}
{ R26 rv1896 = r_EXPR(r_QUALIFIED(l_X_1894, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1879), p_WANT);
return rv1896; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1897; memset(&l_R_1897, 0, sizeof l_R_1897);
l_R_1897 = p_X;
R21 * l_P_1898; memset(&l_P_1898, 0, sizeof l_P_1898);
l_P_1898 = p_Q;
for (;;) {
if ((l_P_1898 == NULL)) goto L_end1899;
{
if ((l_R_1897 == p_X))
{
l_R_1897 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1897))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1898))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1898))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1898))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1897))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1898))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1897))).f_B = l_P_1898;
}
l_P_1898 = ((*(R21 *)rt_nil_check(l_P_1898))).f_NEXT;
}
RT_B_TICK();
} L_end1899: ;
{ R21 * rv1900 = l_R_1897;
return rv1900; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1901 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1901; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1902; memset(&l_Y_1902, 0, sizeof l_Y_1902);
l_Y_1902 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1902 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1902))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1903; memset(&l_T_1903, 0, sizeof l_T_1903);
l_T_1903 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1902))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1903))).f_KIND == g_T_ENUM))
{
{ R22 * rv1904 = l_T_1903;
return rv1904; }
}
}
}
}
{ R22 * rv1905 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1905; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1906 = 1;
return rv1906; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1907 = 1;
return rv1907; }
}
{ rt_int rv1908 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1908; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1909 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1909; }
}
{ R21 * rv1910 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1910; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R21 * p_L) { RT_B_TICK(); 
R21 * l_A_1911; memset(&l_A_1911, 0, sizeof l_A_1911);
l_A_1911 = p_L;
for (;;) {
if ((l_A_1911 == NULL)) goto L_end1912;
{
if ((((*(R21 *)rt_nil_check(l_A_1911))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1913; memset(&l_Y_1913, 0, sizeof l_Y_1913);
l_Y_1913 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1911))).f_NAME);
if ((!(l_Y_1913 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1913))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1913))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_1913))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1913))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv1914 = 1;
return rv1914; }
}
}
}
}
}
l_A_1911 = ((*(R21 *)rt_nil_check(l_A_1911))).f_NEXT;
}
RT_B_TICK();
} L_end1912: ;
{ rt_int rv1915 = 0;
return rv1915; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1916; memset(&l_NAME_1916, 0, sizeof l_NAME_1916);
S_R10(&l_NAME_1916, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1917; memset(&l_LINE_1917, 0, sizeof l_LINE_1917);
l_LINE_1917 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R21 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_1916, l_LINE_1917);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_1916)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1916, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1916, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1916, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1918 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1918; }
}
if ((r_TEQS(l_NAME_1916, rt_str("PUT", 3)) || r_TEQS(l_NAME_1916, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1919; memset(&l_V_1919, 0, sizeof l_V_1919);
S_R26(&l_V_1919, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1919).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1917, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_1919).f_T, rt_str("the terminal", 12), l_LINE_1917);
if (r_TEQS(l_NAME_1916, rt_str("PUT", 3)))
{
{ R26 rv1920 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1919).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1920; }
}
{ R26 rv1921 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1919).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1921; }
}
}
else if (r_TEQS(l_NAME_1916, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1922 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1922; }
}
else if (r_TEQS(l_NAME_1916, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1923 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1923; }
}
else if (r_TEQS(l_NAME_1916, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1924 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1924; }
}
else if (r_TEQS(l_NAME_1916, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1925 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1925; }
}
else if (r_TEQS(l_NAME_1916, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1926 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1926; }
}
else if (r_TEQS(l_NAME_1916, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1927 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1927; }
}
if (r_TEQS(l_NAME_1916, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1928 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1917);
return rv1928; }
}
else if (r_TEQS(l_NAME_1916, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1929 = r_TO_FIXED_CALL(p_E);
return rv1929; }
}
else if (r_TEQS(l_NAME_1916, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1930; memset(&l_V_1930, 0, sizeof l_V_1930);
S_R26(&l_V_1930, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1931; memset(&l_P_1931, 0, sizeof l_P_1931);
S_R23(&l_P_1931, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1932; memset(&l_VT_1932, 0, sizeof l_VT_1932);
l_VT_1932 = r_REAL_TYPE((l_V_1930).f_T);
R22 * l_T_1933; memset(&l_T_1933, 0, sizeof l_T_1933);
l_T_1933 = r_FLOAT_TYPE((l_P_1931).f_V);
R10 l_SINGLE_1934; memset(&l_SINGLE_1934, 0, sizeof l_SINGLE_1934);
S_R10(&l_SINGLE_1934, r_SINGLE_C((l_P_1931).f_V), 0);
R10 l_TR_1935; memset(&l_TR_1935, 0, sizeof l_TR_1935);
S_R10(&l_TR_1935, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1936; memset(&l_R_1936, 0, sizeof l_R_1936);
l_R_1936 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1936 == NULL))
{
l_R_1936 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1936))).f_KIND == g_N_QUAL))
{
l_R_1936 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1936))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1936))).f_NAME).f_LEN), l_LINE_1917);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1936))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1935, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1936))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1917, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1932))).f_KIND == g_T_INT))
{
{ R26 rv1937 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1930).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1932))).f_SCALE), l_SINGLE_1934, l_TR_1935), l_T_1933);
return rv1937; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1932))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1931).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1932))).f_SCALE))))
{
{
R21 * l_Q_1938; memset(&l_Q_1938, 0, sizeof l_Q_1938);
l_Q_1938 = r_NEW_NODE(g_N_QUAL, l_LINE_1917);
R21 * l_SAVED_Q_1939; memset(&l_SAVED_Q_1939, 0, sizeof l_SAVED_Q_1939);
l_SAVED_Q_1939 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1940; memset(&l_L_1940, 0, sizeof l_L_1940);
((*(R21 *)rt_nil_check(l_Q_1938))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1938;
S_R26(&l_L_1940, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1939;
{ R26 rv1941 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1940).f_C, l_SINGLE_1934, l_TR_1935), l_T_1933);
return rv1941; }
}
}
{ R26 rv1942 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1930).f_C, l_SINGLE_1934, l_TR_1935), l_T_1933);
return rv1942; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1932))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1932))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1932))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1917, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1943 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1930).f_C, l_SINGLE_1934, l_TR_1935), l_T_1933);
return rv1943; }
}
r_FAIL(l_LINE_1917, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1916, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1944 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1917);
return rv1944; }
}
else if (r_TEQS(l_NAME_1916, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1945; memset(&l_V_1945, 0, sizeof l_V_1945);
S_R26(&l_V_1945, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1945).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1946 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1945).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1945).f_T))).f_SCALE));
return rv1946; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1945).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1947 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1945).f_C), (l_V_1945).f_T);
return rv1947; }
}
r_FAIL(l_LINE_1917, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1916, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1916, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1948; memset(&l_V_1948, 0, sizeof l_V_1948);
S_R26(&l_V_1948, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1949; memset(&l_T_1949, 0, sizeof l_T_1949);
l_T_1949 = r_REAL_TYPE((l_V_1948).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1949))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1917, rt_str("an enumerated value expected by ", 32), l_NAME_1916);
}
if (r_IS_UNORDERED(l_T_1949))
{
r_FAILT(l_LINE_1917, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1916);
}
if (r_TEQS(l_NAME_1916, rt_str("SUCC", 4)))
{
{ R26 rv1950 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1948).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1949))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1949))).f_BASE);
return rv1950; }
}
{ R26 rv1951 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1948).f_C), ((*(R22 *)rt_nil_check(l_T_1949))).f_BASE);
return rv1951; }
}
}
else if (r_TEQS(l_NAME_1916, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1952; memset(&l_V_1952, 0, sizeof l_V_1952);
S_R26(&l_V_1952, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1953; memset(&l_K_1953, 0, sizeof l_K_1953);
l_K_1953 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1952).f_T)))).f_KIND;
R22 * l_T_1954; memset(&l_T_1954, 0, sizeof l_T_1954);
l_T_1954 = r_NEW_TYP(l_K_1953);
if (((!(l_K_1953 == g_T_STR)) && (!(l_K_1953 == g_T_BITS))))
{
r_FAIL(l_LINE_1917, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1954))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1952).f_T))).f_BASE;
{ R26 rv1955 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1952).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1954);
return rv1955; }
}
}
else if (r_TEQS(l_NAME_1916, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1956 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1956; }
}
else if (r_TEQS(l_NAME_1916, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1957 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1957; }
}
else if (((r_TEQS(l_NAME_1916, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1916, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1916, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1958; memset(&l_BITS_1958, 0, sizeof l_BITS_1958);
S_R10(&l_BITS_1958, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1916, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1958, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1916, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1958, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_1959; memset(&l_V_1959, 0, sizeof l_V_1959);
S_R26(&l_V_1959, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1959).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_1917, rt_str("a character string expected by ", 31), l_NAME_1916);
}
r_ASCII_ONLY((l_V_1959).f_T, r_STR(l_NAME_1916, (l_NAME_1916).f_LEN), l_LINE_1917);
{ R26 rv1960 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_1959).f_C, l_BITS_1958), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1960; }
}
}
}
else if ((r_TEQS(l_NAME_1916, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1916, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1961; memset(&l_S_1961, 0, sizeof l_S_1961);
S_R23(&l_S_1961, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1962; memset(&l_R_1962, 0, sizeof l_R_1962);
S_R23(&l_R_1962, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1962).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1917, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1917);
if (r_TEQS(l_NAME_1916, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1963 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1961).f_V));
return rv1963; }
}
{ R26 rv1964 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1961).f_V));
return rv1964; }
}
}
else if (((r_TEQS(l_NAME_1916, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1916, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1916, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1965; memset(&l_P_1965, 0, sizeof l_P_1965);
S_R23(&l_P_1965, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1966; memset(&l_T_1966, 0, sizeof l_T_1966);
l_T_1966 = r_FLOAT_TYPE((l_P_1965).f_V);
R10 l_C_1967; memset(&l_C_1967, 0, sizeof l_C_1967);
S_R10(&l_C_1967, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1965).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1967, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1916, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1968 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1967), l_T_1966);
return rv1968; }
}
else if (r_TEQS(l_NAME_1916, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1969 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1967), l_T_1966);
return rv1969; }
}
{ R26 rv1970 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1967), l_T_1966);
return rv1970; }
}
}
else if (r_TEQS(l_NAME_1916, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1971 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1971; }
}
else if (r_TEQS(l_NAME_1916, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1972 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1972; }
}
else if (r_TEQS(l_NAME_1916, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1973 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1973; }
}
{ R26 rv1974 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1974; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1975; memset(&l_T_1975, 0, sizeof l_T_1975);
l_T_1975 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1976; memset(&l_K_1976, 0, sizeof l_K_1976);
l_K_1976 = ((*(R22 *)rt_nil_check(l_T_1975))).f_KIND;
R22 * l_S_1977; memset(&l_S_1977, 0, sizeof l_S_1977);
l_S_1977 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1976 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1975))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1978 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1977);
return rv1978; }
}
{ R26 rv1979 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1975))).f_SCALE)), l_S_1977);
return rv1979; }
}
else if ((l_K_1976 == g_T_FLOAT))
{
{ R26 rv1980 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1975))).f_SCALE)), l_S_1977);
return rv1980; }
}
else if ((l_K_1976 == g_T_BOOL))
{
{ R26 rv1981 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1977);
return rv1981; }
}
else if ((l_K_1976 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1975))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1982 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1977);
return rv1982; }
}
{ R26 rv1983 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1975))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1977);
return rv1983; }
}
else if (((l_K_1976 == g_T_STR) || (l_K_1976 == g_T_BITS)))
{
{ R26 rv1984 = r_MKET((p_V).f_C, l_S_1977);
return rv1984; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1975));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1985; memset(&l_V_1985, 0, sizeof l_V_1985);
S_R26(&l_V_1985, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1986; memset(&l_T_1986, 0, sizeof l_T_1986);
l_T_1986 = r_REAL_TYPE((l_V_1985).f_T);
rt_int l_N_1987; memset(&l_N_1987, 0, sizeof l_N_1987);
l_N_1987 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1988; memset(&l_RND_1988, 0, sizeof l_RND_1988);
S_R10(&l_RND_1988, r_ROUNDING_ARG(p_E, l_N_1987), 0);
rt_int l_S_1989; memset(&l_S_1989, 0, sizeof l_S_1989);
l_S_1989 = ((rt_int)0LL);
if (((l_N_1987 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1989 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1990; memset(&l_K_1990, 0, sizeof l_K_1990);
l_K_1990 = ((rt_int)2LL);
for (;;) {
if ((l_K_1990 >= l_N_1987)) goto L_end1991;
{
{
R21 * l_R_1992; memset(&l_R_1992, 0, sizeof l_R_1992);
l_R_1992 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1990));
if ((r_IS_ROUNDING(l_R_1992) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1990)))).f_KIND == g_N_QUAL) && (l_K_1990 == rt_sub(l_N_1987, ((rt_int)1LL)))))))
{
if ((!(l_K_1990 == rt_sub(l_N_1987, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1992))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1992))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1992))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1992, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1992))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1992))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1992, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1990 = rt_add(l_K_1990, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1991: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1986))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1993 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1989), l_RND_1988), r_INT_TYPE(l_S_1989));
return rv1993; }
}
if ((((*(R22 *)rt_nil_check(l_T_1986))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1994; memset(&l_SAVED_1994, 0, sizeof l_SAVED_1994);
l_SAVED_1994 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1995; memset(&l_C_1995, 0, sizeof l_C_1995);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1988, rt_str("1", 1));
S_R10(&l_C_1995, r_RESCALE_C((l_V_1985).f_C, ((*(R22 *)rt_nil_check(l_T_1986))).f_SCALE, l_S_1989), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1994;
{ R26 rv1996 = r_MKET(l_C_1995, r_INT_TYPE(l_S_1989));
return rv1996; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1986))).f_KIND == g_T_FLOAT))
{
{ R26 rv1997 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1985).f_C, r_NUM(l_S_1989), l_RND_1988), r_INT_TYPE(l_S_1989));
return rv1997; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1986))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1986))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1986))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_1986))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1986))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1986))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1998 = r_MKET(r_RESCALE_C((l_V_1985).f_C, ((rt_int)0LL), l_S_1989), r_INT_TYPE(l_S_1989));
return rv1998; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1986))).f_KIND == g_T_BITS))
{
{ R26 rv1999 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1985).f_C), ((rt_int)0LL), l_S_1989), r_INT_TYPE(l_S_1989));
return rv1999; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1986))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_1986, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2000 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1985).f_C, r_NUM(l_S_1989), l_RND_1988), r_INT_TYPE(l_S_1989));
return rv2000; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1985).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2001; memset(&l_T_2001, 0, sizeof l_T_2001);
l_T_2001 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2002; memset(&l_K_2002, 0, sizeof l_K_2002);
l_K_2002 = ((*(R22 *)rt_nil_check(l_T_2001))).f_KIND;
if ((l_K_2002 == g_T_BITS))
{
{ R26 rv2003 = p_V;
return rv2003; }
}
else if ((l_K_2002 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2001))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2001))).f_REPS))).f_B == NULL)))
{
{ R26 rv2004 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2001)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2001)));
return rv2004; }
}
}
{ R26 rv2005 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2001))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2001)));
return rv2005; }
}
else if ((l_K_2002 == g_T_STR))
{
{ R26 rv2006 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2006; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_2002 == g_T_INT))
{
{ R26 rv2007 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2007; }
}
else if ((l_K_2002 == g_T_BOOL))
{
{ R26 rv2008 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2008; }
}
else if ((l_K_2002 == g_T_FLOAT))
{
{ R26 rv2009 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2009; }
}
else if ((l_K_2002 == g_T_STR))
{
{ R26 rv2010 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2010; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2001));
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
{ rt_int rv2011 = 0;
return rv2011; }
}
{ rt_int rv2012 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2012; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_2013; memset(&l_N_2013, 0, sizeof l_N_2013);
l_N_2013 = ((rt_int)0LL);
R27 * l_P_2014; memset(&l_P_2014, 0, sizeof l_P_2014);
l_P_2014 = p_A;
for (;;) {
if ((l_P_2014 == NULL)) goto L_end2015;
{
l_N_2013 = rt_add(l_N_2013, ((rt_int)1LL));
l_P_2014 = ((*(R27 *)rt_nil_check(l_P_2014))).f_NEXT;
}
RT_B_TICK();
} L_end2015: ;
{ rt_int rv2016 = l_N_2013;
return rv2016; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_2017; memset(&l_HEAD_2017, 0, sizeof l_HEAD_2017);
l_HEAD_2017 = NULL;
R27 * l_TAIL_2018; memset(&l_TAIL_2018, 0, sizeof l_TAIL_2018);
l_TAIL_2018 = NULL;
rt_int l_G_2019; memset(&l_G_2019, 0, sizeof l_G_2019);
l_G_2019 = ((rt_int)0LL);
{ rt_int it2021_lo = ((rt_int)0LL), it2021_hi = ((rt_int)2LL);
for (rt_int it2021 = it2021_lo; it2021 <= it2021_hi; it2021++) {
{
{
R21 * l_P_2022; memset(&l_P_2022, 0, sizeof l_P_2022);
l_P_2022 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it2021 == ((rt_int)1LL)))
{
l_P_2022 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it2021 == ((rt_int)2LL)))
{
l_P_2022 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2022 == NULL)) goto L_end2023;
{
{
R27 * l_A_2024; memset(&l_A_2024, 0, sizeof l_A_2024);
l_A_2024 = r_NODE_ARG(l_P_2022, it2021, NULL);
if ((l_TAIL_2018 == NULL))
{
l_HEAD_2017 = l_A_2024;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2018))).f_NEXT = l_A_2024;
}
l_TAIL_2018 = l_A_2024;
}
l_P_2022 = ((*(R21 *)rt_nil_check(l_P_2022))).f_NEXT;
}
RT_B_TICK();
} L_end2023: ;
}
}
RT_B_TICK();
if (it2021 == it2021_hi) break;
} } L_end2020: ;
{ R27 * rv2025 = l_HEAD_2017;
return rv2025; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2026; memset(&l_SAVED_2026, 0, sizeof l_SAVED_2026);
l_SAVED_2026 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_2027; memset(&l_SAVED_Q_2027, 0, sizeof l_SAVED_Q_2027);
l_SAVED_Q_2027 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2028; memset(&l_V_2028, 0, sizeof l_V_2028);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2028, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2026;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2027;
{ R26 rv2029 = l_V_2028;
return rv2029; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_2030; memset(&l_ARGS_2030, 0, sizeof l_ARGS_2030);
l_ARGS_2030 = r_CALL_ARGS(p_E);
R12 * l_Y_2031; memset(&l_Y_2031, 0, sizeof l_Y_2031);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2032 = r_START_IO_CALL(p_E);
return rv2032; }
}
l_Y_2031 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2031 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2031))).f_KIND == g_Y_BUILTIN))
{
{
R21 * l_N_2033; memset(&l_N_2033, 0, sizeof l_N_2033);
l_N_2033 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2033))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2031))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2033))).f_NEXT = ((*(R21 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2034 = r_BUILTIN(l_N_2033, p_WANT);
return rv2034; }
}
}
{ R26 rv2035 = r_CALL_SYM(l_Y_2031, l_ARGS_2030, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv2035; }
}
{
R10 l_SHORT_2036; memset(&l_SHORT_2036, 0, sizeof l_SHORT_2036);
S_R10(&l_SHORT_2036, r_WHERE_SHORT_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2036, ((*(R21 *)rt_nil_check(p_E))).f_NAME)))
{
{
R21 * l_N_2037; memset(&l_N_2037, 0, sizeof l_N_2037);
l_N_2037 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2037))).f_NAME, l_SHORT_2036, 0);
((*(R21 *)rt_nil_check(l_N_2037))).f_NEXT = ((*(R21 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2038 = r_CALL_EXPR1(l_N_2037, p_WANT);
return rv2038; }
}
}
}
l_Y_2031 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2030, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2031 == NULL))
{
{
R12 * l_P_2039; memset(&l_P_2039, 0, sizeof l_P_2039);
l_P_2039 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2039 == NULL)) goto L_end2040;
{
if ((((*(R12 *)rt_nil_check(l_P_2039))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2041 = r_BUILTIN(p_E, p_WANT);
return rv2041; }
}
l_P_2039 = r_LOOKUP_NEXT(l_P_2039);
}
RT_B_TICK();
} L_end2040: ;
}
{
R12 * l_B_2042; memset(&l_B_2042, 0, sizeof l_B_2042);
l_B_2042 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2042 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2042))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2043 = r_BUILTIN(p_E, p_WANT);
return rv2043; }
}
if (((((*(R12 *)rt_nil_check(l_B_2042))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2042))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_2044; memset(&l_BASE_2044, 0, sizeof l_BASE_2044);
S_R10(&l_BASE_2044, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2044).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_2045; memset(&l_N_2045, 0, sizeof l_N_2045);
l_N_2045 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2045))).f_NAME, l_BASE_2044, 0);
{ R26 rv2046 = r_BUILTIN(l_N_2045, p_WANT);
return rv2046; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2047 = r_CALL_SYM(l_Y_2031, l_ARGS_2030, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv2047; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_2048; memset(&l_S_2048, 0, sizeof l_S_2048);
l_S_2048 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2048, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2050_lo = ((rt_int)1LL), it2050_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2050 = it2050_lo; it2050 <= it2050_hi; it2050++) {
{
if (rt_b_eq(rt_b_slice(l_S_2048, it2050, it2050), rt_str("$", 1)))
{
{
R10 l_P_2051; memset(&l_P_2051, 0, sizeof l_P_2051);
S_R10(&l_P_2051, r_MKN(rt_b_slice(l_S_2048, ((rt_int)0LL), rt_sub(it2050, ((rt_int)1LL)))), 0);
R10 l_B_2052; memset(&l_B_2052, 0, sizeof l_B_2052);
S_R10(&l_B_2052, r_MKN(rt_b_slice(l_S_2048, rt_add(it2050, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2051) || r_TEQS(l_P_2051, rt_str("INTEGER", 7))) || r_TEQS(l_P_2051, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2051, rt_str("ENUM", 4))) || r_TEQS(l_P_2051, rt_str("ARRAY", 5))) || r_TEQS(l_P_2051, rt_str("RECORD", 6))) || r_TEQS(l_P_2051, rt_str("PTR", 3))) || r_TEQS(l_P_2051, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2053; memset(&l_Y_2053, 0, sizeof l_Y_2053);
l_Y_2053 = r_LOOKUP(l_B_2052);
for (;;) {
if ((l_Y_2053 == NULL)) goto L_end2054;
{
if ((((*(R12 *)rt_nil_check(l_Y_2053))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv2055 = l_B_2052;
return rv2055; }
}
l_Y_2053 = r_LOOKUP_NEXT(l_Y_2053);
}
RT_B_TICK();
} L_end2054: ;
}
}
}
{ R10 rv2056 = r_NO_TEXT();
return rv2056; }
}
}
RT_B_TICK();
if (it2050 == it2050_hi) break;
} } L_end2049: ;
{ R10 rv2057 = r_NO_TEXT();
return rv2057; }
rt_raise(RT_X_INIT);
}
static R10 r_WHERE_SHORT_NAME(R10 p_NAME) { RT_B_TICK(); 
R12 * l_G_2058; memset(&l_G_2058, 0, sizeof l_G_2058);
l_G_2058 = r_CUR_GENERIC();
rstr l_S_2059; memset(&l_S_2059, 0, sizeof l_S_2059);
l_S_2059 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2059, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2058 == NULL))
{
{ R10 rv2060 = p_NAME;
return rv2060; }
}
{ rt_int it2062_lo = ((rt_int)1LL), it2062_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2062 = it2062_lo; it2062 <= it2062_hi; it2062++) {
{
if (rt_b_eq(rt_b_slice(l_S_2059, it2062, it2062), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2058))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2059, ((rt_int)0LL), rt_sub(it2062, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2058, r_MKN(rt_b_slice(l_S_2059, rt_add(it2062, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R10 rv2063 = r_MKN(rt_b_slice(l_S_2059, rt_add(it2062, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2063; }
}
{ R10 rv2064 = p_NAME;
return rv2064; }
}
}
RT_B_TICK();
if (it2062 == it2062_hi) break;
} } L_end2061: ;
{ R10 rv2065 = p_NAME;
return rv2065; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2066; memset(&l_B_2066, 0, sizeof l_B_2066);
l_B_2066 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2067; memset(&l_S_2067, 0, sizeof l_S_2067);
l_S_2067 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2067, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2069_lo = ((rt_int)1LL), it2069_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2069 = it2069_lo; it2069 <= it2069_hi; it2069++) {
{
if (rt_b_eq(rt_b_slice(l_S_2067, it2069, it2069), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2067, ((rt_int)0LL), rt_sub(it2069, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2070 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2067, rt_add(it2069, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2070; }
}
goto L_end2068;
}
}
RT_B_TICK();
if (it2069 == it2069_hi) break;
} } L_end2068: ;
}
for (;;) {
if ((l_B_2066 == NULL)) goto L_end2071;
{
if (((!(((*(R20 *)rt_nil_check(l_B_2066))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_2066))).f_NAME, p_NAME)))
{
{ R12 * rv2072 = ((*(R20 *)rt_nil_check(l_B_2066))).f_R;
return rv2072; }
}
l_B_2066 = ((*(R20 *)rt_nil_check(l_B_2066))).f_NEXT;
}
RT_B_TICK();
} L_end2071: ;
{ R12 * rv2073 = NULL;
return rv2073; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2074 = 0;
return rv2074; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2075 = 0;
return rv2075; }
}
}
}
{ rt_int rv2076 = 1;
return rv2076; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2077; memset(&l_Y_2077, 0, sizeof l_Y_2077);
l_Y_2077 = r_LOOKUP(p_NAME);
R12 * l_BEST_2078; memset(&l_BEST_2078, 0, sizeof l_BEST_2078);
l_BEST_2078 = NULL;
rt_int l_BEST_SCORE_2079; memset(&l_BEST_SCORE_2079, 0, sizeof l_BEST_SCORE_2079);
l_BEST_SCORE_2079 = ((rt_int)0LL);
rt_int l_TIES_2080; memset(&l_TIES_2080, 0, sizeof l_TIES_2080);
l_TIES_2080 = ((rt_int)0LL);
rt_int l_COUNT_2081; memset(&l_COUNT_2081, 0, sizeof l_COUNT_2081);
l_COUNT_2081 = ((rt_int)0LL);
rt_int l_N_2082; memset(&l_N_2082, 0, sizeof l_N_2082);
l_N_2082 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2077 == NULL)) goto L_end2083;
{
if ((!r_IS_ROUTINE(l_Y_2077)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2077))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2083;
}
}
else if (r_CANDIDATE(l_Y_2077, p_NAME))
{
{
R12 * l_R_2084; memset(&l_R_2084, 0, sizeof l_R_2084);
l_R_2084 = r_ORIGINAL(l_Y_2077);
rt_int l_SCORE_2085; memset(&l_SCORE_2085, 0, sizeof l_SCORE_2085);
r_ROUTINE_HEADER(l_R_2084);
if ((((r_PARAM_COUNT(l_R_2084) == l_N_2082) && (!r_SEEN_ROUTINE(l_R_2084, p_NAME, l_Y_2077))) && (!r_HIDDEN_ROUTINE(l_R_2084, p_NAME, l_Y_2077))))
{
l_COUNT_2081 = rt_add(l_COUNT_2081, ((rt_int)1LL));
l_SCORE_2085 = r_MATCH_SCORE(l_R_2084, p_ARGS);
if ((l_SCORE_2085 > l_BEST_SCORE_2079))
{
l_BEST_2078 = l_R_2084;
l_BEST_SCORE_2079 = l_SCORE_2085;
l_TIES_2080 = ((rt_int)0LL);
}
else if (((l_SCORE_2085 == l_BEST_SCORE_2079) && (l_SCORE_2085 > ((rt_int)0LL))))
{
l_TIES_2080 = rt_add(l_TIES_2080, ((rt_int)1LL));
}
}
}
}
l_Y_2077 = r_LOOKUP_NEXT(l_Y_2077);
}
RT_B_TICK();
} L_end2083: ;
if (((l_TIES_2080 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2086 = l_BEST_2078;
return rv2086; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2087; memset(&l_Y_2087, 0, sizeof l_Y_2087);
l_Y_2087 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2087 == p_STOP) || (l_Y_2087 == NULL))) goto L_end2088;
{
if ((((*(R12 *)rt_nil_check(l_Y_2087))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2087) == p_R))
{
{ rt_int rv2089 = 1;
return rv2089; }
}
}
l_Y_2087 = r_LOOKUP_NEXT(l_Y_2087);
}
RT_B_TICK();
} L_end2088: ;
{ rt_int rv2090 = 0;
return rv2090; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2091; memset(&l_Y_2091, 0, sizeof l_Y_2091);
l_Y_2091 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2091 == p_STOP) || (l_Y_2091 == NULL))) goto L_end2092;
{
if (((((*(R12 *)rt_nil_check(l_Y_2091))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2091))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2093; memset(&l_O_2093, 0, sizeof l_O_2093);
l_O_2093 = r_ORIGINAL(l_Y_2091);
if ((!(l_O_2093 == p_R)))
{
r_ROUTINE_HEADER(l_O_2093);
if (r_SAME_SIGNATURE(l_O_2093, p_R))
{
{ rt_int rv2094 = 1;
return rv2094; }
}
}
}
}
l_Y_2091 = r_LOOKUP_NEXT(l_Y_2091);
}
RT_B_TICK();
} L_end2092: ;
{ rt_int rv2095 = 0;
return rv2095; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2096; memset(&l_P_2096, 0, sizeof l_P_2096);
l_P_2096 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2097; memset(&l_Q_2097, 0, sizeof l_Q_2097);
l_Q_2097 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2098 = 0;
return rv2098; }
}
for (;;) {
if (((l_P_2096 == NULL) || (l_Q_2097 == NULL))) goto L_end2099;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2096))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2097))).f_MODE)))
{
{ rt_int rv2100 = 0;
return rv2100; }
}
if (((((*(R28 *)rt_nil_check(l_P_2096))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2097))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2096))).f_T == ((*(R28 *)rt_nil_check(l_Q_2097))).f_T)))
{
{ rt_int rv2101 = 0;
return rv2101; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2096))).f_T, ((*(R28 *)rt_nil_check(l_Q_2097))).f_T)))
{
{ rt_int rv2102 = 0;
return rv2102; }
}
l_P_2096 = ((*(R28 *)rt_nil_check(l_P_2096))).f_NEXT;
l_Q_2097 = ((*(R28 *)rt_nil_check(l_Q_2097))).f_NEXT;
}
RT_B_TICK();
} L_end2099: ;
{ rt_int rv2103 = ((l_P_2096 == NULL) && (l_Q_2097 == NULL));
return rv2103; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2104; memset(&l_N_2104, 0, sizeof l_N_2104);
l_N_2104 = ((rt_int)0LL);
R28 * l_P_2105; memset(&l_P_2105, 0, sizeof l_P_2105);
l_P_2105 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2105 == NULL)) goto L_end2106;
{
l_N_2104 = rt_add(l_N_2104, ((rt_int)1LL));
l_P_2105 = ((*(R28 *)rt_nil_check(l_P_2105))).f_NEXT;
}
RT_B_TICK();
} L_end2106: ;
{ rt_int rv2107 = l_N_2104;
return rv2107; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2108; memset(&l_P_2108, 0, sizeof l_P_2108);
l_P_2108 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2109; memset(&l_A_2109, 0, sizeof l_A_2109);
l_A_2109 = p_ARGS;
rt_int l_EXACT_2110; memset(&l_EXACT_2110, 0, sizeof l_EXACT_2110);
l_EXACT_2110 = 1;
R20 * l_BS_2111; memset(&l_BS_2111, 0, sizeof l_BS_2111);
l_BS_2111 = r_NEW_BINDS();
R22 * l_PT_2112; memset(&l_PT_2112, 0, sizeof l_PT_2112);
for (;;) {
if ((l_P_2108 == NULL)) goto L_end2113;
{
l_PT_2112 = r_FORMAL_VIEW(p_R, l_P_2108);
if ((!(((*(R28 *)rt_nil_check(l_P_2108))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2109))).f_MODE)))
{
{ rt_int rv2114 = ((rt_int)0LL);
return rv2114; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2108))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2108, l_A_2109, l_BS_2111)))
{
{ rt_int rv2115 = ((rt_int)0LL);
return rv2115; }
}
}
else if ((l_PT_2112 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2109))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2109))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2116 = ((rt_int)0LL);
return rv2116; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2109))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2109))).f_E, l_PT_2112)))
{
{ rt_int rv2117 = ((rt_int)0LL);
return rv2117; }
}
}
else
{
r_TYPE_ARG(l_A_2109);
{
R22 * l_AT_2118; memset(&l_AT_2118, 0, sizeof l_AT_2118);
l_AT_2118 = (((*(R27 *)rt_nil_check(l_A_2109))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2112, l_AT_2118) || (((((*(R22 *)rt_nil_check(l_AT_2118))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2112)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2119 = ((rt_int)0LL);
return rv2119; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2112)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2118)))).f_MLEN).f_OK))
{
{
R10 l_KEY_2120; memset(&l_KEY_2120, 0, sizeof l_KEY_2120);
S_R10(&l_KEY_2120, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2112)))).f_GEN, (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2112)))).f_GEN).f_LEN))), 0);
R20 * l_B_2121; memset(&l_B_2121, 0, sizeof l_B_2121);
l_B_2121 = r_FIND_BIND(((*(R20 *)rt_nil_check(l_BS_2111))).f_NEXT, l_KEY_2120);
if ((!(l_B_2121 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_2121))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2118)))).f_MLEN).f_V)))
{
{ rt_int rv2122 = ((rt_int)0LL);
return rv2122; }
}
}
else
{
r_ADD_BIND(l_KEY_2120, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2118)))).f_MLEN, NULL, l_BS_2111);
}
}
}
if ((!r_SAME_TYPE(l_PT_2112, l_AT_2118)))
{
if ((((*(R28 *)rt_nil_check(l_P_2108))).f_MODE == g_M_INOUT))
{
{ rt_int rv2123 = ((rt_int)0LL);
return rv2123; }
}
l_EXACT_2110 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2118)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2112)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2108))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2118))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2112))).f_SCALE)))
{
{ rt_int rv2124 = ((rt_int)0LL);
return rv2124; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2108))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2112))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2118))).f_SCALE)))
{
{ rt_int rv2125 = ((rt_int)0LL);
return rv2125; }
}
}
}
}
l_P_2108 = ((*(R28 *)rt_nil_check(l_P_2108))).f_NEXT;
l_A_2109 = ((*(R27 *)rt_nil_check(l_A_2109))).f_NEXT;
}
RT_B_TICK();
} L_end2113: ;
if (l_EXACT_2110)
{
{ rt_int rv2126 = ((rt_int)2LL);
return rv2126; }
}
{ rt_int rv2127 = ((rt_int)1LL);
return rv2127; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2128; memset(&l_RT_2128, 0, sizeof l_RT_2128);
l_RT_2128 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2128))).f_KIND == g_T_ENUM))
{
{ rt_int rv2129 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_2128) == NULL));
return rv2129; }
}
{ rt_int rv2130 = 0;
return rv2130; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2131 = (((*(R22 *)rt_nil_check(l_RT_2128))).f_KIND == g_T_PTR);
return rv2131; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2132 = (((*(R22 *)rt_nil_check(l_RT_2128))).f_KIND == g_T_REC);
return rv2132; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2133 = (((*(R22 *)rt_nil_check(l_RT_2128))).f_KIND == g_T_ARR);
return rv2133; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2134 = (((*(R22 *)rt_nil_check(l_RT_2128))).f_KIND == g_T_INT);
return rv2134; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2135 = ((((*(R22 *)rt_nil_check(l_RT_2128))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2128))).f_KIND == g_T_SEM));
return rv2135; }
}
{ rt_int rv2136 = 0;
return rv2136; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2137; memset(&l_Y_2137, 0, sizeof l_Y_2137);
l_Y_2137 = r_ORIGINAL(p_Y0);
R28 * l_P_2138; memset(&l_P_2138, 0, sizeof l_P_2138);
R27 * l_A_2139; memset(&l_A_2139, 0, sizeof l_A_2139);
l_A_2139 = p_ARGS;
R10 l_C_2140; memset(&l_C_2140, 0, sizeof l_C_2140);
S_R10(&l_C_2140, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2141; memset(&l_SEP_2141, 0, sizeof l_SEP_2141);
S_R10(&l_SEP_2141, r_MK(rt_str("", 0)), 0);
R10 l_PRE_2142; memset(&l_PRE_2142, 0, sizeof l_PRE_2142);
S_R10(&l_PRE_2142, r_MK(rt_str("", 0)), 0);
R10 l_POST_2143; memset(&l_POST_2143, 0, sizeof l_POST_2143);
S_R10(&l_POST_2143, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2144; memset(&l_SHARED_2144, 0, sizeof l_SHARED_2144);
l_SHARED_2144 = 0;
R22 * l_PT_2145; memset(&l_PT_2145, 0, sizeof l_PT_2145);
if (((*(R12 *)rt_nil_check(l_Y_2137))).f_GENERIC)
{
l_Y_2137 = r_INSTANCE(l_Y_2137, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_2137, p_LINE);
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R27 * l_Q_2146; memset(&l_Q_2146, 0, sizeof l_Q_2146);
l_Q_2146 = p_ARGS;
rt_int l_GEN_ARG_2147; memset(&l_GEN_ARG_2147, 0, sizeof l_GEN_ARG_2147);
l_GEN_ARG_2147 = 0;
for (;;) {
if ((l_Q_2146 == NULL)) goto L_end2148;
{
if (((*(R27 *)rt_nil_check(l_Q_2146))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_Q_2146))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R27 *)rt_nil_check(l_Q_2146))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2147 = 1;
}
}
}
l_Q_2146 = ((*(R27 *)rt_nil_check(l_Q_2146))).f_NEXT;
}
RT_B_TICK();
} L_end2148: ;
if (l_GEN_ARG_2147)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2137))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2137, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2137), p_LINE);
}
}
}
}
{
R21 * l_U_2149; memset(&l_U_2149, 0, sizeof l_U_2149);
l_U_2149 = ((*(R12 *)rt_nil_check(l_Y_2137))).f_USES;
for (;;) {
if ((l_U_2149 == NULL)) goto L_end2150;
{
{
R12 * l_H_2151; memset(&l_H_2151, 0, sizeof l_H_2151);
l_H_2151 = r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2149))).f_NAME);
if ((!(l_H_2151 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2151))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2151))).f_OWNER == ((*(R21 *)rt_nil_check(l_U_2149))).f_IV)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(l_Y_2137))).f_NAME, (((*(R12 *)rt_nil_check(l_Y_2137))).f_NAME).f_LEN)), rt_str(" imports ", 9)), r_STR(((*(R21 *)rt_nil_check(l_U_2149))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2149))).f_NAME).f_LEN)), rt_str(", which a WITH NAMING hides (4.5.4)", 35)));
}
}
}
l_U_2149 = ((*(R21 *)rt_nil_check(l_U_2149))).f_NEXT;
}
RT_B_TICK();
} L_end2150: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2137))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2137))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2137))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_2140, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2137))).f_LEVEL), 0);
S_R10(&l_SEP_2141, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2152; memset(&l_Q_2152, 0, sizeof l_Q_2152);
l_Q_2152 = p_ARGS;
for (;;) {
if ((l_Q_2152 == NULL)) goto L_end2153;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2152))).f_MODE == g_M_IN)))
{
l_SHARED_2144 = 1;
}
l_Q_2152 = ((*(R27 *)rt_nil_check(l_Q_2152))).f_NEXT;
}
RT_B_TICK();
} L_end2153: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2137))).f_USES == NULL)))
{
l_SHARED_2144 = 1;
}
}
l_P_2138 = ((*(R12 *)rt_nil_check(l_Y_2137))).f_PARAMS;
for (;;) {
if ((l_P_2138 == NULL)) goto L_end2154;
{
if ((l_A_2139 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2145 = r_FORMAL_VIEW(l_Y_2137, l_P_2138);
if ((l_PT_2145 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2138))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2145)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2155; memset(&l_V_2155, 0, sizeof l_V_2155);
R10 l_CV_2156; memset(&l_CV_2156, 0, sizeof l_CV_2156);
if ((((*(R27 *)rt_nil_check(l_A_2139))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2139))))
{
S_R26(&l_V_2155, ((*(R27 *)rt_nil_check(l_A_2139))).f_V, 0);
}
else
{
S_R26(&l_V_2155, r_EXPR(((*(R27 *)rt_nil_check(l_A_2139))).f_E, l_PT_2145), 0);
}
S_R10(&l_CV_2156, r_CONVERT(l_V_2155, l_PT_2145, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2144 && (l_V_2155).f_LVAL) && r_IS_STRUCTURED(l_PT_2145)))
{
S_R10(&l_CV_2156, r_COPY_OF(l_PT_2145, l_CV_2156), 0);
}
S_R10(&l_C_2140, r_FMT3(rt_str("@@@", 3), l_C_2140, l_SEP_2141, l_CV_2156), 0);
S_R10(&l_SEP_2141, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2157; memset(&l_V_2157, 0, sizeof l_V_2157);
if (((*(R27 *)rt_nil_check(l_A_2139))).f_HAVE)
{
S_R26(&l_V_2157, ((*(R27 *)rt_nil_check(l_A_2139))).f_V, 0);
}
else
{
S_R26(&l_V_2157, r_EXPR(((*(R27 *)rt_nil_check(l_A_2139))).f_E, l_PT_2145), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2139))).f_E == NULL)) && (!(l_V_2157).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2139))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2139))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2157, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2157).f_C), (l_V_2157).f_T), 0);
(l_V_2157).f_LVAL = 1;
}
}
if ((!(l_V_2157).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2145, (l_V_2157).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2145));
}
if (((((*(R28 *)rt_nil_check(l_P_2138))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2145, (l_V_2157).f_T) && r_SAME_RANGE(l_PT_2145, (l_V_2157).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2138))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2145, (l_V_2157).f_T) && r_SAME_RANGE(l_PT_2145, (l_V_2157).f_T))))))
{
{
R10 l_TMP_2158; memset(&l_TMP_2158, 0, sizeof l_TMP_2158);
S_R10(&l_TMP_2158, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_2159; memset(&l_AP_2159, 0, sizeof l_AP_2159);
S_R10(&l_AP_2159, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_2142, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2142, r_CTYPE((l_V_2157).f_T), l_AP_2159, (l_V_2157).f_C), 0);
S_R10(&l_PRE_2142, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2142, r_CTYPE(l_PT_2145), l_TMP_2158, r_COPY_OF((l_V_2157).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2159))), 0);
S_R10(&l_POST_2143, r_FMT2(rt_str("@ @", 3), l_POST_2143, r_STORE_CODE((l_V_2157).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2159), r_MKET(l_TMP_2158, l_PT_2145), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_2140, r_FMT3(rt_str("@@&@", 4), l_C_2140, l_SEP_2141, l_TMP_2158), 0);
}
}
else
{
S_R10(&l_C_2140, r_FMT3(rt_str("@@&@", 4), l_C_2140, l_SEP_2141, (l_V_2157).f_C), 0);
}
S_R10(&l_SEP_2141, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2139 = ((*(R27 *)rt_nil_check(l_A_2139))).f_NEXT;
l_P_2138 = ((*(R28 *)rt_nil_check(l_P_2138))).f_NEXT;
}
RT_B_TICK();
} L_end2154: ;
if ((!(l_A_2139 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2142).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2160 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2142, ((*(R12 *)rt_nil_check(l_Y_2137))).f_ACCESS, l_C_2140, l_POST_2143), r_RESULT_VIEW(l_Y_2137));
return rv2160; }
}
{ R26 rv2161 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2137))).f_ACCESS, l_C_2140), r_RESULT_VIEW(l_Y_2137));
return rv2161; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2162 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2162; }
}
{ R22 * rv2163 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2163; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2164 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2164; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2165 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2165; }
}
{ R22 * rv2166 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2166; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2167 = p_T;
return rv2167; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2168 = p_T;
return rv2168; }
}
{
R12 * l_M_2169; memset(&l_M_2169, 0, sizeof l_M_2169);
l_M_2169 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2169 == NULL)) goto L_end2170;
{
{
R12 * l_Y_2171; memset(&l_Y_2171, 0, sizeof l_Y_2171);
l_Y_2171 = r_MEMBER_TYPE(l_M_2169, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2171 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2171))).f_EXPORTED)
{
{ R22 * rv2172 = r_ABSTRACT_VIEW(l_Y_2171, p_T);
return rv2172; }
}
{ R22 * rv2173 = p_T;
return rv2173; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2169))).f_MODL))
{
goto L_end2170;
}
l_M_2169 = ((*(R12 *)rt_nil_check(l_M_2169))).f_MODL;
}
RT_B_TICK();
} L_end2170: ;
}
{ R22 * rv2174 = p_T;
return rv2174; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2175; memset(&l_Y_2175, 0, sizeof l_Y_2175);
l_Y_2175 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2176; memset(&l_Z_2176, 0, sizeof l_Z_2176);
l_Z_2176 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2176 == NULL)) goto L_end2177;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2176))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2176))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2176))).f_ORIG == NULL)))
{
{ R12 * rv2178 = l_Z_2176;
return rv2178; }
}
l_Z_2176 = r_LOOKUP_NEXT(l_Z_2176);
}
RT_B_TICK();
} L_end2177: ;
}
{ R12 * rv2179 = NULL;
return rv2179; }
}
for (;;) {
if ((l_Y_2175 == NULL)) goto L_end2180;
{
if (((((*(R12 *)rt_nil_check(l_Y_2175))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2175))).f_NAME, p_NAME)))
{
{ R12 * rv2181 = l_Y_2175;
return rv2181; }
}
l_Y_2175 = ((*(R12 *)rt_nil_check(l_Y_2175))).f_SNEXT;
}
RT_B_TICK();
} L_end2180: ;
{ R12 * rv2182 = NULL;
return rv2182; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2183; memset(&l_K_2183, 0, sizeof l_K_2183);
l_K_2183 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2184 = ((((l_K_2183 == g_T_STR) || (l_K_2183 == g_T_BITS)) || (l_K_2183 == g_T_ARR)) || (l_K_2183 == g_T_REC));
return rv2184; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2185; memset(&l_RA_2185, 0, sizeof l_RA_2185);
l_RA_2185 = r_REAL_TYPE(p_A);
R22 * l_RB_2186; memset(&l_RB_2186, 0, sizeof l_RB_2186);
l_RB_2186 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2185)))
{
{ rt_int rv2187 = 1;
return rv2187; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2185))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2185))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2186))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2186))).f_HI_C)))
{
{ rt_int rv2188 = 1;
return rv2188; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2185))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2186))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2189 = ((((*(R22 *)rt_nil_check(l_RA_2185))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2186))).f_LO_C).f_LEN);
return rv2189; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2185))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2186))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2185))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2186))).f_MHI).f_OK))
{
{ rt_int rv2190 = (((((*(R22 *)rt_nil_check(l_RA_2185))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2186))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2185))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2186))).f_MHI).f_V));
return rv2190; }
}
{ rt_int rv2191 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2185))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2186))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2185))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2186))).f_HI_C));
return rv2191; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2192 = 0;
return rv2192; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2193 = 1;
return rv2193; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2194 = 1;
return rv2194; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2195 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv2195; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2196 = 1;
return rv2196; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2197 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2197; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2198 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2198; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2199 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2199; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2200 = 0;
return rv2200; }
}
{
R12 * l_Y_2201; memset(&l_Y_2201, 0, sizeof l_Y_2201);
l_Y_2201 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2202; memset(&l_A_2202, 0, sizeof l_A_2202);
l_A_2202 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2203; memset(&l_F_2203, 0, sizeof l_F_2203);
if ((l_Y_2201 == NULL))
{
{ rt_int rv2204 = 0;
return rv2204; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2201))).f_KIND == g_Y_GEN))
{
{ rt_int rv2205 = 1;
return rv2205; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2201))).f_DECL == NULL))
{
{ rt_int rv2206 = 0;
return rv2206; }
}
l_F_2203 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2201))).f_DECL))).f_A;
for (;;) {
if ((l_F_2203 == NULL)) goto L_end2207;
{
{
R21 * l_N_2208; memset(&l_N_2208, 0, sizeof l_N_2208);
l_N_2208 = ((*(R21 *)rt_nil_check(l_F_2203))).f_A;
for (;;) {
if ((l_N_2208 == NULL)) goto L_end2209;
{
if ((l_A_2202 == NULL))
{
{ rt_int rv2210 = 0;
return rv2210; }
}
if (((((*(R21 *)rt_nil_check(l_F_2203))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2202))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2202))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2202)))))
{
{ rt_int rv2211 = 1;
return rv2211; }
}
l_A_2202 = ((*(R21 *)rt_nil_check(l_A_2202))).f_NEXT;
l_N_2208 = ((*(R21 *)rt_nil_check(l_N_2208))).f_NEXT;
}
RT_B_TICK();
} L_end2209: ;
}
l_F_2203 = ((*(R21 *)rt_nil_check(l_F_2203))).f_NEXT;
}
RT_B_TICK();
} L_end2207: ;
}
}
{ rt_int rv2212 = 0;
return rv2212; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2213; memset(&l_N_2213, 0, sizeof l_N_2213);
l_N_2213 = p_L;
for (;;) {
if ((l_N_2213 == NULL)) goto L_end2214;
{
if (((((*(R21 *)rt_nil_check(l_N_2213))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(l_N_2213))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2215 = 1;
return rv2215; }
}
if ((((*(R21 *)rt_nil_check(l_N_2213))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2213))).f_B))
{
{ rt_int rv2216 = 1;
return rv2216; }
}
}
else if ((!(((*(R21 *)rt_nil_check(l_N_2213))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2213))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2213))).f_C)))
{
{ rt_int rv2217 = 1;
return rv2217; }
}
if ((!(((*(R21 *)rt_nil_check(l_N_2213))).f_B == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2213))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2213))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2213))).f_B))).f_B)))
{
{ rt_int rv2218 = 1;
return rv2218; }
}
}
else if (r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2213))).f_B))
{
{ rt_int rv2219 = 1;
return rv2219; }
}
}
}
l_N_2213 = ((*(R21 *)rt_nil_check(l_N_2213))).f_NEXT;
}
RT_B_TICK();
} L_end2214: ;
{ rt_int rv2220 = 0;
return rv2220; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R22 * l_C_2221; memset(&l_C_2221, 0, sizeof l_C_2221);
l_C_2221 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_C_2221))).f_GENP, p_NAME, 0);
{ R22 * rv2222 = l_C_2221;
return rv2222; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R18 * l_CS_2223; memset(&l_CS_2223, 0, sizeof l_CS_2223);
l_CS_2223 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2223 == NULL)) goto L_end2224;
{
if ((!(((*(R18 *)rt_nil_check(l_CS_2223))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2223))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2225 = ((*(R18 *)rt_nil_check(l_CS_2223))).f_R;
return rv2225; }
}
}
l_CS_2223 = ((*(R18 *)rt_nil_check(l_CS_2223))).f_UP;
}
RT_B_TICK();
} L_end2224: ;
{ R12 * rv2226 = NULL;
return rv2226; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2227; memset(&l_N_2227, 0, sizeof l_N_2227);
l_N_2227 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2227 == NULL)) goto L_end2228;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2227))).f_A, p_NAME))
{
{ rt_int rv2229 = 1;
return rv2229; }
}
l_N_2227 = ((*(R21 *)rt_nil_check(l_N_2227))).f_NEXT;
}
RT_B_TICK();
} L_end2228: ;
{ rt_int rv2230 = 0;
return rv2230; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2231; memset(&l_G_2231, 0, sizeof l_G_2231);
l_G_2231 = r_CUR_GENERIC();
if ((l_G_2231 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2231, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_2232; memset(&l_N_2232, 0, sizeof l_N_2232);
l_N_2232 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2233; memset(&l_G_2233, 0, sizeof l_G_2233);
l_G_2233 = r_CUR_GENERIC();
if ((l_G_2233 == NULL))
{
return;
}
for (;;) {
if ((l_N_2232 == NULL)) goto L_end2234;
{
{
R21 * l_T_2235; memset(&l_T_2235, 0, sizeof l_T_2235);
l_T_2235 = ((*(R21 *)rt_nil_check(l_N_2232))).f_A;
for (;;) {
if ((l_T_2235 == NULL)) goto L_end2236;
{
if ((!r_IN_WHERE(l_G_2233, ((*(R21 *)rt_nil_check(l_T_2235))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R21 *)rt_nil_check(l_T_2235))).f_NAME);
}
l_T_2235 = ((*(R21 *)rt_nil_check(l_T_2235))).f_NEXT;
}
RT_B_TICK();
} L_end2236: ;
}
l_N_2232 = ((*(R21 *)rt_nil_check(l_N_2232))).f_NEXT;
}
RT_B_TICK();
} L_end2234: ;
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2237; memset(&l_P_2237, 0, sizeof l_P_2237);
l_P_2237 = p_A;
for (;;) {
if ((l_P_2237 == NULL)) goto L_end2238;
{
if (((((*(R21 *)rt_nil_check(l_P_2237))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2237))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2239 = 1;
return rv2239; }
}
l_P_2237 = ((*(R21 *)rt_nil_check(l_P_2237))).f_NEXT;
}
RT_B_TICK();
} L_end2238: ;
{ rt_int rv2240 = 0;
return rv2240; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2241; memset(&l_ENTERED_2241, 0, sizeof l_ENTERED_2241);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2241 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_2241)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2242; memset(&l_R_2242, 0, sizeof l_R_2242);
l_R_2242 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2243; memset(&l_P_2243, 0, sizeof l_P_2243);
R28 * l_TAIL_2244; memset(&l_TAIL_2244, 0, sizeof l_TAIL_2244);
l_TAIL_2244 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2243 = ((*(R21 *)rt_nil_check(l_R_2242))).f_A;
for (;;) {
if ((l_P_2243 == NULL)) goto L_end2245;
{
if (((((*(R21 *)rt_nil_check(l_P_2243))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2243))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2243 = ((*(R21 *)rt_nil_check(l_P_2243))).f_NEXT;
}
RT_B_TICK();
} L_end2245: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2242))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R21 * l_N_2246; memset(&l_N_2246, 0, sizeof l_N_2246);
l_N_2246 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2242))).f_D))).f_B;
for (;;) {
if ((l_N_2246 == NULL)) goto L_end2247;
{
{
R21 * l_T_2248; memset(&l_T_2248, 0, sizeof l_T_2248);
l_T_2248 = ((*(R21 *)rt_nil_check(l_N_2246))).f_A;
for (;;) {
if ((l_T_2248 == NULL)) goto L_end2249;
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2248))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2248))).f_B))).f_B)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_T_2248))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R21 *)rt_nil_check(l_T_2248))).f_NAME);
}
l_T_2248 = ((*(R21 *)rt_nil_check(l_T_2248))).f_NEXT;
}
RT_B_TICK();
} L_end2249: ;
}
l_N_2246 = ((*(R21 *)rt_nil_check(l_N_2246))).f_NEXT;
}
RT_B_TICK();
} L_end2247: ;
}
}
l_P_2243 = ((*(R21 *)rt_nil_check(l_R_2242))).f_A;
for (;;) {
if ((l_P_2243 == NULL)) goto L_end2250;
{
{
R28 * l_PM_2251; memset(&l_PM_2251, 0, sizeof l_PM_2251);
l_PM_2251 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2251)), ({ R28 rc2252; memset(&rc2252, 0, sizeof rc2252);  S_R10(&rc2252.f_NAME, ((*(R21 *)rt_nil_check(l_P_2243))).f_NAME, 0); rc2252.f_MODE = ((*(R21 *)rt_nil_check(l_P_2243))).f_IV; rc2252.f_T = NULL; rc2252.f_TS = ((*(R21 *)rt_nil_check(l_P_2243))).f_B; rc2252.f_NEXT = NULL; rc2252; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2242))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2243))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2243))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R21 *)rt_nil_check(l_P_2243))).f_B == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_2243))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R21 *)rt_nil_check(l_P_2243))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2243))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2251))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2243))).f_B);
}
if ((l_TAIL_2244 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2251;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2244))).f_NEXT = l_PM_2251;
}
l_TAIL_2244 = l_PM_2251;
}
l_P_2243 = ((*(R21 *)rt_nil_check(l_P_2243))).f_NEXT;
}
RT_B_TICK();
} L_end2250: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2253; memset(&l_R_2253, 0, sizeof l_R_2253);
l_R_2253 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2254; memset(&l_T_2254, 0, sizeof l_T_2254);
if ((((*(R21 *)rt_nil_check(l_R_2253))).f_B == NULL))
{
{ R22 * rv2255 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2255; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2256; memset(&l_P_2256, 0, sizeof l_P_2256);
l_P_2256 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2256 == NULL)) goto L_end2257;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2256))).f_T == NULL)))
{
{
R12 * l_V_2258; memset(&l_V_2258, 0, sizeof l_V_2258);
l_V_2258 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2256))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2258))).f_T = ((*(R28 *)rt_nil_check(l_P_2256))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2258))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2256))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2258))).f_INPUT = 1;
r_DEFINE(l_V_2258, ((*(R21 *)rt_nil_check(l_R_2253))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2256))).f_T, ((*(R12 *)rt_nil_check(l_V_2258))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2253))).f_LINE, 0);
}
}
l_P_2256 = ((*(R28 *)rt_nil_check(l_P_2256))).f_NEXT;
}
RT_B_TICK();
} L_end2257: ;
}
l_T_2254 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2253))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2259 = l_T_2254;
return rv2259; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2260; memset(&l_PS_2260, 0, sizeof l_PS_2260);
S_R10(&l_PS_2260, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2261; memset(&l_SEP_2261, 0, sizeof l_SEP_2261);
S_R10(&l_SEP_2261, r_MK(rt_str("", 0)), 0);
R28 * l_P_2262; memset(&l_P_2262, 0, sizeof l_P_2262);
l_P_2262 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2260, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2261, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2262 == NULL)) goto L_end2263;
{
if ((((*(R28 *)rt_nil_check(l_P_2262))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2262))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2262))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2260, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2260, l_SEP_2261, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2262))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2262))).f_NAME)), 0);
S_R10(&l_SEP_2261, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2260, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2260, l_SEP_2261, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2262))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2262))).f_NAME)), 0);
S_R10(&l_SEP_2261, r_MK(rt_str(", ", 2)), 0);
}
l_P_2262 = ((*(R28 *)rt_nil_check(l_P_2262))).f_NEXT;
}
RT_B_TICK();
} L_end2263: ;
if (((l_PS_2260).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2260, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2264 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2260);
return rv2264; }
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
R25 * l_B_2265; memset(&l_B_2265, 0, sizeof l_B_2265);
l_B_2265 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2266; memset(&l_I_2266, 0, sizeof l_I_2266);
l_I_2266 = ((rt_int)0LL);
for (;;) {
if ((l_B_2265 == NULL)) goto L_end2267;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2265))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2265))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2266)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2265))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2265))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2265))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2265))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2266)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2265))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2266), p_PC, r_NUM(l_I_2266)), ((*(R25 *)rt_nil_check(l_B_2265))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2266 = rt_add(l_I_2266, ((rt_int)1LL));
l_B_2265 = ((*(R25 *)rt_nil_check(l_B_2265))).f_NEXT;
}
RT_B_TICK();
} L_end2267: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2268; memset(&l_U_2268, 0, sizeof l_U_2268);
l_U_2268 = r_REAL_TYPE(p_T);
R24 * l_F_2269; memset(&l_F_2269, 0, sizeof l_F_2269);
l_F_2269 = ((*(R22 *)rt_nil_check(l_U_2268))).f_FIELDS;
R25 * l_A_2270; memset(&l_A_2270, 0, sizeof l_A_2270);
l_A_2270 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2269 == NULL) || (l_A_2270 == NULL))) goto L_end2271;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2269))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2270))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2270))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2269))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2270 = ((*(R25 *)rt_nil_check(l_A_2270))).f_NEXT;
}
l_F_2269 = ((*(R24 *)rt_nil_check(l_F_2269))).f_NEXT;
}
RT_B_TICK();
} L_end2271: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2272 = 0;
return rv2272; }
}
{ rt_int rv2273 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2273; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2274 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2274; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2275; memset(&l_OLD_2275, 0, sizeof l_OLD_2275);
l_OLD_2275 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2275 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2275))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2275))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2275))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2276; memset(&l_G_2276, 0, sizeof l_G_2276);
l_G_2276 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2276))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2276))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2276))).f_INPUT = 1;
r_DEFINE(l_G_2276, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2277; memset(&l_B_2277, 0, sizeof l_B_2277);
l_B_2277 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2277)), ({ R20 rc2278; memset(&rc2278, 0, sizeof rc2278);  S_R10(&rc2278.f_NAME, r_NO_TEXT(), 0); rc2278.f_T = NULL; S_R10(&rc2278.f_C, r_NO_TEXT(), 0); rc2278.f_HASMV = 0; rc2278.f_MV = ((rt_int)0LL); rc2278.f_R = NULL; rc2278.f_NEXT = NULL; rc2278; }), 0);
{ R20 * rv2279 = l_B_2277;
return rv2279; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2280; memset(&l_B_2280, 0, sizeof l_B_2280);
l_B_2280 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2280)), ({ R20 rc2281; memset(&rc2281, 0, sizeof rc2281);  S_R10(&rc2281.f_NAME, p_NAME, 0); rc2281.f_T = p_T; S_R10(&rc2281.f_C, r_NO_TEXT(), 0); rc2281.f_HASMV = (p_M).f_OK; rc2281.f_MV = (p_M).f_V; rc2281.f_R = p_R; rc2281.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2281; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2280))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2280;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2282; memset(&l_B_2282, 0, sizeof l_B_2282);
l_B_2282 = p_BS;
for (;;) {
if ((l_B_2282 == NULL)) goto L_end2283;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2282))).f_NAME, p_NAME))
{
{ R20 * rv2284 = l_B_2282;
return rv2284; }
}
l_B_2282 = ((*(R20 *)rt_nil_check(l_B_2282))).f_NEXT;
}
RT_B_TICK();
} L_end2283: ;
{ R20 * rv2285 = NULL;
return rv2285; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2286; memset(&l_RT_2286, 0, sizeof l_RT_2286);
l_RT_2286 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2287 = 1;
return rv2287; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2288 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2288; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2289 = 1;
return rv2289; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2290 = 1;
return rv2290; }
}
{
R20 * l_B_2291; memset(&l_B_2291, 0, sizeof l_B_2291);
l_B_2291 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2291 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2291))).f_T == NULL))
{
{ rt_int rv2292 = 0;
return rv2292; }
}
{ rt_int rv2293 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2291))).f_T, p_T);
return rv2293; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2294 = 0;
return rv2294; }
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
{ rt_int rv2295 = 1;
return rv2295; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_ARR)))
{
{ rt_int rv2296 = 0;
return rv2296; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2286))).f_DIMS)))
{
{ rt_int rv2297 = 0;
return rv2297; }
}
{ rt_int rv2298 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2286))).f_ELEM, p_BS);
return rv2298; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2299 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2299; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2300 = 0;
return rv2300; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2286))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2286))).f_MHI, p_BS))))
{
{ rt_int rv2301 = 0;
return rv2301; }
}
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R21 *)rt_nil_check(p_TS))).f_C, l_RT_2286, p_BS))))
{
{ rt_int rv2302 = 0;
return rv2302; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_INT)))
{
{ rt_int rv2303 = 0;
return rv2303; }
}
{ rt_int rv2304 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2286))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2304; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2305 = ((((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2286))).f_SCALE == ((rt_int)0LL)));
return rv2305; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2306 = 0;
return rv2306; }
}
{ rt_int rv2307 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2286))).f_SCALE), p_BS);
return rv2307; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2308 = (((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_BOOL);
return rv2308; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2309 = ((((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2286, p_BS));
return rv2309; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_STR)))
{
{ rt_int rv2310 = 0;
return rv2310; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2311 = 1;
return rv2311; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2286))).f_BASE == NULL)))
{
{ rt_int rv2312 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2286))).f_BASE, p_BS);
return rv2312; }
}
{ rt_int rv2313 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2313; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2314 = ((((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2286, p_BS));
return rv2314; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2315 = (((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_SEM);
return rv2315; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_PTR)))
{
{ rt_int rv2316 = 0;
return rv2316; }
}
{ rt_int rv2317 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2286), p_BS);
return rv2317; }
}
{
R12 * l_Y_2318; memset(&l_Y_2318, 0, sizeof l_Y_2318);
l_Y_2318 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2318 == NULL))
{
{ rt_int rv2319 = 0;
return rv2319; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2318))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2318))).f_DECL == NULL)))
{
{ rt_int rv2320 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2318))).f_T, p_T);
return rv2320; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2318))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2321 = 0;
return rv2321; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2318))))
{
{ rt_int rv2322 = 0;
return rv2322; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2318))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2286))).f_KIND == g_T_REC)))
{
{ rt_int rv2323 = 0;
return rv2323; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2286))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2324 = 0;
return rv2324; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2286))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2318))))
{
{ rt_int rv2325 = 0;
return rv2325; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2326 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2326; }
}
{ rt_int rv2327 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2318))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2318))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2286, p_BS);
return rv2327; }
}
{
R21 * l_F_2328; memset(&l_F_2328, 0, sizeof l_F_2328);
l_F_2328 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2318))).f_DECL))).f_A;
R21 * l_A_2329; memset(&l_A_2329, 0, sizeof l_A_2329);
l_A_2329 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2330; memset(&l_V_2330, 0, sizeof l_V_2330);
l_V_2330 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2331; memset(&l_CLASS_2331, 0, sizeof l_CLASS_2331);
l_CLASS_2331 = r_RECORD_CLASS_OF(l_RT_2286);
for (;;) {
if ((l_F_2328 == NULL)) goto L_end2332;
{
{
R21 * l_N_2333; memset(&l_N_2333, 0, sizeof l_N_2333);
l_N_2333 = ((*(R21 *)rt_nil_check(l_F_2328))).f_A;
for (;;) {
if ((l_N_2333 == NULL)) goto L_end2334;
{
if ((l_A_2329 == NULL))
{
{ rt_int rv2335 = 0;
return rv2335; }
}
if ((((*(R21 *)rt_nil_check(l_F_2328))).f_B == NULL))
{
if ((!(l_CLASS_2331 == NULL)))
{
{
R20 * l_B_2336; memset(&l_B_2336, 0, sizeof l_B_2336);
l_B_2336 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2331))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2333))).f_NAME);
if ((!(l_B_2336 == NULL)))
{
if ((!r_UNIFY(l_A_2329, ((*(R20 *)rt_nil_check(l_B_2336))).f_T, p_BS)))
{
{ rt_int rv2337 = 0;
return rv2337; }
}
}
}
}
}
else
{
if ((!(l_V_2330 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2329))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2329))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2329))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2338; memset(&l_M_2338, 0, sizeof l_M_2338);
S_R23(&l_M_2338, r_MANIFEST(l_A_2329), 0);
if (((l_M_2338).f_OK && (((*(R25 *)rt_nil_check(l_V_2330))).f_MLO).f_OK))
{
if ((!((l_M_2338).f_V == (((*(R25 *)rt_nil_check(l_V_2330))).f_MLO).f_V)))
{
{ rt_int rv2339 = 0;
return rv2339; }
}
}
}
}
l_V_2330 = ((*(R25 *)rt_nil_check(l_V_2330))).f_NEXT;
}
}
l_A_2329 = ((*(R21 *)rt_nil_check(l_A_2329))).f_NEXT;
l_N_2333 = ((*(R21 *)rt_nil_check(l_N_2333))).f_NEXT;
}
RT_B_TICK();
} L_end2334: ;
}
l_F_2328 = ((*(R21 *)rt_nil_check(l_F_2328))).f_NEXT;
}
RT_B_TICK();
} L_end2332: ;
}
{ rt_int rv2340 = 1;
return rv2340; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R21 * p_A, R22 * p_RT, R20 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2341 = 1;
return rv2341; }
}
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2342 = 1;
return rv2342; }
}
{
R10 l_KEY_2343; memset(&l_KEY_2343, 0, sizeof l_KEY_2343);
S_R10(&l_KEY_2343, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN))), 0);
R20 * l_B_2344; memset(&l_B_2344, 0, sizeof l_B_2344);
l_B_2344 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2343);
if ((!(l_B_2344 == NULL)))
{
{ rt_int rv2345 = (((*(R20 *)rt_nil_check(l_B_2344))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2345; }
}
r_ADD_BIND(l_KEY_2343, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2346 = 1;
return rv2346; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R21 * p_R, R22 * p_RT, R20 * p_BS) { RT_B_TICK(); 
R21 * l_A_2347; memset(&l_A_2347, 0, sizeof l_A_2347);
l_A_2347 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R21 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2348 = 0;
return rv2348; }
}
{
R10 l_SIGNING_2349; memset(&l_SIGNING_2349, 0, sizeof l_SIGNING_2349);
S_R10(&l_SIGNING_2349, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2347 == NULL)))
{
if ((!((r_TEQS(((*(R21 *)rt_nil_check(l_A_2347))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R21 *)rt_nil_check(l_A_2347))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2350 = 1;
return rv2350; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_A_2347))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(l_A_2347))).f_A == NULL))))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2347))).f_A))).f_NEXT == NULL)))
{
S_R10(&l_SIGNING_2349, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2347))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2351 = 0;
return rv2351; }
}
if ((!(((*(R21 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2349))))
{
{ rt_int rv2352 = 0;
return rv2352; }
}
}
}
{ rt_int rv2353 = 1;
return rv2353; }
}
}
if ((l_A_2347 == NULL))
{
{ rt_int rv2354 = 1;
return rv2354; }
}
{ rt_int rv2355 = r_TEQ(((*(R21 *)rt_nil_check(p_R))).f_NAME, ((*(R21 *)rt_nil_check(l_A_2347))).f_NAME);
return rv2355; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R21 * l_R_2356; memset(&l_R_2356, 0, sizeof l_R_2356);
l_R_2356 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2356 == NULL))
{
{ rt_int rv2357 = 0;
return rv2357; }
}
if ((((*(R21 *)rt_nil_check(l_R_2356))).f_KIND == g_TS_GEN))
{
{ rt_int rv2358 = 0;
return rv2358; }
}
{ rt_int rv2359 = (((((r_TEQS(((*(R21 *)rt_nil_check(l_R_2356))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2356))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2356))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2356))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2356))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2356))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2359; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2360; memset(&l_R_2360, 0, sizeof l_R_2360);
l_R_2360 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2361 = NULL;
return rv2361; }
}
for (;;) {
if ((l_R_2360 == NULL)) goto L_end2362;
{
if ((((*(R12 *)rt_nil_check(l_R_2360))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2363 = l_R_2360;
return rv2363; }
}
l_R_2360 = ((*(R12 *)rt_nil_check(l_R_2360))).f_INSTANCES;
}
RT_B_TICK();
} L_end2362: ;
{ R12 * rv2364 = NULL;
return rv2364; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2365 = 1;
return rv2365; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2366 = 1;
return rv2366; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2367 = 1;
return rv2367; }
}
{
R20 * l_B_2368; memset(&l_B_2368, 0, sizeof l_B_2368);
l_B_2368 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2368 == NULL)))
{
{ rt_int rv2369 = ((((*(R20 *)rt_nil_check(l_B_2368))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2368))).f_MV == (p_M).f_V));
return rv2369; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2370 = 0;
return rv2370; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2371 = 1;
return rv2371; }
}
{
R23 l_V_2372; memset(&l_V_2372, 0, sizeof l_V_2372);
S_R23(&l_V_2372, r_MANIFEST(p_A), 0);
if (((l_V_2372).f_OK && (p_M).f_OK))
{
{ rt_int rv2373 = ((l_V_2372).f_V == (p_M).f_V);
return rv2373; }
}
}
{ rt_int rv2374 = 1;
return rv2374; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2375 = 0;
return rv2375; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2376 = 0;
return rv2376; }
}
{ rt_int rv2377 = (!(r_FIND_ROUTINE_ARG(((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R27 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2377; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2378 = 1;
return rv2378; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2379 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2379; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2380; memset(&l_BS_2380, 0, sizeof l_BS_2380);
l_BS_2380 = r_NEW_BINDS();
R28 * l_P_2381; memset(&l_P_2381, 0, sizeof l_P_2381);
l_P_2381 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2382; memset(&l_A_2382, 0, sizeof l_A_2382);
l_A_2382 = p_ARGS;
for (;;) {
if ((l_P_2381 == NULL)) goto L_end2383;
{
if ((((*(R28 *)rt_nil_check(l_P_2381))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2382))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2381))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2382))).f_E), r_NO_MVAL(), NULL, l_BS_2380);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2381))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2381))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2381))).f_TS, ((*(R27 *)rt_nil_check(l_A_2382))).f_E, p_LINE), l_BS_2380);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2382))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2382))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2381))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2382))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2382))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2382))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2382))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2382))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2381))).f_TS, (((*(R27 *)rt_nil_check(l_A_2382))).f_V).f_T, l_BS_2380)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2381))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2381))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2381))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2381))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2382))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2380);
}
}
l_P_2381 = ((*(R28 *)rt_nil_check(l_P_2381))).f_NEXT;
l_A_2382 = ((*(R27 *)rt_nil_check(l_A_2382))).f_NEXT;
}
RT_B_TICK();
} L_end2383: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2380);
{
R12 * l_I_2384; memset(&l_I_2384, 0, sizeof l_I_2384);
l_I_2384 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2384 == NULL)) goto L_end2385;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2384))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2380))).f_NEXT))
{
{ R12 * rv2386 = l_I_2384;
return rv2386; }
}
l_I_2384 = ((*(R12 *)rt_nil_check(l_I_2384))).f_INSTANCES;
}
RT_B_TICK();
} L_end2385: ;
}
{ R12 * rv2387 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2380))).f_NEXT, p_ARGS);
return rv2387; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2388; memset(&l_P_2388, 0, sizeof l_P_2388);
l_P_2388 = p_A;
for (;;) {
if ((l_P_2388 == NULL)) goto L_end2389;
{
{
R20 * l_Q_2390; memset(&l_Q_2390, 0, sizeof l_Q_2390);
l_Q_2390 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2388))).f_NAME);
if ((l_Q_2390 == NULL))
{
{ rt_int rv2391 = 0;
return rv2391; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2388))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2390))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2388))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2390))).f_T == NULL)))
{
{ rt_int rv2392 = 0;
return rv2392; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2388))).f_T, ((*(R20 *)rt_nil_check(l_Q_2390))).f_T)))
{
{ rt_int rv2393 = 0;
return rv2393; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2388))).f_T, ((*(R20 *)rt_nil_check(l_Q_2390))).f_T)))
{
{ rt_int rv2394 = 0;
return rv2394; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2388))).f_T, ((*(R20 *)rt_nil_check(l_Q_2390))).f_T)))
{
{ rt_int rv2395 = 0;
return rv2395; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2388))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2390))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2388))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2390))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2388))).f_R == ((*(R20 *)rt_nil_check(l_Q_2390))).f_R))))
{
{ rt_int rv2396 = 0;
return rv2396; }
}
}
l_P_2388 = ((*(R20 *)rt_nil_check(l_P_2388))).f_NEXT;
}
RT_B_TICK();
} L_end2389: ;
{ rt_int rv2397 = 1;
return rv2397; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2398; memset(&l_RA_2398, 0, sizeof l_RA_2398);
l_RA_2398 = r_REAL_TYPE(p_A);
R22 * l_RB_2399; memset(&l_RB_2399, 0, sizeof l_RB_2399);
l_RB_2399 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2398))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2398))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2398))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2399))).f_KIND))))
{
{ rt_int rv2400 = 1;
return rv2400; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2398))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2399))).f_MLEN).f_OK))
{
{ rt_int rv2401 = ((((*(R22 *)rt_nil_check(l_RA_2398))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2399))).f_MLEN).f_V);
return rv2401; }
}
{ rt_int rv2402 = ((((*(R22 *)rt_nil_check(l_RA_2398))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2399))).f_MLEN).f_OK);
return rv2402; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2403; memset(&l_RA_2403, 0, sizeof l_RA_2403);
l_RA_2403 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2404; memset(&l_RB_2404, 0, sizeof l_RB_2404);
l_RB_2404 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2403 == NULL) || (l_RB_2404 == NULL)))
{
{ rt_int rv2405 = (l_RA_2403 == l_RB_2404);
return rv2405; }
}
if ((l_RA_2403 == l_RB_2404))
{
{ rt_int rv2406 = 1;
return rv2406; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2403))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2404))).f_NAME)))
{
{ rt_int rv2407 = 0;
return rv2407; }
}
{
R21 * l_X_2408; memset(&l_X_2408, 0, sizeof l_X_2408);
l_X_2408 = ((*(R21 *)rt_nil_check(l_RA_2403))).f_A;
R21 * l_Y_2409; memset(&l_Y_2409, 0, sizeof l_Y_2409);
l_Y_2409 = ((*(R21 *)rt_nil_check(l_RB_2404))).f_A;
for (;;) {
if (((l_X_2408 == NULL) || (l_Y_2409 == NULL))) goto L_end2410;
{
if (((((((*(R21 *)rt_nil_check(l_X_2408))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2408))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2409))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2409))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2408))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2409))).f_NAME)))
{
{ rt_int rv2411 = 0;
return rv2411; }
}
}
else
{
{
R23 l_MX_2412; memset(&l_MX_2412, 0, sizeof l_MX_2412);
S_R23(&l_MX_2412, r_MANIFEST(l_X_2408), 0);
R23 l_MY_2413; memset(&l_MY_2413, 0, sizeof l_MY_2413);
S_R23(&l_MY_2413, r_MANIFEST(l_Y_2409), 0);
if (((!((l_MX_2412).f_OK == (l_MY_2413).f_OK)) || (!((l_MX_2412).f_V == (l_MY_2413).f_V))))
{
{ rt_int rv2414 = 0;
return rv2414; }
}
}
}
l_X_2408 = ((*(R21 *)rt_nil_check(l_X_2408))).f_NEXT;
l_Y_2409 = ((*(R21 *)rt_nil_check(l_Y_2409))).f_NEXT;
}
RT_B_TICK();
} L_end2410: ;
{ rt_int rv2415 = ((((l_X_2408 == NULL) && (l_Y_2409 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2403))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2404))).f_B == NULL));
return rv2415; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2416 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2416; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R21 * p_TS, R21 * p_E, R20 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2417; memset(&l_Y_2417, 0, sizeof l_Y_2417);
l_Y_2417 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2418; memset(&l_FOUND_2418, 0, sizeof l_FOUND_2418);
l_FOUND_2418 = NULL;
R20 * l_BS_2419; memset(&l_BS_2419, 0, sizeof l_BS_2419);
l_BS_2419 = p_BS0;
if ((l_BS_2419 == NULL))
{
l_BS_2419 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2417 == NULL)) goto L_end2420;
{
if ((((*(R12 *)rt_nil_check(l_Y_2417))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2421; memset(&l_R_2421, 0, sizeof l_R_2421);
l_R_2421 = r_ORIGINAL(l_Y_2417);
R20 * l_TRY_2422; memset(&l_TRY_2422, 0, sizeof l_TRY_2422);
l_TRY_2422 = r_NEW_BINDS();
((*(R20 *)rt_nil_check(l_TRY_2422))).f_NEXT = ((*(R20 *)rt_nil_check(l_BS_2419))).f_NEXT;
r_ROUTINE_HEADER(l_R_2421);
if ((((!((*(R12 *)rt_nil_check(l_R_2421))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2421)) && r_TEMPLATE_FITS(p_TS, l_R_2421, l_TRY_2422)))
{
if (((!(l_FOUND_2418 == NULL)) && (!(l_FOUND_2418 == l_R_2421))))
{
if ((!p_STRICT))
{
{ R12 * rv2423 = NULL;
return rv2423; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2418 = l_R_2421;
}
}
}
l_Y_2417 = r_LOOKUP_NEXT(l_Y_2417);
}
RT_B_TICK();
} L_end2420: ;
if ((l_FOUND_2418 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2424 = NULL;
return rv2424; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2418))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2425 = NULL;
return rv2425; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2418, l_BS_2419)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{ R12 * rv2426 = l_FOUND_2418;
return rv2426; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R21 * p_E, R12 * p_R) { RT_B_TICK(); 
R21 * l_A_2427; memset(&l_A_2427, 0, sizeof l_A_2427);
l_A_2427 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R28 * l_Q_2428; memset(&l_Q_2428, 0, sizeof l_Q_2428);
l_Q_2428 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2429 = 1;
return rv2429; }
}
if (((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2430 = 0;
return rv2430; }
}
for (;;) {
if (((l_A_2427 == NULL) || (l_Q_2428 == NULL))) goto L_end2431;
{
if ((((*(R28 *)rt_nil_check(l_Q_2428))).f_T == NULL))
{
{ rt_int rv2432 = 0;
return rv2432; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2427)), ((*(R28 *)rt_nil_check(l_Q_2428))).f_T)))
{
{ rt_int rv2433 = 0;
return rv2433; }
}
l_A_2427 = ((*(R21 *)rt_nil_check(l_A_2427))).f_NEXT;
l_Q_2428 = ((*(R28 *)rt_nil_check(l_Q_2428))).f_NEXT;
}
RT_B_TICK();
} L_end2431: ;
if (((!(l_A_2427 == NULL)) || (!(l_Q_2428 == NULL))))
{
{ rt_int rv2434 = 0;
return rv2434; }
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2435 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2435; }
}
{ rt_int rv2436 = 1;
return rv2436; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R21 * p_TS, R12 * p_R, R20 * p_BS) { RT_B_TICK(); 
R21 * l_P_2437; memset(&l_P_2437, 0, sizeof l_P_2437);
l_P_2437 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R28 * l_Q_2438; memset(&l_Q_2438, 0, sizeof l_Q_2438);
l_Q_2438 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2439 = 0;
return rv2439; }
}
for (;;) {
if (((l_P_2437 == NULL) || (l_Q_2438 == NULL))) goto L_end2440;
{
if ((!(((*(R21 *)rt_nil_check(l_P_2437))).f_IV == ((*(R28 *)rt_nil_check(l_Q_2438))).f_MODE)))
{
{ rt_int rv2441 = 0;
return rv2441; }
}
if (((((*(R21 *)rt_nil_check(l_P_2437))).f_B == NULL) || (((*(R28 *)rt_nil_check(l_Q_2438))).f_T == NULL)))
{
if (((!(((*(R21 *)rt_nil_check(l_P_2437))).f_B == NULL)) || (!(((*(R28 *)rt_nil_check(l_Q_2438))).f_T == NULL))))
{
{ rt_int rv2442 = 0;
return rv2442; }
}
}
else if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_2437))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2443 = 0;
return rv2443; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R21 *)rt_nil_check(l_P_2437))).f_B, ((*(R28 *)rt_nil_check(l_Q_2438))).f_T, p_BS)))
{
{ rt_int rv2444 = 0;
return rv2444; }
}
l_P_2437 = ((*(R21 *)rt_nil_check(l_P_2437))).f_NEXT;
l_Q_2438 = ((*(R28 *)rt_nil_check(l_Q_2438))).f_NEXT;
}
RT_B_TICK();
} L_end2440: ;
if (((!(l_P_2437 == NULL)) || (!(l_Q_2438 == NULL))))
{
{ rt_int rv2445 = 0;
return rv2445; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R21 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2446 = 0;
return rv2446; }
}
}
{
R21 * l_X_2447; memset(&l_X_2447, 0, sizeof l_X_2447);
l_X_2447 = ((*(R21 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2447 == NULL)) goto L_end2448;
{
if ((!r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R21 *)rt_nil_check(l_X_2447))).f_NAME)))
{
{ rt_int rv2449 = 0;
return rv2449; }
}
l_X_2447 = ((*(R21 *)rt_nil_check(l_X_2447))).f_NEXT;
}
RT_B_TICK();
} L_end2448: ;
}
{ rt_int rv2450 = 1;
return rv2450; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2451 = r_UNIFY(p_TS, p_T, p_BS);
return rv2451; }
}
{ rt_int rv2452 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2452; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2453 = 0;
return rv2453; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2454 = 1;
return rv2454; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2455 = 1;
return rv2455; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2456 = 1;
return rv2456; }
}
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2457 = 1;
return rv2457; }
}
{ rt_int rv2458 = 0;
return rv2458; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2459; memset(&l_NEEDL_2459, 0, sizeof l_NEEDL_2459);
l_NEEDL_2459 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2460; memset(&l_SAVED_2460, 0, sizeof l_SAVED_2460);
l_SAVED_2460 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2459 == NULL)) goto L_end2461;
{
{
R21 * l_T_2462; memset(&l_T_2462, 0, sizeof l_T_2462);
l_T_2462 = ((*(R21 *)rt_nil_check(l_NEEDL_2459))).f_A;
for (;;) {
if ((l_T_2462 == NULL)) goto L_end2463;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2462))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2464; memset(&l_ARGS_2464, 0, sizeof l_ARGS_2464);
l_ARGS_2464 = NULL;
R27 * l_TAIL_2465; memset(&l_TAIL_2465, 0, sizeof l_TAIL_2465);
l_TAIL_2465 = NULL;
R21 * l_P_2466; memset(&l_P_2466, 0, sizeof l_P_2466);
l_P_2466 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2462))).f_B))).f_A;
R12 * l_R_2467; memset(&l_R_2467, 0, sizeof l_R_2467);
rt_int l_ENTERED_2468; memset(&l_ENTERED_2468, 0, sizeof l_ENTERED_2468);
l_ENTERED_2468 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2466 == NULL)) goto L_end2469;
{
{
R27 * l_A_2470; memset(&l_A_2470, 0, sizeof l_A_2470);
if ((((*(R21 *)rt_nil_check(l_P_2466))).f_B == NULL))
{
l_A_2470 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2470 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2466))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2470))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2466))).f_IV;
if ((l_TAIL_2465 == NULL))
{
l_ARGS_2464 = l_A_2470;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2465))).f_NEXT = l_A_2470;
}
l_TAIL_2465 = l_A_2470;
}
l_P_2466 = ((*(R21 *)rt_nil_check(l_P_2466))).f_NEXT;
}
RT_B_TICK();
} L_end2469: ;
if (l_ENTERED_2468)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2467 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2462))).f_NAME, l_ARGS_2464, p_LINE, 0);
if ((l_R_2467 == NULL))
{
l_R_2467 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2462))).f_NAME);
for (;;) {
if ((l_R_2467 == NULL)) goto L_end2471;
{
if ((((*(R12 *)rt_nil_check(l_R_2467))).f_KIND == g_Y_BUILTIN))
{
goto L_end2471;
}
l_R_2467 = r_LOOKUP_NEXT(l_R_2467);
}
RT_B_TICK();
} L_end2471: ;
}
if (((l_R_2467 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2462))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2462))).f_NAME);
}
if ((!(l_R_2467 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2467))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2467));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2467)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R21 *)rt_nil_check(l_T_2462))).f_NAME);
}
}
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2462))).f_NAME, NULL, r_NO_MVAL(), l_R_2467, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2462 = ((*(R21 *)rt_nil_check(l_T_2462))).f_NEXT;
}
RT_B_TICK();
} L_end2463: ;
}
l_NEEDL_2459 = ((*(R21 *)rt_nil_check(l_NEEDL_2459))).f_NEXT;
}
RT_B_TICK();
} L_end2461: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2460;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2472 = 0;
return rv2472; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R21 * l_A_2473; memset(&l_A_2473, 0, sizeof l_A_2473);
l_A_2473 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2473 == NULL)) goto L_end2474;
{
if ((((*(R21 *)rt_nil_check(l_A_2473))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2475 = 1;
return rv2475; }
}
l_A_2473 = ((*(R21 *)rt_nil_check(l_A_2473))).f_NEXT;
}
RT_B_TICK();
} L_end2474: ;
}
{ rt_int rv2476 = 0;
return rv2476; }
}
{
R12 * l_Y_2477; memset(&l_Y_2477, 0, sizeof l_Y_2477);
l_Y_2477 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2478; memset(&l_A_2478, 0, sizeof l_A_2478);
l_A_2478 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2479; memset(&l_F_2479, 0, sizeof l_F_2479);
if ((l_Y_2477 == NULL))
{
{ rt_int rv2480 = 0;
return rv2480; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2477))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2477))).f_DECL == NULL)))
{
{ rt_int rv2481 = 0;
return rv2481; }
}
l_F_2479 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2477))).f_DECL))).f_A;
for (;;) {
if ((l_F_2479 == NULL)) goto L_end2482;
{
{
R21 * l_N_2483; memset(&l_N_2483, 0, sizeof l_N_2483);
l_N_2483 = ((*(R21 *)rt_nil_check(l_F_2479))).f_A;
for (;;) {
if ((l_N_2483 == NULL)) goto L_end2484;
{
if ((l_A_2478 == NULL))
{
{ rt_int rv2485 = 0;
return rv2485; }
}
if (((((*(R21 *)rt_nil_check(l_F_2479))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2478))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2486 = 1;
return rv2486; }
}
l_A_2478 = ((*(R21 *)rt_nil_check(l_A_2478))).f_NEXT;
l_N_2483 = ((*(R21 *)rt_nil_check(l_N_2483))).f_NEXT;
}
RT_B_TICK();
} L_end2484: ;
}
l_F_2479 = ((*(R21 *)rt_nil_check(l_F_2479))).f_NEXT;
}
RT_B_TICK();
} L_end2482: ;
}
{ rt_int rv2487 = 0;
return rv2487; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2488; memset(&l_A_2488, 0, sizeof l_A_2488);
l_A_2488 = p_ARGS;
R12 * l_I_2489; memset(&l_I_2489, 0, sizeof l_I_2489);
l_I_2489 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2490; memset(&l_SAVED_2490, 0, sizeof l_SAVED_2490);
l_SAVED_2490 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2491; memset(&l_P_2491, 0, sizeof l_P_2491);
l_P_2491 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2492; memset(&l_TAIL_2492, 0, sizeof l_TAIL_2492);
l_TAIL_2492 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2489)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2489))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2489))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2489))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2489))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2489))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2489;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2491 == NULL)) goto L_end2493;
{
{
R28 * l_PM_2494; memset(&l_PM_2494, 0, sizeof l_PM_2494);
l_PM_2494 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2494)), (*(R28 *)rt_nil_check(l_P_2491)), 0);
((*(R28 *)rt_nil_check(l_PM_2494))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2491))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2494))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2491))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2494))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2491))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2488))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2494))).f_T = (((*(R27 *)rt_nil_check(l_A_2488))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2494))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2494))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2494))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2494))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2494))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2491))).f_TS);
}
if ((!(((*(R28 *)rt_nil_check(l_P_2491))).f_TS == NULL)))
{
if (((((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2491))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2491))).f_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2491))).f_TS))).f_A == NULL))))) && ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2491))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2491))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2491))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R28 *)rt_nil_check(l_PM_2494))).f_T = r_MARK_GENP(((*(R28 *)rt_nil_check(l_PM_2494))).f_T, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2491))).f_TS))).f_NAME);
}
}
}
}
((*(R28 *)rt_nil_check(l_PM_2494))).f_TS = NULL;
if ((l_TAIL_2492 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2489))).f_PARAMS = l_PM_2494;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2492))).f_NEXT = l_PM_2494;
}
l_TAIL_2492 = l_PM_2494;
}
l_P_2491 = ((*(R28 *)rt_nil_check(l_P_2491))).f_NEXT;
l_A_2488 = ((*(R27 *)rt_nil_check(l_A_2488))).f_NEXT;
}
RT_B_TICK();
} L_end2493: ;
((*(R12 *)rt_nil_check(l_I_2489))).f_RESULT = r_RESULT_TYPE(l_I_2489);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2490;
S_R10(&((*(R12 *)rt_nil_check(l_I_2489))).f_FWD, r_C_HEADER(l_I_2489), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2489))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2489))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2489;
{ R12 * rv2495 = l_I_2489;
return rv2495; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2496 = 0;
return rv2496; }
}
{ rt_int rv2497 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2497; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2498; memset(&l_C_2498, 0, sizeof l_C_2498);
if ((p_TS == NULL))
{
{ R21 * rv2499 = NULL;
return rv2499; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2500; memset(&l_F_2500, 0, sizeof l_F_2500);
l_F_2500 = p_FORMALS;
R21 * l_A_2501; memset(&l_A_2501, 0, sizeof l_A_2501);
l_A_2501 = p_ARGS;
for (;;) {
if ((l_F_2500 == NULL)) goto L_end2502;
{
{
R21 * l_N_2503; memset(&l_N_2503, 0, sizeof l_N_2503);
l_N_2503 = ((*(R21 *)rt_nil_check(l_F_2500))).f_A;
for (;;) {
if ((l_N_2503 == NULL)) goto L_end2504;
{
if ((l_A_2501 == NULL))
{
{ R21 * rv2505 = p_TS;
return rv2505; }
}
if (((((*(R21 *)rt_nil_check(l_F_2500))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2503))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2506 = l_A_2501;
return rv2506; }
}
l_A_2501 = ((*(R21 *)rt_nil_check(l_A_2501))).f_NEXT;
l_N_2503 = ((*(R21 *)rt_nil_check(l_N_2503))).f_NEXT;
}
RT_B_TICK();
} L_end2504: ;
}
l_F_2500 = ((*(R21 *)rt_nil_check(l_F_2500))).f_NEXT;
}
RT_B_TICK();
} L_end2502: ;
}
{ R21 * rv2507 = p_TS;
return rv2507; }
}
l_C_2498 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2498))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2498))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2508 = l_C_2498;
return rv2508; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2509; memset(&l_C_2509, 0, sizeof l_C_2509);
l_C_2509 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2509)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2509))).f_NEXT = NULL;
{ R21 * rv2510 = l_C_2509;
return rv2510; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2511; memset(&l_P_2511, 0, sizeof l_P_2511);
l_P_2511 = p_L;
for (;;) {
if ((l_P_2511 == NULL)) goto L_end2512;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2511))).f_NAME, p_NAME))
{
{ rt_int rv2513 = 1;
return rv2513; }
}
l_P_2511 = ((*(R21 *)rt_nil_check(l_P_2511))).f_NEXT;
}
RT_B_TICK();
} L_end2512: ;
{ rt_int rv2514 = 0;
return rv2514; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2515; memset(&l_IS_2515, 0, sizeof l_IS_2515);
l_IS_2515 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2516 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2516; }
}
if ((l_IS_2515 == NULL))
{
{ rt_int rv2517 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2517; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2515))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2515))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2518 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2518; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2515))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2515))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2519 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2519; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2515))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2520 = 0;
return rv2520; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2521; memset(&l_ITEMS_2521, 0, sizeof l_ITEMS_2521);
l_ITEMS_2521 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2522; memset(&l_HEAD_2522, 0, sizeof l_HEAD_2522);
l_HEAD_2522 = NULL;
R21 * l_TAIL_2523; memset(&l_TAIL_2523, 0, sizeof l_TAIL_2523);
l_TAIL_2523 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2521 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2521))).f_A, &l_HEAD_2522, &l_TAIL_2523);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2521))).f_B, &l_HEAD_2522, &l_TAIL_2523);
{
R21 * l_R_2524; memset(&l_R_2524, 0, sizeof l_R_2524);
l_R_2524 = ((*(R21 *)rt_nil_check(l_ITEMS_2521))).f_C;
for (;;) {
if ((l_R_2524 == NULL)) goto L_end2525;
{
{
R12 * l_Z_2526; memset(&l_Z_2526, 0, sizeof l_Z_2526);
l_Z_2526 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2524))).f_NAME);
if (((l_Z_2526 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2524))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2524))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2524))).f_NAME);
}
for (;;) {
if ((l_Z_2526 == NULL)) goto L_end2527;
{
if ((((*(R12 *)rt_nil_check(l_Z_2526))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2528; memset(&l_O_2528, 0, sizeof l_O_2528);
l_O_2528 = r_ORIGINAL(l_Z_2526);
R21 * l_U_2529; memset(&l_U_2529, 0, sizeof l_U_2529);
r_COMPUTE_USES(l_O_2528);
l_U_2529 = ((*(R12 *)rt_nil_check(l_O_2528))).f_USES;
for (;;) {
if ((l_U_2529 == NULL)) goto L_end2530;
{
if ((!r_IN_IDENTS(l_HEAD_2522, ((*(R21 *)rt_nil_check(l_U_2529))).f_NAME)))
{
{
R21 * l_N_2531; memset(&l_N_2531, 0, sizeof l_N_2531);
l_N_2531 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2529))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2531))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2529))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2531))).f_IV = ((*(R21 *)rt_nil_check(l_U_2529))).f_IV;
r_ADD_LIST(l_N_2531, &l_HEAD_2522, &l_TAIL_2523);
}
}
l_U_2529 = ((*(R21 *)rt_nil_check(l_U_2529))).f_NEXT;
}
RT_B_TICK();
} L_end2530: ;
}
}
l_Z_2526 = r_LOOKUP_NEXT(l_Z_2526);
}
RT_B_TICK();
} L_end2527: ;
}
l_R_2524 = ((*(R21 *)rt_nil_check(l_R_2524))).f_NEXT;
}
RT_B_TICK();
} L_end2525: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2522;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2532; memset(&l_M_2532, 0, sizeof l_M_2532);
if ((p_B == NULL))
{
{ rt_int rv2533 = 0;
return rv2533; }
}
l_M_2532 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2532 == NULL)) goto L_end2534;
{
if ((((*(R21 *)rt_nil_check(l_M_2532))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2532))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2532))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2532))).f_C, p_NAME)))
{
{ rt_int rv2535 = 1;
return rv2535; }
}
}
l_M_2532 = ((*(R21 *)rt_nil_check(l_M_2532))).f_NEXT;
}
RT_B_TICK();
} L_end2534: ;
{ rt_int rv2536 = 0;
return rv2536; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2537; memset(&l_R_2537, 0, sizeof l_R_2537);
l_R_2537 = p_RS;
for (;;) {
if ((l_R_2537 == NULL)) goto L_end2538;
{
if ((((*(R21 *)rt_nil_check(l_R_2537))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2537));
if ((!(((*(R21 *)rt_nil_check(l_R_2537))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2537))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2537))).f_E))).f_B, 1);
}
}
l_R_2537 = ((*(R21 *)rt_nil_check(l_R_2537))).f_NEXT;
}
RT_B_TICK();
} L_end2538: ;
}
static void r_IMPORTS_KNOWN(R21 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R21 * l_P_2539; memset(&l_P_2539, 0, sizeof l_P_2539);
l_P_2539 = p_L;
for (;;) {
if ((l_P_2539 == NULL)) goto L_end2540;
{
{
R12 * l_V_2541; memset(&l_V_2541, 0, sizeof l_V_2541);
l_V_2541 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2539))).f_NAME);
if ((!(l_V_2541 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2541))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2541, ((*(R21 *)rt_nil_check(l_P_2539))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2541))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2539))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R21 *)rt_nil_check(l_P_2539))).f_NAME);
}
}
}
}
l_P_2539 = ((*(R21 *)rt_nil_check(l_P_2539))).f_NEXT;
}
RT_B_TICK();
} L_end2540: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2542; memset(&l_P_2542, 0, sizeof l_P_2542);
l_P_2542 = p_L;
for (;;) {
if ((l_P_2542 == NULL)) goto L_end2543;
{
{
R12 * l_V_2544; memset(&l_V_2544, 0, sizeof l_V_2544);
l_V_2544 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2542))).f_NAME);
R21 * l_N_2545; memset(&l_N_2545, 0, sizeof l_N_2545);
l_N_2545 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2542))).f_LINE);
if ((l_V_2544 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2542))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2542))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2545))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2542))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2545))).f_IV = ((*(R12 *)rt_nil_check(l_V_2544))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2544))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2545, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2542 = ((*(R21 *)rt_nil_check(l_P_2542))).f_NEXT;
}
RT_B_TICK();
} L_end2543: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2546; memset(&l_IS_2546, 0, sizeof l_IS_2546);
l_IS_2546 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2547; memset(&l_U_2547, 0, sizeof l_U_2547);
l_U_2547 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2546 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2546))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2547 == NULL)) goto L_end2548;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2547))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2546))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2546))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2547))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2547))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2546))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2547))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2546))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2547))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2546))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2546))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2546))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2546))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2547))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2547))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2547))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2547 = ((*(R21 *)rt_nil_check(l_U_2547))).f_NEXT;
}
RT_B_TICK();
} L_end2548: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2549; memset(&l_R_2549, 0, sizeof l_R_2549);
l_R_2549 = p_RS;
for (;;) {
if ((l_R_2549 == NULL)) goto L_end2550;
{
{
R12 * l_Z_2551; memset(&l_Z_2551, 0, sizeof l_Z_2551);
l_Z_2551 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2549))).f_NAME);
for (;;) {
if ((l_Z_2551 == NULL)) goto L_end2552;
{
if ((((*(R12 *)rt_nil_check(l_Z_2551))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2553; memset(&l_O_2553, 0, sizeof l_O_2553);
l_O_2553 = r_ORIGINAL(l_Z_2551);
r_COMPUTE_USES(l_O_2553);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2553))).f_USES, p_NAME))
{
{ rt_int rv2554 = 1;
return rv2554; }
}
}
}
l_Z_2551 = r_LOOKUP_NEXT(l_Z_2551);
}
RT_B_TICK();
} L_end2552: ;
}
l_R_2549 = ((*(R21 *)rt_nil_check(l_R_2549))).f_NEXT;
}
RT_B_TICK();
} L_end2550: ;
{ rt_int rv2555 = 0;
return rv2555; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2556; memset(&l_M_2556, 0, sizeof l_M_2556);
l_M_2556 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2556 == NULL)) goto L_end2557;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2556))).f_NAME))
{
{ rt_int rv2558 = 1;
return rv2558; }
}
l_M_2556 = ((*(R12 *)rt_nil_check(l_M_2556))).f_MODL;
}
RT_B_TICK();
} L_end2557: ;
{ rt_int rv2559 = 0;
return rv2559; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2560 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2560; }
}
{ R10 rv2561 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2561; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2562; memset(&l_C_2562, 0, sizeof l_C_2562);
l_C_2562 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2562 == NULL)) goto L_end2563;
{
if ((((*(R17 *)rt_nil_check(l_C_2562))).f_KIND == ((rt_int)1LL)))
{
goto L_end2563;
}
if ((((*(R17 *)rt_nil_check(l_C_2562))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2564; memset(&l_H_2564, 0, sizeof l_H_2564);
l_H_2564 = ((*(R17 *)rt_nil_check(l_C_2562))).f_HANDLERS;
for (;;) {
if ((l_H_2564 == NULL)) goto L_end2565;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2564))).f_A, p_NAME))
{
{ rt_int rv2566 = 1;
return rv2566; }
}
l_H_2564 = ((*(R21 *)rt_nil_check(l_H_2564))).f_NEXT;
}
RT_B_TICK();
} L_end2565: ;
}
}
l_C_2562 = ((*(R17 *)rt_nil_check(l_C_2562))).f_NEXT;
}
RT_B_TICK();
} L_end2563: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2567 = 1;
return rv2567; }
}
}
{ rt_int rv2568 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2568; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2569; memset(&l_C_2569, 0, sizeof l_C_2569);
l_C_2569 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2569)), ({ R17 rc2570; memset(&rc2570, 0, sizeof rc2570);  rc2570.f_KIND = p_KIND; S_R10(&rc2570.f_NAME, p_NAME, 0); rc2570.f_HANDLERS = NULL; rc2570.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2570; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2569;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2571; memset(&l_C_2571, 0, sizeof l_C_2571);
l_C_2571 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2571 == NULL)) goto L_end2572;
{
if ((((*(R17 *)rt_nil_check(l_C_2571))).f_KIND == p_KIND))
{
{ R17 * rv2573 = l_C_2571;
return rv2573; }
}
if ((((*(R17 *)rt_nil_check(l_C_2571))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2574 = NULL;
return rv2574; }
}
if ((((*(R17 *)rt_nil_check(l_C_2571))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2571))).f_NAME));
}
l_C_2571 = ((*(R17 *)rt_nil_check(l_C_2571))).f_NEXT;
}
RT_B_TICK();
} L_end2572: ;
{ R17 * rv2575 = NULL;
return rv2575; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2576; memset(&l_C_2576, 0, sizeof l_C_2576);
l_C_2576 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2577; memset(&l_N_2577, 0, sizeof l_N_2577);
l_N_2577 = ((rt_int)0LL);
for (;;) {
if ((l_C_2576 == NULL)) goto L_end2578;
{
if ((((*(R17 *)rt_nil_check(l_C_2576))).f_KIND == ((rt_int)1LL)))
{
goto L_end2578;
}
if ((((*(R17 *)rt_nil_check(l_C_2576))).f_KIND == ((rt_int)3LL)))
{
l_N_2577 = rt_add(l_N_2577, ((rt_int)1LL));
}
l_C_2576 = ((*(R17 *)rt_nil_check(l_C_2576))).f_NEXT;
}
RT_B_TICK();
} L_end2578: ;
{ rt_int rv2579 = l_N_2577;
return rv2579; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2580; memset(&l_N_2580, 0, sizeof l_N_2580);
l_N_2580 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2580 == NULL)) goto L_end2581;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2580))).f_NAME, p_NAME))
{
{ R10 rv2582 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2582; }
}
l_N_2580 = ((*(R21 *)rt_nil_check(l_N_2580))).f_NEXT;
}
RT_B_TICK();
} L_end2581: ;
l_N_2580 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2580))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2580))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2580;
{ R10 rv2583 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2583; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2584; memset(&l_D_2584, 0, sizeof l_D_2584);
l_D_2584 = p_DECLS;
for (;;) {
if ((l_D_2584 == NULL)) goto L_end2585;
{
if (((((*(R21 *)rt_nil_check(l_D_2584))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2584))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2586; memset(&l_Y_2586, 0, sizeof l_Y_2586);
l_Y_2586 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2584))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2584))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2586))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2586))).f_DECL = l_D_2584;
r_DEFINE(l_Y_2586, ((*(R21 *)rt_nil_check(l_D_2584))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2584))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2584))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2584))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2584 = ((*(R21 *)rt_nil_check(l_D_2584))).f_NEXT;
}
RT_B_TICK();
} L_end2585: ;
l_D_2584 = p_DECLS;
for (;;) {
if ((l_D_2584 == NULL)) goto L_end2587;
{
if (((((*(R21 *)rt_nil_check(l_D_2584))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2584))).f_KIND == g_N_REPTYPE)))
{
{
R21 * l_SEEN_2588; memset(&l_SEEN_2588, 0, sizeof l_SEEN_2588);
l_SEEN_2588 = NULL;
rt_int l_FOUND_2589; memset(&l_FOUND_2589, 0, sizeof l_FOUND_2589);
l_FOUND_2589 = 0;
r_REFERS(((*(R21 *)rt_nil_check(l_D_2584))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_2584))).f_NAME), p_DECLS, &l_SEEN_2588, &l_FOUND_2589);
if (l_FOUND_2589)
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_2584))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R21 *)rt_nil_check(l_D_2584))).f_NAME);
}
}
{
R21 * l_F_2590; memset(&l_F_2590, 0, sizeof l_F_2590);
l_F_2590 = ((*(R21 *)rt_nil_check(l_D_2584))).f_A;
for (;;) {
if ((l_F_2590 == NULL)) goto L_end2591;
{
if (((((*(R21 *)rt_nil_check(l_F_2590))).f_IV == ((rt_int)1LL)) && (((*(R21 *)rt_nil_check(l_D_2584))).f_KIND == g_N_TYPE)))
{
{
R21 * l_N_2592; memset(&l_N_2592, 0, sizeof l_N_2592);
l_N_2592 = ((*(R21 *)rt_nil_check(l_F_2590))).f_A;
for (;;) {
if ((l_N_2592 == NULL)) goto L_end2593;
{
if (r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_D_2584))).f_B, ((*(R21 *)rt_nil_check(l_N_2592))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_2584))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R21 *)rt_nil_check(l_N_2592))).f_NAME);
}
l_N_2592 = ((*(R21 *)rt_nil_check(l_N_2592))).f_NEXT;
}
RT_B_TICK();
} L_end2593: ;
}
}
if ((!(((*(R21 *)rt_nil_check(l_F_2590))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R21 *)rt_nil_check(l_F_2590))).f_B, p_DECLS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2590))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_2590 = ((*(R21 *)rt_nil_check(l_F_2590))).f_NEXT;
}
RT_B_TICK();
} L_end2591: ;
}
}
l_D_2584 = ((*(R21 *)rt_nil_check(l_D_2584))).f_NEXT;
}
RT_B_TICK();
} L_end2587: ;
l_D_2584 = p_DECLS;
for (;;) {
if ((l_D_2584 == NULL)) goto L_end2594;
{
if ((((*(R21 *)rt_nil_check(l_D_2584))).f_KIND == g_N_TYPE))
{
{
R21 * l_F_2595; memset(&l_F_2595, 0, sizeof l_F_2595);
l_F_2595 = ((*(R21 *)rt_nil_check(l_D_2584))).f_A;
for (;;) {
if ((l_F_2595 == NULL)) goto L_end2596;
{
if (((((*(R21 *)rt_nil_check(l_F_2595))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_F_2595))).f_B == NULL))))
{
{
R22 * l_FT_2597; memset(&l_FT_2597, 0, sizeof l_FT_2597);
l_FT_2597 = r_REAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(l_F_2595))).f_B));
if (((!r_IS_SCALAR(l_FT_2597)) || (!(((*(R22 *)rt_nil_check(l_FT_2597))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2595))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2595 = ((*(R21 *)rt_nil_check(l_F_2595))).f_NEXT;
}
RT_B_TICK();
} L_end2596: ;
}
}
l_D_2584 = ((*(R21 *)rt_nil_check(l_D_2584))).f_NEXT;
}
RT_B_TICK();
} L_end2594: ;
}
static void r_REFERS(R21 * p_L, R10 p_TARGET, R21 * p_DECLS, R21 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R21 * l_N_2598; memset(&l_N_2598, 0, sizeof l_N_2598);
l_N_2598 = p_L;
for (;;) {
if (((l_N_2598 == NULL) || (*p_FOUND))) goto L_end2599;
{
if (((((*(R21 *)rt_nil_check(l_N_2598))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(l_N_2598))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_N_2598))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2598))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R21 *)rt_nil_check(l_N_2598))).f_NAME)))
{
{
R21 * l_M_2600; memset(&l_M_2600, 0, sizeof l_M_2600);
l_M_2600 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_N_2598))).f_LINE);
R21 * l_D_2601; memset(&l_D_2601, 0, sizeof l_D_2601);
l_D_2601 = p_DECLS;
S_R10(&((*(R21 *)rt_nil_check(l_M_2600))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2598))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_M_2600))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_2600;
for (;;) {
if ((l_D_2601 == NULL)) goto L_end2602;
{
if (((((((*(R21 *)rt_nil_check(l_D_2601))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2601))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R21 *)rt_nil_check(l_D_2601))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2598))).f_NAME)))
{
r_REFERS(((*(R21 *)rt_nil_check(l_D_2601))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_2601 = ((*(R21 *)rt_nil_check(l_D_2601))).f_NEXT;
}
RT_B_TICK();
} L_end2602: ;
}
}
r_REFERS(((*(R21 *)rt_nil_check(l_N_2598))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2598))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2598))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R21 *)rt_nil_check(l_N_2598))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2598))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2598))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2598))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_2598 = ((*(R21 *)rt_nil_check(l_N_2598))).f_NEXT;
}
RT_B_TICK();
} L_end2599: ;
}
static rt_int r_TAG_MISUSED(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2603; memset(&l_N_2603, 0, sizeof l_N_2603);
l_N_2603 = p_L;
for (;;) {
if ((l_N_2603 == NULL)) goto L_end2604;
{
if ((((*(R21 *)rt_nil_check(l_N_2603))).f_KIND == g_TS_NAME))
{
{
R21 * l_A_2605; memset(&l_A_2605, 0, sizeof l_A_2605);
l_A_2605 = ((*(R21 *)rt_nil_check(l_N_2603))).f_A;
for (;;) {
if ((l_A_2605 == NULL)) goto L_end2606;
{
if ((!((((((((*(R21 *)rt_nil_check(l_A_2605))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_2605))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R21 *)rt_nil_check(l_A_2605))).f_NAME, p_NAME)) && (((*(R21 *)rt_nil_check(l_A_2605))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_2605, p_NAME))
{
{ rt_int rv2607 = 1;
return rv2607; }
}
}
l_A_2605 = ((*(R21 *)rt_nil_check(l_A_2605))).f_NEXT;
}
RT_B_TICK();
} L_end2606: ;
}
if (((r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2603))).f_B, p_NAME) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2603))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2603))).f_E, p_NAME)))
{
{ rt_int rv2608 = 1;
return rv2608; }
}
}
else if (r_TAG_MISUSED1(l_N_2603, p_NAME))
{
{ rt_int rv2609 = 1;
return rv2609; }
}
l_N_2603 = ((*(R21 *)rt_nil_check(l_N_2603))).f_NEXT;
}
RT_B_TICK();
} L_end2604: ;
{ rt_int rv2610 = 0;
return rv2610; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R21 * p_N, R10 p_NAME) { RT_B_TICK(); 
rt_int l_K_2611; memset(&l_K_2611, 0, sizeof l_K_2611);
l_K_2611 = ((*(R21 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_2611 == g_TS_NAME))
{
{ rt_int rv2612 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv2612; }
}
if ((((((l_K_2611 == g_N_NAME) || (l_K_2611 == g_N_ENUMLIT)) || (l_K_2611 == g_N_APPLY))) && r_TEQ(((*(R21 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv2613 = 1;
return rv2613; }
}
{ rt_int rv2614 = ((((r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv2614; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R21 * p_L, R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_N_2615; memset(&l_N_2615, 0, sizeof l_N_2615);
l_N_2615 = p_L;
for (;;) {
if ((l_N_2615 == NULL)) goto L_end2616;
{
if ((((*(R21 *)rt_nil_check(l_N_2615))).f_KIND == g_N_NAME))
{
{
R21 * l_D_2617; memset(&l_D_2617, 0, sizeof l_D_2617);
l_D_2617 = p_DECLS;
R12 * l_Y_2618; memset(&l_Y_2618, 0, sizeof l_Y_2618);
l_Y_2618 = r_LOOKUP(((*(R21 *)rt_nil_check(l_N_2615))).f_NAME);
for (;;) {
if ((l_D_2617 == NULL)) goto L_end2619;
{
if (((((*(R21 *)rt_nil_check(l_D_2617))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R21 *)rt_nil_check(l_D_2617))).f_A, ((*(R21 *)rt_nil_check(l_N_2615))).f_NAME)))
{
{ rt_int rv2620 = 1;
return rv2620; }
}
l_D_2617 = ((*(R21 *)rt_nil_check(l_D_2617))).f_NEXT;
}
RT_B_TICK();
} L_end2619: ;
if ((!(l_Y_2618 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2618))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2618))).f_INPUT)))
{
{ rt_int rv2621 = 1;
return rv2621; }
}
}
}
}
else if ((((r_NAMES_VARIABLE(((*(R21 *)rt_nil_check(l_N_2615))).f_A, p_DECLS) || r_NAMES_VARIABLE(((*(R21 *)rt_nil_check(l_N_2615))).f_B, p_DECLS)) || r_NAMES_VARIABLE(((*(R21 *)rt_nil_check(l_N_2615))).f_C, p_DECLS)) || r_NAMES_VARIABLE(((*(R21 *)rt_nil_check(l_N_2615))).f_D, p_DECLS)))
{
{ rt_int rv2622 = 1;
return rv2622; }
}
l_N_2615 = ((*(R21 *)rt_nil_check(l_N_2615))).f_NEXT;
}
RT_B_TICK();
} L_end2616: ;
{ rt_int rv2623 = 0;
return rv2623; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2624; memset(&l_P_2624, 0, sizeof l_P_2624);
l_P_2624 = p_L;
for (;;) {
if ((l_P_2624 == NULL)) goto L_end2625;
{
if (((((*(R21 *)rt_nil_check(l_P_2624))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2624))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2626 = 1;
return rv2626; }
}
}
l_P_2624 = ((*(R21 *)rt_nil_check(l_P_2624))).f_NEXT;
}
RT_B_TICK();
} L_end2625: ;
{ rt_int rv2627 = 0;
return rv2627; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2628; memset(&l_A_2628, 0, sizeof l_A_2628);
l_A_2628 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2629; memset(&l_FOUND_2629, 0, sizeof l_FOUND_2629);
l_FOUND_2629 = NULL;
rt_int l_N_2630; memset(&l_N_2630, 0, sizeof l_N_2630);
l_N_2630 = ((rt_int)0LL);
R12 * l_Y_2631; memset(&l_Y_2631, 0, sizeof l_Y_2631);
l_Y_2631 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2628 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2628))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2628))).f_DECL == NULL)))
{
{ R22 * rv2632 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2632; }
}
}
for (;;) {
if ((l_Y_2631 == NULL)) goto L_end2633;
{
if (((((*(R12 *)rt_nil_check(l_Y_2631))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2631))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2631))).f_NAME) == l_Y_2631))
{
{
R22 * l_T_2634; memset(&l_T_2634, 0, sizeof l_T_2634);
l_T_2634 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2631))).f_DECL == NULL))
{
l_T_2634 = ((*(R12 *)rt_nil_check(l_Y_2631))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2631))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2631))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2631))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2631))).f_DECL))).f_B))).f_A)))
{
l_T_2634 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2631))).f_NAME, p_LINE);
}
}
if ((!(l_T_2634 == NULL)))
{
l_T_2634 = r_REAL_TYPE(l_T_2634);
if ((((*(R22 *)rt_nil_check(l_T_2634))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2634))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2634))).f_BASE == l_FOUND_2629))))
{
if ((!(l_FOUND_2629 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2629 = ((*(R22 *)rt_nil_check(l_T_2634))).f_BASE;
}
}
}
}
}
}
l_Y_2631 = ((*(R12 *)rt_nil_check(l_Y_2631))).f_SNEXT;
}
RT_B_TICK();
} L_end2633: ;
if ((l_FOUND_2629 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2635 = l_FOUND_2629;
return rv2635; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2636; memset(&l_R_2636, 0, sizeof l_R_2636);
l_R_2636 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2636))).f_BASE == NULL))
{
{ R22 * rv2637 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2637; }
}
{ R22 * rv2638 = ((*(R22 *)rt_nil_check(l_R_2636))).f_BASE;
return rv2638; }
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
R21 * l_S_2639; memset(&l_S_2639, 0, sizeof l_S_2639);
l_S_2639 = p_S0;
for (;;) {
if ((l_S_2639 == NULL)) goto L_end2640;
{
{
R21 * l_L_2641; memset(&l_L_2641, 0, sizeof l_L_2641);
l_L_2641 = l_S_2639;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2641))).f_KIND == g_N_LABELED))) goto L_end2642;
{
{
R12 * l_Y_2643; memset(&l_Y_2643, 0, sizeof l_Y_2643);
l_Y_2643 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2641))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2643))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2641))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2641))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2643))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2643, ((*(R21 *)rt_nil_check(l_L_2641))).f_LINE);
}
l_L_2641 = ((*(R21 *)rt_nil_check(l_L_2641))).f_A;
}
RT_B_TICK();
} L_end2642: ;
}
l_S_2639 = ((*(R21 *)rt_nil_check(l_S_2639))).f_NEXT;
}
RT_B_TICK();
} L_end2640: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2644; memset(&l_D_2644, 0, sizeof l_D_2644);
l_D_2644 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2645; memset(&l_S_2645, 0, sizeof l_S_2645);
l_S_2645 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2644 == NULL)) goto L_end2646;
{
if (((((*(R21 *)rt_nil_check(l_D_2644))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2644))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2644);
}
l_D_2644 = ((*(R21 *)rt_nil_check(l_D_2644))).f_NEXT;
}
RT_B_TICK();
} L_end2646: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2645 == NULL)) goto L_end2647;
{
r_STMT(l_S_2645);
l_S_2645 = ((*(R21 *)rt_nil_check(l_S_2645))).f_NEXT;
}
RT_B_TICK();
} L_end2647: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2648; memset(&l_F_2648, 0, sizeof l_F_2648);
S_R10(&l_F_2648, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2649; memset(&l_H_2649, 0, sizeof l_H_2649);
l_H_2649 = p_HANDLERS;
R10 l_WORD_2650; memset(&l_WORD_2650, 0, sizeof l_WORD_2650);
S_R10(&l_WORD_2650, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2648, l_F_2648));
r_PUSH_CTX(((rt_int)3LL), l_F_2648);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2648, l_F_2648, l_F_2648));
for (;;) {
if ((l_H_2649 == NULL)) goto L_end2651;
{
{
R21 * l_N_2652; memset(&l_N_2652, 0, sizeof l_N_2652);
l_N_2652 = ((*(R21 *)rt_nil_check(l_H_2649))).f_A;
R10 l_COND_2653; memset(&l_COND_2653, 0, sizeof l_COND_2653);
S_R10(&l_COND_2653, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2652 == NULL)) goto L_end2654;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2652))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2652))).f_NAME) || r_IN_HANDLERS(((*(R21 *)rt_nil_check(l_H_2649))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2652))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2652))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2652))).f_NAME);
}
S_R10(&l_COND_2653, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2653, l_F_2648, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2652))).f_NAME)), 0);
l_N_2652 = ((*(R21 *)rt_nil_check(l_N_2652))).f_NEXT;
}
RT_B_TICK();
} L_end2654: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2650, l_COND_2653));
S_R10(&l_WORD_2650, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2648, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2649))).f_B);
r_POP_CTX();
}
l_H_2649 = ((*(R21 *)rt_nil_check(l_H_2649))).f_NEXT;
}
RT_B_TICK();
} L_end2651: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2648));
}
static rt_int r_IN_HANDLERS(R21 * p_HS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_H_2655; memset(&l_H_2655, 0, sizeof l_H_2655);
l_H_2655 = p_HS;
for (;;) {
if ((l_H_2655 == NULL)) goto L_end2656;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2655))).f_A, p_NAME))
{
{ rt_int rv2657 = 1;
return rv2657; }
}
l_H_2655 = ((*(R21 *)rt_nil_check(l_H_2655))).f_NEXT;
}
RT_B_TICK();
} L_end2656: ;
{ rt_int rv2658 = 0;
return rv2658; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2659; memset(&l_K_2659, 0, sizeof l_K_2659);
l_K_2659 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2659 == g_N_EXCEPT))
{
{ rt_int rv2660 = r_IS_STRUCTURED_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
return rv2660; }
}
{ rt_int rv2661 = (((((((l_K_2659 == g_N_BLOCK) || (l_K_2659 == g_N_IF)) || (l_K_2659 == g_N_CASE)) || (l_K_2659 == g_N_LOOP)) || (l_K_2659 == g_N_FOR)) || (l_K_2659 == g_N_PAR)) || (l_K_2659 == g_N_WITH));
return rv2661; }
rt_raise(RT_X_INIT);
}
static R21 * r_NAMED_ROOT(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_2662; memset(&l_K_2662, 0, sizeof l_K_2662);
l_K_2662 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_2662 == g_N_NAME) || (l_K_2662 == g_N_APPLY)))
{
{ R21 * rv2663 = p_E;
return rv2663; }
}
else if ((((l_K_2662 == g_N_INDEX) || (l_K_2662 == g_N_FIELD)) || (l_K_2662 == g_N_SUBSTR)))
{
{ R21 * rv2664 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv2664; }
}
{ R21 * rv2665 = NULL;
return rv2665; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2666; memset(&l_K_2666, 0, sizeof l_K_2666);
l_K_2666 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2666 == g_N_NULL))
{
return;
}
else if ((l_K_2666 == g_N_LABELED))
{
{
R12 * l_Y_2667; memset(&l_Y_2667, 0, sizeof l_Y_2667);
l_Y_2667 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2667))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2666 == g_N_GOTO))
{
{
R12 * l_Y_2668; memset(&l_Y_2668, 0, sizeof l_Y_2668);
l_Y_2668 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2669; memset(&l_N_2669, 0, sizeof l_N_2669);
R17 * l_C_2670; memset(&l_C_2670, 0, sizeof l_C_2670);
l_C_2670 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2668 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2668))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2668))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2669 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2668))).f_MV);
for (;;) {
if ((l_N_2669 <= ((rt_int)0LL))) goto L_end2671;
{
if ((((*(R17 *)rt_nil_check(l_C_2670))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2670))).f_NAME));
l_N_2669 = rt_sub(l_N_2669, ((rt_int)1LL));
}
l_C_2670 = ((*(R17 *)rt_nil_check(l_C_2670))).f_NEXT;
}
RT_B_TICK();
} L_end2671: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2668))).f_ACCESS));
}
}
else if ((l_K_2666 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2666 == g_N_CALL))
{
{
R26 l_V_2672; memset(&l_V_2672, 0, sizeof l_V_2672);
S_R26(&l_V_2672, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2672).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2672).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2672).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2666 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2666 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2666 == g_N_LOOP))
{
{
R10 l_END_L_2673; memset(&l_END_L_2673, 0, sizeof l_END_L_2673);
S_R10(&l_END_L_2673, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2673));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2673);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2673));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2673));
}
}
else if ((l_K_2666 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2666 == g_N_EXIT))
{
{
R17 * l_C_2674; memset(&l_C_2674, 0, sizeof l_C_2674);
l_C_2674 = r_LEAVE(((rt_int)2LL));
if ((l_C_2674 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2674))).f_NAME));
}
}
else if ((l_K_2666 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2666 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2666 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2666 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2666 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2666 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2666 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2666 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2675; memset(&l_Y_2675, 0, sizeof l_Y_2675);
l_Y_2675 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2675 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2675))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2675))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2676 = r_CALL_EXPR(p_S, NULL);
return rv2676; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2677; memset(&l_ARM_2677, 0, sizeof l_ARM_2677);
l_ARM_2677 = p_ARMS;
R10 l_WORD_2678; memset(&l_WORD_2678, 0, sizeof l_WORD_2678);
S_R10(&l_WORD_2678, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2679; memset(&l_OPEN_2679, 0, sizeof l_OPEN_2679);
l_OPEN_2679 = ((rt_int)0LL);
rt_int l_CHOSEN_2680; memset(&l_CHOSEN_2680, 0, sizeof l_CHOSEN_2680);
l_CHOSEN_2680 = 0;
for (;;) {
if ((l_ARM_2677 == NULL)) goto L_end2681;
{
{
R23 l_M_2682; memset(&l_M_2682, 0, sizeof l_M_2682);
S_R23(&l_M_2682, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2677))).f_A), 0);
if (l_CHOSEN_2680)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2677))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2677))).f_B);
}
else if ((l_M_2682).f_OK)
{
if ((!r_TEQS(l_WORD_2678, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2679 = rt_add(l_OPEN_2679, ((rt_int)1LL));
S_R10(&l_WORD_2678, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2677))).f_A)));
if (((l_M_2682).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2677))).f_B);
l_CHOSEN_2680 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2677))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2678, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2677))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2677))).f_B);
S_R10(&l_WORD_2678, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2677 = ((*(R21 *)rt_nil_check(l_ARM_2677))).f_NEXT;
}
RT_B_TICK();
} L_end2681: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2680)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2678, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2684_lo = ((rt_int)1LL), it2684_hi = l_OPEN_2679;
for (rt_int it2684 = it2684_lo; it2684 <= it2684_hi; it2684++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2684 == it2684_hi) break;
} } L_end2683: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2685; memset(&l_SAVED_CODE_2685, 0, sizeof l_SAVED_CODE_2685);
S_R14(&l_SAVED_CODE_2685, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2686; memset(&rc2686, 0, sizeof rc2686);  rc2686.f_HEAD = NULL; rc2686.f_TAIL = NULL; rc2686; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2685, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2687; memset(&l_C_2687, 0, sizeof l_C_2687);
S_R10(&l_C_2687, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2688; memset(&l_END_L_2688, 0, sizeof l_END_L_2688);
S_R10(&l_END_L_2688, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2689; memset(&l_IT_2689, 0, sizeof l_IT_2689);
S_R10(&l_IT_2689, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2690; memset(&l_R_2690, 0, sizeof l_R_2690);
l_R_2690 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2691; memset(&l_LO_2691, 0, sizeof l_LO_2691);
S_R26(&l_LO_2691, r_EXPR(((*(R21 *)rt_nil_check(l_R_2690))).f_A, NULL), 0);
R26 l_HI_2692; memset(&l_HI_2692, 0, sizeof l_HI_2692);
S_R26(&l_HI_2692, r_EXPR(((*(R21 *)rt_nil_check(l_R_2690))).f_B, (l_LO_2691).f_T), 0);
R22 * l_T_2693; memset(&l_T_2693, 0, sizeof l_T_2693);
l_T_2693 = r_REAL_TYPE((l_LO_2691).f_T);
R10 l_LOC_2694; memset(&l_LOC_2694, 0, sizeof l_LOC_2694);
R10 l_HIC_2695; memset(&l_HIC_2695, 0, sizeof l_HIC_2695);
if ((((*(R22 *)rt_nil_check(l_T_2693))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2693))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2693))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2693))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2694, (l_LO_2691).f_C, 0);
S_R10(&l_HIC_2695, (l_HI_2692).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2690))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2690))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2694, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2694), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2690))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2695, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2695), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2689, l_LOC_2694, l_IT_2689, l_HIC_2695));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2689, l_IT_2689, l_IT_2689, l_IT_2689));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2696; memset(&l_Y_2696, 0, sizeof l_Y_2696);
l_Y_2696 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2696))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2693))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2696))).f_T = ((*(R22 *)rt_nil_check(l_T_2693))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2696))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2696, rt_str("", 0)), l_IT_2689));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2696, rt_str("", 0)), l_IT_2689));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2696))).f_ACCESS, l_IT_2689, 0);
}
r_DEFINE(l_Y_2696, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2688);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2689, l_IT_2689));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2688));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2697; memset(&l_CS_2697, 0, sizeof l_CS_2697);
l_CS_2697 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2698; memset(&l_C_2698, 0, sizeof l_C_2698);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2698 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2697))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2697))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2697))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2697))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2697))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2697))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2697))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2697))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2699; memset(&l_V_2699, 0, sizeof l_V_2699);
S_R10(&l_V_2699, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2697))).f_RESULT), l_V_2699, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2697))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2697))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2698 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2699));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2700; memset(&l_C_2700, 0, sizeof l_C_2700);
l_C_2700 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2700 == NULL)) goto L_end2701;
{
if ((((*(R17 *)rt_nil_check(l_C_2700))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2700))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2700))).f_KIND == ((rt_int)1LL)))
{
goto L_end2701;
}
l_C_2700 = ((*(R17 *)rt_nil_check(l_C_2700))).f_NEXT;
}
RT_B_TICK();
} L_end2701: ;
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
R21 * l_TG_2702; memset(&l_TG_2702, 0, sizeof l_TG_2702);
l_TG_2702 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2702))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2703; memset(&l_B_2703, 0, sizeof l_B_2703);
S_R26(&l_B_2703, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2702))).f_A, NULL), 0);
if ((!(l_B_2703).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2703).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2704; memset(&l_ARGS_2704, 0, sizeof l_ARGS_2704);
l_ARGS_2704 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2702))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2702))).f_C, g_M_IN, r_VAL_ARG(l_B_2703, NULL))));
R12 * l_Y_2705; memset(&l_Y_2705, 0, sizeof l_Y_2705);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2704))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2705 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2704, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2705 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2704))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2705 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2704, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2705 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2705, l_ARGS_2704, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2703).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2703).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2706; memset(&l_V_2706, 0, sizeof l_V_2706);
S_R26(&l_V_2706, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2703).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2706).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2703).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2703).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2702))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2702))).f_C), (l_V_2706).f_C));
}
}
return;
}
{
R26 l_LV_2707; memset(&l_LV_2707, 0, sizeof l_LV_2707);
S_R26(&l_LV_2707, r_EXPR(l_TG_2702, NULL), 0);
R21 * l_SAVED_Q_2708; memset(&l_SAVED_Q_2708, 0, sizeof l_SAVED_Q_2708);
l_SAVED_Q_2708 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2707).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_2707).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_2709; memset(&l_V_2709, 0, sizeof l_V_2709);
S_R26(&l_V_2709, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2707).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_2707).f_T, (l_LV_2707).f_C, l_V_2709, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2707).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2708;
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
R12 * l_Y_2710; memset(&l_Y_2710, 0, sizeof l_Y_2710);
l_Y_2710 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2711; memset(&l_V_2711, 0, sizeof l_V_2711);
S_R26(&l_V_2711, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2710))).f_T = (l_V_2711).f_T;
((*(R12 *)rt_nil_check(l_Y_2710))).f_WITHV = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2712; memset(&l_CN_2712, 0, sizeof l_CN_2712);
S_R10(&l_CN_2712, r_NEW_OBJECT(l_Y_2710, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2711).f_T))
{
r_CODE(r_INIT_CODE((l_V_2711).f_T, l_CN_2712));
}
r_CODE(r_ASSIGN_CODE((l_V_2711).f_T, l_CN_2712, (l_V_2711).f_C));
}
}
else
{
if ((!(l_V_2711).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2713; memset(&l_P_2713, 0, sizeof l_P_2713);
S_R10(&l_P_2713, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2711).f_T), l_P_2713, (l_V_2711).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2710))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2713), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2710))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2710))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2710))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R21 * l_R_2714; memset(&l_R_2714, 0, sizeof l_R_2714);
l_R_2714 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_2714 == NULL)))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_R_2714))).f_NAME, ((*(R21 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_2715; memset(&l_OLD_2715, 0, sizeof l_OLD_2715);
l_OLD_2715 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2714))).f_NAME);
if ((!(l_OLD_2715 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_2715))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_2716; memset(&l_H_2716, 0, sizeof l_H_2716);
l_H_2716 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_R_2714))).f_NAME);
((*(R12 *)rt_nil_check(l_H_2716))).f_T = ((*(R12 *)rt_nil_check(l_OLD_2715))).f_T;
((*(R12 *)rt_nil_check(l_H_2716))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_2716))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_2715))).f_OWNER;
r_DEFINE(l_H_2716, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_2710, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2717; memset(&l_ARM_2717, 0, sizeof l_ARM_2717);
l_ARM_2717 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_2718; memset(&l_SEEN_2718, 0, sizeof l_SEEN_2718);
l_SEEN_2718 = NULL;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2719; memset(&l_CH_2719, 0, sizeof l_CH_2719);
S_R26(&l_CH_2719, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2720; memset(&l_T_2720, 0, sizeof l_T_2720);
l_T_2720 = r_REAL_TYPE((l_CH_2719).f_T);
R12 * l_BOUND_2721; memset(&l_BOUND_2721, 0, sizeof l_BOUND_2721);
l_BOUND_2721 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2720))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2720))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2722; memset(&l_TMP_2722, 0, sizeof l_TMP_2722);
S_R10(&l_TMP_2722, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2723; memset(&l_WORD_2723, 0, sizeof l_WORD_2723);
S_R10(&l_WORD_2723, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2722, (l_CH_2719).f_C));
for (;;) {
if ((l_ARM_2717 == NULL)) goto L_end2724;
{
{
R21 * l_L_2725; memset(&l_L_2725, 0, sizeof l_L_2725);
l_L_2725 = ((*(R21 *)rt_nil_check(l_ARM_2717))).f_A;
R10 l_COND_2726; memset(&l_COND_2726, 0, sizeof l_COND_2726);
S_R10(&l_COND_2726, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2725 == NULL)) goto L_end2727;
{
S_R10(&l_COND_2726, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2726, l_TMP_2722, (r_EXPR(l_L_2725, l_T_2720)).f_C), 0);
l_L_2725 = ((*(R21 *)rt_nil_check(l_L_2725))).f_NEXT;
}
RT_B_TICK();
} L_end2727: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2723, l_COND_2726));
S_R10(&l_WORD_2723, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2717))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2717))).f_C);
}
l_ARM_2717 = ((*(R21 *)rt_nil_check(l_ARM_2717))).f_NEXT;
}
RT_B_TICK();
} L_end2724: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2723, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_2720))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_2720))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_2720))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_2719);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2720))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2720))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2720))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2720))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2720));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2719).f_C));
for (;;) {
if ((l_ARM_2717 == NULL)) goto L_end2728;
{
{
R21 * l_L_2729; memset(&l_L_2729, 0, sizeof l_L_2729);
l_L_2729 = ((*(R21 *)rt_nil_check(l_ARM_2717))).f_A;
R23 l_FIRST_2730; memset(&l_FIRST_2730, 0, sizeof l_FIRST_2730);
S_R23(&l_FIRST_2730, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2729 == NULL)) goto L_end2731;
{
if ((((*(R21 *)rt_nil_check(l_L_2729))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2732; memset(&l_LO_2732, 0, sizeof l_LO_2732);
S_R23(&l_LO_2732, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2729))).f_A, l_T_2720), 0);
R23 l_HI_2733; memset(&l_HI_2733, 0, sizeof l_HI_2733);
S_R23(&l_HI_2733, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2729))).f_B, l_T_2720), 0);
rt_int l_A_2734; memset(&l_A_2734, 0, sizeof l_A_2734);
l_A_2734 = (l_LO_2732).f_V;
rt_int l_B_2735; memset(&l_B_2735, 0, sizeof l_B_2735);
l_B_2735 = (l_HI_2733).f_V;
if ((!(((l_LO_2732).f_OK && (l_HI_2733).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2729))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2729))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2729))).f_IV == ((rt_int)3LL))))
{
l_A_2734 = rt_add(l_A_2734, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2729))).f_IV >= ((rt_int)2LL)))
{
l_B_2735 = rt_sub(l_B_2735, ((rt_int)1LL));
}
if ((!(l_FIRST_2730).f_OK))
{
S_R23(&l_FIRST_2730, r_SOME(l_A_2734), 0);
}
l_SEEN_2718 = r_DISTINCT_LABEL(l_SEEN_2718, l_A_2734, l_B_2735, ((*(R21 *)rt_nil_check(l_L_2729))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2734), r_NUM(l_B_2735)));
}
}
else
{
{
R23 l_M_2736; memset(&l_M_2736, 0, sizeof l_M_2736);
S_R23(&l_M_2736, r_ENUM_MANIFEST(l_L_2729, l_T_2720), 0);
if ((!(l_M_2736).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2729))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2730).f_OK))
{
S_R23(&l_FIRST_2730, l_M_2736, 0);
}
l_SEEN_2718 = r_DISTINCT_LABEL(l_SEEN_2718, (l_M_2736).f_V, (l_M_2736).f_V, ((*(R21 *)rt_nil_check(l_L_2729))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2736).f_V)));
}
}
l_L_2729 = ((*(R21 *)rt_nil_check(l_L_2729))).f_NEXT;
}
RT_B_TICK();
} L_end2731: ;
if ((!(l_BOUND_2721 == NULL)))
{
{
R22 * l_SAVED_2737; memset(&l_SAVED_2737, 0, sizeof l_SAVED_2737);
l_SAVED_2737 = ((*(R12 *)rt_nil_check(l_BOUND_2721))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2721))).f_T = r_NARROW(l_SAVED_2737, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2730).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2717))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2717))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2721))).f_T = l_SAVED_2737;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2717))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2717))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2717 = ((*(R21 *)rt_nil_check(l_ARM_2717))).f_NEXT;
}
RT_B_TICK();
} L_end2728: ;
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
R25 * l_P_2738; memset(&l_P_2738, 0, sizeof l_P_2738);
l_P_2738 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv2739 = p_SEEN;
return rv2739; }
}
for (;;) {
if ((l_P_2738 == NULL)) goto L_end2740;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_2738))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_2738))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_2738 = ((*(R25 *)rt_nil_check(l_P_2738))).f_NEXT;
}
RT_B_TICK();
} L_end2740: ;
l_P_2738 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_2738)), ({ R25 rc2741; memset(&rc2741, 0, sizeof rc2741);  S_R10(&rc2741.f_LO, r_NO_TEXT(), 0); S_R10(&rc2741.f_HI, r_NO_TEXT(), 0); S_R23(&rc2741.f_MLO, r_SOME(p_A), 0); S_R23(&rc2741.f_MHI, r_SOME(p_B), 0); rc2741.f_ANYARG = 0; rc2741.f_NEXT = p_SEEN; rc2741; }), 0);
{ R25 * rv2742 = l_P_2738;
return rv2742; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R21 * p_S, R26 p_CH) { RT_B_TICK(); 
R10 l_TMP_2743; memset(&l_TMP_2743, 0, sizeof l_TMP_2743);
S_R10(&l_TMP_2743, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_2744; memset(&l_X_2744, 0, sizeof l_X_2744);
S_R26(&l_X_2744, r_MKET(l_TMP_2743, (p_CH).f_T), 0);
R21 * l_ARM_2745; memset(&l_ARM_2745, 0, sizeof l_ARM_2745);
l_ARM_2745 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R10 l_WORD_2746; memset(&l_WORD_2746, 0, sizeof l_WORD_2746);
S_R10(&l_WORD_2746, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_2743, (p_CH).f_C));
for (;;) {
if ((l_ARM_2745 == NULL)) goto L_end2747;
{
{
R21 * l_L_2748; memset(&l_L_2748, 0, sizeof l_L_2748);
l_L_2748 = ((*(R21 *)rt_nil_check(l_ARM_2745))).f_A;
R10 l_COND_2749; memset(&l_COND_2749, 0, sizeof l_COND_2749);
S_R10(&l_COND_2749, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2748 == NULL)) goto L_end2750;
{
if ((((*(R21 *)rt_nil_check(l_L_2748))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_2751; memset(&l_LO_2751, 0, sizeof l_LO_2751);
S_R26(&l_LO_2751, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_2748))).f_A, (p_CH).f_T), 0);
R26 l_HI_2752; memset(&l_HI_2752, 0, sizeof l_HI_2752);
S_R26(&l_HI_2752, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_2748))).f_B, (p_CH).f_T), 0);
rstr l_GE_2753; memset(&l_GE_2753, 0, sizeof l_GE_2753);
l_GE_2753 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_2753, rt_str(">=", 2));
rstr l_LE_2754; memset(&l_LE_2754, 0, sizeof l_LE_2754);
l_LE_2754 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_2754, rt_str("<=", 2));
if (((((*(R21 *)rt_nil_check(l_L_2748))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2748))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_2753, rt_str("> ", 2));
}
if ((((*(R21 *)rt_nil_check(l_L_2748))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_2754, rt_str("< ", 2));
}
S_R10(&l_COND_2749, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_2749, r_VALUE_COMPARE(l_X_2744, l_LO_2751, r_MK(l_GE_2753)), r_VALUE_COMPARE(l_X_2744, l_HI_2752, r_MK(l_LE_2754))), 0);
}
}
else
{
S_R10(&l_COND_2749, r_FMT2(rt_str("@ || @", 6), l_COND_2749, r_VALUE_COMPARE(l_X_2744, r_CASE_LABEL(l_L_2748, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_2748 = ((*(R21 *)rt_nil_check(l_L_2748))).f_NEXT;
}
RT_B_TICK();
} L_end2750: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2746, l_COND_2749));
S_R10(&l_WORD_2746, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2745))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2745))).f_C);
}
l_ARM_2745 = ((*(R21 *)rt_nil_check(l_ARM_2745))).f_NEXT;
}
RT_B_TICK();
} L_end2747: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2746, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R21 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_2755; memset(&l_V_2755, 0, sizeof l_V_2755);
S_R26(&l_V_2755, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_2755).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv2756 = l_V_2755;
return rv2756; }
rt_raise(RT_X_INIT);
}
static R10 r_VALUE_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R10 rv2757 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv2757; }
}
{ R10 rv2758 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv2758; }
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
{ R12 * rv2759 = NULL;
return rv2759; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2760 = NULL;
return rv2760; }
}
{
R12 * l_Y_2761; memset(&l_Y_2761, 0, sizeof l_Y_2761);
l_Y_2761 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2761 == NULL))
{
{ R12 * rv2762 = NULL;
return rv2762; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2761))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2763 = NULL;
return rv2763; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2761))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv2764 = NULL;
return rv2764; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2761))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2765 = NULL;
return rv2765; }
}
{
R24 * l_F_2766; memset(&l_F_2766, 0, sizeof l_F_2766);
l_F_2766 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2761))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2766 == NULL))
{
{ R12 * rv2767 = NULL;
return rv2767; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2766))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2768 = NULL;
return rv2768; }
}
}
{ R12 * rv2769 = l_Y_2761;
return rv2769; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2770; memset(&l_N_2770, 0, sizeof l_N_2770);
l_N_2770 = r_COPY_TYP(p_T);
R24 * l_F_2771; memset(&l_F_2771, 0, sizeof l_F_2771);
l_F_2771 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2772; memset(&l_A_2772, 0, sizeof l_A_2772);
l_A_2772 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2773; memset(&l_HEAD_2773, 0, sizeof l_HEAD_2773);
l_HEAD_2773 = NULL;
R25 * l_TAIL_2774; memset(&l_TAIL_2774, 0, sizeof l_TAIL_2774);
l_TAIL_2774 = NULL;
for (;;) {
if ((l_F_2771 == NULL)) goto L_end2775;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2771))).f_KIND == ((rt_int)0LL))) && (!(l_A_2772 == NULL))))
{
{
R25 * l_B_2776; memset(&l_B_2776, 0, sizeof l_B_2776);
l_B_2776 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2776)), (*(R25 *)rt_nil_check(l_A_2772)), 0);
((*(R25 *)rt_nil_check(l_B_2776))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2771))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2776))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2776))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2776))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2774 == NULL))
{
l_HEAD_2773 = l_B_2776;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2774))).f_NEXT = l_B_2776;
}
l_TAIL_2774 = l_B_2776;
}
l_A_2772 = ((*(R25 *)rt_nil_check(l_A_2772))).f_NEXT;
}
l_F_2771 = ((*(R24 *)rt_nil_check(l_F_2771))).f_NEXT;
}
RT_B_TICK();
} L_end2775: ;
((*(R22 *)rt_nil_check(l_N_2770))).f_ARGS = l_HEAD_2773;
{ R22 * rv2777 = l_N_2770;
return rv2777; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2778; memset(&l_ARM_2778, 0, sizeof l_ARM_2778);
l_ARM_2778 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2779; memset(&l_SAVED_2779, 0, sizeof l_SAVED_2779);
l_SAVED_2779 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2778 == NULL)) goto L_end2780;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2778))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2778))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2778))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2779;
return;
}
l_ARM_2778 = ((*(R21 *)rt_nil_check(l_ARM_2778))).f_NEXT;
}
RT_B_TICK();
} L_end2780: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2779;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2781; memset(&l_T_2781, 0, sizeof l_T_2781);
l_T_2781 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2781))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2782 = l_T_2781;
return rv2782; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2783; memset(&l_TD_2783, 0, sizeof l_TD_2783);
S_R10(&l_TD_2783, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2784; memset(&l_P_2784, 0, sizeof l_P_2784);
l_P_2784 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2784 == NULL)) goto L_end2785;
{
{
R12 * l_Y_2786; memset(&l_Y_2786, 0, sizeof l_Y_2786);
l_Y_2786 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2784))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2786))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2786))).f_DECL = l_P_2784;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2786, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2786))).f_INPUT = 1;
r_DEFINE(l_Y_2786, ((*(R21 *)rt_nil_check(l_P_2784))).f_LINE);
}
l_P_2784 = ((*(R21 *)rt_nil_check(l_P_2784))).f_NEXT;
}
RT_B_TICK();
} L_end2785: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2783));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2783, l_TD_2783));
l_P_2784 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2784 == NULL)) goto L_end2787;
{
r_ACTIVATE_PATH(l_P_2784, l_TD_2783);
l_P_2784 = ((*(R21 *)rt_nil_check(l_P_2784))).f_NEXT;
}
RT_B_TICK();
} L_end2787: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2783, l_TD_2783, l_TD_2783));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2783));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2788; memset(&l_FN_2788, 0, sizeof l_FN_2788);
S_R10(&l_FN_2788, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2789; memset(&l_FT_2789, 0, sizeof l_FT_2789);
S_R10(&l_FT_2789, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2790; memset(&l_Y_2790, 0, sizeof l_Y_2790);
l_Y_2790 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2791; memset(&l_H_2791, 0, sizeof l_H_2791);
S_R10(&l_H_2791, r_OBJ_ACCESS(l_Y_2790), 0);
R10 l_IT_2792; memset(&l_IT_2792, 0, sizeof l_IT_2792);
S_R10(&l_IT_2792, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2793; memset(&l_PRIO_2793, 0, sizeof l_PRIO_2793);
S_R10(&l_PRIO_2793, r_MK(rt_str("0", 1)), 0);
R10 l_START_2794; memset(&l_START_2794, 0, sizeof l_START_2794);
R22 * l_LT_2795; memset(&l_LT_2795, 0, sizeof l_LT_2795);
l_LT_2795 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2789, l_FT_2789));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2793, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2796; memset(&l_R_2796, 0, sizeof l_R_2796);
l_R_2796 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2797; memset(&l_LV_2797, 0, sizeof l_LV_2797);
S_R26(&l_LV_2797, r_EXPR(((*(R21 *)rt_nil_check(l_R_2796))).f_A, NULL), 0);
R10 l_LO_2798; memset(&l_LO_2798, 0, sizeof l_LO_2798);
S_R10(&l_LO_2798, (l_LV_2797).f_C, 0);
R10 l_HI_2799; memset(&l_HI_2799, 0, sizeof l_HI_2799);
S_R10(&l_HI_2799, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2796))).f_B, (l_LV_2797).f_T)).f_C, 0);
R22 * l_RT_2800; memset(&l_RT_2800, 0, sizeof l_RT_2800);
l_RT_2800 = r_REAL_TYPE((l_LV_2797).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2800))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_2800))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2795 = ((*(R22 *)rt_nil_check(l_RT_2800))).f_BASE;
S_R10(&l_HI_2799, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2796))).f_B, l_LT_2795)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2800))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2800))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2796))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2796))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2798, r_FMT1(rt_str("(@) + 1", 7), l_LO_2798), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2796))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2799, r_FMT1(rt_str("(@) - 1", 7), l_HI_2799), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2791, l_LO_2798, l_HI_2799));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2792, l_H_2791, l_IT_2792, l_H_2791), l_IT_2792));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2792));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2789, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2792));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2801; memset(&l_V_2801, 0, sizeof l_V_2801);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2802; memset(&l_I_2802, 0, sizeof l_I_2802);
l_I_2802 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2802))).f_T = l_LT_2795;
((*(R12 *)rt_nil_check(l_I_2802))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2802))).f_ACCESS, l_IT_2792, 0);
((*(R12 *)rt_nil_check(l_I_2802))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2802, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2801, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2801).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2801).f_C));
}
}
S_R10(&l_START_2794, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2791, l_IT_2792, l_FN_2788, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2794, p_TD, l_PRIO_2793, l_IT_2792));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2791));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2794, p_TD, l_PRIO_2793));
}
r_PATH_BODY(p_P, l_FN_2788, l_FT_2789, l_LT_2795);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2803 = r_MK(rt_str("NULL", 4));
return rv2803; }
}
{ R10 rv2804 = r_MK(rt_str("F", 1));
return rv2804; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2805; memset(&l_SAVED_CODE_2805, 0, sizeof l_SAVED_CODE_2805);
S_R14(&l_SAVED_CODE_2805, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2806; memset(&l_SAVED_CTXS_2806, 0, sizeof l_SAVED_CTXS_2806);
l_SAVED_CTXS_2806 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2807; memset(&l_OUTER_2807, 0, sizeof l_OUTER_2807);
l_OUTER_2807 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2808; memset(&l_H_2808, 0, sizeof l_H_2808);
l_H_2808 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2809; memset(&l_CS_2809, 0, sizeof l_CS_2809);
l_CS_2809 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_UPT_2810; memset(&l_UPT_2810, 0, sizeof l_UPT_2810);
S_R10(&l_UPT_2810, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2807))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2810, ((*(R18 *)rt_nil_check(l_OUTER_2807))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2809)), ({ R18 rc2811; memset(&rc2811, 0, sizeof rc2811);  rc2811.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2807))).f_LEVEL, ((rt_int)1LL)); rc2811.f_R = NULL; rc2811.f_FRAMED = 1; S_R10(&rc2811.f_FTYPE, p_FT, 0); S_R14(&rc2811.f_FIELDS, ({ R14 rc2812; memset(&rc2812, 0, sizeof rc2812);  rc2812.f_HEAD = NULL; rc2812.f_TAIL = NULL; rc2812; }), 0); rc2811.f_UP = l_OUTER_2807; rc2811.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2808))).f_B; rc2811.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2808))).f_A; rc2811.f_RESULT = NULL; rc2811.f_IS_PATH = 1; S_R10(&rc2811.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2811; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2810), &((*(R18 *)rt_nil_check(l_CS_2809))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2809;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2813; memset(&rc2813, 0, sizeof rc2813);  rc2813.f_HEAD = NULL; rc2813.f_TAIL = NULL; rc2813; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2808))).f_B, ((*(R21 *)rt_nil_check(l_H_2808))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2814; memset(&l_I_2814, 0, sizeof l_I_2814);
l_I_2814 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2814))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2814))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2814))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2814))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2809))).f_FIELDS);
r_DEFINE(l_I_2814, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2815; memset(&l_L_2815, 0, sizeof l_L_2815);
l_L_2815 = ((*(R21 *)rt_nil_check(l_H_2808))).f_A;
R10 l_C_2816; memset(&l_C_2816, 0, sizeof l_C_2816);
S_R10(&l_C_2816, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2815 == NULL)) goto L_end2817;
{
S_R10(&l_C_2816, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2816, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2815))).f_NAME)), 0);
l_L_2815 = ((*(R21 *)rt_nil_check(l_L_2815))).f_NEXT;
}
RT_B_TICK();
} L_end2817: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2816));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2809))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2807;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2805, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2806;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2818; memset(&l_C_2818, 0, sizeof l_C_2818);
l_C_2818 = (p_B).f_HEAD;
R10 l_R_2819; memset(&l_R_2819, 0, sizeof l_R_2819);
S_R10(&l_R_2819, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2818 == NULL)) goto L_end2820;
{
S_R10(&l_R_2819, r_CAT(l_R_2819, ((*(R15 *)rt_nil_check(l_C_2818))).f_T), 0);
l_C_2818 = ((*(R15 *)rt_nil_check(l_C_2818))).f_NEXT;
}
RT_B_TICK();
} L_end2820: ;
{ R10 rv2821 = l_R_2819;
return rv2821; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2822; memset(&l_NAME_2822, 0, sizeof l_NAME_2822);
S_R10(&l_NAME_2822, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2823; memset(&l_SUB_2823, 0, sizeof l_SUB_2823);
S_R10(&l_SUB_2823, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2823, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2824; memset(&l_Y_2824, 0, sizeof l_Y_2824);
l_Y_2824 = r_LOOKUP(l_NAME_2822);
if ((l_Y_2824 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2822);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2824))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2822);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2824))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2825 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2824), l_SUB_2823);
return rv2825; }
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
R10 l_NAME_2826; memset(&l_NAME_2826, 0, sizeof l_NAME_2826);
S_R10(&l_NAME_2826, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2827; memset(&l_LINE_2827, 0, sizeof l_LINE_2827);
l_LINE_2827 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2826, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2828; memset(&l_V_2828, 0, sizeof l_V_2828);
S_R26(&l_V_2828, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2828).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2827, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2829 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2828).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2828).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2829; }
}
}
else if (r_TEQS(l_NAME_2826, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2830 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2830; }
}
{ R26 rv2831 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2831; }
}
else if (r_TEQS(l_NAME_2826, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2832 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2832; }
}
{ R26 rv2833 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2833; }
}
else if ((r_TEQS(l_NAME_2826, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2826, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2827, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2826);
}
{
R26 l_V_2834; memset(&l_V_2834, 0, sizeof l_V_2834);
S_R26(&l_V_2834, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2834).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2827, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2834).f_LVAL))
{
r_FAIL(l_LINE_2827, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2826, rt_str("REQUEST", 7)))
{
{ R26 rv2835 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2834).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2835; }
}
{ R26 rv2836 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2834).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2836; }
}
}
else if (r_TEQS(l_NAME_2826, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2827);
{ R26 rv2837 = r_START_IO_CALL(p_E);
return rv2837; }
}
r_FAILT(l_LINE_2827, rt_str("unknown routine ", 16), l_NAME_2826);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2838; memset(&l_ARGS_2838, 0, sizeof l_ARGS_2838);
l_ARGS_2838 = r_CALL_ARGS(p_E);
R12 * l_Y_2839; memset(&l_Y_2839, 0, sizeof l_Y_2839);
l_Y_2839 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2838, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2840; memset(&l_R_2840, 0, sizeof l_R_2840);
if ((l_Y_2839 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2840, r_CALL_SYM(l_Y_2839, l_ARGS_2838, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2841 = l_R_2840;
return rv2841; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2842; memset(&l_I_2842, 0, sizeof l_I_2842);
l_I_2842 = ((R19 *)rt_b_new(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2842)), ({ R19 rc2843; memset(&rc2843, 0, sizeof rc2843);  rc2843.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2843.f_IMPORTS = p_IMPORTS; rc2843.f_SIGNALS = p_SIGNALS; S_R10(&rc2843.f_NAME, p_NAME, 0); rc2843.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2843; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2842;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2844; memset(&l_BASE_2844, 0, sizeof l_BASE_2844);
S_R10(&l_BASE_2844, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2845; memset(&l_S_2845, 0, sizeof l_S_2845);
l_S_2845 = rt_b_str_new((l_BASE_2844).f_LEN, 0);
rt_b_assign(&l_S_2845, r_STR(l_BASE_2844, (l_BASE_2844).f_LEN));
R21 * l_N_2846; memset(&l_N_2846, 0, sizeof l_N_2846);
l_N_2846 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2848_lo = ((rt_int)0LL), it2848_hi = rt_sub((l_BASE_2844).f_LEN, ((rt_int)1LL));
for (rt_int it2848 = it2848_lo; it2848 <= it2848_hi; it2848++) {
{
if (rt_b_eq(rt_b_slice(l_S_2845, it2848, it2848), rt_str("$", 1)))
{
S_R10(&l_BASE_2844, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_2845, ((rt_int)0LL), rt_sub(it2848, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2845, rt_add(it2848, ((rt_int)1LL)), rt_sub((l_BASE_2844).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2848 == it2848_hi) break;
} } L_end2847: ;
for (;;) {
if ((l_N_2846 == NULL)) goto L_end2849;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2846))).f_NAME, l_BASE_2844))
{
{ R10 rv2850 = r_FMT2(rt_str("@_@", 3), l_BASE_2844, r_NEW_NAME(rt_str("", 0)));
return rv2850; }
}
l_N_2846 = ((*(R21 *)rt_nil_check(l_N_2846))).f_NEXT;
}
RT_B_TICK();
} L_end2849: ;
l_N_2846 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2846))).f_NAME, l_BASE_2844, 0);
((*(R21 *)rt_nil_check(l_N_2846))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2846;
{ R10 rv2851 = l_BASE_2844;
return rv2851; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2852 = 0;
return rv2852; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2853 = 1;
return rv2853; }
}
{ rt_int rv2854 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2854; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2855; memset(&l_S_2855, 0, sizeof l_S_2855);
l_S_2855 = p_S0;
for (;;) {
if ((l_S_2855 == NULL)) goto L_end2856;
{
if (((((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_PAR)))
{
{ rt_int rv2857 = 1;
return rv2857; }
}
if (((((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2855))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2855))).f_B)))
{
{ rt_int rv2858 = 1;
return rv2858; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2855))).f_A))).f_B))
{
{ rt_int rv2859 = 1;
return rv2859; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2855))).f_B))).f_B))
{
{ rt_int rv2860 = 1;
return rv2860; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2861; memset(&l_A_2861, 0, sizeof l_A_2861);
l_A_2861 = ((*(R21 *)rt_nil_check(l_S_2855))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2855))).f_KIND == g_N_CASE))
{
l_A_2861 = ((*(R21 *)rt_nil_check(l_S_2855))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2855))).f_D == NULL)))
{
{ rt_int rv2862 = 1;
return rv2862; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2855))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2855))).f_C))).f_B))
{
{ rt_int rv2863 = 1;
return rv2863; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2855))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2855))).f_B))).f_B))
{
{ rt_int rv2864 = 1;
return rv2864; }
}
}
for (;;) {
if ((l_A_2861 == NULL)) goto L_end2865;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2861))).f_C == NULL)))
{
{ rt_int rv2866 = 1;
return rv2866; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2861))).f_B))).f_B))
{
{ rt_int rv2867 = 1;
return rv2867; }
}
l_A_2861 = ((*(R21 *)rt_nil_check(l_A_2861))).f_NEXT;
}
RT_B_TICK();
} L_end2865: ;
}
}
l_S_2855 = ((*(R21 *)rt_nil_check(l_S_2855))).f_NEXT;
}
RT_B_TICK();
} L_end2856: ;
{ rt_int rv2868 = 0;
return rv2868; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2869; memset(&l_Y_2869, 0, sizeof l_Y_2869);
l_Y_2869 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2870; memset(&l_S_2870, 0, sizeof l_S_2870);
l_S_2870 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_2870, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2869))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2869))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2869))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2869))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2869, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2872_lo = ((rt_int)1LL), it2872_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2872 = it2872_lo; it2872 <= it2872_hi; it2872++) {
{
if (rt_b_eq(rt_b_slice(l_S_2870, it2872, it2872), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2869))).f_PREFIX, r_MKN(rt_b_slice(l_S_2870, ((rt_int)0LL), rt_sub(it2872, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2873; memset(&l_SHORT_2873, 0, sizeof l_SHORT_2873);
l_SHORT_2873 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2870, rt_add(it2872, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2873))).f_ORIG = l_Y_2869;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2873))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2869))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2873))).f_DECL = p_R;
r_DEFINE(l_SHORT_2873, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2871;
}
}
RT_B_TICK();
if (it2872 == it2872_hi) break;
} } L_end2871: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2874; memset(&l_R_2874, 0, sizeof l_R_2874);
l_R_2874 = p_RS;
for (;;) {
if ((l_R_2874 == NULL)) goto L_end2875;
{
if ((((*(R21 *)rt_nil_check(l_R_2874))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2874);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2874);
}
l_R_2874 = ((*(R21 *)rt_nil_check(l_R_2874))).f_NEXT;
}
RT_B_TICK();
} L_end2875: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2876; memset(&l_R_2876, 0, sizeof l_R_2876);
l_R_2876 = p_RS;
for (;;) {
if ((l_R_2876 == NULL)) goto L_end2877;
{
if ((((*(R21 *)rt_nil_check(l_R_2876))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2878; memset(&l_M_2878, 0, sizeof l_M_2878);
l_M_2878 = r_FIND_DECL(l_R_2876);
r_ENTER_MODULE(l_M_2878);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2876))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2878);
}
}
else
{
{
R12 * l_Y_2879; memset(&l_Y_2879, 0, sizeof l_Y_2879);
l_Y_2879 = r_FIND_DECL(l_R_2876);
r_ROUTINE_HEADER(l_Y_2879);
}
}
l_R_2876 = ((*(R21 *)rt_nil_check(l_R_2876))).f_NEXT;
}
RT_B_TICK();
} L_end2877: ;
}
static void r_DISTINCT_SIGNATURES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2880; memset(&l_R_2880, 0, sizeof l_R_2880);
l_R_2880 = p_RS;
for (;;) {
if ((l_R_2880 == NULL)) goto L_end2881;
{
if ((((*(R21 *)rt_nil_check(l_R_2880))).f_KIND == g_N_ROUTINE))
{
{
R21 * l_Q_2882; memset(&l_Q_2882, 0, sizeof l_Q_2882);
l_Q_2882 = ((*(R21 *)rt_nil_check(l_R_2880))).f_NEXT;
for (;;) {
if ((l_Q_2882 == NULL)) goto L_end2883;
{
if (((((*(R21 *)rt_nil_check(l_Q_2882))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_Q_2882))).f_NAME, ((*(R21 *)rt_nil_check(l_R_2880))).f_NAME)))
{
{
R12 * l_A_2884; memset(&l_A_2884, 0, sizeof l_A_2884);
l_A_2884 = r_FIND_DECL(l_R_2880);
R12 * l_B_2885; memset(&l_B_2885, 0, sizeof l_B_2885);
l_B_2885 = r_FIND_DECL(l_Q_2882);
r_ROUTINE_HEADER(l_A_2884);
r_ROUTINE_HEADER(l_B_2885);
if (r_SAME_SIGNATURE(l_A_2884, l_B_2885))
{
r_FAILT(((*(R21 *)rt_nil_check(l_Q_2882))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R21 *)rt_nil_check(l_Q_2882))).f_NAME);
}
}
}
l_Q_2882 = ((*(R21 *)rt_nil_check(l_Q_2882))).f_NEXT;
}
RT_B_TICK();
} L_end2883: ;
}
}
l_R_2880 = ((*(R21 *)rt_nil_check(l_R_2880))).f_NEXT;
}
RT_B_TICK();
} L_end2881: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2886; memset(&l_Y_2886, 0, sizeof l_Y_2886);
l_Y_2886 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2886 == NULL)) goto L_end2887;
{
if (((((*(R12 *)rt_nil_check(l_Y_2886))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2886))).f_ORIG == NULL)))
{
{ R12 * rv2888 = l_Y_2886;
return rv2888; }
}
l_Y_2886 = r_LOOKUP_NEXT(l_Y_2886);
}
RT_B_TICK();
} L_end2887: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2889; memset(&l_D_2889, 0, sizeof l_D_2889);
l_D_2889 = p_DECLS;
for (;;) {
if ((l_D_2889 == NULL)) goto L_end2890;
{
if (((((*(R21 *)rt_nil_check(l_D_2889))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2889))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2889))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2891; memset(&l_Y_2891, 0, sizeof l_Y_2891);
l_Y_2891 = r_FIND_DECL(l_D_2889);
R22 * l_T_2892; memset(&l_T_2892, 0, sizeof l_T_2892);
l_T_2892 = r_RESOLVE_USER(r_TYPE_REF(l_D_2889));
}
}
}
l_D_2889 = ((*(R21 *)rt_nil_check(l_D_2889))).f_NEXT;
}
RT_B_TICK();
} L_end2890: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2893; memset(&l_TS_2893, 0, sizeof l_TS_2893);
l_TS_2893 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2893))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2894 = l_TS_2893;
return rv2894; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2895; memset(&l_Y_2895, 0, sizeof l_Y_2895);
l_Y_2895 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2896; memset(&l_SAVED_2896, 0, sizeof l_SAVED_2896);
l_SAVED_2896 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2895))).f_DECL = p_M;
r_DEFINE(l_Y_2895, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2897; memset(&l_MARK_2897, 0, sizeof l_MARK_2897);
l_MARK_2897 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2895;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2895))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2897);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2896;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2895);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2898; memset(&l_Y_2898, 0, sizeof l_Y_2898);
l_Y_2898 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2898 == NULL)) goto L_end2899;
{
{
R12 * l_NEXT_2900; memset(&l_NEXT_2900, 0, sizeof l_NEXT_2900);
l_NEXT_2900 = ((*(R12 *)rt_nil_check(l_Y_2898))).f_SNEXT;
r_DEFINE(l_Y_2898, ((rt_int)0LL));
l_Y_2898 = l_NEXT_2900;
}
}
RT_B_TICK();
} L_end2899: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2901; memset(&l_MARK_2901, 0, sizeof l_MARK_2901);
l_MARK_2901 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2901 == NULL)) goto L_end2902;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2901))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2902;
}
l_MARK_2901 = ((*(R12 *)rt_nil_check(l_MARK_2901))).f_SNEXT;
}
RT_B_TICK();
} L_end2902: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2901);
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
{ rt_int rv2903 = 1;
return rv2903; }
}
}
{ rt_int rv2904 = 0;
return rv2904; }
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
R21 * l_D_2905; memset(&l_D_2905, 0, sizeof l_D_2905);
l_D_2905 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2906; memset(&l_Y_2906, 0, sizeof l_Y_2906);
l_Y_2906 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2906 == NULL)) goto L_end2907;
{
if (r_EXPORTED_BY(l_D_2905, l_Y_2906))
{
((*(R12 *)rt_nil_check(l_Y_2906))).f_EXPORTED = 1;
{
R12 * l_A_2908; memset(&l_A_2908, 0, sizeof l_A_2908);
l_A_2908 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2906))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2906))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2908)), (*(R12 *)rt_nil_check(l_Y_2906)), 0);
((*(R12 *)rt_nil_check(l_A_2908))).f_ORIG = r_ORIGINAL(l_Y_2906);
((*(R12 *)rt_nil_check(l_A_2908))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2908, ((*(R21 *)rt_nil_check(l_D_2905))).f_LINE);
}
}
l_Y_2906 = ((*(R12 *)rt_nil_check(l_Y_2906))).f_SNEXT;
}
RT_B_TICK();
} L_end2907: ;
{
R21 * l_X_2909; memset(&l_X_2909, 0, sizeof l_X_2909);
l_X_2909 = ((*(R21 *)rt_nil_check(l_D_2905))).f_B;
for (;;) {
if ((l_X_2909 == NULL)) goto L_end2910;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2909))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2909))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2909))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_2909);
l_X_2909 = ((*(R21 *)rt_nil_check(l_X_2909))).f_NEXT;
}
RT_B_TICK();
} L_end2910: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R21 * p_X) { RT_B_TICK(); 
R12 * l_Y_2911; memset(&l_Y_2911, 0, sizeof l_Y_2911);
l_Y_2911 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_2912; memset(&l_IS_TYPE_2912, 0, sizeof l_IS_TYPE_2912);
l_IS_TYPE_2912 = 0;
rt_int l_IS_ROUTINE_2913; memset(&l_IS_ROUTINE_2913, 0, sizeof l_IS_ROUTINE_2913);
l_IS_ROUTINE_2913 = 0;
for (;;) {
if ((l_Y_2911 == NULL)) goto L_end2914;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_2911))).f_NAME, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_2911))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_2912 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_2911))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_2911))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_2911))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_2913 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_2911))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_2913 = 1;
}
l_Y_2911 = ((*(R12 *)rt_nil_check(l_Y_2911))).f_SNEXT;
}
RT_B_TICK();
} L_end2914: ;
if (((!l_IS_TYPE_2912) && (!l_IS_ROUTINE_2913)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_2912))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
{
R21 * l_OP_2915; memset(&l_OP_2915, 0, sizeof l_OP_2915);
l_OP_2915 = ((*(R21 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_2915 == NULL)) goto L_end2916;
{
{
rt_int l_FOUND_2917; memset(&l_FOUND_2917, 0, sizeof l_FOUND_2917);
l_FOUND_2917 = 0;
l_Y_2911 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2911 == NULL)) goto L_end2918;
{
if (((((*(R12 *)rt_nil_check(l_Y_2911))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2911))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_2911)), ((*(R21 *)rt_nil_check(l_OP_2915))).f_NAME))
{
l_FOUND_2917 = 1;
}
}
l_Y_2911 = ((*(R12 *)rt_nil_check(l_Y_2911))).f_SNEXT;
}
RT_B_TICK();
} L_end2918: ;
if ((!l_FOUND_2917))
{
r_FAILT(((*(R21 *)rt_nil_check(l_OP_2915))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R21 *)rt_nil_check(l_OP_2915))).f_NAME);
}
}
l_OP_2915 = ((*(R21 *)rt_nil_check(l_OP_2915))).f_NEXT;
}
RT_B_TICK();
} L_end2916: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2919; memset(&l_Y_2919, 0, sizeof l_Y_2919);
l_Y_2919 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2919 == NULL)) goto L_end2920;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2919))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2919))).f_PREFIX, p_NAME)))
{
{ rt_int rv2921 = 1;
return rv2921; }
}
l_Y_2919 = ((*(R12 *)rt_nil_check(l_Y_2919))).f_SNEXT;
}
RT_B_TICK();
} L_end2920: ;
{ rt_int rv2922 = 0;
return rv2922; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2923; memset(&l_X_2923, 0, sizeof l_X_2923);
l_X_2923 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2924 = 0;
return rv2924; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2925 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2925; }
}
for (;;) {
if ((l_X_2923 == NULL)) goto L_end2926;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2923))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2927 = 1;
return rv2927; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2923))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2923))).f_A == NULL))
{
{ rt_int rv2928 = 1;
return rv2928; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2923))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2929 = 1;
return rv2929; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2930; memset(&l_T_2930, 0, sizeof l_T_2930);
l_T_2930 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2923))).f_NAME, p_Y);
if ((!(l_T_2930 == NULL)))
{
{ rt_int rv2931 = 1;
return rv2931; }
}
}
}
l_X_2923 = ((*(R21 *)rt_nil_check(l_X_2923))).f_NEXT;
}
RT_B_TICK();
} L_end2926: ;
{ rt_int rv2932 = 0;
return rv2932; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2933; memset(&l_M_2933, 0, sizeof l_M_2933);
l_M_2933 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2934; memset(&l_Z_2934, 0, sizeof l_Z_2934);
if ((l_M_2933 == NULL))
{
{ R12 * rv2935 = NULL;
return rv2935; }
}
l_Z_2934 = ((*(R12 *)rt_nil_check(l_M_2933))).f_MEMBERS;
for (;;) {
if ((l_Z_2934 == NULL)) goto L_end2936;
{
if (((((*(R12 *)rt_nil_check(l_Z_2934))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2934))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2934))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2934))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2934))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2937 = l_Z_2934;
return rv2937; }
}
}
}
}
l_Z_2934 = ((*(R12 *)rt_nil_check(l_Z_2934))).f_SNEXT;
}
RT_B_TICK();
} L_end2936: ;
{ R12 * rv2938 = NULL;
return rv2938; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2939; memset(&l_R_2939, 0, sizeof l_R_2939);
l_R_2939 = p_RS;
for (;;) {
if ((l_R_2939 == NULL)) goto L_end2940;
{
if ((((*(R21 *)rt_nil_check(l_R_2939))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2941; memset(&l_M_2941, 0, sizeof l_M_2941);
l_M_2941 = r_FIND_DECL(l_R_2939);
R21 * l_D_2942; memset(&l_D_2942, 0, sizeof l_D_2942);
l_D_2942 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2939))).f_C))).f_A;
r_ENTER_MODULE(l_M_2941);
for (;;) {
if ((l_D_2942 == NULL)) goto L_end2943;
{
if (((((*(R21 *)rt_nil_check(l_D_2942))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2942))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2942);
}
l_D_2942 = ((*(R21 *)rt_nil_check(l_D_2942))).f_NEXT;
}
RT_B_TICK();
} L_end2943: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2939))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2939))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2939))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2941);
}
}
l_R_2939 = ((*(R21 *)rt_nil_check(l_R_2939))).f_NEXT;
}
RT_B_TICK();
} L_end2940: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2944; memset(&l_R_2944, 0, sizeof l_R_2944);
l_R_2944 = p_RS;
for (;;) {
if ((l_R_2944 == NULL)) goto L_end2945;
{
if ((((*(R21 *)rt_nil_check(l_R_2944))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2946; memset(&l_M_2946, 0, sizeof l_M_2946);
l_M_2946 = r_FIND_DECL(l_R_2944);
r_ENTER_MODULE(l_M_2946);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2944))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2946);
}
}
else
{
{
R12 * l_Y_2947; memset(&l_Y_2947, 0, sizeof l_Y_2947);
l_Y_2947 = r_FIND_DECL(l_R_2944);
if ((!((*(R12 *)rt_nil_check(l_Y_2947))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2947);
}
}
}
l_R_2944 = ((*(R21 *)rt_nil_check(l_R_2944))).f_NEXT;
}
RT_B_TICK();
} L_end2945: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2948; memset(&l_LEVEL_2948, 0, sizeof l_LEVEL_2948);
l_LEVEL_2948 = r_CUR_LEVEL();
rt_int l_MORE_2949; memset(&l_MORE_2949, 0, sizeof l_MORE_2949);
l_MORE_2949 = 1;
for (;;) {
if ((!l_MORE_2949)) goto L_end2950;
{
l_MORE_2949 = 0;
{
R12 * l_P_2951; memset(&l_P_2951, 0, sizeof l_P_2951);
l_P_2951 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2952; memset(&l_PREV_2952, 0, sizeof l_PREV_2952);
l_PREV_2952 = NULL;
for (;;) {
if ((l_P_2951 == NULL)) goto L_end2953;
{
if ((((*(R12 *)rt_nil_check(l_P_2951))).f_LEVEL == l_LEVEL_2948))
{
if ((l_PREV_2952 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2951))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2952))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2951))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2951);
r_ROUTINE_BODY(l_P_2951);
r_LEAVE_MODULE_OF(l_P_2951);
l_MORE_2949 = 1;
goto L_end2953;
}
l_PREV_2952 = l_P_2951;
l_P_2951 = ((*(R12 *)rt_nil_check(l_P_2951))).f_MEMBERS;
}
RT_B_TICK();
} L_end2953: ;
}
}
RT_B_TICK();
} L_end2950: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2954; memset(&l_D_2954, 0, sizeof l_D_2954);
l_D_2954 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2955; memset(&l_S_2955, 0, sizeof l_S_2955);
l_S_2955 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2954 == NULL)) goto L_end2956;
{
if (((((*(R21 *)rt_nil_check(l_D_2954))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2954))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2954);
}
l_D_2954 = ((*(R21 *)rt_nil_check(l_D_2954))).f_NEXT;
}
RT_B_TICK();
} L_end2956: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2955 == NULL)) goto L_end2957;
{
r_STMT(l_S_2955);
l_S_2955 = ((*(R21 *)rt_nil_check(l_S_2955))).f_NEXT;
}
RT_B_TICK();
} L_end2957: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2958; memset(&l_R_2958, 0, sizeof l_R_2958);
l_R_2958 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2959; memset(&l_SAVED_CODE_2959, 0, sizeof l_SAVED_CODE_2959);
S_R14(&l_SAVED_CODE_2959, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2960; memset(&l_SAVED_CTXS_2960, 0, sizeof l_SAVED_CTXS_2960);
l_SAVED_CTXS_2960 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2961; memset(&l_SAVED_BINDS_2961, 0, sizeof l_SAVED_BINDS_2961);
l_SAVED_BINDS_2961 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2962; memset(&l_OUTER_2962, 0, sizeof l_OUTER_2962);
l_OUTER_2962 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2963; memset(&l_CS_2963, 0, sizeof l_CS_2963);
l_CS_2963 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_PROLOGUE_2964; memset(&l_PROLOGUE_2964, 0, sizeof l_PROLOGUE_2964);
S_R10(&l_PROLOGUE_2964, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2963)), ({ R18 rc2965; memset(&rc2965, 0, sizeof rc2965);  rc2965.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2965.f_R = p_Y; rc2965.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2965.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2965.f_FIELDS, ({ R14 rc2966; memset(&rc2966, 0, sizeof rc2966);  rc2966.f_HEAD = NULL; rc2966.f_TAIL = NULL; rc2966; }), 0); rc2965.f_UP = l_OUTER_2962; rc2965.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2958))).f_E; rc2965.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2958))).f_D))).f_A; rc2965.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2965.f_IS_PATH = 0; S_R10(&rc2965.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2965; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2963))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2963))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2963))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2963))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2964, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2963))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2963))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2964, r_CATS(l_PROLOGUE_2964, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2963;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2967; memset(&rc2967, 0, sizeof rc2967);  rc2967.f_HEAD = NULL; rc2967.f_TAIL = NULL; rc2967; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2958))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2958))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2958))).f_LINE);
{
R28 * l_P_2968; memset(&l_P_2968, 0, sizeof l_P_2968);
l_P_2968 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2968 == NULL)) goto L_end2969;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2968))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2968))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2970; memset(&l_V_2970, 0, sizeof l_V_2970);
l_V_2970 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2968))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2970))).f_T = ((*(R28 *)rt_nil_check(l_P_2968))).f_T;
((*(R12 *)rt_nil_check(l_V_2970))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2968))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2970))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2968))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2970))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2970))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2968))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2963))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2968))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2963))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2964, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2964, r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2970))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2968))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2971; memset(&l_ARGA_2971, 0, sizeof l_ARGA_2971);
S_R10(&l_ARGA_2971, ((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2968))).f_T, l_ARGA_2971, ((*(R21 *)rt_nil_check(l_R_2958))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2970))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2968))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2963))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2964, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2964, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2968))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2968))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2964, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2964, ((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, l_ARGA_2971), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2968))).f_T))
{
S_R10(&l_PROLOGUE_2964, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2964, ((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2968))).f_T, l_ARGA_2971)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2963))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2963))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2968))).f_T, l_ARGA_2971, ((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS)), 0);
r_DEFINE(l_V_2970, ((*(R21 *)rt_nil_check(l_R_2958))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2970, ((*(R21 *)rt_nil_check(l_R_2958))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2968))).f_T, ((*(R12 *)rt_nil_check(l_V_2970))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2958))).f_LINE, 1);
}
}
}
}
l_P_2968 = ((*(R28 *)rt_nil_check(l_P_2968))).f_NEXT;
}
RT_B_TICK();
} L_end2969: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2958))).f_FL >= ((rt_int)2LL)))
{
{
R21 * l_N_2972; memset(&l_N_2972, 0, sizeof l_N_2972);
l_N_2972 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2958))).f_D))).f_C;
R14 l_SAVED_CODE_2973; memset(&l_SAVED_CODE_2973, 0, sizeof l_SAVED_CODE_2973);
S_R14(&l_SAVED_CODE_2973, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_2974; memset(&l_V_2974, 0, sizeof l_V_2974);
S_R26(&l_V_2974, r_EXPR(l_N_2972, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_2975; memset(&l_M_2975, 0, sizeof l_M_2975);
S_R23(&l_M_2975, r_MANIFEST(l_N_2972), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2973, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2974).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2974).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_2975).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_2972))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_2975).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_2972))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2958))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2958))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2963))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2963))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2964));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2963))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2963))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2962;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2959, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2960;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2961;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2976; memset(&l_B_2976, 0, sizeof l_B_2976);
l_B_2976 = p_BS;
for (;;) {
if ((l_B_2976 == NULL)) goto L_end2977;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2976))).f_T == NULL)))
{
{
R12 * l_Y_2978; memset(&l_Y_2978, 0, sizeof l_Y_2978);
l_Y_2978 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2976))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2978))).f_T = ((*(R20 *)rt_nil_check(l_B_2976))).f_T;
r_DEFINE(l_Y_2978, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2976))).f_HASMV)
{
{
R12 * l_Y_2979; memset(&l_Y_2979, 0, sizeof l_Y_2979);
l_Y_2979 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2976))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2979))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2979))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2979))).f_MV = ((*(R20 *)rt_nil_check(l_B_2976))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2979))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2976))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2979))).f_INPUT = 1;
r_DEFINE(l_Y_2979, p_LINE);
}
}
l_B_2976 = ((*(R20 *)rt_nil_check(l_B_2976))).f_NEXT;
}
RT_B_TICK();
} L_end2977: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2980; memset(&l_C_2980, 0, sizeof l_C_2980);
l_C_2980 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2980 == NULL)) goto L_end2981;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2980))).f_T), &(*p_DST));
l_C_2980 = ((*(R15 *)rt_nil_check(l_C_2980))).f_NEXT;
}
RT_B_TICK();
} L_end2981: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2982; memset(&l_U_2982, 0, sizeof l_U_2982);
l_U_2982 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2982 == NULL)) goto L_end2983;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2982))).f_NAME, p_NAME))
{
{ rt_int rv2984 = 1;
return rv2984; }
}
l_U_2982 = ((*(R21 *)rt_nil_check(l_U_2982))).f_NEXT;
}
RT_B_TICK();
} L_end2983: ;
{ rt_int rv2985 = 0;
return rv2985; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2986; memset(&l_U_2986, 0, sizeof l_U_2986);
l_U_2986 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2986 == NULL)) goto L_end2987;
{
{
R21 * l_T_2988; memset(&l_T_2988, 0, sizeof l_T_2988);
l_T_2988 = p_SEGS;
for (;;) {
if ((l_T_2988 == NULL)) goto L_end2989;
{
if ((((!(l_T_2988 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2988))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2988))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2986))).f_NAME)))
{
{ rt_int rv2990 = 0;
return rv2990; }
}
l_T_2988 = ((*(R21 *)rt_nil_check(l_T_2988))).f_NEXT;
}
RT_B_TICK();
} L_end2989: ;
}
l_U_2986 = ((*(R21 *)rt_nil_check(l_U_2986))).f_NEXT;
}
RT_B_TICK();
} L_end2987: ;
{ rt_int rv2991 = 1;
return rv2991; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2992; memset(&l_S_2992, 0, sizeof l_S_2992);
l_S_2992 = p_SEGS;
rt_int l_MAINS_2993; memset(&l_MAINS_2993, 0, sizeof l_MAINS_2993);
l_MAINS_2993 = ((rt_int)0LL);
R18 * l_ROOT_2994; memset(&l_ROOT_2994, 0, sizeof l_ROOT_2994);
l_ROOT_2994 = ((R18 *)rt_b_new(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2994)), ({ R18 rc2995; memset(&rc2995, 0, sizeof rc2995);  rc2995.f_LEVEL = ((rt_int)0LL); rc2995.f_R = NULL; rc2995.f_FRAMED = 0; S_R10(&rc2995.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2995.f_FIELDS, ({ R14 rc2996; memset(&rc2996, 0, sizeof rc2996);  rc2996.f_HEAD = NULL; rc2996.f_TAIL = NULL; rc2996; }), 0); rc2995.f_UP = NULL; rc2995.f_IMPORTS = NULL; rc2995.f_SIGNALS = NULL; rc2995.f_RESULT = NULL; rc2995.f_IS_PATH = 0; S_R10(&rc2995.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2995; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2994;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2997; memset(&rc2997, 0, sizeof rc2997);  rc2997.f_HEAD = NULL; rc2997.f_TAIL = NULL; rc2997; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2992 = p_SEGS;
for (;;) {
if ((l_S_2992 == NULL)) goto L_end2999;
{
if ((((*(R21 *)rt_nil_check(l_S_2992))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2992, p_SEGS))
{
goto L_end2999;
}
}
l_S_2992 = ((*(R21 *)rt_nil_check(l_S_2992))).f_NEXT;
}
RT_B_TICK();
} L_end2999: ;
if ((l_S_2992 == NULL))
{
goto L_end2998;
}
((*(R21 *)rt_nil_check(l_S_2992))).f_D = l_S_2992;
l_MAINS_2993 = rt_add(l_MAINS_2993, ((*(R21 *)rt_nil_check(l_S_2992))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2992))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2992))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2992))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2992, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2992))).f_B);
r_SEGMENT_EXPORTS(l_S_2992);
}
RT_B_TICK();
} L_end2998: ;
l_S_2992 = p_SEGS;
for (;;) {
if ((l_S_2992 == NULL)) goto L_end3000;
{
if ((((*(R21 *)rt_nil_check(l_S_2992))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2992))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2992))).f_NAME);
}
l_S_2992 = ((*(R21 *)rt_nil_check(l_S_2992))).f_NEXT;
}
RT_B_TICK();
} L_end3000: ;
if ((!(l_MAINS_2993 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_3001; memset(&l_X_3001, 0, sizeof l_X_3001);
l_X_3001 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3001 == NULL)) goto L_end3002;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_3001))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_3001))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_3001))).f_NAME)));
l_X_3001 = ((*(R21 *)rt_nil_check(l_X_3001))).f_NEXT;
}
RT_B_TICK();
} L_end3002: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3003; memset(&l_M_3003, 0, sizeof l_M_3003);
l_M_3003 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3004 = 0;
return rv3004; }
}
for (;;) {
if ((l_M_3003 == NULL)) goto L_end3005;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3003))).f_NAME))
{
{ rt_int rv3006 = 1;
return rv3006; }
}
l_M_3003 = ((*(R12 *)rt_nil_check(l_M_3003))).f_MODL;
}
RT_B_TICK();
} L_end3005: ;
{ rt_int rv3007 = 0;
return rv3007; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3008; memset(&l_MARK_3008, 0, sizeof l_MARK_3008);
l_MARK_3008 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3009; memset(&l_TAKEN_3009, 0, sizeof l_TAKEN_3009);
for (;;) {
if ((l_MARK_3008 == NULL)) goto L_end3010;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3008))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3010;
}
l_MARK_3008 = ((*(R12 *)rt_nil_check(l_MARK_3008))).f_SNEXT;
}
RT_B_TICK();
} L_end3010: ;
l_TAKEN_3009 = r_TAKE_SCOPE(l_MARK_3008);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_3009 == NULL)) goto L_end3011;
{
{
R12 * l_NEXT_3012; memset(&l_NEXT_3012, 0, sizeof l_NEXT_3012);
l_NEXT_3012 = ((*(R12 *)rt_nil_check(l_TAKEN_3009))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3009))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3009))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3009))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3009)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3009))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3009))))))
{
r_DEFINE(l_TAKEN_3009, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_3009 = l_NEXT_3012;
}
}
RT_B_TICK();
} L_end3011: ;
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
