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
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; R21 * f_QUAL; R21 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; rt_int f_IN_TYPEDECL; R21 * f_NEW_OK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_SEGS; R12 * f_CURSEG; R12 * f_TRSEG; R12 * f_ARRAYS; R12 * f_RECS; };
struct R23 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R26 { int dummy_; R10 f_C; R22 * f_T; rt_int f_LVAL; R10 f_SELF; };
struct R21 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R10 f_NAME; R21 * f_A; R21 * f_B; R21 * f_C; R21 * f_D; R21 * f_E; R21 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R10 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R10 f_NAME; R22 * f_T; R10 f_ACCESS; R10 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R21 * f_TS; rt_int f_BUSY; R10 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R21 * f_DECL; R10 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R21 * f_USES; R12 * f_INSTANCES; R20 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; rt_int f_LAZY; R12 * f_SEGM; R12 * f_HOME; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R18 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R10 f_FTYPE; R14 f_FIELDS; R18 * f_UP; R21 * f_IMPORTS; R21 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R10 f_COPYOUT; };
struct R19 { int dummy_; rt_int f_ID; R21 * f_IMPORTS; R21 * f_SIGNALS; R10 f_NAME; R19 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R10 f_LO_C; R10 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R10 f_LEN_C; R23 f_MLEN; R10 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R21 * f_TARGET_TS; R24 * f_FIELDS; R21 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R10 f_NAME; R10 f_CNAME; R12 * f_MODL; R21 * f_REPS; R12 * f_DECL; R10 f_GENP; };
struct R20 { int dummy_; R10 f_NAME; R22 * f_T; R10 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R20 * f_NEXT; };
struct R25 { int dummy_; R10 f_LO; R10 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R10 f_NAME; R10 f_CNAME; R22 * f_T; rt_int f_KIND; R10 f_TAGF; R21 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1228; };
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
static R12 * r_ARG_ROOT(R21 * p_E);
static R21 * r_PATH_OF(R21 * p_E);
static rt_int r_DISJOINT_PATHS(R21 * p_A, R21 * p_B);
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE);
static void r_NAMES_IN(R21 * p_L, R21 * *p_HEAD);
static rt_int r_CONSTANT_EXPR(R21 * p_E);
static rt_int r_CONSTANT_LIST(R21 * p_L);
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE);
static void r_NEED_BODY(R12 * p_G);
static R12 * r_INLINE_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE);
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE);
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P);
static R22 * r_RESULT_VIEW(R12 * p_R);
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T);
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME);
static rt_int r_IS_STRUCTURED(R22 * p_T);
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B);
static rt_int r_STATIC_GENERIC(R21 * p_TS);
static R21 * r_OWN_NAMES(R21 * p_R);
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
static void r_INPUT_IMPORT_CONFLICT(R21 * p_ITEMS, rt_int p_LINE);
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
static void r_GEN_NAMES(R21 * p_L, R21 * *p_HEAD);
static rt_int r_NAMES_VARIABLE_BUT(R21 * p_L, R21 * p_DECLS, R21 * p_EXCL);
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L);
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE);
static R22 * r_CHARSET_OF(R22 * p_T);
static void r_SAME_CHARSET(R22 * p_A, R22 * p_B, rt_int p_LINE);
static void r_ASCII_ONLY(R22 * p_T, rstr p_WHAT, rt_int p_LINE);
static void r_DECLARE_LABELS(R21 * p_S0);
static void r_BODY(R21 * p_B);
static void r_OPEN_BODY(R21 * p_B);
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS);
static void r_INTERFERENCE(R21 * p_S);
static void r_COLLECT_LIST(R21 * p_L, R21 * *p_NAMES, R21 * *p_CALLS);
static void r_COLLECT_REFS(R21 * p_E, R21 * *p_NAMES, R21 * *p_CALLS);
static R21 * r_NAME_REF(R10 p_NAME, rt_int p_OWNER, R21 * p_A, R21 * p_L);
static R21 * r_ROUTINE_DATA(R10 p_NAME, rt_int p_INOUT);
static R21 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH);
static rt_int r_HAS_REF(R21 * p_L, R10 p_NAME, rt_int p_OWNER);
static R21 * r_INTERSECT_REFS(R21 * p_A, R21 * p_B);
static void r_CHECK_INTERFERENCE(R21 * p_NAMES, R21 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION);
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
static void r_BEGIN_SEGMENT(R21 * p_S);
static R12 * r_ENTER_HOME(R12 * p_Y);
static void r_DEFINE_ALIAS(R12 * p_A);
static void r_LEAVE_HOME(R12 * p_Y, R12 * p_SAVED);
static R12 * r_FIND_SEGMENT(R10 p_NAME);
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R21 * p_L);
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE);
static rt_int r_FROM_MODULES(R21 * p_MODS, R12 * p_Y);
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_IN_TYPEDECL = s.f_IN_TYPEDECL; d->f_NEW_OK = s.f_NEW_OK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_SEGS = s.f_SEGS; d->f_CURSEG = s.f_CURSEG; d->f_TRSEG = s.f_TRSEG; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_IN_TYPEDECL == b.f_IN_TYPEDECL) && (a.f_NEW_OK == b.f_NEW_OK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_SEGS == b.f_SEGS) && (a.f_CURSEG == b.f_CURSEG) && (a.f_TRSEG == b.f_TRSEG) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_IN_TYPEDECL = s.f_IN_TYPEDECL; d.f_NEW_OK = s.f_NEW_OK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_SEGS = s.f_SEGS; d.f_CURSEG = s.f_CURSEG; d.f_TRSEG = s.f_TRSEG; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
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
static void S_R12(R12 *d, R12 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R10(&d->f_ACCESS, s.f_ACCESS, 0); S_R10(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R10(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R10(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_WITHV = s.f_WITHV; d->f_LAZY = s.f_LAZY; d->f_SEGM = s.f_SEGM; d->f_HOME = s.f_HOME; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R10(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R10(a.f_ACCESS, b.f_ACCESS) && E_R10(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R10(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R10(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_WITHV == b.f_WITHV) && (a.f_LAZY == b.f_LAZY) && (a.f_SEGM == b.f_SEGM) && (a.f_HOME == b.f_HOME) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static R12 C_R12(R12 s) { R12 d = s;
 d.f_KIND = s.f_KIND; d.f_DEPTH = s.f_DEPTH; d.f_LEVEL = s.f_LEVEL; d.f_NAME = C_R10(s.f_NAME); d.f_T = s.f_T; d.f_ACCESS = C_R10(s.f_ACCESS); d.f_FIELD = C_R10(s.f_FIELD); d.f_INPUT = s.f_INPUT; d.f_BYREF = s.f_BYREF; d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_TS = s.f_TS; d.f_BUSY = s.f_BUSY; d.f_FWD = C_R10(s.f_FWD); d.f_PARAMS = s.f_PARAMS; d.f_RESULT = s.f_RESULT; d.f_DECL = s.f_DECL; d.f_PREFIX = C_R10(s.f_PREFIX); d.f_MODL = s.f_MODL; d.f_EXPORTED = s.f_EXPORTED; d.f_GENERIC = s.f_GENERIC; d.f_FRAMED = s.f_FRAMED; d.f_USES = s.f_USES; d.f_INSTANCES = s.f_INSTANCES; d.f_BINDINGS = s.f_BINDINGS; d.f_ORIG = s.f_ORIG; d.f_MEMBERS = s.f_MEMBERS; d.f_SAVED = s.f_SAVED; d.f_OWNER = s.f_OWNER; d.f_WITHV = s.f_WITHV; d.f_LAZY = s.f_LAZY; d.f_SEGM = s.f_SEGM; d.f_HOME = s.f_HOME; d.f_CHAIN = s.f_CHAIN; d.f_SNEXT = s.f_SNEXT; return d; }
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
{
R21 * l_L_174; memset(&l_L_174, 0, sizeof l_L_174);
l_L_174 = ((*(R21 *)rt_nil_check(l_N_171))).f_A;
rt_int l_PASS_175; memset(&l_PASS_175, 0, sizeof l_PASS_175);
l_PASS_175 = ((rt_int)0LL);
for (;;) {
if ((l_PASS_175 == ((rt_int)5LL))) goto L_end176;
{
if ((l_PASS_175 == ((rt_int)1LL)))
{
l_L_174 = ((*(R21 *)rt_nil_check(l_N_171))).f_B;
}
else if ((l_PASS_175 == ((rt_int)2LL)))
{
l_L_174 = ((*(R21 *)rt_nil_check(l_N_171))).f_C;
}
else if ((l_PASS_175 == ((rt_int)3LL)))
{
l_L_174 = ((*(R21 *)rt_nil_check(l_N_171))).f_D;
}
else if ((l_PASS_175 == ((rt_int)4LL)))
{
l_L_174 = ((*(R21 *)rt_nil_check(l_N_171))).f_E;
}
for (;;) {
if ((l_L_174 == NULL)) goto L_end177;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_L_174))).f_NEXT, ((*(R21 *)rt_nil_check(l_L_174))).f_NAME) || (((l_PASS_175 == ((rt_int)0LL)) && r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_171))).f_B, ((*(R21 *)rt_nil_check(l_L_174))).f_NAME)))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_L_174))).f_LINE, rt_str("a name appears only once in an imports-clause (4.3.1): ", 55), ((*(R21 *)rt_nil_check(l_L_174))).f_NAME);
}
l_L_174 = ((*(R21 *)rt_nil_check(l_L_174))).f_NEXT;
}
RT_B_TICK();
} L_end177: ;
l_PASS_175 = rt_add(l_PASS_175, ((rt_int)1LL));
}
RT_B_TICK();
} L_end176: ;
}
{ R21 * rv178 = l_N_171;
return rv178; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R21 * l_S_179; memset(&l_S_179, 0, sizeof l_S_179);
l_S_179 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R21 * l_HEAD_180; memset(&l_HEAD_180, 0, sizeof l_HEAD_180);
l_HEAD_180 = NULL;
R21 * l_TAIL_181; memset(&l_TAIL_181, 0, sizeof l_TAIL_181);
l_TAIL_181 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R21 *)rt_nil_check(l_S_179))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R10(&((*(R21 *)rt_nil_check(l_S_179))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_U_183; memset(&l_U_183, 0, sizeof l_U_183);
l_U_183 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_U_183))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_U_183))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_183, &l_HEAD_180, &l_TAIL_181);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end182;
} L_end182: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_S_179))).f_A = l_HEAD_180;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_S_179))).f_FL = ((rt_int)1LL);
}
else
{
((*(R21 *)rt_nil_check(l_S_179))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_S_179))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_S_179))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv184 = l_S_179;
return rv184; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R21 * l_B_185; memset(&l_B_185, 0, sizeof l_B_185);
l_B_185 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R21 * l_HEAD_186; memset(&l_HEAD_186, 0, sizeof l_HEAD_186);
l_HEAD_186 = NULL;
R21 * l_TAIL_187; memset(&l_TAIL_187, 0, sizeof l_TAIL_187);
l_TAIL_187 = NULL;
((*(R21 *)rt_nil_check(l_B_185))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_185))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_186, &l_TAIL_187);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_186, &l_TAIL_187);
}
else
{
goto L_end188;
}
}
RT_B_TICK();
} L_end188: ;
((*(R21 *)rt_nil_check(l_B_185))).f_C = l_HEAD_186;
{ R21 * rv189 = l_B_185;
return rv189; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BODY(void) { RT_B_TICK(); 
R21 * l_B_190; memset(&l_B_190, 0, sizeof l_B_190);
l_B_190 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_B_190))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_190))).f_B = r_PARSE_STATEMENTS();
{ R21 * rv191 = l_B_190;
return rv191; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R21 * l_M_192; memset(&l_M_192, 0, sizeof l_M_192);
l_M_192 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R21 * l_HEAD_193; memset(&l_HEAD_193, 0, sizeof l_HEAD_193);
l_HEAD_193 = NULL;
R21 * l_TAIL_194; memset(&l_TAIL_194, 0, sizeof l_TAIL_194);
l_TAIL_194 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R10(&((*(R21 *)rt_nil_check(l_M_192))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_M_192))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_M_192))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_196; memset(&l_PAREN_196, 0, sizeof l_PAREN_196);
l_PAREN_196 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_X_198; memset(&l_X_198, 0, sizeof l_X_198);
l_X_198 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_X_198))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R21 *)rt_nil_check(l_X_198))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_198, &l_HEAD_193, &l_TAIL_194);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end197;
} L_end197: ;
if (l_PAREN_196)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R21 *)rt_nil_check(l_M_192))).f_B = l_HEAD_193;
}
}
else
{
goto L_end195;
}
}
RT_B_TICK();
} L_end195: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_M_192))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_M_192))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv199 = l_M_192;
return rv199; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R21 * l_HEAD_200; memset(&l_HEAD_200, 0, sizeof l_HEAD_200);
l_HEAD_200 = NULL;
R21 * l_TAIL_201; memset(&l_TAIL_201, 0, sizeof l_TAIL_201);
l_TAIL_201 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_200, &l_TAIL_201);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_200, &l_TAIL_201);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_200, &l_TAIL_201);
}
else
{
goto L_end202;
}
}
RT_B_TICK();
} L_end202: ;
{ R21 * rv203 = l_HEAD_200;
return rv203; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R21 * l_D_204; memset(&l_D_204, 0, sizeof l_D_204);
l_D_204 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R21 *)rt_nil_check(l_D_204))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R21 *)rt_nil_check(l_D_204))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_D_204))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R21 *)rt_nil_check(l_D_204))).f_C = r_PARSE_EXPR();
}
else if ((((*(R21 *)rt_nil_check(l_D_204))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R21 *)rt_nil_check(l_D_204))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv205 = l_D_204;
return rv205; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R21 * l_HEAD_206; memset(&l_HEAD_206, 0, sizeof l_HEAD_206);
l_HEAD_206 = NULL;
R21 * l_TAIL_207; memset(&l_TAIL_207, 0, sizeof l_TAIL_207);
l_TAIL_207 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_F_209; memset(&l_F_209, 0, sizeof l_F_209);
l_F_209 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R21 *)rt_nil_check(l_F_209))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_F_209))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R21 *)rt_nil_check(l_F_209))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_209, &l_HEAD_206, &l_TAIL_207);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end208;
} L_end208: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv210 = l_HEAD_206;
return rv210; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_211; memset(&l_D_211, 0, sizeof l_D_211);
l_D_211 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R10(&((*(R21 *)rt_nil_check(l_D_211))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_211))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_211))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R21 * rv212 = l_D_211;
return rv212; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_213; memset(&l_D_213, 0, sizeof l_D_213);
l_D_213 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R10(&((*(R21 *)rt_nil_check(l_D_213))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_213))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R21 *)rt_nil_check(l_D_213))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_213))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R21 * rv214 = l_D_213;
return rv214; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REP(void) { RT_B_TICK(); 
R21 * l_R_215; memset(&l_R_215, 0, sizeof l_R_215);
l_R_215 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R21 * l_HEAD_216; memset(&l_HEAD_216, 0, sizeof l_HEAD_216);
l_HEAD_216 = NULL;
R21 * l_TAIL_217; memset(&l_TAIL_217, 0, sizeof l_TAIL_217);
l_TAIL_217 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R21 *)rt_nil_check(l_R_215))).f_KIND = g_TS_GEN;
S_R10(&((*(R21 *)rt_nil_check(l_R_215))).f_NAME, r_GEN_NAME(), 0);
{ R21 * rv218 = l_R_215;
return rv218; }
}
S_R10(&((*(R21 *)rt_nil_check(l_R_215))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R21 * rv219 = l_R_215;
return rv219; }
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_215))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_SKIP_PARENS();
{ R21 * rv220 = l_R_215;
return rv220; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end221;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R21 * l_VH_222; memset(&l_VH_222, 0, sizeof l_VH_222);
l_VH_222 = NULL;
R21 * l_VT_223; memset(&l_VT_223, 0, sizeof l_VT_223);
l_VT_223 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_V_225; memset(&l_V_225, 0, sizeof l_V_225);
l_V_225 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_V_225))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R21 *)rt_nil_check(l_V_225))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_225, &l_VH_222, &l_VT_223);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end224;
} L_end224: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_215))).f_B = l_VH_222;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_216, &l_TAIL_217);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end221: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_215))).f_A = l_HEAD_216;
{ R21 * rv226 = l_R_215;
return rv226; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_NAME(void) { RT_B_TICK(); 
R10 l_T_227; memset(&l_T_227, 0, sizeof l_T_227);
S_R10(&l_T_227, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_227).f_LEN == ((rt_int)1LL)))
{
{ R10 rv228 = r_NO_TEXT();
return rv228; }
}
{ R10 rv229 = r_MKN(rt_b_slice(r_STR(l_T_227, (l_T_227).f_LEN), ((rt_int)1LL), rt_sub((l_T_227).f_LEN, ((rt_int)1LL))));
return rv229; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R21 * l_N_230; memset(&l_N_230, 0, sizeof l_N_230);
if (r_IS_KIND(g_K_GEN))
{
{
R10 l_T_231; memset(&l_T_231, 0, sizeof l_T_231);
S_R10(&l_T_231, (r_CUR()).f_TX, 0);
if (((l_T_231).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R21 * rv232 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv232; }
}
}
l_N_230 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_230))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_230))).f_C = r_PARSE_REP();
}
{ R21 * rv233 = l_N_230;
return rv233; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv234 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv234; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R21 * rv235 = r_PARSE_TYPE_SPEC();
return rv235; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R21 * rv236 = r_PARSE_TYPE_SPEC();
return rv236; }
}
l_N_230 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R21 * rv237 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_230));
return rv237; }
}
{ R21 * rv238 = l_N_230;
return rv238; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPR_TO_TS(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_239; memset(&l_N_239, 0, sizeof l_N_239);
if ((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R21 * rv240 = p_E;
return rv240; }
}
l_N_239 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_239))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R21 * rv241 = l_N_239;
return rv241; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_239))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_239))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R21 * rv242 = l_N_239;
return rv242; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R21 *)rt_nil_check(l_N_239))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_239))).f_E = p_E;
{ R21 * rv243 = l_N_239;
return rv243; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_239 = r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R21 *)rt_nil_check(l_N_239))).f_KIND == g_TS_NAME)) || (!(((*(R21 *)rt_nil_check(l_N_239))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R21 *)rt_nil_check(l_N_239))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_239))).f_B))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_B;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_239))).f_B))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_C;
{ R21 * rv244 = l_N_239;
return rv244; }
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
{ R21 * rv245 = p_N;
return rv245; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R21 * l_N_246; memset(&l_N_246, 0, sizeof l_N_246);
R21 * l_HEAD_247; memset(&l_HEAD_247, 0, sizeof l_HEAD_247);
l_HEAD_247 = NULL;
R21 * l_TAIL_248; memset(&l_TAIL_248, 0, sizeof l_TAIL_248);
l_TAIL_248 = NULL;
rt_int l_LINE_249; memset(&l_LINE_249, 0, sizeof l_LINE_249);
l_LINE_249 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_246 = r_NEW_NODE(g_TS_ARRAY, l_LINE_249);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R21 * l_R_251; memset(&l_R_251, 0, sizeof l_R_251);
l_R_251 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_R_251))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_251))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_251, &l_HEAD_247, &l_TAIL_248);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end250;
} L_end250: ;
r_EXPECT(rt_str("]", 1));
((*(R21 *)rt_nil_check(l_N_246))).f_A = l_HEAD_247;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_246))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R21 *)rt_nil_check(l_N_246))).f_C = r_PARSE_TYPE_SPEC();
{ R21 * rv252 = l_N_246;
return rv252; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_246 = r_NEW_NODE(g_TS_RECORD, l_LINE_249);
((*(R21 *)rt_nil_check(l_N_246))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_246))).f_D = r_PARSE_REP();
}
{ R21 * rv253 = l_N_246;
return rv253; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R21 * rv254 = r_PARSE_TYPE_ARG();
return rv254; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_246 = r_NEW_NODE(g_TS_ENUM, l_LINE_249);
((*(R21 *)rt_nil_check(l_N_246))).f_A = r_PARSE_LITERALS();
{ R21 * rv255 = r_TYPE_SPEC_TAIL(l_N_246);
return rv255; }
}
l_N_246 = r_NEW_NODE(g_TS_NAME, l_LINE_249);
S_R10(&((*(R21 *)rt_nil_check(l_N_246))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R21 * l_X_256; memset(&l_X_256, 0, sizeof l_X_256);
l_X_256 = r_NEW_NODE(g_N_NAME, l_LINE_249);
S_R10(&((*(R21 *)rt_nil_check(l_X_256))).f_NAME, ((*(R21 *)rt_nil_check(l_N_246))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end257;
{
r_SKIP();
{
R21 * l_F_258; memset(&l_F_258, 0, sizeof l_F_258);
l_F_258 = r_NEW_NODE(g_N_FIELD, l_LINE_249);
((*(R21 *)rt_nil_check(l_F_258))).f_A = l_X_256;
S_R10(&((*(R21 *)rt_nil_check(l_F_258))).f_NAME, r_IDENT(), 0);
l_X_256 = l_F_258;
}
}
RT_B_TICK();
} L_end257: ;
((*(R21 *)rt_nil_check(l_N_246))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_246))).f_E = l_X_256;
{ R21 * rv259 = r_TYPE_SPEC_TAIL(l_N_246);
return rv259; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_N_246))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_246))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_246))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R21 *)rt_nil_check(l_N_246))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_N_246))).f_KIND = g_TS_ENUM;
((*(R21 *)rt_nil_check(l_N_246))).f_A = r_PARSE_LITERALS();
{ R21 * rv260 = r_TYPE_SPEC_TAIL(l_N_246);
return rv260; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_246))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_247, &l_TAIL_248);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_247, &l_TAIL_248);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end261;
} L_end261: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_246))).f_A = l_HEAD_247;
}
{ R21 * rv262 = r_TYPE_SPEC_TAIL(l_N_246);
return rv262; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R21 * l_HEAD_263; memset(&l_HEAD_263, 0, sizeof l_HEAD_263);
l_HEAD_263 = NULL;
R21 * l_TAIL_264; memset(&l_TAIL_264, 0, sizeof l_TAIL_264);
l_TAIL_264 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_L_266; memset(&l_L_266, 0, sizeof l_L_266);
l_L_266 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R10(&((*(R21 *)rt_nil_check(l_L_266))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_266, &l_HEAD_263, &l_TAIL_264);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end265;
} L_end265: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv267 = l_HEAD_263;
return rv267; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R21 * l_HEAD_268; memset(&l_HEAD_268, 0, sizeof l_HEAD_268);
l_HEAD_268 = NULL;
R21 * l_TAIL_269; memset(&l_TAIL_269, 0, sizeof l_TAIL_269);
l_TAIL_269 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R21 * l_F_271; memset(&l_F_271, 0, sizeof l_F_271);
l_F_271 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R21 *)rt_nil_check(l_F_271))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_F_271))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_271, &l_HEAD_268, &l_TAIL_269);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R21 * l_V_272; memset(&l_V_272, 0, sizeof l_V_272);
l_V_272 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R21 * l_VH_273; memset(&l_VH_273, 0, sizeof l_VH_273);
l_VH_273 = NULL;
R21 * l_VT_274; memset(&l_VT_274, 0, sizeof l_VT_274);
l_VT_274 = NULL;
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_V_272))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end275;
{
{
R21 * l_S_276; memset(&l_S_276, 0, sizeof l_S_276);
l_S_276 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R21 * l_LH_277; memset(&l_LH_277, 0, sizeof l_LH_277);
l_LH_277 = NULL;
R21 * l_LT_278; memset(&l_LT_278, 0, sizeof l_LT_278);
l_LT_278 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_277, &l_LT_278);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end279;
} L_end279: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_276))).f_A = l_LH_277;
((*(R21 *)rt_nil_check(l_S_276))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_276, &l_VH_273, &l_VT_274);
}
}
RT_B_TICK();
} L_end275: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_V_272))).f_A = l_VH_273;
r_ADD_LIST(l_V_272, &l_HEAD_268, &l_TAIL_269);
}
}
else
{
goto L_end270;
}
}
RT_B_TICK();
} L_end270: ;
{ R21 * rv280 = l_HEAD_268;
return rv280; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R21 * l_R_281; memset(&l_R_281, 0, sizeof l_R_281);
l_R_281 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_281))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R21 *)rt_nil_check(l_R_281))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_281))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R21 *)rt_nil_check(l_R_281))).f_IV = rt_add(((*(R21 *)rt_nil_check(l_R_281))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R21 * rv282 = l_R_281;
return rv282; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_283; memset(&l_DEPTH_283, 0, sizeof l_DEPTH_283);
l_DEPTH_283 = ((rt_int)0LL);
rt_int l_K_284; memset(&l_K_284, 0, sizeof l_K_284);
l_K_284 = ((rt_int)0LL);
for (;;) {
{
{
R9 l_T_286; memset(&l_T_286, 0, sizeof l_T_286);
S_R9(&l_T_286, r_AHEAD(l_K_284), 0);
if (((l_T_286).f_KIND == g_K_EOF))
{
{ rt_int rv287 = 0;
return rv287; }
}
if (((l_T_286).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_286).f_TX, rt_str("(", 1)) || r_TEQS((l_T_286).f_TX, rt_str("[", 1))))
{
l_DEPTH_283 = rt_add(l_DEPTH_283, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_286).f_TX, rt_str(")", 1)) || r_TEQS((l_T_286).f_TX, rt_str("]", 1))))
{
l_DEPTH_283 = rt_sub(l_DEPTH_283, ((rt_int)1LL));
if ((l_DEPTH_283 == ((rt_int)0LL)))
{
{ rt_int rv288 = 0;
return rv288; }
}
}
else if (((l_DEPTH_283 == ((rt_int)1LL)) && ((r_TEQS((l_T_286).f_TX, rt_str(":", 1)) || r_TEQS((l_T_286).f_TX, rt_str(",", 1))))))
{
{ rt_int rv289 = r_TEQS((l_T_286).f_TX, rt_str(":", 1));
return rv289; }
}
}
}
l_K_284 = rt_add(l_K_284, ((rt_int)1LL));
}
RT_B_TICK();
} L_end285: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R21 * l_HEAD_290; memset(&l_HEAD_290, 0, sizeof l_HEAD_290);
l_HEAD_290 = NULL;
R21 * l_TAIL_291; memset(&l_TAIL_291, 0, sizeof l_TAIL_291);
l_TAIL_291 = NULL;
rt_int l_MODE_292; memset(&l_MODE_292, 0, sizeof l_MODE_292);
l_MODE_292 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end293;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_292 = rt_add(l_MODE_292, ((rt_int)1LL));
}
else
{
{
R21 * l_NAMES_294; memset(&l_NAMES_294, 0, sizeof l_NAMES_294);
l_NAMES_294 = r_IDENT_LIST();
R21 * l_TS_295; memset(&l_TS_295, 0, sizeof l_TS_295);
l_TS_295 = NULL;
R21 * l_P_296; memset(&l_P_296, 0, sizeof l_P_296);
l_P_296 = l_NAMES_294;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_295 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_295 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_296 == NULL)) goto L_end297;
{
{
R21 * l_PN_298; memset(&l_PN_298, 0, sizeof l_PN_298);
l_PN_298 = r_NEW_NODE(g_N_PARAM, ((*(R21 *)rt_nil_check(l_P_296))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_PN_298))).f_NAME, ((*(R21 *)rt_nil_check(l_P_296))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_PN_298))).f_IV = l_MODE_292;
((*(R21 *)rt_nil_check(l_PN_298))).f_B = l_TS_295;
r_ADD_LIST(l_PN_298, &l_HEAD_290, &l_TAIL_291);
}
l_P_296 = ((*(R21 *)rt_nil_check(l_P_296))).f_NEXT;
}
RT_B_TICK();
} L_end297: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end293: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv299 = l_HEAD_290;
return rv299; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R21 * l_R_300; memset(&l_R_300, 0, sizeof l_R_300);
l_R_300 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R21 * l_HEAD_301; memset(&l_HEAD_301, 0, sizeof l_HEAD_301);
l_HEAD_301 = NULL;
R21 * l_TAIL_302; memset(&l_TAIL_302, 0, sizeof l_TAIL_302);
l_TAIL_302 = NULL;
rt_int l_MODE_303; memset(&l_MODE_303, 0, sizeof l_MODE_303);
l_MODE_303 = g_M_IN;
if (p_FUNC)
{
((*(R21 *)rt_nil_check(l_R_300))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end304;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_303 = rt_add(l_MODE_303, ((rt_int)1LL));
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_300))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
}
else
{
{
R21 * l_P_305; memset(&l_P_305, 0, sizeof l_P_305);
l_P_305 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_P_305))).f_IV = l_MODE_303;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R21 *)rt_nil_check(l_P_305))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_305, &l_HEAD_301, &l_TAIL_302);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end304: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_300))).f_A = l_HEAD_301;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R21 *)rt_nil_check(l_R_300))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_300))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_300))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_R_300))).f_D = r_PAREN_IDENTS();
}
{ R21 * rv306 = l_R_300;
return rv306; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R21 * rv307 = r_PARSE_TEMPLATE(1);
return rv307; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R21 * rv308 = r_PARSE_TEMPLATE(0);
return rv308; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R21 * l_HEAD_309; memset(&l_HEAD_309, 0, sizeof l_HEAD_309);
l_HEAD_309 = NULL;
R21 * l_TAIL_310; memset(&l_TAIL_310, 0, sizeof l_TAIL_310);
l_TAIL_310 = NULL;
for (;;) {
{
{
R21 * l_N_312; memset(&l_N_312, 0, sizeof l_N_312);
l_N_312 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R21 * l_TH_313; memset(&l_TH_313, 0, sizeof l_TH_313);
l_TH_313 = NULL;
R21 * l_TT_314; memset(&l_TT_314, 0, sizeof l_TT_314);
l_TT_314 = NULL;
S_R10(&((*(R21 *)rt_nil_check(l_N_312))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_T_316; memset(&l_T_316, 0, sizeof l_T_316);
l_T_316 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_T_316))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_T_316))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_316, &l_TH_313, &l_TT_314);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end315;
} L_end315: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_312))).f_A = l_TH_313;
r_ADD_LIST(l_N_312, &l_HEAD_309, &l_TAIL_310);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end311;
} L_end311: ;
{ R21 * rv317 = l_HEAD_309;
return rv317; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R21 * l_R_318; memset(&l_R_318, 0, sizeof l_R_318);
l_R_318 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R21 * l_H_319; memset(&l_H_319, 0, sizeof l_H_319);
l_H_319 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R21 *)rt_nil_check(l_R_318))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R21 *)rt_nil_check(l_R_318))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_318))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R21 *)rt_nil_check(l_R_318))).f_FL = rt_add(((*(R21 *)rt_nil_check(l_R_318))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R21 *)rt_nil_check(l_R_318))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R10(&((*(R21 *)rt_nil_check(l_R_318))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_318))).f_A = r_PARSE_PARAMS();
}
if ((((*(R21 *)rt_nil_check(l_R_318))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_318))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_318))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_319))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_R_318))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R21 *)rt_nil_check(l_H_319))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end320;
}
}
RT_B_TICK();
} L_end320: ;
((*(R21 *)rt_nil_check(l_R_318))).f_D = l_H_319;
r_EXPECT(rt_str(";", 1));
if ((((*(R21 *)rt_nil_check(l_R_318))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_H_319))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end321;
{
r_SKIP();
}
RT_B_TICK();
} L_end321: ;
}
else
{
((*(R21 *)rt_nil_check(l_R_318))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R21 *)rt_nil_check(l_R_318))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R21 *)rt_nil_check(l_R_318))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R21 *)rt_nil_check(l_R_318))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv322 = l_R_318;
return rv322; }
rt_raise(RT_X_INIT);
}
static R21 * r_BIN_NODE(R10 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_N_323; memset(&l_N_323, 0, sizeof l_N_323);
l_N_323 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_323))).f_NAME, p_OP, 0);
((*(R21 *)rt_nil_check(l_N_323))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_323))).f_B = p_B;
{ R21 * rv324 = l_N_323;
return rv324; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R21 * l_E_325; memset(&l_E_325, 0, sizeof l_E_325);
l_E_325 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R21 * l_Q_326; memset(&l_Q_326, 0, sizeof l_Q_326);
l_Q_326 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_Q_326))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_Q_326))).f_A = l_E_325;
l_E_325 = l_Q_326;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R21 * l_Q_327; memset(&l_Q_327, 0, sizeof l_Q_327);
l_Q_327 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R21 *)rt_nil_check(l_E_325))).f_KIND == g_N_QUAL))
{
l_Q_327 = l_E_325;
}
else
{
((*(R21 *)rt_nil_check(l_Q_327))).f_A = l_E_325;
}
((*(R21 *)rt_nil_check(l_Q_327))).f_B = r_PARSE_SIMPLE();
l_E_325 = l_Q_327;
}
}
{ R21 * rv328 = l_E_325;
return rv328; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R9 l_N_329; memset(&l_N_329, 0, sizeof l_N_329);
S_R9(&l_N_329, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv330 = 0;
return rv330; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv331 = 0;
return rv331; }
}
{ rt_int rv332 = (!(((((((r_TOK_IS(l_N_329, rt_str("(", 1)) || r_TOK_IS(l_N_329, rt_str(".", 1))) || r_TOK_IS(l_N_329, rt_str(":=", 2))) || r_TOK_IS(l_N_329, rt_str(":", 1))) || r_TOK_IS(l_N_329, rt_str("$", 1))) || r_TOK_IS(l_N_329, rt_str("@", 1))) || r_TOK_IS(l_N_329, rt_str("[", 1)))));
return rv332; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R21 * l_LEFT_333; memset(&l_LEFT_333, 0, sizeof l_LEFT_333);
l_LEFT_333 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end334;
{
{
R9 l_T_335; memset(&l_T_335, 0, sizeof l_T_335);
S_R9(&l_T_335, r_CUR(), 0);
r_SKIP();
l_LEFT_333 = r_BIN_NODE((l_T_335).f_TX, (l_T_335).f_LINE, l_LEFT_333, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end334: ;
{ R21 * rv336 = l_LEFT_333;
return rv336; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R21 * l_LEFT_337; memset(&l_LEFT_337, 0, sizeof l_LEFT_337);
l_LEFT_337 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end338;
{
{
R9 l_T_339; memset(&l_T_339, 0, sizeof l_T_339);
S_R9(&l_T_339, r_CUR(), 0);
r_SKIP();
l_LEFT_337 = r_BIN_NODE((l_T_339).f_TX, (l_T_339).f_LINE, l_LEFT_337, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end338: ;
{ R21 * rv340 = l_LEFT_337;
return rv340; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R21 * l_LEFT_341; memset(&l_LEFT_341, 0, sizeof l_LEFT_341);
l_LEFT_341 = r_PARSE_SUM();
for (;;) {
{
{
R9 l_T_343; memset(&l_T_343, 0, sizeof l_T_343);
S_R9(&l_T_343, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_341 = r_BIN_NODE((l_T_343).f_TX, (l_T_343).f_LINE, l_LEFT_341, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_344; memset(&l_N_344, 0, sizeof l_N_344);
l_N_344 = r_NEW_NODE(g_N_IN, (l_T_343).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_344))).f_A = l_LEFT_341;
((*(R21 *)rt_nil_check(l_N_344))).f_B = r_PARSE_RANGE();
l_LEFT_341 = l_N_344;
}
}
else
{
{ R21 * rv345 = l_LEFT_341;
return rv345; }
}
}
}
RT_B_TICK();
} L_end342: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_346; memset(&l_SAVED_346, 0, sizeof l_SAVED_346);
l_SAVED_346 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_347; memset(&l_LINE_347, 0, sizeof l_LINE_347);
l_LINE_347 = r_LINE_NOW();
R21 * l_N_348; memset(&l_N_348, 0, sizeof l_N_348);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv349 = NULL;
return rv349; }
}
{
R9 l_OP_350; memset(&l_OP_350, 0, sizeof l_OP_350);
S_R9(&l_OP_350, r_AHEAD(((rt_int)1LL)), 0);
R10 l_T_351; memset(&l_T_351, 0, sizeof l_T_351);
S_R10(&l_T_351, (l_OP_350).f_TX, 0);
rt_int l_FOUND_352; memset(&l_FOUND_352, 0, sizeof l_FOUND_352);
l_FOUND_352 = 0;
if (((!((l_OP_350).f_KIND == g_K_SYM)) && (!((l_OP_350).f_KIND == g_K_RES))))
{
{ R21 * rv353 = NULL;
return rv353; }
}
{ rt_int it355_lo = ((rt_int)0LL), it355_hi = rt_sub((rt_int)(p_OPS).len, (l_T_351).f_LEN);
for (rt_int it355 = it355_lo; it355 <= it355_hi; it355++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it355, rt_sub(rt_add(it355, (l_T_351).f_LEN), ((rt_int)1LL))), r_STR(l_T_351, (l_T_351).f_LEN)))
{
if (((((it355 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it355, ((rt_int)1LL)), rt_sub(it355, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it355, (l_T_351).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it355, (l_T_351).f_LEN), rt_add(it355, (l_T_351).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_352 = 1;
}
}
}
RT_B_TICK();
if (it355 == it355_hi) break;
} } L_end354: ;
if ((!l_FOUND_352))
{
{ R21 * rv356 = NULL;
return rv356; }
}
r_SKIP();
r_SKIP();
l_N_348 = r_BIN_NODE(l_T_351, l_LINE_347, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_348))).f_FL = ((rt_int)2LL);
{ R21 * rv357 = l_N_348;
return rv357; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_348))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_348))).f_FL = ((rt_int)1LL);
{ R21 * rv358 = l_N_348;
return rv358; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_346;
{ R21 * rv359 = NULL;
return rv359; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { RT_B_TICK(); 
R21 * l_LEFT_360; memset(&l_LEFT_360, 0, sizeof l_LEFT_360);
l_LEFT_360 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R9 l_T_362; memset(&l_T_362, 0, sizeof l_T_362);
S_R9(&l_T_362, r_CUR(), 0);
r_SKIP();
l_LEFT_360 = r_BIN_NODE((l_T_362).f_TX, (l_T_362).f_LINE, l_LEFT_360, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_363; memset(&l_N_363, 0, sizeof l_N_363);
l_N_363 = r_TRY_SCALED(l_LEFT_360, rt_str("+ -", 3));
if ((l_N_363 == NULL))
{
{ R21 * rv364 = l_LEFT_360;
return rv364; }
}
((*(R21 *)rt_nil_check(l_N_363))).f_B = r_PARSE_TERM();
l_LEFT_360 = l_N_363;
}
}
}
RT_B_TICK();
} L_end361: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { RT_B_TICK(); 
R21 * l_LEFT_365; memset(&l_LEFT_365, 0, sizeof l_LEFT_365);
l_LEFT_365 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R9 l_T_367; memset(&l_T_367, 0, sizeof l_T_367);
S_R9(&l_T_367, r_CUR(), 0);
r_SKIP();
l_LEFT_365 = r_BIN_NODE((l_T_367).f_TX, (l_T_367).f_LINE, l_LEFT_365, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_368; memset(&l_N_368, 0, sizeof l_N_368);
l_N_368 = r_TRY_SCALED(l_LEFT_365, rt_str("* / // MOD", 10));
if ((l_N_368 == NULL))
{
{ R21 * rv369 = l_LEFT_365;
return rv369; }
}
((*(R21 *)rt_nil_check(l_N_368))).f_B = r_PARSE_FACTOR();
l_LEFT_365 = l_N_368;
}
}
}
RT_B_TICK();
} L_end366: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R21 * l_LEFT_370; memset(&l_LEFT_370, 0, sizeof l_LEFT_370);
l_LEFT_370 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R9 l_T_372; memset(&l_T_372, 0, sizeof l_T_372);
S_R9(&l_T_372, r_CUR(), 0);
r_SKIP();
l_LEFT_370 = r_BIN_NODE((l_T_372).f_TX, (l_T_372).f_LINE, l_LEFT_370, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_373; memset(&l_N_373, 0, sizeof l_N_373);
l_N_373 = r_TRY_SCALED(l_LEFT_370, rt_str("**", 2));
if ((l_N_373 == NULL))
{
{ R21 * rv374 = l_LEFT_370;
return rv374; }
}
((*(R21 *)rt_nil_check(l_N_373))).f_B = r_PARSE_SECONDARY();
l_LEFT_370 = l_N_373;
}
}
}
RT_B_TICK();
} L_end371: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R9 l_T_375; memset(&l_T_375, 0, sizeof l_T_375);
S_R9(&l_T_375, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_376; memset(&l_N_376, 0, sizeof l_N_376);
l_N_376 = r_NEW_NODE(g_N_UNOP, (l_T_375).f_LINE);
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_376))).f_NAME, (l_T_375).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_376))).f_A = r_PARSE_POSTFIX();
{ R21 * rv377 = l_N_376;
return rv377; }
}
}
{ R21 * rv378 = r_PARSE_POSTFIX();
return rv378; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { RT_B_TICK(); 
R21 * l_HEAD_379; memset(&l_HEAD_379, 0, sizeof l_HEAD_379);
l_HEAD_379 = NULL;
R21 * l_TAIL_380; memset(&l_TAIL_380, 0, sizeof l_TAIL_380);
l_TAIL_380 = NULL;
rt_int l_GROUP_381; memset(&l_GROUP_381, 0, sizeof l_GROUP_381);
l_GROUP_381 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end382;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_381) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_379;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_379;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_381 = rt_add(l_GROUP_381, ((rt_int)1LL));
l_HEAD_379 = NULL;
l_TAIL_380 = NULL;
}
else
{
if ((l_GROUP_381 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_379, &l_TAIL_380);
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R21 *)rt_nil_check(l_TAIL_380))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_TAIL_380))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_379, &l_TAIL_380);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end382: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_381) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_379;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_379;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_379;
}
break;
}
{ R21 * rv383 = p_N;
return rv383; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R21 * l_E_384; memset(&l_E_384, 0, sizeof l_E_384);
l_E_384 = r_PARSE_ATOM();
R21 * l_N_385; memset(&l_N_385, 0, sizeof l_N_385);
for (;;) {
{
{
rt_int l_LINE_387; memset(&l_LINE_387, 0, sizeof l_LINE_387);
l_LINE_387 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_384))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_E_384))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_384))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_384))).f_KIND = g_N_APPLY;
l_E_384 = r_PARSE_ARGS(l_E_384);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_385 = r_NEW_NODE(g_N_INDEX, l_LINE_387);
l_N_385 = r_PARSE_ARGS(l_N_385);
((*(R21 *)rt_nil_check(l_N_385))).f_B = ((*(R21 *)rt_nil_check(l_N_385))).f_A;
((*(R21 *)rt_nil_check(l_N_385))).f_A = l_E_384;
l_E_384 = l_N_385;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_385 = r_NEW_NODE(g_N_FIELD, l_LINE_387);
((*(R21 *)rt_nil_check(l_N_385))).f_A = l_E_384;
S_R10(&((*(R21 *)rt_nil_check(l_N_385))).f_NAME, r_IDENT(), 0);
l_E_384 = l_N_385;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_385 = r_NEW_NODE(g_N_DEREF, l_LINE_387);
((*(R21 *)rt_nil_check(l_N_385))).f_A = l_E_384;
l_E_384 = l_N_385;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_385 = r_NEW_NODE(g_N_SUBSTR, l_LINE_387);
((*(R21 *)rt_nil_check(l_N_385))).f_A = l_E_384;
((*(R21 *)rt_nil_check(l_N_385))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_385))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_384 = l_N_385;
}
else
{
{ R21 * rv388 = l_E_384;
return rv388; }
}
}
}
RT_B_TICK();
} L_end386: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_389; memset(&l_AT_389, 0, sizeof l_AT_389);
l_AT_389 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_390; memset(&l_N_390, 0, sizeof l_N_390);
l_N_390 = r_NEW_NODE(g_N_BITS, p_LINE);
R10 l_R_391; memset(&l_R_391, 0, sizeof l_R_391);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end392;
{
{
R10 l_T_393; memset(&l_T_393, 0, sizeof l_T_393);
S_R10(&l_T_393, (r_CUR()).f_TX, 0);
rstr l_S_394; memset(&l_S_394, 0, sizeof l_S_394);
l_S_394 = rt_b_str_new((l_T_393).f_LEN, 0);
rt_b_assign(&l_S_394, r_STR(l_T_393, (l_T_393).f_LEN));
{ rt_int it396_lo = ((rt_int)0LL), it396_hi = rt_sub((l_T_393).f_LEN, ((rt_int)1LL));
for (rt_int it396 = it396_lo; it396 <= it396_hi; it396++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_394, it396, it396), rt_str(" ", 1))))
{
{
rt_int l_C_397; memset(&l_C_397, 0, sizeof l_C_397);
l_C_397 = r_CODE_OF(rt_b_slice(l_S_394, it396, it396));
rt_int l_V_398; memset(&l_V_398, 0, sizeof l_V_398);
l_V_398 = rt_sub(l_C_397, ((rt_int)48LL));
rt_int l_P_399; memset(&l_P_399, 0, sizeof l_P_399);
l_P_399 = ((rt_int)1LL);
if ((l_C_397 >= ((rt_int)65LL)))
{
l_V_398 = rt_sub(l_C_397, ((rt_int)55LL));
}
{ rt_int it401_lo = ((rt_int)1LL), it401_hi = p_BITS_PER;
for (rt_int it401 = it401_lo; it401 <= it401_hi; it401++) {
{
l_P_399 = rt_mul(l_P_399, ((rt_int)2LL));
}
RT_B_TICK();
if (it401 == it401_hi) break;
} } L_end400: ;
if (((l_V_398 < ((rt_int)0LL)) || (l_V_398 >= l_P_399)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it403_lo = ((rt_int)1LL), it403_hi = p_BITS_PER;
for (rt_int it403 = it403_lo; it403 <= it403_hi; it403++) {
{
l_P_399 = rt_quot(l_P_399, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_398, l_P_399)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R10(&l_R_391, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R10(&l_R_391, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it403 == it403_hi) break;
} } L_end402: ;
}
}
}
RT_B_TICK();
if (it396 == it396_hi) break;
} } L_end395: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end392: ;
S_R10(&((*(R21 *)rt_nil_check(l_N_390))).f_NAME, ({ R10 rc404; memset(&rc404, 0, sizeof rc404);  rc404.f_AT = l_AT_389; rc404.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_389); rc404.f_H = rt_neg(((rt_int)1LL)); rc404; }), 0);
{ R21 * rv405 = l_N_390;
return rv405; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R9 l_T_406; memset(&l_T_406, 0, sizeof l_T_406);
S_R9(&l_T_406, r_CUR(), 0);
R21 * l_N_407; memset(&l_N_407, 0, sizeof l_N_407);
if (((l_T_406).f_KIND == g_K_NUM))
{
l_N_407 = r_NEW_NODE(g_N_INT, (l_T_406).f_LINE);
((*(R21 *)rt_nil_check(l_N_407))).f_IV = (l_T_406).f_IV;
S_R10(&((*(R21 *)rt_nil_check(l_N_407))).f_NAME, (l_T_406).f_TX, 0);
r_SKIP();
{ R21 * rv408 = l_N_407;
return rv408; }
}
if ((((l_T_406).f_KIND == g_K_REAL) || ((l_T_406).f_KIND == g_K_FIX)))
{
l_N_407 = r_NEW_NODE(g_N_REAL, (l_T_406).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_407))).f_NAME, (l_T_406).f_TX, 0);
if (((l_T_406).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_407))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_407))).f_IV = (l_T_406).f_IV;
}
r_SKIP();
{ R21 * rv409 = l_N_407;
return rv409; }
}
if (((l_T_406).f_KIND == g_K_GEN))
{
{ R21 * rv410 = r_PARSE_TYPE_ARG();
return rv410; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_406, rt_str("BIN", 3)))
{
{ R21 * rv411 = r_PARSE_BITS(((rt_int)1LL), (l_T_406).f_LINE);
return rv411; }
}
else if (r_TOK_IS(l_T_406, rt_str("OCT", 3)))
{
{ R21 * rv412 = r_PARSE_BITS(((rt_int)3LL), (l_T_406).f_LINE);
return rv412; }
}
{ R21 * rv413 = r_PARSE_BITS(((rt_int)4LL), (l_T_406).f_LINE);
return rv413; }
}
if ((((l_T_406).f_KIND == g_K_STR) || ((l_T_406).f_KIND == g_K_ENUM)))
{
{ R21 * rv414 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv414; }
}
if ((((l_T_406).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R21 * rv415 = r_PARSE_CHARSTRING((l_T_406).f_TX);
return rv415; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_407 = r_NEW_NODE(g_N_BOOL, (l_T_406).f_LINE);
((*(R21 *)rt_nil_check(l_N_407))).f_IV = ((rt_int)1LL);
{ R21 * rv416 = l_N_407;
return rv416; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv417 = r_NEW_NODE(g_N_BOOL, (l_T_406).f_LINE);
return rv417; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv418 = r_NEW_NODE(g_N_NIL, (l_T_406).f_LINE);
return rv418; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv419 = r_NEW_NODE(g_N_ANY, (l_T_406).f_LINE);
return rv419; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_420; memset(&l_TS_420, 0, sizeof l_TS_420);
l_TS_420 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_407 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_407))).f_B = l_TS_420;
{ R21 * rv421 = l_N_407;
return rv421; }
}
l_N_407 = r_NEW_NODE(g_N_TYPESPEC, (l_T_406).f_LINE);
((*(R21 *)rt_nil_check(l_N_407))).f_A = l_TS_420;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_407))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv422 = l_N_407;
return rv422; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_423; memset(&l_HEAD_423, 0, sizeof l_HEAD_423);
l_HEAD_423 = NULL;
R21 * l_TAIL_424; memset(&l_TAIL_424, 0, sizeof l_TAIL_424);
l_TAIL_424 = NULL;
r_SKIP();
for (;;) {
{
l_N_407 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_407))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_407))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_407, &l_HEAD_423, &l_TAIL_424);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end425;
} L_end425: ;
r_EXPECT(rt_str(")", 1));
l_N_407 = r_NEW_NODE(g_N_RECCONS, (l_T_406).f_LINE);
((*(R21 *)rt_nil_check(l_N_407))).f_A = l_HEAD_423;
{ R21 * rv426 = l_N_407;
return rv426; }
}
}
r_SKIP();
{
R21 * l_E_427; memset(&l_E_427, 0, sizeof l_E_427);
l_E_427 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_428; memset(&l_HEAD_428, 0, sizeof l_HEAD_428);
l_HEAD_428 = NULL;
R21 * l_TAIL_429; memset(&l_TAIL_429, 0, sizeof l_TAIL_429);
l_TAIL_429 = NULL;
r_ADD_LIST(l_E_427, &l_HEAD_428, &l_TAIL_429);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end430;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_428, &l_TAIL_429);
}
RT_B_TICK();
} L_end430: ;
r_EXPECT(rt_str(")", 1));
l_N_407 = r_NEW_NODE(g_N_ARRCONS, (l_T_406).f_LINE);
((*(R21 *)rt_nil_check(l_N_407))).f_A = l_HEAD_428;
{ R21 * rv431 = l_N_407;
return rv431; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_407 = r_NEW_NODE(g_N_PAREN, (l_T_406).f_LINE);
((*(R21 *)rt_nil_check(l_N_407))).f_A = l_E_427;
{ R21 * rv432 = l_N_407;
return rv432; }
}
}
if (((l_T_406).f_KIND == g_K_ID))
{
l_N_407 = r_NEW_NODE(g_N_NAME, (l_T_406).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_407))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R21 *)rt_nil_check(l_N_407))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_407))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_407))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R21 *)rt_nil_check(l_N_407))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_407))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv433 = l_N_407;
return rv433; }
}
r_FAILT((l_T_406).f_LINE, rt_str("an expression expected, not ", 28), (l_T_406).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_434; memset(&l_LINE_434, 0, sizeof l_LINE_434);
l_LINE_434 = r_LINE_NOW();
R21 * l_HEAD_435; memset(&l_HEAD_435, 0, sizeof l_HEAD_435);
l_HEAD_435 = NULL;
R21 * l_TAIL_436; memset(&l_TAIL_436, 0, sizeof l_TAIL_436);
l_TAIL_436 = NULL;
rt_int l_STRINGS_437; memset(&l_STRINGS_437, 0, sizeof l_STRINGS_437);
l_STRINGS_437 = ((rt_int)0LL);
R21 * l_N_438; memset(&l_N_438, 0, sizeof l_N_438);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end439;
{
l_N_438 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_438))).f_IV = (r_CUR()).f_KIND;
S_R10(&((*(R21 *)rt_nil_check(l_N_438))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_438))).f_IV == g_K_STR))
{
l_STRINGS_437 = rt_add(l_STRINGS_437, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_438, &l_HEAD_435, &l_TAIL_436);
}
RT_B_TICK();
} L_end439: ;
if ((((l_STRINGS_437 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R21 *)rt_nil_check(l_HEAD_435))).f_NEXT == NULL)))
{
((*(R21 *)rt_nil_check(l_HEAD_435))).f_KIND = g_N_ENUMLIT;
{ R21 * rv440 = l_HEAD_435;
return rv440; }
}
l_N_438 = r_NEW_NODE(g_N_STR, l_LINE_434);
((*(R21 *)rt_nil_check(l_N_438))).f_A = l_HEAD_435;
S_R10(&((*(R21 *)rt_nil_check(l_N_438))).f_NAME, p_CHARSET, 0);
{ R21 * rv441 = l_N_438;
return rv441; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv442 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv442; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R21 * l_HEAD_443; memset(&l_HEAD_443, 0, sizeof l_HEAD_443);
l_HEAD_443 = NULL;
R21 * l_TAIL_444; memset(&l_TAIL_444, 0, sizeof l_TAIL_444);
l_TAIL_444 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end445;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_443, &l_TAIL_444);
}
RT_B_TICK();
} L_end445: ;
{ R21 * rv446 = l_HEAD_443;
return rv446; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R21 * l_HEAD_447; memset(&l_HEAD_447, 0, sizeof l_HEAD_447);
l_HEAD_447 = NULL;
R21 * l_TAIL_448; memset(&l_TAIL_448, 0, sizeof l_TAIL_448);
l_TAIL_448 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end449;
{
{
R21 * l_H_450; memset(&l_H_450, 0, sizeof l_H_450);
l_H_450 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_450))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_450))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_450, &l_HEAD_447, &l_TAIL_448);
}
}
RT_B_TICK();
} L_end449: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv451 = l_HEAD_447;
return rv451; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R21 * l_S_452; memset(&l_S_452, 0, sizeof l_S_452);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_452 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_S_452))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_452))).f_A = r_PARSE_STATEMENT();
{ R21 * rv453 = l_S_452;
return rv453; }
}
l_S_452 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_454; memset(&l_X_454, 0, sizeof l_X_454);
l_X_454 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_454))).f_A = l_S_452;
((*(R21 *)rt_nil_check(l_X_454))).f_B = r_PARSE_HANDLERS();
{ R21 * rv455 = l_X_454;
return rv455; }
}
}
{ R21 * rv456 = l_S_452;
return rv456; }
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
rt_int l_LINE_457; memset(&l_LINE_457, 0, sizeof l_LINE_457);
l_LINE_457 = r_LINE_NOW();
R21 * l_S_458; memset(&l_S_458, 0, sizeof l_S_458);
R21 * l_T_459; memset(&l_T_459, 0, sizeof l_T_459);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv460 = r_NEW_NODE(g_N_NULL, l_LINE_457);
return rv460; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv461 = r_PARSE_IF();
return rv461; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv462 = r_PARSE_CASE();
return rv462; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv463 = r_PARSE_LOOP();
return rv463; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv464 = r_PARSE_PAR();
return rv464; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_458 = r_NEW_NODE(g_N_BLOCK, l_LINE_457);
((*(R21 *)rt_nil_check(l_S_458))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv465 = l_S_458;
return rv465; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_458 = r_NEW_NODE(g_N_WITH, l_LINE_457);
S_R10(&((*(R21 *)rt_nil_check(l_S_458))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_458))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_458))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_458))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_458))).f_B = r_PARSE_UNLABELED();
{ R21 * rv466 = l_S_458;
return rv466; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv467 = r_NEW_NODE(g_N_EXIT, l_LINE_457);
return rv467; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_458 = r_NEW_NODE(g_N_GOTO, l_LINE_457);
S_R10(&((*(R21 *)rt_nil_check(l_S_458))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv468 = l_S_458;
return rv468; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_458 = r_NEW_NODE(g_N_RETURN, l_LINE_457);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_458))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv469 = l_S_458;
return rv469; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_458 = r_NEW_NODE(g_N_SIGNAL, l_LINE_457);
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_458))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv470 = l_S_458;
return rv470; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_458 = r_NEW_NODE(g_N_ASSERT, l_LINE_457);
((*(R21 *)rt_nil_check(l_S_458))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv471 = l_S_458;
return rv471; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_458 = r_NEW_NODE(g_N_TERMINATE, l_LINE_457);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_458))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv472 = l_S_458;
return rv472; }
}
l_T_459 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_457, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_458 = r_NEW_NODE(g_N_ASSIGN, l_LINE_457);
((*(R21 *)rt_nil_check(l_S_458))).f_A = l_T_459;
((*(R21 *)rt_nil_check(l_S_458))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv473 = l_S_458;
return rv473; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R21 *)rt_nil_check(l_T_459))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_459))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_T_459))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_T_459))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_457, rt_str("a statement expected", 20));
}
{ R21 * rv474 = l_T_459;
return rv474; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { RT_B_TICK(); 
R21 * l_S_475; memset(&l_S_475, 0, sizeof l_S_475);
l_S_475 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_476; memset(&l_HEAD_476, 0, sizeof l_HEAD_476);
l_HEAD_476 = NULL;
R21 * l_TAIL_477; memset(&l_TAIL_477, 0, sizeof l_TAIL_477);
l_TAIL_477 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_479; memset(&l_ARM_479, 0, sizeof l_ARM_479);
l_ARM_479 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_479))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_479))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_479, &l_HEAD_476, &l_TAIL_477);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end478;
} L_end478: ;
((*(R21 *)rt_nil_check(l_S_475))).f_A = l_HEAD_476;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_475))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv480 = l_S_475;
return rv480; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv481 = r_PARSE_RANGE();
return rv481; }
}
{ R21 * rv482 = r_PARSE_EXPR();
return rv482; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { RT_B_TICK(); 
R21 * l_S_483; memset(&l_S_483, 0, sizeof l_S_483);
l_S_483 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_484; memset(&l_HEAD_484, 0, sizeof l_HEAD_484);
l_HEAD_484 = NULL;
R21 * l_TAIL_485; memset(&l_TAIL_485, 0, sizeof l_TAIL_485);
l_TAIL_485 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_483))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end486;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_483))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_483))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_487; memset(&l_ARM_487, 0, sizeof l_ARM_487);
l_ARM_487 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_488; memset(&l_LH_488, 0, sizeof l_LH_488);
l_LH_488 = NULL;
R21 * l_LT_489; memset(&l_LT_489, 0, sizeof l_LT_489);
l_LT_489 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_488, &l_LT_489);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end490;
} L_end490: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_487))).f_A = l_LH_488;
((*(R21 *)rt_nil_check(l_ARM_487))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_487))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_487, &l_HEAD_484, &l_TAIL_485);
}
}
}
RT_B_TICK();
} L_end486: ;
((*(R21 *)rt_nil_check(l_S_483))).f_B = l_HEAD_484;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv491 = l_S_483;
return rv491; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R21 * l_S_492; memset(&l_S_492, 0, sizeof l_S_492);
l_S_492 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_492))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_492))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_492))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_492))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_492))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_492))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv493 = l_S_492;
return rv493; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_492))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_492))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_492))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_492))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv494 = l_S_492;
return rv494; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { RT_B_TICK(); 
R21 * l_S_495; memset(&l_S_495, 0, sizeof l_S_495);
l_S_495 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_496; memset(&l_HEAD_496, 0, sizeof l_HEAD_496);
l_HEAD_496 = NULL;
R21 * l_TAIL_497; memset(&l_TAIL_497, 0, sizeof l_TAIL_497);
l_TAIL_497 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end498;
{
{
R21 * l_P_499; memset(&l_P_499, 0, sizeof l_P_499);
l_P_499 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_500; memset(&l_H_500, 0, sizeof l_H_500);
l_H_500 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R10(&((*(R21 *)rt_nil_check(l_P_499))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_499))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_499))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_499))).f_E))).f_A = l_H_500;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_499))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_499))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_499))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_499))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_499))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_500))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_500))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end501;
}
}
RT_B_TICK();
} L_end501: ;
if ((!(((*(R21 *)rt_nil_check(l_P_499))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R21 *)rt_nil_check(l_P_499))).f_D, l_H_500);
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_499))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_499))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_499, &l_HEAD_496, &l_TAIL_497);
}
}
RT_B_TICK();
} L_end498: ;
((*(R21 *)rt_nil_check(l_S_495))).f_A = l_HEAD_496;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv502 = l_S_495;
return rv502; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R21 * p_E, R21 * p_H) { RT_B_TICK(); 
R21 * l_R_503; memset(&l_R_503, 0, sizeof l_R_503);
l_R_503 = p_E;
for (;;) {
if (((((*(R21 *)rt_nil_check(l_R_503))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_503))).f_KIND == g_N_APPLY))) goto L_end504;
{
if (((!(((*(R21 *)rt_nil_check(l_R_503))).f_KIND == g_N_INDEX)) && (!(((*(R21 *)rt_nil_check(l_R_503))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_503 = ((*(R21 *)rt_nil_check(l_R_503))).f_A;
}
RT_B_TICK();
} L_end504: ;
if ((((*(R21 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R21 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
{
R21 * l_P_505; memset(&l_P_505, 0, sizeof l_P_505);
l_P_505 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_505 == NULL)) goto L_end506;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_505))).f_NAME, ((*(R21 *)rt_nil_check(l_R_503))).f_NAME))
{
return;
}
l_P_505 = ((*(R21 *)rt_nil_check(l_P_505))).f_NEXT;
}
RT_B_TICK();
} L_end506: ;
l_P_505 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_505 == NULL)) goto L_end507;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_505))).f_NAME, ((*(R21 *)rt_nil_check(l_R_503))).f_NAME))
{
return;
}
l_P_505 = ((*(R21 *)rt_nil_check(l_P_505))).f_NEXT;
}
RT_B_TICK();
} L_end507: ;
}
{
R21 * l_N_508; memset(&l_N_508, 0, sizeof l_N_508);
l_N_508 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_508))).f_NAME, ((*(R21 *)rt_nil_check(l_R_503))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_508))).f_NEXT = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B = l_N_508;
}
}
static R10 r_NO_TEXT(void) { RT_B_TICK(); 
{ R10 rv509 = ({ R10 rc510; memset(&rc510, 0, sizeof rc510);  rc510.f_AT = ((rt_int)0LL); rc510.f_LEN = ((rt_int)0LL); rc510.f_H = ((rt_int)0LL); rc510; });
return rv509; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv511 = ({ R23 rc512; memset(&rc512, 0, sizeof rc512);  rc512.f_OK = 0; rc512.f_V = ((rt_int)0LL); rc512; });
return rv511; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv513 = ({ R23 rc514; memset(&rc514, 0, sizeof rc514);  rc514.f_OK = 1; rc514.f_V = p_V; rc514; });
return rv513; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_515; memset(&l_Y_515, 0, sizeof l_Y_515);
l_Y_515 = ((R12 *)rt_b_new(sizeof (R12)));
rt_int l_LEVEL_516; memset(&l_LEVEL_516, 0, sizeof l_LEVEL_516);
l_LEVEL_516 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_516 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_515)), ({ R12 rc517; memset(&rc517, 0, sizeof rc517);  rc517.f_KIND = p_KIND; rc517.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc517.f_LEVEL = l_LEVEL_516; S_R10(&rc517.f_NAME, p_NAME, 0); rc517.f_T = NULL; S_R10(&rc517.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc517.f_FIELD, r_NO_TEXT(), 0); rc517.f_INPUT = 0; rc517.f_BYREF = 0; rc517.f_HASMV = 0; rc517.f_MV = ((rt_int)0LL); rc517.f_TS = NULL; rc517.f_BUSY = 0; S_R10(&rc517.f_FWD, r_NO_TEXT(), 0); rc517.f_PARAMS = NULL; rc517.f_RESULT = NULL; rc517.f_DECL = NULL; S_R10(&rc517.f_PREFIX, r_NO_TEXT(), 0); rc517.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc517.f_EXPORTED = 0; rc517.f_GENERIC = 0; rc517.f_FRAMED = 0; rc517.f_USES = NULL; rc517.f_INSTANCES = NULL; rc517.f_BINDINGS = NULL; rc517.f_ORIG = NULL; rc517.f_MEMBERS = NULL; rc517.f_SAVED = NULL; rc517.f_OWNER = r_CUR_OWNER(); rc517.f_WITHV = ((rt_int)0LL); rc517.f_LAZY = ((rt_int)0LL); rc517.f_SEGM = NULL; rc517.f_HOME = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG; rc517.f_CHAIN = NULL; rc517.f_SNEXT = NULL; rc517; }), 0);
{ R12 * rv518 = l_Y_515;
return rv518; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv519 = ((rt_int)0LL);
return rv519; }
}
{ rt_int rv520 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv520; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv521 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv521; }
}
{ R12 * rv522 = p_Y;
return rv522; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv523 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv523; }
}
{ rt_int rv524 = (p_NAME).f_H;
return rv524; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_525; memset(&l_Y_525, 0, sizeof l_Y_525);
l_Y_525 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_525 == NULL)) goto L_end526;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_525))).f_NAME, p_NAME))
{
{ R12 * rv527 = l_Y_525;
return rv527; }
}
l_Y_525 = ((*(R12 *)rt_nil_check(l_Y_525))).f_CHAIN;
}
RT_B_TICK();
} L_end526: ;
{ R12 * rv528 = NULL;
return rv528; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_529; memset(&l_Y_529, 0, sizeof l_Y_529);
l_Y_529 = r_LOOKUP(p_NAME);
if ((l_Y_529 == NULL))
{
{ R12 * rv530 = NULL;
return rv530; }
}
{ R12 * rv531 = r_ORIGINAL(l_Y_529);
return rv531; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv532 = r_LOOKUP(r_MKN(p_NAME));
return rv532; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_533; memset(&l_Z_533, 0, sizeof l_Z_533);
l_Z_533 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_533 == NULL)) goto L_end534;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_533))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv535 = l_Z_533;
return rv535; }
}
l_Z_533 = ((*(R12 *)rt_nil_check(l_Z_533))).f_CHAIN;
}
RT_B_TICK();
} L_end534: ;
{ R12 * rv536 = NULL;
return rv536; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv537 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv537; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_538; memset(&l_B_538, 0, sizeof l_B_538);
l_B_538 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_539; memset(&l_OLD_539, 0, sizeof l_OLD_539);
l_OLD_539 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_539 == NULL)) goto L_end540;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_539))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end540;
}
if ((!((((r_IS_ROUTINE(l_OLD_539) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_539))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_539 = r_LOOKUP_NEXT(l_OLD_539);
}
RT_B_TICK();
} L_end540: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_538, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_538, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end541;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end541;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end541: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_542; memset(&l_B_542, 0, sizeof l_B_542);
l_B_542 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_543; memset(&l_P_543, 0, sizeof l_P_543);
l_P_543 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_542, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_543 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_542, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_543 == NULL)) goto L_end544;
{
if ((((*(R12 *)rt_nil_check(l_P_543))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_543))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_543 = ((*(R12 *)rt_nil_check(l_P_543))).f_CHAIN;
}
RT_B_TICK();
} L_end544: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_545; memset(&l_HEAD_545, 0, sizeof l_HEAD_545);
l_HEAD_545 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end546;
{
{
R12 * l_Y_547; memset(&l_Y_547, 0, sizeof l_Y_547);
l_Y_547 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_547);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_547))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_547))).f_SNEXT = l_HEAD_545;
l_HEAD_545 = l_Y_547;
}
}
RT_B_TICK();
} L_end546: ;
{ R12 * rv548 = l_HEAD_545;
return rv548; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_549; memset(&l_T_549, 0, sizeof l_T_549);
l_T_549 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_549)), ({ R22 rc550; memset(&rc550, 0, sizeof rc550);  rc550.f_KIND = p_KIND; rc550.f_SCALE = ((rt_int)0LL); S_R10(&rc550.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc550.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc550.f_MLO, r_NO_MVAL(), 0); S_R23(&rc550.f_MHI, r_NO_MVAL(), 0); rc550.f_RLEVEL = ((rt_int)0LL); S_R10(&rc550.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc550.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc550.f_GEN, r_NO_TEXT(), 0); rc550.f_BASE = NULL; rc550.f_ELEM = NULL; rc550.f_TARGET = NULL; rc550.f_TARGET_TS = NULL; rc550.f_FIELDS = NULL; rc550.f_LITS = NULL; rc550.f_NLITS = ((rt_int)0LL); rc550.f_UNORDERED = 0; rc550.f_BOUNDS = NULL; rc550.f_DIMS = ((rt_int)0LL); rc550.f_ARGS = NULL; S_R10(&rc550.f_NAME, r_NO_TEXT(), 0); S_R10(&rc550.f_CNAME, r_NO_TEXT(), 0); rc550.f_MODL = NULL; rc550.f_REPS = NULL; rc550.f_DECL = NULL; S_R10(&rc550.f_GENP, r_NO_TEXT(), 0); rc550; }), 0);
{ R22 * rv551 = l_T_549;
return rv551; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_552; memset(&l_C_552, 0, sizeof l_C_552);
l_C_552 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_552)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv553 = l_C_552;
return rv553; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_554; memset(&l_Y_554, 0, sizeof l_Y_554);
l_Y_554 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_554))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_554))).f_NAME, 0);
}
r_DEFINE(l_Y_554, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_555; memset(&l_Y_555, 0, sizeof l_Y_555);
l_Y_555 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_555))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_555))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_555))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_555))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_555))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_555, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_556; memset(&l_HEAD_556, 0, sizeof l_HEAD_556);
l_HEAD_556 = NULL;
R21 * l_TAIL_557; memset(&l_TAIL_557, 0, sizeof l_TAIL_557);
l_TAIL_557 = NULL;
rt_int l_START_558; memset(&l_START_558, 0, sizeof l_START_558);
l_START_558 = ((rt_int)0LL);
{ rt_int it560_lo = ((rt_int)0LL), it560_hi = (rt_int)(p_NAMES).len;
for (rt_int it560 = it560_lo; it560 <= it560_hi; it560++) {
{
if (((it560 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it560, it560), rt_str(" ", 1))))
{
if ((it560 > l_START_558))
{
{
R21 * l_N_561; memset(&l_N_561, 0, sizeof l_N_561);
l_N_561 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_561))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_558, rt_sub(it560, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_561, &l_HEAD_556, &l_TAIL_557);
}
}
l_START_558 = rt_add(it560, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it560 == it560_hi) break;
} } L_end559: ;
{
R22 * l_T_562; memset(&l_T_562, 0, sizeof l_T_562);
l_T_562 = r_ENUM_CLASS(l_HEAD_556, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_562);
{ R22 * rv563 = l_T_562;
return rv563; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_564; memset(&l_T_564, 0, sizeof l_T_564);
R21 * l_ASCII_LITS_565; memset(&l_ASCII_LITS_565, 0, sizeof l_ASCII_LITS_565);
l_ASCII_LITS_565 = NULL;
R21 * l_TAIL_566; memset(&l_TAIL_566, 0, sizeof l_TAIL_566);
l_TAIL_566 = NULL;
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
{ rt_int it568_lo = ((rt_int)0LL), it568_hi = ((rt_int)127LL);
for (rt_int it568 = it568_lo; it568 <= it568_hi; it568++) {
{
{
R21 * l_N_569; memset(&l_N_569, 0, sizeof l_N_569);
l_N_569 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_569))).f_NAME, r_ASCII_NAME(it568), 0);
r_ADD_LIST(l_N_569, &l_ASCII_LITS_565, &l_TAIL_566);
}
}
RT_B_TICK();
if (it568 == it568_hi) break;
} } L_end567: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_565, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_564 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_564 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_564 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_564 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_570; memset(&l_OPS_570, 0, sizeof l_OPS_570);
l_OPS_570 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_570, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_571; memset(&l_START_571, 0, sizeof l_START_571);
l_START_571 = ((rt_int)1LL);
{ rt_int it573_lo = ((rt_int)1LL), it573_hi = ((rt_int)270LL);
for (rt_int it573 = it573_lo; it573 <= it573_hi; it573++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_570, it573, it573), rt_str(" ", 1)))
{
if ((it573 > l_START_571))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_570, l_START_571, rt_sub(it573, ((rt_int)1LL))));
}
l_START_571 = rt_add(it573, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it573 == it573_hi) break;
} } L_end572: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R21 * l_F_574; memset(&l_F_574, 0, sizeof l_F_574);
l_F_574 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R21 * l_V_575; memset(&l_V_575, 0, sizeof l_V_575);
l_V_575 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R21 * l_R_576; memset(&l_R_576, 0, sizeof l_R_576);
l_R_576 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R21 * l_D_577; memset(&l_D_577, 0, sizeof l_D_577);
l_D_577 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R21 * l_FX_578; memset(&l_FX_578, 0, sizeof l_FX_578);
l_FX_578 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_579; memset(&l_Y_579, 0, sizeof l_Y_579);
l_Y_579 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R21 *)rt_nil_check(l_F_574))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_574))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_F_574))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_574))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R10(&((*(R21 *)rt_nil_check(l_FX_578))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R21 *)rt_nil_check(l_FX_578))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_578))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_578))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_578))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_578))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_V_575))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_575))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_575))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_575))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R21 *)rt_nil_check(l_V_575))).f_B = l_FX_578;
((*(R21 *)rt_nil_check(l_R_576))).f_A = l_V_575;
S_R10(&((*(R21 *)rt_nil_check(l_D_577))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_579))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_D_577))).f_A = l_F_574;
((*(R21 *)rt_nil_check(l_D_577))).f_B = l_R_576;
((*(R12 *)rt_nil_check(l_Y_579))).f_DECL = l_D_577;
r_DEFINE(l_Y_579, ((rt_int)0LL));
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
rstr l_CONTROLS_580; memset(&l_CONTROLS_580, 0, sizeof l_CONTROLS_580);
l_CONTROLS_580 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_580, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_580, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv581 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_580, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv581; }
}
{ R10 rv582 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_580, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv582; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv583 = r_MKN(rt_str("\\''''", 5));
return rv583; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv584 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv584; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv585 = r_MKN(rt_str("\\ACCENT", 7));
return rv585; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv586 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv586; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv587 = r_MKN(rt_str("\\[", 2));
return rv587; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv588 = r_MKN(rt_str("\\BAR", 4));
return rv588; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv589 = r_MKN(rt_str("\\]", 2));
return rv589; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv590 = r_MKN(rt_str("\\TILDE", 6));
return rv590; }
}
{ R10 rv591 = r_MKN(rt_str("\\DEL", 4));
return rv591; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv592 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv592; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv593 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv593; }
}
{ R22 * rv594 = p_T;
return rv594; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_595; memset(&l_K_595, 0, sizeof l_K_595);
l_K_595 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv596 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv596; }
}
else if ((l_K_595 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv597 = r_MK(rt_str("INTEGER", 7));
return rv597; }
}
{ R10 rv598 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv598; }
}
else if ((l_K_595 == g_T_BOOL))
{
{ R10 rv599 = r_MK(rt_str("BOOLEAN", 7));
return rv599; }
}
else if ((l_K_595 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv600 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv600; }
}
{ R10 rv601 = r_MK(rt_str("an enumerated type", 18));
return rv601; }
}
else if ((l_K_595 == g_T_STR))
{
{ R10 rv602 = r_MK(rt_str("CHAR_STR", 8));
return rv602; }
}
else if ((l_K_595 == g_T_BITS))
{
{ R10 rv603 = r_MK(rt_str("BIT", 3));
return rv603; }
}
else if ((l_K_595 == g_T_FLOAT))
{
{ R10 rv604 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv604; }
}
else if ((l_K_595 == g_T_ARR))
{
{ R10 rv605 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv605; }
}
else if ((l_K_595 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv606 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv606; }
}
{ R10 rv607 = r_MK(rt_str("RECORD", 6));
return rv607; }
}
else if ((l_K_595 == g_T_PTR))
{
{ R10 rv608 = r_MK(rt_str("PTR", 3));
return rv608; }
}
else if ((l_K_595 == g_T_SEM))
{
{ R10 rv609 = r_MK(rt_str("SEMAPHORE", 9));
return rv609; }
}
else if ((l_K_595 == g_T_NIL))
{
{ R10 rv610 = r_MK(rt_str("NIL", 3));
return rv610; }
}
else if ((l_K_595 == g_T_VOID))
{
{ R10 rv611 = r_MK(rt_str("no value", 8));
return rv611; }
}
{ R10 rv612 = r_MK(rt_str("a type", 6));
return rv612; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { RT_B_TICK(); 
rstr l_S_613; memset(&l_S_613, 0, sizeof l_S_613);
l_S_613 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_613, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_614; memset(&l_AT_614, 0, sizeof l_AT_614);
l_AT_614 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_615; memset(&l_START_615, 0, sizeof l_START_615);
l_START_615 = ((rt_int)0LL);
R10 l_R_616; memset(&l_R_616, 0, sizeof l_R_616);
rt_int l_I_617; memset(&l_I_617, 0, sizeof l_I_617);
l_I_617 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv618 = p_T;
return rv618; }
}
for (;;) {
if ((l_I_617 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end619;
{
if (rt_b_eq(rt_b_slice(l_S_613, l_I_617, rt_add(l_I_617, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_616, r_MK(rt_b_slice(l_S_613, l_START_615, rt_sub(l_I_617, ((rt_int)1LL)))), 0);
S_R10(&l_R_616, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_617 = rt_add(l_I_617, ((rt_int)2LL));
l_START_615 = l_I_617;
}
else
{
l_I_617 = rt_add(l_I_617, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end619: ;
if ((l_START_615 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_614;
{ R10 rv620 = p_T;
return rv620; }
}
S_R10(&l_R_616, r_MK(rt_b_slice(l_S_613, l_START_615, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv621 = ({ R10 rc622; memset(&rc622, 0, sizeof rc622);  rc622.f_AT = l_AT_614; rc622.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_614); rc622.f_H = rt_neg(((rt_int)1LL)); rc622; });
return rv621; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_623; memset(&l_P_623, 0, sizeof l_P_623);
l_P_623 = p_A;
R21 * l_Q_624; memset(&l_Q_624, 0, sizeof l_Q_624);
l_Q_624 = p_B;
for (;;) {
if (((l_P_623 == NULL) || (l_Q_624 == NULL))) goto L_end625;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_623))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_624))).f_NAME)))
{
{ rt_int rv626 = 0;
return rv626; }
}
l_P_623 = ((*(R21 *)rt_nil_check(l_P_623))).f_NEXT;
l_Q_624 = ((*(R21 *)rt_nil_check(l_Q_624))).f_NEXT;
}
RT_B_TICK();
} L_end625: ;
{ rt_int rv627 = ((l_P_623 == NULL) && (l_Q_624 == NULL));
return rv627; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_628; memset(&l_Y_628, 0, sizeof l_Y_628);
l_Y_628 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_629; memset(&l_T_629, 0, sizeof l_T_629);
{
R21 * l_P_630; memset(&l_P_630, 0, sizeof l_P_630);
l_P_630 = p_LITS;
for (;;) {
if ((l_P_630 == NULL)) goto L_end631;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_P_630))).f_NEXT, ((*(R21 *)rt_nil_check(l_P_630))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R21 *)rt_nil_check(l_P_630))).f_NAME);
}
l_P_630 = ((*(R21 *)rt_nil_check(l_P_630))).f_NEXT;
}
RT_B_TICK();
} L_end631: ;
}
for (;;) {
if ((l_Y_628 == NULL)) goto L_end632;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_628))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_628))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_628))).f_T, p_LINE);
{ R22 * rv633 = ((*(R12 *)rt_nil_check(l_Y_628))).f_T;
return rv633; }
}
l_Y_628 = ((*(R12 *)rt_nil_check(l_Y_628))).f_INSTANCES;
}
RT_B_TICK();
} L_end632: ;
l_T_629 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_629))).f_BASE = l_T_629;
((*(R22 *)rt_nil_check(l_T_629))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_629))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_629))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_629))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_628 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_628))).f_T = l_T_629;
((*(R12 *)rt_nil_check(l_Y_628))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_628;
{
R21 * l_P_634; memset(&l_P_634, 0, sizeof l_P_634);
l_P_634 = p_LITS;
R10 l_NAMES_635; memset(&l_NAMES_635, 0, sizeof l_NAMES_635);
S_R10(&l_NAMES_635, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_634 == NULL)) goto L_end636;
{
S_R10(&l_NAMES_635, r_FMT2(rt_str("@@, ", 4), l_NAMES_635, r_CSTRING(((*(R21 *)rt_nil_check(l_P_634))).f_NAME)), 0);
l_P_634 = ((*(R21 *)rt_nil_check(l_P_634))).f_NEXT;
}
RT_B_TICK();
} L_end636: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_629))).f_CNAME, l_NAMES_635));
}
r_DECLARE_LITERALS(l_T_629, p_LINE);
{ R22 * rv637 = l_T_629;
return rv637; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_638; memset(&l_P_638, 0, sizeof l_P_638);
l_P_638 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_639; memset(&l_I_639, 0, sizeof l_I_639);
l_I_639 = ((rt_int)0LL);
for (;;) {
if ((l_P_638 == NULL)) goto L_end640;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_638))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_641; memset(&l_Y_641, 0, sizeof l_Y_641);
l_Y_641 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_638))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_641))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_641))).f_MV = l_I_639;
((*(R12 *)rt_nil_check(l_Y_641))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_641))).f_INPUT = 1;
r_DEFINE(l_Y_641, p_LINE);
}
}
l_I_639 = rt_add(l_I_639, ((rt_int)1LL));
l_P_638 = ((*(R21 *)rt_nil_check(l_P_638))).f_NEXT;
}
RT_B_TICK();
} L_end640: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_642; memset(&l_V_642, 0, sizeof l_V_642);
l_V_642 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_642 == NULL)) || (p_T == NULL)))
{
{ R12 * rv643 = l_V_642;
return rv643; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv644 = NULL;
return rv644; }
}
{
R21 * l_P_645; memset(&l_P_645, 0, sizeof l_P_645);
l_P_645 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_646; memset(&l_I_646, 0, sizeof l_I_646);
l_I_646 = ((rt_int)0LL);
for (;;) {
if ((l_P_645 == NULL)) goto L_end647;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_645))).f_NAME, p_NAME))
{
{
R12 * l_Y_648; memset(&l_Y_648, 0, sizeof l_Y_648);
l_Y_648 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_648))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_648))).f_MV = l_I_646;
((*(R12 *)rt_nil_check(l_Y_648))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_648))).f_INPUT = 1;
{ R12 * rv649 = l_Y_648;
return rv649; }
}
}
l_I_646 = rt_add(l_I_646, ((rt_int)1LL));
l_P_645 = ((*(R21 *)rt_nil_check(l_P_645))).f_NEXT;
}
RT_B_TICK();
} L_end647: ;
}
{ R12 * rv650 = NULL;
return rv650; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_651; memset(&l_Y_651, 0, sizeof l_Y_651);
l_Y_651 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_651 == NULL)) goto L_end652;
{
if ((((*(R12 *)rt_nil_check(l_Y_651))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv653 = l_Y_651;
return rv653; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_651))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv654 = l_Y_651;
return rv654; }
}
}
l_Y_651 = r_LOOKUP_NEXT(l_Y_651);
}
RT_B_TICK();
} L_end652: ;
{ R12 * rv655 = NULL;
return rv655; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_656; memset(&l_Y_656, 0, sizeof l_Y_656);
l_Y_656 = r_LOOKUP(p_NAME);
rt_int l_N_657; memset(&l_N_657, 0, sizeof l_N_657);
l_N_657 = ((rt_int)0LL);
for (;;) {
if ((l_Y_656 == NULL)) goto L_end658;
{
if ((((*(R12 *)rt_nil_check(l_Y_656))).f_KIND == g_Y_ENUMLIT))
{
l_N_657 = rt_add(l_N_657, ((rt_int)1LL));
}
l_Y_656 = r_LOOKUP_NEXT(l_Y_656);
}
RT_B_TICK();
} L_end658: ;
{ rt_int rv659 = l_N_657;
return rv659; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv660 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv660; }
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
R22 * l_N_661; memset(&l_N_661, 0, sizeof l_N_661);
if ((p_R == NULL))
{
{ R22 * rv662 = p_T;
return rv662; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_661 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv663 = l_N_661;
return rv663; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_661 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_661))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_664; memset(&l_LO_664, 0, sizeof l_LO_664);
R26 l_HI_665; memset(&l_HI_665, 0, sizeof l_HI_665);
S_R26(&l_LO_664, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_665, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_LO_C, (l_LO_664).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_HI_C, (l_HI_665).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_661))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_661))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_661))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_661))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_664).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_665).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_LO_C, r_RESCALE(l_LO_664, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_HI_C, r_RESCALE(l_HI_665, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_664).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_665).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_661))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_661))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_661))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_661))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_661))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_661))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_661))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_661))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_661))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_661))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_661))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv666 = l_N_661;
return rv666; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_667; memset(&l_Y_667, 0, sizeof l_Y_667);
l_Y_667 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_667 == NULL)))
{
{ R23 rv668 = r_SOME(((*(R12 *)rt_nil_check(l_Y_667))).f_MV);
return rv668; }
}
}
}
{ R23 rv669 = r_MANIFEST(p_E);
return rv669; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv670 = ((rt_int)0LL);
return rv670; }
}
{ rt_int rv671 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv671; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv672 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv672; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_673; memset(&l_A_673, 0, sizeof l_A_673);
l_A_673 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it675_lo = ((rt_int)1LL), it675_hi = p_K;
for (rt_int it675 = it675_lo; it675 <= it675_hi; it675++) {
{
if ((l_A_673 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_673 = ((*(R21 *)rt_nil_check(l_A_673))).f_NEXT;
}
RT_B_TICK();
if (it675 == it675_hi) break;
} } L_end674: ;
if ((l_A_673 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv676 = l_A_673;
return rv676; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_677; memset(&l_T_677, 0, sizeof l_T_677);
rt_int l_K_678; memset(&l_K_678, 0, sizeof l_K_678);
l_K_678 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_678 == g_TS_ARRAY))
{
{ R22 * rv679 = r_RESOLVE_ARRAY(p_TS);
return rv679; }
}
else if ((l_K_678 == g_TS_RECORD))
{
{ R22 * rv680 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv680; }
}
else if ((l_K_678 == g_TS_ENUM))
{
l_T_677 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_677 = r_WITH_RANGE(l_T_677, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_677 = r_APPLY_REP(l_T_677, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv681 = l_T_677;
return rv681; }
}
else if ((l_K_678 == g_TS_GEN))
{
{ R22 * rv682 = r_GEN_TYPE(p_TS);
return rv682; }
}
else if ((!(l_K_678 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_677 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_TS))).f_E), ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_677 = r_APPLY_REP(l_T_677, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv683 = l_T_677;
return rv683; }
}
l_T_677 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_677 == NULL))
{
l_T_677 = r_RESOLVE_USER(p_TS);
}
l_T_677 = r_WITH_RANGE(l_T_677, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_677 = r_APPLY_REP(l_T_677, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv684 = l_T_677;
return rv684; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R21 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_685; memset(&l_T_685, 0, sizeof l_T_685);
l_T_685 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_685))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_685, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_685))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_685, p_LINE);
}
else if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_685))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv686 = l_T_685;
return rv686; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPAND_REP(R21 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_687; memset(&l_Y_687, 0, sizeof l_Y_687);
if ((p_R == NULL))
{
{ R21 * rv688 = p_R;
return rv688; }
}
if ((((*(R21 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R21 * rv689 = p_R;
return rv689; }
}
l_Y_687 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_687 == NULL))
{
{ R21 * rv690 = p_R;
return rv690; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_687))).f_KIND == g_Y_REPTYPE)))
{
{ R21 * rv691 = p_R;
return rv691; }
}
if (((*(R12 *)rt_nil_check(l_Y_687))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R21 *)rt_nil_check(p_R))).f_NAME);
}
{
R21 * l_D_692; memset(&l_D_692, 0, sizeof l_D_692);
l_D_692 = ((*(R12 *)rt_nil_check(l_Y_687))).f_DECL;
R21 * l_X_693; memset(&l_X_693, 0, sizeof l_X_693);
l_X_693 = r_NEW_NODE(g_N_REP, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
R21 * l_HEAD_694; memset(&l_HEAD_694, 0, sizeof l_HEAD_694);
l_HEAD_694 = NULL;
R21 * l_TAIL_695; memset(&l_TAIL_695, 0, sizeof l_TAIL_695);
l_TAIL_695 = NULL;
((*(R12 *)rt_nil_check(l_Y_687))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R21 *)rt_nil_check(l_D_692))).f_A == NULL)) || (!(((*(R21 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_692))).f_A, p_R);
}
if ((!(((*(R21 *)rt_nil_check(l_D_692))).f_C == NULL)))
{
{
R12 * l_B_696; memset(&l_B_696, 0, sizeof l_B_696);
l_B_696 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_692))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_696))).f_T = p_T;
r_DEFINE(l_B_696, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R10(&((*(R21 *)rt_nil_check(l_X_693))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_692))).f_B))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_X_693))).f_B = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_692))).f_B))).f_B;
{
R21 * l_A_697; memset(&l_A_697, 0, sizeof l_A_697);
l_A_697 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_692))).f_B))).f_A;
for (;;) {
if ((l_A_697 == NULL)) goto L_end698;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_697), &l_HEAD_694, &l_TAIL_695);
l_A_697 = ((*(R21 *)rt_nil_check(l_A_697))).f_NEXT;
}
RT_B_TICK();
} L_end698: ;
}
((*(R21 *)rt_nil_check(l_X_693))).f_A = l_HEAD_694;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_693 = r_EXPAND_REP(l_X_693, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_687))).f_BUSY = 0;
{ R21 * rv699 = l_X_693;
return rv699; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_REP_ARG_VALUE(R21 * p_A) { RT_B_TICK(); 
R21 * l_N_700; memset(&l_N_700, 0, sizeof l_N_700);
R23 l_M_701; memset(&l_M_701, 0, sizeof l_M_701);
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_702; memset(&l_Y_702, 0, sizeof l_Y_702);
l_Y_702 = r_LOOKUP(((*(R21 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_702 == NULL) || (((!(l_Y_702 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_702))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_700 = r_NEW_NODE(((*(R21 *)rt_nil_check(p_A))).f_KIND, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_700))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
{ R21 * rv703 = l_N_700;
return rv703; }
}
if (((((*(R12 *)rt_nil_check(l_Y_702))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_702))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_702))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_702))).f_HASMV))
{
{
R21 * l_L_704; memset(&l_L_704, 0, sizeof l_L_704);
l_L_704 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_702))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_705; memset(&l_I_705, 0, sizeof l_I_705);
l_I_705 = ((rt_int)0LL);
for (;;) {
if (((l_L_704 == NULL) || (l_I_705 == ((*(R12 *)rt_nil_check(l_Y_702))).f_MV))) goto L_end706;
{
l_I_705 = rt_add(l_I_705, ((rt_int)1LL));
l_L_704 = ((*(R21 *)rt_nil_check(l_L_704))).f_NEXT;
}
RT_B_TICK();
} L_end706: ;
if ((!(l_L_704 == NULL)))
{
l_N_700 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_700))).f_NAME, ((*(R21 *)rt_nil_check(l_L_704))).f_NAME, 0);
{ R21 * rv707 = l_N_700;
return rv707; }
}
}
}
}
}
}
S_R23(&l_M_701, r_MANIFEST(p_A), 0);
if ((!(l_M_701).f_OK))
{
{
R14 l_SAVED_CODE_708; memset(&l_SAVED_CODE_708, 0, sizeof l_SAVED_CODE_708);
S_R14(&l_SAVED_CODE_708, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_709; memset(&l_V_709, 0, sizeof l_V_709);
S_R26(&l_V_709, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_708, 0);
}
{ R21 * rv710 = p_A;
return rv710; }
}
l_N_700 = r_NEW_NODE(g_N_INT, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_701).f_V < ((rt_int)0LL)))
{
((*(R21 *)rt_nil_check(l_N_700))).f_IV = rt_neg((l_M_701).f_V);
S_R10(&((*(R21 *)rt_nil_check(l_N_700))).f_NAME, r_NUM(rt_neg((l_M_701).f_V)), 0);
{
R21 * l_U_711; memset(&l_U_711, 0, sizeof l_U_711);
l_U_711 = r_NEW_NODE(g_N_UNOP, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_U_711))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R21 *)rt_nil_check(l_U_711))).f_A = l_N_700;
{ R21 * rv712 = l_U_711;
return rv712; }
}
}
((*(R21 *)rt_nil_check(l_N_700))).f_IV = (l_M_701).f_V;
S_R10(&((*(R21 *)rt_nil_check(l_N_700))).f_NAME, r_NUM((l_M_701).f_V), 0);
{ R21 * rv713 = l_N_700;
return rv713; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_714; memset(&l_R_714, 0, sizeof l_R_714);
l_R_714 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_715; memset(&l_K_715, 0, sizeof l_K_715);
l_K_715 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_716; memset(&l_OK_716, 0, sizeof l_OK_716);
l_OK_716 = 0;
if ((((*(R21 *)rt_nil_check(l_R_714))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(l_R_714))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R21 *)rt_nil_check(l_R_714))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_R_714))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R10 l_N_717; memset(&l_N_717, 0, sizeof l_N_717);
S_R10(&l_N_717, ((*(R21 *)rt_nil_check(l_R_714))).f_NAME, 0);
if ((l_K_715 == g_T_INT))
{
l_OK_716 = (r_TEQS(l_N_717, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_717, rt_str("FIXED_REP", 9)));
}
else if ((l_K_715 == g_T_FLOAT))
{
l_OK_716 = r_TEQS(l_N_717, rt_str("FLOAT_STD", 9));
}
else if ((l_K_715 == g_T_BOOL))
{
l_OK_716 = r_TEQS(l_N_717, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_715 == g_T_ENUM))
{
l_OK_716 = ((r_TEQS(l_N_717, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_717, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_717, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_715 == g_T_STR))
{
l_OK_716 = (r_TEQS(l_N_717, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_717, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_715 == g_T_BITS))
{
l_OK_716 = r_TEQS(l_N_717, rt_str("BIT_STD", 7));
}
else if ((l_K_715 == g_T_ARR))
{
l_OK_716 = (r_TEQS(l_N_717, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_717, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_715 == g_T_REC))
{
l_OK_716 = (r_TEQS(l_N_717, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_717, rt_str("RECORD_REP", 10)));
}
else if ((l_K_715 == g_T_PTR))
{
l_OK_716 = r_TEQS(l_N_717, rt_str("PTR_STD", 7));
}
else if ((l_K_715 == g_T_SEM))
{
l_OK_716 = r_TEQS(l_N_717, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_715 == g_T_TYPE))
{
l_OK_716 = 1;
}
if ((!l_OK_716))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_717);
}
if (r_TEQS(l_N_717, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_718; memset(&l_P_718, 0, sizeof l_P_718);
l_P_718 = ((rt_int)1LL);
{ rt_int it720_lo = ((rt_int)1LL), it720_hi = p_N;
for (rt_int it720 = it720_lo; it720 <= it720_hi; it720++) {
{
l_P_718 = rt_mul(l_P_718, ((rt_int)2LL));
}
RT_B_TICK();
if (it720 == it720_hi) break;
} } L_end719: ;
{ rt_int rv721 = l_P_718;
return rv721; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_722; memset(&l_R_722, 0, sizeof l_R_722);
l_R_722 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_723; memset(&l_UNSIGNED_723, 0, sizeof l_UNSIGNED_723);
l_UNSIGNED_723 = 0;
if ((((*(R21 *)rt_nil_check(l_R_722))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_722))).f_A))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_722))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R23 l_N_724; memset(&l_N_724, 0, sizeof l_N_724);
S_R23(&l_N_724, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_722))).f_A), 0);
if ((!(l_N_724).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_724).f_V < ((rt_int)0LL)) || ((l_N_724).f_V > ((rt_int)64LL))))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:64], the default size (3.2.3)", 60));
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_722))).f_A))).f_NEXT == NULL)))
{
{
R21 * l_S_725; memset(&l_S_725, 0, sizeof l_S_725);
l_S_725 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_722))).f_A))).f_NEXT;
if (((((*(R21 *)rt_nil_check(l_S_725))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_S_725))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R21 *)rt_nil_check(l_S_725))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_S_725))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R21 *)rt_nil_check(l_S_725))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R21 *)rt_nil_check(l_S_725))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_723 = r_TEQS(((*(R21 *)rt_nil_check(l_S_725))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R21 *)rt_nil_check(l_S_725))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (l_UNSIGNED_723)
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
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_724).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_726; memset(&l_LO_726, 0, sizeof l_LO_726);
l_LO_726 = ((rt_int)0LL);
rt_int l_HI_727; memset(&l_HI_727, 0, sizeof l_HI_727);
l_HI_727 = ((rt_int)0LL);
if (l_UNSIGNED_723)
{
l_HI_727 = rt_sub(r_POW2((l_N_724).f_V), ((rt_int)1LL));
}
else if (((l_N_724).f_V > ((rt_int)0LL)))
{
l_LO_726 = rt_neg(r_POW2(rt_sub((l_N_724).f_V, ((rt_int)1LL))));
l_HI_727 = rt_sub(r_POW2(rt_sub((l_N_724).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_726) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_727)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_728; memset(&l_T_728, 0, sizeof l_T_728);
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(p_E))).f_A)))
{
l_T_728 = r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_729; memset(&l_SAVED_CODE_729, 0, sizeof l_SAVED_CODE_729);
S_R14(&l_SAVED_CODE_729, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_728 = (r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_729, 0);
}
}
{
R22 * l_R_730; memset(&l_R_730, 0, sizeof l_R_730);
l_R_730 = r_REAL_TYPE(l_T_728);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_730))).f_KIND == g_T_ARR))
{
{ R22 * rv731 = ((*(R22 *)rt_nil_check(l_R_730))).f_ELEM;
return rv731; }
}
else if ((((*(R22 *)rt_nil_check(l_R_730))).f_KIND == g_T_PTR))
{
{ R22 * rv732 = r_TARGET(l_R_730);
return rv732; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_730))).f_KIND == g_T_STR)))
{
{ R22 * rv733 = r_CHARSET_OF(l_R_730);
return rv733; }
}
if ((((*(R22 *)rt_nil_check(l_R_730))).f_KIND == g_T_REC))
{
{
R12 * l_C_734; memset(&l_C_734, 0, sizeof l_C_734);
l_C_734 = r_RECORD_CLASS_OF(l_R_730);
if ((!(l_C_734 == NULL)))
{
{
R20 * l_B_735; memset(&l_B_735, 0, sizeof l_B_735);
l_B_735 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_734))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_735 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_735))).f_T == NULL)))
{
{ R22 * rv736 = ((*(R20 *)rt_nil_check(l_B_735))).f_T;
return rv736; }
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
{ rt_int rv737 = 0;
return rv737; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv738 = 1;
return rv738; }
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_739; memset(&l_Y_739, 0, sizeof l_Y_739);
l_Y_739 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_739 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_739))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_739))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_739))).f_T == NULL))))
{
{
R22 * l_R_740; memset(&l_R_740, 0, sizeof l_R_740);
l_R_740 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_739))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_740))).f_KIND == g_T_REC))
{
{
R12 * l_C_741; memset(&l_C_741, 0, sizeof l_C_741);
l_C_741 = r_RECORD_CLASS_OF(l_R_740);
if ((!(l_C_741 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_741))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv742 = 1;
return rv742; }
}
}
}
}
}
}
}
}
}
{ rt_int rv743 = 0;
return rv743; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_744; memset(&l_B_744, 0, sizeof l_B_744);
l_B_744 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_744 == NULL)) goto L_end745;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_744))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_744))).f_T == NULL))))
{
{ R22 * rv746 = ((*(R20 *)rt_nil_check(l_B_744))).f_T;
return rv746; }
}
l_B_744 = ((*(R20 *)rt_nil_check(l_B_744))).f_NEXT;
}
RT_B_TICK();
} L_end745: ;
{
R12 * l_Y_747; memset(&l_Y_747, 0, sizeof l_Y_747);
l_Y_747 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_747 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_747))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_747))).f_T == NULL))))
{
{ R22 * rv748 = ((*(R12 *)rt_nil_check(l_Y_747))).f_T;
return rv748; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_749; memset(&l_NAME_749, 0, sizeof l_NAME_749);
S_R10(&l_NAME_749, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_750; memset(&l_T_750, 0, sizeof l_T_750);
if (r_TEQS(l_NAME_749, rt_str("FIXED", 5)))
{
{
R23 l_S_751; memset(&l_S_751, 0, sizeof l_S_751);
S_R23(&l_S_751, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_752; memset(&l_R_752, 0, sizeof l_R_752);
S_R23(&l_R_752, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_753; memset(&l_P_753, 0, sizeof l_P_753);
l_P_753 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_752).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_753, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_751).f_V == ((rt_int)0LL)))
{
{ R22 * rv754 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv754; }
}
l_T_750 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_750))).f_SCALE = (l_S_751).f_V;
{ R22 * rv755 = l_T_750;
return rv755; }
}
}
else if (r_TEQS(l_NAME_749, rt_str("FLOAT", 5)))
{
{
R23 l_P_756; memset(&l_P_756, 0, sizeof l_P_756);
S_R23(&l_P_756, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_750 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_750))).f_SCALE = (l_P_756).f_V;
{ R22 * rv757 = l_T_750;
return rv757; }
}
}
else if (r_TEQS(l_NAME_749, rt_str("BIT", 3)))
{
l_T_750 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_750, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv758 = l_T_750;
return rv758; }
}
else if ((r_TEQS(l_NAME_749, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_749, rt_str("ASCII_STR", 9))))
{
l_T_750 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_750, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_750))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_749, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R21 * l_CS_759; memset(&l_CS_759, 0, sizeof l_CS_759);
l_CS_759 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_760; memset(&l_C_760, 0, sizeof l_C_760);
if (((((*(R21 *)rt_nil_check(l_CS_759))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_759))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_750))).f_BASE = NULL;
{ R22 * rv761 = l_T_750;
return rv761; }
}
if (((((*(R21 *)rt_nil_check(l_CS_759))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_CS_759))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_762; memset(&l_SAVED_CODE_762, 0, sizeof l_SAVED_CODE_762);
S_R14(&l_SAVED_CODE_762, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_763; memset(&l_V_763, 0, sizeof l_V_763);
S_R26(&l_V_763, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(l_CS_759))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_762, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_763).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_750))).f_BASE = r_CHARSET_OF((l_V_763).f_T);
}
{ R22 * rv764 = l_T_750;
return rv764; }
}
l_C_760 = r_REAL_TYPE(r_ARG_TYPE(l_CS_759));
if ((!(((*(R22 *)rt_nil_check(l_C_760))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_760))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_760))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_750))).f_BASE = ((*(R22 *)rt_nil_check(l_C_760))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv765 = l_T_750;
return rv765; }
}
else if (r_TEQS(l_NAME_749, rt_str("PTR", 3)))
{
l_T_750 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_750))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv766 = l_T_750;
return rv766; }
}
else if (r_TEQS(l_NAME_749, rt_str("SEMAPHORE", 9)))
{
l_T_750 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R21 * l_U_767; memset(&l_U_767, 0, sizeof l_U_767);
l_U_767 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_768; memset(&l_UT_768, 0, sizeof l_UT_768);
l_UT_768 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_769; memset(&l_M_769, 0, sizeof l_M_769);
S_R23(&l_M_769, r_NO_MVAL(), 0);
if (((((((*(R21 *)rt_nil_check(l_U_767))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_U_767))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_U_767))).f_NAME, l_UT_768) == NULL))))
{
S_R23(&l_M_769, r_ENUM_MANIFEST(l_U_767, l_UT_768), 0);
}
else
{
{
R14 l_SAVED_CODE_770; memset(&l_SAVED_CODE_770, 0, sizeof l_SAVED_CODE_770);
S_R14(&l_SAVED_CODE_770, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_771; memset(&l_V_771, 0, sizeof l_V_771);
S_R26(&l_V_771, r_EXPR(l_U_767, l_UT_768), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_770, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_771).f_T), r_REAL_TYPE(l_UT_768)))
{
S_R23(&l_M_769, r_MANIFEST(l_U_767), 0);
}
}
}
if ((!(l_M_769).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_750))).f_SCALE = (l_M_769).f_V;
}
{ R22 * rv772 = l_T_750;
return rv772; }
}
{ R22 * rv773 = NULL;
return rv773; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_774; memset(&l_M_774, 0, sizeof l_M_774);
S_R23(&l_M_774, r_MANIFEST(p_A), 0);
if ((!(l_M_774).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_775; memset(&l_SAVED_CODE_775, 0, sizeof l_SAVED_CODE_775);
S_R14(&l_SAVED_CODE_775, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_776; memset(&l_T_776, 0, sizeof l_T_776);
l_T_776 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_775, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_776)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_776))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_774).f_V < p_LO) || ((l_M_774).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv777 = l_M_774;
return rv777; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv778 = 0;
return rv778; }
}
{ rt_int rv779 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv779; }
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
R12 * l_Y_780; memset(&l_Y_780, 0, sizeof l_Y_780);
l_Y_780 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_780 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_780))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_780))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_780))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R21 * l_R_781; memset(&l_R_781, 0, sizeof l_R_781);
l_R_781 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R10 l_NAME_782; memset(&l_NAME_782, 0, sizeof l_NAME_782);
S_R10(&l_NAME_782, ((*(R21 *)rt_nil_check(l_R_781))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_781))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_782, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_782) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_782, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_782, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_782) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_782)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_782);
}
if ((((*(R21 *)rt_nil_check(l_R_781))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_782);
}
{
R23 l_N_783; memset(&l_N_783, 0, sizeof l_N_783);
S_R23(&l_N_783, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_781))).f_A), 0);
rt_int l_NL_784; memset(&l_NL_784, 0, sizeof l_NL_784);
l_NL_784 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_783).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_783).f_V > ((rt_int)64LL)) || ((l_N_783).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_782, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_781))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_783).f_V < r_BITS_FOR(l_NL_784)))
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
R21 * l_L_785; memset(&l_L_785, 0, sizeof l_L_785);
l_L_785 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_785 == NULL)) goto L_end786;
{
{
R21 * l_V_787; memset(&l_V_787, 0, sizeof l_V_787);
l_V_787 = ((*(R21 *)rt_nil_check(l_R_781))).f_B;
rt_int l_FOUND_788; memset(&l_FOUND_788, 0, sizeof l_FOUND_788);
l_FOUND_788 = ((rt_int)0LL);
for (;;) {
if ((l_V_787 == NULL)) goto L_end789;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_787))).f_NAME, ((*(R21 *)rt_nil_check(l_L_785))).f_NAME))
{
l_FOUND_788 = rt_add(l_FOUND_788, ((rt_int)1LL));
}
l_V_787 = ((*(R21 *)rt_nil_check(l_V_787))).f_NEXT;
}
RT_B_TICK();
} L_end789: ;
if ((!(l_FOUND_788 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_785))).f_NAME);
}
}
l_L_785 = ((*(R21 *)rt_nil_check(l_L_785))).f_NEXT;
}
RT_B_TICK();
} L_end786: ;
}
{
R21 * l_V_790; memset(&l_V_790, 0, sizeof l_V_790);
l_V_790 = ((*(R21 *)rt_nil_check(l_R_781))).f_B;
for (;;) {
if ((l_V_790 == NULL)) goto L_end791;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_790))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_790))).f_NAME);
}
{
R14 l_SAVED_CODE_792; memset(&l_SAVED_CODE_792, 0, sizeof l_SAVED_CODE_792);
S_R14(&l_SAVED_CODE_792, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_793; memset(&l_B_793, 0, sizeof l_B_793);
S_R26(&l_B_793, r_EXPR(((*(R21 *)rt_nil_check(l_V_790))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_792, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_793).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_793).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_793).f_T))).f_MLEN).f_V == (l_N_783).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_790))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_790))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_794; memset(&l_U_794, 0, sizeof l_U_794);
l_U_794 = ((*(R21 *)rt_nil_check(l_V_790))).f_NEXT;
for (;;) {
if ((l_U_794 == NULL)) goto L_end795;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_794))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_794))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_790))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_794))).f_NAME);
}
}
l_U_794 = ((*(R21 *)rt_nil_check(l_U_794))).f_NEXT;
}
RT_B_TICK();
} L_end795: ;
}
}
}
l_V_790 = ((*(R21 *)rt_nil_check(l_V_790))).f_NEXT;
}
RT_B_TICK();
} L_end791: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_796; memset(&l_B_796, 0, sizeof l_B_796);
l_B_796 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_796 == NULL)) goto L_end797;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_796))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_796))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_796))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc798; memset(&rc798, 0, sizeof rc798);  rc798.f_OK = ((*(R20 *)rt_nil_check(l_B_796))).f_HASMV; rc798.f_V = ((*(R20 *)rt_nil_check(l_B_796))).f_MV; rc798; }), 0);
return;
}
l_B_796 = ((*(R20 *)rt_nil_check(l_B_796))).f_NEXT;
}
RT_B_TICK();
} L_end797: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_799; memset(&l_C_799, 0, sizeof l_C_799);
R23 l_M_800; memset(&l_M_800, 0, sizeof l_M_800);
r_ATTR_VALUE(p_A, &l_C_799, &l_M_800);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_799, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_800, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_801; memset(&l_T_801, 0, sizeof l_T_801);
l_T_801 = r_NEW_TYP(g_T_ARR);
R21 * l_R_802; memset(&l_R_802, 0, sizeof l_R_802);
l_R_802 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_803; memset(&l_TAIL_803, 0, sizeof l_TAIL_803);
l_TAIL_803 = NULL;
for (;;) {
if ((l_R_802 == NULL)) goto L_end804;
{
{
R25 * l_B_805; memset(&l_B_805, 0, sizeof l_B_805);
l_B_805 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_806; memset(&l_LO_806, 0, sizeof l_LO_806);
R26 l_HI_807; memset(&l_HI_807, 0, sizeof l_HI_807);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_802))).f_A))
{
S_R26(&l_LO_806, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_802))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_802))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_806, r_EXPR(((*(R21 *)rt_nil_check(l_R_802))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_802))).f_B))
{
S_R26(&l_HI_807, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_802))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_802))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_807, r_EXPR(((*(R21 *)rt_nil_check(l_R_802))).f_B, (l_LO_806).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_805)), ({ R25 rc808; memset(&rc808, 0, sizeof rc808);  S_R10(&rc808.f_LO, (l_LO_806).f_C, 0); S_R10(&rc808.f_HI, (l_HI_807).f_C, 0); S_R23(&rc808.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_802))).f_A), 0); S_R23(&rc808.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_802))).f_B), 0); rc808.f_ANYARG = 0; rc808.f_NEXT = NULL; rc808; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_802))).f_A)) && (!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_802))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_806).f_T), r_REAL_TYPE((l_HI_807).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_802))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R10(&((*(R25 *)rt_nil_check(l_B_805))).f_LO, r_INDEX_OF(l_LO_806, ((*(R21 *)rt_nil_check(l_R_802))).f_LINE), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_805))).f_HI, r_INDEX_OF(l_HI_807, ((*(R21 *)rt_nil_check(l_R_802))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_806).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_806).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_805))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_802))).f_A, (l_LO_806).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_805))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_802))).f_B, (l_LO_806).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_805))).f_LO, (l_LO_806).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_805))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_805))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_806).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_802))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_803 == NULL))
{
((*(R22 *)rt_nil_check(l_T_801))).f_BOUNDS = l_B_805;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_803))).f_NEXT = l_B_805;
}
l_TAIL_803 = l_B_805;
((*(R22 *)rt_nil_check(l_T_801))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_801))).f_DIMS, ((rt_int)1LL));
}
l_R_802 = ((*(R21 *)rt_nil_check(l_R_802))).f_NEXT;
}
RT_B_TICK();
} L_end804: ;
((*(R22 *)rt_nil_check(l_T_801))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_801))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_801))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_801))).f_REPS = r_EXPAND_REP(((*(R21 *)rt_nil_check(p_TS))).f_D, l_T_801, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_801, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
S_R10(&((*(R22 *)rt_nil_check(l_T_801))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_801))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_801))).f_DIMS), 0);
{ R22 * rv809 = l_T_801;
return rv809; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_810; memset(&l_Y_810, 0, sizeof l_Y_810);
l_Y_810 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_811; memset(&l_B_811, 0, sizeof l_B_811);
l_B_811 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_811 == NULL)) goto L_end812;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_811))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_811))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) == l_B_811))
{
{ R22 * rv813 = r_MARK_GENP(((*(R20 *)rt_nil_check(l_B_811))).f_T, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
return rv813; }
}
}
{ R22 * rv814 = ((*(R20 *)rt_nil_check(l_B_811))).f_T;
return rv814; }
}
l_B_811 = ((*(R20 *)rt_nil_check(l_B_811))).f_NEXT;
}
RT_B_TICK();
} L_end812: ;
}
}
if ((l_Y_810 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_810))).f_KIND == g_Y_GEN))
{
{ R22 * rv815 = r_GEN_TYPE(p_TS);
return rv815; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_810))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_810, ((*(R21 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_810))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv816 = ((*(R12 *)rt_nil_check(l_Y_810))).f_T;
return rv816; }
}
{
R21 * l_D_817; memset(&l_D_817, 0, sizeof l_D_817);
l_D_817 = ((*(R12 *)rt_nil_check(l_Y_810))).f_DECL;
R22 * l_T_818; memset(&l_T_818, 0, sizeof l_T_818);
if ((((*(R21 *)rt_nil_check(l_D_817))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_810))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_810))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_810))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_817))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_810))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_817))).f_B, r_RECORD_NAME(l_Y_810), l_Y_810, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_810))).f_T = r_RESOLVE_IN_DECL(l_Y_810, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_810))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_810))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_810))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_810))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_810))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_810))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_810))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_810))).f_BUSY = 0;
}
l_T_818 = ((*(R12 *)rt_nil_check(l_Y_810))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_817))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_818 = r_RECORD_INSTANCE(l_Y_810, p_TS);
}
else
{
l_T_818 = r_RESOLVE_IN_DECL(l_Y_810, p_TS);
}
}
{ R22 * rv819 = r_ABSTRACT_VIEW(l_Y_810, l_T_818);
return rv819; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_820; memset(&l_A_820, 0, sizeof l_A_820);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv821 = p_T;
return rv821; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv822 = p_T;
return rv822; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv823 = p_T;
return rv823; }
}
l_A_820 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_820))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_820))).f_DECL = p_Y;
{ R22 * rv824 = l_A_820;
return rv824; }
}
l_A_820 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_820))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_820))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_820))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_820))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_820))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv825 = l_A_820;
return rv825; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv826 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv826; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_827; memset(&l_R_827, 0, sizeof l_R_827);
l_R_827 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_827 == NULL)) goto L_end828;
{
if ((((((*(R12 *)rt_nil_check(l_R_827))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_827))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_827))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_827)), p_OP))
{
{ rt_int rv829 = 1;
return rv829; }
}
}
l_R_827 = ((*(R12 *)rt_nil_check(l_R_827))).f_SNEXT;
}
RT_B_TICK();
} L_end828: ;
{ rt_int rv830 = 0;
return rv830; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv831 = 0;
return rv831; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv832 = 1;
return rv832; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv833 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv833; }
}
{ rt_int rv834 = 0;
return rv834; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_835; memset(&l_P_835, 0, sizeof l_P_835);
l_P_835 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_835 == NULL)) goto L_end836;
{
if ((l_P_835 == p_M))
{
{ rt_int rv837 = 1;
return rv837; }
}
l_P_835 = ((*(R12 *)rt_nil_check(l_P_835))).f_MODL;
}
RT_B_TICK();
} L_end836: ;
{ rt_int rv838 = 0;
return rv838; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_839; memset(&l_D_839, 0, sizeof l_D_839);
l_D_839 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_840; memset(&l_T_840, 0, sizeof l_T_840);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_840 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_839))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv841 = l_T_840;
return rv841; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_839))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_840 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_839))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv842 = l_T_840;
return rv842; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_843; memset(&l_F_843, 0, sizeof l_F_843);
l_F_843 = p_FORMALS;
R21 * l_A_844; memset(&l_A_844, 0, sizeof l_A_844);
l_A_844 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_843 == NULL)) goto L_end845;
{
{
R21 * l_N_846; memset(&l_N_846, 0, sizeof l_N_846);
l_N_846 = ((*(R21 *)rt_nil_check(l_F_843))).f_A;
for (;;) {
if ((l_N_846 == NULL)) goto L_end847;
{
if ((l_A_844 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_843))).f_B == NULL))
{
{
R12 * l_Y_848; memset(&l_Y_848, 0, sizeof l_Y_848);
l_Y_848 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_846))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_848))).f_T = r_ARG_TYPE(l_A_844);
r_DEFINE(l_Y_848, ((*(R21 *)rt_nil_check(l_A_844))).f_LINE);
}
}
else
{
{
R12 * l_Y_849; memset(&l_Y_849, 0, sizeof l_Y_849);
l_Y_849 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_846))).f_NAME);
R10 l_C_850; memset(&l_C_850, 0, sizeof l_C_850);
R23 l_M_851; memset(&l_M_851, 0, sizeof l_M_851);
((*(R12 *)rt_nil_check(l_Y_849))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_843))).f_B);
if (((((*(R21 *)rt_nil_check(l_A_844))).f_KIND == g_N_ANY) && (!(((*(R21 *)rt_nil_check(l_F_843))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_844))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R21 *)rt_nil_check(l_A_844))).f_KIND == g_N_ANY))
{
S_R10(&l_C_850, r_MK(rt_str("ANY", 3)), 0);
S_R23(&l_M_851, r_NO_MVAL(), 0);
}
else if (((((*(R21 *)rt_nil_check(l_A_844))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_844))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_850, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_844))).f_NAME, (((*(R21 *)rt_nil_check(l_A_844))).f_NAME).f_LEN))), 0);
S_R23(&l_M_851, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_844, &l_C_850, &l_M_851);
}
if (((((l_M_851).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_851).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_MLO).f_V) || ((l_M_851).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_844))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_850))) && (!(((*(R21 *)rt_nil_check(l_A_844))).f_KIND == g_N_ANY))))
{
S_R10(&l_C_850, (r_EXPR(l_A_844, ((*(R12 *)rt_nil_check(l_Y_849))).f_T)).f_C, 0);
S_R23(&l_M_851, r_ENUM_MANIFEST(l_A_844, ((*(R12 *)rt_nil_check(l_Y_849))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_849))).f_ACCESS, l_C_850, 0);
((*(R12 *)rt_nil_check(l_Y_849))).f_HASMV = (l_M_851).f_OK;
((*(R12 *)rt_nil_check(l_Y_849))).f_MV = (l_M_851).f_V;
((*(R12 *)rt_nil_check(l_Y_849))).f_INPUT = 1;
r_DEFINE(l_Y_849, ((*(R21 *)rt_nil_check(l_A_844))).f_LINE);
}
}
l_A_844 = ((*(R21 *)rt_nil_check(l_A_844))).f_NEXT;
l_N_846 = ((*(R21 *)rt_nil_check(l_N_846))).f_NEXT;
}
RT_B_TICK();
} L_end847: ;
}
l_F_843 = ((*(R21 *)rt_nil_check(l_F_843))).f_NEXT;
}
RT_B_TICK();
} L_end845: ;
if ((!(l_A_844 == NULL)))
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
{ R10 rv852 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv852; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv853 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv853; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_854; memset(&l_K_854, 0, sizeof l_K_854);
l_K_854 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv855 = r_MK(rt_str("rt_int", 6));
return rv855; }
}
else if ((l_K_854 == g_T_FLOAT))
{
{ R10 rv856 = r_MK(rt_str("double", 6));
return rv856; }
}
else if (((l_K_854 == g_T_STR) || (l_K_854 == g_T_BITS)))
{
{ R10 rv857 = r_MK(rt_str("rstr", 4));
return rv857; }
}
else if (((l_K_854 == g_T_REC) || (l_K_854 == g_T_ARR)))
{
{ R10 rv858 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv858; }
}
else if ((l_K_854 == g_T_ABS))
{
{ R10 rv859 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv859; }
}
else if ((l_K_854 == g_T_SEM))
{
{ R10 rv860 = r_MK(rt_str("rt_b_sem *", 10));
return rv860; }
}
else if ((l_K_854 == g_T_PATHS))
{
{ R10 rv861 = r_MK(rt_str("rt_b_paths", 10));
return rv861; }
}
else if ((l_K_854 == g_T_VOID))
{
{ R10 rv862 = r_MK(rt_str("void", 4));
return rv862; }
}
else if ((l_K_854 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_863; memset(&l_TT_863, 0, sizeof l_TT_863);
l_TT_863 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_863))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_863))).f_A == NULL)))
{
{
R12 * l_Y_864; memset(&l_Y_864, 0, sizeof l_Y_864);
l_Y_864 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_863))).f_NAME);
if ((!(l_Y_864 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_864))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_864))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_864))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_864))).f_DECL))).f_A == NULL)))
{
{ R10 rv865 = r_CATS(r_RECORD_NAME(l_Y_864), rt_str(" *", 2));
return rv865; }
}
}
}
}
}
}
}
{ R10 rv866 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv866; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv867 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv867; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_868; memset(&l_F_868, 0, sizeof l_F_868);
l_F_868 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_868)), ({ R24 rc869; memset(&rc869, 0, sizeof rc869);  S_R10(&rc869.f_NAME, p_NAME, 0); S_R10(&rc869.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc869.f_T = p_T; rc869.f_KIND = p_KIND; S_R10(&rc869.f_TAGF, r_NO_TEXT(), 0); rc869.f_LABELS = NULL; rc869.f_NEXT = NULL; rc869; }), 0);
{ R24 * rv870 = l_F_868;
return rv870; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_871; memset(&l_F_871, 0, sizeof l_F_871);
l_F_871 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_871 == NULL)) goto L_end872;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_871))).f_NAME, p_NAME))
{
{ R24 * rv873 = l_F_871;
return rv873; }
}
l_F_871 = ((*(R24 *)rt_nil_check(l_F_871))).f_NEXT;
}
RT_B_TICK();
} L_end872: ;
{ R24 * rv874 = NULL;
return rv874; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_875; memset(&l_F_875, 0, sizeof l_F_875);
l_F_875 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_876; memset(&l_FIRST_876, 0, sizeof l_FIRST_876);
l_FIRST_876 = NULL;
for (;;) {
if ((l_F_875 == NULL)) goto L_end877;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_875))).f_NAME, p_NAME))
{
if ((l_FIRST_876 == NULL))
{
l_FIRST_876 = l_F_875;
}
if (((((*(R24 *)rt_nil_check(l_F_875))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv878 = l_F_875;
return rv878; }
}
{
R23 l_TAGV_879; memset(&l_TAGV_879, 0, sizeof l_TAGV_879);
S_R23(&l_TAGV_879, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_875))).f_TAGF), 0);
if ((l_TAGV_879).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_875))).f_LABELS, (l_TAGV_879).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_875))).f_TAGF)))).f_T))
{
{ R24 * rv880 = l_F_875;
return rv880; }
}
}
}
}
l_F_875 = ((*(R24 *)rt_nil_check(l_F_875))).f_NEXT;
}
RT_B_TICK();
} L_end877: ;
{ R24 * rv881 = l_FIRST_876;
return rv881; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_882; memset(&l_P_882, 0, sizeof l_P_882);
l_P_882 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_883; memset(&l_N_883, 0, sizeof l_N_883);
l_N_883 = ((rt_int)0LL);
for (;;) {
if ((l_P_882 == NULL)) goto L_end884;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_882))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_882))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_882))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_882))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_883 = rt_add(l_N_883, ((rt_int)1LL));
}
l_P_882 = ((*(R24 *)rt_nil_check(l_P_882))).f_NEXT;
}
RT_B_TICK();
} L_end884: ;
if ((l_N_883 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_883)), 0);
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
R21 * l_D_885; memset(&l_D_885, 0, sizeof l_D_885);
l_D_885 = p_DECLS;
for (;;) {
if ((l_D_885 == NULL)) goto L_end886;
{
if ((((*(R21 *)rt_nil_check(l_D_885))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_887; memset(&l_FT_887, 0, sizeof l_FT_887);
l_FT_887 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_885))).f_B);
R21 * l_N_888; memset(&l_N_888, 0, sizeof l_N_888);
l_N_888 = ((*(R21 *)rt_nil_check(l_D_885))).f_A;
for (;;) {
if ((l_N_888 == NULL)) goto L_end889;
{
{
R24 * l_F_890; memset(&l_F_890, 0, sizeof l_F_890);
l_F_890 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_888))).f_NAME, l_FT_887, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_890))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_890))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_890, &(*p_TAIL));
if (((r_LOOKUP(((*(R21 *)rt_nil_check(l_N_888))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_N_888))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_891; memset(&l_Y_891, 0, sizeof l_Y_891);
l_Y_891 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_888))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_891))).f_T = l_FT_887;
S_R10(&((*(R12 *)rt_nil_check(l_Y_891))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_890))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_891))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_891))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_891))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_891, ((*(R21 *)rt_nil_check(l_D_885))).f_LINE);
}
}
}
l_N_888 = ((*(R21 *)rt_nil_check(l_N_888))).f_NEXT;
}
RT_B_TICK();
} L_end889: ;
}
}
else
{
{
R24 * l_TF_892; memset(&l_TF_892, 0, sizeof l_TF_892);
l_TF_892 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_885))).f_NAME);
R21 * l_S_893; memset(&l_S_893, 0, sizeof l_S_893);
l_S_893 = ((*(R21 *)rt_nil_check(l_D_885))).f_A;
if ((l_TF_892 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_885))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_885))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_892))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_885))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_885))).f_NAME);
}
{
R21 * l_O_894; memset(&l_O_894, 0, sizeof l_O_894);
l_O_894 = p_DECLS;
for (;;) {
if ((l_O_894 == l_D_885)) goto L_end895;
{
if ((((*(R21 *)rt_nil_check(l_O_894))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_O_894))).f_NAME, ((*(R21 *)rt_nil_check(l_D_885))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_885))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R21 *)rt_nil_check(l_D_885))).f_NAME);
}
}
l_O_894 = ((*(R21 *)rt_nil_check(l_O_894))).f_NEXT;
}
RT_B_TICK();
} L_end895: ;
}
r_CHECK_VARIANT_NAMES(l_D_885, ((*(R24 *)rt_nil_check(l_TF_892))).f_T);
for (;;) {
if ((l_S_893 == NULL)) goto L_end896;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_893))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_885))).f_NAME), ((*(R21 *)rt_nil_check(l_S_893))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_893 = ((*(R21 *)rt_nil_check(l_S_893))).f_NEXT;
}
RT_B_TICK();
} L_end896: ;
}
}
l_D_885 = ((*(R21 *)rt_nil_check(l_D_885))).f_NEXT;
}
RT_B_TICK();
} L_end886: ;
}
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT) { RT_B_TICK(); 
R21 * l_S_897; memset(&l_S_897, 0, sizeof l_S_897);
l_S_897 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R21 * l_LOS_898; memset(&l_LOS_898, 0, sizeof l_LOS_898);
l_LOS_898 = NULL;
R21 * l_HIS_899; memset(&l_HIS_899, 0, sizeof l_HIS_899);
l_HIS_899 = NULL;
rt_int l_LO_LIM_900; memset(&l_LO_LIM_900, 0, sizeof l_LO_LIM_900);
rt_int l_HI_LIM_901; memset(&l_HI_LIM_901, 0, sizeof l_HI_LIM_901);
R22 * l_R_902; memset(&l_R_902, 0, sizeof l_R_902);
l_R_902 = r_REAL_TYPE(p_TT);
l_LO_LIM_900 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_901 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_902))).f_KIND == g_T_ENUM))
{
l_LO_LIM_900 = ((rt_int)0LL);
l_HI_LIM_901 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_902))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_902))).f_KIND == g_T_BOOL))
{
l_LO_LIM_900 = ((rt_int)0LL);
l_HI_LIM_901 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_902))).f_MLO).f_OK)
{
l_LO_LIM_900 = (((*(R22 *)rt_nil_check(l_R_902))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_902))).f_MHI).f_OK)
{
l_HI_LIM_901 = (((*(R22 *)rt_nil_check(l_R_902))).f_MHI).f_V;
}
for (;;) {
if ((l_S_897 == NULL)) goto L_end903;
{
{
R21 * l_L_904; memset(&l_L_904, 0, sizeof l_L_904);
l_L_904 = ((*(R21 *)rt_nil_check(l_S_897))).f_A;
for (;;) {
if ((l_L_904 == NULL)) goto L_end905;
{
{
R23 l_A_906; memset(&l_A_906, 0, sizeof l_A_906);
R23 l_B_907; memset(&l_B_907, 0, sizeof l_B_907);
if ((((*(R21 *)rt_nil_check(l_L_904))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_906, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_904))).f_A, p_TT), 0);
S_R23(&l_B_907, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_904))).f_B, p_TT), 0);
if (((l_A_906).f_OK && (((((*(R21 *)rt_nil_check(l_L_904))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_904))).f_IV == ((rt_int)3LL))))))
{
(l_A_906).f_V = rt_add((l_A_906).f_V, ((rt_int)1LL));
}
if (((l_B_907).f_OK && (((*(R21 *)rt_nil_check(l_L_904))).f_IV >= ((rt_int)2LL))))
{
(l_B_907).f_V = rt_sub((l_B_907).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_906, r_ENUM_MANIFEST(l_L_904, p_TT), 0);
S_R23(&l_B_907, l_A_906, 0);
}
if ((!(((l_A_906).f_OK && (l_B_907).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_904))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_906).f_V < l_LO_LIM_900) || ((l_B_907).f_V > l_HI_LIM_901)) || ((l_A_906).f_V > (l_B_907).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_904))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R21 * l_P_908; memset(&l_P_908, 0, sizeof l_P_908);
l_P_908 = l_LOS_898;
R21 * l_Q_909; memset(&l_Q_909, 0, sizeof l_Q_909);
l_Q_909 = l_HIS_899;
for (;;) {
if ((l_P_908 == NULL)) goto L_end910;
{
if ((((l_A_906).f_V <= ((*(R21 *)rt_nil_check(l_Q_909))).f_IV) && ((l_B_907).f_V >= ((*(R21 *)rt_nil_check(l_P_908))).f_IV)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_904))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_908 = ((*(R21 *)rt_nil_check(l_P_908))).f_NEXT;
l_Q_909 = ((*(R21 *)rt_nil_check(l_Q_909))).f_NEXT;
}
RT_B_TICK();
} L_end910: ;
}
{
R21 * l_P_911; memset(&l_P_911, 0, sizeof l_P_911);
l_P_911 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R21 * l_Q_912; memset(&l_Q_912, 0, sizeof l_Q_912);
l_Q_912 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(l_P_911))).f_IV = (l_A_906).f_V;
((*(R21 *)rt_nil_check(l_Q_912))).f_IV = (l_B_907).f_V;
((*(R21 *)rt_nil_check(l_P_911))).f_NEXT = l_LOS_898;
((*(R21 *)rt_nil_check(l_Q_912))).f_NEXT = l_HIS_899;
l_LOS_898 = l_P_911;
l_HIS_899 = l_Q_912;
}
}
l_L_904 = ((*(R21 *)rt_nil_check(l_L_904))).f_NEXT;
}
RT_B_TICK();
} L_end905: ;
}
l_S_897 = ((*(R21 *)rt_nil_check(l_S_897))).f_NEXT;
}
RT_B_TICK();
} L_end903: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_913; memset(&l_T_913, 0, sizeof l_T_913);
l_T_913 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_914; memset(&l_TAIL_914, 0, sizeof l_TAIL_914);
l_TAIL_914 = NULL;
((*(R22 *)rt_nil_check(l_T_913))).f_BASE = l_T_913;
((*(R22 *)rt_nil_check(l_T_913))).f_DECL = p_Y;
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_913))).f_REPS = r_EXPAND_REP(((*(R21 *)rt_nil_check(p_TS))).f_D, l_T_913, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_913, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_913))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_913))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_913))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_913))).f_CNAME));
}
{
R21 * l_F_915; memset(&l_F_915, 0, sizeof l_F_915);
l_F_915 = p_FORMALS;
for (;;) {
if ((l_F_915 == NULL)) goto L_end916;
{
if ((!(((*(R21 *)rt_nil_check(l_F_915))).f_B == NULL)))
{
{
R22 * l_FT_917; memset(&l_FT_917, 0, sizeof l_FT_917);
l_FT_917 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_915))).f_B);
R21 * l_N_918; memset(&l_N_918, 0, sizeof l_N_918);
l_N_918 = ((*(R21 *)rt_nil_check(l_F_915))).f_A;
rt_int l_KIND_919; memset(&l_KIND_919, 0, sizeof l_KIND_919);
l_KIND_919 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_915))).f_IV == ((rt_int)1LL)))
{
l_KIND_919 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_917))) || (!(((*(R22 *)rt_nil_check(l_FT_917))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_915))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_918 == NULL)) goto L_end920;
{
r_ADD_FIELD(l_T_913, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_918))).f_NAME, l_FT_917, l_KIND_919), &l_TAIL_914);
l_N_918 = ((*(R21 *)rt_nil_check(l_N_918))).f_NEXT;
}
RT_B_TICK();
} L_end920: ;
}
}
l_F_915 = ((*(R21 *)rt_nil_check(l_F_915))).f_NEXT;
}
RT_B_TICK();
} L_end916: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_913, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_914);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_COMPLETE_RECORD(l_T_913);
{ R22 * rv921 = l_T_913;
return rv921; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv922 = 0;
return rv922; }
}
{
R12 * l_Y_923; memset(&l_Y_923, 0, sizeof l_Y_923);
l_Y_923 = r_LOOKUP(((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_923 == NULL))
{
{ rt_int rv924 = 0;
return rv924; }
}
{ rt_int rv925 = ((((*(R12 *)rt_nil_check(l_Y_923))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_923))).f_ACCESS, rt_str("ANY", 3)));
return rv925; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_926; memset(&l_D_926, 0, sizeof l_D_926);
l_D_926 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_927; memset(&l_CLASS_927, 0, sizeof l_CLASS_927);
l_CLASS_927 = NULL;
R20 * l_TARGS_928; memset(&l_TARGS_928, 0, sizeof l_TARGS_928);
l_TARGS_928 = NULL;
R25 * l_VARGS_929; memset(&l_VARGS_929, 0, sizeof l_VARGS_929);
l_VARGS_929 = NULL;
R25 * l_VTAIL_930; memset(&l_VTAIL_930, 0, sizeof l_VTAIL_930);
l_VTAIL_930 = NULL;
R21 * l_A_931; memset(&l_A_931, 0, sizeof l_A_931);
l_A_931 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_932; memset(&l_F_932, 0, sizeof l_F_932);
l_F_932 = ((*(R21 *)rt_nil_check(l_D_926))).f_A;
for (;;) {
if ((l_F_932 == NULL)) goto L_end933;
{
{
R21 * l_N_934; memset(&l_N_934, 0, sizeof l_N_934);
l_N_934 = ((*(R21 *)rt_nil_check(l_F_932))).f_A;
for (;;) {
if ((l_N_934 == NULL)) goto L_end935;
{
if ((l_A_931 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_932))).f_B == NULL))
{
{
R20 * l_B_936; memset(&l_B_936, 0, sizeof l_B_936);
l_B_936 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_936)), ({ R20 rc937; memset(&rc937, 0, sizeof rc937);  S_R10(&rc937.f_NAME, ((*(R21 *)rt_nil_check(l_N_934))).f_NAME, 0); rc937.f_T = r_ARG_TYPE(l_A_931); S_R10(&rc937.f_C, r_NO_TEXT(), 0); rc937.f_HASMV = 0; rc937.f_MV = ((rt_int)0LL); rc937.f_R = NULL; rc937.f_NEXT = l_TARGS_928; rc937; }), 0);
l_TARGS_928 = l_B_936;
}
}
else
{
{
R25 * l_V_938; memset(&l_V_938, 0, sizeof l_V_938);
l_V_938 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_938)), ({ R25 rc939; memset(&rc939, 0, sizeof rc939);  S_R10(&rc939.f_LO, r_NO_TEXT(), 0); S_R10(&rc939.f_HI, r_NO_TEXT(), 0); S_R23(&rc939.f_MLO, r_NO_MVAL(), 0); S_R23(&rc939.f_MHI, r_NO_MVAL(), 0); rc939.f_ANYARG = 0; rc939.f_NEXT = NULL; rc939; }), 0);
if (((((*(R21 *)rt_nil_check(l_A_931))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_931)))
{
if ((!(((*(R21 *)rt_nil_check(l_F_932))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_931))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_938))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_931))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_938))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_938))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_931))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_938))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_938))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_931))).f_NAME, (((*(R21 *)rt_nil_check(l_A_931))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_940; memset(&l_FT_940, 0, sizeof l_FT_940);
l_FT_940 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_932))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_938))).f_LO, r_CONVERT(r_EXPR(l_A_931, l_FT_940), l_FT_940, ((*(R21 *)rt_nil_check(l_A_931))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_938))).f_MLO, r_ENUM_MANIFEST(l_A_931, l_FT_940), 0);
if ((((((*(R25 *)rt_nil_check(l_V_938))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_940))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_940))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_938))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_940))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_938))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_940))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_931))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R21 *)rt_nil_check(l_F_932))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_938))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_931))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_930 == NULL))
{
l_VARGS_929 = l_V_938;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_930))).f_NEXT = l_V_938;
}
l_VTAIL_930 = l_V_938;
}
}
l_A_931 = ((*(R21 *)rt_nil_check(l_A_931))).f_NEXT;
l_N_934 = ((*(R21 *)rt_nil_check(l_N_934))).f_NEXT;
}
RT_B_TICK();
} L_end935: ;
}
l_F_932 = ((*(R21 *)rt_nil_check(l_F_932))).f_NEXT;
}
RT_B_TICK();
} L_end933: ;
if ((!(l_A_931 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_941; memset(&l_R_941, 0, sizeof l_R_941);
l_R_941 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_941 == NULL)) goto L_end942;
{
if (((((*(R12 *)rt_nil_check(l_R_941))).f_DECL == l_D_926) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_941))).f_BINDINGS, l_TARGS_928)))
{
l_CLASS_927 = ((*(R12 *)rt_nil_check(l_R_941))).f_T;
goto L_end942;
}
l_R_941 = ((*(R12 *)rt_nil_check(l_R_941))).f_INSTANCES;
}
RT_B_TICK();
} L_end942: ;
}
if ((l_CLASS_927 == NULL))
{
{
R12 * l_R_943; memset(&l_R_943, 0, sizeof l_R_943);
l_R_943 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_944; memset(&l_B_944, 0, sizeof l_B_944);
l_B_944 = l_TARGS_928;
R20 * l_SAVED_945; memset(&l_SAVED_945, 0, sizeof l_SAVED_945);
l_SAVED_945 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_946; memset(&l_ENTERED_946, 0, sizeof l_ENTERED_946);
((*(R12 *)rt_nil_check(l_R_943))).f_DECL = l_D_926;
((*(R12 *)rt_nil_check(l_R_943))).f_BINDINGS = l_TARGS_928;
((*(R12 *)rt_nil_check(l_R_943))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_943;
l_ENTERED_946 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_944 == NULL)) goto L_end947;
{
{
R12 * l_TY_948; memset(&l_TY_948, 0, sizeof l_TY_948);
l_TY_948 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_944))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_948))).f_T = ((*(R20 *)rt_nil_check(l_B_944))).f_T;
r_DEFINE(l_TY_948, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_944 = ((*(R20 *)rt_nil_check(l_B_944))).f_NEXT;
}
RT_B_TICK();
} L_end947: ;
l_F_932 = ((*(R21 *)rt_nil_check(l_D_926))).f_A;
for (;;) {
if ((l_F_932 == NULL)) goto L_end949;
{
if ((!(((*(R21 *)rt_nil_check(l_F_932))).f_B == NULL)))
{
{
R21 * l_N_950; memset(&l_N_950, 0, sizeof l_N_950);
l_N_950 = ((*(R21 *)rt_nil_check(l_F_932))).f_A;
for (;;) {
if ((l_N_950 == NULL)) goto L_end951;
{
{
R12 * l_P_952; memset(&l_P_952, 0, sizeof l_P_952);
l_P_952 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_950))).f_NAME);
((*(R12 *)rt_nil_check(l_P_952))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_932))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_952))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_950))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_952))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_952))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_952, ((*(R21 *)rt_nil_check(l_F_932))).f_LINE);
}
l_N_950 = ((*(R21 *)rt_nil_check(l_N_950))).f_NEXT;
}
RT_B_TICK();
} L_end951: ;
}
}
l_F_932 = ((*(R21 *)rt_nil_check(l_F_932))).f_NEXT;
}
RT_B_TICK();
} L_end949: ;
if ((l_TARGS_928 == NULL))
{
l_CLASS_927 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_926))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_926))).f_A);
}
else
{
l_CLASS_927 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_926))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_926))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_927))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_943))).f_T = l_CLASS_927;
r_CLOSE_SCOPE();
if (l_ENTERED_946)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_945;
}
}
{
R22 * l_T_953; memset(&l_T_953, 0, sizeof l_T_953);
l_T_953 = r_COPY_TYP(l_CLASS_927);
((*(R22 *)rt_nil_check(l_T_953))).f_ARGS = l_VARGS_929;
{ R22 * rv954 = l_T_953;
return rv954; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_955; memset(&l_P_955, 0, sizeof l_P_955);
l_P_955 = p_A;
R20 * l_Q_956; memset(&l_Q_956, 0, sizeof l_Q_956);
l_Q_956 = p_B;
for (;;) {
if (((l_P_955 == NULL) || (l_Q_956 == NULL))) goto L_end957;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_955))).f_T, ((*(R20 *)rt_nil_check(l_Q_956))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_955))).f_T, ((*(R20 *)rt_nil_check(l_Q_956))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_955))).f_T, ((*(R20 *)rt_nil_check(l_Q_956))).f_T))))
{
{ rt_int rv958 = 0;
return rv958; }
}
l_P_955 = ((*(R20 *)rt_nil_check(l_P_955))).f_NEXT;
l_Q_956 = ((*(R20 *)rt_nil_check(l_Q_956))).f_NEXT;
}
RT_B_TICK();
} L_end957: ;
{ rt_int rv959 = ((l_P_955 == NULL) && (l_Q_956 == NULL));
return rv959; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_960; memset(&l_A_960, 0, sizeof l_A_960);
l_A_960 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_960 == NULL)) goto L_end961;
{
if (((*(R25 *)rt_nil_check(l_A_960))).f_ANYARG)
{
{ rt_int rv962 = 1;
return rv962; }
}
l_A_960 = ((*(R25 *)rt_nil_check(l_A_960))).f_NEXT;
}
RT_B_TICK();
} L_end961: ;
{ rt_int rv963 = 0;
return rv963; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_964; memset(&l_L_964, 0, sizeof l_L_964);
l_L_964 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_965; memset(&l_C_965, 0, sizeof l_C_965);
S_R10(&l_C_965, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_966; memset(&l_TF_966, 0, sizeof l_TF_966);
l_TF_966 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_964 == NULL)) goto L_end967;
{
if ((((*(R21 *)rt_nil_check(l_L_964))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_965, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_965, p_SELF, ((*(R24 *)rt_nil_check(l_TF_966))).f_CNAME), 0);
S_R10(&l_C_965, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_965, (r_EXPR(((*(R21 *)rt_nil_check(l_L_964))).f_A, ((*(R24 *)rt_nil_check(l_TF_966))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_966))).f_CNAME), 0);
S_R10(&l_C_965, r_FMT2(rt_str("@@)", 3), l_C_965, (r_EXPR(((*(R21 *)rt_nil_check(l_L_964))).f_B, ((*(R24 *)rt_nil_check(l_TF_966))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_965, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_965, p_SELF, ((*(R24 *)rt_nil_check(l_TF_966))).f_CNAME, (r_EXPR(l_L_964, ((*(R24 *)rt_nil_check(l_TF_966))).f_T)).f_C), 0);
}
l_L_964 = ((*(R21 *)rt_nil_check(l_L_964))).f_NEXT;
}
RT_B_TICK();
} L_end967: ;
{ R10 rv968 = r_FMT1(rt_str("(@)", 3), l_C_965);
return rv968; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_969; memset(&l_C_969, 0, sizeof l_C_969);
S_R10(&l_C_969, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_970; memset(&l_F_970, 0, sizeof l_F_970);
l_F_970 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_971; memset(&l_BODY_971, 0, sizeof l_BODY_971);
S_R10(&l_BODY_971, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_972; memset(&l_ASSIGN_972, 0, sizeof l_ASSIGN_972);
S_R10(&l_ASSIGN_972, r_MK(rt_str("", 0)), 0);
R10 l_COPY_973; memset(&l_COPY_973, 0, sizeof l_COPY_973);
S_R10(&l_COPY_973, r_MK(rt_str("", 0)), 0);
R10 l_EQ_974; memset(&l_EQ_974, 0, sizeof l_EQ_974);
S_R10(&l_EQ_974, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_970 == NULL)) goto L_end975;
{
S_R10(&l_BODY_971, r_FMT3(rt_str("@ @ @;", 6), l_BODY_971, r_CTYPE(((*(R24 *)rt_nil_check(l_F_970))).f_T), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME), 0);
S_R10(&l_COPY_973, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_973, ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_970))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_970))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_972, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_972, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_970))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME))), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_970))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_972, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_972, ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_972, r_FMT2(rt_str("@ @", 3), l_ASSIGN_972, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_970))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_970))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_974, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_974, r_VARIANT_COND(l_F_970, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_970))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_974, r_FMT2(rt_str("@ && @", 6), l_EQ_974, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_970))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_970))).f_CNAME))), 0);
}
l_F_970 = ((*(R24 *)rt_nil_check(l_F_970))).f_NEXT;
}
RT_B_TICK();
} L_end975: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_969, l_BODY_971));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_969, l_C_969, l_C_969));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_969, l_C_969, l_C_969));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_969, l_C_969, l_C_969, l_ASSIGN_972));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_969, l_C_969, l_C_969, l_EQ_974));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_969, l_C_969, l_C_969));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_969, l_C_969, l_C_969, l_C_969));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_973));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_976; memset(&l_ET_C_976, 0, sizeof l_ET_C_976);
S_R10(&l_ET_C_976, r_CTYPE(p_ELEM), 0);
R10 l_KEY_977; memset(&l_KEY_977, 0, sizeof l_KEY_977);
S_R10(&l_KEY_977, r_FMT3(rt_str("@/@/@", 5), l_ET_C_976, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_978; memset(&l_Y_978, 0, sizeof l_Y_978);
l_Y_978 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_978 == NULL)) goto L_end979;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_978))).f_NAME, l_KEY_977) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_978))).f_T, p_ELEM)))
{
{ R10 rv980 = ((*(R12 *)rt_nil_check(l_Y_978))).f_ACCESS;
return rv980; }
}
l_Y_978 = ((*(R12 *)rt_nil_check(l_Y_978))).f_INSTANCES;
}
RT_B_TICK();
} L_end979: ;
l_Y_978 = r_NEW_SYM(g_Y_TYPE, l_KEY_977);
((*(R12 *)rt_nil_check(l_Y_978))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_978))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_978))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_978;
{
R10 l_C_981; memset(&l_C_981, 0, sizeof l_C_981);
S_R10(&l_C_981, ((*(R12 *)rt_nil_check(l_Y_978))).f_ACCESS, 0);
R10 l_D_982; memset(&l_D_982, 0, sizeof l_D_982);
S_R10(&l_D_982, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_981, l_C_981));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_981, l_D_982, l_D_982, l_ET_C_976));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_981, l_C_981, l_C_981));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_981, l_C_981, l_C_981));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_981, l_C_981, l_C_981, l_D_982));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_982, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_981, l_C_981, l_C_981, l_D_982));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_982, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_981, l_C_981, l_C_981));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_981, l_C_981, l_C_981, l_C_981));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_982, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv983 = ((*(R12 *)rt_nil_check(l_Y_978))).f_ACCESS;
return rv983; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_984; memset(&l_K_984, 0, sizeof l_K_984);
l_K_984 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_984 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv985 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv985; }
}
{ R10 rv986 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv986; }
}
else if ((l_K_984 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv987 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv987; }
}
{ R10 rv988 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv988; }
}
else if ((l_K_984 == g_T_SEM))
{
{ R10 rv989 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv989; }
}
else if ((l_K_984 == g_T_ABS))
{
{ R10 rv990 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv990; }
}
else if ((l_K_984 == g_T_ARR))
{
{
R25 * l_B_991; memset(&l_B_991, 0, sizeof l_B_991);
l_B_991 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_992; memset(&l_I_992, 0, sizeof l_I_992);
l_I_992 = ((rt_int)0LL);
R10 l_R_993; memset(&l_R_993, 0, sizeof l_R_993);
S_R10(&l_R_993, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_991 == NULL)) goto L_end994;
{
S_R10(&l_R_993, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_993, p_LV, r_NUM(l_I_992), ((*(R25 *)rt_nil_check(l_B_991))).f_LO), 0);
S_R10(&l_R_993, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_993, p_LV, r_NUM(l_I_992), ((*(R25 *)rt_nil_check(l_B_991))).f_HI), 0);
l_I_992 = rt_add(l_I_992, ((rt_int)1LL));
l_B_991 = ((*(R25 *)rt_nil_check(l_B_991))).f_NEXT;
}
RT_B_TICK();
} L_end994: ;
S_R10(&l_R_993, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_993, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_993, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_993, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_995; memset(&l_IV_995, 0, sizeof l_IV_995);
S_R10(&l_IV_995, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_993, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_993, l_IV_995, l_IV_995, l_IV_995), 0);
S_R10(&l_R_993, r_FMT2(rt_str("@ @ }", 5), l_R_993, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_995))), 0);
}
}
{ R10 rv996 = r_CATS(l_R_993, rt_str(" }", 2));
return rv996; }
}
}
else if ((l_K_984 == g_T_REC))
{
{
R24 * l_F_997; memset(&l_F_997, 0, sizeof l_F_997);
l_F_997 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_998; memset(&l_A_998, 0, sizeof l_A_998);
l_A_998 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_999; memset(&l_R_999, 0, sizeof l_R_999);
S_R10(&l_R_999, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_997 == NULL)) goto L_end1000;
{
if ((!(((*(R24 *)rt_nil_check(l_F_997))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_998 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_998))).f_ANYARG))
{
S_R10(&l_R_999, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_999, p_LV, ((*(R24 *)rt_nil_check(l_F_997))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_998))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_997))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_998))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R10(&l_R_999, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_999, p_LV, ((*(R24 *)rt_nil_check(l_F_997))).f_CNAME), 0);
}
l_A_998 = ((*(R25 *)rt_nil_check(l_A_998))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_997))).f_T))
{
S_R10(&l_R_999, r_FMT2(rt_str("@ @", 3), l_R_999, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_997))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_997))).f_CNAME)), p_LV)), 0);
}
l_F_997 = ((*(R24 *)rt_nil_check(l_F_997))).f_NEXT;
}
RT_B_TICK();
} L_end1000: ;
{ R10 rv1001 = l_R_999;
return rv1001; }
}
}
{ R10 rv1002 = r_NO_TEXT();
return rv1002; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1003; memset(&l_K_1003, 0, sizeof l_K_1003);
l_K_1003 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_1003 == g_T_STR) || (l_K_1003 == g_T_BITS)) || (l_K_1003 == g_T_ARR)) || (l_K_1003 == g_T_SEM)))
{
{ rt_int rv1004 = 1;
return rv1004; }
}
else if ((l_K_1003 == g_T_ABS))
{
{ rt_int rv1005 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1005; }
}
else if ((l_K_1003 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1006 = 1;
return rv1006; }
}
{
R24 * l_F_1007; memset(&l_F_1007, 0, sizeof l_F_1007);
l_F_1007 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1007 == NULL)) goto L_end1008;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1007))).f_T))
{
{ rt_int rv1009 = 1;
return rv1009; }
}
l_F_1007 = ((*(R24 *)rt_nil_check(l_F_1007))).f_NEXT;
}
RT_B_TICK();
} L_end1008: ;
}
}
{ rt_int rv1010 = 0;
return rv1010; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_1011; memset(&l_K_1011, 0, sizeof l_K_1011);
l_K_1011 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1011 == g_T_STR) || (l_K_1011 == g_T_BITS)))
{
{ R10 rv1012 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1012; }
}
else if ((l_K_1011 == g_T_ABS))
{
{ R10 rv1013 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1013; }
}
else if (((l_K_1011 == g_T_ARR) || (l_K_1011 == g_T_REC)))
{
{ R10 rv1014 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1014; }
}
{ R10 rv1015 = p_V;
return rv1015; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_1016; memset(&l_K_1016, 0, sizeof l_K_1016);
l_K_1016 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1016 == g_T_STR) || (l_K_1016 == g_T_BITS)))
{
{ R10 rv1017 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1017; }
}
else if ((l_K_1016 == g_T_ABS))
{
{ R10 rv1018 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1018; }
}
else if ((l_K_1016 == g_T_SEM))
{
{ R10 rv1019 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1019; }
}
else if ((l_K_1016 == g_T_ARR))
{
{ R10 rv1020 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1020; }
}
else if ((l_K_1016 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv1021 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1021; }
}
{ R10 rv1022 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1022; }
}
{ R10 rv1023 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1023; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_1024; memset(&l_K_1024, 0, sizeof l_K_1024);
l_K_1024 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1024 == g_T_STR) || (l_K_1024 == g_T_BITS)))
{
{ R10 rv1025 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1025; }
}
else if ((l_K_1024 == g_T_ABS))
{
{ R10 rv1026 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1026; }
}
else if (((l_K_1024 == g_T_ARR) || (l_K_1024 == g_T_REC)))
{
{ R10 rv1027 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1027; }
}
else if ((l_K_1024 == g_T_SEM))
{
{ R10 rv1028 = r_MK(rt_str("0", 1));
return rv1028; }
}
{ R10 rv1029 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1029; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv1030 = p_V;
return rv1030; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv1031 = p_V;
return rv1031; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv1032 = p_V;
return rv1032; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv1033 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1033; }
}
{ R10 rv1034 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1034; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv1035 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1035; }
}
{ R10 rv1036 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1036; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1037 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1037; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1038 = 1;
return rv1038; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1039 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1039; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1040 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1040; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1041 = 0;
return rv1041; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1042 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1042; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1043 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1043; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1044 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1044; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1045 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1045; }
}
{ rt_int rv1046 = 1;
return rv1046; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1047 = 1;
return rv1047; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1048 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1048; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1049 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1049; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1050 = 0;
return rv1050; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1051 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1051; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1052 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1052; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1053 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1053; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1054 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1054; }
}
{ rt_int rv1055 = 1;
return rv1055; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1056 = 0;
return rv1056; }
}
{ rt_int rv1057 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1057; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1058; memset(&l_P_1058, 0, sizeof l_P_1058);
l_P_1058 = p_A;
R25 * l_Q_1059; memset(&l_Q_1059, 0, sizeof l_Q_1059);
l_Q_1059 = p_B;
for (;;) {
if (((l_P_1058 == NULL) || (l_Q_1059 == NULL))) goto L_end1060;
{
if ((r_IS_GEN_ARG(l_P_1058) || r_IS_GEN_ARG(l_Q_1059)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1058))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1059))).f_ANYARG)))
{
{ rt_int rv1061 = 0;
return rv1061; }
}
if (((((*(R25 *)rt_nil_check(l_P_1058))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1059))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1058))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1059))).f_MLO).f_V)))
{
{ rt_int rv1062 = 0;
return rv1062; }
}
}
l_P_1058 = ((*(R25 *)rt_nil_check(l_P_1058))).f_NEXT;
l_Q_1059 = ((*(R25 *)rt_nil_check(l_Q_1059))).f_NEXT;
}
RT_B_TICK();
} L_end1060: ;
{ rt_int rv1063 = ((l_P_1058 == NULL) && (l_Q_1059 == NULL));
return rv1063; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_1064; memset(&l_CS_1064, 0, sizeof l_CS_1064);
l_CS_1064 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_1065; memset(&l_T_1065, 0, sizeof l_T_1065);
rt_int l_LEV_1066; memset(&l_LEV_1066, 0, sizeof l_LEV_1066);
if ((((*(R18 *)rt_nil_check(l_CS_1064))).f_LEVEL == p_LEVEL))
{
{ R10 rv1067 = r_MK(rt_str("F", 1));
return rv1067; }
}
if (((*(R18 *)rt_nil_check(l_CS_1064))).f_FRAMED)
{
S_R10(&l_T_1065, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_1065, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1066 = rt_sub(((*(R18 *)rt_nil_check(l_CS_1064))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1066 <= p_LEVEL)) goto L_end1068;
{
S_R10(&l_T_1065, r_CATS(l_T_1065, rt_str("->up", 4)), 0);
l_LEV_1066 = rt_sub(l_LEV_1066, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1068: ;
{ R10 rv1069 = l_T_1065;
return rv1069; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv1070 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1070; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1071 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1071; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv1072 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1072; }
}
{ R10 rv1073 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1073; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_1074; memset(&l_CS_1074, 0, sizeof l_CS_1074);
l_CS_1074 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1075; memset(&l_T_1075, 0, sizeof l_T_1075);
l_T_1075 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_1076; memset(&l_CN_1076, 0, sizeof l_CN_1076);
if ((((*(R18 *)rt_nil_check(l_CS_1074))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_1076, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_1076, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1075), l_CN_1076));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1076, 0);
{ R10 rv1077 = l_CN_1076;
return rv1077; }
}
S_R10(&l_CN_1076, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1076, 0);
if (((*(R18 *)rt_nil_check(l_CS_1074))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1075), l_CN_1076), &((*(R18 *)rt_nil_check(l_CS_1074))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1076), 0);
{ R10 rv1078 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1078; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1075), l_CN_1076, l_CN_1076, l_CN_1076));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1076, 0);
{ R10 rv1079 = l_CN_1076;
return rv1079; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_1080; memset(&l_T_1080, 0, sizeof l_T_1080);
l_T_1080 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_1081; memset(&l_N_1081, 0, sizeof l_N_1081);
l_N_1081 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_1082; memset(&l_V_1082, 0, sizeof l_V_1082);
rt_int l_HAVE_V_1083; memset(&l_HAVE_V_1083, 0, sizeof l_HAVE_V_1083);
l_HAVE_V_1083 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1080))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1080))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1081 == NULL)) goto L_end1084;
{
{
R12 * l_Y_1085; memset(&l_Y_1085, 0, sizeof l_Y_1085);
l_Y_1085 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_1081))).f_NAME);
R10 l_CN_1086; memset(&l_CN_1086, 0, sizeof l_CN_1086);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1085))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1080) && (((*(R22 *)rt_nil_check(l_T_1080))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1087; memset(&l_M_1087, 0, sizeof l_M_1087);
S_R23(&l_M_1087, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1085))).f_HASMV = (l_M_1087).f_OK;
((*(R12 *)rt_nil_check(l_Y_1085))).f_MV = (l_M_1087).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1085))).f_T = l_T_1080;
S_R10(&l_CN_1086, r_NEW_OBJECT(l_Y_1085, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1080))
{
r_CODE(r_INIT_CODE(l_T_1080, l_CN_1086));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1083))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1082, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_1080), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1083 = 1;
}
r_CODE(r_STORE_CODE(l_T_1080, l_CN_1086, l_V_1082, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1085, ((*(R21 *)rt_nil_check(l_N_1081))).f_LINE);
}
l_N_1081 = ((*(R21 *)rt_nil_check(l_N_1081))).f_NEXT;
}
RT_B_TICK();
} L_end1084: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1088 = ({ R26 rc1089; memset(&rc1089, 0, sizeof rc1089);  S_R10(&rc1089.f_C, p_C, 0); rc1089.f_T = p_T; rc1089.f_LVAL = 0; S_R10(&rc1089.f_SELF, r_NO_TEXT(), 0); rc1089; });
return rv1088; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv1090 = ({ R26 rc1091; memset(&rc1091, 0, sizeof rc1091);  S_R10(&rc1091.f_C, p_C, 0); rc1091.f_T = p_T; rc1091.f_LVAL = p_LVAL; S_R10(&rc1091.f_SELF, p_SELF, 0); rc1091; });
return rv1090; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1092; memset(&l_T_1092, 0, sizeof l_T_1092);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1093 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1093; }
}
l_T_1092 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1092))).f_SCALE = p_SCALE;
{ R22 * rv1094 = l_T_1092;
return rv1094; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1095; memset(&l_T_1095, 0, sizeof l_T_1095);
l_T_1095 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_1095))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1095))).f_MLEN, p_M, 0);
{ R22 * rv1096 = l_T_1095;
return rv1096; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_1097; memset(&l_S_1097, 0, sizeof l_S_1097);
l_S_1097 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1097, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1098; memset(&l_AT_1098, 0, sizeof l_AT_1098);
l_AT_1098 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_1099; memset(&l_R_1099, 0, sizeof l_R_1099);
S_R10(&l_R_1099, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1101_lo = ((rt_int)0LL), it1101_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1101 = it1101_lo; it1101 <= it1101_hi; it1101++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1097, it1101, it1101), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1097, it1101, it1101), rt_str("\\", 1))))
{
S_R10(&l_R_1099, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1097, it1101, it1101))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1097, it1101, it1101), rt_str("\?", 1)))
{
S_R10(&l_R_1099, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1102; memset(&l_C_1102, 0, sizeof l_C_1102);
l_C_1102 = r_CODE_OF(rt_b_slice(l_S_1097, it1101, it1101));
if (({ rt_int iv1103 = l_C_1102; (((rt_int)32LL) <= iv1103) && (iv1103 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_1099, r_MK(rt_b_slice(l_S_1097, it1101, it1101)), 0);
}
else
{
S_R10(&l_R_1099, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1102, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1102, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1102, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1101 == it1101_hi) break;
} } L_end1100: ;
S_R10(&l_R_1099, r_MK(rt_str("\"", 1)), 0);
{ R10 rv1104 = ({ R10 rc1105; memset(&rc1105, 0, sizeof rc1105);  rc1105.f_AT = l_AT_1098; rc1105.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1098); rc1105.f_H = rt_neg(((rt_int)1LL)); rc1105; });
return rv1104; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_1106; memset(&l_K_1106, 0, sizeof l_K_1106);
l_K_1106 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1107; memset(&l_NO_1107, 0, sizeof l_NO_1107);
S_R23(&l_NO_1107, ({ R23 rc1108; memset(&rc1108, 0, sizeof rc1108);  rc1108.f_OK = 0; rc1108.f_V = ((rt_int)0LL); rc1108; }), 0);
if ((l_K_1106 == g_N_INT))
{
{ R23 rv1109 = ({ R23 rc1110; memset(&rc1110, 0, sizeof rc1110);  rc1110.f_OK = 1; rc1110.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1110; });
return rv1109; }
}
else if ((l_K_1106 == g_N_PAREN))
{
{ R23 rv1111 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv1111; }
}
else if ((l_K_1106 == g_N_BOOL))
{
{ R23 rv1112 = ({ R23 rc1113; memset(&rc1113, 0, sizeof rc1113);  rc1113.f_OK = 1; rc1113.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1113; });
return rv1112; }
}
else if ((l_K_1106 == g_N_UNOP))
{
{
R23 l_A_1114; memset(&l_A_1114, 0, sizeof l_A_1114);
S_R23(&l_A_1114, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1114).f_OK))
{
{ R23 rv1115 = l_NO_1107;
return rv1115; }
}
{ R23 rv1116 = ({ R23 rc1117; memset(&rc1117, 0, sizeof rc1117);  rc1117.f_OK = 1; rc1117.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1114).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1117; });
return rv1116; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1118 = l_A_1114;
return rv1118; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1119 = ({ R23 rc1120; memset(&rc1120, 0, sizeof rc1120);  rc1120.f_OK = (l_A_1114).f_OK; rc1120.f_V = rt_sub(((rt_int)1LL), (l_A_1114).f_V); rc1120; });
return rv1119; }
}
}
}
else if ((l_K_1106 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1121 = l_NO_1107;
return rv1121; }
}
{
R23 l_A_1122; memset(&l_A_1122, 0, sizeof l_A_1122);
S_R23(&l_A_1122, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1123; memset(&l_B_1123, 0, sizeof l_B_1123);
S_R23(&l_B_1123, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1124; memset(&l_OP_1124, 0, sizeof l_OP_1124);
S_R10(&l_OP_1124, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1124, rt_str("&", 1)))
{
if (((((l_A_1122).f_OK && ((l_A_1122).f_V == ((rt_int)0LL)))) || (((l_B_1123).f_OK && ((l_B_1123).f_V == ((rt_int)0LL))))))
{
{ R23 rv1125 = ({ R23 rc1126; memset(&rc1126, 0, sizeof rc1126);  rc1126.f_OK = 1; rc1126.f_V = ((rt_int)0LL); rc1126; });
return rv1125; }
}
if (((l_A_1122).f_OK && (l_B_1123).f_OK))
{
{ R23 rv1127 = ({ R23 rc1128; memset(&rc1128, 0, sizeof rc1128);  rc1128.f_OK = 1; rc1128.f_V = ((rt_int)1LL); rc1128; });
return rv1127; }
}
{ R23 rv1129 = l_NO_1107;
return rv1129; }
}
else if (r_TEQS(l_OP_1124, rt_str("!", 1)))
{
if (((((l_A_1122).f_OK && ((l_A_1122).f_V == ((rt_int)1LL)))) || (((l_B_1123).f_OK && ((l_B_1123).f_V == ((rt_int)1LL))))))
{
{ R23 rv1130 = ({ R23 rc1131; memset(&rc1131, 0, sizeof rc1131);  rc1131.f_OK = 1; rc1131.f_V = ((rt_int)1LL); rc1131; });
return rv1130; }
}
if (((l_A_1122).f_OK && (l_B_1123).f_OK))
{
{ R23 rv1132 = ({ R23 rc1133; memset(&rc1133, 0, sizeof rc1133);  rc1133.f_OK = 1; rc1133.f_V = ((rt_int)0LL); rc1133; });
return rv1132; }
}
{ R23 rv1134 = l_NO_1107;
return rv1134; }
}
if ((!(((l_A_1122).f_OK && (l_B_1123).f_OK))))
{
{ R23 rv1135 = l_NO_1107;
return rv1135; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1136 = l_NO_1107;
return rv1136; }
}
if (((r_TEQS(l_OP_1124, rt_str("+", 1)) || r_TEQS(l_OP_1124, rt_str("-", 1))) || r_TEQS(l_OP_1124, rt_str("*", 1))))
{
{ R23 rv1137 = ({ R23 rc1138; memset(&rc1138, 0, sizeof rc1138);  rc1138.f_OK = 1; rc1138.f_V = r_MANIFEST_ARITH(l_OP_1124, (l_A_1122).f_V, (l_B_1123).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1138; });
return rv1137; }
}
else if ((r_TEQS(l_OP_1124, rt_str("//", 2)) && (!((l_B_1123).f_V == ((rt_int)0LL)))))
{
{ R23 rv1139 = ({ R23 rc1140; memset(&rc1140, 0, sizeof rc1140);  rc1140.f_OK = 1; rc1140.f_V = rt_quot((l_A_1122).f_V, (l_B_1123).f_V); rc1140; });
return rv1139; }
}
else if ((r_TEQS(l_OP_1124, rt_str("MOD", 3)) && (!((l_B_1123).f_V == ((rt_int)0LL)))))
{
{ R23 rv1141 = ({ R23 rc1142; memset(&rc1142, 0, sizeof rc1142);  rc1142.f_OK = 1; rc1142.f_V = rt_rem((l_A_1122).f_V, (l_B_1123).f_V); rc1142; });
return rv1141; }
}
else if (r_TEQS(l_OP_1124, rt_str("=", 1)))
{
{ R23 rv1143 = ({ R23 rc1144; memset(&rc1144, 0, sizeof rc1144);  rc1144.f_OK = 1; rc1144.f_V = r_BOOL_INT(((l_A_1122).f_V == (l_B_1123).f_V)); rc1144; });
return rv1143; }
}
else if (r_TEQS(l_OP_1124, rt_str("<>", 2)))
{
{ R23 rv1145 = ({ R23 rc1146; memset(&rc1146, 0, sizeof rc1146);  rc1146.f_OK = 1; rc1146.f_V = r_BOOL_INT((!((l_A_1122).f_V == (l_B_1123).f_V))); rc1146; });
return rv1145; }
}
else if (r_TEQS(l_OP_1124, rt_str("<", 1)))
{
{ R23 rv1147 = ({ R23 rc1148; memset(&rc1148, 0, sizeof rc1148);  rc1148.f_OK = 1; rc1148.f_V = r_BOOL_INT(((l_A_1122).f_V < (l_B_1123).f_V)); rc1148; });
return rv1147; }
}
else if (r_TEQS(l_OP_1124, rt_str(">", 1)))
{
{ R23 rv1149 = ({ R23 rc1150; memset(&rc1150, 0, sizeof rc1150);  rc1150.f_OK = 1; rc1150.f_V = r_BOOL_INT(((l_A_1122).f_V > (l_B_1123).f_V)); rc1150; });
return rv1149; }
}
else if (r_TEQS(l_OP_1124, rt_str("<=", 2)))
{
{ R23 rv1151 = ({ R23 rc1152; memset(&rc1152, 0, sizeof rc1152);  rc1152.f_OK = 1; rc1152.f_V = r_BOOL_INT(((l_A_1122).f_V <= (l_B_1123).f_V)); rc1152; });
return rv1151; }
}
else if (r_TEQS(l_OP_1124, rt_str(">=", 2)))
{
{ R23 rv1153 = ({ R23 rc1154; memset(&rc1154, 0, sizeof rc1154);  rc1154.f_OK = 1; rc1154.f_V = r_BOOL_INT(((l_A_1122).f_V >= (l_B_1123).f_V)); rc1154; });
return rv1153; }
}
}
}
else if ((l_K_1106 == g_N_IN))
{
{
R23 l_A_1155; memset(&l_A_1155, 0, sizeof l_A_1155);
S_R23(&l_A_1155, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1156; memset(&l_L_1156, 0, sizeof l_L_1156);
S_R23(&l_L_1156, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1157; memset(&l_U_1157, 0, sizeof l_U_1157);
S_R23(&l_U_1157, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1158; memset(&l_LO_1158, 0, sizeof l_LO_1158);
rt_int l_HI_1159; memset(&l_HI_1159, 0, sizeof l_HI_1159);
if ((!(((((l_A_1155).f_OK && (l_L_1156).f_OK) && (l_U_1157).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1160 = l_NO_1107;
return rv1160; }
}
l_LO_1158 = (l_L_1156).f_V;
l_HI_1159 = (l_U_1157).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1158 = rt_add(l_LO_1158, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1159 = rt_sub(l_HI_1159, ((rt_int)1LL));
}
{ R23 rv1161 = ({ R23 rc1162; memset(&rc1162, 0, sizeof rc1162);  rc1162.f_OK = 1; rc1162.f_V = r_BOOL_INT((((l_A_1155).f_V >= l_LO_1158) && ((l_A_1155).f_V <= l_HI_1159))); rc1162; });
return rv1161; }
}
}
else if (((l_K_1106 == g_N_NAME) || (l_K_1106 == g_TS_GEN)))
{
{
R12 * l_Y_1163; memset(&l_Y_1163, 0, sizeof l_Y_1163);
l_Y_1163 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1164; memset(&l_B_1164, 0, sizeof l_B_1164);
l_B_1164 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1164 == NULL)) goto L_end1165;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1164))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1164))).f_HASMV))
{
{ R23 rv1166 = ({ R23 rc1167; memset(&rc1167, 0, sizeof rc1167);  rc1167.f_OK = 1; rc1167.f_V = ((*(R20 *)rt_nil_check(l_B_1164))).f_MV; rc1167; });
return rv1166; }
}
l_B_1164 = ((*(R20 *)rt_nil_check(l_B_1164))).f_NEXT;
}
RT_B_TICK();
} L_end1165: ;
if ((!(l_Y_1163 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1163))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1163))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1163))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1163))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1163))).f_HASMV))
{
{ R23 rv1168 = ({ R23 rc1169; memset(&rc1169, 0, sizeof rc1169);  rc1169.f_OK = 1; rc1169.f_V = ((*(R12 *)rt_nil_check(l_Y_1163))).f_MV; rc1169; });
return rv1168; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1163))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1170 = ({ R23 rc1171; memset(&rc1171, 0, sizeof rc1171);  rc1171.f_OK = 1; rc1171.f_V = ((*(R12 *)rt_nil_check(l_Y_1163))).f_MV; rc1171; });
return rv1170; }
}
}
}
}
}
else if ((l_K_1106 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1172 = ({ R23 rc1173; memset(&rc1173, 0, sizeof rc1173);  rc1173.f_OK = 1; rc1173.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1173; });
return rv1172; }
}
}
else if ((l_K_1106 == g_N_FIELD))
{
{ R23 rv1174 = r_ATTR_MANIFEST(p_E);
return rv1174; }
}
else if ((l_K_1106 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1175 = ({ R23 rc1176; memset(&rc1176, 0, sizeof rc1176);  rc1176.f_OK = 1; rc1176.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1176; });
return rv1175; }
}
}
{ R23 rv1177 = l_NO_1107;
return rv1177; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1178; memset(&l_A_1178, 0, sizeof l_A_1178);
l_A_1178 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1179; memset(&l_NAME_1179, 0, sizeof l_NAME_1179);
S_R10(&l_NAME_1179, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1180; memset(&l_T_1180, 0, sizeof l_T_1180);
l_T_1180 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1178))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1181; memset(&l_INNER_1181, 0, sizeof l_INNER_1181);
l_INNER_1181 = ((*(R21 *)rt_nil_check(l_A_1178))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1181))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1179, rt_str("MAX", 3)))
{
{ R23 rv1182 = r_SOME(r_MAX_LENGTH());
return rv1182; }
}
else if (r_TEQS(l_NAME_1179, rt_str("MIN", 3)))
{
{ R23 rv1183 = r_SOME(((rt_int)0LL));
return rv1183; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1181))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1181))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1179, rt_str("MAX", 3)))
{
{ R23 rv1184 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1184; }
}
else if (r_TEQS(l_NAME_1179, rt_str("MIN", 3)))
{
{ R23 rv1185 = r_SOME(((rt_int)1LL));
return rv1185; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1181))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1179, rt_str("MAX", 3)))
{
{ R23 rv1186 = r_SOME(((rt_int)1000LL));
return rv1186; }
}
else if (r_TEQS(l_NAME_1179, rt_str("MIN", 3)))
{
{ R23 rv1187 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1187; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1181))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1179, rt_str("MAX", 3)))
{
{ R23 rv1188 = r_SOME(((rt_int)1000LL));
return rv1188; }
}
else if (r_TEQS(l_NAME_1179, rt_str("MIN", 3)))
{
{ R23 rv1189 = r_SOME(((rt_int)2LL));
return rv1189; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1190; memset(&l_Y_1190, 0, sizeof l_Y_1190);
l_Y_1190 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1178))).f_NAME);
if ((l_Y_1190 == NULL))
{
{ R23 rv1191 = r_NO_MVAL();
return rv1191; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1190))).f_KIND == g_Y_TYPE))
{
l_T_1180 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1178))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1178))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1190))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1190))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1190))).f_KIND == g_Y_GEN)))
{
l_T_1180 = ((*(R12 *)rt_nil_check(l_Y_1190))).f_T;
}
else
{
{ R23 rv1192 = r_NO_MVAL();
return rv1192; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1179, rt_str("MIN", 3)) || r_TEQS(l_NAME_1179, rt_str("MAX", 3))))
{
{ R23 rv1193 = r_SOME(((*(R21 *)rt_nil_check(l_A_1178))).f_IV);
return rv1193; }
}
l_T_1180 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1178))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1178))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1179, rt_str("MIN", 3)) || r_TEQS(l_NAME_1179, rt_str("MAX", 3))))))
{
{ R23 rv1194 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1178))).f_A))).f_IV);
return rv1194; }
}
}
{
R14 l_SAVED_CODE_1195; memset(&l_SAVED_CODE_1195, 0, sizeof l_SAVED_CODE_1195);
S_R14(&l_SAVED_CODE_1195, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1196; memset(&rc1196, 0, sizeof rc1196);  rc1196.f_HEAD = NULL; rc1196.f_TAIL = NULL; rc1196; }), 0);
l_T_1180 = (r_EXPR(l_A_1178, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1195, 0);
}
}
else
{
{ R23 rv1197 = r_NO_MVAL();
return rv1197; }
}
if ((l_T_1180 == NULL))
{
{ R23 rv1198 = r_NO_MVAL();
return rv1198; }
}
{ R23 rv1199 = r_TYPE_ATTR_MANIFEST(l_T_1180, l_NAME_1179);
return rv1199; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1200; memset(&l_T_1200, 0, sizeof l_T_1200);
l_T_1200 = r_REAL_TYPE(p_T0);
rt_int l_K_1201; memset(&l_K_1201, 0, sizeof l_K_1201);
l_K_1201 = ((*(R22 *)rt_nil_check(l_T_1200))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1202 = r_STATIC_SIZE(p_T0);
return rv1202; }
}
if ((l_K_1201 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1203 = r_SOME(((*(R22 *)rt_nil_check(l_T_1200))).f_SCALE);
return rv1203; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1204 = r_SOME(((rt_int)2LL));
return rv1204; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1200))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1205 = ((*(R22 *)rt_nil_check(l_T_1200))).f_MLO;
return rv1205; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1200))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1206 = ((*(R22 *)rt_nil_check(l_T_1200))).f_MHI;
return rv1206; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1200))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1207 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1207; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1200))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1208 = r_SOME(INT64_MAX);
return rv1208; }
}
}
else if ((l_K_1201 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1209 = r_SOME(((*(R22 *)rt_nil_check(l_T_1200))).f_SCALE);
return rv1209; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1210 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1200))).f_SCALE));
return rv1210; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1211 = r_SOME(((rt_int)2LL));
return rv1211; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1212 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1200))).f_SCALE, p_NAME));
return rv1212; }
}
}
else if ((l_K_1201 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1200))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1213 = ((*(R22 *)rt_nil_check(l_T_1200))).f_MLO;
return rv1213; }
}
{ R23 rv1214 = r_SOME(((rt_int)0LL));
return rv1214; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1200))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1215 = ((*(R22 *)rt_nil_check(l_T_1200))).f_MHI;
return rv1215; }
}
{ R23 rv1216 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1200))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1216; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1200))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1217 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1200))).f_BASE))).f_NLITS);
return rv1217; }
}
if (((((*(R22 *)rt_nil_check(l_T_1200))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1200))).f_MHI).f_OK))
{
{ R23 rv1218 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1200))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1200))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1218; }
}
}
}
else if (((l_K_1201 == g_T_STR) || (l_K_1201 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1219 = ((*(R22 *)rt_nil_check(l_T_1200))).f_MLEN;
return rv1219; }
}
}
else if ((l_K_1201 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1220 = r_SOME(((*(R22 *)rt_nil_check(l_T_1200))).f_DIMS);
return rv1220; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1200))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1200))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1200))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1221 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1200))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1200))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1221; }
}
}
}
else if ((l_K_1201 == g_T_REC))
{
{
R24 * l_F_1222; memset(&l_F_1222, 0, sizeof l_F_1222);
l_F_1222 = ((*(R22 *)rt_nil_check(l_T_1200))).f_FIELDS;
R25 * l_B_1223; memset(&l_B_1223, 0, sizeof l_B_1223);
l_B_1223 = ((*(R22 *)rt_nil_check(l_T_1200))).f_ARGS;
for (;;) {
if (((l_F_1222 == NULL) || (l_B_1223 == NULL))) goto L_end1224;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1222))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1222))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1223))).f_ANYARG)
{
{ R23 rv1225 = r_NO_MVAL();
return rv1225; }
}
{ R23 rv1226 = ((*(R25 *)rt_nil_check(l_B_1223))).f_MLO;
return rv1226; }
}
l_B_1223 = ((*(R25 *)rt_nil_check(l_B_1223))).f_NEXT;
}
l_F_1222 = ((*(R24 *)rt_nil_check(l_F_1222))).f_NEXT;
}
RT_B_TICK();
} L_end1224: ;
}
}
{ R23 rv1227 = r_NO_MVAL();
return rv1227; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1228 = ((rt_int)0LL);
{ rt_frame xf1229; if (RT_TRY(xf1229)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1228 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1228 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1228 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1229); } else { RT_POP(xf1229); int xf1229x = rt_xcur;
if (0 || xf1229x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1229x); } }
{ rt_int rv1230 = F->l_R_1228;
return rv1230; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1231 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1231; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1232 = ((rt_int)1LL);
return rv1232; }
}
{ rt_int rv1233 = ((rt_int)0LL);
return rv1233; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1234; memset(&l_K_1234, 0, sizeof l_K_1234);
l_K_1234 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1234 == g_N_INT))
{
{ R26 rv1235 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1235; }
}
else if ((l_K_1234 == g_N_REAL))
{
{ R26 rv1236 = r_REAL_LITERAL(p_E);
return rv1236; }
}
else if ((l_K_1234 == g_N_BOOL))
{
{ R26 rv1237 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1237; }
}
else if ((l_K_1234 == g_N_NIL))
{
{ R26 rv1238 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1238; }
}
else if ((l_K_1234 == g_N_PAREN))
{
{
R26 l_V_1239; memset(&l_V_1239, 0, sizeof l_V_1239);
S_R26(&l_V_1239, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1239).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1239).f_C), 0);
{ R26 rv1240 = l_V_1239;
return rv1240; }
}
}
else if ((l_K_1234 == g_N_STR))
{
{ R26 rv1241 = r_STRING_LITERAL(p_E);
return rv1241; }
}
else if ((l_K_1234 == g_N_BITS))
{
{ R26 rv1242 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1242; }
}
else if ((l_K_1234 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1243 = r_NAME_EXPR(p_E, p_WANT);
return rv1243; }
}
{ R26 rv1244 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1244; }
}
else if ((l_K_1234 == g_N_RECCONS))
{
{ R26 rv1245 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1245; }
}
else if ((l_K_1234 == g_N_ARRCONS))
{
{ R26 rv1246 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1246; }
}
else if ((l_K_1234 == g_N_TYPESPEC))
{
{ R26 rv1247 = r_TYPE_SPECIFIER(p_E);
return rv1247; }
}
else if ((l_K_1234 == g_N_QUAL))
{
{
rt_int l_SAVED_1248; memset(&l_SAVED_1248, 0, sizeof l_SAVED_1248);
l_SAVED_1248 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1249; memset(&l_SAVED_Q_1249, 0, sizeof l_SAVED_Q_1249);
l_SAVED_Q_1249 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1250; memset(&l_V_1250, 0, sizeof l_V_1250);
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
R23 l_P_1251; memset(&l_P_1251, 0, sizeof l_P_1251);
S_R23(&l_P_1251, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1250, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1248;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1249;
{ R26 rv1252 = l_V_1250;
return rv1252; }
}
}
else if ((l_K_1234 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1253; memset(&l_N_1253, 0, sizeof l_N_1253);
l_N_1253 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1253))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1253))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1254 = r_EXPR(l_N_1253, p_WANT);
return rv1254; }
}
}
{ R26 rv1255 = r_NEW_EXPR(p_E, p_WANT);
return rv1255; }
}
else if ((l_K_1234 == g_N_NAME))
{
{ R26 rv1256 = r_NAME_EXPR(p_E, p_WANT);
return rv1256; }
}
else if ((l_K_1234 == g_N_APPLY))
{
{
R12 * l_Y_1257; memset(&l_Y_1257, 0, sizeof l_Y_1257);
l_Y_1257 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1257 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1257))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1257))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1258; memset(&l_N_1258, 0, sizeof l_N_1258);
l_N_1258 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1259; memset(&l_A_1259, 0, sizeof l_A_1259);
l_A_1259 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1259))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1258))).f_A = l_A_1259;
((*(R21 *)rt_nil_check(l_N_1258))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1260 = r_EXPR(l_N_1258, p_WANT);
return rv1260; }
}
}
}
{ R26 rv1261 = r_CALL_EXPR(p_E, p_WANT);
return rv1261; }
}
}
else if ((l_K_1234 == g_N_FIELD))
{
{ R26 rv1262 = r_FIELD_EXPR(p_E);
return rv1262; }
}
else if ((l_K_1234 == g_N_DEREF))
{
{
R26 l_B_1263; memset(&l_B_1263, 0, sizeof l_B_1263);
S_R26(&l_B_1263, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1263).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1264; memset(&l_TT_1264, 0, sizeof l_TT_1264);
l_TT_1264 = r_TARGET((l_B_1263).f_T);
{ R26 rv1265 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1264), (l_B_1263).f_C), l_TT_1264, 1, r_NO_TEXT());
return rv1265; }
}
}
}
else if ((l_K_1234 == g_N_INDEX))
{
{ R26 rv1266 = r_INDEX_EXPR(p_E);
return rv1266; }
}
else if ((l_K_1234 == g_N_SUBSTR))
{
{
R26 l_B_1267; memset(&l_B_1267, 0, sizeof l_B_1267);
S_R26(&l_B_1267, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1268; memset(&l_BT_1268, 0, sizeof l_BT_1268);
l_BT_1268 = r_REAL_TYPE((l_B_1267).f_T);
R10 l_LO_1269; memset(&l_LO_1269, 0, sizeof l_LO_1269);
R10 l_HI_1270; memset(&l_HI_1270, 0, sizeof l_HI_1270);
if (((((*(R22 *)rt_nil_check((l_B_1267).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1271; memset(&l_ARGS_1271, 0, sizeof l_ARGS_1271);
l_ARGS_1271 = r_VAL_ARG(l_B_1267, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1272; memset(&l_Y_1272, 0, sizeof l_Y_1272);
l_Y_1272 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1271, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1272 == NULL)))
{
{ R26 rv1273 = r_CALL_SYM(l_Y_1272, l_ARGS_1271, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1273; }
}
if ((((*(R22 *)rt_nil_check((l_B_1267).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1268))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1268))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1269, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1270, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1268))).f_KIND == g_T_BITS))
{
{ R26 rv1274 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1267).f_C, l_LO_1269, l_HI_1270), r_BITS_TYPE(((rt_int)1LL)));
return rv1274; }
}
{
R22 * l_T_1275; memset(&l_T_1275, 0, sizeof l_T_1275);
l_T_1275 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1275))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1268))).f_BASE;
{ R26 rv1276 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1267).f_C, l_LO_1269, l_HI_1270), l_T_1275);
return rv1276; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1268))).f_KIND == g_T_BITS))
{
{ R26 rv1277 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1267).f_C, l_LO_1269, l_HI_1270), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1277; }
}
{
R22 * l_T_1278; memset(&l_T_1278, 0, sizeof l_T_1278);
l_T_1278 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1278))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1268))).f_BASE;
{ R26 rv1279 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1267).f_C, l_LO_1269, l_HI_1270), l_T_1278);
return rv1279; }
}
}
}
else if ((l_K_1234 == g_N_UNOP))
{
{ R26 rv1280 = r_UNARY(p_E);
return rv1280; }
}
else if ((l_K_1234 == g_N_BINOP))
{
{ R26 rv1281 = r_BINARY(p_E);
return rv1281; }
}
else if ((l_K_1234 == g_N_IN))
{
{ R26 rv1282 = r_IN_EXPR(p_E);
return rv1282; }
}
else if (((l_K_1234 == g_N_ANY) || (l_K_1234 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1234 == g_TS_GEN))
{
{
R21 * l_N_1283; memset(&l_N_1283, 0, sizeof l_N_1283);
l_N_1283 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1283))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1283))).f_NAME))
{
{ R26 rv1284 = r_NAME_EXPR(l_N_1283, p_WANT);
return rv1284; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1234 == g_TS_NAME) || (l_K_1234 == g_TS_ARRAY)) || (l_K_1234 == g_TS_RECORD)) || (l_K_1234 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1285; memset(&l_SAVED_1285, 0, sizeof l_SAVED_1285);
l_SAVED_1285 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1286; memset(&l_SAVED_Q_1286, 0, sizeof l_SAVED_Q_1286);
l_SAVED_Q_1286 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1287; memset(&l_V_1287, 0, sizeof l_V_1287);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1287, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1285;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1286;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1287).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1288 = (l_V_1287).f_C;
return rv1288; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1287).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1287).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1287).f_T));
}
{ R10 rv1289 = (l_V_1287).f_C;
return rv1289; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1290; memset(&l_V_1290, 0, sizeof l_V_1290);
S_R26(&l_V_1290, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1290).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1290).f_T));
}
{ R10 rv1291 = (l_V_1290).f_C;
return rv1291; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1292; memset(&l_T_1292, 0, sizeof l_T_1292);
l_T_1292 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1292))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1292))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1293 = l_T_1292;
return rv1293; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1294; memset(&l_T_1294, 0, sizeof l_T_1294);
S_R10(&l_T_1294, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1295; memset(&l_S_1295, 0, sizeof l_S_1295);
l_S_1295 = rt_b_str_new((l_T_1294).f_LEN, 0);
rt_b_assign(&l_S_1295, r_STR(l_T_1294, (l_T_1294).f_LEN));
rt_int l_POINT_1296; memset(&l_POINT_1296, 0, sizeof l_POINT_1296);
l_POINT_1296 = 0;
rt_int l_DIGITS_1297; memset(&l_DIGITS_1297, 0, sizeof l_DIGITS_1297);
l_DIGITS_1297 = ((rt_int)0LL);
{ rt_int it1299_lo = ((rt_int)0LL), it1299_hi = rt_sub((l_T_1294).f_LEN, ((rt_int)1LL));
for (rt_int it1299 = it1299_lo; it1299 <= it1299_hi; it1299++) {
{
if (rt_b_eq(rt_b_slice(l_S_1295, it1299, it1299), rt_str(".", 1)))
{
l_POINT_1296 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1295, it1299, it1299), rt_str("E", 1)))
{
goto L_end1298;
}
else
{
l_DIGITS_1297 = rt_add(l_DIGITS_1297, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1299 == it1299_hi) break;
} } L_end1298: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1296)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1300 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1294), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1300; }
}
if ((!l_POINT_1296))
{
{ R26 rv1301 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1294)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1301; }
}
{
R22 * l_F_1302; memset(&l_F_1302, 0, sizeof l_F_1302);
l_F_1302 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1303; memset(&l_C_1303, 0, sizeof l_C_1303);
S_R10(&l_C_1303, l_T_1294, 0);
((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE = r_MAX_INT(l_DIGITS_1297, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1295, rt_sub((l_T_1294).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1294).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1303, r_FMT1(rt_str("@0", 2), l_T_1294), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1295, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1303, r_FMT1(rt_str("0@", 2), l_T_1294), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1302))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1304 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1303), l_F_1302);
return rv1304; }
}
{ R26 rv1305 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1303), l_F_1302);
return rv1305; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1306; memset(&l_T_1306, 0, sizeof l_T_1306);
S_R10(&l_T_1306, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1307; memset(&l_S_1307, 0, sizeof l_S_1307);
l_S_1307 = rt_b_str_new((l_T_1306).f_LEN, 0);
rt_b_assign(&l_S_1307, r_STR(l_T_1306, (l_T_1306).f_LEN));
rt_int l_INT_1308; memset(&l_INT_1308, 0, sizeof l_INT_1308);
l_INT_1308 = ((rt_int)0LL);
rt_int l_SIG_1309; memset(&l_SIG_1309, 0, sizeof l_SIG_1309);
l_SIG_1309 = 0;
rt_int l_POINT_1310; memset(&l_POINT_1310, 0, sizeof l_POINT_1310);
l_POINT_1310 = 0;
rt_int l_LEAD_1311; memset(&l_LEAD_1311, 0, sizeof l_LEAD_1311);
l_LEAD_1311 = ((rt_int)0LL);
rt_int l_I_1312; memset(&l_I_1312, 0, sizeof l_I_1312);
l_I_1312 = ((rt_int)0LL);
rt_int l_EXP_1313; memset(&l_EXP_1313, 0, sizeof l_EXP_1313);
l_EXP_1313 = ((rt_int)0LL);
for (;;) {
if ((l_I_1312 >= (l_T_1306).f_LEN)) goto L_end1314;
{
if (rt_b_eq(rt_b_slice(l_S_1307, l_I_1312, l_I_1312), rt_str("E", 1)))
{
goto L_end1314;
}
else if (rt_b_eq(rt_b_slice(l_S_1307, l_I_1312, l_I_1312), rt_str(".", 1)))
{
l_POINT_1310 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1307, l_I_1312, l_I_1312), rt_str("0", 1))))
{
if ((!l_POINT_1310))
{
l_INT_1308 = rt_add(l_INT_1308, ((rt_int)1LL));
}
l_SIG_1309 = 1;
}
else if ((l_SIG_1309 && (!l_POINT_1310)))
{
l_INT_1308 = rt_add(l_INT_1308, ((rt_int)1LL));
}
else if ((l_POINT_1310 && (!l_SIG_1309)))
{
l_LEAD_1311 = rt_add(l_LEAD_1311, ((rt_int)1LL));
}
l_I_1312 = rt_add(l_I_1312, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1314: ;
if ((!l_SIG_1309))
{
{ rt_int rv1315 = 1;
return rv1315; }
}
if ((l_I_1312 < (l_T_1306).f_LEN))
{
{
rt_int l_NEG_1316; memset(&l_NEG_1316, 0, sizeof l_NEG_1316);
l_NEG_1316 = 0;
l_I_1312 = rt_add(l_I_1312, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1307, l_I_1312, l_I_1312), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1307, l_I_1312, l_I_1312), rt_str("+", 1))))
{
l_NEG_1316 = rt_b_eq(rt_b_slice(l_S_1307, l_I_1312, l_I_1312), rt_str("-", 1));
l_I_1312 = rt_add(l_I_1312, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1312 >= (l_T_1306).f_LEN)) goto L_end1317;
{
if ((l_EXP_1313 <= ((rt_int)100000LL)))
{
l_EXP_1313 = rt_add(rt_mul(l_EXP_1313, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1307, l_I_1312, l_I_1312)), ((rt_int)48LL))));
}
l_I_1312 = rt_add(l_I_1312, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1317: ;
if (l_NEG_1316)
{
l_EXP_1313 = rt_neg(l_EXP_1313);
}
}
}
{
rt_int l_D_1318; memset(&l_D_1318, 0, sizeof l_D_1318);
l_D_1318 = rt_add(rt_sub(l_INT_1308, ((rt_int)1LL)), l_EXP_1313);
rt_int l_LIM_1319; memset(&l_LIM_1319, 0, sizeof l_LIM_1319);
l_LIM_1319 = ((rt_int)308LL);
if ((l_INT_1308 == ((rt_int)0LL)))
{
l_D_1318 = rt_add(rt_sub(rt_neg(l_LEAD_1311), ((rt_int)1LL)), l_EXP_1313);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1319 = ((rt_int)38LL);
}
{ rt_int rv1320 = ((l_D_1318 <= l_LIM_1319) && (l_D_1318 >= rt_add(rt_neg(l_LIM_1319), ((rt_int)1LL))));
return rv1320; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1321; memset(&l_T_1321, 0, sizeof l_T_1321);
S_R10(&l_T_1321, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1322; memset(&l_S_1322, 0, sizeof l_S_1322);
l_S_1322 = rt_b_str_new((l_T_1321).f_LEN, 0);
rt_b_assign(&l_S_1322, r_STR(l_T_1321, (l_T_1321).f_LEN));
rt_int l_SIG_1323; memset(&l_SIG_1323, 0, sizeof l_SIG_1323);
l_SIG_1323 = ((rt_int)0LL);
rt_int l_FRAC_1324; memset(&l_FRAC_1324, 0, sizeof l_FRAC_1324);
l_FRAC_1324 = ((rt_int)0LL);
rt_int l_POINT_1325; memset(&l_POINT_1325, 0, sizeof l_POINT_1325);
l_POINT_1325 = 0;
rt_int l_EXP_1326; memset(&l_EXP_1326, 0, sizeof l_EXP_1326);
l_EXP_1326 = ((rt_int)0LL);
rt_int l_I_1327; memset(&l_I_1327, 0, sizeof l_I_1327);
l_I_1327 = ((rt_int)0LL);
for (;;) {
if ((l_I_1327 >= (l_T_1321).f_LEN)) goto L_end1328;
{
if (rt_b_eq(rt_b_slice(l_S_1322, l_I_1327, l_I_1327), rt_str("E", 1)))
{
goto L_end1328;
}
if (rt_b_eq(rt_b_slice(l_S_1322, l_I_1327, l_I_1327), rt_str(".", 1)))
{
l_POINT_1325 = 1;
}
else
{
if (((l_SIG_1323 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1322, l_I_1327, l_I_1327), rt_str("0", 1)))))
{
l_SIG_1323 = rt_add(l_SIG_1323, ((rt_int)1LL));
}
if (l_POINT_1325)
{
l_FRAC_1324 = rt_add(l_FRAC_1324, ((rt_int)1LL));
}
}
l_I_1327 = rt_add(l_I_1327, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1328: ;
if ((rt_sub(l_I_1327, r_BOOL_INT(l_POINT_1325)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1327 < (l_T_1321).f_LEN))
{
{
rt_int l_NEG_1329; memset(&l_NEG_1329, 0, sizeof l_NEG_1329);
l_NEG_1329 = 0;
l_I_1327 = rt_add(l_I_1327, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1322, l_I_1327, l_I_1327), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1322, l_I_1327, l_I_1327), rt_str("+", 1))))
{
l_NEG_1329 = rt_b_eq(rt_b_slice(l_S_1322, l_I_1327, l_I_1327), rt_str("-", 1));
l_I_1327 = rt_add(l_I_1327, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1327 >= (l_T_1321).f_LEN)) goto L_end1330;
{
if ((l_EXP_1326 <= ((rt_int)1000LL)))
{
l_EXP_1326 = rt_sub(rt_add(rt_mul(l_EXP_1326, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1322, l_I_1327, l_I_1327))), ((rt_int)48LL));
}
l_I_1327 = rt_add(l_I_1327, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1330: ;
if ((l_EXP_1326 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1329)
{
l_EXP_1326 = rt_neg(l_EXP_1326);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1323 > ((rt_int)0LL)))
{
{
rt_int l_P10_1331; memset(&l_P10_1331, 0, sizeof l_P10_1331);
l_P10_1331 = rt_sub(rt_add(rt_sub(l_SIG_1323, ((rt_int)1LL)), l_EXP_1326), l_FRAC_1324);
rt_int l_BITS_1332; memset(&l_BITS_1332, 0, sizeof l_BITS_1332);
l_BITS_1332 = rt_add(rt_quot((rt_mul(l_P10_1331, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1331 < ((rt_int)0LL)))
{
l_BITS_1332 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1331), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1332 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1333; memset(&l_CS_1333, 0, sizeof l_CS_1333);
l_CS_1333 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1334; memset(&l_P_1334, 0, sizeof l_P_1334);
l_P_1334 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1335; memset(&l_S_1335, 0, sizeof l_S_1335);
S_R10(&l_S_1335, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1333 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1336; memset(&l_Y_1336, 0, sizeof l_Y_1336);
l_Y_1336 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1336 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1336))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1333 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1333)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1333 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1333)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1333))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1334 == NULL)) goto L_end1337;
{
if ((((*(R21 *)rt_nil_check(l_P_1334))).f_IV == g_K_STR))
{
if ((l_CS_1333 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1335, r_CAT(l_S_1335, ((*(R21 *)rt_nil_check(l_P_1334))).f_NAME), 0);
}
else
{
{
R10 l_Q_1338; memset(&l_Q_1338, 0, sizeof l_Q_1338);
S_R10(&l_Q_1338, ((*(R21 *)rt_nil_check(l_P_1334))).f_NAME, 0);
rstr l_QS_1339; memset(&l_QS_1339, 0, sizeof l_QS_1339);
l_QS_1339 = rt_b_str_new((l_Q_1338).f_LEN, 0);
rt_b_assign(&l_QS_1339, r_STR(l_Q_1338, (l_Q_1338).f_LEN));
{ rt_int it1341_lo = ((rt_int)0LL), it1341_hi = rt_sub((l_Q_1338).f_LEN, ((rt_int)1LL));
for (rt_int it1341 = it1341_lo; it1341 <= it1341_hi; it1341++) {
{
{
R10 l_LIT_1342; memset(&l_LIT_1342, 0, sizeof l_LIT_1342);
R12 * l_Y_1343; memset(&l_Y_1343, 0, sizeof l_Y_1343);
if (rt_b_eq(rt_b_slice(l_QS_1339, it1341, it1341), rt_str("'", 1)))
{
S_R10(&l_LIT_1342, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1342, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1339, it1341, it1341)), rt_str("'", 1))), 0);
}
l_Y_1343 = r_FIND_LITERAL(l_LIT_1342, l_CS_1333);
if ((l_Y_1343 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1334))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1339, it1341, it1341)));
}
S_R10(&l_S_1335, r_CATS(l_S_1335, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1343))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1341 == it1341_hi) break;
} } L_end1340: ;
}
}
}
else
{
{
R12 * l_Y_1344; memset(&l_Y_1344, 0, sizeof l_Y_1344);
l_Y_1344 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1334))).f_NAME, l_CS_1333);
if ((l_Y_1344 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1334))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1334))).f_NAME);
}
S_R10(&l_S_1335, r_CATS(l_S_1335, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1344))).f_MV)), 0);
}
}
l_P_1334 = ((*(R21 *)rt_nil_check(l_P_1334))).f_NEXT;
}
RT_B_TICK();
} L_end1337: ;
{
R22 * l_T_1345; memset(&l_T_1345, 0, sizeof l_T_1345);
l_T_1345 = r_STR_TYPE(r_NUM((l_S_1335).f_LEN), r_SOME((l_S_1335).f_LEN));
((*(R22 *)rt_nil_check(l_T_1345))).f_BASE = l_CS_1333;
{ R26 rv1346 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1335), r_NUM((l_S_1335).f_LEN)), l_T_1345);
return rv1346; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1347; memset(&l_TS_1347, 0, sizeof l_TS_1347);
l_TS_1347 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1347))).f_NAME, p_NAME, 0);
{ R22 * rv1348 = r_RESOLVE(l_TS_1347);
return rv1348; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1349; memset(&l_Y_1349, 0, sizeof l_Y_1349);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1350; memset(&l_WT_1350, 0, sizeof l_WT_1350);
l_WT_1350 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1350))).f_KIND == g_T_ENUM))
{
l_Y_1349 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1350);
if ((!(l_Y_1349 == NULL)))
{
{ R26 rv1351 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1349))).f_MV), r_ENUM_RESULT(l_Y_1349, p_WANT));
return rv1351; }
}
}
}
}
l_Y_1349 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1352; memset(&l_FOUND_1352, 0, sizeof l_FOUND_1352);
l_FOUND_1352 = NULL;
rt_int l_N_1353; memset(&l_N_1353, 0, sizeof l_N_1353);
l_N_1353 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1349 == NULL)) goto L_end1354;
{
if ((((*(R12 *)rt_nil_check(l_Y_1349))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1352 == NULL))
{
l_FOUND_1352 = l_Y_1349;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1352))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1349))).f_T))).f_BASE)))
{
l_N_1353 = rt_add(l_N_1353, ((rt_int)1LL));
}
}
l_Y_1349 = r_LOOKUP_NEXT(l_Y_1349);
}
RT_B_TICK();
} L_end1354: ;
if ((l_FOUND_1352 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1353 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1355 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1352))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1352))).f_T);
return rv1355; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1356 = p_WANT;
return rv1356; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1357; memset(&l_T_1357, 0, sizeof l_T_1357);
l_T_1357 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1357))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1358 = l_T_1357;
return rv1358; }
}
}
{ R22 * rv1359 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1359; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1360; memset(&l_Y_1360, 0, sizeof l_Y_1360);
l_Y_1360 = r_LOOKUP(p_NAME);
if ((l_Y_1360 == NULL))
{
{ rt_int rv1361 = 0;
return rv1361; }
}
{ rt_int rv1362 = (((((*(R12 *)rt_nil_check(l_Y_1360))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1360))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1360))).f_KIND == g_Y_ROUTINE));
return rv1362; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1363; memset(&l_Y_1363, 0, sizeof l_Y_1363);
l_Y_1363 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1363 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1363))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1363))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1364; memset(&l_WRITABLE_1364, 0, sizeof l_WRITABLE_1364);
l_WRITABLE_1364 = (r_SEG_VISIBLE(l_Y_1363, ((*(R21 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1363, ((*(R21 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1365 = r_MKLV(r_OBJ_ACCESS(l_Y_1363), ((*(R12 *)rt_nil_check(l_Y_1363))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_VAR) && l_WRITABLE_1364), r_NO_TEXT());
return rv1365; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_GEN))
{
{ R26 rv1366 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1363))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1363))).f_T);
return rv1366; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1367 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1367; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1363))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1368; memset(&l_N_1368, 0, sizeof l_N_1368);
l_N_1368 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1368))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1369 = r_CALL_EXPR(l_N_1368, p_WANT);
return rv1369; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1370; memset(&l_A_1370, 0, sizeof l_A_1370);
l_A_1370 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1370)))
{
{ R26 rv1371 = r_EXPR(l_A_1370, NULL);
return rv1371; }
}
if ((((*(R21 *)rt_nil_check(l_A_1370))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1370))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1370))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1372; memset(&l_B_1372, 0, sizeof l_B_1372);
S_R26(&l_B_1372, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1370))).f_A))).f_A), 0);
R10 l_I_1373; memset(&l_I_1373, 0, sizeof l_I_1373);
S_R10(&l_I_1373, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1370))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1372).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1374 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1372).f_C, l_I_1373, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1372).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1374; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1375 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1372).f_C, l_I_1373, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1372).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1375; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1370))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(l_A_1370))).f_A))
{
{ R26 rv1376 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(l_A_1370))).f_A)), ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1376; }
}
}
if ((((*(R21 *)rt_nil_check(l_A_1370))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1370))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1370))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1370))).f_A))).f_A))).f_NAME))
{
{ R26 rv1377 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1370))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1370))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1377; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1370))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1378; memset(&l_Y_1378, 0, sizeof l_Y_1378);
l_Y_1378 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1370))).f_NAME);
if ((!(l_Y_1378 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1378))).f_KIND == g_Y_TYPE))
{
{ R26 rv1379 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1370))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1379; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1370))).f_NAME))
{
{ R26 rv1380 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1370))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1380; }
}
}
}
{
R26 l_B_1381; memset(&l_B_1381, 0, sizeof l_B_1381);
S_R26(&l_B_1381, r_EXPR(l_A_1370, NULL), 0);
R22 * l_BT_1382; memset(&l_BT_1382, 0, sizeof l_BT_1382);
l_BT_1382 = (l_B_1381).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1382))).f_KIND == g_T_REC))
{
{
R24 * l_F_1383; memset(&l_F_1383, 0, sizeof l_F_1383);
l_F_1383 = r_FIND_VFIELD(l_BT_1382, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1383 == NULL)))
{
r_CHECK_VARIANT(l_F_1383, l_BT_1382, l_A_1370, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1383))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1382)))
{
{ R26 rv1384 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1381).f_C, ((*(R24 *)rt_nil_check(l_F_1383))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1383))).f_T);
return rv1384; }
}
{ R26 rv1385 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1381).f_C, ((*(R24 *)rt_nil_check(l_F_1383))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1383))).f_T, ((l_B_1381).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1383))).f_KIND == ((rt_int)0LL))), (l_B_1381).f_C);
return rv1385; }
}
}
}
{ R26 rv1386 = r_ATTRIBUTE(l_B_1381, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1386; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1387 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1387; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1388 = 1;
return rv1388; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1389 = 1;
return rv1389; }
}
{
rstr l_S_1390; memset(&l_S_1390, 0, sizeof l_S_1390);
l_S_1390 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1390, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1392_lo = ((rt_int)0LL), it1392_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1392 = it1392_lo; it1392 <= it1392_hi; it1392++) {
{
if (rt_b_eq(rt_b_slice(l_S_1390, it1392, it1392), rt_str(".", 1)))
{
{ rt_int rv1393 = 0;
return rv1393; }
}
}
RT_B_TICK();
if (it1392 == it1392_hi) break;
} } L_end1391: ;
}
{ rt_int rv1394 = 1;
return rv1394; }
}
{ rt_int rv1395 = 0;
return rv1395; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1396 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1396; }
}
{ rt_int rv1397 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1397; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1398 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1398; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1399; memset(&l_TAGV_1399, 0, sizeof l_TAGV_1399);
S_R23(&l_TAGV_1399, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1399).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1399).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1400; memset(&l_F_1400, 0, sizeof l_F_1400);
l_F_1400 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1401; memset(&l_A_1401, 0, sizeof l_A_1401);
l_A_1401 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1400 == NULL)) goto L_end1402;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1400))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1401 == NULL))
{
{ R23 rv1403 = r_NO_MVAL();
return rv1403; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1400))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1401))).f_ANYARG)
{
{ R23 rv1404 = r_NO_MVAL();
return rv1404; }
}
{ R23 rv1405 = ((*(R25 *)rt_nil_check(l_A_1401))).f_MLO;
return rv1405; }
}
l_A_1401 = ((*(R25 *)rt_nil_check(l_A_1401))).f_NEXT;
}
l_F_1400 = ((*(R24 *)rt_nil_check(l_F_1400))).f_NEXT;
}
RT_B_TICK();
} L_end1402: ;
{ R23 rv1406 = r_NO_MVAL();
return rv1406; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1407; memset(&l_P_1407, 0, sizeof l_P_1407);
l_P_1407 = p_L;
for (;;) {
if ((l_P_1407 == NULL)) goto L_end1408;
{
if ((((*(R21 *)rt_nil_check(l_P_1407))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1407))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1407))).f_B, p_T)).f_V)))
{
{ rt_int rv1409 = 1;
return rv1409; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1407, p_T)).f_V == p_V))
{
{ rt_int rv1410 = 1;
return rv1410; }
}
l_P_1407 = ((*(R21 *)rt_nil_check(l_P_1407))).f_NEXT;
}
RT_B_TICK();
} L_end1408: ;
{ rt_int rv1411 = 0;
return rv1411; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1412 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1412; }
}
{ R26 rv1413 = r_EXPR(p_E, NULL);
return rv1413; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1414; memset(&l_A_1414, 0, sizeof l_A_1414);
S_R26(&l_A_1414, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1415; memset(&l_I_1415, 0, sizeof l_I_1415);
S_R10(&l_I_1415, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1414).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1416 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1414).f_C, (l_A_1414).f_C, l_I_1415, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1414).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1416; }
}
}
}
{ R26 rv1417 = r_INDEX_EXPR2(p_E);
return rv1417; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_VALUE(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1418; memset(&l_SAVED_1418, 0, sizeof l_SAVED_1418);
l_SAVED_1418 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1419; memset(&l_SAVED_Q_1419, 0, sizeof l_SAVED_Q_1419);
l_SAVED_Q_1419 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1420; memset(&l_V_1420, 0, sizeof l_V_1420);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1420, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1418;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1419;
{ R10 rv1421 = r_INDEX_OF(l_V_1420, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1421; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1422; memset(&l_T_1422, 0, sizeof l_T_1422);
l_T_1422 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1422))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1422))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1422))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1423; memset(&l_ARGS_1423, 0, sizeof l_ARGS_1423);
l_ARGS_1423 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1424; memset(&l_Y_1424, 0, sizeof l_Y_1424);
l_Y_1424 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1423, p_LINE, 0);
if ((l_Y_1424 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1425 = (r_CALL_SYM(l_Y_1424, l_ARGS_1423, p_LINE)).f_C;
return rv1425; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1422))).f_KIND == g_T_ENUM))
{
{ R10 rv1426 = (p_V).f_C;
return rv1426; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1422))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1422))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1427 = (p_V).f_C;
return rv1427; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1428; memset(&l_B_1428, 0, sizeof l_B_1428);
S_R26(&l_B_1428, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1429; memset(&l_T_1429, 0, sizeof l_T_1429);
l_T_1429 = r_REAL_TYPE((l_B_1428).f_T);
R21 * l_S_1430; memset(&l_S_1430, 0, sizeof l_S_1430);
l_S_1430 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1431; memset(&l_IX_1431, 0, sizeof l_IX_1431);
S_R10(&l_IX_1431, r_MK(rt_str("", 0)), 0);
rt_int l_N_1432; memset(&l_N_1432, 0, sizeof l_N_1432);
l_N_1432 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1429))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1430 == NULL)) goto L_end1433;
{
if ((l_N_1432 > ((rt_int)0LL)))
{
S_R10(&l_IX_1431, r_CATS(l_IX_1431, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1431, r_CAT(l_IX_1431, r_INDEX_VALUE(l_S_1430)), 0);
l_N_1432 = rt_add(l_N_1432, ((rt_int)1LL));
l_S_1430 = ((*(R21 *)rt_nil_check(l_S_1430))).f_NEXT;
}
RT_B_TICK();
} L_end1433: ;
if ((!(l_N_1432 == ((*(R22 *)rt_nil_check(l_T_1429))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1432 == ((rt_int)1LL)))
{
{ R26 rv1434 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1428).f_C, l_IX_1431, (l_B_1428).f_C, (l_B_1428).f_C), ((*(R22 *)rt_nil_check(l_T_1429))).f_ELEM, (l_B_1428).f_LVAL, r_NO_TEXT());
return rv1434; }
}
{
R10 l_X_1435; memset(&l_X_1435, 0, sizeof l_X_1435);
S_R10(&l_X_1435, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1428).f_C, r_NUM(l_N_1432), (l_B_1428).f_C, (l_B_1428).f_C), 0);
{ R26 rv1436 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1435, l_IX_1431), ((*(R22 *)rt_nil_check(l_T_1429))).f_ELEM, (l_B_1428).f_LVAL, r_NO_TEXT());
return rv1436; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1437 = r_MKN(rt_str("NEGATE_", 7));
return rv1437; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1438 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1438; }
}
{ R10 rv1439 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1439; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1440 = r_MKN(rt_str("ADD_", 4));
return rv1440; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1441 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1441; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1442 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1442; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1443 = r_MKN(rt_str("DIVIDE_", 7));
return rv1443; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1444 = r_MKN(rt_str("MODULUS_", 8));
return rv1444; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1445 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1445; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1446 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1446; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1447 = r_MKN(rt_str("EQUAL_", 6));
return rv1447; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1448 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1448; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1449 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1449; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1450 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1450; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1451 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1451; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1452 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1452; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1453 = r_MKN(rt_str("AND_", 4));
return rv1453; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1454 = r_MKN(rt_str("OR_", 3));
return rv1454; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1455 = r_MKN(rt_str("XOR_", 4));
return rv1455; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1456 = r_MKN(rt_str("IMPLIES_", 8));
return rv1456; }
}
{ R10 rv1457 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1457; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1458; memset(&l_A_1458, 0, sizeof l_A_1458);
l_A_1458 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1458)), ({ R27 rc1459; memset(&rc1459, 0, sizeof rc1459);  rc1459.f_E = NULL; S_R26(&rc1459.f_V, p_V, 0); rc1459.f_HAVE = 1; rc1459.f_MODE = g_M_IN; rc1459.f_NEXT = p_NEXT; rc1459; }), 0);
{ R27 * rv1460 = l_A_1458;
return rv1460; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1461; memset(&l_A_1461, 0, sizeof l_A_1461);
l_A_1461 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1461)), ({ R27 rc1462; memset(&rc1462, 0, sizeof rc1462);  rc1462.f_E = p_E; S_R26(&rc1462.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1462.f_HAVE = 0; rc1462.f_MODE = p_MODE; rc1462.f_NEXT = p_NEXT; rc1462; }), 0);
{ R27 * rv1463 = l_A_1461;
return rv1463; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1464; memset(&l_Y_1464, 0, sizeof l_Y_1464);
l_Y_1464 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1464 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1464 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1465 = l_Y_1464;
return rv1465; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1466; memset(&l_Y_1466, 0, sizeof l_Y_1466);
l_Y_1466 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1466 == NULL)) goto L_end1467;
{
if ((((*(R12 *)rt_nil_check(l_Y_1466))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1468 = 1;
return rv1468; }
}
l_Y_1466 = r_LOOKUP_NEXT(l_Y_1466);
}
RT_B_TICK();
} L_end1467: ;
l_Y_1466 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1466 == NULL)) goto L_end1469;
{
if ((((*(R12 *)rt_nil_check(l_Y_1466))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1470 = 1;
return rv1470; }
}
l_Y_1466 = r_LOOKUP_NEXT(l_Y_1466);
}
RT_B_TICK();
} L_end1469: ;
{ rt_int rv1471 = 0;
return rv1471; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1472; memset(&l_Q_1472, 0, sizeof l_Q_1472);
l_Q_1472 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1473; memset(&l_R_1473, 0, sizeof l_R_1473);
l_R_1473 = NULL;
if ((l_Q_1472 == NULL))
{
{ R27 * rv1474 = NULL;
return rv1474; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1472))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1473 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1472))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1472))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1472))).f_B == NULL)))
{
l_R_1473 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1472))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1473);
}
{ R27 * rv1475 = l_R_1473;
return rv1475; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1476; memset(&l_ARGS_1476, 0, sizeof l_ARGS_1476);
l_ARGS_1476 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1477; memset(&l_Y_1477, 0, sizeof l_Y_1477);
l_Y_1477 = r_USER_OPERATOR(p_NAME, l_ARGS_1476, p_LINE);
if ((l_Y_1477 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1478 = r_CALL_SYM(l_Y_1477, l_ARGS_1476, p_LINE);
return rv1478; }
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
{ R10 rv1479 = p_C;
return rv1479; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1480 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1480; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1481 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1481; }
}
{ R10 rv1482 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1482; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1483 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1483; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1484; memset(&l_RT_1484, 0, sizeof l_RT_1484);
l_RT_1484 = r_REAL_TYPE(p_T);
R22 * l_VT_1485; memset(&l_VT_1485, 0, sizeof l_VT_1485);
l_VT_1485 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1485))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_PTR)))
{
{ R10 rv1486 = (p_V).f_C;
return rv1486; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1485))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1485)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1487 = (p_V).f_C;
return rv1487; }
}
if ((!r_SAME_CLASS(l_RT_1484, l_VT_1485)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1485), (r_TYPE_NAME(l_VT_1485)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1484), (r_TYPE_NAME(l_RT_1484)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1484))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1484))).f_SCALE))
{
{ R10 rv1488 = r_RANGE_CHECK(l_RT_1484, (p_V).f_C, p_SELF);
return rv1488; }
}
{ R10 rv1489 = r_RANGE_CHECK(l_RT_1484, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1484))).f_SCALE)), p_SELF);
return rv1489; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1484))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1485))).f_SCALE)))
{
{ R10 rv1490 = r_RANGE_CHECK(l_RT_1484, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1484))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1490; }
}
{ R10 rv1491 = r_RANGE_CHECK(l_RT_1484, (p_V).f_C, p_SELF);
return rv1491; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1484))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1484) || r_HAS_VALUES(l_VT_1485)))) && (!r_SAME_REPS(l_RT_1484, l_VT_1485))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1492 = r_RANGE_CHECK(l_RT_1484, (p_V).f_C, p_SELF);
return rv1492; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1484, l_VT_1485, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1484))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1485))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1484))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1485))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1484), r_TARGET(l_VT_1485))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R10 rv1493 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1484), r_TARGET(l_VT_1485), (p_V).f_C);
return rv1493; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1484)) && (!r_HAS_ANY(l_VT_1485))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1484))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1485))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1484))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1484))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1485))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1484, l_VT_1485)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R10 rv1494 = (p_V).f_C;
return rv1494; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1495; memset(&l_ARGS_1495, 0, sizeof l_ARGS_1495);
l_ARGS_1495 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1496; memset(&l_Y_1496, 0, sizeof l_Y_1496);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1497; memset(&l_SAVED_Q_1497, 0, sizeof l_SAVED_Q_1497);
l_SAVED_Q_1497 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1498; memset(&l_X_1498, 0, sizeof l_X_1498);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1498 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1497;
if ((!(l_X_1498 == NULL)))
{
{
R27 * l_P_1499; memset(&l_P_1499, 0, sizeof l_P_1499);
l_P_1499 = l_X_1498;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1499))).f_NEXT == NULL)) goto L_end1500;
{
l_P_1499 = ((*(R27 *)rt_nil_check(l_P_1499))).f_NEXT;
}
RT_B_TICK();
} L_end1500: ;
((*(R27 *)rt_nil_check(l_P_1499))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1495))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1495))).f_NEXT = l_X_1498;
}
}
}
}
{
R27 * l_LAST_1501; memset(&l_LAST_1501, 0, sizeof l_LAST_1501);
l_LAST_1501 = l_ARGS_1495;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1501))).f_NEXT == NULL)) goto L_end1502;
{
l_LAST_1501 = ((*(R27 *)rt_nil_check(l_LAST_1501))).f_NEXT;
}
RT_B_TICK();
} L_end1502: ;
((*(R27 *)rt_nil_check(l_LAST_1501))).f_MODE = g_M_OUT;
l_Y_1496 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1495, p_LINE, 0);
if ((l_Y_1496 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1501))).f_MODE = g_M_INOUT;
l_Y_1496 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1495, p_LINE, 0);
}
}
if ((l_Y_1496 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1503 = r_CATS((r_CALL_SYM(l_Y_1496, l_ARGS_1495, p_LINE)).f_C, rt_str(";", 1));
return rv1503; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1504 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1504; }
}
}
{ R10 rv1505 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1505; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1506 = 1;
return rv1506; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1507 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1507; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1508; memset(&l_F_1508, 0, sizeof l_F_1508);
l_F_1508 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1508 == NULL)) goto L_end1509;
{
if ((((*(R24 *)rt_nil_check(l_F_1508))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1508))).f_T))
{
{ rt_int rv1510 = 1;
return rv1510; }
}
}
l_F_1508 = ((*(R24 *)rt_nil_check(l_F_1508))).f_NEXT;
}
RT_B_TICK();
} L_end1509: ;
}
}
{ rt_int rv1511 = 0;
return rv1511; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1512 = 0;
return rv1512; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1513 = 0;
return rv1513; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1514 = 0;
return rv1514; }
}
{ rt_int rv1515 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1515; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1516 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1516; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1517; memset(&l_D_1517, 0, sizeof l_D_1517);
S_R10(&l_D_1517, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1518; memset(&l_S_1518, 0, sizeof l_S_1518);
S_R10(&l_S_1518, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1519; memset(&l_I_1519, 0, sizeof l_I_1519);
S_R10(&l_I_1519, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1520; memset(&l_N_1520, 0, sizeof l_N_1520);
S_R10(&l_N_1520, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1521; memset(&l_VE_1521, 0, sizeof l_VE_1521);
l_VE_1521 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1522; memset(&l_R_1522, 0, sizeof l_R_1522);
S_R10(&l_R_1522, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1517, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1522, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1522, l_S_1518, p_RV), 0);
S_R10(&l_R_1522, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1522, l_N_1520, l_D_1517, l_D_1517), 0);
S_R10(&l_R_1522, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1522, l_S_1518, l_S_1518), 0);
S_R10(&l_R_1522, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1522, l_I_1519, l_N_1520, l_D_1517), 0);
S_R10(&l_R_1522, r_FMT2(rt_str("@@->hi);", 8), l_R_1522, l_D_1517), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1522, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1522, l_I_1519, l_I_1519, l_I_1519), 0);
S_R10(&l_R_1522, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1522, l_I_1519, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1518, l_I_1519), r_NO_TEXT())), 0);
}
S_R10(&l_R_1522, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1522, l_I_1519, l_I_1519, l_I_1519), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1522, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1522, l_I_1519, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1521, r_FMT2(rt_str("@->p[@]", 7), l_D_1517, l_I_1519), r_FMT2(rt_str("@.p[@]", 6), l_S_1518, l_I_1519), p_LINE)), 0);
}
else
{
S_R10(&l_R_1522, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1522, l_I_1519, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1517, l_I_1519), r_FMT2(rt_str("@.p[@]", 6), l_S_1518, l_I_1519))), 0);
}
{ R10 rv1523 = l_R_1522;
return rv1523; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1524; memset(&l_D_1524, 0, sizeof l_D_1524);
S_R10(&l_D_1524, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1525; memset(&l_S_1525, 0, sizeof l_S_1525);
S_R10(&l_S_1525, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1526; memset(&l_F_1526, 0, sizeof l_F_1526);
l_F_1526 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1527; memset(&l_R_1527, 0, sizeof l_R_1527);
S_R10(&l_R_1527, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1524, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1527, r_FMT3(rt_str("@@ = @;", 7), l_R_1527, l_S_1525, p_RV), 0);
for (;;) {
if ((l_F_1526 == NULL)) goto L_end1528;
{
{
R10 l_DF_1529; memset(&l_DF_1529, 0, sizeof l_DF_1529);
S_R10(&l_DF_1529, r_FMT2(rt_str("@->@", 4), l_D_1524, ((*(R24 *)rt_nil_check(l_F_1526))).f_CNAME), 0);
R10 l_SF_1530; memset(&l_SF_1530, 0, sizeof l_SF_1530);
S_R10(&l_SF_1530, r_FMT2(rt_str("@.@", 3), l_S_1525, ((*(R24 *)rt_nil_check(l_F_1526))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1526))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1526))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1527, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1527, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1526))).f_T, l_DF_1529, l_SF_1530)), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1526))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1527, r_FMT3(rt_str("@ @ = @;", 8), l_R_1527, l_DF_1529, l_SF_1530), 0);
}
else
{
S_R10(&l_R_1527, r_FMT2(rt_str("@ @", 3), l_R_1527, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1526))).f_T, ((*(R24 *)rt_nil_check(l_F_1526))).f_T, l_DF_1529, l_SF_1530, p_LINE)), 0);
}
}
l_F_1526 = ((*(R24 *)rt_nil_check(l_F_1526))).f_NEXT;
}
RT_B_TICK();
} L_end1528: ;
{ R10 rv1531 = r_CATS(l_R_1527, rt_str(" }", 2));
return rv1531; }
}
}
{ R10 rv1532 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1532; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1533; memset(&l_ARGS_1533, 0, sizeof l_ARGS_1533);
l_ARGS_1533 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1534; memset(&l_Y_1534, 0, sizeof l_Y_1534);
l_Y_1534 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1533, p_LINE);
if ((l_Y_1534 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1535 = (r_CALL_SYM(l_Y_1534, l_ARGS_1533, p_LINE)).f_C;
return rv1535; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1536; memset(&l_X_1536, 0, sizeof l_X_1536);
S_R10(&l_X_1536, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1537; memset(&l_Z_1537, 0, sizeof l_Z_1537);
S_R10(&l_Z_1537, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1538; memset(&l_I_1538, 0, sizeof l_I_1538);
S_R10(&l_I_1538, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1539; memset(&l_N_1539, 0, sizeof l_N_1539);
S_R10(&l_N_1539, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1540; memset(&l_R_1540, 0, sizeof l_R_1540);
S_R10(&l_R_1540, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1536, p_A, l_Z_1537), 0);
S_R10(&l_R_1540, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1540, p_B, l_I_1538, l_N_1539), 0);
S_R10(&l_R_1540, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1540, l_X_1536, l_X_1536, l_Z_1537), 0);
S_R10(&l_R_1540, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1540, l_Z_1537, l_I_1538, l_N_1539), 0);
S_R10(&l_R_1540, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1540, l_X_1536, l_X_1536), 0);
S_R10(&l_R_1540, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1540, l_I_1538, l_I_1538, l_I_1538), 0);
S_R10(&l_R_1540, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1540, l_I_1538, l_I_1538, l_I_1538), 0);
S_R10(&l_R_1540, r_FMT2(rt_str("@@;", 3), l_R_1540, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1536, l_I_1538), r_FMT2(rt_str("@.p[@]", 6), l_Z_1537, l_I_1538), p_LINE)), 0);
{ R10 rv1541 = r_FMT2(rt_str("@ @r; })", 8), l_R_1540, l_I_1538);
return rv1541; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1542; memset(&l_X_1542, 0, sizeof l_X_1542);
S_R10(&l_X_1542, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1543; memset(&l_Z_1543, 0, sizeof l_Z_1543);
S_R10(&l_Z_1543, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1544; memset(&l_F_1544, 0, sizeof l_F_1544);
l_F_1544 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1545; memset(&l_R_1545, 0, sizeof l_R_1545);
S_R10(&l_R_1545, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1542, p_A, l_Z_1543), 0);
R10 l_EQ_1546; memset(&l_EQ_1546, 0, sizeof l_EQ_1546);
S_R10(&l_EQ_1546, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1545, r_FMT2(rt_str("@@;", 3), l_R_1545, p_B), 0);
for (;;) {
if ((l_F_1544 == NULL)) goto L_end1547;
{
{
R10 l_C_1548; memset(&l_C_1548, 0, sizeof l_C_1548);
S_R10(&l_C_1548, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1544))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1542, ((*(R24 *)rt_nil_check(l_F_1544))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1543, ((*(R24 *)rt_nil_check(l_F_1544))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1544))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1546, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1546, r_VARIANT_COND(l_F_1544, p_T, l_X_1542), l_C_1548), 0);
}
else
{
S_R10(&l_EQ_1546, r_FMT2(rt_str("@ && @", 6), l_EQ_1546, l_C_1548), 0);
}
}
l_F_1544 = ((*(R24 *)rt_nil_check(l_F_1544))).f_NEXT;
}
RT_B_TICK();
} L_end1547: ;
{ R10 rv1549 = r_FMT2(rt_str("@ @; })", 7), l_R_1545, l_EQ_1546);
return rv1549; }
}
}
{ R10 rv1550 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1550; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1551; memset(&l_A_1551, 0, sizeof l_A_1551);
S_R26(&l_A_1551, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1552; memset(&l_T_1552, 0, sizeof l_T_1552);
l_T_1552 = (l_A_1551).f_T;
R10 l_OP_1553; memset(&l_OP_1553, 0, sizeof l_OP_1553);
S_R10(&l_OP_1553, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1552))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1553, 1), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1552))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1553, 1))))
{
{
R27 * l_ARGS_1554; memset(&l_ARGS_1554, 0, sizeof l_ARGS_1554);
l_ARGS_1554 = r_VAL_ARG(l_A_1551, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1555; memset(&l_Y_1555, 0, sizeof l_Y_1555);
l_Y_1555 = r_USER_OPERATOR(r_OP_NAME(l_OP_1553, 1), l_ARGS_1554, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1555 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1554))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1554))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1553, 1), l_ARGS_1554, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1553, 1));
}
}
if ((!(l_Y_1555 == NULL)))
{
{ R26 rv1556 = r_CALL_SYM(l_Y_1555, l_ARGS_1554, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1556; }
}
if ((((*(R22 *)rt_nil_check(l_T_1552))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1552));
}
}
}
if (r_TEQS(l_OP_1553, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1552))).f_KIND == g_T_BOOL))
{
{ R26 rv1557 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1551).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1557; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1552))).f_KIND == g_T_BITS))
{
{ R26 rv1558 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1551).f_C), l_T_1552);
return rv1558; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1552))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1553, rt_str("-", 1)))
{
{ R26 rv1559 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1551).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1552))).f_SCALE));
return rv1559; }
}
{ R26 rv1560 = r_MKET((l_A_1551).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1552))).f_SCALE));
return rv1560; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1552))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1561; memset(&l_FT_1561, 0, sizeof l_FT_1561);
l_FT_1561 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1552))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1553, rt_str("-", 1)))
{
{ R26 rv1562 = r_MKET(r_FLOAT_OP(l_OP_1553, r_MK(rt_str("0.0", 3)), (l_A_1551).f_C, l_FT_1561), l_FT_1561);
return rv1562; }
}
{ R26 rv1563 = r_MKET((l_A_1551).f_C, l_FT_1561);
return rv1563; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1552));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1564 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1564; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1565; memset(&l_OP_1565, 0, sizeof l_OP_1565);
S_R10(&l_OP_1565, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1566; memset(&l_A_1566, 0, sizeof l_A_1566);
R26 l_B_1567; memset(&l_B_1567, 0, sizeof l_B_1567);
if ((r_TEQS(l_OP_1565, rt_str("&", 1)) || r_TEQS(l_OP_1565, rt_str("!", 1))))
{
{
R23 l_MA_1568; memset(&l_MA_1568, 0, sizeof l_MA_1568);
S_R23(&l_MA_1568, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1569; memset(&l_CA_1569, 0, sizeof l_CA_1569);
S_R10(&l_CA_1569, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1570; memset(&l_CB_1570, 0, sizeof l_CB_1570);
S_R10(&l_CB_1570, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1565, rt_str("&", 1)))
{
{ R26 rv1571 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1569, l_CB_1570), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1571; }
}
{ R26 rv1572 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1569, l_CB_1570), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1572; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1567, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1566, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1567).f_T), 0);
}
else
{
S_R26(&l_A_1566, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1567, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1566).f_T), 0);
}
{ R26 rv1573 = r_APPLY_OPERATOR(p_E, l_OP_1565, l_A_1566, l_B_1567);
return rv1573; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1574; memset(&l_AT_1574, 0, sizeof l_AT_1574);
l_AT_1574 = (p_A).f_T;
R22 * l_BT_1575; memset(&l_BT_1575, 0, sizeof l_BT_1575);
l_BT_1575 = (p_B).f_T;
rt_int l_LINE_1576; memset(&l_LINE_1576, 0, sizeof l_LINE_1576);
l_LINE_1576 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1577; memset(&l_NAME_1577, 0, sizeof l_NAME_1577);
S_R10(&l_NAME_1577, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1577, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1577, (l_NAME_1577).f_LEN))), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1574))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1575))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1577, l_LINE_1576);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1577) || (((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1578; memset(&l_ARGS_1578, 0, sizeof l_ARGS_1578);
l_ARGS_1578 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1579; memset(&l_EXTRA_1579, 0, sizeof l_EXTRA_1579);
l_EXTRA_1579 = r_QUAL_ARGS(l_LINE_1576);
R12 * l_Y_1580; memset(&l_Y_1580, 0, sizeof l_Y_1580);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1579 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1579);
}
if ((!(l_EXTRA_1579 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1578))).f_NEXT))).f_NEXT = l_EXTRA_1579;
l_Y_1580 = r_USER_OPERATOR(l_NAME_1577, l_ARGS_1578, l_LINE_1576);
if ((!(l_Y_1580 == NULL)))
{
{ R26 rv1581 = r_CALL_SYM(l_Y_1580, l_ARGS_1578, l_LINE_1576);
return rv1581; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1578))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1577, l_ARGS_1578, l_LINE_1576) == NULL)))
{
r_FAILT(l_LINE_1576, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1577);
}
}
else
{
l_Y_1580 = r_USER_OPERATOR(l_NAME_1577, l_ARGS_1578, l_LINE_1576);
if ((!(l_Y_1580 == NULL)))
{
{ R26 rv1582 = r_CALL_SYM(l_Y_1580, l_ARGS_1578, l_LINE_1576);
return rv1582; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1583; memset(&l_Q_1583, 0, sizeof l_Q_1583);
l_Q_1583 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1578, l_LINE_1576);
if ((!(l_Q_1583 == NULL)))
{
{ R26 rv1584 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1583, l_ARGS_1578, l_LINE_1576)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1584; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1576, rt_str("no such operation for the abstract type: ", 41), l_NAME_1577);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1576, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1585 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1585; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1586 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1586; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_INT)))
{
{ R26 rv1587 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1587; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1588 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1588; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1574, l_BT_1575)))
{
if ((r_IS_UNORDERED(l_AT_1574) || r_IS_UNORDERED(l_BT_1575)))
{
r_FAIL(l_LINE_1576, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1589 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1589; }
}
r_FAILT(l_LINE_1576, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1574, l_BT_1575, l_LINE_1576);
{
R22 * l_T_1590; memset(&l_T_1590, 0, sizeof l_T_1590);
l_T_1590 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1590))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1574))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1575))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1590))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1574))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1575))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1590))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1590))).f_MLEN).f_V), 0);
}
{ R26 rv1591 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1590);
return rv1591; }
}
}
r_FAIL(l_LINE_1576, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_BITS)))
{
{ R26 rv1592 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1574);
return rv1592; }
}
r_FAILT(l_LINE_1576, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_INT)))
{
{ R26 rv1593 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1593; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1594; memset(&l_T_1594, 0, sizeof l_T_1594);
l_T_1594 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1574))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1575))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1595 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1594), l_T_1594);
return rv1595; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1576, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1576, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1576, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1574), (r_TYPE_NAME(l_AT_1574)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1596; memset(&l_RA_1596, 0, sizeof l_RA_1596);
l_RA_1596 = r_REAL_TYPE(p_A);
R22 * l_RB_1597; memset(&l_RB_1597, 0, sizeof l_RB_1597);
l_RB_1597 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1598 = 1;
return rv1598; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1599 = 0;
return rv1599; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1596))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1596))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1596))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1597))).f_MLEN).f_OK))
{
{ rt_int rv1600 = ((((*(R22 *)rt_nil_check(l_RA_1596))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1597))).f_MLEN).f_V);
return rv1600; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1596))).f_KIND == g_T_ARR))
{
{ rt_int rv1601 = (r_SAME_EXTENTS(l_RA_1596, l_RB_1597) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1596))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1597))).f_ELEM));
return rv1601; }
}
{ rt_int rv1602 = 1;
return rv1602; }
rt_raise(RT_X_INIT);
}
static R10 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R10 p_C) { RT_B_TICK(); 
R22 * l_A_1603; memset(&l_A_1603, 0, sizeof l_A_1603);
l_A_1603 = r_REAL_TYPE(p_RT);
R22 * l_B_1604; memset(&l_B_1604, 0, sizeof l_B_1604);
l_B_1604 = r_REAL_TYPE(p_VT);
R10 l_R_1605; memset(&l_R_1605, 0, sizeof l_R_1605);
S_R10(&l_R_1605, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1603))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1604))).f_KIND == g_T_REC))))
{
{ R10 rv1606 = p_C;
return rv1606; }
}
{
R24 * l_F_1607; memset(&l_F_1607, 0, sizeof l_F_1607);
l_F_1607 = ((*(R22 *)rt_nil_check(l_A_1603))).f_FIELDS;
R25 * l_P_1608; memset(&l_P_1608, 0, sizeof l_P_1608);
l_P_1608 = ((*(R22 *)rt_nil_check(l_A_1603))).f_ARGS;
R25 * l_Q_1609; memset(&l_Q_1609, 0, sizeof l_Q_1609);
l_Q_1609 = ((*(R22 *)rt_nil_check(l_B_1604))).f_ARGS;
for (;;) {
if ((((l_F_1607 == NULL) || (l_P_1608 == NULL)) || (l_Q_1609 == NULL))) goto L_end1610;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1607))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1608))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1608))) && (!r_IS_GEN_ARG(l_Q_1609))) && (!(((((*(R25 *)rt_nil_check(l_P_1608))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1609))).f_MLO).f_OK)))))
{
S_R10(&l_R_1605, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1605, ((*(R24 *)rt_nil_check(l_F_1607))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1608))).f_LO), 0);
}
l_P_1608 = ((*(R25 *)rt_nil_check(l_P_1608))).f_NEXT;
l_Q_1609 = ((*(R25 *)rt_nil_check(l_Q_1609))).f_NEXT;
}
l_F_1607 = ((*(R24 *)rt_nil_check(l_F_1607))).f_NEXT;
}
RT_B_TICK();
} L_end1610: ;
}
if (((l_R_1605).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1611 = p_C;
return rv1611; }
}
{ R10 rv1612 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1605);
return rv1612; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1613; memset(&l_P_1613, 0, sizeof l_P_1613);
l_P_1613 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1614; memset(&l_Q_1614, 0, sizeof l_Q_1614);
l_Q_1614 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1613 == NULL) || (l_Q_1614 == NULL))) goto L_end1615;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1613))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1613))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1614))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1614))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1613))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1613))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1614))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1614))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1613))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1613))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1614))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1614))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1616 = 0;
return rv1616; }
}
}
l_P_1613 = ((*(R25 *)rt_nil_check(l_P_1613))).f_NEXT;
l_Q_1614 = ((*(R25 *)rt_nil_check(l_Q_1614))).f_NEXT;
}
RT_B_TICK();
} L_end1615: ;
{ rt_int rv1617 = 1;
return rv1617; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1618 = 0;
return rv1618; }
}
{ rt_int rv1619 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1619; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1620; memset(&l_T_1620, 0, sizeof l_T_1620);
l_T_1620 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1620))).f_SCALE = p_P;
{ R22 * rv1621 = l_T_1620;
return rv1621; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1622 = r_MK(rt_str("1", 1));
return rv1622; }
}
{ R10 rv1623 = r_MK(rt_str("0", 1));
return rv1623; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1624 = r_MK(rt_str("1", 1));
return rv1624; }
}
}
{ R10 rv1625 = r_MK(rt_str("0", 1));
return rv1625; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1626 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1626; }
}
}
{ rt_int rv1627 = ((rt_int)0LL);
return rv1627; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1628 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1628; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1629 = r_MK(rt_str("and", 3));
return rv1629; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1630 = r_MK(rt_str("or", 2));
return rv1630; }
}
{ R10 rv1631 = r_MK(rt_str("xor", 3));
return rv1631; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1632 = p_A;
return rv1632; }
}
{ rt_int rv1633 = p_B;
return rv1633; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1634 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1634; }
}
{ R10 rv1635 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1635; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1636; memset(&l_AT_1636, 0, sizeof l_AT_1636);
l_AT_1636 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1637; memset(&l_BT_1637, 0, sizeof l_BT_1637);
l_BT_1637 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1638; memset(&l_R_1638, 0, sizeof l_R_1638);
if (((((*(R22 *)rt_nil_check(l_AT_1636))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1637))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1636))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1637))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1636))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1637))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1638, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1636))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1637))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1638, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1636, l_BT_1637)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1636))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1636, l_BT_1637, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1636))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1636) || r_HAS_ANY(l_BT_1637)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1636))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1636, l_BT_1637)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1636))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1636))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1637))).f_ARGS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1636))
{
S_R10(&l_R_1638, r_COMPONENT_EQUAL(l_AT_1636, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1638, r_EQUAL_CODE(l_AT_1636, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1638, r_FMT1(rt_str("(!@)", 4), l_R_1638), 0);
}
{ R26 rv1639 = r_MKET(l_R_1638, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1639; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1640; memset(&l_S1_1640, 0, sizeof l_S1_1640);
l_S1_1640 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1641; memset(&l_S2_1641, 0, sizeof l_S2_1641);
l_S2_1641 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1642; memset(&l_S_1642, 0, sizeof l_S_1642);
l_S_1642 = r_MAX_INT(l_S1_1640, l_S2_1641);
R10 l_FN_1643; memset(&l_FN_1643, 0, sizeof l_FN_1643);
S_R10(&l_FN_1643, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1643, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1644 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1643, r_RESCALE_C((p_A).f_C, l_S1_1640, l_S_1642), r_RESCALE_C((p_B).f_C, l_S2_1641, l_S_1642)), r_INT_TYPE(l_S_1642));
return rv1644; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1645 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1640, l_S2_1641)));
return rv1645; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1646 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1640, l_S2_1641)));
return rv1646; }
}
{ R26 rv1647 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1640, l_S2_1641)));
return rv1647; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1648 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1640));
return rv1648; }
}
{ R26 rv1649 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1640));
return rv1649; }
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
rt_int l_S1_1650; memset(&l_S1_1650, 0, sizeof l_S1_1650);
l_S1_1650 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1651; memset(&l_S2_1651, 0, sizeof l_S2_1651);
l_S2_1651 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1652; memset(&l_RND_1652, 0, sizeof l_RND_1652);
S_R10(&l_RND_1652, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1653 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1653; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1652, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1654 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1654; }
}
{
R23 l_SM_1655; memset(&l_SM_1655, 0, sizeof l_SM_1655);
S_R23(&l_SM_1655, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1656; memset(&l_S_1656, 0, sizeof l_S_1656);
l_S_1656 = (l_SM_1655).f_V;
rt_int l_SR_1657; memset(&l_SR_1657, 0, sizeof l_SR_1657);
l_SR_1657 = r_MAX_INT(l_S1_1650, l_S2_1651);
if ((!(l_SM_1655).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1658 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1656, l_S1_1650), l_S2_1651)), l_RND_1652), r_INT_TYPE(l_S_1656));
return rv1658; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1659 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1656, l_S1_1650), l_S2_1651)), l_RND_1652), r_INT_TYPE(l_S_1656));
return rv1659; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1660 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1650), r_NUM(l_S_1656), l_RND_1652), r_INT_TYPE(l_S_1656));
return rv1660; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1661; memset(&l_SUB_1661, 0, sizeof l_SUB_1661);
S_R10(&l_SUB_1661, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1661, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1662 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1650), (p_B).f_C, r_NUM(l_S2_1651)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1656), l_SUB_1661, l_RND_1652)), r_INT_TYPE(l_S_1656));
return rv1662; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1663; memset(&l_V_1663, 0, sizeof l_V_1663);
S_R26(&l_V_1663, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1664; memset(&l_T_1664, 0, sizeof l_T_1664);
l_T_1664 = r_REAL_TYPE((l_V_1663).f_T);
R21 * l_R_1665; memset(&l_R_1665, 0, sizeof l_R_1665);
l_R_1665 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1666; memset(&l_TMP_1666, 0, sizeof l_TMP_1666);
S_R10(&l_TMP_1666, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1667; memset(&l_LO_1667, 0, sizeof l_LO_1667);
R26 l_HI_1668; memset(&l_HI_1668, 0, sizeof l_HI_1668);
R10 l_LOC_1669; memset(&l_LOC_1669, 0, sizeof l_LOC_1669);
R10 l_HIC_1670; memset(&l_HIC_1670, 0, sizeof l_HIC_1670);
R10 l_LO_OP_1671; memset(&l_LO_OP_1671, 0, sizeof l_LO_OP_1671);
S_R10(&l_LO_OP_1671, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1672; memset(&l_HI_OP_1672, 0, sizeof l_HI_OP_1672);
S_R10(&l_HI_OP_1672, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1667, r_EXPR(((*(R21 *)rt_nil_check(l_R_1665))).f_A, l_T_1664), 0);
S_R26(&l_HI_1668, r_EXPR(((*(R21 *)rt_nil_check(l_R_1665))).f_B, l_T_1664), 0);
if (r_IS_UNORDERED(l_T_1664))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1664))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1664))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1664))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1667).f_T), l_T_1664)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1668).f_T), l_T_1664))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1665))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1665))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1671, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1665))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1672, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1664))).f_KIND == g_T_INT))
{
{
R26 l_X_1673; memset(&l_X_1673, 0, sizeof l_X_1673);
S_R26(&l_X_1673, r_MKET(l_TMP_1666, (l_V_1663).f_T), 0);
S_R10(&l_LOC_1669, r_FIXED_COMPARE(l_LO_1667, l_X_1673, l_LO_OP_1671), 0);
S_R10(&l_HIC_1670, r_FIXED_COMPARE(l_X_1673, l_HI_1668, l_HI_OP_1672), 0);
}
}
else
{
S_R10(&l_LOC_1669, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1667).f_C, l_LO_OP_1671, l_TMP_1666), 0);
S_R10(&l_HIC_1670, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1666, l_HI_OP_1672, (l_HI_1668).f_C), 0);
}
{ R26 rv1674 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1664), l_TMP_1666, (l_V_1663).f_C, l_LOC_1669), r_FMT1(rt_str("@; })", 5), l_HIC_1670)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1674; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1675 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1675; }
}
{ R10 rv1676 = (p_V).f_C;
return rv1676; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1677 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1677; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1678; memset(&l_B_1678, 0, sizeof l_B_1678);
l_B_1678 = ((rt_int)0LL);
rt_int l_P_1679; memset(&l_P_1679, 0, sizeof l_P_1679);
l_P_1679 = ((rt_int)1LL);
for (;;) {
if ((l_P_1679 >= p_N)) goto L_end1680;
{
l_B_1678 = rt_add(l_B_1678, ((rt_int)1LL));
l_P_1679 = rt_mul(l_P_1679, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1680: ;
{ rt_int rv1681 = l_B_1678;
return rv1681; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1682; memset(&l_M_1682, 0, sizeof l_M_1682);
S_R23(&l_M_1682, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1682).f_OK)
{
{ rt_int rv1683 = (l_M_1682).f_V;
return rv1683; }
}
}
}
}
{ rt_int rv1684 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1684; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1685 = ((rt_int)100000000LL);
return rv1685; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1686 = ((rt_int)15LL);
return rv1686; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1687 = ((rt_int)7LL);
return rv1687; }
}
{ rt_int rv1688 = ((rt_int)15LL);
return rv1688; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1689; memset(&l_SINGLE_1689, 0, sizeof l_SINGLE_1689);
l_SINGLE_1689 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1689)
{
{ rt_int rv1690 = rt_neg(((rt_int)125LL));
return rv1690; }
}
{ rt_int rv1691 = rt_neg(((rt_int)1021LL));
return rv1691; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1689)
{
{ rt_int rv1692 = ((rt_int)128LL);
return rv1692; }
}
{ rt_int rv1693 = ((rt_int)1024LL);
return rv1693; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1689)
{
{ rt_int rv1694 = ((rt_int)25LL);
return rv1694; }
}
{ rt_int rv1695 = ((rt_int)54LL);
return rv1695; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1689)
{
{ rt_int rv1696 = ((rt_int)8LL);
return rv1696; }
}
{ rt_int rv1697 = ((rt_int)11LL);
return rv1697; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1689)
{
{ rt_int rv1698 = ((rt_int)32LL);
return rv1698; }
}
{ rt_int rv1699 = ((rt_int)64LL);
return rv1699; }
}
{ rt_int rv1700 = ((rt_int)0LL);
return rv1700; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1701; memset(&l_K_1701, 0, sizeof l_K_1701);
l_K_1701 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1701 == g_T_ABS))
{
{ R23 rv1702 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1702; }
}
else if ((l_K_1701 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1703 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1703; }
}
}
{ R23 rv1704 = r_SOME(((rt_int)64LL));
return rv1704; }
}
else if ((l_K_1701 == g_T_FLOAT))
{
{ R23 rv1705 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1705; }
}
else if ((l_K_1701 == g_T_BOOL))
{
{ R23 rv1706 = r_SOME(((rt_int)1LL));
return rv1706; }
}
else if ((l_K_1701 == g_T_ENUM))
{
{ R23 rv1707 = r_SOME(r_ENUM_SIZE(p_T));
return rv1707; }
}
else if ((l_K_1701 == g_T_BITS))
{
{ R23 rv1708 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1708; }
}
else if ((l_K_1701 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1709 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1709; }
}
}
else if (((l_K_1701 == g_T_PTR) || (l_K_1701 == g_T_SEM)))
{
{ R23 rv1710 = r_SOME(((rt_int)64LL));
return rv1710; }
}
{ R23 rv1711 = r_NO_MVAL();
return rv1711; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1712; memset(&l_T_1712, 0, sizeof l_T_1712);
l_T_1712 = (p_B).f_T;
rt_int l_K_1713; memset(&l_K_1713, 0, sizeof l_K_1713);
l_K_1713 = ((*(R22 *)rt_nil_check(l_T_1712))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1714 = r_SIZE_OF(l_T_1712, (p_B).f_C);
return rv1714; }
}
if ((l_K_1713 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1715 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE);
return rv1715; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1716 = r_INT_ET(((rt_int)2LL));
return rv1716; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1717 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1717; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1712))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1712))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1712))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1712))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1712))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv1718 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1718; }
}
}
}
}
{ R26 rv1719 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1719; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1720 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE));
return rv1720; }
}
{ R26 rv1721 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE));
return rv1721; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1712))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1722 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1712))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE));
return rv1722; }
}
{ R26 rv1723 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE));
return rv1723; }
}
}
else if ((l_K_1713 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1724 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE);
return rv1724; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1725 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE));
return rv1725; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1726 = r_INT_ET(((rt_int)2LL));
return rv1726; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1727 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE, p_NAME));
return rv1727; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1728; memset(&l_MT_1728, 0, sizeof l_MT_1728);
l_MT_1728 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE));
R10 l_C_1729; memset(&l_C_1729, 0, sizeof l_C_1729);
S_R10(&l_C_1729, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1729, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1730 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C, (p_B).f_SELF), l_MT_1728);
return rv1730; }
}
{ R26 rv1731 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1729), l_MT_1728);
return rv1731; }
}
if (((((*(R22 *)rt_nil_check(l_T_1712))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1732 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1712))).f_HI_C, (p_B).f_SELF), l_MT_1728);
return rv1732; }
}
{ R26 rv1733 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1729), l_MT_1728);
return rv1733; }
}
}
}
else if ((l_K_1713 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1734 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1712))).f_BASE);
return rv1734; }
}
{ R26 rv1735 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1712))).f_BASE);
return rv1735; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1712))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1736 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1712))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1712))).f_BASE);
return rv1736; }
}
{ R26 rv1737 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1712))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1712))).f_BASE);
return rv1737; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1738 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1712))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1712))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1712))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1738; }
}
{ R26 rv1739 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1712))).f_BASE))).f_NLITS);
return rv1739; }
}
}
else if (((l_K_1713 == g_T_STR) || (l_K_1713 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1740 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1740; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1741 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1741; }
}
}
else if ((l_K_1713 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1742 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1712))).f_DIMS);
return rv1742; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1743 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1743; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1744 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1744; }
}
}
else if ((l_K_1713 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1712))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1745 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1745; }
}
{ R26 rv1746 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1746; }
}
}
else if (((l_K_1713 == g_T_ABS) || (l_K_1713 == g_T_REC)))
{
{
R22 * l_U_1747; memset(&l_U_1747, 0, sizeof l_U_1747);
l_U_1747 = l_T_1712;
if ((l_K_1713 == g_T_ABS))
{
l_U_1747 = ((*(R22 *)rt_nil_check(l_T_1712))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1747))).f_KIND == g_T_REC))
{
{
R24 * l_F_1748; memset(&l_F_1748, 0, sizeof l_F_1748);
l_F_1748 = r_FIND_FIELD(l_U_1747, p_NAME);
if ((!(l_F_1748 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1748))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1749 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1748))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1748))).f_T);
return rv1749; }
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
R22 * l_T_1750; memset(&l_T_1750, 0, sizeof l_T_1750);
l_T_1750 = r_REAL_TYPE((p_B).f_T);
R10 l_D_1751; memset(&l_D_1751, 0, sizeof l_D_1751);
S_R10(&l_D_1751, r_NUM(((*(R22 *)rt_nil_check(l_T_1750))).f_DIMS), 0);
R10 l_X_1752; memset(&l_X_1752, 0, sizeof l_X_1752);
S_R10(&l_X_1752, r_NEW_NAME(rt_str("sx", 2)), 0);
R10 l_R_1753; memset(&l_R_1753, 0, sizeof l_R_1753);
S_R10(&l_R_1753, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1754; memset(&l_ELEM_1754, 0, sizeof l_ELEM_1754);
l_ELEM_1754 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R10 l_C_1755; memset(&l_C_1755, 0, sizeof l_C_1755);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R21 * l_TS_1756; memset(&l_TS_1756, 0, sizeof l_TS_1756);
l_TS_1756 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_TS_1756))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R21 *)rt_nil_check(l_TS_1756))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_TS_1756))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1754 = r_RESOLVE(l_TS_1756);
}
}
{
R22 * l_A_1757; memset(&l_A_1757, 0, sizeof l_A_1757);
l_A_1757 = r_ARRAY_OF(l_ELEM_1754, ((rt_int)1LL));
S_R10(&l_C_1755, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1750), l_X_1752, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1757))).f_CNAME), 0);
S_R10(&l_C_1755, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1755, l_R_1753, l_R_1753, l_R_1753), 0);
S_R10(&l_C_1755, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1755, l_R_1753, l_R_1753, l_D_1751), 0);
S_R10(&l_C_1755, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1755, l_R_1753, l_D_1751, l_R_1753), 0);
S_R10(&l_C_1755, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1755, l_D_1751), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R10(&l_C_1755, r_FMT2(rt_str("@ @", 3), l_C_1755, r_INIT_CODE(l_ELEM_1754, r_FMT1(rt_str("@.p[i]", 6), l_R_1753))), 0);
S_R10(&l_C_1755, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1755, l_R_1753, l_X_1752, l_R_1753), 0);
S_R10(&l_C_1755, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1755, l_X_1752), 0);
}
else
{
S_R10(&l_C_1755, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1755, l_R_1753, l_X_1752, l_X_1752), 0);
S_R10(&l_C_1755, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1755, l_X_1752, l_X_1752, l_X_1752), 0);
}
{ R26 rv1758 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1755, l_R_1753), l_A_1757);
return rv1758; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1759; memset(&l_N_1759, 0, sizeof l_N_1759);
l_N_1759 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1759))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1760 = l_N_1759;
return rv1760; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1761; memset(&l_K_1761, 0, sizeof l_K_1761);
l_K_1761 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1761 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1762 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1762; }
}
}
{ R26 rv1763 = r_INT_ET(((rt_int)64LL));
return rv1763; }
}
else if ((l_K_1761 == g_T_FLOAT))
{
{ R26 rv1764 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1764; }
}
else if ((l_K_1761 == g_T_BOOL))
{
{ R26 rv1765 = r_INT_ET(((rt_int)1LL));
return rv1765; }
}
else if ((l_K_1761 == g_T_ENUM))
{
{ R26 rv1766 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1766; }
}
else if ((l_K_1761 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1767 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1767; }
}
{ R26 rv1768 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1768; }
}
else if ((l_K_1761 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1769 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1769; }
}
{ R26 rv1770 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1770; }
}
else if (((l_K_1761 == g_T_PTR) || (l_K_1761 == g_T_SEM)))
{
{ R26 rv1771 = r_INT_ET(((rt_int)64LL));
return rv1771; }
}
else if ((l_K_1761 == g_T_ABS))
{
{ R26 rv1772 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1772; }
}
else if ((l_K_1761 == g_T_ARR))
{
{ R26 rv1773 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1773; }
}
{ R26 rv1774 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1774; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1775 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1775; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1776 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1776; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1777; memset(&l_RT_1777, 0, sizeof l_RT_1777);
l_RT_1777 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1777))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1777))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1778; memset(&l_TMP_1778, 0, sizeof l_TMP_1778);
S_R10(&l_TMP_1778, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1779; memset(&l_C_1779, 0, sizeof l_C_1779);
S_R10(&l_C_1779, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1778, l_TMP_1778, l_TMP_1778), 0);
S_R10(&l_C_1779, r_FMT3(rt_str("@@ @; })", 8), l_C_1779, r_INIT_CODE(l_RT_1777, l_TMP_1778), l_TMP_1778), 0);
{ R26 rv1780 = r_MKET(l_C_1779, p_T);
return rv1780; }
}
}
{ R26 rv1781 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1781; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1782 = 0;
return rv1782; }
}
{
R12 * l_Y_1783; memset(&l_Y_1783, 0, sizeof l_Y_1783);
l_Y_1783 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1783 == NULL))
{
{ rt_int rv1784 = 0;
return rv1784; }
}
{ rt_int rv1785 = (((*(R12 *)rt_nil_check(l_Y_1783))).f_KIND == g_Y_TYPE);
return rv1785; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1786 = r_INT_ET(((rt_int)100000000LL));
return rv1786; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1787 = r_INT_ET(((rt_int)15LL));
return rv1787; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1788 = r_INT_ET(((rt_int)0LL));
return rv1788; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1789; memset(&l_T_1789, 0, sizeof l_T_1789);
l_T_1789 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1789 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1789 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1789 = r_REAL_TYPE(l_T_1789);
if ((!(((*(R22 *)rt_nil_check(l_T_1789))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1789))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1790; memset(&l_TMP_1790, 0, sizeof l_TMP_1790);
S_R10(&l_TMP_1790, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1791; memset(&l_R_1791, 0, sizeof l_R_1791);
S_R10(&l_R_1791, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1789))).f_CNAME, l_TMP_1790, l_TMP_1790, l_TMP_1790), 0);
R24 * l_F_1792; memset(&l_F_1792, 0, sizeof l_F_1792);
l_F_1792 = ((*(R22 *)rt_nil_check(l_T_1789))).f_FIELDS;
S_R10(&l_R_1791, r_FMT2(rt_str("@@", 2), l_R_1791, r_INIT_CODE(l_T_1789, l_TMP_1790)), 0);
for (;;) {
if ((l_F_1792 == NULL)) goto L_end1793;
{
if ((((*(R24 *)rt_nil_check(l_F_1792))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1792))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1792))).f_LABELS, (r_TAG_VALUE(l_T_1789, ((*(R24 *)rt_nil_check(l_F_1792))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1789, ((*(R24 *)rt_nil_check(l_F_1792))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1794; memset(&l_INIT_1794, 0, sizeof l_INIT_1794);
l_INIT_1794 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1792))).f_NAME);
if ((l_INIT_1794 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1792))).f_NAME);
}
S_R10(&l_R_1791, r_FMT2(rt_str("@ @", 3), l_R_1791, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1792))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1790, ((*(R24 *)rt_nil_check(l_F_1792))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1794))).f_A, ((*(R24 *)rt_nil_check(l_F_1792))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1794))).f_LINE, l_TMP_1790)), 0);
}
}
}
l_F_1792 = ((*(R24 *)rt_nil_check(l_F_1792))).f_NEXT;
}
RT_B_TICK();
} L_end1793: ;
{
R21 * l_P_1795; memset(&l_P_1795, 0, sizeof l_P_1795);
l_P_1795 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1795 == NULL)) goto L_end1796;
{
{
R24 * l_G_1797; memset(&l_G_1797, 0, sizeof l_G_1797);
l_G_1797 = r_FIND_VFIELD(l_T_1789, ((*(R21 *)rt_nil_check(l_P_1795))).f_NAME);
if ((l_G_1797 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1795))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1795))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1797))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1795))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1795))).f_NAME);
}
r_CHECK_VARIANT(l_G_1797, l_T_1789, NULL, ((*(R21 *)rt_nil_check(l_P_1795))).f_LINE);
}
l_P_1795 = ((*(R21 *)rt_nil_check(l_P_1795))).f_NEXT;
}
RT_B_TICK();
} L_end1796: ;
}
{ R26 rv1798 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1791, l_TMP_1790), l_T_1789);
return rv1798; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1799; memset(&l_P_1799, 0, sizeof l_P_1799);
l_P_1799 = p_L;
for (;;) {
if ((l_P_1799 == NULL)) goto L_end1800;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1799))).f_NAME, p_NAME))
{
{ R21 * rv1801 = l_P_1799;
return rv1801; }
}
l_P_1799 = ((*(R21 *)rt_nil_check(l_P_1799))).f_NEXT;
}
RT_B_TICK();
} L_end1800: ;
{ R21 * rv1802 = NULL;
return rv1802; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1803; memset(&l_DIMS_1803, 0, sizeof l_DIMS_1803);
l_DIMS_1803 = ((rt_int)0LL);
R21 * l_P_1804; memset(&l_P_1804, 0, sizeof l_P_1804);
l_P_1804 = p_E;
R22 * l_ELEM_1805; memset(&l_ELEM_1805, 0, sizeof l_ELEM_1805);
l_ELEM_1805 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1804))).f_KIND == g_N_ARRCONS))) goto L_end1806;
{
l_DIMS_1803 = rt_add(l_DIMS_1803, ((rt_int)1LL));
l_P_1804 = ((*(R21 *)rt_nil_check(l_P_1804))).f_A;
}
RT_B_TICK();
} L_end1806: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1805 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1805 == NULL))
{
l_ELEM_1805 = (r_EXPR(l_P_1804, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1805))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1805))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1805 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1803);
{
R22 * l_A_1807; memset(&l_A_1807, 0, sizeof l_A_1807);
l_A_1807 = r_ARRAY_OF(l_ELEM_1805, l_DIMS_1803);
R10 l_TMP_1808; memset(&l_TMP_1808, 0, sizeof l_TMP_1808);
S_R10(&l_TMP_1808, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1809; memset(&l_R_1809, 0, sizeof l_R_1809);
S_R10(&l_R_1809, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1807))).f_CNAME, l_TMP_1808, l_TMP_1808), 0);
rt_int l_K_1810; memset(&l_K_1810, 0, sizeof l_K_1810);
l_K_1810 = ((rt_int)0LL);
{
R21 * l_Q_1811; memset(&l_Q_1811, 0, sizeof l_Q_1811);
l_Q_1811 = p_E;
R25 * l_TAIL_1812; memset(&l_TAIL_1812, 0, sizeof l_TAIL_1812);
l_TAIL_1812 = NULL;
{ rt_int it1814_lo = ((rt_int)1LL), it1814_hi = l_DIMS_1803;
for (rt_int it1814 = it1814_lo; it1814 <= it1814_hi; it1814++) {
{
{
R25 * l_B_1815; memset(&l_B_1815, 0, sizeof l_B_1815);
l_B_1815 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_1816; memset(&l_N_1816, 0, sizeof l_N_1816);
l_N_1816 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_Q_1811))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1815)), ({ R25 rc1817; memset(&rc1817, 0, sizeof rc1817);  S_R10(&rc1817.f_LO, r_MK(rt_str("0", 1)), 0); S_R10(&rc1817.f_HI, r_NUM(rt_sub(l_N_1816, ((rt_int)1LL))), 0); S_R23(&rc1817.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc1817.f_MHI, r_SOME(rt_sub(l_N_1816, ((rt_int)1LL))), 0); rc1817.f_ANYARG = 0; rc1817.f_NEXT = NULL; rc1817; }), 0);
if ((l_TAIL_1812 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1807))).f_BOUNDS = l_B_1815;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1812))).f_NEXT = l_B_1815;
}
l_TAIL_1812 = l_B_1815;
}
l_Q_1811 = ((*(R21 *)rt_nil_check(l_Q_1811))).f_A;
}
RT_B_TICK();
if (it1814 == it1814_hi) break;
} } L_end1813: ;
}
S_R10(&l_R_1809, r_FMT2(rt_str("@@); ", 5), l_R_1809, l_TMP_1808), 0);
l_P_1804 = p_E;
{ rt_int it1819_lo = ((rt_int)0LL), it1819_hi = rt_sub(l_DIMS_1803, ((rt_int)1LL));
for (rt_int it1819 = it1819_lo; it1819 <= it1819_hi; it1819++) {
{
S_R10(&l_R_1809, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1809, l_TMP_1808, r_NUM(it1819), l_TMP_1808), 0);
S_R10(&l_R_1809, r_FMT3(rt_str("@@] = @;", 8), l_R_1809, r_NUM(it1819), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1804))).f_A), ((rt_int)1LL)))), 0);
l_P_1804 = ((*(R21 *)rt_nil_check(l_P_1804))).f_A;
}
RT_B_TICK();
if (it1819 == it1819_hi) break;
} } L_end1818: ;
S_R10(&l_R_1809, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1809, l_TMP_1808, l_TMP_1808, r_NUM(l_DIMS_1803)), 0);
S_R10(&l_R_1809, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1809, l_TMP_1808, l_TMP_1808), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1803, l_A_1807, l_TMP_1808, &l_R_1809, &l_K_1810);
{ R26 rv1820 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1809, l_TMP_1808), l_A_1807);
return rv1820; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R21 * l_P_1821; memset(&l_P_1821, 0, sizeof l_P_1821);
l_P_1821 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_1821 == NULL)) goto L_end1822;
{
if (((!(((*(R21 *)rt_nil_check(l_P_1821))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_1821, ((*(R21 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_1821, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_1821 = ((*(R21 *)rt_nil_check(l_P_1821))).f_NEXT;
}
RT_B_TICK();
} L_end1822: ;
}
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv1823 = ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv1823; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv1824 = 0;
return rv1824; }
}
{ rt_int rv1825 = r_SAME_SHAPE(((*(R21 *)rt_nil_check(p_A))).f_A, ((*(R21 *)rt_nil_check(p_B))).f_A);
return rv1825; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1826; memset(&l_P_1826, 0, sizeof l_P_1826);
l_P_1826 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1826 == NULL)) goto L_end1827;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1826, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1826))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1826))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1826, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1826))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1826 = ((*(R21 *)rt_nil_check(l_P_1826))).f_NEXT;
}
RT_B_TICK();
} L_end1827: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1828; memset(&l_T_1828, 0, sizeof l_T_1828);
l_T_1828 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1828))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1828))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1828))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1829 = l_T_1828;
return rv1829; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1830; memset(&l_T_1830, 0, sizeof l_T_1830);
l_T_1830 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1831; memset(&l_V_1831, 0, sizeof l_V_1831);
S_R26(&l_V_1831, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1830), 0);
R22 * l_RT_1832; memset(&l_RT_1832, 0, sizeof l_RT_1832);
l_RT_1832 = r_REAL_TYPE(l_T_1830);
if (((((*(R22 *)rt_nil_check((l_V_1831).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1832))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1832))).f_KIND == g_T_INT))
{
{ R26 rv1833 = r_MKET(r_RANGE_CHECK(l_RT_1832, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1831).f_C), r_NO_TEXT()), l_T_1830);
return rv1833; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1832))).f_KIND == g_T_BOOL))
{
{ R26 rv1834 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1831).f_C), l_T_1830);
return rv1834; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1832))).f_KIND == g_T_ENUM))
{
{ R26 rv1835 = r_MKET(r_ENUM_OF_BITS(l_RT_1832, (l_V_1831).f_C), l_T_1830);
return rv1835; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1832))).f_KIND == g_T_FLOAT))
{
{ R26 rv1836 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1831).f_C), l_T_1830);
return rv1836; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1832))).f_KIND == g_T_STR))
{
{ R26 rv1837 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1831).f_C), l_T_1830);
return rv1837; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1838; memset(&l_C_1838, 0, sizeof l_C_1838);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1838, r_CONVERT(l_V_1831, l_T_1830, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1832))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1832))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1832))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1832))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1831).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1838, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1838, ((*(R22 *)rt_nil_check(l_RT_1832))).f_LEN_C), 0);
}
{ R26 rv1839 = r_MKET(l_C_1838, l_T_1830);
return rv1839; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1840 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1840; }
}
}
{ R10 rv1841 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1841; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1842; memset(&l_NAME_1842, 0, sizeof l_NAME_1842);
S_R10(&l_NAME_1842, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1843; memset(&l_L_1843, 0, sizeof l_L_1843);
l_L_1843 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1844; memset(&l_R_1844, 0, sizeof l_R_1844);
S_R10(&l_R_1844, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1843 == NULL)) goto L_end1845;
{
{
R21 * l_V_1846; memset(&l_V_1846, 0, sizeof l_V_1846);
l_V_1846 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1847; memset(&l_FOUND_1847, 0, sizeof l_FOUND_1847);
l_FOUND_1847 = 0;
for (;;) {
if ((l_V_1846 == NULL)) goto L_end1848;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1846))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1843))).f_NAME))
{
S_R10(&l_R_1844, r_FMT2(rt_str("@@, ", 4), l_R_1844, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1846))).f_A, NULL)).f_C), 0);
l_FOUND_1847 = 1;
}
l_V_1846 = ((*(R21 *)rt_nil_check(l_V_1846))).f_NEXT;
}
RT_B_TICK();
} L_end1848: ;
if ((!l_FOUND_1847))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1843))).f_NAME);
}
}
l_L_1843 = ((*(R21 *)rt_nil_check(l_L_1843))).f_NEXT;
}
RT_B_TICK();
} L_end1845: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1842, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1844, l_NAME_1842, l_NAME_1842));
{ R10 rv1849 = r_FMT2(rt_str("@, @", 4), l_NAME_1842, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1849; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1850; memset(&l_SEM_1850, 0, sizeof l_SEM_1850);
l_SEM_1850 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1850 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1850)
{
{
R22 * l_T_1851; memset(&l_T_1851, 0, sizeof l_T_1851);
l_T_1851 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1851 = p_WANT;
}
}
{ R26 rv1852 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1851))).f_SCALE)), l_T_1851);
return rv1852; }
}
}
{
R22 * l_T_1853; memset(&l_T_1853, 0, sizeof l_T_1853);
l_T_1853 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1854; memset(&l_P_1854, 0, sizeof l_P_1854);
l_P_1854 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1854))).f_TARGET = l_T_1853;
((*(R22 *)rt_nil_check(l_P_1854))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1853))
{
{ R26 rv1855 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1853), r_INIT_CODE(l_T_1853, r_MK(rt_str("(*p)", 4)))), l_P_1854);
return rv1855; }
}
{ R26 rv1856 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_1853), r_CTYPE(l_T_1853)), l_P_1854);
return rv1856; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1857; memset(&l_P_1857, 0, sizeof l_P_1857);
l_P_1857 = p_L;
{ rt_int it1859_lo = ((rt_int)1LL), it1859_hi = p_K;
for (rt_int it1859 = it1859_lo; it1859 <= it1859_hi; it1859++) {
{
if ((!(l_P_1857 == NULL)))
{
l_P_1857 = ((*(R21 *)rt_nil_check(l_P_1857))).f_NEXT;
}
}
RT_B_TICK();
if (it1859 == it1859_hi) break;
} } L_end1858: ;
{ R21 * rv1860 = l_P_1857;
return rv1860; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1861; memset(&l_N_1861, 0, sizeof l_N_1861);
l_N_1861 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1861 < p_LO) || (l_N_1861 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1862; memset(&l_L_1862, 0, sizeof l_L_1862);
l_L_1862 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1862 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1862))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1862))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1862))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1863 = r_MK(rt_str("1", 1));
return rv1863; }
}
{ R10 rv1864 = r_MK(rt_str("0", 1));
return rv1864; }
}
if (((((*(R21 *)rt_nil_check(l_L_1862))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1862))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1862))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1865 = r_MK(rt_str("1", 1));
return rv1865; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1862))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1866 = r_MK(rt_str("0", 1));
return rv1866; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1867 = r_MK(rt_str("1", 1));
return rv1867; }
}
{ R10 rv1868 = r_MK(rt_str("0", 1));
return rv1868; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1869 = 0;
return rv1869; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1870 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1870; }
}
{ rt_int rv1871 = 0;
return rv1871; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1872 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1872; }
}
{ R21 * rv1873 = p_E;
return rv1873; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1874; memset(&l_NAMES_1874, 0, sizeof l_NAMES_1874);
l_NAMES_1874 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_1874, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1875; memset(&l_L_1875, 0, sizeof l_L_1875);
l_L_1875 = (p_NAME).f_LEN;
{ rt_int it1877_lo = ((rt_int)0LL), it1877_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1875), ((rt_int)2LL));
for (rt_int it1877 = it1877_lo; it1877 <= it1877_hi; it1877++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1874, it1877, it1877), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1874, rt_add(rt_add(it1877, l_L_1875), ((rt_int)1LL)), rt_add(rt_add(it1877, l_L_1875), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1874, rt_add(it1877, ((rt_int)1LL)), rt_add(it1877, l_L_1875)), r_STR(p_NAME, l_L_1875)))
{
{
rt_int l_J_1878; memset(&l_J_1878, 0, sizeof l_J_1878);
l_J_1878 = rt_add(rt_add(it1877, l_L_1875), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1874, l_J_1878, l_J_1878), rt_str(" ", 1))) goto L_end1879;
{
l_J_1878 = rt_add(l_J_1878, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1879: ;
{ R10 rv1880 = r_MKN(rt_b_slice(l_NAMES_1874, rt_add(rt_add(it1877, l_L_1875), ((rt_int)2LL)), rt_sub(l_J_1878, ((rt_int)1LL))));
return rv1880; }
}
}
}
}
RT_B_TICK();
if (it1877 == it1877_hi) break;
} } L_end1876: ;
{ R10 rv1881 = r_NO_TEXT();
return rv1881; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1882; memset(&l_NAME_1882, 0, sizeof l_NAME_1882);
S_R10(&l_NAME_1882, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1883; memset(&l_LINE_1883, 0, sizeof l_LINE_1883);
l_LINE_1883 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1884; memset(&l_N_1884, 0, sizeof l_N_1884);
l_N_1884 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1882, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1882, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1885; memset(&l_TGT_1885, 0, sizeof l_TGT_1885);
l_TGT_1885 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1886; memset(&l_S_1886, 0, sizeof l_S_1886);
l_S_1886 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1883);
R21 * l_SRC_1887; memset(&l_SRC_1887, 0, sizeof l_SRC_1887);
l_SRC_1887 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1885 == NULL) || (l_SRC_1887 == NULL)))
{
r_FAILT(l_LINE_1883, rt_str("the wrong arguments for ", 24), l_NAME_1882);
}
if (r_TEQS(l_NAME_1882, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1886))).f_A = l_TGT_1885;
}
else
{
if ((l_N_1884 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1883, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1886))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1883);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1886))).f_A))).f_A = l_TGT_1885;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1886))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1886))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1886))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1887), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1882, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1883);
{
R14 l_SAVED_CODE_1888; memset(&l_SAVED_CODE_1888, 0, sizeof l_SAVED_CODE_1888);
S_R14(&l_SAVED_CODE_1888, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1889; memset(&l_C_1889, 0, sizeof l_C_1889);
S_R10(&l_C_1889, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1890; memset(&l_P_1890, 0, sizeof l_P_1890);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1891; memset(&rc1891, 0, sizeof rc1891);  rc1891.f_HEAD = NULL; rc1891.f_TAIL = NULL; rc1891; }), 0);
r_ASSIGN_STMT(l_S_1886);
l_P_1890 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1890 == NULL)) goto L_end1892;
{
S_R10(&l_C_1889, r_FMT2(rt_str("@ @", 3), l_C_1889, ((*(R15 *)rt_nil_check(l_P_1890))).f_T), 0);
l_P_1890 = ((*(R15 *)rt_nil_check(l_P_1890))).f_NEXT;
}
RT_B_TICK();
} L_end1892: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1888, 0);
{ R26 rv1893 = r_MKET(r_CATS(l_C_1889, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1893; }
}
}
}
if (r_TEQS(l_NAME_1882, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1894; memset(&l_S_1894, 0, sizeof l_S_1894);
l_S_1894 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1883);
((*(R21 *)rt_nil_check(l_S_1894))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1894))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1894))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1894))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1895 = r_EXPR(l_S_1894, p_WANT);
return rv1895; }
}
}
{
R10 l_SYM__1896; memset(&l_SYM__1896, 0, sizeof l_SYM__1896);
S_R10(&l_SYM__1896, r_OPERATOR_SYMBOL(l_NAME_1882), 0);
rt_int l_UNARY_OP_1897; memset(&l_UNARY_OP_1897, 0, sizeof l_UNARY_OP_1897);
l_UNARY_OP_1897 = ((r_TEQS(l_NAME_1882, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1882, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1882, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1898; memset(&l_X_1898, 0, sizeof l_X_1898);
if (l_UNARY_OP_1897)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1898 = r_NEW_NODE(g_N_UNOP, l_LINE_1883);
S_R10(&((*(R21 *)rt_nil_check(l_X_1898))).f_NAME, l_SYM__1896, 0);
((*(R21 *)rt_nil_check(l_X_1898))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1899 = r_EXPR(r_QUALIFIED(l_X_1898, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1883), p_WANT);
return rv1899; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1898 = r_BIN_NODE(l_SYM__1896, l_LINE_1883, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1896, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1898))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1882, (l_NAME_1882).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1898))).f_FL = ((rt_int)2LL);
}
{ R26 rv1900 = r_EXPR(r_QUALIFIED(l_X_1898, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1883), p_WANT);
return rv1900; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1901; memset(&l_R_1901, 0, sizeof l_R_1901);
l_R_1901 = p_X;
R21 * l_P_1902; memset(&l_P_1902, 0, sizeof l_P_1902);
l_P_1902 = p_Q;
for (;;) {
if ((l_P_1902 == NULL)) goto L_end1903;
{
if ((l_R_1901 == p_X))
{
l_R_1901 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1901))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1902))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1902))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1902))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1901))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1902))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1901))).f_B = l_P_1902;
}
l_P_1902 = ((*(R21 *)rt_nil_check(l_P_1902))).f_NEXT;
}
RT_B_TICK();
} L_end1903: ;
{ R21 * rv1904 = l_R_1901;
return rv1904; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1905 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1905; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1906; memset(&l_Y_1906, 0, sizeof l_Y_1906);
l_Y_1906 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1906 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1906))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1907; memset(&l_T_1907, 0, sizeof l_T_1907);
l_T_1907 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1906))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1907))).f_KIND == g_T_ENUM))
{
{ R22 * rv1908 = l_T_1907;
return rv1908; }
}
}
}
}
{ R22 * rv1909 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1909; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1910 = 1;
return rv1910; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1911 = 1;
return rv1911; }
}
{ rt_int rv1912 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1912; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1913 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1913; }
}
{ R21 * rv1914 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1914; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R21 * p_L) { RT_B_TICK(); 
R21 * l_A_1915; memset(&l_A_1915, 0, sizeof l_A_1915);
l_A_1915 = p_L;
for (;;) {
if ((l_A_1915 == NULL)) goto L_end1916;
{
if ((((*(R21 *)rt_nil_check(l_A_1915))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1917; memset(&l_Y_1917, 0, sizeof l_Y_1917);
l_Y_1917 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1915))).f_NAME);
if ((!(l_Y_1917 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1917))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1917))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_1917))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1917))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv1918 = 1;
return rv1918; }
}
}
}
}
}
l_A_1915 = ((*(R21 *)rt_nil_check(l_A_1915))).f_NEXT;
}
RT_B_TICK();
} L_end1916: ;
{ rt_int rv1919 = 0;
return rv1919; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1920; memset(&l_NAME_1920, 0, sizeof l_NAME_1920);
S_R10(&l_NAME_1920, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1921; memset(&l_LINE_1921, 0, sizeof l_LINE_1921);
l_LINE_1921 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R21 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_1920, l_LINE_1921);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_1920)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1920, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1920, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1920, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1922 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1922; }
}
if ((r_TEQS(l_NAME_1920, rt_str("PUT", 3)) || r_TEQS(l_NAME_1920, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1923; memset(&l_V_1923, 0, sizeof l_V_1923);
S_R26(&l_V_1923, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1923).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1921, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_1923).f_T, rt_str("the terminal", 12), l_LINE_1921);
if (r_TEQS(l_NAME_1920, rt_str("PUT", 3)))
{
{ R26 rv1924 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1923).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1924; }
}
{ R26 rv1925 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1923).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1925; }
}
}
else if (r_TEQS(l_NAME_1920, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1926 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1926; }
}
else if (r_TEQS(l_NAME_1920, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1927 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1927; }
}
else if (r_TEQS(l_NAME_1920, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1928 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1928; }
}
else if (r_TEQS(l_NAME_1920, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1929 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1929; }
}
else if (r_TEQS(l_NAME_1920, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1930 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1930; }
}
else if (r_TEQS(l_NAME_1920, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1931 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1931; }
}
if (r_TEQS(l_NAME_1920, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1932 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1921);
return rv1932; }
}
else if (r_TEQS(l_NAME_1920, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1933 = r_TO_FIXED_CALL(p_E);
return rv1933; }
}
else if (r_TEQS(l_NAME_1920, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1934; memset(&l_V_1934, 0, sizeof l_V_1934);
S_R26(&l_V_1934, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1935; memset(&l_P_1935, 0, sizeof l_P_1935);
S_R23(&l_P_1935, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1936; memset(&l_VT_1936, 0, sizeof l_VT_1936);
l_VT_1936 = r_REAL_TYPE((l_V_1934).f_T);
R22 * l_T_1937; memset(&l_T_1937, 0, sizeof l_T_1937);
l_T_1937 = r_FLOAT_TYPE((l_P_1935).f_V);
R10 l_SINGLE_1938; memset(&l_SINGLE_1938, 0, sizeof l_SINGLE_1938);
S_R10(&l_SINGLE_1938, r_SINGLE_C((l_P_1935).f_V), 0);
R10 l_TR_1939; memset(&l_TR_1939, 0, sizeof l_TR_1939);
S_R10(&l_TR_1939, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1940; memset(&l_R_1940, 0, sizeof l_R_1940);
l_R_1940 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1940 == NULL))
{
l_R_1940 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1940))).f_KIND == g_N_QUAL))
{
l_R_1940 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1940))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1940))).f_NAME).f_LEN), l_LINE_1921);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1940))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1939, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1940))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1921, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1936))).f_KIND == g_T_INT))
{
{ R26 rv1941 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1934).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1936))).f_SCALE), l_SINGLE_1938, l_TR_1939), l_T_1937);
return rv1941; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1936))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1935).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1936))).f_SCALE))))
{
{
R21 * l_Q_1942; memset(&l_Q_1942, 0, sizeof l_Q_1942);
l_Q_1942 = r_NEW_NODE(g_N_QUAL, l_LINE_1921);
R21 * l_SAVED_Q_1943; memset(&l_SAVED_Q_1943, 0, sizeof l_SAVED_Q_1943);
l_SAVED_Q_1943 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1944; memset(&l_L_1944, 0, sizeof l_L_1944);
((*(R21 *)rt_nil_check(l_Q_1942))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1942;
S_R26(&l_L_1944, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1943;
{ R26 rv1945 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1944).f_C, l_SINGLE_1938, l_TR_1939), l_T_1937);
return rv1945; }
}
}
{ R26 rv1946 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1934).f_C, l_SINGLE_1938, l_TR_1939), l_T_1937);
return rv1946; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1936))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1936))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1936))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1921, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1947 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1934).f_C, l_SINGLE_1938, l_TR_1939), l_T_1937);
return rv1947; }
}
r_FAIL(l_LINE_1921, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1920, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1948 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1921);
return rv1948; }
}
else if (r_TEQS(l_NAME_1920, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1949; memset(&l_V_1949, 0, sizeof l_V_1949);
S_R26(&l_V_1949, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1949).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1950 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1949).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1949).f_T))).f_SCALE));
return rv1950; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1949).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1951 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1949).f_C), (l_V_1949).f_T);
return rv1951; }
}
r_FAIL(l_LINE_1921, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1920, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1920, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1952; memset(&l_V_1952, 0, sizeof l_V_1952);
S_R26(&l_V_1952, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1953; memset(&l_T_1953, 0, sizeof l_T_1953);
l_T_1953 = r_REAL_TYPE((l_V_1952).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1953))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1921, rt_str("an enumerated value expected by ", 32), l_NAME_1920);
}
if (r_IS_UNORDERED(l_T_1953))
{
r_FAILT(l_LINE_1921, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1920);
}
if (r_TEQS(l_NAME_1920, rt_str("SUCC", 4)))
{
{ R26 rv1954 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1952).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1953))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1953))).f_BASE);
return rv1954; }
}
{ R26 rv1955 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1952).f_C), ((*(R22 *)rt_nil_check(l_T_1953))).f_BASE);
return rv1955; }
}
}
else if (r_TEQS(l_NAME_1920, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1956; memset(&l_V_1956, 0, sizeof l_V_1956);
S_R26(&l_V_1956, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1957; memset(&l_K_1957, 0, sizeof l_K_1957);
l_K_1957 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1956).f_T)))).f_KIND;
R22 * l_T_1958; memset(&l_T_1958, 0, sizeof l_T_1958);
l_T_1958 = r_NEW_TYP(l_K_1957);
if (((!(l_K_1957 == g_T_STR)) && (!(l_K_1957 == g_T_BITS))))
{
r_FAIL(l_LINE_1921, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1958))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1956).f_T))).f_BASE;
{ R26 rv1959 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1956).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1958);
return rv1959; }
}
}
else if (r_TEQS(l_NAME_1920, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1960 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1960; }
}
else if (r_TEQS(l_NAME_1920, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1961 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1961; }
}
else if (((r_TEQS(l_NAME_1920, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1920, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1920, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1962; memset(&l_BITS_1962, 0, sizeof l_BITS_1962);
S_R10(&l_BITS_1962, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1920, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1962, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1920, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1962, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_1963; memset(&l_V_1963, 0, sizeof l_V_1963);
S_R26(&l_V_1963, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1963).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_1921, rt_str("a character string expected by ", 31), l_NAME_1920);
}
r_ASCII_ONLY((l_V_1963).f_T, r_STR(l_NAME_1920, (l_NAME_1920).f_LEN), l_LINE_1921);
{ R26 rv1964 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_1963).f_C, l_BITS_1962), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1964; }
}
}
}
else if ((r_TEQS(l_NAME_1920, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1920, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1965; memset(&l_S_1965, 0, sizeof l_S_1965);
S_R23(&l_S_1965, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1966; memset(&l_R_1966, 0, sizeof l_R_1966);
S_R23(&l_R_1966, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1966).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1921, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1921);
if (r_TEQS(l_NAME_1920, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1967 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1965).f_V));
return rv1967; }
}
{ R26 rv1968 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1965).f_V));
return rv1968; }
}
}
else if (((r_TEQS(l_NAME_1920, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1920, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1920, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1969; memset(&l_P_1969, 0, sizeof l_P_1969);
S_R23(&l_P_1969, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1970; memset(&l_T_1970, 0, sizeof l_T_1970);
l_T_1970 = r_FLOAT_TYPE((l_P_1969).f_V);
R10 l_C_1971; memset(&l_C_1971, 0, sizeof l_C_1971);
S_R10(&l_C_1971, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1969).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1971, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1920, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1972 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1971), l_T_1970);
return rv1972; }
}
else if (r_TEQS(l_NAME_1920, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1973 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1971), l_T_1970);
return rv1973; }
}
{ R26 rv1974 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1971), l_T_1970);
return rv1974; }
}
}
else if (r_TEQS(l_NAME_1920, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1975 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1975; }
}
else if (r_TEQS(l_NAME_1920, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1976 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1976; }
}
else if (r_TEQS(l_NAME_1920, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1977 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1977; }
}
{ R26 rv1978 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1978; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1979; memset(&l_T_1979, 0, sizeof l_T_1979);
l_T_1979 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1980; memset(&l_K_1980, 0, sizeof l_K_1980);
l_K_1980 = ((*(R22 *)rt_nil_check(l_T_1979))).f_KIND;
R22 * l_S_1981; memset(&l_S_1981, 0, sizeof l_S_1981);
l_S_1981 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1980 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1979))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1982 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1981);
return rv1982; }
}
{ R26 rv1983 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1979))).f_SCALE)), l_S_1981);
return rv1983; }
}
else if ((l_K_1980 == g_T_FLOAT))
{
{ R26 rv1984 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1979))).f_SCALE)), l_S_1981);
return rv1984; }
}
else if ((l_K_1980 == g_T_BOOL))
{
{ R26 rv1985 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1981);
return rv1985; }
}
else if ((l_K_1980 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1979))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1986 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1981);
return rv1986; }
}
{ R26 rv1987 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1979))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1981);
return rv1987; }
}
else if (((l_K_1980 == g_T_STR) || (l_K_1980 == g_T_BITS)))
{
{ R26 rv1988 = r_MKET((p_V).f_C, l_S_1981);
return rv1988; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1979));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1989; memset(&l_V_1989, 0, sizeof l_V_1989);
S_R26(&l_V_1989, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1990; memset(&l_T_1990, 0, sizeof l_T_1990);
l_T_1990 = r_REAL_TYPE((l_V_1989).f_T);
rt_int l_N_1991; memset(&l_N_1991, 0, sizeof l_N_1991);
l_N_1991 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1992; memset(&l_RND_1992, 0, sizeof l_RND_1992);
S_R10(&l_RND_1992, r_ROUNDING_ARG(p_E, l_N_1991), 0);
rt_int l_S_1993; memset(&l_S_1993, 0, sizeof l_S_1993);
l_S_1993 = ((rt_int)0LL);
if (((l_N_1991 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1993 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1994; memset(&l_K_1994, 0, sizeof l_K_1994);
l_K_1994 = ((rt_int)2LL);
for (;;) {
if ((l_K_1994 >= l_N_1991)) goto L_end1995;
{
{
R21 * l_R_1996; memset(&l_R_1996, 0, sizeof l_R_1996);
l_R_1996 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1994));
if ((r_IS_ROUNDING(l_R_1996) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1994)))).f_KIND == g_N_QUAL) && (l_K_1994 == rt_sub(l_N_1991, ((rt_int)1LL)))))))
{
if ((!(l_K_1994 == rt_sub(l_N_1991, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1996))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1996))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1996))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1996, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1996))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1996))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1996, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1994 = rt_add(l_K_1994, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1995: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1990))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1997 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1993), l_RND_1992), r_INT_TYPE(l_S_1993));
return rv1997; }
}
if ((((*(R22 *)rt_nil_check(l_T_1990))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1998; memset(&l_SAVED_1998, 0, sizeof l_SAVED_1998);
l_SAVED_1998 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1999; memset(&l_C_1999, 0, sizeof l_C_1999);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1992, rt_str("1", 1));
S_R10(&l_C_1999, r_RESCALE_C((l_V_1989).f_C, ((*(R22 *)rt_nil_check(l_T_1990))).f_SCALE, l_S_1993), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1998;
{ R26 rv2000 = r_MKET(l_C_1999, r_INT_TYPE(l_S_1993));
return rv2000; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1990))).f_KIND == g_T_FLOAT))
{
{ R26 rv2001 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1989).f_C, r_NUM(l_S_1993), l_RND_1992), r_INT_TYPE(l_S_1993));
return rv2001; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1990))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1990))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1990))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_1990))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1990))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1990))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2002 = r_MKET(r_RESCALE_C((l_V_1989).f_C, ((rt_int)0LL), l_S_1993), r_INT_TYPE(l_S_1993));
return rv2002; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1990))).f_KIND == g_T_BITS))
{
{ R26 rv2003 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1989).f_C), ((rt_int)0LL), l_S_1993), r_INT_TYPE(l_S_1993));
return rv2003; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1990))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_1990, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2004 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1989).f_C, r_NUM(l_S_1993), l_RND_1992), r_INT_TYPE(l_S_1993));
return rv2004; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1989).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2005; memset(&l_T_2005, 0, sizeof l_T_2005);
l_T_2005 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2006; memset(&l_K_2006, 0, sizeof l_K_2006);
l_K_2006 = ((*(R22 *)rt_nil_check(l_T_2005))).f_KIND;
if ((l_K_2006 == g_T_BITS))
{
{ R26 rv2007 = p_V;
return rv2007; }
}
else if ((l_K_2006 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2005))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2005))).f_REPS))).f_B == NULL)))
{
{ R26 rv2008 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2005)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2005)));
return rv2008; }
}
}
{ R26 rv2009 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2005))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2005)));
return rv2009; }
}
else if ((l_K_2006 == g_T_STR))
{
{ R26 rv2010 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2010; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_2006 == g_T_INT))
{
{ R26 rv2011 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2011; }
}
else if ((l_K_2006 == g_T_BOOL))
{
{ R26 rv2012 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2012; }
}
else if ((l_K_2006 == g_T_FLOAT))
{
{ R26 rv2013 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2013; }
}
else if ((l_K_2006 == g_T_STR))
{
{ R26 rv2014 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2014; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2005));
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
{ rt_int rv2015 = 0;
return rv2015; }
}
{ rt_int rv2016 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2016; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_2017; memset(&l_N_2017, 0, sizeof l_N_2017);
l_N_2017 = ((rt_int)0LL);
R27 * l_P_2018; memset(&l_P_2018, 0, sizeof l_P_2018);
l_P_2018 = p_A;
for (;;) {
if ((l_P_2018 == NULL)) goto L_end2019;
{
l_N_2017 = rt_add(l_N_2017, ((rt_int)1LL));
l_P_2018 = ((*(R27 *)rt_nil_check(l_P_2018))).f_NEXT;
}
RT_B_TICK();
} L_end2019: ;
{ rt_int rv2020 = l_N_2017;
return rv2020; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_2021; memset(&l_HEAD_2021, 0, sizeof l_HEAD_2021);
l_HEAD_2021 = NULL;
R27 * l_TAIL_2022; memset(&l_TAIL_2022, 0, sizeof l_TAIL_2022);
l_TAIL_2022 = NULL;
rt_int l_G_2023; memset(&l_G_2023, 0, sizeof l_G_2023);
l_G_2023 = ((rt_int)0LL);
{ rt_int it2025_lo = ((rt_int)0LL), it2025_hi = ((rt_int)2LL);
for (rt_int it2025 = it2025_lo; it2025 <= it2025_hi; it2025++) {
{
{
R21 * l_P_2026; memset(&l_P_2026, 0, sizeof l_P_2026);
l_P_2026 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it2025 == ((rt_int)1LL)))
{
l_P_2026 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it2025 == ((rt_int)2LL)))
{
l_P_2026 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2026 == NULL)) goto L_end2027;
{
{
R27 * l_A_2028; memset(&l_A_2028, 0, sizeof l_A_2028);
l_A_2028 = r_NODE_ARG(l_P_2026, it2025, NULL);
if ((l_TAIL_2022 == NULL))
{
l_HEAD_2021 = l_A_2028;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2022))).f_NEXT = l_A_2028;
}
l_TAIL_2022 = l_A_2028;
}
l_P_2026 = ((*(R21 *)rt_nil_check(l_P_2026))).f_NEXT;
}
RT_B_TICK();
} L_end2027: ;
}
}
RT_B_TICK();
if (it2025 == it2025_hi) break;
} } L_end2024: ;
{ R27 * rv2029 = l_HEAD_2021;
return rv2029; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2030; memset(&l_SAVED_2030, 0, sizeof l_SAVED_2030);
l_SAVED_2030 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_2031; memset(&l_SAVED_Q_2031, 0, sizeof l_SAVED_Q_2031);
l_SAVED_Q_2031 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2032; memset(&l_V_2032, 0, sizeof l_V_2032);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2032, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2030;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2031;
{ R26 rv2033 = l_V_2032;
return rv2033; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_2034; memset(&l_ARGS_2034, 0, sizeof l_ARGS_2034);
l_ARGS_2034 = r_CALL_ARGS(p_E);
R12 * l_Y_2035; memset(&l_Y_2035, 0, sizeof l_Y_2035);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2036 = r_START_IO_CALL(p_E);
return rv2036; }
}
l_Y_2035 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2035 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2035))).f_KIND == g_Y_BUILTIN))
{
{
R21 * l_N_2037; memset(&l_N_2037, 0, sizeof l_N_2037);
l_N_2037 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2037))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2035))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2037))).f_NEXT = ((*(R21 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2038 = r_BUILTIN(l_N_2037, p_WANT);
return rv2038; }
}
}
{ R26 rv2039 = r_CALL_SYM(l_Y_2035, l_ARGS_2034, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv2039; }
}
{
R10 l_SHORT_2040; memset(&l_SHORT_2040, 0, sizeof l_SHORT_2040);
S_R10(&l_SHORT_2040, r_WHERE_SHORT_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2040, ((*(R21 *)rt_nil_check(p_E))).f_NAME)))
{
{
R21 * l_N_2041; memset(&l_N_2041, 0, sizeof l_N_2041);
l_N_2041 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2041))).f_NAME, l_SHORT_2040, 0);
((*(R21 *)rt_nil_check(l_N_2041))).f_NEXT = ((*(R21 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2042 = r_CALL_EXPR1(l_N_2041, p_WANT);
return rv2042; }
}
}
}
l_Y_2035 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2034, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2035 == NULL))
{
{
R12 * l_P_2043; memset(&l_P_2043, 0, sizeof l_P_2043);
l_P_2043 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2043 == NULL)) goto L_end2044;
{
if ((((*(R12 *)rt_nil_check(l_P_2043))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2045 = r_BUILTIN(p_E, p_WANT);
return rv2045; }
}
l_P_2043 = r_LOOKUP_NEXT(l_P_2043);
}
RT_B_TICK();
} L_end2044: ;
}
{
R12 * l_B_2046; memset(&l_B_2046, 0, sizeof l_B_2046);
l_B_2046 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2046 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2046))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2047 = r_BUILTIN(p_E, p_WANT);
return rv2047; }
}
if (((((*(R12 *)rt_nil_check(l_B_2046))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2046))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_2048; memset(&l_BASE_2048, 0, sizeof l_BASE_2048);
S_R10(&l_BASE_2048, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2048).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_2049; memset(&l_N_2049, 0, sizeof l_N_2049);
l_N_2049 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2049))).f_NAME, l_BASE_2048, 0);
{ R26 rv2050 = r_BUILTIN(l_N_2049, p_WANT);
return rv2050; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2051 = r_CALL_SYM(l_Y_2035, l_ARGS_2034, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv2051; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_2052; memset(&l_S_2052, 0, sizeof l_S_2052);
l_S_2052 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2052, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2054_lo = ((rt_int)1LL), it2054_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2054 = it2054_lo; it2054 <= it2054_hi; it2054++) {
{
if (rt_b_eq(rt_b_slice(l_S_2052, it2054, it2054), rt_str("$", 1)))
{
{
R10 l_P_2055; memset(&l_P_2055, 0, sizeof l_P_2055);
S_R10(&l_P_2055, r_MKN(rt_b_slice(l_S_2052, ((rt_int)0LL), rt_sub(it2054, ((rt_int)1LL)))), 0);
R10 l_B_2056; memset(&l_B_2056, 0, sizeof l_B_2056);
S_R10(&l_B_2056, r_MKN(rt_b_slice(l_S_2052, rt_add(it2054, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2055) || r_TEQS(l_P_2055, rt_str("INTEGER", 7))) || r_TEQS(l_P_2055, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2055, rt_str("ENUM", 4))) || r_TEQS(l_P_2055, rt_str("ARRAY", 5))) || r_TEQS(l_P_2055, rt_str("RECORD", 6))) || r_TEQS(l_P_2055, rt_str("PTR", 3))) || r_TEQS(l_P_2055, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2057; memset(&l_Y_2057, 0, sizeof l_Y_2057);
l_Y_2057 = r_LOOKUP(l_B_2056);
for (;;) {
if ((l_Y_2057 == NULL)) goto L_end2058;
{
if ((((*(R12 *)rt_nil_check(l_Y_2057))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv2059 = l_B_2056;
return rv2059; }
}
l_Y_2057 = r_LOOKUP_NEXT(l_Y_2057);
}
RT_B_TICK();
} L_end2058: ;
}
}
}
{ R10 rv2060 = r_NO_TEXT();
return rv2060; }
}
}
RT_B_TICK();
if (it2054 == it2054_hi) break;
} } L_end2053: ;
{ R10 rv2061 = r_NO_TEXT();
return rv2061; }
rt_raise(RT_X_INIT);
}
static R10 r_WHERE_SHORT_NAME(R10 p_NAME) { RT_B_TICK(); 
R12 * l_G_2062; memset(&l_G_2062, 0, sizeof l_G_2062);
l_G_2062 = r_CUR_GENERIC();
rstr l_S_2063; memset(&l_S_2063, 0, sizeof l_S_2063);
l_S_2063 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2063, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2062 == NULL))
{
{ R10 rv2064 = p_NAME;
return rv2064; }
}
{ rt_int it2066_lo = ((rt_int)1LL), it2066_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2066 = it2066_lo; it2066 <= it2066_hi; it2066++) {
{
if (rt_b_eq(rt_b_slice(l_S_2063, it2066, it2066), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2062))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2063, ((rt_int)0LL), rt_sub(it2066, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2062, r_MKN(rt_b_slice(l_S_2063, rt_add(it2066, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R10 rv2067 = r_MKN(rt_b_slice(l_S_2063, rt_add(it2066, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2067; }
}
{ R10 rv2068 = p_NAME;
return rv2068; }
}
}
RT_B_TICK();
if (it2066 == it2066_hi) break;
} } L_end2065: ;
{ R10 rv2069 = p_NAME;
return rv2069; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2070; memset(&l_B_2070, 0, sizeof l_B_2070);
l_B_2070 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2071; memset(&l_S_2071, 0, sizeof l_S_2071);
l_S_2071 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2071, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2073_lo = ((rt_int)1LL), it2073_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2073 = it2073_lo; it2073 <= it2073_hi; it2073++) {
{
if (rt_b_eq(rt_b_slice(l_S_2071, it2073, it2073), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2071, ((rt_int)0LL), rt_sub(it2073, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2074 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2071, rt_add(it2073, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2074; }
}
goto L_end2072;
}
}
RT_B_TICK();
if (it2073 == it2073_hi) break;
} } L_end2072: ;
}
for (;;) {
if ((l_B_2070 == NULL)) goto L_end2075;
{
if (((!(((*(R20 *)rt_nil_check(l_B_2070))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_2070))).f_NAME, p_NAME)))
{
{ R12 * rv2076 = ((*(R20 *)rt_nil_check(l_B_2070))).f_R;
return rv2076; }
}
l_B_2070 = ((*(R20 *)rt_nil_check(l_B_2070))).f_NEXT;
}
RT_B_TICK();
} L_end2075: ;
{ R12 * rv2077 = NULL;
return rv2077; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2078 = 0;
return rv2078; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2079 = 0;
return rv2079; }
}
}
}
{ rt_int rv2080 = 1;
return rv2080; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2081; memset(&l_Y_2081, 0, sizeof l_Y_2081);
l_Y_2081 = r_LOOKUP(p_NAME);
R12 * l_BEST_2082; memset(&l_BEST_2082, 0, sizeof l_BEST_2082);
l_BEST_2082 = NULL;
rt_int l_BEST_SCORE_2083; memset(&l_BEST_SCORE_2083, 0, sizeof l_BEST_SCORE_2083);
l_BEST_SCORE_2083 = ((rt_int)0LL);
rt_int l_TIES_2084; memset(&l_TIES_2084, 0, sizeof l_TIES_2084);
l_TIES_2084 = ((rt_int)0LL);
rt_int l_COUNT_2085; memset(&l_COUNT_2085, 0, sizeof l_COUNT_2085);
l_COUNT_2085 = ((rt_int)0LL);
rt_int l_N_2086; memset(&l_N_2086, 0, sizeof l_N_2086);
l_N_2086 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2081 == NULL)) goto L_end2087;
{
if ((!r_IS_ROUTINE(l_Y_2081)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2081))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2087;
}
}
else if (r_CANDIDATE(l_Y_2081, p_NAME))
{
{
R12 * l_R_2088; memset(&l_R_2088, 0, sizeof l_R_2088);
l_R_2088 = r_ORIGINAL(l_Y_2081);
rt_int l_SCORE_2089; memset(&l_SCORE_2089, 0, sizeof l_SCORE_2089);
r_ROUTINE_HEADER(l_R_2088);
if ((((r_PARAM_COUNT(l_R_2088) == l_N_2086) && (!r_SEEN_ROUTINE(l_R_2088, p_NAME, l_Y_2081))) && (!r_HIDDEN_ROUTINE(l_R_2088, p_NAME, l_Y_2081))))
{
l_COUNT_2085 = rt_add(l_COUNT_2085, ((rt_int)1LL));
l_SCORE_2089 = r_MATCH_SCORE(l_R_2088, p_ARGS);
if ((l_SCORE_2089 > l_BEST_SCORE_2083))
{
l_BEST_2082 = l_R_2088;
l_BEST_SCORE_2083 = l_SCORE_2089;
l_TIES_2084 = ((rt_int)0LL);
}
else if (((l_SCORE_2089 == l_BEST_SCORE_2083) && (l_SCORE_2089 > ((rt_int)0LL))))
{
l_TIES_2084 = rt_add(l_TIES_2084, ((rt_int)1LL));
}
}
}
}
l_Y_2081 = r_LOOKUP_NEXT(l_Y_2081);
}
RT_B_TICK();
} L_end2087: ;
if (((l_TIES_2084 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2090 = l_BEST_2082;
return rv2090; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2091; memset(&l_Y_2091, 0, sizeof l_Y_2091);
l_Y_2091 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2091 == p_STOP) || (l_Y_2091 == NULL))) goto L_end2092;
{
if ((((*(R12 *)rt_nil_check(l_Y_2091))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2091) == p_R))
{
{ rt_int rv2093 = 1;
return rv2093; }
}
}
l_Y_2091 = r_LOOKUP_NEXT(l_Y_2091);
}
RT_B_TICK();
} L_end2092: ;
{ rt_int rv2094 = 0;
return rv2094; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2095; memset(&l_Y_2095, 0, sizeof l_Y_2095);
l_Y_2095 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2095 == p_STOP) || (l_Y_2095 == NULL))) goto L_end2096;
{
if (((((*(R12 *)rt_nil_check(l_Y_2095))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2095))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2097; memset(&l_O_2097, 0, sizeof l_O_2097);
l_O_2097 = r_ORIGINAL(l_Y_2095);
if ((!(l_O_2097 == p_R)))
{
r_ROUTINE_HEADER(l_O_2097);
if (r_SAME_SIGNATURE(l_O_2097, p_R))
{
{ rt_int rv2098 = 1;
return rv2098; }
}
}
}
}
l_Y_2095 = r_LOOKUP_NEXT(l_Y_2095);
}
RT_B_TICK();
} L_end2096: ;
{ rt_int rv2099 = 0;
return rv2099; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2100; memset(&l_P_2100, 0, sizeof l_P_2100);
l_P_2100 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2101; memset(&l_Q_2101, 0, sizeof l_Q_2101);
l_Q_2101 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2102 = 0;
return rv2102; }
}
for (;;) {
if (((l_P_2100 == NULL) || (l_Q_2101 == NULL))) goto L_end2103;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2100))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2101))).f_MODE)))
{
{ rt_int rv2104 = 0;
return rv2104; }
}
if (((((*(R28 *)rt_nil_check(l_P_2100))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2101))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2100))).f_T == ((*(R28 *)rt_nil_check(l_Q_2101))).f_T)))
{
{ rt_int rv2105 = 0;
return rv2105; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2100))).f_T, ((*(R28 *)rt_nil_check(l_Q_2101))).f_T)))
{
{ rt_int rv2106 = 0;
return rv2106; }
}
l_P_2100 = ((*(R28 *)rt_nil_check(l_P_2100))).f_NEXT;
l_Q_2101 = ((*(R28 *)rt_nil_check(l_Q_2101))).f_NEXT;
}
RT_B_TICK();
} L_end2103: ;
{ rt_int rv2107 = ((l_P_2100 == NULL) && (l_Q_2101 == NULL));
return rv2107; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2108; memset(&l_N_2108, 0, sizeof l_N_2108);
l_N_2108 = ((rt_int)0LL);
R28 * l_P_2109; memset(&l_P_2109, 0, sizeof l_P_2109);
l_P_2109 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2109 == NULL)) goto L_end2110;
{
l_N_2108 = rt_add(l_N_2108, ((rt_int)1LL));
l_P_2109 = ((*(R28 *)rt_nil_check(l_P_2109))).f_NEXT;
}
RT_B_TICK();
} L_end2110: ;
{ rt_int rv2111 = l_N_2108;
return rv2111; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2112; memset(&l_P_2112, 0, sizeof l_P_2112);
l_P_2112 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2113; memset(&l_A_2113, 0, sizeof l_A_2113);
l_A_2113 = p_ARGS;
rt_int l_EXACT_2114; memset(&l_EXACT_2114, 0, sizeof l_EXACT_2114);
l_EXACT_2114 = 1;
R20 * l_BS_2115; memset(&l_BS_2115, 0, sizeof l_BS_2115);
l_BS_2115 = r_NEW_BINDS();
R22 * l_PT_2116; memset(&l_PT_2116, 0, sizeof l_PT_2116);
for (;;) {
if ((l_P_2112 == NULL)) goto L_end2117;
{
l_PT_2116 = r_FORMAL_VIEW(p_R, l_P_2112);
if ((!(((*(R28 *)rt_nil_check(l_P_2112))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2113))).f_MODE)))
{
{ rt_int rv2118 = ((rt_int)0LL);
return rv2118; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2112))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2112, l_A_2113, l_BS_2115)))
{
{ rt_int rv2119 = ((rt_int)0LL);
return rv2119; }
}
}
else if ((l_PT_2116 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2113))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2113))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2120 = ((rt_int)0LL);
return rv2120; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2113))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2113))).f_E, l_PT_2116)))
{
{ rt_int rv2121 = ((rt_int)0LL);
return rv2121; }
}
}
else
{
r_TYPE_ARG(l_A_2113);
{
R22 * l_AT_2122; memset(&l_AT_2122, 0, sizeof l_AT_2122);
l_AT_2122 = (((*(R27 *)rt_nil_check(l_A_2113))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2116, l_AT_2122) || (((((*(R22 *)rt_nil_check(l_AT_2122))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2116)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2123 = ((rt_int)0LL);
return rv2123; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2116)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2122)))).f_MLEN).f_OK))
{
{
R10 l_KEY_2124; memset(&l_KEY_2124, 0, sizeof l_KEY_2124);
S_R10(&l_KEY_2124, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2116)))).f_GEN, (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2116)))).f_GEN).f_LEN))), 0);
R20 * l_B_2125; memset(&l_B_2125, 0, sizeof l_B_2125);
l_B_2125 = r_FIND_BIND(((*(R20 *)rt_nil_check(l_BS_2115))).f_NEXT, l_KEY_2124);
if ((!(l_B_2125 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_2125))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2122)))).f_MLEN).f_V)))
{
{ rt_int rv2126 = ((rt_int)0LL);
return rv2126; }
}
}
else
{
r_ADD_BIND(l_KEY_2124, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2122)))).f_MLEN, NULL, l_BS_2115);
}
}
}
if ((!r_SAME_TYPE(l_PT_2116, l_AT_2122)))
{
if ((((*(R28 *)rt_nil_check(l_P_2112))).f_MODE == g_M_INOUT))
{
{ rt_int rv2127 = ((rt_int)0LL);
return rv2127; }
}
l_EXACT_2114 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2122)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2116)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2112))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2122))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2116))).f_SCALE)))
{
{ rt_int rv2128 = ((rt_int)0LL);
return rv2128; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2112))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2116))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2122))).f_SCALE)))
{
{ rt_int rv2129 = ((rt_int)0LL);
return rv2129; }
}
}
}
}
l_P_2112 = ((*(R28 *)rt_nil_check(l_P_2112))).f_NEXT;
l_A_2113 = ((*(R27 *)rt_nil_check(l_A_2113))).f_NEXT;
}
RT_B_TICK();
} L_end2117: ;
if (l_EXACT_2114)
{
{ rt_int rv2130 = ((rt_int)2LL);
return rv2130; }
}
{ rt_int rv2131 = ((rt_int)1LL);
return rv2131; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2132; memset(&l_RT_2132, 0, sizeof l_RT_2132);
l_RT_2132 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2132))).f_KIND == g_T_ENUM))
{
{ rt_int rv2133 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_2132) == NULL));
return rv2133; }
}
{ rt_int rv2134 = 0;
return rv2134; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2135 = (((*(R22 *)rt_nil_check(l_RT_2132))).f_KIND == g_T_PTR);
return rv2135; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2136 = (((*(R22 *)rt_nil_check(l_RT_2132))).f_KIND == g_T_REC);
return rv2136; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2137 = (((*(R22 *)rt_nil_check(l_RT_2132))).f_KIND == g_T_ARR);
return rv2137; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2138 = (((*(R22 *)rt_nil_check(l_RT_2132))).f_KIND == g_T_INT);
return rv2138; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2139 = ((((*(R22 *)rt_nil_check(l_RT_2132))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2132))).f_KIND == g_T_SEM));
return rv2139; }
}
{ rt_int rv2140 = 0;
return rv2140; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_2141; memset(&l_N_2141, 0, sizeof l_N_2141);
l_N_2141 = p_E;
for (;;) {
if ((l_N_2141 == NULL)) goto L_end2142;
{
if (((((*(R21 *)rt_nil_check(l_N_2141))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_N_2141))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2143; memset(&l_Y_2143, 0, sizeof l_Y_2143);
l_Y_2143 = r_LOOKUP(((*(R21 *)rt_nil_check(l_N_2141))).f_NAME);
if ((l_Y_2143 == NULL))
{
{ R12 * rv2144 = NULL;
return rv2144; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2143))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2145 = NULL;
return rv2145; }
}
{ R12 * rv2146 = l_Y_2143;
return rv2146; }
}
}
else if (((((((*(R21 *)rt_nil_check(l_N_2141))).f_KIND == g_N_INDEX) || (((*(R21 *)rt_nil_check(l_N_2141))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_N_2141))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_N_2141))).f_KIND == g_N_PAREN)))
{
l_N_2141 = ((*(R21 *)rt_nil_check(l_N_2141))).f_A;
}
else
{
{ R12 * rv2147 = NULL;
return rv2147; }
}
}
RT_B_TICK();
} L_end2142: ;
{ R12 * rv2148 = NULL;
return rv2148; }
rt_raise(RT_X_INIT);
}
static R21 * r_PATH_OF(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_2149; memset(&l_N_2149, 0, sizeof l_N_2149);
l_N_2149 = p_E;
R21 * l_P_2150; memset(&l_P_2150, 0, sizeof l_P_2150);
l_P_2150 = NULL;
for (;;) {
if ((l_N_2149 == NULL)) goto L_end2151;
{
if ((((*(R21 *)rt_nil_check(l_N_2149))).f_KIND == g_N_FIELD))
{
l_P_2150 = r_NAME_REF(((*(R21 *)rt_nil_check(l_N_2149))).f_NAME, ((rt_int)0LL), NULL, l_P_2150);
l_N_2149 = ((*(R21 *)rt_nil_check(l_N_2149))).f_A;
}
else if (((((*(R21 *)rt_nil_check(l_N_2149))).f_KIND == g_N_INDEX) || (((*(R21 *)rt_nil_check(l_N_2149))).f_KIND == g_N_SUBSTR)))
{
l_P_2150 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2150);
l_N_2149 = ((*(R21 *)rt_nil_check(l_N_2149))).f_A;
}
else if ((((*(R21 *)rt_nil_check(l_N_2149))).f_KIND == g_N_APPLY))
{
l_P_2150 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2150);
{ R21 * rv2152 = l_P_2150;
return rv2152; }
}
else if ((((*(R21 *)rt_nil_check(l_N_2149))).f_KIND == g_N_PAREN))
{
l_N_2149 = ((*(R21 *)rt_nil_check(l_N_2149))).f_A;
}
else
{
{ R21 * rv2153 = l_P_2150;
return rv2153; }
}
}
RT_B_TICK();
} L_end2151: ;
{ R21 * rv2154 = l_P_2150;
return rv2154; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2155; memset(&l_P_2155, 0, sizeof l_P_2155);
l_P_2155 = p_A;
R21 * l_Q_2156; memset(&l_Q_2156, 0, sizeof l_Q_2156);
l_Q_2156 = p_B;
for (;;) {
if (((l_P_2155 == NULL) || (l_Q_2156 == NULL))) goto L_end2157;
{
if ((((!r_TEQS(((*(R21 *)rt_nil_check(l_P_2155))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R21 *)rt_nil_check(l_Q_2156))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R21 *)rt_nil_check(l_P_2155))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_2156))).f_NAME))))
{
{ rt_int rv2158 = 1;
return rv2158; }
}
l_P_2155 = ((*(R21 *)rt_nil_check(l_P_2155))).f_NEXT;
l_Q_2156 = ((*(R21 *)rt_nil_check(l_Q_2156))).f_NEXT;
}
RT_B_TICK();
} L_end2157: ;
{ rt_int rv2159 = 0;
return rv2159; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_USED_2160; memset(&l_USED_2160, 0, sizeof l_USED_2160);
l_USED_2160 = NULL;
R28 * l_P_2161; memset(&l_P_2161, 0, sizeof l_P_2161);
l_P_2161 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R27 * l_A_2162; memset(&l_A_2162, 0, sizeof l_A_2162);
l_A_2162 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2160);
for (;;) {
if (((l_P_2161 == NULL) || (l_A_2162 == NULL))) goto L_end2163;
{
if ((((((*(R28 *)rt_nil_check(l_P_2161))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2160, ((*(R28 *)rt_nil_check(l_P_2161))).f_NAME)) && (!(((*(R27 *)rt_nil_check(l_A_2162))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R27 *)rt_nil_check(l_A_2162))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter invokes only pure functions (5): ", 79), ((*(R28 *)rt_nil_check(l_P_2161))).f_NAME);
}
}
l_P_2161 = ((*(R28 *)rt_nil_check(l_P_2161))).f_NEXT;
l_A_2162 = ((*(R27 *)rt_nil_check(l_A_2162))).f_NEXT;
}
RT_B_TICK();
} L_end2163: ;
}
static void r_NAMES_IN(R21 * p_L, R21 * *p_HEAD) { RT_B_TICK(); 
R21 * l_N_2164; memset(&l_N_2164, 0, sizeof l_N_2164);
l_N_2164 = p_L;
for (;;) {
if ((l_N_2164 == NULL)) goto L_end2165;
{
if (((((*(R21 *)rt_nil_check(l_N_2164))).f_KIND == g_N_NAME) || (((((*(R21 *)rt_nil_check(l_N_2164))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_N_2164))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R21 *)rt_nil_check(l_N_2164))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2164))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2164))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2164))).f_C, &(*p_HEAD));
l_N_2164 = ((*(R21 *)rt_nil_check(l_N_2164))).f_NEXT;
}
RT_B_TICK();
} L_end2165: ;
}
static rt_int r_CONSTANT_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2166 = 1;
return rv2166; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2167; memset(&l_Y_2167, 0, sizeof l_Y_2167);
l_Y_2167 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2167 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2167))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2167)))).f_USES == NULL)))
{
{ rt_int rv2168 = 0;
return rv2168; }
}
}
}
}
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2169 = r_CONSTANT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv2169; }
}
{ rt_int rv2170 = ((r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_C));
return rv2170; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2171; memset(&l_N_2171, 0, sizeof l_N_2171);
l_N_2171 = p_L;
for (;;) {
if ((l_N_2171 == NULL)) goto L_end2172;
{
if ((!r_CONSTANT_EXPR(l_N_2171)))
{
{ rt_int rv2173 = 0;
return rv2173; }
}
l_N_2171 = ((*(R21 *)rt_nil_check(l_N_2171))).f_NEXT;
}
RT_B_TICK();
} L_end2172: ;
{ rt_int rv2174 = 1;
return rv2174; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_A_2175; memset(&l_A_2175, 0, sizeof l_A_2175);
l_A_2175 = p_ARGS;
for (;;) {
if ((l_A_2175 == NULL)) goto L_end2176;
{
if (((((((*(R27 *)rt_nil_check(l_A_2175))).f_MODE == g_M_INOUT) || (((*(R27 *)rt_nil_check(l_A_2175))).f_MODE == g_M_OUT))) && (!(((*(R27 *)rt_nil_check(l_A_2175))).f_E == NULL))))
{
{
R12 * l_V_2177; memset(&l_V_2177, 0, sizeof l_V_2177);
l_V_2177 = r_ARG_ROOT(((*(R27 *)rt_nil_check(l_A_2175))).f_E);
R27 * l_B_2178; memset(&l_B_2178, 0, sizeof l_B_2178);
l_B_2178 = ((*(R27 *)rt_nil_check(l_A_2175))).f_NEXT;
if ((!(l_V_2177 == NULL)))
{
for (;;) {
if ((l_B_2178 == NULL)) goto L_end2179;
{
if (((((*(R27 *)rt_nil_check(l_B_2178))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2175))).f_MODE) && (!(((*(R27 *)rt_nil_check(l_B_2178))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R27 *)rt_nil_check(l_B_2178))).f_E) == l_V_2177) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R27 *)rt_nil_check(l_A_2175))).f_E), r_PATH_OF(((*(R27 *)rt_nil_check(l_B_2178))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2177))).f_NAME);
}
}
l_B_2178 = ((*(R27 *)rt_nil_check(l_B_2178))).f_NEXT;
}
RT_B_TICK();
} L_end2179: ;
if (((((*(R27 *)rt_nil_check(l_A_2175))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R21 * l_U_2180; memset(&l_U_2180, 0, sizeof l_U_2180);
l_U_2180 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2180 == NULL)) goto L_end2181;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_U_2180))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2177))).f_NAME) && (((*(R21 *)rt_nil_check(l_U_2180))).f_IV == ((*(R12 *)rt_nil_check(l_V_2177))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2177))).f_NAME);
}
l_U_2180 = ((*(R21 *)rt_nil_check(l_U_2180))).f_NEXT;
}
RT_B_TICK();
} L_end2181: ;
}
}
}
}
}
l_A_2175 = ((*(R27 *)rt_nil_check(l_A_2175))).f_NEXT;
}
RT_B_TICK();
} L_end2176: ;
}
static void r_NEED_BODY(R12 * p_G) { RT_B_TICK(); 
if (((!(((*(R12 *)rt_nil_check(p_G))).f_LAZY == ((rt_int)2LL))) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_FL == ((rt_int)1LL))))
{
((*(R12 *)rt_nil_check(p_G))).f_LAZY = ((rt_int)2LL);
((*(R12 *)rt_nil_check(p_G))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = p_G;
}
}
static R12 * r_INLINE_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2182; memset(&l_BS_2182, 0, sizeof l_BS_2182);
l_BS_2182 = r_NEW_BINDS();
R28 * l_P_2183; memset(&l_P_2183, 0, sizeof l_P_2183);
l_P_2183 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2184; memset(&l_A_2184, 0, sizeof l_A_2184);
l_A_2184 = p_ARGS;
rt_int l_SOME_M_2185; memset(&l_SOME_M_2185, 0, sizeof l_SOME_M_2185);
l_SOME_M_2185 = 0;
rt_int l_N_2186; memset(&l_N_2186, 0, sizeof l_N_2186);
l_N_2186 = ((rt_int)0LL);
for (;;) {
if (((l_P_2183 == NULL) || (l_A_2184 == NULL))) goto L_end2187;
{
if ((((((*(R28 *)rt_nil_check(l_P_2183))).f_MODE == g_M_IN) && (!(((*(R27 *)rt_nil_check(l_A_2184))).f_E == NULL))) && (!(((*(R28 *)rt_nil_check(l_P_2183))).f_T == NULL))))
{
{
R22 * l_RT_2188; memset(&l_RT_2188, 0, sizeof l_RT_2188);
l_RT_2188 = r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2183))).f_T);
R23 l_M_2189; memset(&l_M_2189, 0, sizeof l_M_2189);
S_R23(&l_M_2189, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2188))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2188))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R27 *)rt_nil_check(l_A_2184))).f_E))
{
S_R23(&l_M_2189, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2184))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2188))).f_KIND == g_T_BOOL))
{
S_R23(&l_M_2189, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2184))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2188))).f_KIND == g_T_ENUM))
{
S_R23(&l_M_2189, r_ENUM_MANIFEST(((*(R27 *)rt_nil_check(l_A_2184))).f_E, l_RT_2188), 0);
}
if ((l_M_2189).f_OK)
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2183))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2183))).f_NAME).f_LEN))), NULL, l_M_2189, NULL, l_BS_2182);
l_SOME_M_2185 = 1;
}
}
}
l_P_2183 = ((*(R28 *)rt_nil_check(l_P_2183))).f_NEXT;
l_A_2184 = ((*(R27 *)rt_nil_check(l_A_2184))).f_NEXT;
}
RT_B_TICK();
} L_end2187: ;
if ((!l_SOME_M_2185))
{
r_NEED_BODY(p_G);
{ R12 * rv2190 = p_G;
return rv2190; }
}
{
R12 * l_I_2191; memset(&l_I_2191, 0, sizeof l_I_2191);
l_I_2191 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2191 == NULL)) goto L_end2192;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2191))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2182))).f_NEXT))
{
{ R12 * rv2193 = l_I_2191;
return rv2193; }
}
l_N_2186 = rt_add(l_N_2186, ((rt_int)1LL));
l_I_2191 = ((*(R12 *)rt_nil_check(l_I_2191))).f_INSTANCES;
}
RT_B_TICK();
} L_end2192: ;
}
if ((l_N_2186 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2194 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2182))).f_NEXT, p_ARGS);
return rv2194; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2195; memset(&l_VISIBLE_2195, 0, sizeof l_VISIBLE_2195);
l_VISIBLE_2195 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2196; memset(&l_Y_2196, 0, sizeof l_Y_2196);
l_Y_2196 = r_ORIGINAL(p_Y0);
R28 * l_P_2197; memset(&l_P_2197, 0, sizeof l_P_2197);
R27 * l_A_2198; memset(&l_A_2198, 0, sizeof l_A_2198);
l_A_2198 = p_ARGS;
R10 l_C_2199; memset(&l_C_2199, 0, sizeof l_C_2199);
S_R10(&l_C_2199, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2200; memset(&l_SEP_2200, 0, sizeof l_SEP_2200);
S_R10(&l_SEP_2200, r_MK(rt_str("", 0)), 0);
R10 l_PRE_2201; memset(&l_PRE_2201, 0, sizeof l_PRE_2201);
S_R10(&l_PRE_2201, r_MK(rt_str("", 0)), 0);
R10 l_POST_2202; memset(&l_POST_2202, 0, sizeof l_POST_2202);
S_R10(&l_POST_2202, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2203; memset(&l_SHARED_2203, 0, sizeof l_SHARED_2203);
l_SHARED_2203 = 0;
R22 * l_PT_2204; memset(&l_PT_2204, 0, sizeof l_PT_2204);
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL == NULL))))
{
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2196))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2196))).f_GENERIC)
{
l_Y_2196 = r_INSTANCE(l_Y_2196, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2196))).f_BINDINGS == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2196 = r_INLINE_INSTANCE(l_Y_2196, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2196, p_LINE);
r_NO_ALIASING(l_Y_2196, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2196, p_ARGS, p_LINE);
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL == NULL))))
{
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2196))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2196))).f_NAME);
}
{
R21 * l_U_2205; memset(&l_U_2205, 0, sizeof l_U_2205);
l_U_2205 = ((*(R12 *)rt_nil_check(l_Y_2196))).f_USES;
for (;;) {
if ((l_U_2205 == NULL)) goto L_end2206;
{
if ((!(r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2205))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2205))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R21 *)rt_nil_check(l_U_2205))).f_NAME);
}
}
l_U_2205 = ((*(R21 *)rt_nil_check(l_U_2205))).f_NEXT;
}
RT_B_TICK();
} L_end2206: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R27 * l_Q_2207; memset(&l_Q_2207, 0, sizeof l_Q_2207);
l_Q_2207 = p_ARGS;
rt_int l_GEN_ARG_2208; memset(&l_GEN_ARG_2208, 0, sizeof l_GEN_ARG_2208);
l_GEN_ARG_2208 = 0;
for (;;) {
if ((l_Q_2207 == NULL)) goto L_end2209;
{
if (((*(R27 *)rt_nil_check(l_Q_2207))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_Q_2207))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R27 *)rt_nil_check(l_Q_2207))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2208 = 1;
}
}
}
l_Q_2207 = ((*(R27 *)rt_nil_check(l_Q_2207))).f_NEXT;
}
RT_B_TICK();
} L_end2209: ;
if (l_GEN_ARG_2208)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2196))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2196, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2196), p_LINE);
}
}
}
}
{
R21 * l_U_2210; memset(&l_U_2210, 0, sizeof l_U_2210);
l_U_2210 = ((*(R12 *)rt_nil_check(l_Y_2196))).f_USES;
for (;;) {
if ((l_U_2210 == NULL)) goto L_end2211;
{
{
R12 * l_H_2212; memset(&l_H_2212, 0, sizeof l_H_2212);
l_H_2212 = r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2210))).f_NAME);
if ((!(l_H_2212 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2212))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2212))).f_OWNER == ((*(R21 *)rt_nil_check(l_U_2210))).f_IV)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(l_Y_2196))).f_NAME, (((*(R12 *)rt_nil_check(l_Y_2196))).f_NAME).f_LEN)), rt_str(" imports ", 9)), r_STR(((*(R21 *)rt_nil_check(l_U_2210))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2210))).f_NAME).f_LEN)), rt_str(", which a WITH NAMING hides (4.5.4)", 35)));
}
}
}
l_U_2210 = ((*(R21 *)rt_nil_check(l_U_2210))).f_NEXT;
}
RT_B_TICK();
} L_end2211: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2196))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2196))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2196))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_2199, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2196))).f_LEVEL), 0);
S_R10(&l_SEP_2200, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2213; memset(&l_Q_2213, 0, sizeof l_Q_2213);
l_Q_2213 = p_ARGS;
for (;;) {
if ((l_Q_2213 == NULL)) goto L_end2214;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2213))).f_MODE == g_M_IN)))
{
l_SHARED_2203 = 1;
}
l_Q_2213 = ((*(R27 *)rt_nil_check(l_Q_2213))).f_NEXT;
}
RT_B_TICK();
} L_end2214: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2196))).f_USES == NULL)))
{
l_SHARED_2203 = 1;
}
}
l_P_2197 = ((*(R12 *)rt_nil_check(l_Y_2196))).f_PARAMS;
for (;;) {
if ((l_P_2197 == NULL)) goto L_end2215;
{
if ((l_A_2198 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2204 = r_FORMAL_VIEW(l_Y_2196, l_P_2197);
if ((l_PT_2204 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2197))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2204)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2216; memset(&l_V_2216, 0, sizeof l_V_2216);
R10 l_CV_2217; memset(&l_CV_2217, 0, sizeof l_CV_2217);
if ((((*(R27 *)rt_nil_check(l_A_2198))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2198))))
{
S_R26(&l_V_2216, ((*(R27 *)rt_nil_check(l_A_2198))).f_V, 0);
}
else
{
S_R26(&l_V_2216, r_EXPR(((*(R27 *)rt_nil_check(l_A_2198))).f_E, l_PT_2204), 0);
}
S_R10(&l_CV_2217, r_CONVERT(l_V_2216, l_PT_2204, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2203 && (l_V_2216).f_LVAL) && r_IS_STRUCTURED(l_PT_2204)))
{
S_R10(&l_CV_2217, r_COPY_OF(l_PT_2204, l_CV_2217), 0);
}
S_R10(&l_C_2199, r_FMT3(rt_str("@@@", 3), l_C_2199, l_SEP_2200, l_CV_2217), 0);
S_R10(&l_SEP_2200, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2218; memset(&l_V_2218, 0, sizeof l_V_2218);
if (((*(R27 *)rt_nil_check(l_A_2198))).f_HAVE)
{
S_R26(&l_V_2218, ((*(R27 *)rt_nil_check(l_A_2198))).f_V, 0);
}
else
{
S_R26(&l_V_2218, r_EXPR(((*(R27 *)rt_nil_check(l_A_2198))).f_E, l_PT_2204), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2198))).f_E == NULL)) && (!(l_V_2218).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2198))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2198))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2218, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2218).f_C), (l_V_2218).f_T), 0);
(l_V_2218).f_LVAL = 1;
}
}
if ((!(l_V_2218).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2204, (l_V_2218).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2204));
}
if (((((*(R28 *)rt_nil_check(l_P_2197))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2204, (l_V_2218).f_T) && r_SAME_RANGE(l_PT_2204, (l_V_2218).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2197))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2204, (l_V_2218).f_T) && r_SAME_RANGE(l_PT_2204, (l_V_2218).f_T))))))
{
{
R10 l_TMP_2219; memset(&l_TMP_2219, 0, sizeof l_TMP_2219);
S_R10(&l_TMP_2219, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_2220; memset(&l_AP_2220, 0, sizeof l_AP_2220);
S_R10(&l_AP_2220, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_2201, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2201, r_CTYPE((l_V_2218).f_T), l_AP_2220, (l_V_2218).f_C), 0);
S_R10(&l_PRE_2201, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2201, r_CTYPE(l_PT_2204), l_TMP_2219, r_COPY_OF((l_V_2218).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2220))), 0);
S_R10(&l_POST_2202, r_FMT2(rt_str("@ @", 3), l_POST_2202, r_STORE_CODE((l_V_2218).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2220), r_MKET(l_TMP_2219, l_PT_2204), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_2199, r_FMT3(rt_str("@@&@", 4), l_C_2199, l_SEP_2200, l_TMP_2219), 0);
}
}
else
{
S_R10(&l_C_2199, r_FMT3(rt_str("@@&@", 4), l_C_2199, l_SEP_2200, (l_V_2218).f_C), 0);
}
S_R10(&l_SEP_2200, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2198 = ((*(R27 *)rt_nil_check(l_A_2198))).f_NEXT;
l_P_2197 = ((*(R28 *)rt_nil_check(l_P_2197))).f_NEXT;
}
RT_B_TICK();
} L_end2215: ;
if ((!(l_A_2198 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2201).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2221 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2201, ((*(R12 *)rt_nil_check(l_Y_2196))).f_ACCESS, l_C_2199, l_POST_2202), r_RESULT_VIEW(l_Y_2196));
return rv2221; }
}
{ R26 rv2222 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2196))).f_ACCESS, l_C_2199), r_RESULT_VIEW(l_Y_2196));
return rv2222; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2223 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2223; }
}
{ R22 * rv2224 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2224; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2225 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2225; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2226 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2226; }
}
{ R22 * rv2227 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2227; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2228 = p_T;
return rv2228; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2229 = p_T;
return rv2229; }
}
{
R12 * l_M_2230; memset(&l_M_2230, 0, sizeof l_M_2230);
l_M_2230 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2230 == NULL)) goto L_end2231;
{
{
R12 * l_Y_2232; memset(&l_Y_2232, 0, sizeof l_Y_2232);
l_Y_2232 = r_MEMBER_TYPE(l_M_2230, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2232 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2232))).f_EXPORTED)
{
{ R22 * rv2233 = r_ABSTRACT_VIEW(l_Y_2232, p_T);
return rv2233; }
}
{ R22 * rv2234 = p_T;
return rv2234; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2230))).f_MODL))
{
goto L_end2231;
}
l_M_2230 = ((*(R12 *)rt_nil_check(l_M_2230))).f_MODL;
}
RT_B_TICK();
} L_end2231: ;
}
{ R22 * rv2235 = p_T;
return rv2235; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2236; memset(&l_Y_2236, 0, sizeof l_Y_2236);
l_Y_2236 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2237; memset(&l_Z_2237, 0, sizeof l_Z_2237);
l_Z_2237 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2237 == NULL)) goto L_end2238;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2237))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2237))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2237))).f_ORIG == NULL)))
{
{ R12 * rv2239 = l_Z_2237;
return rv2239; }
}
l_Z_2237 = r_LOOKUP_NEXT(l_Z_2237);
}
RT_B_TICK();
} L_end2238: ;
}
{ R12 * rv2240 = NULL;
return rv2240; }
}
for (;;) {
if ((l_Y_2236 == NULL)) goto L_end2241;
{
if (((((*(R12 *)rt_nil_check(l_Y_2236))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2236))).f_NAME, p_NAME)))
{
{ R12 * rv2242 = l_Y_2236;
return rv2242; }
}
l_Y_2236 = ((*(R12 *)rt_nil_check(l_Y_2236))).f_SNEXT;
}
RT_B_TICK();
} L_end2241: ;
{ R12 * rv2243 = NULL;
return rv2243; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2244; memset(&l_K_2244, 0, sizeof l_K_2244);
l_K_2244 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2245 = ((((l_K_2244 == g_T_STR) || (l_K_2244 == g_T_BITS)) || (l_K_2244 == g_T_ARR)) || (l_K_2244 == g_T_REC));
return rv2245; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2246; memset(&l_RA_2246, 0, sizeof l_RA_2246);
l_RA_2246 = r_REAL_TYPE(p_A);
R22 * l_RB_2247; memset(&l_RB_2247, 0, sizeof l_RB_2247);
l_RB_2247 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2246)))
{
{ rt_int rv2248 = 1;
return rv2248; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2246))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2246))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2247))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2247))).f_HI_C)))
{
{ rt_int rv2249 = 1;
return rv2249; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2246))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2247))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2250 = ((((*(R22 *)rt_nil_check(l_RA_2246))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2247))).f_LO_C).f_LEN);
return rv2250; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2246))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2247))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2246))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2247))).f_MHI).f_OK))
{
{ rt_int rv2251 = (((((*(R22 *)rt_nil_check(l_RA_2246))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2247))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2246))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2247))).f_MHI).f_V));
return rv2251; }
}
{ rt_int rv2252 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2246))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2247))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2246))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2247))).f_HI_C));
return rv2252; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2253 = 0;
return rv2253; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2254 = 1;
return rv2254; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2255 = 1;
return rv2255; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2256 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv2256; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2257 = 1;
return rv2257; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2258 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2258; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2259 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2259; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2260 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2260; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2261 = 0;
return rv2261; }
}
{
R12 * l_Y_2262; memset(&l_Y_2262, 0, sizeof l_Y_2262);
l_Y_2262 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2263; memset(&l_A_2263, 0, sizeof l_A_2263);
l_A_2263 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2264; memset(&l_F_2264, 0, sizeof l_F_2264);
if ((l_Y_2262 == NULL))
{
{ rt_int rv2265 = 0;
return rv2265; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2262))).f_KIND == g_Y_GEN))
{
{ rt_int rv2266 = 1;
return rv2266; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2262))).f_DECL == NULL))
{
{ rt_int rv2267 = 0;
return rv2267; }
}
l_F_2264 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2262))).f_DECL))).f_A;
for (;;) {
if ((l_F_2264 == NULL)) goto L_end2268;
{
{
R21 * l_N_2269; memset(&l_N_2269, 0, sizeof l_N_2269);
l_N_2269 = ((*(R21 *)rt_nil_check(l_F_2264))).f_A;
for (;;) {
if ((l_N_2269 == NULL)) goto L_end2270;
{
if ((l_A_2263 == NULL))
{
{ rt_int rv2271 = 0;
return rv2271; }
}
if (((((*(R21 *)rt_nil_check(l_F_2264))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2263))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2263))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2263)))))
{
{ rt_int rv2272 = 1;
return rv2272; }
}
l_A_2263 = ((*(R21 *)rt_nil_check(l_A_2263))).f_NEXT;
l_N_2269 = ((*(R21 *)rt_nil_check(l_N_2269))).f_NEXT;
}
RT_B_TICK();
} L_end2270: ;
}
l_F_2264 = ((*(R21 *)rt_nil_check(l_F_2264))).f_NEXT;
}
RT_B_TICK();
} L_end2268: ;
}
}
{ rt_int rv2273 = 0;
return rv2273; }
rt_raise(RT_X_INIT);
}
static R21 * r_OWN_NAMES(R21 * p_R) { RT_B_TICK(); 
R21 * l_HEAD_2274; memset(&l_HEAD_2274, 0, sizeof l_HEAD_2274);
l_HEAD_2274 = NULL;
r_GEN_NAMES(((*(R21 *)rt_nil_check(p_R))).f_A, &l_HEAD_2274);
{ R21 * rv2275 = l_HEAD_2274;
return rv2275; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2276; memset(&l_N_2276, 0, sizeof l_N_2276);
l_N_2276 = p_L;
for (;;) {
if ((l_N_2276 == NULL)) goto L_end2277;
{
if (((((*(R21 *)rt_nil_check(l_N_2276))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(l_N_2276))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2278 = 1;
return rv2278; }
}
if ((((*(R21 *)rt_nil_check(l_N_2276))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2276))).f_B))
{
{ rt_int rv2279 = 1;
return rv2279; }
}
}
else if ((!(((*(R21 *)rt_nil_check(l_N_2276))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2276))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2276))).f_C)))
{
{ rt_int rv2280 = 1;
return rv2280; }
}
if ((!(((*(R21 *)rt_nil_check(l_N_2276))).f_B == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2276))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2276))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2276))).f_B))).f_B)))
{
{ rt_int rv2281 = 1;
return rv2281; }
}
}
else if (r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2276))).f_B))
{
{ rt_int rv2282 = 1;
return rv2282; }
}
}
}
l_N_2276 = ((*(R21 *)rt_nil_check(l_N_2276))).f_NEXT;
}
RT_B_TICK();
} L_end2277: ;
{ rt_int rv2283 = 0;
return rv2283; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R22 * l_C_2284; memset(&l_C_2284, 0, sizeof l_C_2284);
l_C_2284 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_C_2284))).f_GENP, p_NAME, 0);
{ R22 * rv2285 = l_C_2284;
return rv2285; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R18 * l_CS_2286; memset(&l_CS_2286, 0, sizeof l_CS_2286);
l_CS_2286 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2286 == NULL)) goto L_end2287;
{
if ((!(((*(R18 *)rt_nil_check(l_CS_2286))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2286))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2288 = ((*(R18 *)rt_nil_check(l_CS_2286))).f_R;
return rv2288; }
}
}
l_CS_2286 = ((*(R18 *)rt_nil_check(l_CS_2286))).f_UP;
}
RT_B_TICK();
} L_end2287: ;
{ R12 * rv2289 = NULL;
return rv2289; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2290; memset(&l_N_2290, 0, sizeof l_N_2290);
l_N_2290 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2290 == NULL)) goto L_end2291;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2290))).f_A, p_NAME))
{
{ rt_int rv2292 = 1;
return rv2292; }
}
l_N_2290 = ((*(R21 *)rt_nil_check(l_N_2290))).f_NEXT;
}
RT_B_TICK();
} L_end2291: ;
{ rt_int rv2293 = 0;
return rv2293; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2294; memset(&l_G_2294, 0, sizeof l_G_2294);
l_G_2294 = r_CUR_GENERIC();
if ((l_G_2294 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2294, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_2295; memset(&l_N_2295, 0, sizeof l_N_2295);
l_N_2295 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2296; memset(&l_G_2296, 0, sizeof l_G_2296);
l_G_2296 = r_CUR_GENERIC();
if ((l_G_2296 == NULL))
{
return;
}
for (;;) {
if ((l_N_2295 == NULL)) goto L_end2297;
{
{
R21 * l_T_2298; memset(&l_T_2298, 0, sizeof l_T_2298);
l_T_2298 = ((*(R21 *)rt_nil_check(l_N_2295))).f_A;
for (;;) {
if ((l_T_2298 == NULL)) goto L_end2299;
{
if ((!r_IN_WHERE(l_G_2296, ((*(R21 *)rt_nil_check(l_T_2298))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R21 *)rt_nil_check(l_T_2298))).f_NAME);
}
l_T_2298 = ((*(R21 *)rt_nil_check(l_T_2298))).f_NEXT;
}
RT_B_TICK();
} L_end2299: ;
}
l_N_2295 = ((*(R21 *)rt_nil_check(l_N_2295))).f_NEXT;
}
RT_B_TICK();
} L_end2297: ;
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2300; memset(&l_P_2300, 0, sizeof l_P_2300);
l_P_2300 = p_A;
for (;;) {
if ((l_P_2300 == NULL)) goto L_end2301;
{
if (((((*(R21 *)rt_nil_check(l_P_2300))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2300))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2302 = 1;
return rv2302; }
}
l_P_2300 = ((*(R21 *)rt_nil_check(l_P_2300))).f_NEXT;
}
RT_B_TICK();
} L_end2301: ;
{ rt_int rv2303 = 0;
return rv2303; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2304; memset(&l_ENTERED_2304, 0, sizeof l_ENTERED_2304);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2304 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2305; memset(&l_SAVED_SEG_2305, 0, sizeof l_SAVED_SEG_2305);
l_SAVED_SEG_2305 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2305;
}
if (l_ENTERED_2304)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2306; memset(&l_R_2306, 0, sizeof l_R_2306);
l_R_2306 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2307; memset(&l_P_2307, 0, sizeof l_P_2307);
R28 * l_TAIL_2308; memset(&l_TAIL_2308, 0, sizeof l_TAIL_2308);
l_TAIL_2308 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2307 = ((*(R21 *)rt_nil_check(l_R_2306))).f_A;
for (;;) {
if ((l_P_2307 == NULL)) goto L_end2309;
{
if (((((*(R21 *)rt_nil_check(l_P_2307))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2307))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2307 = ((*(R21 *)rt_nil_check(l_P_2307))).f_NEXT;
}
RT_B_TICK();
} L_end2309: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2306))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R21 * l_N_2310; memset(&l_N_2310, 0, sizeof l_N_2310);
l_N_2310 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2306))).f_D))).f_B;
for (;;) {
if ((l_N_2310 == NULL)) goto L_end2311;
{
{
R21 * l_T_2312; memset(&l_T_2312, 0, sizeof l_T_2312);
l_T_2312 = ((*(R21 *)rt_nil_check(l_N_2310))).f_A;
for (;;) {
if ((l_T_2312 == NULL)) goto L_end2313;
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2312))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2312))).f_B))).f_B)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_T_2312))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R21 *)rt_nil_check(l_T_2312))).f_NAME);
}
l_T_2312 = ((*(R21 *)rt_nil_check(l_T_2312))).f_NEXT;
}
RT_B_TICK();
} L_end2313: ;
}
l_N_2310 = ((*(R21 *)rt_nil_check(l_N_2310))).f_NEXT;
}
RT_B_TICK();
} L_end2311: ;
}
}
l_P_2307 = ((*(R21 *)rt_nil_check(l_R_2306))).f_A;
for (;;) {
if ((l_P_2307 == NULL)) goto L_end2314;
{
{
R28 * l_PM_2315; memset(&l_PM_2315, 0, sizeof l_PM_2315);
l_PM_2315 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2315)), ({ R28 rc2316; memset(&rc2316, 0, sizeof rc2316);  S_R10(&rc2316.f_NAME, ((*(R21 *)rt_nil_check(l_P_2307))).f_NAME, 0); rc2316.f_MODE = ((*(R21 *)rt_nil_check(l_P_2307))).f_IV; rc2316.f_T = NULL; rc2316.f_TS = ((*(R21 *)rt_nil_check(l_P_2307))).f_B; rc2316.f_NEXT = NULL; rc2316; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2306))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2307))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2307))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R21 *)rt_nil_check(l_P_2307))).f_B == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_2307))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R21 *)rt_nil_check(l_P_2307))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2307))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_P_2307))).f_B, NULL, r_OWN_NAMES(l_R_2306)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2307))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2315))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2307))).f_B);
}
if ((l_TAIL_2308 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2315;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2308))).f_NEXT = l_PM_2315;
}
l_TAIL_2308 = l_PM_2315;
}
l_P_2307 = ((*(R21 *)rt_nil_check(l_P_2307))).f_NEXT;
}
RT_B_TICK();
} L_end2314: ;
if ((!(((*(R21 *)rt_nil_check(l_R_2306))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_R_2306))).f_B, NULL, r_OWN_NAMES(l_R_2306)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_2306))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R28 * l_LAST_2317; memset(&l_LAST_2317, 0, sizeof l_LAST_2317);
l_LAST_2317 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R28 *)rt_nil_check(l_LAST_2317))).f_NEXT == NULL)) goto L_end2318;
{
l_LAST_2317 = ((*(R28 *)rt_nil_check(l_LAST_2317))).f_NEXT;
}
RT_B_TICK();
} L_end2318: ;
if ((((!(l_LAST_2317 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R28 *)rt_nil_check(l_LAST_2317))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R28 *)rt_nil_check(l_LAST_2317))).f_T)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_2306))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
}
}
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2319; memset(&l_R_2319, 0, sizeof l_R_2319);
l_R_2319 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2320; memset(&l_T_2320, 0, sizeof l_T_2320);
if ((((*(R21 *)rt_nil_check(l_R_2319))).f_B == NULL))
{
{ R22 * rv2321 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2321; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2322; memset(&l_P_2322, 0, sizeof l_P_2322);
l_P_2322 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2322 == NULL)) goto L_end2323;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2322))).f_T == NULL)))
{
{
R12 * l_V_2324; memset(&l_V_2324, 0, sizeof l_V_2324);
l_V_2324 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2322))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2324))).f_T = ((*(R28 *)rt_nil_check(l_P_2322))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2324))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2322))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2324))).f_INPUT = 1;
r_DEFINE(l_V_2324, ((*(R21 *)rt_nil_check(l_R_2319))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2322))).f_T, ((*(R12 *)rt_nil_check(l_V_2324))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2319))).f_LINE, 0);
}
}
l_P_2322 = ((*(R28 *)rt_nil_check(l_P_2322))).f_NEXT;
}
RT_B_TICK();
} L_end2323: ;
}
l_T_2320 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2319))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2325 = l_T_2320;
return rv2325; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2326; memset(&l_PS_2326, 0, sizeof l_PS_2326);
S_R10(&l_PS_2326, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2327; memset(&l_SEP_2327, 0, sizeof l_SEP_2327);
S_R10(&l_SEP_2327, r_MK(rt_str("", 0)), 0);
R28 * l_P_2328; memset(&l_P_2328, 0, sizeof l_P_2328);
l_P_2328 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2326, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2327, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2328 == NULL)) goto L_end2329;
{
if ((((*(R28 *)rt_nil_check(l_P_2328))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2328))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2328))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2326, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2326, l_SEP_2327, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2328))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2328))).f_NAME)), 0);
S_R10(&l_SEP_2327, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2326, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2326, l_SEP_2327, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2328))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2328))).f_NAME)), 0);
S_R10(&l_SEP_2327, r_MK(rt_str(", ", 2)), 0);
}
l_P_2328 = ((*(R28 *)rt_nil_check(l_P_2328))).f_NEXT;
}
RT_B_TICK();
} L_end2329: ;
if (((l_PS_2326).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2326, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2330 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2326);
return rv2330; }
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
R25 * l_B_2331; memset(&l_B_2331, 0, sizeof l_B_2331);
l_B_2331 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2332; memset(&l_I_2332, 0, sizeof l_I_2332);
l_I_2332 = ((rt_int)0LL);
for (;;) {
if ((l_B_2331 == NULL)) goto L_end2333;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2331))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2331))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2332)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2331))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2331))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2331))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2331))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2332)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2331))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2332), p_PC, r_NUM(l_I_2332)), ((*(R25 *)rt_nil_check(l_B_2331))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2332 = rt_add(l_I_2332, ((rt_int)1LL));
l_B_2331 = ((*(R25 *)rt_nil_check(l_B_2331))).f_NEXT;
}
RT_B_TICK();
} L_end2333: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2334; memset(&l_U_2334, 0, sizeof l_U_2334);
l_U_2334 = r_REAL_TYPE(p_T);
R24 * l_F_2335; memset(&l_F_2335, 0, sizeof l_F_2335);
l_F_2335 = ((*(R22 *)rt_nil_check(l_U_2334))).f_FIELDS;
R25 * l_A_2336; memset(&l_A_2336, 0, sizeof l_A_2336);
l_A_2336 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2335 == NULL) || (l_A_2336 == NULL))) goto L_end2337;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2335))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2336))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2336))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2335))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2336 = ((*(R25 *)rt_nil_check(l_A_2336))).f_NEXT;
}
l_F_2335 = ((*(R24 *)rt_nil_check(l_F_2335))).f_NEXT;
}
RT_B_TICK();
} L_end2337: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2338 = 0;
return rv2338; }
}
{ rt_int rv2339 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2339; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2340 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2340; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2341; memset(&l_OLD_2341, 0, sizeof l_OLD_2341);
l_OLD_2341 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2341 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2341))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2341))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2341))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2342; memset(&l_G_2342, 0, sizeof l_G_2342);
l_G_2342 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2342))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2342))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2342))).f_INPUT = 1;
r_DEFINE(l_G_2342, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2343; memset(&l_B_2343, 0, sizeof l_B_2343);
l_B_2343 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2343)), ({ R20 rc2344; memset(&rc2344, 0, sizeof rc2344);  S_R10(&rc2344.f_NAME, r_NO_TEXT(), 0); rc2344.f_T = NULL; S_R10(&rc2344.f_C, r_NO_TEXT(), 0); rc2344.f_HASMV = 0; rc2344.f_MV = ((rt_int)0LL); rc2344.f_R = NULL; rc2344.f_NEXT = NULL; rc2344; }), 0);
{ R20 * rv2345 = l_B_2343;
return rv2345; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2346; memset(&l_B_2346, 0, sizeof l_B_2346);
l_B_2346 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2346)), ({ R20 rc2347; memset(&rc2347, 0, sizeof rc2347);  S_R10(&rc2347.f_NAME, p_NAME, 0); rc2347.f_T = p_T; S_R10(&rc2347.f_C, r_NO_TEXT(), 0); rc2347.f_HASMV = (p_M).f_OK; rc2347.f_MV = (p_M).f_V; rc2347.f_R = p_R; rc2347.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2347; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2346))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2346;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2348; memset(&l_B_2348, 0, sizeof l_B_2348);
l_B_2348 = p_BS;
for (;;) {
if ((l_B_2348 == NULL)) goto L_end2349;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2348))).f_NAME, p_NAME))
{
{ R20 * rv2350 = l_B_2348;
return rv2350; }
}
l_B_2348 = ((*(R20 *)rt_nil_check(l_B_2348))).f_NEXT;
}
RT_B_TICK();
} L_end2349: ;
{ R20 * rv2351 = NULL;
return rv2351; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2352; memset(&l_RT_2352, 0, sizeof l_RT_2352);
l_RT_2352 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2353 = 1;
return rv2353; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2354 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2354; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2355 = 1;
return rv2355; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2356 = 1;
return rv2356; }
}
{
R20 * l_B_2357; memset(&l_B_2357, 0, sizeof l_B_2357);
l_B_2357 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2357 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2357))).f_T == NULL))
{
{ rt_int rv2358 = 0;
return rv2358; }
}
{ rt_int rv2359 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2357))).f_T, p_T);
return rv2359; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2360 = 0;
return rv2360; }
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
{ rt_int rv2361 = 1;
return rv2361; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_ARR)))
{
{ rt_int rv2362 = 0;
return rv2362; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2352))).f_DIMS)))
{
{ rt_int rv2363 = 0;
return rv2363; }
}
{ rt_int rv2364 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2352))).f_ELEM, p_BS);
return rv2364; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2365 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2365; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2366 = 0;
return rv2366; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2352))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2352))).f_MHI, p_BS))))
{
{ rt_int rv2367 = 0;
return rv2367; }
}
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R21 *)rt_nil_check(p_TS))).f_C, l_RT_2352, p_BS))))
{
{ rt_int rv2368 = 0;
return rv2368; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_INT)))
{
{ rt_int rv2369 = 0;
return rv2369; }
}
{ rt_int rv2370 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2352))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2370; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2371 = ((((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2352))).f_SCALE == ((rt_int)0LL)));
return rv2371; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2372 = 0;
return rv2372; }
}
{ rt_int rv2373 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2352))).f_SCALE), p_BS);
return rv2373; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2374 = (((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_BOOL);
return rv2374; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2375 = ((((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2352, p_BS));
return rv2375; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_STR)))
{
{ rt_int rv2376 = 0;
return rv2376; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2377 = 1;
return rv2377; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2352))).f_BASE == NULL)))
{
{ rt_int rv2378 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2352))).f_BASE, p_BS);
return rv2378; }
}
{ rt_int rv2379 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2379; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2380 = ((((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2352, p_BS));
return rv2380; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2381 = (((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_SEM);
return rv2381; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_PTR)))
{
{ rt_int rv2382 = 0;
return rv2382; }
}
{ rt_int rv2383 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2352), p_BS);
return rv2383; }
}
{
R12 * l_Y_2384; memset(&l_Y_2384, 0, sizeof l_Y_2384);
l_Y_2384 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2384 == NULL))
{
{ rt_int rv2385 = 0;
return rv2385; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2384))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2384))).f_DECL == NULL)))
{
{ rt_int rv2386 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2384))).f_T, p_T);
return rv2386; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2384))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2387 = 0;
return rv2387; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2384))))
{
{ rt_int rv2388 = 0;
return rv2388; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2384))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2352))).f_KIND == g_T_REC)))
{
{ rt_int rv2389 = 0;
return rv2389; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2352))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2390 = 0;
return rv2390; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2352))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2384))))
{
{ rt_int rv2391 = 0;
return rv2391; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2392 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2392; }
}
{ rt_int rv2393 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2384))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2384))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2352, p_BS);
return rv2393; }
}
{
R21 * l_F_2394; memset(&l_F_2394, 0, sizeof l_F_2394);
l_F_2394 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2384))).f_DECL))).f_A;
R21 * l_A_2395; memset(&l_A_2395, 0, sizeof l_A_2395);
l_A_2395 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2396; memset(&l_V_2396, 0, sizeof l_V_2396);
l_V_2396 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2397; memset(&l_CLASS_2397, 0, sizeof l_CLASS_2397);
l_CLASS_2397 = r_RECORD_CLASS_OF(l_RT_2352);
for (;;) {
if ((l_F_2394 == NULL)) goto L_end2398;
{
{
R21 * l_N_2399; memset(&l_N_2399, 0, sizeof l_N_2399);
l_N_2399 = ((*(R21 *)rt_nil_check(l_F_2394))).f_A;
for (;;) {
if ((l_N_2399 == NULL)) goto L_end2400;
{
if ((l_A_2395 == NULL))
{
{ rt_int rv2401 = 0;
return rv2401; }
}
if ((((*(R21 *)rt_nil_check(l_F_2394))).f_B == NULL))
{
if ((!(l_CLASS_2397 == NULL)))
{
{
R20 * l_B_2402; memset(&l_B_2402, 0, sizeof l_B_2402);
l_B_2402 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2397))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2399))).f_NAME);
if ((!(l_B_2402 == NULL)))
{
if ((!r_UNIFY(l_A_2395, ((*(R20 *)rt_nil_check(l_B_2402))).f_T, p_BS)))
{
{ rt_int rv2403 = 0;
return rv2403; }
}
}
}
}
}
else
{
if ((!(l_V_2396 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2395))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2395))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2395))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2404; memset(&l_M_2404, 0, sizeof l_M_2404);
S_R23(&l_M_2404, r_MANIFEST(l_A_2395), 0);
if (((l_M_2404).f_OK && (((*(R25 *)rt_nil_check(l_V_2396))).f_MLO).f_OK))
{
if ((!((l_M_2404).f_V == (((*(R25 *)rt_nil_check(l_V_2396))).f_MLO).f_V)))
{
{ rt_int rv2405 = 0;
return rv2405; }
}
}
}
}
l_V_2396 = ((*(R25 *)rt_nil_check(l_V_2396))).f_NEXT;
}
}
l_A_2395 = ((*(R21 *)rt_nil_check(l_A_2395))).f_NEXT;
l_N_2399 = ((*(R21 *)rt_nil_check(l_N_2399))).f_NEXT;
}
RT_B_TICK();
} L_end2400: ;
}
l_F_2394 = ((*(R21 *)rt_nil_check(l_F_2394))).f_NEXT;
}
RT_B_TICK();
} L_end2398: ;
}
{ rt_int rv2406 = 1;
return rv2406; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R21 * p_A, R22 * p_RT, R20 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2407 = 1;
return rv2407; }
}
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2408 = 1;
return rv2408; }
}
{
R10 l_KEY_2409; memset(&l_KEY_2409, 0, sizeof l_KEY_2409);
S_R10(&l_KEY_2409, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN))), 0);
R20 * l_B_2410; memset(&l_B_2410, 0, sizeof l_B_2410);
l_B_2410 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2409);
if ((!(l_B_2410 == NULL)))
{
{ rt_int rv2411 = (((*(R20 *)rt_nil_check(l_B_2410))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2411; }
}
r_ADD_BIND(l_KEY_2409, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2412 = 1;
return rv2412; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R21 * p_R, R22 * p_RT, R20 * p_BS) { RT_B_TICK(); 
R21 * l_A_2413; memset(&l_A_2413, 0, sizeof l_A_2413);
l_A_2413 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R21 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2414 = 0;
return rv2414; }
}
{
R10 l_SIGNING_2415; memset(&l_SIGNING_2415, 0, sizeof l_SIGNING_2415);
S_R10(&l_SIGNING_2415, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2413 == NULL)))
{
if ((!((r_TEQS(((*(R21 *)rt_nil_check(l_A_2413))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R21 *)rt_nil_check(l_A_2413))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2416 = 1;
return rv2416; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_A_2413))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(l_A_2413))).f_A == NULL))))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2413))).f_A))).f_NEXT == NULL)))
{
S_R10(&l_SIGNING_2415, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2413))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2417 = 0;
return rv2417; }
}
if ((!(((*(R21 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2415))))
{
{ rt_int rv2418 = 0;
return rv2418; }
}
}
}
{ rt_int rv2419 = 1;
return rv2419; }
}
}
if ((l_A_2413 == NULL))
{
{ rt_int rv2420 = 1;
return rv2420; }
}
{ rt_int rv2421 = r_TEQ(((*(R21 *)rt_nil_check(p_R))).f_NAME, ((*(R21 *)rt_nil_check(l_A_2413))).f_NAME);
return rv2421; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R21 * l_R_2422; memset(&l_R_2422, 0, sizeof l_R_2422);
l_R_2422 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2422 == NULL))
{
{ rt_int rv2423 = 0;
return rv2423; }
}
if ((((*(R21 *)rt_nil_check(l_R_2422))).f_KIND == g_TS_GEN))
{
{ rt_int rv2424 = 0;
return rv2424; }
}
{ rt_int rv2425 = (((((r_TEQS(((*(R21 *)rt_nil_check(l_R_2422))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2422))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2422))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2422))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2422))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2422))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2425; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2426; memset(&l_R_2426, 0, sizeof l_R_2426);
l_R_2426 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2427 = NULL;
return rv2427; }
}
for (;;) {
if ((l_R_2426 == NULL)) goto L_end2428;
{
if ((((*(R12 *)rt_nil_check(l_R_2426))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2429 = l_R_2426;
return rv2429; }
}
l_R_2426 = ((*(R12 *)rt_nil_check(l_R_2426))).f_INSTANCES;
}
RT_B_TICK();
} L_end2428: ;
{ R12 * rv2430 = NULL;
return rv2430; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2431 = 1;
return rv2431; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2432 = 1;
return rv2432; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2433 = 1;
return rv2433; }
}
{
R20 * l_B_2434; memset(&l_B_2434, 0, sizeof l_B_2434);
l_B_2434 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2434 == NULL)))
{
{ rt_int rv2435 = ((((*(R20 *)rt_nil_check(l_B_2434))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2434))).f_MV == (p_M).f_V));
return rv2435; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2436 = 0;
return rv2436; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2437 = 1;
return rv2437; }
}
{
R23 l_V_2438; memset(&l_V_2438, 0, sizeof l_V_2438);
S_R23(&l_V_2438, r_MANIFEST(p_A), 0);
if (((l_V_2438).f_OK && (p_M).f_OK))
{
{ rt_int rv2439 = ((l_V_2438).f_V == (p_M).f_V);
return rv2439; }
}
}
{ rt_int rv2440 = 1;
return rv2440; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2441 = 0;
return rv2441; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2442 = 0;
return rv2442; }
}
{ rt_int rv2443 = (!(r_FIND_ROUTINE_ARG(((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R27 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2443; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2444 = 1;
return rv2444; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2445 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2445; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2446; memset(&l_BS_2446, 0, sizeof l_BS_2446);
l_BS_2446 = r_NEW_BINDS();
R28 * l_P_2447; memset(&l_P_2447, 0, sizeof l_P_2447);
l_P_2447 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2448; memset(&l_A_2448, 0, sizeof l_A_2448);
l_A_2448 = p_ARGS;
for (;;) {
if ((l_P_2447 == NULL)) goto L_end2449;
{
if ((((*(R28 *)rt_nil_check(l_P_2447))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2448))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2447))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2448))).f_E), r_NO_MVAL(), NULL, l_BS_2446);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2447))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2447))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2447))).f_TS, ((*(R27 *)rt_nil_check(l_A_2448))).f_E, p_LINE), l_BS_2446);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2448))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2448))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2447))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2448))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2448))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2448))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2448))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2448))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2447))).f_TS, (((*(R27 *)rt_nil_check(l_A_2448))).f_V).f_T, l_BS_2446)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2447))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2447))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2447))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2447))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2448))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2446);
}
}
l_P_2447 = ((*(R28 *)rt_nil_check(l_P_2447))).f_NEXT;
l_A_2448 = ((*(R27 *)rt_nil_check(l_A_2448))).f_NEXT;
}
RT_B_TICK();
} L_end2449: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2446);
{
R12 * l_I_2450; memset(&l_I_2450, 0, sizeof l_I_2450);
l_I_2450 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2450 == NULL)) goto L_end2451;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2450))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2446))).f_NEXT))
{
{ R12 * rv2452 = l_I_2450;
return rv2452; }
}
l_I_2450 = ((*(R12 *)rt_nil_check(l_I_2450))).f_INSTANCES;
}
RT_B_TICK();
} L_end2451: ;
}
{ R12 * rv2453 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2446))).f_NEXT, p_ARGS);
return rv2453; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2454; memset(&l_P_2454, 0, sizeof l_P_2454);
l_P_2454 = p_A;
for (;;) {
if ((l_P_2454 == NULL)) goto L_end2455;
{
{
R20 * l_Q_2456; memset(&l_Q_2456, 0, sizeof l_Q_2456);
l_Q_2456 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2454))).f_NAME);
if ((l_Q_2456 == NULL))
{
{ rt_int rv2457 = 0;
return rv2457; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2454))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2456))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2454))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2456))).f_T == NULL)))
{
{ rt_int rv2458 = 0;
return rv2458; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2454))).f_T, ((*(R20 *)rt_nil_check(l_Q_2456))).f_T)))
{
{ rt_int rv2459 = 0;
return rv2459; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2454))).f_T, ((*(R20 *)rt_nil_check(l_Q_2456))).f_T)))
{
{ rt_int rv2460 = 0;
return rv2460; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2454))).f_T, ((*(R20 *)rt_nil_check(l_Q_2456))).f_T)))
{
{ rt_int rv2461 = 0;
return rv2461; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2454))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2456))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2454))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2456))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2454))).f_R == ((*(R20 *)rt_nil_check(l_Q_2456))).f_R))))
{
{ rt_int rv2462 = 0;
return rv2462; }
}
}
l_P_2454 = ((*(R20 *)rt_nil_check(l_P_2454))).f_NEXT;
}
RT_B_TICK();
} L_end2455: ;
{ rt_int rv2463 = 1;
return rv2463; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2464; memset(&l_RA_2464, 0, sizeof l_RA_2464);
l_RA_2464 = r_REAL_TYPE(p_A);
R22 * l_RB_2465; memset(&l_RB_2465, 0, sizeof l_RB_2465);
l_RB_2465 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2464))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2464))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2464))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2465))).f_KIND))))
{
{ rt_int rv2466 = 1;
return rv2466; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2464))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2465))).f_MLEN).f_OK))
{
{ rt_int rv2467 = ((((*(R22 *)rt_nil_check(l_RA_2464))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2465))).f_MLEN).f_V);
return rv2467; }
}
{ rt_int rv2468 = ((((*(R22 *)rt_nil_check(l_RA_2464))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2465))).f_MLEN).f_OK);
return rv2468; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2469; memset(&l_RA_2469, 0, sizeof l_RA_2469);
l_RA_2469 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2470; memset(&l_RB_2470, 0, sizeof l_RB_2470);
l_RB_2470 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2469 == NULL) || (l_RB_2470 == NULL)))
{
{ rt_int rv2471 = (l_RA_2469 == l_RB_2470);
return rv2471; }
}
if ((l_RA_2469 == l_RB_2470))
{
{ rt_int rv2472 = 1;
return rv2472; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2469))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2470))).f_NAME)))
{
{ rt_int rv2473 = 0;
return rv2473; }
}
{
R21 * l_X_2474; memset(&l_X_2474, 0, sizeof l_X_2474);
l_X_2474 = ((*(R21 *)rt_nil_check(l_RA_2469))).f_A;
R21 * l_Y_2475; memset(&l_Y_2475, 0, sizeof l_Y_2475);
l_Y_2475 = ((*(R21 *)rt_nil_check(l_RB_2470))).f_A;
for (;;) {
if (((l_X_2474 == NULL) || (l_Y_2475 == NULL))) goto L_end2476;
{
if (((((((*(R21 *)rt_nil_check(l_X_2474))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2474))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2475))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2475))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2474))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2475))).f_NAME)))
{
{ rt_int rv2477 = 0;
return rv2477; }
}
}
else
{
{
R23 l_MX_2478; memset(&l_MX_2478, 0, sizeof l_MX_2478);
S_R23(&l_MX_2478, r_MANIFEST(l_X_2474), 0);
R23 l_MY_2479; memset(&l_MY_2479, 0, sizeof l_MY_2479);
S_R23(&l_MY_2479, r_MANIFEST(l_Y_2475), 0);
if (((!((l_MX_2478).f_OK == (l_MY_2479).f_OK)) || (!((l_MX_2478).f_V == (l_MY_2479).f_V))))
{
{ rt_int rv2480 = 0;
return rv2480; }
}
}
}
l_X_2474 = ((*(R21 *)rt_nil_check(l_X_2474))).f_NEXT;
l_Y_2475 = ((*(R21 *)rt_nil_check(l_Y_2475))).f_NEXT;
}
RT_B_TICK();
} L_end2476: ;
{ rt_int rv2481 = ((((l_X_2474 == NULL) && (l_Y_2475 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2469))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2470))).f_B == NULL));
return rv2481; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2482 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2482; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R21 * p_TS, R21 * p_E, R20 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2483; memset(&l_Y_2483, 0, sizeof l_Y_2483);
l_Y_2483 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2484; memset(&l_FOUND_2484, 0, sizeof l_FOUND_2484);
l_FOUND_2484 = NULL;
R20 * l_BS_2485; memset(&l_BS_2485, 0, sizeof l_BS_2485);
l_BS_2485 = p_BS0;
if ((l_BS_2485 == NULL))
{
l_BS_2485 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2483 == NULL)) goto L_end2486;
{
if ((((*(R12 *)rt_nil_check(l_Y_2483))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2487; memset(&l_R_2487, 0, sizeof l_R_2487);
l_R_2487 = r_ORIGINAL(l_Y_2483);
R20 * l_TRY_2488; memset(&l_TRY_2488, 0, sizeof l_TRY_2488);
l_TRY_2488 = r_NEW_BINDS();
((*(R20 *)rt_nil_check(l_TRY_2488))).f_NEXT = ((*(R20 *)rt_nil_check(l_BS_2485))).f_NEXT;
r_ROUTINE_HEADER(l_R_2487);
if ((((!((*(R12 *)rt_nil_check(l_R_2487))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2487)) && r_TEMPLATE_FITS(p_TS, l_R_2487, l_TRY_2488)))
{
if (((!(l_FOUND_2484 == NULL)) && (!(l_FOUND_2484 == l_R_2487))))
{
if ((!p_STRICT))
{
{ R12 * rv2489 = NULL;
return rv2489; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2484 = l_R_2487;
}
}
}
l_Y_2483 = r_LOOKUP_NEXT(l_Y_2483);
}
RT_B_TICK();
} L_end2486: ;
if ((l_FOUND_2484 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2490 = NULL;
return rv2490; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2484))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2491 = NULL;
return rv2491; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2484, l_BS_2485)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2484);
}
{ R12 * rv2492 = l_FOUND_2484;
return rv2492; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R21 * p_E, R12 * p_R) { RT_B_TICK(); 
R21 * l_A_2493; memset(&l_A_2493, 0, sizeof l_A_2493);
l_A_2493 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R28 * l_Q_2494; memset(&l_Q_2494, 0, sizeof l_Q_2494);
l_Q_2494 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2495 = 1;
return rv2495; }
}
if (((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2496 = 0;
return rv2496; }
}
for (;;) {
if (((l_A_2493 == NULL) || (l_Q_2494 == NULL))) goto L_end2497;
{
if ((((*(R28 *)rt_nil_check(l_Q_2494))).f_T == NULL))
{
{ rt_int rv2498 = 0;
return rv2498; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2493)), ((*(R28 *)rt_nil_check(l_Q_2494))).f_T)))
{
{ rt_int rv2499 = 0;
return rv2499; }
}
l_A_2493 = ((*(R21 *)rt_nil_check(l_A_2493))).f_NEXT;
l_Q_2494 = ((*(R28 *)rt_nil_check(l_Q_2494))).f_NEXT;
}
RT_B_TICK();
} L_end2497: ;
if (((!(l_A_2493 == NULL)) || (!(l_Q_2494 == NULL))))
{
{ rt_int rv2500 = 0;
return rv2500; }
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2501 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2501; }
}
{ rt_int rv2502 = 1;
return rv2502; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R21 * p_TS, R12 * p_R, R20 * p_BS) { RT_B_TICK(); 
R21 * l_P_2503; memset(&l_P_2503, 0, sizeof l_P_2503);
l_P_2503 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R28 * l_Q_2504; memset(&l_Q_2504, 0, sizeof l_Q_2504);
l_Q_2504 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2505 = 0;
return rv2505; }
}
for (;;) {
if (((l_P_2503 == NULL) || (l_Q_2504 == NULL))) goto L_end2506;
{
if ((!(((*(R21 *)rt_nil_check(l_P_2503))).f_IV == ((*(R28 *)rt_nil_check(l_Q_2504))).f_MODE)))
{
{ rt_int rv2507 = 0;
return rv2507; }
}
if (((((*(R21 *)rt_nil_check(l_P_2503))).f_B == NULL) || (((*(R28 *)rt_nil_check(l_Q_2504))).f_T == NULL)))
{
if (((!(((*(R21 *)rt_nil_check(l_P_2503))).f_B == NULL)) || (!(((*(R28 *)rt_nil_check(l_Q_2504))).f_T == NULL))))
{
{ rt_int rv2508 = 0;
return rv2508; }
}
}
else if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_2503))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2509 = 0;
return rv2509; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R21 *)rt_nil_check(l_P_2503))).f_B, ((*(R28 *)rt_nil_check(l_Q_2504))).f_T, p_BS)))
{
{ rt_int rv2510 = 0;
return rv2510; }
}
l_P_2503 = ((*(R21 *)rt_nil_check(l_P_2503))).f_NEXT;
l_Q_2504 = ((*(R28 *)rt_nil_check(l_Q_2504))).f_NEXT;
}
RT_B_TICK();
} L_end2506: ;
if (((!(l_P_2503 == NULL)) || (!(l_Q_2504 == NULL))))
{
{ rt_int rv2511 = 0;
return rv2511; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R21 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2512 = 0;
return rv2512; }
}
}
{
R21 * l_X_2513; memset(&l_X_2513, 0, sizeof l_X_2513);
l_X_2513 = ((*(R21 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2513 == NULL)) goto L_end2514;
{
if ((!r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R21 *)rt_nil_check(l_X_2513))).f_NAME)))
{
{ rt_int rv2515 = 0;
return rv2515; }
}
l_X_2513 = ((*(R21 *)rt_nil_check(l_X_2513))).f_NEXT;
}
RT_B_TICK();
} L_end2514: ;
}
{ rt_int rv2516 = 1;
return rv2516; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2517 = r_UNIFY(p_TS, p_T, p_BS);
return rv2517; }
}
{ rt_int rv2518 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2518; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2519 = 0;
return rv2519; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2520 = 1;
return rv2520; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2521 = 1;
return rv2521; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2522 = 1;
return rv2522; }
}
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2523 = 1;
return rv2523; }
}
{ rt_int rv2524 = 0;
return rv2524; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2525; memset(&l_NEEDL_2525, 0, sizeof l_NEEDL_2525);
l_NEEDL_2525 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2526; memset(&l_SAVED_2526, 0, sizeof l_SAVED_2526);
l_SAVED_2526 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2525 == NULL)) goto L_end2527;
{
{
R21 * l_T_2528; memset(&l_T_2528, 0, sizeof l_T_2528);
l_T_2528 = ((*(R21 *)rt_nil_check(l_NEEDL_2525))).f_A;
for (;;) {
if ((l_T_2528 == NULL)) goto L_end2529;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2528))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2530; memset(&l_ARGS_2530, 0, sizeof l_ARGS_2530);
l_ARGS_2530 = NULL;
R27 * l_TAIL_2531; memset(&l_TAIL_2531, 0, sizeof l_TAIL_2531);
l_TAIL_2531 = NULL;
R21 * l_P_2532; memset(&l_P_2532, 0, sizeof l_P_2532);
l_P_2532 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2528))).f_B))).f_A;
R12 * l_R_2533; memset(&l_R_2533, 0, sizeof l_R_2533);
rt_int l_ENTERED_2534; memset(&l_ENTERED_2534, 0, sizeof l_ENTERED_2534);
l_ENTERED_2534 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2532 == NULL)) goto L_end2535;
{
{
R27 * l_A_2536; memset(&l_A_2536, 0, sizeof l_A_2536);
if ((((*(R21 *)rt_nil_check(l_P_2532))).f_B == NULL))
{
l_A_2536 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2536 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2532))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2536))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2532))).f_IV;
if ((l_TAIL_2531 == NULL))
{
l_ARGS_2530 = l_A_2536;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2531))).f_NEXT = l_A_2536;
}
l_TAIL_2531 = l_A_2536;
}
l_P_2532 = ((*(R21 *)rt_nil_check(l_P_2532))).f_NEXT;
}
RT_B_TICK();
} L_end2535: ;
if (l_ENTERED_2534)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2533 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2528))).f_NAME, l_ARGS_2530, p_LINE, 0);
if ((l_R_2533 == NULL))
{
l_R_2533 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2528))).f_NAME);
for (;;) {
if ((l_R_2533 == NULL)) goto L_end2537;
{
if ((((*(R12 *)rt_nil_check(l_R_2533))).f_KIND == g_Y_BUILTIN))
{
goto L_end2537;
}
l_R_2533 = r_LOOKUP_NEXT(l_R_2533);
}
RT_B_TICK();
} L_end2537: ;
}
if (((l_R_2533 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2528))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2528))).f_NAME);
}
if ((!(l_R_2533 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2533))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2533));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2533)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R21 *)rt_nil_check(l_T_2528))).f_NAME);
}
}
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2528))).f_NAME, NULL, r_NO_MVAL(), l_R_2533, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2528 = ((*(R21 *)rt_nil_check(l_T_2528))).f_NEXT;
}
RT_B_TICK();
} L_end2529: ;
}
l_NEEDL_2525 = ((*(R21 *)rt_nil_check(l_NEEDL_2525))).f_NEXT;
}
RT_B_TICK();
} L_end2527: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2526;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2538 = 0;
return rv2538; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R21 * l_A_2539; memset(&l_A_2539, 0, sizeof l_A_2539);
l_A_2539 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2539 == NULL)) goto L_end2540;
{
if ((((*(R21 *)rt_nil_check(l_A_2539))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2541 = 1;
return rv2541; }
}
l_A_2539 = ((*(R21 *)rt_nil_check(l_A_2539))).f_NEXT;
}
RT_B_TICK();
} L_end2540: ;
}
{ rt_int rv2542 = 0;
return rv2542; }
}
{
R12 * l_Y_2543; memset(&l_Y_2543, 0, sizeof l_Y_2543);
l_Y_2543 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2544; memset(&l_A_2544, 0, sizeof l_A_2544);
l_A_2544 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2545; memset(&l_F_2545, 0, sizeof l_F_2545);
if ((l_Y_2543 == NULL))
{
{ rt_int rv2546 = 0;
return rv2546; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2543))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2543))).f_DECL == NULL)))
{
{ rt_int rv2547 = 0;
return rv2547; }
}
l_F_2545 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2543))).f_DECL))).f_A;
for (;;) {
if ((l_F_2545 == NULL)) goto L_end2548;
{
{
R21 * l_N_2549; memset(&l_N_2549, 0, sizeof l_N_2549);
l_N_2549 = ((*(R21 *)rt_nil_check(l_F_2545))).f_A;
for (;;) {
if ((l_N_2549 == NULL)) goto L_end2550;
{
if ((l_A_2544 == NULL))
{
{ rt_int rv2551 = 0;
return rv2551; }
}
if (((((*(R21 *)rt_nil_check(l_F_2545))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2544))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2552 = 1;
return rv2552; }
}
l_A_2544 = ((*(R21 *)rt_nil_check(l_A_2544))).f_NEXT;
l_N_2549 = ((*(R21 *)rt_nil_check(l_N_2549))).f_NEXT;
}
RT_B_TICK();
} L_end2550: ;
}
l_F_2545 = ((*(R21 *)rt_nil_check(l_F_2545))).f_NEXT;
}
RT_B_TICK();
} L_end2548: ;
}
{ rt_int rv2553 = 0;
return rv2553; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2554; memset(&l_A_2554, 0, sizeof l_A_2554);
l_A_2554 = p_ARGS;
R12 * l_I_2555; memset(&l_I_2555, 0, sizeof l_I_2555);
l_I_2555 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2556; memset(&l_SAVED_2556, 0, sizeof l_SAVED_2556);
l_SAVED_2556 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2557; memset(&l_SAVED_SEG_2557, 0, sizeof l_SAVED_SEG_2557);
l_SAVED_SEG_2557 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2558; memset(&l_HOME_2558, 0, sizeof l_HOME_2558);
l_HOME_2558 = r_ENTER_HOME(p_G);
R28 * l_P_2559; memset(&l_P_2559, 0, sizeof l_P_2559);
l_P_2559 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2560; memset(&l_TAIL_2560, 0, sizeof l_TAIL_2560);
l_TAIL_2560 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2555)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2555))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2555))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2555))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2555))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2555))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2555;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2559 == NULL)) goto L_end2561;
{
{
R28 * l_PM_2562; memset(&l_PM_2562, 0, sizeof l_PM_2562);
l_PM_2562 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2562)), (*(R28 *)rt_nil_check(l_P_2559)), 0);
((*(R28 *)rt_nil_check(l_PM_2562))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2559))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2562))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2559))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2562))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2559))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2554))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2562))).f_T = (((*(R27 *)rt_nil_check(l_A_2554))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2562))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2562))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2562))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2562))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2562))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2559))).f_TS);
}
if ((!(((*(R28 *)rt_nil_check(l_P_2559))).f_TS == NULL)))
{
if (((((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2559))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2559))).f_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2559))).f_TS))).f_A == NULL))))) && ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2559))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2559))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2559))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R28 *)rt_nil_check(l_PM_2562))).f_T = r_MARK_GENP(((*(R28 *)rt_nil_check(l_PM_2562))).f_T, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2559))).f_TS))).f_NAME);
}
}
}
}
((*(R28 *)rt_nil_check(l_PM_2562))).f_TS = NULL;
if ((l_TAIL_2560 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2555))).f_PARAMS = l_PM_2562;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2560))).f_NEXT = l_PM_2562;
}
l_TAIL_2560 = l_PM_2562;
}
l_P_2559 = ((*(R28 *)rt_nil_check(l_P_2559))).f_NEXT;
l_A_2554 = ((*(R27 *)rt_nil_check(l_A_2554))).f_NEXT;
}
RT_B_TICK();
} L_end2561: ;
((*(R12 *)rt_nil_check(l_I_2555))).f_RESULT = r_RESULT_TYPE(l_I_2555);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2556;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2557;
r_LEAVE_HOME(p_G, l_HOME_2558);
S_R10(&((*(R12 *)rt_nil_check(l_I_2555))).f_FWD, r_C_HEADER(l_I_2555), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2555))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2555))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2555;
{ R12 * rv2563 = l_I_2555;
return rv2563; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2564 = 0;
return rv2564; }
}
{ rt_int rv2565 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2565; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2566; memset(&l_C_2566, 0, sizeof l_C_2566);
if ((p_TS == NULL))
{
{ R21 * rv2567 = NULL;
return rv2567; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2568; memset(&l_F_2568, 0, sizeof l_F_2568);
l_F_2568 = p_FORMALS;
R21 * l_A_2569; memset(&l_A_2569, 0, sizeof l_A_2569);
l_A_2569 = p_ARGS;
for (;;) {
if ((l_F_2568 == NULL)) goto L_end2570;
{
{
R21 * l_N_2571; memset(&l_N_2571, 0, sizeof l_N_2571);
l_N_2571 = ((*(R21 *)rt_nil_check(l_F_2568))).f_A;
for (;;) {
if ((l_N_2571 == NULL)) goto L_end2572;
{
if ((l_A_2569 == NULL))
{
{ R21 * rv2573 = p_TS;
return rv2573; }
}
if (((((*(R21 *)rt_nil_check(l_F_2568))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2571))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2574 = l_A_2569;
return rv2574; }
}
l_A_2569 = ((*(R21 *)rt_nil_check(l_A_2569))).f_NEXT;
l_N_2571 = ((*(R21 *)rt_nil_check(l_N_2571))).f_NEXT;
}
RT_B_TICK();
} L_end2572: ;
}
l_F_2568 = ((*(R21 *)rt_nil_check(l_F_2568))).f_NEXT;
}
RT_B_TICK();
} L_end2570: ;
}
{ R21 * rv2575 = p_TS;
return rv2575; }
}
l_C_2566 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2566))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2566))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2576 = l_C_2566;
return rv2576; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2577; memset(&l_C_2577, 0, sizeof l_C_2577);
l_C_2577 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2577)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2577))).f_NEXT = NULL;
{ R21 * rv2578 = l_C_2577;
return rv2578; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2579; memset(&l_P_2579, 0, sizeof l_P_2579);
l_P_2579 = p_L;
for (;;) {
if ((l_P_2579 == NULL)) goto L_end2580;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2579))).f_NAME, p_NAME))
{
{ rt_int rv2581 = 1;
return rv2581; }
}
l_P_2579 = ((*(R21 *)rt_nil_check(l_P_2579))).f_NEXT;
}
RT_B_TICK();
} L_end2580: ;
{ rt_int rv2582 = 0;
return rv2582; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2583; memset(&l_IS_2583, 0, sizeof l_IS_2583);
l_IS_2583 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2584 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2584; }
}
if ((l_IS_2583 == NULL))
{
{ rt_int rv2585 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2585; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2583))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2583))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2586 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2586; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2583))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2583))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2587 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2587; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2583))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2588 = 0;
return rv2588; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2589; memset(&l_ITEMS_2589, 0, sizeof l_ITEMS_2589);
l_ITEMS_2589 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2590; memset(&l_HEAD_2590, 0, sizeof l_HEAD_2590);
l_HEAD_2590 = NULL;
R21 * l_TAIL_2591; memset(&l_TAIL_2591, 0, sizeof l_TAIL_2591);
l_TAIL_2591 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2589 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2589))).f_A, &l_HEAD_2590, &l_TAIL_2591);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2589))).f_B, &l_HEAD_2590, &l_TAIL_2591);
{
R21 * l_R_2592; memset(&l_R_2592, 0, sizeof l_R_2592);
l_R_2592 = ((*(R21 *)rt_nil_check(l_ITEMS_2589))).f_C;
for (;;) {
if ((l_R_2592 == NULL)) goto L_end2593;
{
{
R12 * l_Z_2594; memset(&l_Z_2594, 0, sizeof l_Z_2594);
l_Z_2594 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2592))).f_NAME);
if (((l_Z_2594 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2592))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2592))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2592))).f_NAME);
}
for (;;) {
if ((l_Z_2594 == NULL)) goto L_end2595;
{
if ((((*(R12 *)rt_nil_check(l_Z_2594))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2596; memset(&l_O_2596, 0, sizeof l_O_2596);
l_O_2596 = r_ORIGINAL(l_Z_2594);
R21 * l_U_2597; memset(&l_U_2597, 0, sizeof l_U_2597);
r_COMPUTE_USES(l_O_2596);
l_U_2597 = ((*(R12 *)rt_nil_check(l_O_2596))).f_USES;
for (;;) {
if ((l_U_2597 == NULL)) goto L_end2598;
{
if ((!r_IN_IDENTS(l_HEAD_2590, ((*(R21 *)rt_nil_check(l_U_2597))).f_NAME)))
{
{
R21 * l_N_2599; memset(&l_N_2599, 0, sizeof l_N_2599);
l_N_2599 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2597))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2599))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2597))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2599))).f_IV = ((*(R21 *)rt_nil_check(l_U_2597))).f_IV;
r_ADD_LIST(l_N_2599, &l_HEAD_2590, &l_TAIL_2591);
}
}
l_U_2597 = ((*(R21 *)rt_nil_check(l_U_2597))).f_NEXT;
}
RT_B_TICK();
} L_end2598: ;
}
}
l_Z_2594 = r_LOOKUP_NEXT(l_Z_2594);
}
RT_B_TICK();
} L_end2595: ;
}
l_R_2592 = ((*(R21 *)rt_nil_check(l_R_2592))).f_NEXT;
}
RT_B_TICK();
} L_end2593: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2590;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2600; memset(&l_M_2600, 0, sizeof l_M_2600);
if ((p_B == NULL))
{
{ rt_int rv2601 = 0;
return rv2601; }
}
l_M_2600 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2600 == NULL)) goto L_end2602;
{
if ((((*(R21 *)rt_nil_check(l_M_2600))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2600))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2600))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2600))).f_C, p_NAME)))
{
{ rt_int rv2603 = 1;
return rv2603; }
}
}
l_M_2600 = ((*(R21 *)rt_nil_check(l_M_2600))).f_NEXT;
}
RT_B_TICK();
} L_end2602: ;
{ rt_int rv2604 = 0;
return rv2604; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2605; memset(&l_R_2605, 0, sizeof l_R_2605);
l_R_2605 = p_RS;
for (;;) {
if ((l_R_2605 == NULL)) goto L_end2606;
{
if ((((*(R21 *)rt_nil_check(l_R_2605))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2605));
if ((!(((*(R21 *)rt_nil_check(l_R_2605))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2605))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2605))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R21 *)rt_nil_check(l_R_2605))).f_E, ((*(R21 *)rt_nil_check(l_R_2605))).f_LINE);
}
}
l_R_2605 = ((*(R21 *)rt_nil_check(l_R_2605))).f_NEXT;
}
RT_B_TICK();
} L_end2606: ;
}
static void r_IMPORTS_KNOWN(R21 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R21 * l_P_2607; memset(&l_P_2607, 0, sizeof l_P_2607);
l_P_2607 = p_L;
for (;;) {
if ((l_P_2607 == NULL)) goto L_end2608;
{
{
R12 * l_V_2609; memset(&l_V_2609, 0, sizeof l_V_2609);
l_V_2609 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2607))).f_NAME);
if ((!(l_V_2609 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2609))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2609, ((*(R21 *)rt_nil_check(l_P_2607))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2609))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2607))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R21 *)rt_nil_check(l_P_2607))).f_NAME);
}
}
}
}
l_P_2607 = ((*(R21 *)rt_nil_check(l_P_2607))).f_NEXT;
}
RT_B_TICK();
} L_end2608: ;
}
static void r_INPUT_IMPORT_CONFLICT(R21 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_2610; memset(&l_R_2610, 0, sizeof l_R_2610);
l_R_2610 = ((*(R21 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_2610 == NULL)) goto L_end2611;
{
{
R12 * l_Z_2612; memset(&l_Z_2612, 0, sizeof l_Z_2612);
l_Z_2612 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2610))).f_NAME);
for (;;) {
if ((l_Z_2612 == NULL)) goto L_end2613;
{
if ((((*(R12 *)rt_nil_check(l_Z_2612))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2614; memset(&l_D_2614, 0, sizeof l_D_2614);
l_D_2614 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_2612)))).f_DECL;
if ((!(l_D_2614 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_D_2614))).f_KIND == g_N_ROUTINE) && (!(((*(R21 *)rt_nil_check(l_D_2614))).f_E == NULL))))
{
{
R21 * l_V_2615; memset(&l_V_2615, 0, sizeof l_V_2615);
l_V_2615 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2614))).f_E))).f_B;
for (;;) {
if ((l_V_2615 == NULL)) goto L_end2616;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_ITEMS))).f_A, ((*(R21 *)rt_nil_check(l_V_2615))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R21 *)rt_nil_check(l_V_2615))).f_NAME);
}
l_V_2615 = ((*(R21 *)rt_nil_check(l_V_2615))).f_NEXT;
}
RT_B_TICK();
} L_end2616: ;
}
}
}
}
}
l_Z_2612 = r_LOOKUP_NEXT(l_Z_2612);
}
RT_B_TICK();
} L_end2613: ;
}
l_R_2610 = ((*(R21 *)rt_nil_check(l_R_2610))).f_NEXT;
}
RT_B_TICK();
} L_end2611: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2617; memset(&l_P_2617, 0, sizeof l_P_2617);
l_P_2617 = p_L;
for (;;) {
if ((l_P_2617 == NULL)) goto L_end2618;
{
{
R12 * l_V_2619; memset(&l_V_2619, 0, sizeof l_V_2619);
l_V_2619 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2617))).f_NAME);
R21 * l_N_2620; memset(&l_N_2620, 0, sizeof l_N_2620);
l_N_2620 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2617))).f_LINE);
if ((l_V_2619 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2617))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2617))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2620))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2617))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2620))).f_IV = ((*(R12 *)rt_nil_check(l_V_2619))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2619))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2620, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2617 = ((*(R21 *)rt_nil_check(l_P_2617))).f_NEXT;
}
RT_B_TICK();
} L_end2618: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2621; memset(&l_IS_2621, 0, sizeof l_IS_2621);
l_IS_2621 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2622; memset(&l_U_2622, 0, sizeof l_U_2622);
l_U_2622 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2621 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2621))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2622 == NULL)) goto L_end2623;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2622))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2621))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2621))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2622))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2622))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!(((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2621))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2622))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2621))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2622))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2621))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2621))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2621))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2621))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2621))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2622))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2622))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2622))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2622 = ((*(R21 *)rt_nil_check(l_U_2622))).f_NEXT;
}
RT_B_TICK();
} L_end2623: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2624; memset(&l_R_2624, 0, sizeof l_R_2624);
l_R_2624 = p_RS;
for (;;) {
if ((l_R_2624 == NULL)) goto L_end2625;
{
{
R12 * l_Z_2626; memset(&l_Z_2626, 0, sizeof l_Z_2626);
l_Z_2626 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2624))).f_NAME);
for (;;) {
if ((l_Z_2626 == NULL)) goto L_end2627;
{
if ((((*(R12 *)rt_nil_check(l_Z_2626))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2628; memset(&l_O_2628, 0, sizeof l_O_2628);
l_O_2628 = r_ORIGINAL(l_Z_2626);
r_COMPUTE_USES(l_O_2628);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2628))).f_USES, p_NAME))
{
{ rt_int rv2629 = 1;
return rv2629; }
}
}
}
l_Z_2626 = r_LOOKUP_NEXT(l_Z_2626);
}
RT_B_TICK();
} L_end2627: ;
}
l_R_2624 = ((*(R21 *)rt_nil_check(l_R_2624))).f_NEXT;
}
RT_B_TICK();
} L_end2625: ;
{ rt_int rv2630 = 0;
return rv2630; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2631; memset(&l_M_2631, 0, sizeof l_M_2631);
l_M_2631 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2631 == NULL)) goto L_end2632;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2631))).f_NAME))
{
{ rt_int rv2633 = 1;
return rv2633; }
}
l_M_2631 = ((*(R12 *)rt_nil_check(l_M_2631))).f_MODL;
}
RT_B_TICK();
} L_end2632: ;
{ rt_int rv2634 = 0;
return rv2634; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2635 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2635; }
}
{ R10 rv2636 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2636; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2637; memset(&l_C_2637, 0, sizeof l_C_2637);
l_C_2637 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2637 == NULL)) goto L_end2638;
{
if ((((*(R17 *)rt_nil_check(l_C_2637))).f_KIND == ((rt_int)1LL)))
{
goto L_end2638;
}
if ((((*(R17 *)rt_nil_check(l_C_2637))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2639; memset(&l_H_2639, 0, sizeof l_H_2639);
l_H_2639 = ((*(R17 *)rt_nil_check(l_C_2637))).f_HANDLERS;
for (;;) {
if ((l_H_2639 == NULL)) goto L_end2640;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2639))).f_A, p_NAME))
{
{ rt_int rv2641 = 1;
return rv2641; }
}
l_H_2639 = ((*(R21 *)rt_nil_check(l_H_2639))).f_NEXT;
}
RT_B_TICK();
} L_end2640: ;
}
}
l_C_2637 = ((*(R17 *)rt_nil_check(l_C_2637))).f_NEXT;
}
RT_B_TICK();
} L_end2638: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2642 = 1;
return rv2642; }
}
}
{ rt_int rv2643 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2643; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2644; memset(&l_C_2644, 0, sizeof l_C_2644);
l_C_2644 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2644)), ({ R17 rc2645; memset(&rc2645, 0, sizeof rc2645);  rc2645.f_KIND = p_KIND; S_R10(&rc2645.f_NAME, p_NAME, 0); rc2645.f_HANDLERS = NULL; rc2645.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2645; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2644;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2646; memset(&l_C_2646, 0, sizeof l_C_2646);
l_C_2646 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2646 == NULL)) goto L_end2647;
{
if ((((*(R17 *)rt_nil_check(l_C_2646))).f_KIND == p_KIND))
{
{ R17 * rv2648 = l_C_2646;
return rv2648; }
}
if ((((*(R17 *)rt_nil_check(l_C_2646))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2649 = NULL;
return rv2649; }
}
if ((((*(R17 *)rt_nil_check(l_C_2646))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2646))).f_NAME));
}
l_C_2646 = ((*(R17 *)rt_nil_check(l_C_2646))).f_NEXT;
}
RT_B_TICK();
} L_end2647: ;
{ R17 * rv2650 = NULL;
return rv2650; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2651; memset(&l_C_2651, 0, sizeof l_C_2651);
l_C_2651 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2652; memset(&l_N_2652, 0, sizeof l_N_2652);
l_N_2652 = ((rt_int)0LL);
for (;;) {
if ((l_C_2651 == NULL)) goto L_end2653;
{
if ((((*(R17 *)rt_nil_check(l_C_2651))).f_KIND == ((rt_int)1LL)))
{
goto L_end2653;
}
if ((((*(R17 *)rt_nil_check(l_C_2651))).f_KIND == ((rt_int)3LL)))
{
l_N_2652 = rt_add(l_N_2652, ((rt_int)1LL));
}
l_C_2651 = ((*(R17 *)rt_nil_check(l_C_2651))).f_NEXT;
}
RT_B_TICK();
} L_end2653: ;
{ rt_int rv2654 = l_N_2652;
return rv2654; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2655; memset(&l_N_2655, 0, sizeof l_N_2655);
l_N_2655 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2655 == NULL)) goto L_end2656;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2655))).f_NAME, p_NAME))
{
{ R10 rv2657 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2657; }
}
l_N_2655 = ((*(R21 *)rt_nil_check(l_N_2655))).f_NEXT;
}
RT_B_TICK();
} L_end2656: ;
l_N_2655 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2655))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2655))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2655;
{ R10 rv2658 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2658; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2659; memset(&l_D_2659, 0, sizeof l_D_2659);
l_D_2659 = p_DECLS;
for (;;) {
if ((l_D_2659 == NULL)) goto L_end2660;
{
if (((((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2661; memset(&l_Y_2661, 0, sizeof l_Y_2661);
l_Y_2661 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2659))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2661))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2661))).f_DECL = l_D_2659;
r_DEFINE(l_Y_2661, ((*(R21 *)rt_nil_check(l_D_2659))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2659))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2659))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2659 = ((*(R21 *)rt_nil_check(l_D_2659))).f_NEXT;
}
RT_B_TICK();
} L_end2660: ;
l_D_2659 = p_DECLS;
for (;;) {
if ((l_D_2659 == NULL)) goto L_end2662;
{
if (((((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_REPTYPE)))
{
{
R21 * l_SEEN_2663; memset(&l_SEEN_2663, 0, sizeof l_SEEN_2663);
l_SEEN_2663 = NULL;
rt_int l_FOUND_2664; memset(&l_FOUND_2664, 0, sizeof l_FOUND_2664);
l_FOUND_2664 = 0;
r_REFERS(((*(R21 *)rt_nil_check(l_D_2659))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_2659))).f_NAME), p_DECLS, &l_SEEN_2663, &l_FOUND_2664);
if (l_FOUND_2664)
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_2659))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R21 *)rt_nil_check(l_D_2659))).f_NAME);
}
}
{
R21 * l_F_2665; memset(&l_F_2665, 0, sizeof l_F_2665);
l_F_2665 = ((*(R21 *)rt_nil_check(l_D_2659))).f_A;
for (;;) {
if ((l_F_2665 == NULL)) goto L_end2666;
{
if (((((*(R21 *)rt_nil_check(l_F_2665))).f_IV == ((rt_int)1LL)) && (((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_TYPE)))
{
{
R21 * l_N_2667; memset(&l_N_2667, 0, sizeof l_N_2667);
l_N_2667 = ((*(R21 *)rt_nil_check(l_F_2665))).f_A;
for (;;) {
if ((l_N_2667 == NULL)) goto L_end2668;
{
if (r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_D_2659))).f_B, ((*(R21 *)rt_nil_check(l_N_2667))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_2659))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R21 *)rt_nil_check(l_N_2667))).f_NAME);
}
l_N_2667 = ((*(R21 *)rt_nil_check(l_N_2667))).f_NEXT;
}
RT_B_TICK();
} L_end2668: ;
}
}
if ((!(((*(R21 *)rt_nil_check(l_F_2665))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R21 *)rt_nil_check(l_F_2665))).f_B, p_DECLS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2665))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_2665 = ((*(R21 *)rt_nil_check(l_F_2665))).f_NEXT;
}
RT_B_TICK();
} L_end2666: ;
}
}
l_D_2659 = ((*(R21 *)rt_nil_check(l_D_2659))).f_NEXT;
}
RT_B_TICK();
} L_end2662: ;
l_D_2659 = p_DECLS;
for (;;) {
if ((l_D_2659 == NULL)) goto L_end2669;
{
if ((((*(R21 *)rt_nil_check(l_D_2659))).f_KIND == g_N_TYPE))
{
{
R21 * l_F_2670; memset(&l_F_2670, 0, sizeof l_F_2670);
l_F_2670 = ((*(R21 *)rt_nil_check(l_D_2659))).f_A;
for (;;) {
if ((l_F_2670 == NULL)) goto L_end2671;
{
if (((((*(R21 *)rt_nil_check(l_F_2670))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_F_2670))).f_B == NULL))))
{
{
R22 * l_FT_2672; memset(&l_FT_2672, 0, sizeof l_FT_2672);
l_FT_2672 = r_REAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(l_F_2670))).f_B));
if (((!r_IS_SCALAR(l_FT_2672)) || (!(((*(R22 *)rt_nil_check(l_FT_2672))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2670))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2670 = ((*(R21 *)rt_nil_check(l_F_2670))).f_NEXT;
}
RT_B_TICK();
} L_end2671: ;
}
}
l_D_2659 = ((*(R21 *)rt_nil_check(l_D_2659))).f_NEXT;
}
RT_B_TICK();
} L_end2669: ;
}
static void r_REFERS(R21 * p_L, R10 p_TARGET, R21 * p_DECLS, R21 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R21 * l_N_2673; memset(&l_N_2673, 0, sizeof l_N_2673);
l_N_2673 = p_L;
for (;;) {
if (((l_N_2673 == NULL) || (*p_FOUND))) goto L_end2674;
{
if (((((*(R21 *)rt_nil_check(l_N_2673))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(l_N_2673))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_N_2673))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2673))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R21 *)rt_nil_check(l_N_2673))).f_NAME)))
{
{
R21 * l_M_2675; memset(&l_M_2675, 0, sizeof l_M_2675);
l_M_2675 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_N_2673))).f_LINE);
R21 * l_D_2676; memset(&l_D_2676, 0, sizeof l_D_2676);
l_D_2676 = p_DECLS;
S_R10(&((*(R21 *)rt_nil_check(l_M_2675))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2673))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_M_2675))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_2675;
for (;;) {
if ((l_D_2676 == NULL)) goto L_end2677;
{
if (((((((*(R21 *)rt_nil_check(l_D_2676))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2676))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R21 *)rt_nil_check(l_D_2676))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2673))).f_NAME)))
{
r_REFERS(((*(R21 *)rt_nil_check(l_D_2676))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_2676 = ((*(R21 *)rt_nil_check(l_D_2676))).f_NEXT;
}
RT_B_TICK();
} L_end2677: ;
}
}
r_REFERS(((*(R21 *)rt_nil_check(l_N_2673))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2673))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2673))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R21 *)rt_nil_check(l_N_2673))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2673))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2673))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2673))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_2673 = ((*(R21 *)rt_nil_check(l_N_2673))).f_NEXT;
}
RT_B_TICK();
} L_end2674: ;
}
static rt_int r_TAG_MISUSED(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2678; memset(&l_N_2678, 0, sizeof l_N_2678);
l_N_2678 = p_L;
for (;;) {
if ((l_N_2678 == NULL)) goto L_end2679;
{
if ((((*(R21 *)rt_nil_check(l_N_2678))).f_KIND == g_TS_NAME))
{
{
R21 * l_A_2680; memset(&l_A_2680, 0, sizeof l_A_2680);
l_A_2680 = ((*(R21 *)rt_nil_check(l_N_2678))).f_A;
for (;;) {
if ((l_A_2680 == NULL)) goto L_end2681;
{
if ((!((((((((*(R21 *)rt_nil_check(l_A_2680))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_2680))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R21 *)rt_nil_check(l_A_2680))).f_NAME, p_NAME)) && (((*(R21 *)rt_nil_check(l_A_2680))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_2680, p_NAME))
{
{ rt_int rv2682 = 1;
return rv2682; }
}
}
l_A_2680 = ((*(R21 *)rt_nil_check(l_A_2680))).f_NEXT;
}
RT_B_TICK();
} L_end2681: ;
}
if (((r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2678))).f_B, p_NAME) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2678))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2678))).f_E, p_NAME)))
{
{ rt_int rv2683 = 1;
return rv2683; }
}
}
else if (r_TAG_MISUSED1(l_N_2678, p_NAME))
{
{ rt_int rv2684 = 1;
return rv2684; }
}
l_N_2678 = ((*(R21 *)rt_nil_check(l_N_2678))).f_NEXT;
}
RT_B_TICK();
} L_end2679: ;
{ rt_int rv2685 = 0;
return rv2685; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R21 * p_N, R10 p_NAME) { RT_B_TICK(); 
rt_int l_K_2686; memset(&l_K_2686, 0, sizeof l_K_2686);
l_K_2686 = ((*(R21 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_2686 == g_TS_NAME))
{
{ rt_int rv2687 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv2687; }
}
if ((((((l_K_2686 == g_N_NAME) || (l_K_2686 == g_N_ENUMLIT)) || (l_K_2686 == g_N_APPLY))) && r_TEQ(((*(R21 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv2688 = 1;
return rv2688; }
}
{ rt_int rv2689 = ((((r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv2689; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R21 * p_L, R21 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv2690 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv2690; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R21 * p_L, R21 * *p_HEAD) { RT_B_TICK(); 
R21 * l_N_2691; memset(&l_N_2691, 0, sizeof l_N_2691);
l_N_2691 = p_L;
for (;;) {
if ((l_N_2691 == NULL)) goto L_end2692;
{
if (((((((*(R21 *)rt_nil_check(l_N_2691))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_N_2691))).f_KIND == g_N_PARAM))) && ((((*(R21 *)rt_nil_check(l_N_2691))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R21 * l_M_2693; memset(&l_M_2693, 0, sizeof l_M_2693);
l_M_2693 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_N_2691))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_M_2693))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2691))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_M_2693))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_2693;
}
}
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2691))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2691))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2691))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2691))).f_D, &(*p_HEAD));
l_N_2691 = ((*(R21 *)rt_nil_check(l_N_2691))).f_NEXT;
}
RT_B_TICK();
} L_end2692: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R21 * p_L, R21 * p_DECLS, R21 * p_EXCL) { RT_B_TICK(); 
R21 * l_N_2694; memset(&l_N_2694, 0, sizeof l_N_2694);
l_N_2694 = p_L;
for (;;) {
if ((l_N_2694 == NULL)) goto L_end2695;
{
if (((((*(R21 *)rt_nil_check(l_N_2694))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R21 *)rt_nil_check(l_N_2694))).f_NAME)))
{
}
else if ((((*(R21 *)rt_nil_check(l_N_2694))).f_KIND == g_N_NAME))
{
{
R21 * l_D_2696; memset(&l_D_2696, 0, sizeof l_D_2696);
l_D_2696 = p_DECLS;
R12 * l_Y_2697; memset(&l_Y_2697, 0, sizeof l_Y_2697);
l_Y_2697 = r_LOOKUP(((*(R21 *)rt_nil_check(l_N_2694))).f_NAME);
for (;;) {
if ((l_D_2696 == NULL)) goto L_end2698;
{
if (((((*(R21 *)rt_nil_check(l_D_2696))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R21 *)rt_nil_check(l_D_2696))).f_A, ((*(R21 *)rt_nil_check(l_N_2694))).f_NAME)))
{
{ rt_int rv2699 = 1;
return rv2699; }
}
l_D_2696 = ((*(R21 *)rt_nil_check(l_D_2696))).f_NEXT;
}
RT_B_TICK();
} L_end2698: ;
if ((!(l_Y_2697 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2697))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2697))).f_INPUT)))
{
{ rt_int rv2700 = 1;
return rv2700; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2694))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2694))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2694))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2694))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv2701 = 1;
return rv2701; }
}
l_N_2694 = ((*(R21 *)rt_nil_check(l_N_2694))).f_NEXT;
}
RT_B_TICK();
} L_end2695: ;
{ rt_int rv2702 = 0;
return rv2702; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2703; memset(&l_P_2703, 0, sizeof l_P_2703);
l_P_2703 = p_L;
for (;;) {
if ((l_P_2703 == NULL)) goto L_end2704;
{
if (((((*(R21 *)rt_nil_check(l_P_2703))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2703))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2705 = 1;
return rv2705; }
}
}
l_P_2703 = ((*(R21 *)rt_nil_check(l_P_2703))).f_NEXT;
}
RT_B_TICK();
} L_end2704: ;
{ rt_int rv2706 = 0;
return rv2706; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2707; memset(&l_A_2707, 0, sizeof l_A_2707);
l_A_2707 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2708; memset(&l_FOUND_2708, 0, sizeof l_FOUND_2708);
l_FOUND_2708 = NULL;
rt_int l_N_2709; memset(&l_N_2709, 0, sizeof l_N_2709);
l_N_2709 = ((rt_int)0LL);
R12 * l_Y_2710; memset(&l_Y_2710, 0, sizeof l_Y_2710);
l_Y_2710 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2707 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2707))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2707))).f_DECL == NULL)))
{
{ R22 * rv2711 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2711; }
}
}
for (;;) {
if ((l_Y_2710 == NULL)) goto L_end2712;
{
if (((((*(R12 *)rt_nil_check(l_Y_2710))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2710))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2710))).f_NAME) == l_Y_2710))
{
{
R22 * l_T_2713; memset(&l_T_2713, 0, sizeof l_T_2713);
l_T_2713 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2710))).f_DECL == NULL))
{
l_T_2713 = ((*(R12 *)rt_nil_check(l_Y_2710))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2710))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2710))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2710))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2710))).f_DECL))).f_B))).f_A)))
{
l_T_2713 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2710))).f_NAME, p_LINE);
}
}
if ((!(l_T_2713 == NULL)))
{
l_T_2713 = r_REAL_TYPE(l_T_2713);
if ((((*(R22 *)rt_nil_check(l_T_2713))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2713))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2713))).f_BASE == l_FOUND_2708))))
{
if ((!(l_FOUND_2708 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2708 = ((*(R22 *)rt_nil_check(l_T_2713))).f_BASE;
}
}
}
}
}
}
l_Y_2710 = ((*(R12 *)rt_nil_check(l_Y_2710))).f_SNEXT;
}
RT_B_TICK();
} L_end2712: ;
if ((l_FOUND_2708 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2714 = l_FOUND_2708;
return rv2714; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2715; memset(&l_R_2715, 0, sizeof l_R_2715);
l_R_2715 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2715))).f_BASE == NULL))
{
{ R22 * rv2716 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2716; }
}
{ R22 * rv2717 = ((*(R22 *)rt_nil_check(l_R_2715))).f_BASE;
return rv2717; }
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
R21 * l_S_2718; memset(&l_S_2718, 0, sizeof l_S_2718);
l_S_2718 = p_S0;
for (;;) {
if ((l_S_2718 == NULL)) goto L_end2719;
{
{
R21 * l_L_2720; memset(&l_L_2720, 0, sizeof l_L_2720);
l_L_2720 = l_S_2718;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2720))).f_KIND == g_N_LABELED))) goto L_end2721;
{
{
R12 * l_Y_2722; memset(&l_Y_2722, 0, sizeof l_Y_2722);
l_Y_2722 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2720))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2722))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2720))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2720))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2722))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2722, ((*(R21 *)rt_nil_check(l_L_2720))).f_LINE);
}
l_L_2720 = ((*(R21 *)rt_nil_check(l_L_2720))).f_A;
}
RT_B_TICK();
} L_end2721: ;
}
l_S_2718 = ((*(R21 *)rt_nil_check(l_S_2718))).f_NEXT;
}
RT_B_TICK();
} L_end2719: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2723; memset(&l_D_2723, 0, sizeof l_D_2723);
l_D_2723 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2724; memset(&l_S_2724, 0, sizeof l_S_2724);
l_S_2724 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2723 == NULL)) goto L_end2725;
{
if (((((*(R21 *)rt_nil_check(l_D_2723))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2723))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2723);
}
l_D_2723 = ((*(R21 *)rt_nil_check(l_D_2723))).f_NEXT;
}
RT_B_TICK();
} L_end2725: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2724 == NULL)) goto L_end2726;
{
r_STMT(l_S_2724);
l_S_2724 = ((*(R21 *)rt_nil_check(l_S_2724))).f_NEXT;
}
RT_B_TICK();
} L_end2726: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2727; memset(&l_F_2727, 0, sizeof l_F_2727);
S_R10(&l_F_2727, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2728; memset(&l_H_2728, 0, sizeof l_H_2728);
l_H_2728 = p_HANDLERS;
R10 l_WORD_2729; memset(&l_WORD_2729, 0, sizeof l_WORD_2729);
S_R10(&l_WORD_2729, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2727, l_F_2727));
r_PUSH_CTX(((rt_int)3LL), l_F_2727);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2727, l_F_2727, l_F_2727));
for (;;) {
if ((l_H_2728 == NULL)) goto L_end2730;
{
{
R21 * l_N_2731; memset(&l_N_2731, 0, sizeof l_N_2731);
l_N_2731 = ((*(R21 *)rt_nil_check(l_H_2728))).f_A;
R10 l_COND_2732; memset(&l_COND_2732, 0, sizeof l_COND_2732);
S_R10(&l_COND_2732, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2731 == NULL)) goto L_end2733;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2731))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2731))).f_NAME) || r_IN_HANDLERS(((*(R21 *)rt_nil_check(l_H_2728))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2731))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2731))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2731))).f_NAME);
}
S_R10(&l_COND_2732, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2732, l_F_2727, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2731))).f_NAME)), 0);
l_N_2731 = ((*(R21 *)rt_nil_check(l_N_2731))).f_NEXT;
}
RT_B_TICK();
} L_end2733: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2729, l_COND_2732));
S_R10(&l_WORD_2729, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2727, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2728))).f_B);
r_POP_CTX();
}
l_H_2728 = ((*(R21 *)rt_nil_check(l_H_2728))).f_NEXT;
}
RT_B_TICK();
} L_end2730: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2727));
}
static void r_INTERFERENCE(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2734; memset(&l_K_2734, 0, sizeof l_K_2734);
l_K_2734 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2734 == g_N_ASSIGN))
{
{
R21 * l_NAMES_2735; memset(&l_NAMES_2735, 0, sizeof l_NAMES_2735);
l_NAMES_2735 = NULL;
R21 * l_CALLS_2736; memset(&l_CALLS_2736, 0, sizeof l_CALLS_2736);
l_CALLS_2736 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2735, &l_CALLS_2736);
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_B, &l_NAMES_2735, &l_CALLS_2736);
r_CHECK_INTERFERENCE(l_NAMES_2735, l_CALLS_2736, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_2734 == g_N_CALL))
{
{
R21 * l_NAMES_2737; memset(&l_NAMES_2737, 0, sizeof l_NAMES_2737);
l_NAMES_2737 = NULL;
R21 * l_CALLS_2738; memset(&l_CALLS_2738, 0, sizeof l_CALLS_2738);
l_CALLS_2738 = NULL;
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2737, &l_CALLS_2738);
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_B, &l_NAMES_2737, &l_CALLS_2738);
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_C, &l_NAMES_2737, &l_CALLS_2738);
r_CHECK_INTERFERENCE(l_NAMES_2737, l_CALLS_2738, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_2734 == g_N_RETURN) || (l_K_2734 == g_N_ASSERT)))
{
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R21 * l_NAMES_2739; memset(&l_NAMES_2739, 0, sizeof l_NAMES_2739);
l_NAMES_2739 = NULL;
R21 * l_CALLS_2740; memset(&l_CALLS_2740, 0, sizeof l_CALLS_2740);
l_CALLS_2740 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2739, &l_CALLS_2740);
r_CHECK_INTERFERENCE(l_NAMES_2739, l_CALLS_2740, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_K_2734 == g_N_ASSERT));
}
}
}
else if ((l_K_2734 == g_N_IF))
{
{
R21 * l_ARM_2741; memset(&l_ARM_2741, 0, sizeof l_ARM_2741);
l_ARM_2741 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_2741 == NULL)) goto L_end2742;
{
{
R21 * l_NAMES_2743; memset(&l_NAMES_2743, 0, sizeof l_NAMES_2743);
l_NAMES_2743 = NULL;
R21 * l_CALLS_2744; memset(&l_CALLS_2744, 0, sizeof l_CALLS_2744);
l_CALLS_2744 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(l_ARM_2741))).f_A, &l_NAMES_2743, &l_CALLS_2744);
r_CHECK_INTERFERENCE(l_NAMES_2743, l_CALLS_2744, ((*(R21 *)rt_nil_check(l_ARM_2741))).f_LINE, 0);
}
l_ARM_2741 = ((*(R21 *)rt_nil_check(l_ARM_2741))).f_NEXT;
}
RT_B_TICK();
} L_end2742: ;
}
}
}
static void r_COLLECT_LIST(R21 * p_L, R21 * *p_NAMES, R21 * *p_CALLS) { RT_B_TICK(); 
R21 * l_N_2745; memset(&l_N_2745, 0, sizeof l_N_2745);
l_N_2745 = p_L;
for (;;) {
if ((l_N_2745 == NULL)) goto L_end2746;
{
r_COLLECT_REFS(l_N_2745, &(*p_NAMES), &(*p_CALLS));
l_N_2745 = ((*(R21 *)rt_nil_check(l_N_2745))).f_NEXT;
}
RT_B_TICK();
} L_end2746: ;
}
static void r_COLLECT_REFS(R21 * p_E, R21 * *p_NAMES, R21 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_2747; memset(&l_K_2747, 0, sizeof l_K_2747);
if ((p_E == NULL))
{
return;
}
l_K_2747 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_2747 == g_N_NAME))
{
{
R12 * l_Y_2748; memset(&l_Y_2748, 0, sizeof l_Y_2748);
l_Y_2748 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2748 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2748))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2748))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_2747 == g_N_APPLY))
{
{
R12 * l_Y_2749; memset(&l_Y_2749, 0, sizeof l_Y_2749);
l_Y_2749 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2749 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2749))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2749))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_2749))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_2747 == g_N_FIELD) || (l_K_2747 == g_N_DEREF)) || (l_K_2747 == g_N_UNOP)) || (l_K_2747 == g_N_PAREN)) || (l_K_2747 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_2747 == g_N_INDEX) || (l_K_2747 == g_N_SUBSTR)) || (l_K_2747 == g_N_BINOP)) || (l_K_2747 == g_N_IN)))
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_RANGE))
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_REFS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B, &(*p_NAMES), &(*p_CALLS));
}
else
{
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
}
}
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
else if ((l_K_2747 == g_N_RECCONS))
{
{
R21 * l_F_2750; memset(&l_F_2750, 0, sizeof l_F_2750);
l_F_2750 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_2750 == NULL)) goto L_end2751;
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(l_F_2750))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_2750 = ((*(R21 *)rt_nil_check(l_F_2750))).f_NEXT;
}
RT_B_TICK();
} L_end2751: ;
}
}
else if ((l_K_2747 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R21 * r_NAME_REF(R10 p_NAME, rt_int p_OWNER, R21 * p_A, R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2752; memset(&l_N_2752, 0, sizeof l_N_2752);
l_N_2752 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2752))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2752))).f_IV = p_OWNER;
((*(R21 *)rt_nil_check(l_N_2752))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_2752))).f_NEXT = p_L;
{ R21 * rv2753 = l_N_2752;
return rv2753; }
rt_raise(RT_X_INIT);
}
static R21 * r_ROUTINE_DATA(R10 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_2754; memset(&l_Y_2754, 0, sizeof l_Y_2754);
l_Y_2754 = r_LOOKUP(p_NAME);
R21 * l_R_2755; memset(&l_R_2755, 0, sizeof l_R_2755);
l_R_2755 = NULL;
rt_int l_FIRST_2756; memset(&l_FIRST_2756, 0, sizeof l_FIRST_2756);
l_FIRST_2756 = 1;
for (;;) {
if ((l_Y_2754 == NULL)) goto L_end2757;
{
if ((((*(R12 *)rt_nil_check(l_Y_2754))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2758; memset(&l_D_2758, 0, sizeof l_D_2758);
l_D_2758 = r_DATA_OF(r_ORIGINAL(l_Y_2754), p_INOUT, ((rt_int)0LL));
if (l_FIRST_2756)
{
l_R_2755 = l_D_2758;
l_FIRST_2756 = 0;
}
else
{
l_R_2755 = r_INTERSECT_REFS(l_R_2755, l_D_2758);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2754))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_2756)))
{
}
l_Y_2754 = r_LOOKUP_NEXT(l_Y_2754);
}
RT_B_TICK();
} L_end2757: ;
{ R21 * rv2759 = l_R_2755;
return rv2759; }
rt_raise(RT_X_INIT);
}
static R21 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R21 * l_R_2760; memset(&l_R_2760, 0, sizeof l_R_2760);
l_R_2760 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R21 * rv2761 = NULL;
return rv2761; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R21 * rv2762 = NULL;
return rv2762; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R21 * l_U_2763; memset(&l_U_2763, 0, sizeof l_U_2763);
l_U_2763 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2763 == NULL)) goto L_end2764;
{
l_R_2760 = r_NAME_REF(((*(R21 *)rt_nil_check(l_U_2763))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2763))).f_IV, NULL, l_R_2760);
l_U_2763 = ((*(R21 *)rt_nil_check(l_U_2763))).f_NEXT;
}
RT_B_TICK();
} L_end2764: ;
}
{ R21 * rv2765 = l_R_2760;
return rv2765; }
}
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R21 * rv2766 = NULL;
return rv2766; }
}
{
R21 * l_U_2767; memset(&l_U_2767, 0, sizeof l_U_2767);
l_U_2767 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2767 == NULL)) goto L_end2768;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R21 *)rt_nil_check(l_U_2767))).f_NAME))
{
l_R_2760 = r_NAME_REF(((*(R21 *)rt_nil_check(l_U_2767))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2767))).f_IV, NULL, l_R_2760);
}
l_U_2767 = ((*(R21 *)rt_nil_check(l_U_2767))).f_NEXT;
}
RT_B_TICK();
} L_end2768: ;
}
{
R21 * l_C_2769; memset(&l_C_2769, 0, sizeof l_C_2769);
l_C_2769 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_2769 == NULL)) goto L_end2770;
{
{
R12 * l_Z_2771; memset(&l_Z_2771, 0, sizeof l_Z_2771);
l_Z_2771 = r_LOOKUP(((*(R21 *)rt_nil_check(l_C_2769))).f_NAME);
for (;;) {
if ((l_Z_2771 == NULL)) goto L_end2772;
{
if ((((*(R12 *)rt_nil_check(l_Z_2771))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2773; memset(&l_D_2773, 0, sizeof l_D_2773);
l_D_2773 = r_DATA_OF(r_ORIGINAL(l_Z_2771), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_2773 == NULL)) goto L_end2774;
{
if ((!r_HAS_REF(l_R_2760, ((*(R21 *)rt_nil_check(l_D_2773))).f_NAME, ((*(R21 *)rt_nil_check(l_D_2773))).f_IV)))
{
l_R_2760 = r_NAME_REF(((*(R21 *)rt_nil_check(l_D_2773))).f_NAME, ((*(R21 *)rt_nil_check(l_D_2773))).f_IV, NULL, l_R_2760);
}
l_D_2773 = ((*(R21 *)rt_nil_check(l_D_2773))).f_NEXT;
}
RT_B_TICK();
} L_end2774: ;
}
}
l_Z_2771 = r_LOOKUP_NEXT(l_Z_2771);
}
RT_B_TICK();
} L_end2772: ;
}
l_C_2769 = ((*(R21 *)rt_nil_check(l_C_2769))).f_NEXT;
}
RT_B_TICK();
} L_end2770: ;
}
{ R21 * rv2775 = l_R_2760;
return rv2775; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R21 * p_L, R10 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R21 * l_P_2776; memset(&l_P_2776, 0, sizeof l_P_2776);
l_P_2776 = p_L;
for (;;) {
if ((l_P_2776 == NULL)) goto L_end2777;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_P_2776))).f_NAME, p_NAME) && (((*(R21 *)rt_nil_check(l_P_2776))).f_IV == p_OWNER)))
{
{ rt_int rv2778 = 1;
return rv2778; }
}
l_P_2776 = ((*(R21 *)rt_nil_check(l_P_2776))).f_NEXT;
}
RT_B_TICK();
} L_end2777: ;
{ rt_int rv2779 = 0;
return rv2779; }
rt_raise(RT_X_INIT);
}
static R21 * r_INTERSECT_REFS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_R_2780; memset(&l_R_2780, 0, sizeof l_R_2780);
l_R_2780 = NULL;
R21 * l_P_2781; memset(&l_P_2781, 0, sizeof l_P_2781);
l_P_2781 = p_A;
for (;;) {
if ((l_P_2781 == NULL)) goto L_end2782;
{
if (r_HAS_REF(p_B, ((*(R21 *)rt_nil_check(l_P_2781))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2781))).f_IV))
{
l_R_2780 = r_NAME_REF(((*(R21 *)rt_nil_check(l_P_2781))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2781))).f_IV, NULL, l_R_2780);
}
l_P_2781 = ((*(R21 *)rt_nil_check(l_P_2781))).f_NEXT;
}
RT_B_TICK();
} L_end2782: ;
{ R21 * rv2783 = l_R_2780;
return rv2783; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R21 * p_NAMES, R21 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R21 * l_C_2784; memset(&l_C_2784, 0, sizeof l_C_2784);
l_C_2784 = p_CALLS;
for (;;) {
if ((l_C_2784 == NULL)) goto L_end2785;
{
{
R21 * l_V_2786; memset(&l_V_2786, 0, sizeof l_V_2786);
l_V_2786 = r_ROUTINE_DATA(((*(R21 *)rt_nil_check(l_C_2784))).f_NAME, 1);
if (((!(l_V_2786 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R21 *)rt_nil_check(l_C_2784))).f_NAME);
}
for (;;) {
if ((l_V_2786 == NULL)) goto L_end2787;
{
if (r_HAS_REF(p_NAMES, ((*(R21 *)rt_nil_check(l_V_2786))).f_NAME, ((*(R21 *)rt_nil_check(l_V_2786))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R21 *)rt_nil_check(l_V_2786))).f_NAME);
}
{
R21 * l_D_2788; memset(&l_D_2788, 0, sizeof l_D_2788);
l_D_2788 = p_CALLS;
for (;;) {
if ((l_D_2788 == NULL)) goto L_end2789;
{
if ((!(l_D_2788 == l_C_2784)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R21 *)rt_nil_check(l_D_2788))).f_NAME, 0), ((*(R21 *)rt_nil_check(l_V_2786))).f_NAME, ((*(R21 *)rt_nil_check(l_V_2786))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R21 *)rt_nil_check(l_V_2786))).f_NAME);
}
}
l_D_2788 = ((*(R21 *)rt_nil_check(l_D_2788))).f_NEXT;
}
RT_B_TICK();
} L_end2789: ;
}
l_V_2786 = ((*(R21 *)rt_nil_check(l_V_2786))).f_NEXT;
}
RT_B_TICK();
} L_end2787: ;
}
l_C_2784 = ((*(R21 *)rt_nil_check(l_C_2784))).f_NEXT;
}
RT_B_TICK();
} L_end2785: ;
}
static rt_int r_IN_HANDLERS(R21 * p_HS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_H_2790; memset(&l_H_2790, 0, sizeof l_H_2790);
l_H_2790 = p_HS;
for (;;) {
if ((l_H_2790 == NULL)) goto L_end2791;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2790))).f_A, p_NAME))
{
{ rt_int rv2792 = 1;
return rv2792; }
}
l_H_2790 = ((*(R21 *)rt_nil_check(l_H_2790))).f_NEXT;
}
RT_B_TICK();
} L_end2791: ;
{ rt_int rv2793 = 0;
return rv2793; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2794; memset(&l_K_2794, 0, sizeof l_K_2794);
l_K_2794 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2794 == g_N_EXCEPT))
{
{ rt_int rv2795 = r_IS_STRUCTURED_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
return rv2795; }
}
{ rt_int rv2796 = (((((((l_K_2794 == g_N_BLOCK) || (l_K_2794 == g_N_IF)) || (l_K_2794 == g_N_CASE)) || (l_K_2794 == g_N_LOOP)) || (l_K_2794 == g_N_FOR)) || (l_K_2794 == g_N_PAR)) || (l_K_2794 == g_N_WITH));
return rv2796; }
rt_raise(RT_X_INIT);
}
static R21 * r_NAMED_ROOT(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_2797; memset(&l_K_2797, 0, sizeof l_K_2797);
l_K_2797 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_2797 == g_N_NAME) || (l_K_2797 == g_N_APPLY)))
{
{ R21 * rv2798 = p_E;
return rv2798; }
}
else if ((((l_K_2797 == g_N_INDEX) || (l_K_2797 == g_N_FIELD)) || (l_K_2797 == g_N_SUBSTR)))
{
{ R21 * rv2799 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv2799; }
}
{ R21 * rv2800 = NULL;
return rv2800; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2801; memset(&l_K_2801, 0, sizeof l_K_2801);
l_K_2801 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_2801 == g_N_NULL))
{
return;
}
else if ((l_K_2801 == g_N_LABELED))
{
{
R12 * l_Y_2802; memset(&l_Y_2802, 0, sizeof l_Y_2802);
l_Y_2802 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2802))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2801 == g_N_GOTO))
{
{
R12 * l_Y_2803; memset(&l_Y_2803, 0, sizeof l_Y_2803);
l_Y_2803 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2804; memset(&l_N_2804, 0, sizeof l_N_2804);
R17 * l_C_2805; memset(&l_C_2805, 0, sizeof l_C_2805);
l_C_2805 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2803 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2803))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2803))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2804 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2803))).f_MV);
for (;;) {
if ((l_N_2804 <= ((rt_int)0LL))) goto L_end2806;
{
if ((((*(R17 *)rt_nil_check(l_C_2805))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2805))).f_NAME));
l_N_2804 = rt_sub(l_N_2804, ((rt_int)1LL));
}
l_C_2805 = ((*(R17 *)rt_nil_check(l_C_2805))).f_NEXT;
}
RT_B_TICK();
} L_end2806: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2803))).f_ACCESS));
}
}
else if ((l_K_2801 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2801 == g_N_CALL))
{
{
R26 l_V_2807; memset(&l_V_2807, 0, sizeof l_V_2807);
S_R26(&l_V_2807, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2807).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2807).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2807).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2801 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2801 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2801 == g_N_LOOP))
{
{
R10 l_END_L_2808; memset(&l_END_L_2808, 0, sizeof l_END_L_2808);
S_R10(&l_END_L_2808, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2808));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2808);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2808));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2808));
}
}
else if ((l_K_2801 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2801 == g_N_EXIT))
{
{
R17 * l_C_2809; memset(&l_C_2809, 0, sizeof l_C_2809);
l_C_2809 = r_LEAVE(((rt_int)2LL));
if ((l_C_2809 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2809))).f_NAME));
}
}
else if ((l_K_2801 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2801 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2801 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2801 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2801 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2801 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2801 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2801 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2810; memset(&l_Y_2810, 0, sizeof l_Y_2810);
l_Y_2810 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2810 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2810))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2810))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2811 = r_CALL_EXPR(p_S, NULL);
return rv2811; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2812; memset(&l_ARM_2812, 0, sizeof l_ARM_2812);
l_ARM_2812 = p_ARMS;
R10 l_WORD_2813; memset(&l_WORD_2813, 0, sizeof l_WORD_2813);
S_R10(&l_WORD_2813, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2814; memset(&l_OPEN_2814, 0, sizeof l_OPEN_2814);
l_OPEN_2814 = ((rt_int)0LL);
rt_int l_CHOSEN_2815; memset(&l_CHOSEN_2815, 0, sizeof l_CHOSEN_2815);
l_CHOSEN_2815 = 0;
for (;;) {
if ((l_ARM_2812 == NULL)) goto L_end2816;
{
{
R23 l_M_2817; memset(&l_M_2817, 0, sizeof l_M_2817);
S_R23(&l_M_2817, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2812))).f_A), 0);
if (l_CHOSEN_2815)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2812))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2812))).f_B);
}
else if ((l_M_2817).f_OK)
{
if ((!r_TEQS(l_WORD_2813, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2814 = rt_add(l_OPEN_2814, ((rt_int)1LL));
S_R10(&l_WORD_2813, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2812))).f_A)));
if (((l_M_2817).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2812))).f_B);
l_CHOSEN_2815 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2812))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2813, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2812))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2812))).f_B);
S_R10(&l_WORD_2813, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2812 = ((*(R21 *)rt_nil_check(l_ARM_2812))).f_NEXT;
}
RT_B_TICK();
} L_end2816: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2815)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2813, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2819_lo = ((rt_int)1LL), it2819_hi = l_OPEN_2814;
for (rt_int it2819 = it2819_lo; it2819 <= it2819_hi; it2819++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2819 == it2819_hi) break;
} } L_end2818: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2820; memset(&l_SAVED_CODE_2820, 0, sizeof l_SAVED_CODE_2820);
S_R14(&l_SAVED_CODE_2820, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2821; memset(&rc2821, 0, sizeof rc2821);  rc2821.f_HEAD = NULL; rc2821.f_TAIL = NULL; rc2821; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2820, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2822; memset(&l_C_2822, 0, sizeof l_C_2822);
S_R10(&l_C_2822, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2823; memset(&l_END_L_2823, 0, sizeof l_END_L_2823);
S_R10(&l_END_L_2823, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2824; memset(&l_IT_2824, 0, sizeof l_IT_2824);
S_R10(&l_IT_2824, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2825; memset(&l_R_2825, 0, sizeof l_R_2825);
l_R_2825 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2826; memset(&l_LO_2826, 0, sizeof l_LO_2826);
S_R26(&l_LO_2826, r_EXPR(((*(R21 *)rt_nil_check(l_R_2825))).f_A, NULL), 0);
R26 l_HI_2827; memset(&l_HI_2827, 0, sizeof l_HI_2827);
S_R26(&l_HI_2827, r_EXPR(((*(R21 *)rt_nil_check(l_R_2825))).f_B, (l_LO_2826).f_T), 0);
R22 * l_T_2828; memset(&l_T_2828, 0, sizeof l_T_2828);
l_T_2828 = r_REAL_TYPE((l_LO_2826).f_T);
R10 l_LOC_2829; memset(&l_LOC_2829, 0, sizeof l_LOC_2829);
R10 l_HIC_2830; memset(&l_HIC_2830, 0, sizeof l_HIC_2830);
if ((((*(R22 *)rt_nil_check(l_T_2828))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2828))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2828))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2828))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2829, (l_LO_2826).f_C, 0);
S_R10(&l_HIC_2830, (l_HI_2827).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2825))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2825))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2829, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2829), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2825))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2830, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2830), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2824, l_LOC_2829, l_IT_2824, l_HIC_2830));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2824, l_IT_2824, l_IT_2824, l_IT_2824));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2831; memset(&l_Y_2831, 0, sizeof l_Y_2831);
l_Y_2831 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2831))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2828))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2831))).f_T = ((*(R22 *)rt_nil_check(l_T_2828))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2831))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2831, rt_str("", 0)), l_IT_2824));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2831, rt_str("", 0)), l_IT_2824));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2831))).f_ACCESS, l_IT_2824, 0);
}
r_DEFINE(l_Y_2831, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2823);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2824, l_IT_2824));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2823));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2832; memset(&l_CS_2832, 0, sizeof l_CS_2832);
l_CS_2832 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2833; memset(&l_C_2833, 0, sizeof l_C_2833);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2833 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2832))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2832))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2832))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2832))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2832))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2832))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2832))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2832))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2834; memset(&l_V_2834, 0, sizeof l_V_2834);
S_R10(&l_V_2834, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2832))).f_RESULT), l_V_2834, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2832))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2832))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2833 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2834));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2835; memset(&l_C_2835, 0, sizeof l_C_2835);
l_C_2835 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2835 == NULL)) goto L_end2836;
{
if ((((*(R17 *)rt_nil_check(l_C_2835))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2835))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2835))).f_KIND == ((rt_int)1LL)))
{
goto L_end2836;
}
l_C_2835 = ((*(R17 *)rt_nil_check(l_C_2835))).f_NEXT;
}
RT_B_TICK();
} L_end2836: ;
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
R21 * l_TG_2837; memset(&l_TG_2837, 0, sizeof l_TG_2837);
l_TG_2837 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2837))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2838; memset(&l_B_2838, 0, sizeof l_B_2838);
S_R26(&l_B_2838, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2837))).f_A, NULL), 0);
if ((!(l_B_2838).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2838).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2839; memset(&l_ARGS_2839, 0, sizeof l_ARGS_2839);
l_ARGS_2839 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2837))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2837))).f_C, g_M_IN, r_VAL_ARG(l_B_2838, NULL))));
R12 * l_Y_2840; memset(&l_Y_2840, 0, sizeof l_Y_2840);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2839))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2840 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2839, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2840 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2839))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2840 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2839, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2840 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2840, l_ARGS_2839, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2838).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2838).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2841; memset(&l_V_2841, 0, sizeof l_V_2841);
S_R26(&l_V_2841, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2838).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2841).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2838).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2838).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2837))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2837))).f_C), (l_V_2841).f_C));
}
}
return;
}
{
R26 l_LV_2842; memset(&l_LV_2842, 0, sizeof l_LV_2842);
S_R26(&l_LV_2842, r_EXPR(l_TG_2837, NULL), 0);
R21 * l_SAVED_Q_2843; memset(&l_SAVED_Q_2843, 0, sizeof l_SAVED_Q_2843);
l_SAVED_Q_2843 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2842).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_2842).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_2844; memset(&l_V_2844, 0, sizeof l_V_2844);
S_R26(&l_V_2844, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2842).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_2842).f_T, (l_LV_2842).f_C, l_V_2844, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2842).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2843;
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
R12 * l_Y_2845; memset(&l_Y_2845, 0, sizeof l_Y_2845);
l_Y_2845 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2846; memset(&l_V_2846, 0, sizeof l_V_2846);
S_R26(&l_V_2846, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2845))).f_T = (l_V_2846).f_T;
((*(R12 *)rt_nil_check(l_Y_2845))).f_WITHV = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2847; memset(&l_CN_2847, 0, sizeof l_CN_2847);
S_R10(&l_CN_2847, r_NEW_OBJECT(l_Y_2845, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2846).f_T))
{
r_CODE(r_INIT_CODE((l_V_2846).f_T, l_CN_2847));
}
r_CODE(r_ASSIGN_CODE((l_V_2846).f_T, l_CN_2847, (l_V_2846).f_C));
}
}
else
{
if ((!(l_V_2846).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2848; memset(&l_P_2848, 0, sizeof l_P_2848);
S_R10(&l_P_2848, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2846).f_T), l_P_2848, (l_V_2846).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2845))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2848), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2845))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2845))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2845))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R21 * l_R_2849; memset(&l_R_2849, 0, sizeof l_R_2849);
l_R_2849 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_2849 == NULL)))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_R_2849))).f_NAME, ((*(R21 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_2850; memset(&l_OLD_2850, 0, sizeof l_OLD_2850);
l_OLD_2850 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2849))).f_NAME);
if ((!(l_OLD_2850 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_2850))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_2851; memset(&l_H_2851, 0, sizeof l_H_2851);
l_H_2851 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_R_2849))).f_NAME);
((*(R12 *)rt_nil_check(l_H_2851))).f_T = ((*(R12 *)rt_nil_check(l_OLD_2850))).f_T;
((*(R12 *)rt_nil_check(l_H_2851))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_2851))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_2850))).f_OWNER;
r_DEFINE(l_H_2851, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_2845, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2852; memset(&l_ARM_2852, 0, sizeof l_ARM_2852);
l_ARM_2852 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_2853; memset(&l_SEEN_2853, 0, sizeof l_SEEN_2853);
l_SEEN_2853 = NULL;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2854; memset(&l_CH_2854, 0, sizeof l_CH_2854);
S_R26(&l_CH_2854, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2855; memset(&l_T_2855, 0, sizeof l_T_2855);
l_T_2855 = r_REAL_TYPE((l_CH_2854).f_T);
R12 * l_BOUND_2856; memset(&l_BOUND_2856, 0, sizeof l_BOUND_2856);
l_BOUND_2856 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2855))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2855))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2857; memset(&l_TMP_2857, 0, sizeof l_TMP_2857);
S_R10(&l_TMP_2857, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2858; memset(&l_WORD_2858, 0, sizeof l_WORD_2858);
S_R10(&l_WORD_2858, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2857, (l_CH_2854).f_C));
for (;;) {
if ((l_ARM_2852 == NULL)) goto L_end2859;
{
{
R21 * l_L_2860; memset(&l_L_2860, 0, sizeof l_L_2860);
l_L_2860 = ((*(R21 *)rt_nil_check(l_ARM_2852))).f_A;
R10 l_COND_2861; memset(&l_COND_2861, 0, sizeof l_COND_2861);
S_R10(&l_COND_2861, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2860 == NULL)) goto L_end2862;
{
S_R10(&l_COND_2861, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2861, l_TMP_2857, (r_EXPR(l_L_2860, l_T_2855)).f_C), 0);
l_L_2860 = ((*(R21 *)rt_nil_check(l_L_2860))).f_NEXT;
}
RT_B_TICK();
} L_end2862: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2858, l_COND_2861));
S_R10(&l_WORD_2858, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2852))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2852))).f_C);
}
l_ARM_2852 = ((*(R21 *)rt_nil_check(l_ARM_2852))).f_NEXT;
}
RT_B_TICK();
} L_end2859: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2858, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_2855))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_2855))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_2855))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_2854);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2855))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2855))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2855))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2855))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2855));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2854).f_C));
for (;;) {
if ((l_ARM_2852 == NULL)) goto L_end2863;
{
{
R21 * l_L_2864; memset(&l_L_2864, 0, sizeof l_L_2864);
l_L_2864 = ((*(R21 *)rt_nil_check(l_ARM_2852))).f_A;
R23 l_FIRST_2865; memset(&l_FIRST_2865, 0, sizeof l_FIRST_2865);
S_R23(&l_FIRST_2865, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2864 == NULL)) goto L_end2866;
{
if ((((*(R21 *)rt_nil_check(l_L_2864))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2867; memset(&l_LO_2867, 0, sizeof l_LO_2867);
S_R23(&l_LO_2867, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2864))).f_A, l_T_2855), 0);
R23 l_HI_2868; memset(&l_HI_2868, 0, sizeof l_HI_2868);
S_R23(&l_HI_2868, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2864))).f_B, l_T_2855), 0);
rt_int l_A_2869; memset(&l_A_2869, 0, sizeof l_A_2869);
l_A_2869 = (l_LO_2867).f_V;
rt_int l_B_2870; memset(&l_B_2870, 0, sizeof l_B_2870);
l_B_2870 = (l_HI_2868).f_V;
if ((!(((l_LO_2867).f_OK && (l_HI_2868).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2864))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2864))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2864))).f_IV == ((rt_int)3LL))))
{
l_A_2869 = rt_add(l_A_2869, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2864))).f_IV >= ((rt_int)2LL)))
{
l_B_2870 = rt_sub(l_B_2870, ((rt_int)1LL));
}
if ((!(l_FIRST_2865).f_OK))
{
S_R23(&l_FIRST_2865, r_SOME(l_A_2869), 0);
}
l_SEEN_2853 = r_DISTINCT_LABEL(l_SEEN_2853, l_A_2869, l_B_2870, ((*(R21 *)rt_nil_check(l_L_2864))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2869), r_NUM(l_B_2870)));
}
}
else
{
{
R23 l_M_2871; memset(&l_M_2871, 0, sizeof l_M_2871);
S_R23(&l_M_2871, r_ENUM_MANIFEST(l_L_2864, l_T_2855), 0);
if ((!(l_M_2871).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2864))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2865).f_OK))
{
S_R23(&l_FIRST_2865, l_M_2871, 0);
}
l_SEEN_2853 = r_DISTINCT_LABEL(l_SEEN_2853, (l_M_2871).f_V, (l_M_2871).f_V, ((*(R21 *)rt_nil_check(l_L_2864))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2871).f_V)));
}
}
l_L_2864 = ((*(R21 *)rt_nil_check(l_L_2864))).f_NEXT;
}
RT_B_TICK();
} L_end2866: ;
if ((!(l_BOUND_2856 == NULL)))
{
{
R22 * l_SAVED_2872; memset(&l_SAVED_2872, 0, sizeof l_SAVED_2872);
l_SAVED_2872 = ((*(R12 *)rt_nil_check(l_BOUND_2856))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2856))).f_T = r_NARROW(l_SAVED_2872, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2865).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2852))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2852))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2856))).f_T = l_SAVED_2872;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2852))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2852))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2852 = ((*(R21 *)rt_nil_check(l_ARM_2852))).f_NEXT;
}
RT_B_TICK();
} L_end2863: ;
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
R25 * l_P_2873; memset(&l_P_2873, 0, sizeof l_P_2873);
l_P_2873 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv2874 = p_SEEN;
return rv2874; }
}
for (;;) {
if ((l_P_2873 == NULL)) goto L_end2875;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_2873))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_2873))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_2873 = ((*(R25 *)rt_nil_check(l_P_2873))).f_NEXT;
}
RT_B_TICK();
} L_end2875: ;
l_P_2873 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_2873)), ({ R25 rc2876; memset(&rc2876, 0, sizeof rc2876);  S_R10(&rc2876.f_LO, r_NO_TEXT(), 0); S_R10(&rc2876.f_HI, r_NO_TEXT(), 0); S_R23(&rc2876.f_MLO, r_SOME(p_A), 0); S_R23(&rc2876.f_MHI, r_SOME(p_B), 0); rc2876.f_ANYARG = 0; rc2876.f_NEXT = p_SEEN; rc2876; }), 0);
{ R25 * rv2877 = l_P_2873;
return rv2877; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R21 * p_S, R26 p_CH) { RT_B_TICK(); 
R10 l_TMP_2878; memset(&l_TMP_2878, 0, sizeof l_TMP_2878);
S_R10(&l_TMP_2878, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_2879; memset(&l_X_2879, 0, sizeof l_X_2879);
S_R26(&l_X_2879, r_MKET(l_TMP_2878, (p_CH).f_T), 0);
R21 * l_ARM_2880; memset(&l_ARM_2880, 0, sizeof l_ARM_2880);
l_ARM_2880 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R10 l_WORD_2881; memset(&l_WORD_2881, 0, sizeof l_WORD_2881);
S_R10(&l_WORD_2881, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_2878, (p_CH).f_C));
for (;;) {
if ((l_ARM_2880 == NULL)) goto L_end2882;
{
{
R21 * l_L_2883; memset(&l_L_2883, 0, sizeof l_L_2883);
l_L_2883 = ((*(R21 *)rt_nil_check(l_ARM_2880))).f_A;
R10 l_COND_2884; memset(&l_COND_2884, 0, sizeof l_COND_2884);
S_R10(&l_COND_2884, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2883 == NULL)) goto L_end2885;
{
if ((((*(R21 *)rt_nil_check(l_L_2883))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_2886; memset(&l_LO_2886, 0, sizeof l_LO_2886);
S_R26(&l_LO_2886, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_2883))).f_A, (p_CH).f_T), 0);
R26 l_HI_2887; memset(&l_HI_2887, 0, sizeof l_HI_2887);
S_R26(&l_HI_2887, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_2883))).f_B, (p_CH).f_T), 0);
rstr l_GE_2888; memset(&l_GE_2888, 0, sizeof l_GE_2888);
l_GE_2888 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_2888, rt_str(">=", 2));
rstr l_LE_2889; memset(&l_LE_2889, 0, sizeof l_LE_2889);
l_LE_2889 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_2889, rt_str("<=", 2));
if (((((*(R21 *)rt_nil_check(l_L_2883))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2883))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_2888, rt_str("> ", 2));
}
if ((((*(R21 *)rt_nil_check(l_L_2883))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_2889, rt_str("< ", 2));
}
S_R10(&l_COND_2884, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_2884, r_VALUE_COMPARE(l_X_2879, l_LO_2886, r_MK(l_GE_2888)), r_VALUE_COMPARE(l_X_2879, l_HI_2887, r_MK(l_LE_2889))), 0);
}
}
else
{
S_R10(&l_COND_2884, r_FMT2(rt_str("@ || @", 6), l_COND_2884, r_VALUE_COMPARE(l_X_2879, r_CASE_LABEL(l_L_2883, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_2883 = ((*(R21 *)rt_nil_check(l_L_2883))).f_NEXT;
}
RT_B_TICK();
} L_end2885: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2881, l_COND_2884));
S_R10(&l_WORD_2881, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2880))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2880))).f_C);
}
l_ARM_2880 = ((*(R21 *)rt_nil_check(l_ARM_2880))).f_NEXT;
}
RT_B_TICK();
} L_end2882: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2881, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R21 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_2890; memset(&l_V_2890, 0, sizeof l_V_2890);
S_R26(&l_V_2890, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_2890).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv2891 = l_V_2890;
return rv2891; }
rt_raise(RT_X_INIT);
}
static R10 r_VALUE_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R10 rv2892 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv2892; }
}
{ R10 rv2893 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv2893; }
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
{ R12 * rv2894 = NULL;
return rv2894; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2895 = NULL;
return rv2895; }
}
{
R12 * l_Y_2896; memset(&l_Y_2896, 0, sizeof l_Y_2896);
l_Y_2896 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2896 == NULL))
{
{ R12 * rv2897 = NULL;
return rv2897; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2896))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2898 = NULL;
return rv2898; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2896))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv2899 = NULL;
return rv2899; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2896))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2900 = NULL;
return rv2900; }
}
{
R24 * l_F_2901; memset(&l_F_2901, 0, sizeof l_F_2901);
l_F_2901 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2896))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2901 == NULL))
{
{ R12 * rv2902 = NULL;
return rv2902; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2901))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2903 = NULL;
return rv2903; }
}
}
{ R12 * rv2904 = l_Y_2896;
return rv2904; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2905; memset(&l_N_2905, 0, sizeof l_N_2905);
l_N_2905 = r_COPY_TYP(p_T);
R24 * l_F_2906; memset(&l_F_2906, 0, sizeof l_F_2906);
l_F_2906 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2907; memset(&l_A_2907, 0, sizeof l_A_2907);
l_A_2907 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2908; memset(&l_HEAD_2908, 0, sizeof l_HEAD_2908);
l_HEAD_2908 = NULL;
R25 * l_TAIL_2909; memset(&l_TAIL_2909, 0, sizeof l_TAIL_2909);
l_TAIL_2909 = NULL;
for (;;) {
if ((l_F_2906 == NULL)) goto L_end2910;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2906))).f_KIND == ((rt_int)0LL))) && (!(l_A_2907 == NULL))))
{
{
R25 * l_B_2911; memset(&l_B_2911, 0, sizeof l_B_2911);
l_B_2911 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2911)), (*(R25 *)rt_nil_check(l_A_2907)), 0);
((*(R25 *)rt_nil_check(l_B_2911))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2906))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2911))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2911))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2911))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2909 == NULL))
{
l_HEAD_2908 = l_B_2911;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2909))).f_NEXT = l_B_2911;
}
l_TAIL_2909 = l_B_2911;
}
l_A_2907 = ((*(R25 *)rt_nil_check(l_A_2907))).f_NEXT;
}
l_F_2906 = ((*(R24 *)rt_nil_check(l_F_2906))).f_NEXT;
}
RT_B_TICK();
} L_end2910: ;
((*(R22 *)rt_nil_check(l_N_2905))).f_ARGS = l_HEAD_2908;
{ R22 * rv2912 = l_N_2905;
return rv2912; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2913; memset(&l_ARM_2913, 0, sizeof l_ARM_2913);
l_ARM_2913 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2914; memset(&l_SAVED_2914, 0, sizeof l_SAVED_2914);
l_SAVED_2914 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2913 == NULL)) goto L_end2915;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2913))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2913))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2913))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2914;
return;
}
l_ARM_2913 = ((*(R21 *)rt_nil_check(l_ARM_2913))).f_NEXT;
}
RT_B_TICK();
} L_end2915: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2914;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2916; memset(&l_T_2916, 0, sizeof l_T_2916);
l_T_2916 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2916))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2917 = l_T_2916;
return rv2917; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2918; memset(&l_TD_2918, 0, sizeof l_TD_2918);
S_R10(&l_TD_2918, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2919; memset(&l_P_2919, 0, sizeof l_P_2919);
l_P_2919 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2919 == NULL)) goto L_end2920;
{
{
R12 * l_Y_2921; memset(&l_Y_2921, 0, sizeof l_Y_2921);
l_Y_2921 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2919))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2921))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2921))).f_DECL = l_P_2919;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2921, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2921))).f_INPUT = 1;
r_DEFINE(l_Y_2921, ((*(R21 *)rt_nil_check(l_P_2919))).f_LINE);
}
l_P_2919 = ((*(R21 *)rt_nil_check(l_P_2919))).f_NEXT;
}
RT_B_TICK();
} L_end2920: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2918));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2918, l_TD_2918));
l_P_2919 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2919 == NULL)) goto L_end2922;
{
r_ACTIVATE_PATH(l_P_2919, l_TD_2918);
l_P_2919 = ((*(R21 *)rt_nil_check(l_P_2919))).f_NEXT;
}
RT_B_TICK();
} L_end2922: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2918, l_TD_2918, l_TD_2918));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2918));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2923; memset(&l_FN_2923, 0, sizeof l_FN_2923);
S_R10(&l_FN_2923, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2924; memset(&l_FT_2924, 0, sizeof l_FT_2924);
S_R10(&l_FT_2924, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2925; memset(&l_Y_2925, 0, sizeof l_Y_2925);
l_Y_2925 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2926; memset(&l_H_2926, 0, sizeof l_H_2926);
S_R10(&l_H_2926, r_OBJ_ACCESS(l_Y_2925), 0);
R10 l_IT_2927; memset(&l_IT_2927, 0, sizeof l_IT_2927);
S_R10(&l_IT_2927, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2928; memset(&l_PRIO_2928, 0, sizeof l_PRIO_2928);
S_R10(&l_PRIO_2928, r_MK(rt_str("0", 1)), 0);
R10 l_START_2929; memset(&l_START_2929, 0, sizeof l_START_2929);
R22 * l_LT_2930; memset(&l_LT_2930, 0, sizeof l_LT_2930);
l_LT_2930 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2924, l_FT_2924));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2928, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2931; memset(&l_R_2931, 0, sizeof l_R_2931);
l_R_2931 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2932; memset(&l_LV_2932, 0, sizeof l_LV_2932);
S_R26(&l_LV_2932, r_EXPR(((*(R21 *)rt_nil_check(l_R_2931))).f_A, NULL), 0);
R10 l_LO_2933; memset(&l_LO_2933, 0, sizeof l_LO_2933);
S_R10(&l_LO_2933, (l_LV_2932).f_C, 0);
R10 l_HI_2934; memset(&l_HI_2934, 0, sizeof l_HI_2934);
S_R10(&l_HI_2934, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2931))).f_B, (l_LV_2932).f_T)).f_C, 0);
R22 * l_RT_2935; memset(&l_RT_2935, 0, sizeof l_RT_2935);
l_RT_2935 = r_REAL_TYPE((l_LV_2932).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2935))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_2935))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2930 = ((*(R22 *)rt_nil_check(l_RT_2935))).f_BASE;
S_R10(&l_HI_2934, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2931))).f_B, l_LT_2930)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2935))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2935))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2931))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2931))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2933, r_FMT1(rt_str("(@) + 1", 7), l_LO_2933), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2931))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2934, r_FMT1(rt_str("(@) - 1", 7), l_HI_2934), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2926, l_LO_2933, l_HI_2934));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2927, l_H_2926, l_IT_2927, l_H_2926), l_IT_2927));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2927));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2924, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2927));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2936; memset(&l_V_2936, 0, sizeof l_V_2936);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2937; memset(&l_I_2937, 0, sizeof l_I_2937);
l_I_2937 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2937))).f_T = l_LT_2930;
((*(R12 *)rt_nil_check(l_I_2937))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2937))).f_ACCESS, l_IT_2927, 0);
((*(R12 *)rt_nil_check(l_I_2937))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2937, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2936, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2936).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2936).f_C));
}
}
S_R10(&l_START_2929, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2926, l_IT_2927, l_FN_2923, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2929, p_TD, l_PRIO_2928, l_IT_2927));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2926));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2929, p_TD, l_PRIO_2928));
}
r_PATH_BODY(p_P, l_FN_2923, l_FT_2924, l_LT_2930);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2938 = r_MK(rt_str("NULL", 4));
return rv2938; }
}
{ R10 rv2939 = r_MK(rt_str("F", 1));
return rv2939; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2940; memset(&l_SAVED_CODE_2940, 0, sizeof l_SAVED_CODE_2940);
S_R14(&l_SAVED_CODE_2940, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2941; memset(&l_SAVED_CTXS_2941, 0, sizeof l_SAVED_CTXS_2941);
l_SAVED_CTXS_2941 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2942; memset(&l_OUTER_2942, 0, sizeof l_OUTER_2942);
l_OUTER_2942 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2943; memset(&l_H_2943, 0, sizeof l_H_2943);
l_H_2943 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2944; memset(&l_CS_2944, 0, sizeof l_CS_2944);
l_CS_2944 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_UPT_2945; memset(&l_UPT_2945, 0, sizeof l_UPT_2945);
S_R10(&l_UPT_2945, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2942))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2945, ((*(R18 *)rt_nil_check(l_OUTER_2942))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2944)), ({ R18 rc2946; memset(&rc2946, 0, sizeof rc2946);  rc2946.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2942))).f_LEVEL, ((rt_int)1LL)); rc2946.f_R = NULL; rc2946.f_FRAMED = 1; S_R10(&rc2946.f_FTYPE, p_FT, 0); S_R14(&rc2946.f_FIELDS, ({ R14 rc2947; memset(&rc2947, 0, sizeof rc2947);  rc2947.f_HEAD = NULL; rc2947.f_TAIL = NULL; rc2947; }), 0); rc2946.f_UP = l_OUTER_2942; rc2946.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2943))).f_B; rc2946.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2943))).f_A; rc2946.f_RESULT = NULL; rc2946.f_IS_PATH = 1; S_R10(&rc2946.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2946; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2945), &((*(R18 *)rt_nil_check(l_CS_2944))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2944;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2948; memset(&rc2948, 0, sizeof rc2948);  rc2948.f_HEAD = NULL; rc2948.f_TAIL = NULL; rc2948; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2943))).f_B, ((*(R21 *)rt_nil_check(l_H_2943))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2949; memset(&l_I_2949, 0, sizeof l_I_2949);
l_I_2949 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2949))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2949))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2949))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2949))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2944))).f_FIELDS);
r_DEFINE(l_I_2949, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2950; memset(&l_L_2950, 0, sizeof l_L_2950);
l_L_2950 = ((*(R21 *)rt_nil_check(l_H_2943))).f_A;
R10 l_C_2951; memset(&l_C_2951, 0, sizeof l_C_2951);
S_R10(&l_C_2951, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2950 == NULL)) goto L_end2952;
{
S_R10(&l_C_2951, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2951, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2950))).f_NAME)), 0);
l_L_2950 = ((*(R21 *)rt_nil_check(l_L_2950))).f_NEXT;
}
RT_B_TICK();
} L_end2952: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2951));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2944))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2942;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2940, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2941;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2953; memset(&l_C_2953, 0, sizeof l_C_2953);
l_C_2953 = (p_B).f_HEAD;
R10 l_R_2954; memset(&l_R_2954, 0, sizeof l_R_2954);
S_R10(&l_R_2954, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2953 == NULL)) goto L_end2955;
{
S_R10(&l_R_2954, r_CAT(l_R_2954, ((*(R15 *)rt_nil_check(l_C_2953))).f_T), 0);
l_C_2953 = ((*(R15 *)rt_nil_check(l_C_2953))).f_NEXT;
}
RT_B_TICK();
} L_end2955: ;
{ R10 rv2956 = l_R_2954;
return rv2956; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2957; memset(&l_NAME_2957, 0, sizeof l_NAME_2957);
S_R10(&l_NAME_2957, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2958; memset(&l_SUB_2958, 0, sizeof l_SUB_2958);
S_R10(&l_SUB_2958, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2958, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2959; memset(&l_Y_2959, 0, sizeof l_Y_2959);
l_Y_2959 = r_LOOKUP(l_NAME_2957);
if ((l_Y_2959 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2957);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2959))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2957);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2959))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2960 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2959), l_SUB_2958);
return rv2960; }
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
R10 l_NAME_2961; memset(&l_NAME_2961, 0, sizeof l_NAME_2961);
S_R10(&l_NAME_2961, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2962; memset(&l_LINE_2962, 0, sizeof l_LINE_2962);
l_LINE_2962 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2961, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2963; memset(&l_V_2963, 0, sizeof l_V_2963);
S_R26(&l_V_2963, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2963).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2962, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2964 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2963).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2963).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2964; }
}
}
else if (r_TEQS(l_NAME_2961, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2965 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2965; }
}
{ R26 rv2966 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2966; }
}
else if (r_TEQS(l_NAME_2961, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2967 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2967; }
}
{ R26 rv2968 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2968; }
}
else if ((r_TEQS(l_NAME_2961, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2961, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2962, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2961);
}
{
R26 l_V_2969; memset(&l_V_2969, 0, sizeof l_V_2969);
S_R26(&l_V_2969, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2969).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2962, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2969).f_LVAL))
{
r_FAIL(l_LINE_2962, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2961, rt_str("REQUEST", 7)))
{
{ R26 rv2970 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2969).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2970; }
}
{ R26 rv2971 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2969).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2971; }
}
}
else if (r_TEQS(l_NAME_2961, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2962);
{ R26 rv2972 = r_START_IO_CALL(p_E);
return rv2972; }
}
r_FAILT(l_LINE_2962, rt_str("unknown routine ", 16), l_NAME_2961);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2973; memset(&l_ARGS_2973, 0, sizeof l_ARGS_2973);
l_ARGS_2973 = r_CALL_ARGS(p_E);
R12 * l_Y_2974; memset(&l_Y_2974, 0, sizeof l_Y_2974);
l_Y_2974 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2973, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2975; memset(&l_R_2975, 0, sizeof l_R_2975);
if ((l_Y_2974 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2975, r_CALL_SYM(l_Y_2974, l_ARGS_2973, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2976 = l_R_2975;
return rv2976; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2977; memset(&l_I_2977, 0, sizeof l_I_2977);
l_I_2977 = ((R19 *)rt_b_new(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2977)), ({ R19 rc2978; memset(&rc2978, 0, sizeof rc2978);  rc2978.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2978.f_IMPORTS = p_IMPORTS; rc2978.f_SIGNALS = p_SIGNALS; S_R10(&rc2978.f_NAME, p_NAME, 0); rc2978.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2978; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2977;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2979; memset(&l_BASE_2979, 0, sizeof l_BASE_2979);
S_R10(&l_BASE_2979, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2980; memset(&l_S_2980, 0, sizeof l_S_2980);
l_S_2980 = rt_b_str_new((l_BASE_2979).f_LEN, 0);
rt_b_assign(&l_S_2980, r_STR(l_BASE_2979, (l_BASE_2979).f_LEN));
R21 * l_N_2981; memset(&l_N_2981, 0, sizeof l_N_2981);
l_N_2981 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2983_lo = ((rt_int)0LL), it2983_hi = rt_sub((l_BASE_2979).f_LEN, ((rt_int)1LL));
for (rt_int it2983 = it2983_lo; it2983 <= it2983_hi; it2983++) {
{
if (rt_b_eq(rt_b_slice(l_S_2980, it2983, it2983), rt_str("$", 1)))
{
S_R10(&l_BASE_2979, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_2980, ((rt_int)0LL), rt_sub(it2983, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2980, rt_add(it2983, ((rt_int)1LL)), rt_sub((l_BASE_2979).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2983 == it2983_hi) break;
} } L_end2982: ;
for (;;) {
if ((l_N_2981 == NULL)) goto L_end2984;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2981))).f_NAME, l_BASE_2979))
{
{ R10 rv2985 = r_FMT2(rt_str("@_@", 3), l_BASE_2979, r_NEW_NAME(rt_str("", 0)));
return rv2985; }
}
l_N_2981 = ((*(R21 *)rt_nil_check(l_N_2981))).f_NEXT;
}
RT_B_TICK();
} L_end2984: ;
l_N_2981 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2981))).f_NAME, l_BASE_2979, 0);
((*(R21 *)rt_nil_check(l_N_2981))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2981;
{ R10 rv2986 = l_BASE_2979;
return rv2986; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2987 = 0;
return rv2987; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2988 = 1;
return rv2988; }
}
{ rt_int rv2989 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2989; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2990; memset(&l_S_2990, 0, sizeof l_S_2990);
l_S_2990 = p_S0;
for (;;) {
if ((l_S_2990 == NULL)) goto L_end2991;
{
if (((((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_PAR)))
{
{ rt_int rv2992 = 1;
return rv2992; }
}
if (((((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2990))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2990))).f_B)))
{
{ rt_int rv2993 = 1;
return rv2993; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2990))).f_A))).f_B))
{
{ rt_int rv2994 = 1;
return rv2994; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2990))).f_B))).f_B))
{
{ rt_int rv2995 = 1;
return rv2995; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2996; memset(&l_A_2996, 0, sizeof l_A_2996);
l_A_2996 = ((*(R21 *)rt_nil_check(l_S_2990))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2990))).f_KIND == g_N_CASE))
{
l_A_2996 = ((*(R21 *)rt_nil_check(l_S_2990))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2990))).f_D == NULL)))
{
{ rt_int rv2997 = 1;
return rv2997; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2990))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2990))).f_C))).f_B))
{
{ rt_int rv2998 = 1;
return rv2998; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2990))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2990))).f_B))).f_B))
{
{ rt_int rv2999 = 1;
return rv2999; }
}
}
for (;;) {
if ((l_A_2996 == NULL)) goto L_end3000;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2996))).f_C == NULL)))
{
{ rt_int rv3001 = 1;
return rv3001; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2996))).f_B))).f_B))
{
{ rt_int rv3002 = 1;
return rv3002; }
}
l_A_2996 = ((*(R21 *)rt_nil_check(l_A_2996))).f_NEXT;
}
RT_B_TICK();
} L_end3000: ;
}
}
l_S_2990 = ((*(R21 *)rt_nil_check(l_S_2990))).f_NEXT;
}
RT_B_TICK();
} L_end2991: ;
{ rt_int rv3003 = 0;
return rv3003; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_3004; memset(&l_Y_3004, 0, sizeof l_Y_3004);
l_Y_3004 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_3005; memset(&l_S_3005, 0, sizeof l_S_3005);
l_S_3005 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_3005, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3004))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_3004))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_3004))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_3004))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3004, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3007_lo = ((rt_int)1LL), it3007_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3007 = it3007_lo; it3007 <= it3007_hi; it3007++) {
{
if (rt_b_eq(rt_b_slice(l_S_3005, it3007, it3007), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_3004))).f_PREFIX, r_MKN(rt_b_slice(l_S_3005, ((rt_int)0LL), rt_sub(it3007, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3008; memset(&l_SHORT_3008, 0, sizeof l_SHORT_3008);
l_SHORT_3008 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3005, rt_add(it3007, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3008))).f_ORIG = l_Y_3004;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_3008))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3004))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3008))).f_DECL = p_R;
r_DEFINE(l_SHORT_3008, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3006;
}
}
RT_B_TICK();
if (it3007 == it3007_hi) break;
} } L_end3006: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3009; memset(&l_R_3009, 0, sizeof l_R_3009);
l_R_3009 = p_RS;
for (;;) {
if ((l_R_3009 == NULL)) goto L_end3010;
{
if ((((*(R21 *)rt_nil_check(l_R_3009))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3009);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3009);
}
l_R_3009 = ((*(R21 *)rt_nil_check(l_R_3009))).f_NEXT;
}
RT_B_TICK();
} L_end3010: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3011; memset(&l_R_3011, 0, sizeof l_R_3011);
l_R_3011 = p_RS;
for (;;) {
if ((l_R_3011 == NULL)) goto L_end3012;
{
if ((((*(R21 *)rt_nil_check(l_R_3011))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3013; memset(&l_M_3013, 0, sizeof l_M_3013);
l_M_3013 = r_FIND_DECL(l_R_3011);
r_ENTER_MODULE(l_M_3013);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3011))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3013);
}
}
else
{
{
R12 * l_Y_3014; memset(&l_Y_3014, 0, sizeof l_Y_3014);
l_Y_3014 = r_FIND_DECL(l_R_3011);
r_ROUTINE_HEADER(l_Y_3014);
}
}
l_R_3011 = ((*(R21 *)rt_nil_check(l_R_3011))).f_NEXT;
}
RT_B_TICK();
} L_end3012: ;
}
static void r_DISTINCT_SIGNATURES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3015; memset(&l_R_3015, 0, sizeof l_R_3015);
l_R_3015 = p_RS;
for (;;) {
if ((l_R_3015 == NULL)) goto L_end3016;
{
if ((((*(R21 *)rt_nil_check(l_R_3015))).f_KIND == g_N_ROUTINE))
{
{
R21 * l_Q_3017; memset(&l_Q_3017, 0, sizeof l_Q_3017);
l_Q_3017 = ((*(R21 *)rt_nil_check(l_R_3015))).f_NEXT;
for (;;) {
if ((l_Q_3017 == NULL)) goto L_end3018;
{
if (((((*(R21 *)rt_nil_check(l_Q_3017))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_Q_3017))).f_NAME, ((*(R21 *)rt_nil_check(l_R_3015))).f_NAME)))
{
{
R12 * l_A_3019; memset(&l_A_3019, 0, sizeof l_A_3019);
l_A_3019 = r_FIND_DECL(l_R_3015);
R12 * l_B_3020; memset(&l_B_3020, 0, sizeof l_B_3020);
l_B_3020 = r_FIND_DECL(l_Q_3017);
r_ROUTINE_HEADER(l_A_3019);
r_ROUTINE_HEADER(l_B_3020);
if (r_SAME_SIGNATURE(l_A_3019, l_B_3020))
{
r_FAILT(((*(R21 *)rt_nil_check(l_Q_3017))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R21 *)rt_nil_check(l_Q_3017))).f_NAME);
}
}
}
l_Q_3017 = ((*(R21 *)rt_nil_check(l_Q_3017))).f_NEXT;
}
RT_B_TICK();
} L_end3018: ;
}
}
l_R_3015 = ((*(R21 *)rt_nil_check(l_R_3015))).f_NEXT;
}
RT_B_TICK();
} L_end3016: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_3021; memset(&l_Y_3021, 0, sizeof l_Y_3021);
l_Y_3021 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3021 == NULL)) goto L_end3022;
{
if (((((*(R12 *)rt_nil_check(l_Y_3021))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3021))).f_ORIG == NULL)))
{
{ R12 * rv3023 = l_Y_3021;
return rv3023; }
}
l_Y_3021 = r_LOOKUP_NEXT(l_Y_3021);
}
RT_B_TICK();
} L_end3022: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_3024; memset(&l_D_3024, 0, sizeof l_D_3024);
l_D_3024 = p_DECLS;
for (;;) {
if ((l_D_3024 == NULL)) goto L_end3025;
{
if (((((*(R21 *)rt_nil_check(l_D_3024))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_3024))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_3024))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3026; memset(&l_Y_3026, 0, sizeof l_Y_3026);
l_Y_3026 = r_FIND_DECL(l_D_3024);
R22 * l_T_3027; memset(&l_T_3027, 0, sizeof l_T_3027);
l_T_3027 = r_RESOLVE_USER(r_TYPE_REF(l_D_3024));
}
}
}
l_D_3024 = ((*(R21 *)rt_nil_check(l_D_3024))).f_NEXT;
}
RT_B_TICK();
} L_end3025: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_3028; memset(&l_TS_3028, 0, sizeof l_TS_3028);
l_TS_3028 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_3028))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv3029 = l_TS_3028;
return rv3029; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_3030; memset(&l_Y_3030, 0, sizeof l_Y_3030);
l_Y_3030 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3031; memset(&l_SAVED_3031, 0, sizeof l_SAVED_3031);
l_SAVED_3031 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3030))).f_DECL = p_M;
r_DEFINE(l_Y_3030, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3032; memset(&l_MARK_3032, 0, sizeof l_MARK_3032);
l_MARK_3032 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3030;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3030))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3032);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3031;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3030);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3033; memset(&l_Y_3033, 0, sizeof l_Y_3033);
l_Y_3033 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3033 == NULL)) goto L_end3034;
{
{
R12 * l_NEXT_3035; memset(&l_NEXT_3035, 0, sizeof l_NEXT_3035);
l_NEXT_3035 = ((*(R12 *)rt_nil_check(l_Y_3033))).f_SNEXT;
r_DEFINE(l_Y_3033, ((rt_int)0LL));
l_Y_3033 = l_NEXT_3035;
}
}
RT_B_TICK();
} L_end3034: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3036; memset(&l_MARK_3036, 0, sizeof l_MARK_3036);
l_MARK_3036 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3036 == NULL)) goto L_end3037;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3036))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3037;
}
l_MARK_3036 = ((*(R12 *)rt_nil_check(l_MARK_3036))).f_SNEXT;
}
RT_B_TICK();
} L_end3037: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3036);
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
{ rt_int rv3038 = 1;
return rv3038; }
}
}
{ rt_int rv3039 = 0;
return rv3039; }
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
R21 * l_D_3040; memset(&l_D_3040, 0, sizeof l_D_3040);
l_D_3040 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3041; memset(&l_Y_3041, 0, sizeof l_Y_3041);
l_Y_3041 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3041 == NULL)) goto L_end3042;
{
if (r_EXPORTED_BY(l_D_3040, l_Y_3041))
{
((*(R12 *)rt_nil_check(l_Y_3041))).f_EXPORTED = 1;
{
R12 * l_A_3043; memset(&l_A_3043, 0, sizeof l_A_3043);
l_A_3043 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3041))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3041))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3043)), (*(R12 *)rt_nil_check(l_Y_3041)), 0);
((*(R12 *)rt_nil_check(l_A_3043))).f_ORIG = r_ORIGINAL(l_Y_3041);
((*(R12 *)rt_nil_check(l_A_3043))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3043, ((*(R21 *)rt_nil_check(l_D_3040))).f_LINE);
}
}
l_Y_3041 = ((*(R12 *)rt_nil_check(l_Y_3041))).f_SNEXT;
}
RT_B_TICK();
} L_end3042: ;
{
R21 * l_X_3044; memset(&l_X_3044, 0, sizeof l_X_3044);
l_X_3044 = ((*(R21 *)rt_nil_check(l_D_3040))).f_B;
for (;;) {
if ((l_X_3044 == NULL)) goto L_end3045;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_3044))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_3044))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_3044))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3044);
l_X_3044 = ((*(R21 *)rt_nil_check(l_X_3044))).f_NEXT;
}
RT_B_TICK();
} L_end3045: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R21 * p_X) { RT_B_TICK(); 
R12 * l_Y_3046; memset(&l_Y_3046, 0, sizeof l_Y_3046);
l_Y_3046 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3047; memset(&l_IS_TYPE_3047, 0, sizeof l_IS_TYPE_3047);
l_IS_TYPE_3047 = 0;
rt_int l_IS_ROUTINE_3048; memset(&l_IS_ROUTINE_3048, 0, sizeof l_IS_ROUTINE_3048);
l_IS_ROUTINE_3048 = 0;
for (;;) {
if ((l_Y_3046 == NULL)) goto L_end3049;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3046))).f_NAME, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3046))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3047 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3046))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3046))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3046))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3048 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3046))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3048 = 1;
}
l_Y_3046 = ((*(R12 *)rt_nil_check(l_Y_3046))).f_SNEXT;
}
RT_B_TICK();
} L_end3049: ;
if (((!l_IS_TYPE_3047) && (!l_IS_ROUTINE_3048)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3047))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
{
R21 * l_OP_3050; memset(&l_OP_3050, 0, sizeof l_OP_3050);
l_OP_3050 = ((*(R21 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3050 == NULL)) goto L_end3051;
{
{
rt_int l_FOUND_3052; memset(&l_FOUND_3052, 0, sizeof l_FOUND_3052);
l_FOUND_3052 = 0;
l_Y_3046 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3046 == NULL)) goto L_end3053;
{
if (((((*(R12 *)rt_nil_check(l_Y_3046))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3046))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3046)), ((*(R21 *)rt_nil_check(l_OP_3050))).f_NAME))
{
l_FOUND_3052 = 1;
}
}
l_Y_3046 = ((*(R12 *)rt_nil_check(l_Y_3046))).f_SNEXT;
}
RT_B_TICK();
} L_end3053: ;
if ((!l_FOUND_3052))
{
r_FAILT(((*(R21 *)rt_nil_check(l_OP_3050))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R21 *)rt_nil_check(l_OP_3050))).f_NAME);
}
}
l_OP_3050 = ((*(R21 *)rt_nil_check(l_OP_3050))).f_NEXT;
}
RT_B_TICK();
} L_end3051: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3054; memset(&l_Y_3054, 0, sizeof l_Y_3054);
l_Y_3054 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3054 == NULL)) goto L_end3055;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3054))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3054))).f_PREFIX, p_NAME)))
{
{ rt_int rv3056 = 1;
return rv3056; }
}
l_Y_3054 = ((*(R12 *)rt_nil_check(l_Y_3054))).f_SNEXT;
}
RT_B_TICK();
} L_end3055: ;
{ rt_int rv3057 = 0;
return rv3057; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_3058; memset(&l_X_3058, 0, sizeof l_X_3058);
l_X_3058 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3059 = 0;
return rv3059; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3060 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3060; }
}
for (;;) {
if ((l_X_3058 == NULL)) goto L_end3061;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_3058))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3062 = 1;
return rv3062; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_3058))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_3058))).f_A == NULL))
{
{ rt_int rv3063 = 1;
return rv3063; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_3058))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3064 = 1;
return rv3064; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3065; memset(&l_T_3065, 0, sizeof l_T_3065);
l_T_3065 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_3058))).f_NAME, p_Y);
if ((!(l_T_3065 == NULL)))
{
{ rt_int rv3066 = 1;
return rv3066; }
}
}
}
l_X_3058 = ((*(R21 *)rt_nil_check(l_X_3058))).f_NEXT;
}
RT_B_TICK();
} L_end3061: ;
{ rt_int rv3067 = 0;
return rv3067; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3068; memset(&l_M_3068, 0, sizeof l_M_3068);
l_M_3068 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3069; memset(&l_Z_3069, 0, sizeof l_Z_3069);
if ((l_M_3068 == NULL))
{
{ R12 * rv3070 = NULL;
return rv3070; }
}
l_Z_3069 = ((*(R12 *)rt_nil_check(l_M_3068))).f_MEMBERS;
for (;;) {
if ((l_Z_3069 == NULL)) goto L_end3071;
{
if (((((*(R12 *)rt_nil_check(l_Z_3069))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3069))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3069))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3069))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3069))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3072 = l_Z_3069;
return rv3072; }
}
}
}
}
l_Z_3069 = ((*(R12 *)rt_nil_check(l_Z_3069))).f_SNEXT;
}
RT_B_TICK();
} L_end3071: ;
{ R12 * rv3073 = NULL;
return rv3073; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3074; memset(&l_R_3074, 0, sizeof l_R_3074);
l_R_3074 = p_RS;
for (;;) {
if ((l_R_3074 == NULL)) goto L_end3075;
{
if ((((*(R21 *)rt_nil_check(l_R_3074))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3076; memset(&l_M_3076, 0, sizeof l_M_3076);
l_M_3076 = r_FIND_DECL(l_R_3074);
R21 * l_D_3077; memset(&l_D_3077, 0, sizeof l_D_3077);
l_D_3077 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3074))).f_C))).f_A;
r_ENTER_MODULE(l_M_3076);
for (;;) {
if ((l_D_3077 == NULL)) goto L_end3078;
{
if (((((*(R21 *)rt_nil_check(l_D_3077))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_3077))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3077);
}
l_D_3077 = ((*(R21 *)rt_nil_check(l_D_3077))).f_NEXT;
}
RT_B_TICK();
} L_end3078: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3074))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3074))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3074))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3076);
}
}
l_R_3074 = ((*(R21 *)rt_nil_check(l_R_3074))).f_NEXT;
}
RT_B_TICK();
} L_end3075: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3079; memset(&l_R_3079, 0, sizeof l_R_3079);
l_R_3079 = p_RS;
for (;;) {
if ((l_R_3079 == NULL)) goto L_end3080;
{
if ((((*(R21 *)rt_nil_check(l_R_3079))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3081; memset(&l_M_3081, 0, sizeof l_M_3081);
l_M_3081 = r_FIND_DECL(l_R_3079);
r_ENTER_MODULE(l_M_3081);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3079))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3081);
}
}
else
{
{
R12 * l_Y_3082; memset(&l_Y_3082, 0, sizeof l_Y_3082);
l_Y_3082 = r_FIND_DECL(l_R_3079);
if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3082))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3082))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3082))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3082);
}
}
}
l_R_3079 = ((*(R21 *)rt_nil_check(l_R_3079))).f_NEXT;
}
RT_B_TICK();
} L_end3080: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3083; memset(&l_LEVEL_3083, 0, sizeof l_LEVEL_3083);
l_LEVEL_3083 = r_CUR_LEVEL();
rt_int l_MORE_3084; memset(&l_MORE_3084, 0, sizeof l_MORE_3084);
l_MORE_3084 = 1;
for (;;) {
if ((!l_MORE_3084)) goto L_end3085;
{
l_MORE_3084 = 0;
{
R12 * l_P_3086; memset(&l_P_3086, 0, sizeof l_P_3086);
l_P_3086 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3087; memset(&l_PREV_3087, 0, sizeof l_PREV_3087);
l_PREV_3087 = NULL;
for (;;) {
if ((l_P_3086 == NULL)) goto L_end3088;
{
if ((((*(R12 *)rt_nil_check(l_P_3086))).f_LEVEL == l_LEVEL_3083))
{
if ((l_PREV_3087 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3086))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3087))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3086))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3089; memset(&l_SAVED_SEG_3089, 0, sizeof l_SAVED_SEG_3089);
l_SAVED_SEG_3089 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3090; memset(&l_HOME_3090, 0, sizeof l_HOME_3090);
l_HOME_3090 = r_ENTER_HOME(l_P_3086);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3086))).f_HOME;
r_ENTER_MODULE_OF(l_P_3086);
r_ROUTINE_BODY(l_P_3086);
r_LEAVE_MODULE_OF(l_P_3086);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3089;
r_LEAVE_HOME(l_P_3086, l_HOME_3090);
}
l_MORE_3084 = 1;
goto L_end3088;
}
l_PREV_3087 = l_P_3086;
l_P_3086 = ((*(R12 *)rt_nil_check(l_P_3086))).f_MEMBERS;
}
RT_B_TICK();
} L_end3088: ;
}
}
RT_B_TICK();
} L_end3085: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_3091; memset(&l_D_3091, 0, sizeof l_D_3091);
l_D_3091 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_3092; memset(&l_S_3092, 0, sizeof l_S_3092);
l_S_3092 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3091 == NULL)) goto L_end3093;
{
if (((((*(R21 *)rt_nil_check(l_D_3091))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_3091))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3091);
}
l_D_3091 = ((*(R21 *)rt_nil_check(l_D_3091))).f_NEXT;
}
RT_B_TICK();
} L_end3093: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3092 == NULL)) goto L_end3094;
{
r_STMT(l_S_3092);
l_S_3092 = ((*(R21 *)rt_nil_check(l_S_3092))).f_NEXT;
}
RT_B_TICK();
} L_end3094: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_3095; memset(&l_R_3095, 0, sizeof l_R_3095);
l_R_3095 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3096; memset(&l_SAVED_CODE_3096, 0, sizeof l_SAVED_CODE_3096);
S_R14(&l_SAVED_CODE_3096, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_3097; memset(&l_SAVED_CTXS_3097, 0, sizeof l_SAVED_CTXS_3097);
l_SAVED_CTXS_3097 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_3098; memset(&l_SAVED_BINDS_3098, 0, sizeof l_SAVED_BINDS_3098);
l_SAVED_BINDS_3098 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_3099; memset(&l_OUTER_3099, 0, sizeof l_OUTER_3099);
l_OUTER_3099 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_3100; memset(&l_CS_3100, 0, sizeof l_CS_3100);
l_CS_3100 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_PROLOGUE_3101; memset(&l_PROLOGUE_3101, 0, sizeof l_PROLOGUE_3101);
S_R10(&l_PROLOGUE_3101, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_3100)), ({ R18 rc3102; memset(&rc3102, 0, sizeof rc3102);  rc3102.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3102.f_R = p_Y; rc3102.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc3102.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3102.f_FIELDS, ({ R14 rc3103; memset(&rc3103, 0, sizeof rc3103);  rc3103.f_HEAD = NULL; rc3103.f_TAIL = NULL; rc3103; }), 0); rc3102.f_UP = l_OUTER_3099; rc3102.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_3095))).f_E; rc3102.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3095))).f_D))).f_A; rc3102.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3102.f_IS_PATH = 0; S_R10(&rc3102.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3102; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_3100))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_3100))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_3100))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_3100))).f_FIELDS);
}
S_R10(&l_PROLOGUE_3101, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_3100))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_3100))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_3101, r_CATS(l_PROLOGUE_3101, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3100;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3104; memset(&rc3104, 0, sizeof rc3104);  rc3104.f_HEAD = NULL; rc3104.f_TAIL = NULL; rc3104; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_3095))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3095))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_3095))).f_LINE);
{
R28 * l_P_3105; memset(&l_P_3105, 0, sizeof l_P_3105);
l_P_3105 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3105 == NULL)) goto L_end3106;
{
if ((!(((*(R28 *)rt_nil_check(l_P_3105))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_3105))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3107; memset(&l_V_3107, 0, sizeof l_V_3107);
l_V_3107 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_3105))).f_NAME);
R20 * l_MB_3108; memset(&l_MB_3108, 0, sizeof l_MB_3108);
l_MB_3108 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME, (((*(R28 *)rt_nil_check(l_P_3105))).f_NAME).f_LEN))));
((*(R12 *)rt_nil_check(l_V_3107))).f_T = ((*(R28 *)rt_nil_check(l_P_3105))).f_T;
((*(R12 *)rt_nil_check(l_V_3107))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_3105))).f_MODE == g_M_IN);
if ((!(l_MB_3108 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3107))).f_HASMV = ((*(R20 *)rt_nil_check(l_MB_3108))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3107))).f_MV = ((*(R20 *)rt_nil_check(l_MB_3108))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3107))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_3105))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_3107))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3107))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3105))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3100))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3105))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3100))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_3101, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3101, r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3107))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_3105))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_3109; memset(&l_ARGA_3109, 0, sizeof l_ARGA_3109);
S_R10(&l_ARGA_3109, ((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3105))).f_T, l_ARGA_3109, ((*(R21 *)rt_nil_check(l_R_3095))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3107))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3105))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3100))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_3101, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3101, r_CTYPE(((*(R28 *)rt_nil_check(l_P_3105))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3105))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_3101, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3101, ((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, l_ARGA_3109), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_3105))).f_T))
{
S_R10(&l_PROLOGUE_3101, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3101, ((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_3105))).f_T, l_ARGA_3109)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_3100))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_3100))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_3105))).f_T, l_ARGA_3109, ((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS)), 0);
r_DEFINE(l_V_3107, ((*(R21 *)rt_nil_check(l_R_3095))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3107, ((*(R21 *)rt_nil_check(l_R_3095))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3105))).f_T, ((*(R12 *)rt_nil_check(l_V_3107))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_3095))).f_LINE, 1);
}
}
}
}
l_P_3105 = ((*(R28 *)rt_nil_check(l_P_3105))).f_NEXT;
}
RT_B_TICK();
} L_end3106: ;
}
if ((((*(R21 *)rt_nil_check(l_R_3095))).f_FL >= ((rt_int)2LL)))
{
{
R21 * l_N_3110; memset(&l_N_3110, 0, sizeof l_N_3110);
l_N_3110 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3095))).f_D))).f_C;
R14 l_SAVED_CODE_3111; memset(&l_SAVED_CODE_3111, 0, sizeof l_SAVED_CODE_3111);
S_R14(&l_SAVED_CODE_3111, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3112; memset(&l_V_3112, 0, sizeof l_V_3112);
S_R26(&l_V_3112, r_EXPR(l_N_3110, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_3113; memset(&l_M_3113, 0, sizeof l_M_3113);
S_R23(&l_M_3113, r_MANIFEST(l_N_3110), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3111, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3112).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3112).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3113).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_3110))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3113).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_3110))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_3095))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_3095))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_3100))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_3100))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3101));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_3100))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_3100))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3099;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3096, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3097;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3098;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_3114; memset(&l_B_3114, 0, sizeof l_B_3114);
l_B_3114 = p_BS;
for (;;) {
if ((l_B_3114 == NULL)) goto L_end3115;
{
if ((!(((*(R20 *)rt_nil_check(l_B_3114))).f_T == NULL)))
{
{
R12 * l_Y_3116; memset(&l_Y_3116, 0, sizeof l_Y_3116);
l_Y_3116 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_3114))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3116))).f_T = ((*(R20 *)rt_nil_check(l_B_3114))).f_T;
r_DEFINE(l_Y_3116, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_3114))).f_HASMV)
{
{
R12 * l_Y_3117; memset(&l_Y_3117, 0, sizeof l_Y_3117);
l_Y_3117 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_3114))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3117))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3117))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3117))).f_MV = ((*(R20 *)rt_nil_check(l_B_3114))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_3117))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_3114))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3117))).f_INPUT = 1;
r_DEFINE(l_Y_3117, p_LINE);
}
}
l_B_3114 = ((*(R20 *)rt_nil_check(l_B_3114))).f_NEXT;
}
RT_B_TICK();
} L_end3115: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3118; memset(&l_C_3118, 0, sizeof l_C_3118);
l_C_3118 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3118 == NULL)) goto L_end3119;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_3118))).f_T), &(*p_DST));
l_C_3118 = ((*(R15 *)rt_nil_check(l_C_3118))).f_NEXT;
}
RT_B_TICK();
} L_end3119: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_3120; memset(&l_U_3120, 0, sizeof l_U_3120);
l_U_3120 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3120 == NULL)) goto L_end3121;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_3120))).f_NAME, p_NAME))
{
{ rt_int rv3122 = 1;
return rv3122; }
}
l_U_3120 = ((*(R21 *)rt_nil_check(l_U_3120))).f_NEXT;
}
RT_B_TICK();
} L_end3121: ;
{ rt_int rv3123 = 0;
return rv3123; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_3124; memset(&l_U_3124, 0, sizeof l_U_3124);
l_U_3124 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3124 == NULL)) goto L_end3125;
{
{
R21 * l_T_3126; memset(&l_T_3126, 0, sizeof l_T_3126);
l_T_3126 = p_SEGS;
for (;;) {
if ((l_T_3126 == NULL)) goto L_end3127;
{
if ((((!(l_T_3126 == p_S)) && (((*(R21 *)rt_nil_check(l_T_3126))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_3126))).f_NAME, ((*(R21 *)rt_nil_check(l_U_3124))).f_NAME)))
{
{ rt_int rv3128 = 0;
return rv3128; }
}
l_T_3126 = ((*(R21 *)rt_nil_check(l_T_3126))).f_NEXT;
}
RT_B_TICK();
} L_end3127: ;
}
l_U_3124 = ((*(R21 *)rt_nil_check(l_U_3124))).f_NEXT;
}
RT_B_TICK();
} L_end3125: ;
{ rt_int rv3129 = 1;
return rv3129; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_3130; memset(&l_S_3130, 0, sizeof l_S_3130);
l_S_3130 = p_SEGS;
rt_int l_MAINS_3131; memset(&l_MAINS_3131, 0, sizeof l_MAINS_3131);
l_MAINS_3131 = ((rt_int)0LL);
R18 * l_ROOT_3132; memset(&l_ROOT_3132, 0, sizeof l_ROOT_3132);
l_ROOT_3132 = ((R18 *)rt_b_new(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_3132)), ({ R18 rc3133; memset(&rc3133, 0, sizeof rc3133);  rc3133.f_LEVEL = ((rt_int)0LL); rc3133.f_R = NULL; rc3133.f_FRAMED = 0; S_R10(&rc3133.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3133.f_FIELDS, ({ R14 rc3134; memset(&rc3134, 0, sizeof rc3134);  rc3134.f_HEAD = NULL; rc3134.f_TAIL = NULL; rc3134; }), 0); rc3133.f_UP = NULL; rc3133.f_IMPORTS = NULL; rc3133.f_SIGNALS = NULL; rc3133.f_RESULT = NULL; rc3133.f_IS_PATH = 0; S_R10(&rc3133.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3133; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3132;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3135; memset(&rc3135, 0, sizeof rc3135);  rc3135.f_HEAD = NULL; rc3135.f_TAIL = NULL; rc3135; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3130 = p_SEGS;
for (;;) {
if ((l_S_3130 == NULL)) goto L_end3137;
{
if ((((*(R21 *)rt_nil_check(l_S_3130))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3130, p_SEGS))
{
goto L_end3137;
}
}
l_S_3130 = ((*(R21 *)rt_nil_check(l_S_3130))).f_NEXT;
}
RT_B_TICK();
} L_end3137: ;
if ((l_S_3130 == NULL))
{
goto L_end3136;
}
((*(R21 *)rt_nil_check(l_S_3130))).f_D = l_S_3130;
l_MAINS_3131 = rt_add(l_MAINS_3131, ((*(R21 *)rt_nil_check(l_S_3130))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_3130))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3130))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_3130))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3130);
if (r_USES_SEGMENT(l_S_3130, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_3130))).f_B);
r_SEGMENT_EXPORTS(l_S_3130);
}
RT_B_TICK();
} L_end3136: ;
l_S_3130 = p_SEGS;
for (;;) {
if ((l_S_3130 == NULL)) goto L_end3138;
{
if ((((*(R21 *)rt_nil_check(l_S_3130))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_3130))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_3130))).f_NAME);
}
l_S_3130 = ((*(R21 *)rt_nil_check(l_S_3130))).f_NEXT;
}
RT_B_TICK();
} L_end3138: ;
if ((!(l_MAINS_3131 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_3139; memset(&l_X_3139, 0, sizeof l_X_3139);
l_X_3139 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3139 == NULL)) goto L_end3140;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_3139))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_3139))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_3139))).f_NAME)));
l_X_3139 = ((*(R21 *)rt_nil_check(l_X_3139))).f_NEXT;
}
RT_B_TICK();
} L_end3140: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3141; memset(&l_M_3141, 0, sizeof l_M_3141);
l_M_3141 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3142 = 0;
return rv3142; }
}
for (;;) {
if ((l_M_3141 == NULL)) goto L_end3143;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3141))).f_NAME))
{
{ rt_int rv3144 = 1;
return rv3144; }
}
l_M_3141 = ((*(R12 *)rt_nil_check(l_M_3141))).f_MODL;
}
RT_B_TICK();
} L_end3143: ;
{ rt_int rv3145 = 0;
return rv3145; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3146; memset(&l_MARK_3146, 0, sizeof l_MARK_3146);
l_MARK_3146 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3147; memset(&l_TAKEN_3147, 0, sizeof l_TAKEN_3147);
R12 * l_SEG_3148; memset(&l_SEG_3148, 0, sizeof l_SEG_3148);
l_SEG_3148 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R21 * l_NAMES_3149; memset(&l_NAMES_3149, 0, sizeof l_NAMES_3149);
l_NAMES_3149 = NULL;
for (;;) {
if ((l_MARK_3146 == NULL)) goto L_end3150;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3146))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3150;
}
l_MARK_3146 = ((*(R12 *)rt_nil_check(l_MARK_3146))).f_SNEXT;
}
RT_B_TICK();
} L_end3150: ;
l_TAKEN_3147 = r_TAKE_SCOPE(l_MARK_3146);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R21 * l_X_3151; memset(&l_X_3151, 0, sizeof l_X_3151);
l_X_3151 = ((*(R21 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3151 == NULL)) goto L_end3152;
{
{
R12 * l_Y_3153; memset(&l_Y_3153, 0, sizeof l_Y_3153);
l_Y_3153 = l_TAKEN_3147;
rt_int l_FOUND_3154; memset(&l_FOUND_3154, 0, sizeof l_FOUND_3154);
l_FOUND_3154 = (!(r_LOOKUP(((*(R21 *)rt_nil_check(l_X_3151))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3153 == NULL)) goto L_end3155;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3153))).f_NAME, ((*(R21 *)rt_nil_check(l_X_3151))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3153))).f_PREFIX, ((*(R21 *)rt_nil_check(l_X_3151))).f_NAME)))
{
l_FOUND_3154 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3153))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3153), ((*(R21 *)rt_nil_check(l_X_3151))).f_NAME))
{
l_FOUND_3154 = 1;
}
}
l_Y_3153 = ((*(R12 *)rt_nil_check(l_Y_3153))).f_SNEXT;
}
RT_B_TICK();
} L_end3155: ;
if ((!l_FOUND_3154))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_3151))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R21 *)rt_nil_check(l_X_3151))).f_NAME);
}
l_NAMES_3149 = r_NAME_REF(((*(R21 *)rt_nil_check(l_X_3151))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3149);
}
l_X_3151 = ((*(R21 *)rt_nil_check(l_X_3151))).f_NEXT;
}
RT_B_TICK();
} L_end3152: ;
}
for (;;) {
if ((l_TAKEN_3147 == NULL)) goto L_end3156;
{
{
R12 * l_NEXT_3157; memset(&l_NEXT_3157, 0, sizeof l_NEXT_3157);
l_NEXT_3157 = ((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3147)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3147))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_SEGM = l_SEG_3148;
l_NAMES_3149 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3149);
r_DEFINE(l_TAKEN_3147, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3147))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3148))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3148))).f_MEMBERS = l_TAKEN_3147;
}
l_TAKEN_3147 = l_NEXT_3157;
}
}
RT_B_TICK();
} L_end3156: ;
((*(R12 *)rt_nil_check(l_SEG_3148))).f_USES = l_NAMES_3149;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R21 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3158; memset(&l_SEG_3158, 0, sizeof l_SEG_3158);
l_SEG_3158 = r_NEW_SYM(g_Y_SEGMENT, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R21 * l_U_3159; memset(&l_U_3159, 0, sizeof l_U_3159);
l_U_3159 = ((*(R21 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3158))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3158))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3158;
for (;;) {
if ((l_U_3159 == NULL)) goto L_end3160;
{
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_3159))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3161; memset(&l_T_3161, 0, sizeof l_T_3161);
l_T_3161 = r_FIND_SEGMENT(((*(R21 *)rt_nil_check(l_U_3159))).f_NAME);
if ((l_T_3161 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_U_3159))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R21 *)rt_nil_check(l_U_3159))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(l_U_3159))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3161, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3159))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3161, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3159))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3161, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3159))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3161, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3159))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3161, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3159))).f_A))).f_E);
}
}
}
l_U_3159 = ((*(R21 *)rt_nil_check(l_U_3159))).f_NEXT;
}
RT_B_TICK();
} L_end3160: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3158;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3158;
l_U_3159 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3159 == NULL)) goto L_end3162;
{
if ((!(((*(R21 *)rt_nil_check(l_U_3159))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R21 *)rt_nil_check(l_U_3159))).f_A, ((*(R21 *)rt_nil_check(l_U_3159))).f_LINE);
}
l_U_3159 = ((*(R21 *)rt_nil_check(l_U_3159))).f_NEXT;
}
RT_B_TICK();
} L_end3162: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3163; memset(&l_SAVED_3163, 0, sizeof l_SAVED_3163);
l_SAVED_3163 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3164 = l_SAVED_3163;
return rv3164; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3165; memset(&l_X_3165, 0, sizeof l_X_3165);
l_X_3165 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3165 == NULL)) goto L_end3166;
{
{
R12 * l_A_3167; memset(&l_A_3167, 0, sizeof l_A_3167);
l_A_3167 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3165))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3165))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3167)), (*(R12 *)rt_nil_check(l_X_3165)), 0);
((*(R12 *)rt_nil_check(l_A_3167))).f_ORIG = r_ORIGINAL(l_X_3165);
r_DEFINE_ALIAS(l_A_3167);
}
l_X_3165 = ((*(R12 *)rt_nil_check(l_X_3165))).f_SNEXT;
}
RT_B_TICK();
} L_end3166: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3168 = l_SAVED_3163;
return rv3168; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3169; memset(&l_B_3169, 0, sizeof l_B_3169);
l_B_3169 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3169, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3169, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
((*(R12 *)rt_nil_check(p_A))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_A;
}
static void r_LEAVE_HOME(R12 * p_Y, R12 * p_SAVED) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == p_SAVED)))
{
return;
}
r_CLOSE_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = p_SAVED;
}
static R12 * r_FIND_SEGMENT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_T_3170; memset(&l_T_3170, 0, sizeof l_T_3170);
l_T_3170 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3170 == NULL)) goto L_end3171;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3170))).f_NAME, p_NAME))
{
{ R12 * rv3172 = l_T_3170;
return rv3172; }
}
l_T_3170 = ((*(R12 *)rt_nil_check(l_T_3170))).f_INSTANCES;
}
RT_B_TICK();
} L_end3171: ;
{ R12 * rv3173 = NULL;
return rv3173; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R21 * p_L) { RT_B_TICK(); 
R21 * l_N_3174; memset(&l_N_3174, 0, sizeof l_N_3174);
l_N_3174 = p_L;
for (;;) {
if ((l_N_3174 == NULL)) goto L_end3175;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R21 *)rt_nil_check(l_N_3174))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_3174))).f_LINE, rt_str("the segment does not define ", 28), ((*(R21 *)rt_nil_check(l_N_3174))).f_NAME);
}
l_N_3174 = ((*(R21 *)rt_nil_check(l_N_3174))).f_NEXT;
}
RT_B_TICK();
} L_end3175: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_U_3176; memset(&l_U_3176, 0, sizeof l_U_3176);
rt_int l_INPUT_ONLY_3177; memset(&l_INPUT_ONLY_3177, 0, sizeof l_INPUT_ONLY_3177);
l_INPUT_ONLY_3177 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3178 = 1;
return rv3178; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3179 = 1;
return rv3179; }
}
l_U_3176 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3176 == NULL)) goto L_end3180;
{
{
R12 * l_T_3181; memset(&l_T_3181, 0, sizeof l_T_3181);
l_T_3181 = r_FIND_SEGMENT(((*(R21 *)rt_nil_check(l_U_3176))).f_NAME);
if ((!(l_T_3181 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3181))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R21 *)rt_nil_check(l_U_3176))).f_A == NULL))
{
{ rt_int rv3182 = 1;
return rv3182; }
}
{
R21 * l_I_3183; memset(&l_I_3183, 0, sizeof l_I_3183);
l_I_3183 = ((*(R21 *)rt_nil_check(l_U_3176))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3183))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3184 = 1;
return rv3184; }
}
else if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3183))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3177 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3183))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3183))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3183))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R21 *)rt_nil_check(l_I_3183))).f_E, p_Y)))
{
{ rt_int rv3185 = 1;
return rv3185; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3183))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R21 *)rt_nil_check(l_I_3183))).f_E, p_Y)))
{
{ rt_int rv3186 = 1;
return rv3186; }
}
}
else
{
{ rt_int rv3187 = 1;
return rv3187; }
}
}
}
}
}
l_U_3176 = ((*(R21 *)rt_nil_check(l_U_3176))).f_NEXT;
}
RT_B_TICK();
} L_end3180: ;
if (l_INPUT_ONLY_3177)
{
{ rt_int rv3188 = 0;
return rv3188; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3189; memset(&l_M_3189, 0, sizeof l_M_3189);
l_M_3189 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3190 = 0;
return rv3190; }
}
for (;;) {
if ((l_M_3189 == NULL)) goto L_end3191;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3189))).f_NAME))
{
{ rt_int rv3192 = 1;
return rv3192; }
}
l_M_3189 = ((*(R12 *)rt_nil_check(l_M_3189))).f_MODL;
}
RT_B_TICK();
} L_end3191: ;
{ rt_int rv3193 = 0;
return rv3193; }
rt_raise(RT_X_INIT);
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
