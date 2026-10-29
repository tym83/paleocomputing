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
struct A8 { rt_int lo[1], hi[1]; rt_int *p; };
struct R10 { int dummy_; rt_int f_AT; rt_int f_LEN; rt_int f_H; };
struct R9 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R10 f_TX; };
struct A11 { rt_int lo[1], hi[1]; R9 *p; };
struct A13 { rt_int lo[1], hi[1]; R12 * *p; };
struct R14 { int dummy_; R15 * f_HEAD; R15 * f_TAIL; };
struct A16 { rt_int lo[1], hi[1]; R14 *p; };
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_ARRAYS; R12 * f_RECS; };
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
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT);
static R26 r_FIELD_EXPR(R21 * p_E);
static rt_int r_IS_TYPE_WORD(R10 p_NAME);
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE);
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN);
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T);
static R26 r_INDEX_EXPR(R21 * p_E);
static R26 r_INDEX_EXPR2(R21 * p_E);
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY);
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT);
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT);
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE);
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
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE);
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE);
static R26 r_SIZE_OF(R22 * p_T, R10 p_C);
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE);
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
static R12 * r_BOUND_ROUTINE(R10 p_NAME);
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME);
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST);
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP);
static rt_int r_PARAM_COUNT(R12 * p_R);
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS);
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T);
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_IS_STRUCTURED(R22 * p_T);
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B);
static rt_int r_STATIC_GENERIC(R21 * p_TS);
static rt_int r_HAS_GEN_ARG(R21 * p_A);
static void r_ROUTINE_HEADER(R12 * p_Y);
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
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
static R10 r_NEW_NAME(rstr p_BASE) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R10 rv65 = r_MK(rt_str_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
return rv65; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R10 p_T, R14 *p_B) { RT_B_TICK(); 
R15 * l_C_66; memset(&l_C_66, 0, sizeof l_C_66);
l_C_66 = ((R15 *)rt_alloc(sizeof (R15)));
S_R10(&((*(R15 *)rt_nil_check(l_C_66))).f_T, p_T, 0);
((*(R15 *)rt_nil_check(l_C_66))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_66;
}
else
{
((*(R15 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_66;
}
((*p_B)).f_TAIL = l_C_66;
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
R15 * l_C_67; memset(&l_C_67, 0, sizeof l_C_67);
l_C_67 = (p_B).f_HEAD;
for (;;) {
if ((l_C_67 == NULL)) goto L_end68;
{
{
R10 l_T_69; memset(&l_T_69, 0, sizeof l_T_69);
S_R10(&l_T_69, ((*(R15 *)rt_nil_check(l_C_67))).f_T, 0);
rt_putln(r_STR(l_T_69, (l_T_69).f_LEN));
}
l_C_67 = ((*(R15 *)rt_nil_check(l_C_67))).f_NEXT;
}
RT_B_TICK();
} L_end68: ;
}
static void r_WRITE_OUTPUT(void) { RT_B_TICK(); 
{ rt_int it71_lo = ((rt_int)0LL), it71_hi = g_O_LAST;
for (rt_int it71 = it71_lo; it71 <= it71_hi; it71++) {
{
r_PUT_BUF((((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it71, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
RT_B_TICK();
if (it71 == it71_hi) break;
} } L_end70: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { RT_B_TICK(); 
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R10 p_T) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_str_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { RT_B_TICK(); 
rt_int l_C_72; memset(&l_C_72, 0, sizeof l_C_72);
l_C_72 = rt_b_get_code();
for (;;) {
if ((l_C_72 < ((rt_int)0LL))) goto L_end73;
{
if ((((*(R7 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_72;
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_72 = rt_b_get_code();
}
RT_B_TICK();
} L_end73: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
static rt_int r_AT_SRC(rt_int p_I) { RT_B_TICK(); 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv74 = ((rt_int)0LL);
return rv74; }
}
{ rt_int rv75 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv75; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv76 = ({ rt_int iv77 = p_C; (((rt_int)65LL) <= iv77) && (iv77 <= ((rt_int)90LL)); });
return rv76; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv78 = ({ rt_int iv79 = p_C; (((rt_int)48LL) <= iv79) && (iv79 <= ((rt_int)57LL)); });
return rv78; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv80 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv80; }
rt_raise(RT_X_INIT);
}
static R10 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { RT_B_TICK(); 
rt_int l_AT_81; memset(&l_AT_81, 0, sizeof l_AT_81);
l_AT_81 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_82; memset(&l_L_82, 0, sizeof l_L_82);
l_L_82 = rt_sub(p_BEYOND, p_FIRST);
R10 l_T_83; memset(&l_T_83, 0, sizeof l_T_83);
if ((rt_add(l_AT_81, l_L_82) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it85_lo = p_FIRST, it85_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it85 = it85_lo; it85 <= it85_hi; it85++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it85, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
RT_B_TICK();
if (it85 == it85_hi) break;
} } L_end84: ;
S_R10(&l_T_83, ({ R10 rc86; memset(&rc86, 0, sizeof rc86);  rc86.f_AT = l_AT_81; rc86.f_LEN = l_L_82; rc86.f_H = ((rt_int)0LL); rc86; }), 0);
if ((l_L_82 > ((rt_int)0LL)))
{
(l_T_83).f_H = r_HASH_CODES(l_L_82, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_82, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R10 rv87 = l_T_83;
return rv87; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R10 p_T) { RT_B_TICK(); 
rstr l_WORDS_88; memset(&l_WORDS_88, 0, sizeof l_WORDS_88);
l_WORDS_88 = rt_str_new(((rt_int)290LL));
rt_b_assign(&l_WORDS_88, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_89; memset(&l_L_89, 0, sizeof l_L_89);
l_L_89 = (p_T).f_LEN;
{ rt_int it91_lo = ((rt_int)0LL), it91_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_89), ((rt_int)2LL));
for (rt_int it91 = it91_lo; it91 <= it91_hi; it91++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_88, it91, it91), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_88, rt_add(rt_add(it91, l_L_89), ((rt_int)1LL)), rt_add(rt_add(it91, l_L_89), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_88, rt_add(it91, ((rt_int)1LL)), rt_add(it91, l_L_89)), r_STR(p_T, l_L_89)))
{
{ rt_int rv92 = 1;
return rv92; }
}
}
}
}
RT_B_TICK();
if (it91 == it91_hi) break;
} } L_end90: ;
{ rt_int rv93 = 0;
return rv93; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R10 p_TX) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R9(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R9 rc94; memset(&rc94, 0, sizeof rc94);  rc94.f_KIND = p_KIND; rc94.f_LINE = p_LINE; rc94.f_IV = p_IV; S_R10(&rc94.f_TX, p_TX, 0); rc94; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { RT_B_TICK(); 
rt_int l_C_95; memset(&l_C_95, 0, sizeof l_C_95);
l_C_95 = r_AT_SRC(p_I);
rt_int l_D_96; memset(&l_D_96, 0, sizeof l_D_96);
l_D_96 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_95 == ((rt_int)45LL)) && (l_D_96 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv97 = ((rt_int)3LL);
return rv97; }
}
if ((((((((((((l_C_95 == ((rt_int)58LL)) && (l_D_96 == ((rt_int)61LL)))) || (((l_C_95 == ((rt_int)45LL)) && (l_D_96 == ((rt_int)62LL))))) || (((l_C_95 == ((rt_int)60LL)) && (l_D_96 == ((rt_int)61LL))))) || (((l_C_95 == ((rt_int)62LL)) && (l_D_96 == ((rt_int)61LL))))) || (((l_C_95 == ((rt_int)60LL)) && (l_D_96 == ((rt_int)62LL))))) || (((l_C_95 == ((rt_int)42LL)) && (l_D_96 == ((rt_int)42LL))))) || (((l_C_95 == ((rt_int)47LL)) && (l_D_96 == ((rt_int)47LL))))) || (((l_C_95 == ((rt_int)36LL)) && (l_D_96 == ((rt_int)36LL))))) || (((l_C_95 == ((rt_int)33LL)) && (l_D_96 == ((rt_int)33LL))))))
{
{ rt_int rv98 = ((rt_int)2LL);
return rv98; }
}
{ rt_int rv99 = ((rt_int)1LL);
return rv99; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { RT_B_TICK(); 
rt_int l_I_100; memset(&l_I_100, 0, sizeof l_I_100);
l_I_100 = ((rt_int)0LL);
rt_int l_LINE_101; memset(&l_LINE_101, 0, sizeof l_LINE_101);
l_LINE_101 = ((rt_int)1LL);
rt_int l_C_102; memset(&l_C_102, 0, sizeof l_C_102);
rt_int l_J_103; memset(&l_J_103, 0, sizeof l_J_103);
rt_int l_V_104; memset(&l_V_104, 0, sizeof l_V_104);
for (;;) {
if ((l_I_100 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end105;
{
l_C_102 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_100, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_102 == ((rt_int)10LL)))
{
l_LINE_101 = rt_add(l_LINE_101, ((rt_int)1LL));
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
}
else if (((((l_C_102 == ((rt_int)32LL)) || (l_C_102 == ((rt_int)9LL))) || (l_C_102 == ((rt_int)13LL))) || (l_C_102 == ((rt_int)12LL))))
{
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
}
else if ((l_C_102 == ((rt_int)37LL)))
{
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
for (;;) {
if ((((l_I_100 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_100, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_100, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end106;
{
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
}
RT_B_TICK();
} L_end106: ;
if ((r_AT_SRC(l_I_100) == ((rt_int)37LL)))
{
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
}
}
else if ((l_C_102 == ((rt_int)39LL)))
{
{
rt_int l_AT_107; memset(&l_AT_107, 0, sizeof l_AT_107);
l_AT_107 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
for (;;) {
{
if (((l_I_100 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_100, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_101, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_100, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_100, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
goto L_end108;
}
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_100, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_100 = rt_add(l_I_100, ((rt_int)1LL));
}
RT_B_TICK();
} L_end108: ;
r_ADD_TOKEN(g_K_STR, l_LINE_101, ((rt_int)0LL), ({ R10 rc109; memset(&rc109, 0, sizeof rc109);  rc109.f_AT = l_AT_107; rc109.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_107); rc109.f_H = rt_neg(((rt_int)1LL)); rc109; }));
}
}
else if ((l_C_102 == ((rt_int)92LL)))
{
l_J_103 = rt_add(l_I_100, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_103) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_103, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_103, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_103, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_103 = rt_add(l_I_100, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_103) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_103, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_103 = rt_add(l_I_100, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_103) == ((rt_int)91LL)) || (r_AT_SRC(l_J_103) == ((rt_int)93LL))))
{
l_J_103 = rt_add(l_I_100, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_103)))) goto L_end110;
{
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
RT_B_TICK();
} L_end110: ;
if ((l_J_103 == rt_add(l_I_100, ((rt_int)1LL))))
{
r_FAIL(l_LINE_101, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_101, ((rt_int)0LL), r_SOURCE_TEXT(l_I_100, l_J_103));
l_I_100 = l_J_103;
}
else if ((l_C_102 == ((rt_int)63LL)))
{
l_J_103 = rt_add(l_I_100, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_103)))) goto L_end111;
{
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
RT_B_TICK();
} L_end111: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_101, ((rt_int)0LL), r_SOURCE_TEXT(l_I_100, l_J_103));
l_I_100 = l_J_103;
}
else if (r_IS_LETTER(l_C_102))
{
l_J_103 = l_I_100;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_103)))) goto L_end112;
{
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
RT_B_TICK();
} L_end112: ;
{
R10 l_T_113; memset(&l_T_113, 0, sizeof l_T_113);
S_R10(&l_T_113, r_SOURCE_TEXT(l_I_100, l_J_103), 0);
if (r_IS_RESERVED(l_T_113))
{
r_ADD_TOKEN(g_K_RES, l_LINE_101, ((rt_int)0LL), l_T_113);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_101, ((rt_int)0LL), l_T_113);
}
}
l_I_100 = l_J_103;
}
else if ((r_IS_DIGIT(l_C_102) || (((l_C_102 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_100, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_114; memset(&l_KIND_114, 0, sizeof l_KIND_114);
l_KIND_114 = g_K_NUM;
rt_int l_SCALE_115; memset(&l_SCALE_115, 0, sizeof l_SCALE_115);
l_SCALE_115 = ((rt_int)0LL);
rt_int l_NEG_116; memset(&l_NEG_116, 0, sizeof l_NEG_116);
l_NEG_116 = 0;
rt_int l_BIG_117; memset(&l_BIG_117, 0, sizeof l_BIG_117);
l_BIG_117 = 0;
l_J_103 = l_I_100;
l_V_104 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_103)))) goto L_end118;
{
if ((l_V_104 > rt_quot((rt_sub(INT64_MAX, (rt_sub(r_AT_SRC(l_J_103), ((rt_int)48LL))))), ((rt_int)10LL))))
{
l_BIG_117 = 1;
}
else
{
l_V_104 = rt_add(rt_mul(l_V_104, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_103), ((rt_int)48LL))));
}
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
RT_B_TICK();
} L_end118: ;
if ((r_AT_SRC(l_J_103) == ((rt_int)46LL)))
{
l_KIND_114 = g_K_REAL;
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_103)))) goto L_end119;
{
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
RT_B_TICK();
} L_end119: ;
}
if (((r_AT_SRC(l_J_103) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_103, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_103, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_103, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_103, ((rt_int)2LL))))))))))
{
l_KIND_114 = g_K_REAL;
l_J_103 = rt_add(l_J_103, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_103)))) goto L_end120;
{
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
RT_B_TICK();
} L_end120: ;
}
{
R10 l_T_121; memset(&l_T_121, 0, sizeof l_T_121);
S_R10(&l_T_121, r_SOURCE_TEXT(l_I_100, l_J_103), 0);
if (((r_AT_SRC(l_J_103) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_103, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_114 = g_K_FIX;
l_J_103 = rt_add(l_J_103, ((rt_int)2LL));
if ((r_AT_SRC(l_J_103) == ((rt_int)45LL)))
{
l_NEG_116 = 1;
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_103) == ((rt_int)43LL)))
{
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_103)))) goto L_end122;
{
if ((l_SCALE_115 <= ((rt_int)100000LL)))
{
l_SCALE_115 = rt_add(rt_mul(l_SCALE_115, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_103), ((rt_int)48LL))));
}
l_J_103 = rt_add(l_J_103, ((rt_int)1LL));
}
RT_B_TICK();
} L_end122: ;
if (l_NEG_116)
{
l_SCALE_115 = rt_neg(l_SCALE_115);
}
l_V_104 = l_SCALE_115;
}
if (((l_KIND_114 == g_K_NUM) && l_BIG_117))
{
r_FAIL(l_LINE_101, rt_str("an integer literal exceeds the largest INTEGER (3.2.2)", 54));
}
r_ADD_TOKEN(l_KIND_114, l_LINE_101, l_V_104, l_T_121);
}
}
l_I_100 = l_J_103;
}
else
{
l_J_103 = rt_add(l_I_100, r_SYMBOL_LENGTH(l_I_100));
r_ADD_TOKEN(g_K_SYM, l_LINE_101, ((rt_int)0LL), r_SOURCE_TEXT(l_I_100, l_J_103));
l_I_100 = l_J_103;
}
}
RT_B_TICK();
} L_end105: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_101, ((rt_int)0LL), r_MK(rt_str("", 0)));
}
static R9 r_CUR(void) { RT_B_TICK(); 
{ R9 rv123 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv123; }
rt_raise(RT_X_INIT);
}
static R9 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R9 rv124 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv124; }
}
{ R9 rv125 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv125; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv126 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv126; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R9 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv127 = r_TEQS((p_T).f_TX, p_S);
return rv127; }
}
{ rt_int rv128 = 0;
return rv128; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv129 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv129; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv130 = 0;
return rv130; }
}
{ rt_int rv131 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv131; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv132 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv132; }
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
{ rt_int rv133 = 1;
return rv133; }
}
{ rt_int rv134 = 0;
return rv134; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R10 l_T_135; memset(&l_T_135, 0, sizeof l_T_135);
S_R10(&l_T_135, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_str_cat(rt_str_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_135, (l_T_135).f_LEN)));
}
}
}
static R10 r_IDENT(void) { RT_B_TICK(); 
R9 l_T_136; memset(&l_T_136, 0, sizeof l_T_136);
S_R9(&l_T_136, r_CUR(), 0);
if ((!((l_T_136).f_KIND == g_K_ID)))
{
r_FAILT((l_T_136).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_136).f_TX);
}
r_SKIP();
{ R10 rv137 = (l_T_136).f_TX;
return rv137; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R10 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R21 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_138; memset(&l_N_138, 0, sizeof l_N_138);
l_N_138 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_N_138)), ({ R21 rc139; memset(&rc139, 0, sizeof rc139);  rc139.f_KIND = p_KIND; rc139.f_LINE = p_LINE; rc139.f_IV = ((rt_int)0LL); S_R10(&rc139.f_NAME, ({ R10 rc140; memset(&rc140, 0, sizeof rc140);  rc140.f_AT = ((rt_int)0LL); rc140.f_LEN = ((rt_int)0LL); rc140.f_H = ((rt_int)0LL); rc140; }), 0); rc139.f_A = NULL; rc139.f_B = NULL; rc139.f_C = NULL; rc139.f_D = NULL; rc139.f_E = NULL; rc139.f_NEXT = NULL; rc139.f_FL = ((rt_int)0LL); rc139; }), 0);
{ R21 * rv141 = l_N_138;
return rv141; }
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
rt_int l_K_142; memset(&l_K_142, 0, sizeof l_K_142);
l_K_142 = ((rt_int)0LL);
R21 * l_P_143; memset(&l_P_143, 0, sizeof l_P_143);
l_P_143 = p_N;
for (;;) {
if ((l_P_143 == NULL)) goto L_end144;
{
l_K_142 = rt_add(l_K_142, ((rt_int)1LL));
l_P_143 = ((*(R21 *)rt_nil_check(l_P_143))).f_NEXT;
}
RT_B_TICK();
} L_end144: ;
{ rt_int rv145 = l_K_142;
return rv145; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_NODE(void) { RT_B_TICK(); 
R21 * l_N_146; memset(&l_N_146, 0, sizeof l_N_146);
l_N_146 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_146))).f_NAME, r_IDENT(), 0);
{ R21 * rv147 = l_N_146;
return rv147; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_LIST(void) { RT_B_TICK(); 
R21 * l_HEAD_148; memset(&l_HEAD_148, 0, sizeof l_HEAD_148);
l_HEAD_148 = NULL;
R21 * l_TAIL_149; memset(&l_TAIL_149, 0, sizeof l_TAIL_149);
l_TAIL_149 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_148, &l_TAIL_149);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end150;
} L_end150: ;
{ R21 * rv151 = l_HEAD_148;
return rv151; }
rt_raise(RT_X_INIT);
}
static R21 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R21 * l_N_152; memset(&l_N_152, 0, sizeof l_N_152);
l_N_152 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_152))).f_NAME, r_MKN(rt_str_cat(rt_str_cat(r_STR(((*(R21 *)rt_nil_check(l_N_152))).f_NAME, (((*(R21 *)rt_nil_check(l_N_152))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R21 * rv153 = l_N_152;
return rv153; }
rt_raise(RT_X_INIT);
}
static R21 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R21 * l_L_154; memset(&l_L_154, 0, sizeof l_L_154);
l_L_154 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_154 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R21 * rv155 = l_L_154;
return rv155; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_156; memset(&l_DEPTH_156, 0, sizeof l_DEPTH_156);
l_DEPTH_156 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_156 = rt_add(l_DEPTH_156, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_156 = rt_sub(l_DEPTH_156, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_156 == ((rt_int)0LL))) goto L_end157;
} L_end157: ;
}
static R21 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R21 * l_HEAD_158; memset(&l_HEAD_158, 0, sizeof l_HEAD_158);
l_HEAD_158 = NULL;
R21 * l_TAIL_159; memset(&l_TAIL_159, 0, sizeof l_TAIL_159);
l_TAIL_159 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end160;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_158, &l_TAIL_159);
}
RT_B_TICK();
} L_end160: ;
{ R21 * rv161 = l_HEAD_158;
return rv161; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R21 * l_N_162; memset(&l_N_162, 0, sizeof l_N_162);
l_N_162 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end163;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R21 *)rt_nil_check(l_N_162))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R21 *)rt_nil_check(l_N_162))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_162))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_162))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_162))).f_E = r_PAREN_IDENTS();
}
else
{
{
R10 l_T_164; memset(&l_T_164, 0, sizeof l_T_164);
S_R10(&l_T_164, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_164);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end163: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv165 = l_N_162;
return rv165; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R21 * l_S_166; memset(&l_S_166, 0, sizeof l_S_166);
l_S_166 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R21 * l_HEAD_167; memset(&l_HEAD_167, 0, sizeof l_HEAD_167);
l_HEAD_167 = NULL;
R21 * l_TAIL_168; memset(&l_TAIL_168, 0, sizeof l_TAIL_168);
l_TAIL_168 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R21 *)rt_nil_check(l_S_166))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R10(&((*(R21 *)rt_nil_check(l_S_166))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_U_170; memset(&l_U_170, 0, sizeof l_U_170);
l_U_170 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_U_170))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_U_170))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_170, &l_HEAD_167, &l_TAIL_168);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end169;
} L_end169: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_S_166))).f_A = l_HEAD_167;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_S_166))).f_FL = ((rt_int)1LL);
}
else
{
((*(R21 *)rt_nil_check(l_S_166))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_S_166))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_S_166))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv171 = l_S_166;
return rv171; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R21 * l_B_172; memset(&l_B_172, 0, sizeof l_B_172);
l_B_172 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R21 * l_HEAD_173; memset(&l_HEAD_173, 0, sizeof l_HEAD_173);
l_HEAD_173 = NULL;
R21 * l_TAIL_174; memset(&l_TAIL_174, 0, sizeof l_TAIL_174);
l_TAIL_174 = NULL;
((*(R21 *)rt_nil_check(l_B_172))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_172))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_173, &l_TAIL_174);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_173, &l_TAIL_174);
}
else
{
goto L_end175;
}
}
RT_B_TICK();
} L_end175: ;
((*(R21 *)rt_nil_check(l_B_172))).f_C = l_HEAD_173;
{ R21 * rv176 = l_B_172;
return rv176; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BODY(void) { RT_B_TICK(); 
R21 * l_B_177; memset(&l_B_177, 0, sizeof l_B_177);
l_B_177 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_B_177))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_177))).f_B = r_PARSE_STATEMENTS();
{ R21 * rv178 = l_B_177;
return rv178; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R21 * l_M_179; memset(&l_M_179, 0, sizeof l_M_179);
l_M_179 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R21 * l_HEAD_180; memset(&l_HEAD_180, 0, sizeof l_HEAD_180);
l_HEAD_180 = NULL;
R21 * l_TAIL_181; memset(&l_TAIL_181, 0, sizeof l_TAIL_181);
l_TAIL_181 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R10(&((*(R21 *)rt_nil_check(l_M_179))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_M_179))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_M_179))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_183; memset(&l_PAREN_183, 0, sizeof l_PAREN_183);
l_PAREN_183 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_X_185; memset(&l_X_185, 0, sizeof l_X_185);
l_X_185 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_X_185))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R21 *)rt_nil_check(l_X_185))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_185, &l_HEAD_180, &l_TAIL_181);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end184;
} L_end184: ;
if (l_PAREN_183)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R21 *)rt_nil_check(l_M_179))).f_B = l_HEAD_180;
}
}
else
{
goto L_end182;
}
}
RT_B_TICK();
} L_end182: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_M_179))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_M_179))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv186 = l_M_179;
return rv186; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R21 * l_HEAD_187; memset(&l_HEAD_187, 0, sizeof l_HEAD_187);
l_HEAD_187 = NULL;
R21 * l_TAIL_188; memset(&l_TAIL_188, 0, sizeof l_TAIL_188);
l_TAIL_188 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_187, &l_TAIL_188);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_187, &l_TAIL_188);
}
else if (r_IS(rt_str("REPTYPE", 7)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_187, &l_TAIL_188);
}
else
{
goto L_end189;
}
}
RT_B_TICK();
} L_end189: ;
{ R21 * rv190 = l_HEAD_187;
return rv190; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R21 * l_D_191; memset(&l_D_191, 0, sizeof l_D_191);
l_D_191 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R21 *)rt_nil_check(l_D_191))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R21 *)rt_nil_check(l_D_191))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_D_191))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R21 *)rt_nil_check(l_D_191))).f_C = r_PARSE_EXPR();
}
else if ((((*(R21 *)rt_nil_check(l_D_191))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R21 *)rt_nil_check(l_D_191))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv192 = l_D_191;
return rv192; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R21 * l_HEAD_193; memset(&l_HEAD_193, 0, sizeof l_HEAD_193);
l_HEAD_193 = NULL;
R21 * l_TAIL_194; memset(&l_TAIL_194, 0, sizeof l_TAIL_194);
l_TAIL_194 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_F_196; memset(&l_F_196, 0, sizeof l_F_196);
l_F_196 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R21 *)rt_nil_check(l_F_196))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_F_196))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R21 *)rt_nil_check(l_F_196))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_196, &l_HEAD_193, &l_TAIL_194);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end195;
} L_end195: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv197 = l_HEAD_193;
return rv197; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_198; memset(&l_D_198, 0, sizeof l_D_198);
l_D_198 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R10(&((*(R21 *)rt_nil_check(l_D_198))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_198))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_198))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R21 * rv199 = l_D_198;
return rv199; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_200; memset(&l_D_200, 0, sizeof l_D_200);
l_D_200 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R10(&((*(R21 *)rt_nil_check(l_D_200))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_200))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R21 *)rt_nil_check(l_D_200))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_200))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R21 * rv201 = l_D_200;
return rv201; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REP(void) { RT_B_TICK(); 
R21 * l_R_202; memset(&l_R_202, 0, sizeof l_R_202);
l_R_202 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R21 * l_HEAD_203; memset(&l_HEAD_203, 0, sizeof l_HEAD_203);
l_HEAD_203 = NULL;
R21 * l_TAIL_204; memset(&l_TAIL_204, 0, sizeof l_TAIL_204);
l_TAIL_204 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R21 *)rt_nil_check(l_R_202))).f_KIND = g_TS_GEN;
S_R10(&((*(R21 *)rt_nil_check(l_R_202))).f_NAME, r_GEN_NAME(), 0);
{ R21 * rv205 = l_R_202;
return rv205; }
}
S_R10(&((*(R21 *)rt_nil_check(l_R_202))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R21 * rv206 = l_R_202;
return rv206; }
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_202))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_SKIP_PARENS();
{ R21 * rv207 = l_R_202;
return rv207; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end208;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R21 * l_VH_209; memset(&l_VH_209, 0, sizeof l_VH_209);
l_VH_209 = NULL;
R21 * l_VT_210; memset(&l_VT_210, 0, sizeof l_VT_210);
l_VT_210 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_V_212; memset(&l_V_212, 0, sizeof l_V_212);
l_V_212 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_V_212))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R21 *)rt_nil_check(l_V_212))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_212, &l_VH_209, &l_VT_210);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end211;
} L_end211: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_202))).f_B = l_VH_209;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_203, &l_TAIL_204);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end208: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_202))).f_A = l_HEAD_203;
{ R21 * rv213 = l_R_202;
return rv213; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_NAME(void) { RT_B_TICK(); 
R10 l_T_214; memset(&l_T_214, 0, sizeof l_T_214);
S_R10(&l_T_214, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_214).f_LEN == ((rt_int)1LL)))
{
{ R10 rv215 = r_NO_TEXT();
return rv215; }
}
{ R10 rv216 = r_MKN(rt_b_slice(r_STR(l_T_214, (l_T_214).f_LEN), ((rt_int)1LL), rt_sub((l_T_214).f_LEN, ((rt_int)1LL))));
return rv216; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R21 * l_N_217; memset(&l_N_217, 0, sizeof l_N_217);
if (r_IS_KIND(g_K_GEN))
{
{
R10 l_T_218; memset(&l_T_218, 0, sizeof l_T_218);
S_R10(&l_T_218, (r_CUR()).f_TX, 0);
if (((l_T_218).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R21 * rv219 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv219; }
}
}
l_N_217 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_217))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_217))).f_C = r_PARSE_REP();
}
{ R21 * rv220 = l_N_217;
return rv220; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv221 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv221; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R21 * rv222 = r_PARSE_TYPE_SPEC();
return rv222; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R21 * rv223 = r_PARSE_TYPE_SPEC();
return rv223; }
}
l_N_217 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R21 * rv224 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_217));
return rv224; }
}
{ R21 * rv225 = l_N_217;
return rv225; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPR_TO_TS(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_226; memset(&l_N_226, 0, sizeof l_N_226);
if ((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R21 * rv227 = p_E;
return rv227; }
}
l_N_226 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_226))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R21 * rv228 = l_N_226;
return rv228; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_226))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_226))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R21 * rv229 = l_N_226;
return rv229; }
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
{ R21 * rv230 = p_N;
return rv230; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R21 * l_N_231; memset(&l_N_231, 0, sizeof l_N_231);
R21 * l_HEAD_232; memset(&l_HEAD_232, 0, sizeof l_HEAD_232);
l_HEAD_232 = NULL;
R21 * l_TAIL_233; memset(&l_TAIL_233, 0, sizeof l_TAIL_233);
l_TAIL_233 = NULL;
rt_int l_LINE_234; memset(&l_LINE_234, 0, sizeof l_LINE_234);
l_LINE_234 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_231 = r_NEW_NODE(g_TS_ARRAY, l_LINE_234);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R21 * l_R_236; memset(&l_R_236, 0, sizeof l_R_236);
l_R_236 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_R_236))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_236))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_236, &l_HEAD_232, &l_TAIL_233);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end235;
} L_end235: ;
r_EXPECT(rt_str("]", 1));
((*(R21 *)rt_nil_check(l_N_231))).f_A = l_HEAD_232;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_231))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R21 *)rt_nil_check(l_N_231))).f_C = r_PARSE_TYPE_SPEC();
{ R21 * rv237 = l_N_231;
return rv237; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_231 = r_NEW_NODE(g_TS_RECORD, l_LINE_234);
((*(R21 *)rt_nil_check(l_N_231))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_231))).f_D = r_PARSE_REP();
}
{ R21 * rv238 = l_N_231;
return rv238; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R21 * rv239 = r_PARSE_TYPE_ARG();
return rv239; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_231 = r_NEW_NODE(g_TS_ENUM, l_LINE_234);
((*(R21 *)rt_nil_check(l_N_231))).f_A = r_PARSE_LITERALS();
{ R21 * rv240 = r_TYPE_SPEC_TAIL(l_N_231);
return rv240; }
}
l_N_231 = r_NEW_NODE(g_TS_NAME, l_LINE_234);
S_R10(&((*(R21 *)rt_nil_check(l_N_231))).f_NAME, r_IDENT(), 0);
if ((r_TEQS(((*(R21 *)rt_nil_check(l_N_231))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_231))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_231))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R21 *)rt_nil_check(l_N_231))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_N_231))).f_KIND = g_TS_ENUM;
((*(R21 *)rt_nil_check(l_N_231))).f_A = r_PARSE_LITERALS();
{ R21 * rv241 = r_TYPE_SPEC_TAIL(l_N_231);
return rv241; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_231))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_232, &l_TAIL_233);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_232, &l_TAIL_233);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end242;
} L_end242: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_231))).f_A = l_HEAD_232;
}
{ R21 * rv243 = r_TYPE_SPEC_TAIL(l_N_231);
return rv243; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R21 * l_HEAD_244; memset(&l_HEAD_244, 0, sizeof l_HEAD_244);
l_HEAD_244 = NULL;
R21 * l_TAIL_245; memset(&l_TAIL_245, 0, sizeof l_TAIL_245);
l_TAIL_245 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_L_247; memset(&l_L_247, 0, sizeof l_L_247);
l_L_247 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R10(&((*(R21 *)rt_nil_check(l_L_247))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_247, &l_HEAD_244, &l_TAIL_245);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end246;
} L_end246: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv248 = l_HEAD_244;
return rv248; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R21 * l_HEAD_249; memset(&l_HEAD_249, 0, sizeof l_HEAD_249);
l_HEAD_249 = NULL;
R21 * l_TAIL_250; memset(&l_TAIL_250, 0, sizeof l_TAIL_250);
l_TAIL_250 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R21 * l_F_252; memset(&l_F_252, 0, sizeof l_F_252);
l_F_252 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R21 *)rt_nil_check(l_F_252))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_F_252))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_252, &l_HEAD_249, &l_TAIL_250);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R21 * l_V_253; memset(&l_V_253, 0, sizeof l_V_253);
l_V_253 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R21 * l_VH_254; memset(&l_VH_254, 0, sizeof l_VH_254);
l_VH_254 = NULL;
R21 * l_VT_255; memset(&l_VT_255, 0, sizeof l_VT_255);
l_VT_255 = NULL;
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_V_253))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end256;
{
{
R21 * l_S_257; memset(&l_S_257, 0, sizeof l_S_257);
l_S_257 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R21 * l_LH_258; memset(&l_LH_258, 0, sizeof l_LH_258);
l_LH_258 = NULL;
R21 * l_LT_259; memset(&l_LT_259, 0, sizeof l_LT_259);
l_LT_259 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_258, &l_LT_259);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end260;
} L_end260: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_257))).f_A = l_LH_258;
((*(R21 *)rt_nil_check(l_S_257))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_257, &l_VH_254, &l_VT_255);
}
}
RT_B_TICK();
} L_end256: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_V_253))).f_A = l_VH_254;
r_ADD_LIST(l_V_253, &l_HEAD_249, &l_TAIL_250);
}
}
else
{
goto L_end251;
}
}
RT_B_TICK();
} L_end251: ;
{ R21 * rv261 = l_HEAD_249;
return rv261; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R21 * l_R_262; memset(&l_R_262, 0, sizeof l_R_262);
l_R_262 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_262))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R21 *)rt_nil_check(l_R_262))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_262))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R21 *)rt_nil_check(l_R_262))).f_IV = rt_add(((*(R21 *)rt_nil_check(l_R_262))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R21 * rv263 = l_R_262;
return rv263; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_264; memset(&l_DEPTH_264, 0, sizeof l_DEPTH_264);
l_DEPTH_264 = ((rt_int)0LL);
rt_int l_K_265; memset(&l_K_265, 0, sizeof l_K_265);
l_K_265 = ((rt_int)0LL);
for (;;) {
{
{
R9 l_T_267; memset(&l_T_267, 0, sizeof l_T_267);
S_R9(&l_T_267, r_AHEAD(l_K_265), 0);
if (((l_T_267).f_KIND == g_K_EOF))
{
{ rt_int rv268 = 0;
return rv268; }
}
if (((l_T_267).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_267).f_TX, rt_str("(", 1)) || r_TEQS((l_T_267).f_TX, rt_str("[", 1))))
{
l_DEPTH_264 = rt_add(l_DEPTH_264, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_267).f_TX, rt_str(")", 1)) || r_TEQS((l_T_267).f_TX, rt_str("]", 1))))
{
l_DEPTH_264 = rt_sub(l_DEPTH_264, ((rt_int)1LL));
if ((l_DEPTH_264 == ((rt_int)0LL)))
{
{ rt_int rv269 = 0;
return rv269; }
}
}
else if (((l_DEPTH_264 == ((rt_int)1LL)) && ((r_TEQS((l_T_267).f_TX, rt_str(":", 1)) || r_TEQS((l_T_267).f_TX, rt_str(",", 1))))))
{
{ rt_int rv270 = r_TEQS((l_T_267).f_TX, rt_str(":", 1));
return rv270; }
}
}
}
l_K_265 = rt_add(l_K_265, ((rt_int)1LL));
}
RT_B_TICK();
} L_end266: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R21 * l_HEAD_271; memset(&l_HEAD_271, 0, sizeof l_HEAD_271);
l_HEAD_271 = NULL;
R21 * l_TAIL_272; memset(&l_TAIL_272, 0, sizeof l_TAIL_272);
l_TAIL_272 = NULL;
rt_int l_MODE_273; memset(&l_MODE_273, 0, sizeof l_MODE_273);
l_MODE_273 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end274;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_273 = rt_add(l_MODE_273, ((rt_int)1LL));
}
else
{
{
R21 * l_NAMES_275; memset(&l_NAMES_275, 0, sizeof l_NAMES_275);
l_NAMES_275 = r_IDENT_LIST();
R21 * l_TS_276; memset(&l_TS_276, 0, sizeof l_TS_276);
l_TS_276 = NULL;
R21 * l_P_277; memset(&l_P_277, 0, sizeof l_P_277);
l_P_277 = l_NAMES_275;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_276 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_276 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_277 == NULL)) goto L_end278;
{
{
R21 * l_PN_279; memset(&l_PN_279, 0, sizeof l_PN_279);
l_PN_279 = r_NEW_NODE(g_N_PARAM, ((*(R21 *)rt_nil_check(l_P_277))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_PN_279))).f_NAME, ((*(R21 *)rt_nil_check(l_P_277))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_PN_279))).f_IV = l_MODE_273;
((*(R21 *)rt_nil_check(l_PN_279))).f_B = l_TS_276;
r_ADD_LIST(l_PN_279, &l_HEAD_271, &l_TAIL_272);
}
l_P_277 = ((*(R21 *)rt_nil_check(l_P_277))).f_NEXT;
}
RT_B_TICK();
} L_end278: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end274: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv280 = l_HEAD_271;
return rv280; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R21 * l_R_281; memset(&l_R_281, 0, sizeof l_R_281);
l_R_281 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R21 * l_HEAD_282; memset(&l_HEAD_282, 0, sizeof l_HEAD_282);
l_HEAD_282 = NULL;
R21 * l_TAIL_283; memset(&l_TAIL_283, 0, sizeof l_TAIL_283);
l_TAIL_283 = NULL;
rt_int l_MODE_284; memset(&l_MODE_284, 0, sizeof l_MODE_284);
l_MODE_284 = g_M_IN;
if (p_FUNC)
{
((*(R21 *)rt_nil_check(l_R_281))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end285;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_284 = rt_add(l_MODE_284, ((rt_int)1LL));
}
else
{
{
R21 * l_P_286; memset(&l_P_286, 0, sizeof l_P_286);
l_P_286 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_P_286))).f_IV = l_MODE_284;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R21 *)rt_nil_check(l_P_286))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_286, &l_HEAD_282, &l_TAIL_283);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end285: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_281))).f_A = l_HEAD_282;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R21 *)rt_nil_check(l_R_281))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_281))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_281))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_R_281))).f_D = r_PAREN_IDENTS();
}
{ R21 * rv287 = l_R_281;
return rv287; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R21 * rv288 = r_PARSE_TEMPLATE(1);
return rv288; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R21 * rv289 = r_PARSE_TEMPLATE(0);
return rv289; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R21 * l_HEAD_290; memset(&l_HEAD_290, 0, sizeof l_HEAD_290);
l_HEAD_290 = NULL;
R21 * l_TAIL_291; memset(&l_TAIL_291, 0, sizeof l_TAIL_291);
l_TAIL_291 = NULL;
for (;;) {
{
{
R21 * l_N_293; memset(&l_N_293, 0, sizeof l_N_293);
l_N_293 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R21 * l_TH_294; memset(&l_TH_294, 0, sizeof l_TH_294);
l_TH_294 = NULL;
R21 * l_TT_295; memset(&l_TT_295, 0, sizeof l_TT_295);
l_TT_295 = NULL;
S_R10(&((*(R21 *)rt_nil_check(l_N_293))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_T_297; memset(&l_T_297, 0, sizeof l_T_297);
l_T_297 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_T_297))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_T_297))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_297, &l_TH_294, &l_TT_295);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end296;
} L_end296: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_293))).f_A = l_TH_294;
r_ADD_LIST(l_N_293, &l_HEAD_290, &l_TAIL_291);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end292;
} L_end292: ;
{ R21 * rv298 = l_HEAD_290;
return rv298; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R21 * l_R_299; memset(&l_R_299, 0, sizeof l_R_299);
l_R_299 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R21 * l_H_300; memset(&l_H_300, 0, sizeof l_H_300);
l_H_300 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R21 *)rt_nil_check(l_R_299))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
((*(R21 *)rt_nil_check(l_R_299))).f_FL = rt_add(((*(R21 *)rt_nil_check(l_R_299))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R21 *)rt_nil_check(l_R_299))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R10(&((*(R21 *)rt_nil_check(l_R_299))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_299))).f_A = r_PARSE_PARAMS();
}
if ((((*(R21 *)rt_nil_check(l_R_299))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_299))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_299))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_300))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_R_299))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R21 *)rt_nil_check(l_H_300))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end301;
}
}
RT_B_TICK();
} L_end301: ;
((*(R21 *)rt_nil_check(l_R_299))).f_D = l_H_300;
r_EXPECT(rt_str(";", 1));
if ((((*(R21 *)rt_nil_check(l_R_299))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_SKIP_PARENS();
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end302;
{
r_SKIP();
}
RT_B_TICK();
} L_end302: ;
}
else
{
((*(R21 *)rt_nil_check(l_R_299))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R21 *)rt_nil_check(l_R_299))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R21 *)rt_nil_check(l_R_299))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R21 *)rt_nil_check(l_R_299))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv303 = l_R_299;
return rv303; }
rt_raise(RT_X_INIT);
}
static R21 * r_BIN_NODE(R10 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_N_304; memset(&l_N_304, 0, sizeof l_N_304);
l_N_304 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_304))).f_NAME, p_OP, 0);
((*(R21 *)rt_nil_check(l_N_304))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_304))).f_B = p_B;
{ R21 * rv305 = l_N_304;
return rv305; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R21 * l_E_306; memset(&l_E_306, 0, sizeof l_E_306);
l_E_306 = r_PARSE_SIMPLE();
if ((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))))
{
{
R21 * l_Q_307; memset(&l_Q_307, 0, sizeof l_Q_307);
l_Q_307 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_Q_307))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_Q_307))).f_A = l_E_306;
l_E_306 = l_Q_307;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R21 * l_Q_308; memset(&l_Q_308, 0, sizeof l_Q_308);
l_Q_308 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R21 *)rt_nil_check(l_E_306))).f_KIND == g_N_QUAL))
{
l_Q_308 = l_E_306;
}
else
{
((*(R21 *)rt_nil_check(l_Q_308))).f_A = l_E_306;
}
((*(R21 *)rt_nil_check(l_Q_308))).f_B = r_PARSE_SIMPLE();
l_E_306 = l_Q_308;
}
}
{ R21 * rv309 = l_E_306;
return rv309; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R21 * l_LEFT_310; memset(&l_LEFT_310, 0, sizeof l_LEFT_310);
l_LEFT_310 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end311;
{
{
R9 l_T_312; memset(&l_T_312, 0, sizeof l_T_312);
S_R9(&l_T_312, r_CUR(), 0);
r_SKIP();
l_LEFT_310 = r_BIN_NODE((l_T_312).f_TX, (l_T_312).f_LINE, l_LEFT_310, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end311: ;
{ R21 * rv313 = l_LEFT_310;
return rv313; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R21 * l_LEFT_314; memset(&l_LEFT_314, 0, sizeof l_LEFT_314);
l_LEFT_314 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end315;
{
{
R9 l_T_316; memset(&l_T_316, 0, sizeof l_T_316);
S_R9(&l_T_316, r_CUR(), 0);
r_SKIP();
l_LEFT_314 = r_BIN_NODE((l_T_316).f_TX, (l_T_316).f_LINE, l_LEFT_314, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end315: ;
{ R21 * rv317 = l_LEFT_314;
return rv317; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R21 * l_LEFT_318; memset(&l_LEFT_318, 0, sizeof l_LEFT_318);
l_LEFT_318 = r_PARSE_SUM();
for (;;) {
{
{
R9 l_T_320; memset(&l_T_320, 0, sizeof l_T_320);
S_R9(&l_T_320, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_318 = r_BIN_NODE((l_T_320).f_TX, (l_T_320).f_LINE, l_LEFT_318, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_321; memset(&l_N_321, 0, sizeof l_N_321);
l_N_321 = r_NEW_NODE(g_N_IN, (l_T_320).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_321))).f_A = l_LEFT_318;
((*(R21 *)rt_nil_check(l_N_321))).f_B = r_PARSE_RANGE();
l_LEFT_318 = l_N_321;
}
}
else
{
{ R21 * rv322 = l_LEFT_318;
return rv322; }
}
}
}
RT_B_TICK();
} L_end319: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_323; memset(&l_SAVED_323, 0, sizeof l_SAVED_323);
l_SAVED_323 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_324; memset(&l_LINE_324, 0, sizeof l_LINE_324);
l_LINE_324 = r_LINE_NOW();
R21 * l_N_325; memset(&l_N_325, 0, sizeof l_N_325);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv326 = NULL;
return rv326; }
}
{
R9 l_OP_327; memset(&l_OP_327, 0, sizeof l_OP_327);
S_R9(&l_OP_327, r_AHEAD(((rt_int)1LL)), 0);
R10 l_T_328; memset(&l_T_328, 0, sizeof l_T_328);
S_R10(&l_T_328, (l_OP_327).f_TX, 0);
rt_int l_FOUND_329; memset(&l_FOUND_329, 0, sizeof l_FOUND_329);
l_FOUND_329 = 0;
if (((!((l_OP_327).f_KIND == g_K_SYM)) && (!((l_OP_327).f_KIND == g_K_RES))))
{
{ R21 * rv330 = NULL;
return rv330; }
}
{ rt_int it332_lo = ((rt_int)0LL), it332_hi = rt_sub((rt_int)(p_OPS).len, (l_T_328).f_LEN);
for (rt_int it332 = it332_lo; it332 <= it332_hi; it332++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it332, rt_sub(rt_add(it332, (l_T_328).f_LEN), ((rt_int)1LL))), r_STR(l_T_328, (l_T_328).f_LEN)))
{
if (((((it332 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it332, ((rt_int)1LL)), rt_sub(it332, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it332, (l_T_328).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it332, (l_T_328).f_LEN), rt_add(it332, (l_T_328).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_329 = 1;
}
}
}
RT_B_TICK();
if (it332 == it332_hi) break;
} } L_end331: ;
if ((!l_FOUND_329))
{
{ R21 * rv333 = NULL;
return rv333; }
}
r_SKIP();
r_SKIP();
l_N_325 = r_BIN_NODE(l_T_328, l_LINE_324, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_325))).f_FL = ((rt_int)2LL);
{ R21 * rv334 = l_N_325;
return rv334; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_325))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_325))).f_FL = ((rt_int)1LL);
{ R21 * rv335 = l_N_325;
return rv335; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_323;
{ R21 * rv336 = NULL;
return rv336; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { RT_B_TICK(); 
R21 * l_LEFT_337; memset(&l_LEFT_337, 0, sizeof l_LEFT_337);
l_LEFT_337 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R9 l_T_339; memset(&l_T_339, 0, sizeof l_T_339);
S_R9(&l_T_339, r_CUR(), 0);
r_SKIP();
l_LEFT_337 = r_BIN_NODE((l_T_339).f_TX, (l_T_339).f_LINE, l_LEFT_337, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_340; memset(&l_N_340, 0, sizeof l_N_340);
l_N_340 = r_TRY_SCALED(l_LEFT_337, rt_str("+ -", 3));
if ((l_N_340 == NULL))
{
{ R21 * rv341 = l_LEFT_337;
return rv341; }
}
((*(R21 *)rt_nil_check(l_N_340))).f_B = r_PARSE_TERM();
l_LEFT_337 = l_N_340;
}
}
}
RT_B_TICK();
} L_end338: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { RT_B_TICK(); 
R21 * l_LEFT_342; memset(&l_LEFT_342, 0, sizeof l_LEFT_342);
l_LEFT_342 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R9 l_T_344; memset(&l_T_344, 0, sizeof l_T_344);
S_R9(&l_T_344, r_CUR(), 0);
r_SKIP();
l_LEFT_342 = r_BIN_NODE((l_T_344).f_TX, (l_T_344).f_LINE, l_LEFT_342, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_345; memset(&l_N_345, 0, sizeof l_N_345);
l_N_345 = r_TRY_SCALED(l_LEFT_342, rt_str("* / // MOD", 10));
if ((l_N_345 == NULL))
{
{ R21 * rv346 = l_LEFT_342;
return rv346; }
}
((*(R21 *)rt_nil_check(l_N_345))).f_B = r_PARSE_FACTOR();
l_LEFT_342 = l_N_345;
}
}
}
RT_B_TICK();
} L_end343: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R21 * l_LEFT_347; memset(&l_LEFT_347, 0, sizeof l_LEFT_347);
l_LEFT_347 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R9 l_T_349; memset(&l_T_349, 0, sizeof l_T_349);
S_R9(&l_T_349, r_CUR(), 0);
r_SKIP();
l_LEFT_347 = r_BIN_NODE((l_T_349).f_TX, (l_T_349).f_LINE, l_LEFT_347, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_350; memset(&l_N_350, 0, sizeof l_N_350);
l_N_350 = r_TRY_SCALED(l_LEFT_347, rt_str("**", 2));
if ((l_N_350 == NULL))
{
{ R21 * rv351 = l_LEFT_347;
return rv351; }
}
((*(R21 *)rt_nil_check(l_N_350))).f_B = r_PARSE_SECONDARY();
l_LEFT_347 = l_N_350;
}
}
}
RT_B_TICK();
} L_end348: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R9 l_T_352; memset(&l_T_352, 0, sizeof l_T_352);
S_R9(&l_T_352, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_353; memset(&l_N_353, 0, sizeof l_N_353);
l_N_353 = r_NEW_NODE(g_N_UNOP, (l_T_352).f_LINE);
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_353))).f_NAME, (l_T_352).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_353))).f_A = r_PARSE_POSTFIX();
{ R21 * rv354 = l_N_353;
return rv354; }
}
}
{ R21 * rv355 = r_PARSE_POSTFIX();
return rv355; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { RT_B_TICK(); 
R21 * l_HEAD_356; memset(&l_HEAD_356, 0, sizeof l_HEAD_356);
l_HEAD_356 = NULL;
R21 * l_TAIL_357; memset(&l_TAIL_357, 0, sizeof l_TAIL_357);
l_TAIL_357 = NULL;
rt_int l_GROUP_358; memset(&l_GROUP_358, 0, sizeof l_GROUP_358);
l_GROUP_358 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end359;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_358) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_356;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_356;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_358 = rt_add(l_GROUP_358, ((rt_int)1LL));
l_HEAD_356 = NULL;
l_TAIL_357 = NULL;
}
else
{
if ((l_GROUP_358 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_356, &l_TAIL_357);
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_356, &l_TAIL_357);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end359: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_358) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_356;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_356;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_356;
}
break;
}
{ R21 * rv360 = p_N;
return rv360; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R21 * l_E_361; memset(&l_E_361, 0, sizeof l_E_361);
l_E_361 = r_PARSE_ATOM();
R21 * l_N_362; memset(&l_N_362, 0, sizeof l_N_362);
for (;;) {
{
{
rt_int l_LINE_364; memset(&l_LINE_364, 0, sizeof l_LINE_364);
l_LINE_364 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_361))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_361))).f_KIND = g_N_APPLY;
l_E_361 = r_PARSE_ARGS(l_E_361);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_362 = r_NEW_NODE(g_N_INDEX, l_LINE_364);
l_N_362 = r_PARSE_ARGS(l_N_362);
((*(R21 *)rt_nil_check(l_N_362))).f_B = ((*(R21 *)rt_nil_check(l_N_362))).f_A;
((*(R21 *)rt_nil_check(l_N_362))).f_A = l_E_361;
l_E_361 = l_N_362;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_362 = r_NEW_NODE(g_N_FIELD, l_LINE_364);
((*(R21 *)rt_nil_check(l_N_362))).f_A = l_E_361;
S_R10(&((*(R21 *)rt_nil_check(l_N_362))).f_NAME, r_IDENT(), 0);
l_E_361 = l_N_362;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_362 = r_NEW_NODE(g_N_DEREF, l_LINE_364);
((*(R21 *)rt_nil_check(l_N_362))).f_A = l_E_361;
l_E_361 = l_N_362;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_362 = r_NEW_NODE(g_N_SUBSTR, l_LINE_364);
((*(R21 *)rt_nil_check(l_N_362))).f_A = l_E_361;
((*(R21 *)rt_nil_check(l_N_362))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_362))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_361 = l_N_362;
}
else
{
{ R21 * rv365 = l_E_361;
return rv365; }
}
}
}
RT_B_TICK();
} L_end363: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_366; memset(&l_AT_366, 0, sizeof l_AT_366);
l_AT_366 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_367; memset(&l_N_367, 0, sizeof l_N_367);
l_N_367 = r_NEW_NODE(g_N_BITS, p_LINE);
R10 l_R_368; memset(&l_R_368, 0, sizeof l_R_368);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end369;
{
{
R10 l_T_370; memset(&l_T_370, 0, sizeof l_T_370);
S_R10(&l_T_370, (r_CUR()).f_TX, 0);
rstr l_S_371; memset(&l_S_371, 0, sizeof l_S_371);
l_S_371 = rt_str_new((l_T_370).f_LEN);
rt_b_assign(&l_S_371, r_STR(l_T_370, (l_T_370).f_LEN));
{ rt_int it373_lo = ((rt_int)0LL), it373_hi = rt_sub((l_T_370).f_LEN, ((rt_int)1LL));
for (rt_int it373 = it373_lo; it373 <= it373_hi; it373++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_371, it373, it373), rt_str(" ", 1))))
{
{
rt_int l_C_374; memset(&l_C_374, 0, sizeof l_C_374);
l_C_374 = r_CODE_OF(rt_b_slice(l_S_371, it373, it373));
rt_int l_V_375; memset(&l_V_375, 0, sizeof l_V_375);
l_V_375 = rt_sub(l_C_374, ((rt_int)48LL));
rt_int l_P_376; memset(&l_P_376, 0, sizeof l_P_376);
l_P_376 = ((rt_int)1LL);
if ((l_C_374 >= ((rt_int)65LL)))
{
l_V_375 = rt_sub(l_C_374, ((rt_int)55LL));
}
{ rt_int it378_lo = ((rt_int)1LL), it378_hi = p_BITS_PER;
for (rt_int it378 = it378_lo; it378 <= it378_hi; it378++) {
{
l_P_376 = rt_mul(l_P_376, ((rt_int)2LL));
}
RT_B_TICK();
if (it378 == it378_hi) break;
} } L_end377: ;
if (((l_V_375 < ((rt_int)0LL)) || (l_V_375 >= l_P_376)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it380_lo = ((rt_int)1LL), it380_hi = p_BITS_PER;
for (rt_int it380 = it380_lo; it380 <= it380_hi; it380++) {
{
l_P_376 = rt_quot(l_P_376, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_375, l_P_376)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R10(&l_R_368, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R10(&l_R_368, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it380 == it380_hi) break;
} } L_end379: ;
}
}
}
RT_B_TICK();
if (it373 == it373_hi) break;
} } L_end372: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end369: ;
S_R10(&((*(R21 *)rt_nil_check(l_N_367))).f_NAME, ({ R10 rc381; memset(&rc381, 0, sizeof rc381);  rc381.f_AT = l_AT_366; rc381.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_366); rc381.f_H = rt_neg(((rt_int)1LL)); rc381; }), 0);
{ R21 * rv382 = l_N_367;
return rv382; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R9 l_T_383; memset(&l_T_383, 0, sizeof l_T_383);
S_R9(&l_T_383, r_CUR(), 0);
R21 * l_N_384; memset(&l_N_384, 0, sizeof l_N_384);
if (((l_T_383).f_KIND == g_K_NUM))
{
l_N_384 = r_NEW_NODE(g_N_INT, (l_T_383).f_LINE);
((*(R21 *)rt_nil_check(l_N_384))).f_IV = (l_T_383).f_IV;
S_R10(&((*(R21 *)rt_nil_check(l_N_384))).f_NAME, (l_T_383).f_TX, 0);
r_SKIP();
{ R21 * rv385 = l_N_384;
return rv385; }
}
if ((((l_T_383).f_KIND == g_K_REAL) || ((l_T_383).f_KIND == g_K_FIX)))
{
l_N_384 = r_NEW_NODE(g_N_REAL, (l_T_383).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_384))).f_NAME, (l_T_383).f_TX, 0);
if (((l_T_383).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_384))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_384))).f_IV = (l_T_383).f_IV;
}
r_SKIP();
{ R21 * rv386 = l_N_384;
return rv386; }
}
if (((l_T_383).f_KIND == g_K_GEN))
{
{ R21 * rv387 = r_PARSE_TYPE_ARG();
return rv387; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_383, rt_str("BIN", 3)))
{
{ R21 * rv388 = r_PARSE_BITS(((rt_int)1LL), (l_T_383).f_LINE);
return rv388; }
}
else if (r_TOK_IS(l_T_383, rt_str("OCT", 3)))
{
{ R21 * rv389 = r_PARSE_BITS(((rt_int)3LL), (l_T_383).f_LINE);
return rv389; }
}
{ R21 * rv390 = r_PARSE_BITS(((rt_int)4LL), (l_T_383).f_LINE);
return rv390; }
}
if ((((l_T_383).f_KIND == g_K_STR) || ((l_T_383).f_KIND == g_K_ENUM)))
{
{ R21 * rv391 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv391; }
}
if ((((l_T_383).f_KIND == g_K_ID) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR)))
{
r_SKIP();
{ R21 * rv392 = r_PARSE_CHARSTRING((l_T_383).f_TX);
return rv392; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_384 = r_NEW_NODE(g_N_BOOL, (l_T_383).f_LINE);
((*(R21 *)rt_nil_check(l_N_384))).f_IV = ((rt_int)1LL);
{ R21 * rv393 = l_N_384;
return rv393; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv394 = r_NEW_NODE(g_N_BOOL, (l_T_383).f_LINE);
return rv394; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv395 = r_NEW_NODE(g_N_NIL, (l_T_383).f_LINE);
return rv395; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv396 = r_NEW_NODE(g_N_ANY, (l_T_383).f_LINE);
return rv396; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_397; memset(&l_TS_397, 0, sizeof l_TS_397);
l_TS_397 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_384 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_384))).f_B = l_TS_397;
{ R21 * rv398 = l_N_384;
return rv398; }
}
l_N_384 = r_NEW_NODE(g_N_TYPESPEC, (l_T_383).f_LINE);
((*(R21 *)rt_nil_check(l_N_384))).f_A = l_TS_397;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_384))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv399 = l_N_384;
return rv399; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_400; memset(&l_HEAD_400, 0, sizeof l_HEAD_400);
l_HEAD_400 = NULL;
R21 * l_TAIL_401; memset(&l_TAIL_401, 0, sizeof l_TAIL_401);
l_TAIL_401 = NULL;
r_SKIP();
for (;;) {
{
l_N_384 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_384))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_384))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_384, &l_HEAD_400, &l_TAIL_401);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end402;
} L_end402: ;
r_EXPECT(rt_str(")", 1));
l_N_384 = r_NEW_NODE(g_N_RECCONS, (l_T_383).f_LINE);
((*(R21 *)rt_nil_check(l_N_384))).f_A = l_HEAD_400;
{ R21 * rv403 = l_N_384;
return rv403; }
}
}
r_SKIP();
{
R21 * l_E_404; memset(&l_E_404, 0, sizeof l_E_404);
l_E_404 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_405; memset(&l_HEAD_405, 0, sizeof l_HEAD_405);
l_HEAD_405 = NULL;
R21 * l_TAIL_406; memset(&l_TAIL_406, 0, sizeof l_TAIL_406);
l_TAIL_406 = NULL;
r_ADD_LIST(l_E_404, &l_HEAD_405, &l_TAIL_406);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end407;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_405, &l_TAIL_406);
}
RT_B_TICK();
} L_end407: ;
r_EXPECT(rt_str(")", 1));
l_N_384 = r_NEW_NODE(g_N_ARRCONS, (l_T_383).f_LINE);
((*(R21 *)rt_nil_check(l_N_384))).f_A = l_HEAD_405;
{ R21 * rv408 = l_N_384;
return rv408; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_384 = r_NEW_NODE(g_N_PAREN, (l_T_383).f_LINE);
((*(R21 *)rt_nil_check(l_N_384))).f_A = l_E_404;
{ R21 * rv409 = l_N_384;
return rv409; }
}
}
if (((l_T_383).f_KIND == g_K_ID))
{
l_N_384 = r_NEW_NODE(g_N_NAME, (l_T_383).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_384))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((r_TEQS(((*(R21 *)rt_nil_check(l_N_384))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_384))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_384))).f_NAME, rt_str("SEMAPHORE$NEW", 13))))
{
((*(R21 *)rt_nil_check(l_N_384))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_384))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv410 = l_N_384;
return rv410; }
}
r_FAILT((l_T_383).f_LINE, rt_str("an expression expected, not ", 28), (l_T_383).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_411; memset(&l_LINE_411, 0, sizeof l_LINE_411);
l_LINE_411 = r_LINE_NOW();
R21 * l_HEAD_412; memset(&l_HEAD_412, 0, sizeof l_HEAD_412);
l_HEAD_412 = NULL;
R21 * l_TAIL_413; memset(&l_TAIL_413, 0, sizeof l_TAIL_413);
l_TAIL_413 = NULL;
rt_int l_STRINGS_414; memset(&l_STRINGS_414, 0, sizeof l_STRINGS_414);
l_STRINGS_414 = ((rt_int)0LL);
R21 * l_N_415; memset(&l_N_415, 0, sizeof l_N_415);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end416;
{
l_N_415 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_415))).f_IV = (r_CUR()).f_KIND;
S_R10(&((*(R21 *)rt_nil_check(l_N_415))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_415))).f_IV == g_K_STR))
{
l_STRINGS_414 = rt_add(l_STRINGS_414, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_415, &l_HEAD_412, &l_TAIL_413);
}
RT_B_TICK();
} L_end416: ;
if (((l_STRINGS_414 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))))
{
if ((!(((*(R21 *)rt_nil_check(l_HEAD_412))).f_NEXT == NULL)))
{
r_FAIL(l_LINE_411, rt_str("two enumerated literals in a row", 32));
}
((*(R21 *)rt_nil_check(l_HEAD_412))).f_KIND = g_N_ENUMLIT;
{ R21 * rv417 = l_HEAD_412;
return rv417; }
}
l_N_415 = r_NEW_NODE(g_N_STR, l_LINE_411);
((*(R21 *)rt_nil_check(l_N_415))).f_A = l_HEAD_412;
S_R10(&((*(R21 *)rt_nil_check(l_N_415))).f_NAME, p_CHARSET, 0);
{ R21 * rv418 = l_N_415;
return rv418; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv419 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv419; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R21 * l_HEAD_420; memset(&l_HEAD_420, 0, sizeof l_HEAD_420);
l_HEAD_420 = NULL;
R21 * l_TAIL_421; memset(&l_TAIL_421, 0, sizeof l_TAIL_421);
l_TAIL_421 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end422;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_420, &l_TAIL_421);
}
RT_B_TICK();
} L_end422: ;
{ R21 * rv423 = l_HEAD_420;
return rv423; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R21 * l_HEAD_424; memset(&l_HEAD_424, 0, sizeof l_HEAD_424);
l_HEAD_424 = NULL;
R21 * l_TAIL_425; memset(&l_TAIL_425, 0, sizeof l_TAIL_425);
l_TAIL_425 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end426;
{
{
R21 * l_H_427; memset(&l_H_427, 0, sizeof l_H_427);
l_H_427 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_427))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_427))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_427, &l_HEAD_424, &l_TAIL_425);
}
}
RT_B_TICK();
} L_end426: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv428 = l_HEAD_424;
return rv428; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R21 * l_S_429; memset(&l_S_429, 0, sizeof l_S_429);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_429 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_S_429))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_429))).f_A = r_PARSE_STATEMENT();
{ R21 * rv430 = l_S_429;
return rv430; }
}
l_S_429 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_431; memset(&l_X_431, 0, sizeof l_X_431);
l_X_431 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_431))).f_A = l_S_429;
((*(R21 *)rt_nil_check(l_X_431))).f_B = r_PARSE_HANDLERS();
{ R21 * rv432 = l_X_431;
return rv432; }
}
}
{ R21 * rv433 = l_S_429;
return rv433; }
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
rt_int l_LINE_434; memset(&l_LINE_434, 0, sizeof l_LINE_434);
l_LINE_434 = r_LINE_NOW();
R21 * l_S_435; memset(&l_S_435, 0, sizeof l_S_435);
R21 * l_T_436; memset(&l_T_436, 0, sizeof l_T_436);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv437 = r_NEW_NODE(g_N_NULL, l_LINE_434);
return rv437; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv438 = r_PARSE_IF();
return rv438; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv439 = r_PARSE_CASE();
return rv439; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv440 = r_PARSE_LOOP();
return rv440; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv441 = r_PARSE_PAR();
return rv441; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_435 = r_NEW_NODE(g_N_BLOCK, l_LINE_434);
((*(R21 *)rt_nil_check(l_S_435))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv442 = l_S_435;
return rv442; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_435 = r_NEW_NODE(g_N_WITH, l_LINE_434);
S_R10(&((*(R21 *)rt_nil_check(l_S_435))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_435))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_435))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_435))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_435))).f_B = r_PARSE_UNLABELED();
{ R21 * rv443 = l_S_435;
return rv443; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv444 = r_NEW_NODE(g_N_EXIT, l_LINE_434);
return rv444; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_435 = r_NEW_NODE(g_N_GOTO, l_LINE_434);
S_R10(&((*(R21 *)rt_nil_check(l_S_435))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv445 = l_S_435;
return rv445; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_435 = r_NEW_NODE(g_N_RETURN, l_LINE_434);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_435))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv446 = l_S_435;
return rv446; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_435 = r_NEW_NODE(g_N_SIGNAL, l_LINE_434);
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_435))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv447 = l_S_435;
return rv447; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_435 = r_NEW_NODE(g_N_ASSERT, l_LINE_434);
((*(R21 *)rt_nil_check(l_S_435))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv448 = l_S_435;
return rv448; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_435 = r_NEW_NODE(g_N_TERMINATE, l_LINE_434);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_435))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv449 = l_S_435;
return rv449; }
}
l_T_436 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_434, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_435 = r_NEW_NODE(g_N_ASSIGN, l_LINE_434);
((*(R21 *)rt_nil_check(l_S_435))).f_A = l_T_436;
((*(R21 *)rt_nil_check(l_S_435))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv450 = l_S_435;
return rv450; }
}
r_EXPECT(rt_str(";", 1));
if (((((*(R21 *)rt_nil_check(l_T_436))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_436))).f_KIND == g_N_APPLY)))
{
((*(R21 *)rt_nil_check(l_T_436))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_434, rt_str("a statement expected", 20));
}
{ R21 * rv451 = l_T_436;
return rv451; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { RT_B_TICK(); 
R21 * l_S_452; memset(&l_S_452, 0, sizeof l_S_452);
l_S_452 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_453; memset(&l_HEAD_453, 0, sizeof l_HEAD_453);
l_HEAD_453 = NULL;
R21 * l_TAIL_454; memset(&l_TAIL_454, 0, sizeof l_TAIL_454);
l_TAIL_454 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_456; memset(&l_ARM_456, 0, sizeof l_ARM_456);
l_ARM_456 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_456))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_456))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_456, &l_HEAD_453, &l_TAIL_454);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end455;
} L_end455: ;
((*(R21 *)rt_nil_check(l_S_452))).f_A = l_HEAD_453;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_452))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv457 = l_S_452;
return rv457; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv458 = r_PARSE_RANGE();
return rv458; }
}
{ R21 * rv459 = r_PARSE_EXPR();
return rv459; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { RT_B_TICK(); 
R21 * l_S_460; memset(&l_S_460, 0, sizeof l_S_460);
l_S_460 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_461; memset(&l_HEAD_461, 0, sizeof l_HEAD_461);
l_HEAD_461 = NULL;
R21 * l_TAIL_462; memset(&l_TAIL_462, 0, sizeof l_TAIL_462);
l_TAIL_462 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_460))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end463;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_460))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_460))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_464; memset(&l_ARM_464, 0, sizeof l_ARM_464);
l_ARM_464 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_465; memset(&l_LH_465, 0, sizeof l_LH_465);
l_LH_465 = NULL;
R21 * l_LT_466; memset(&l_LT_466, 0, sizeof l_LT_466);
l_LT_466 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_465, &l_LT_466);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end467;
} L_end467: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_464))).f_A = l_LH_465;
((*(R21 *)rt_nil_check(l_ARM_464))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_464))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_464, &l_HEAD_461, &l_TAIL_462);
}
}
}
RT_B_TICK();
} L_end463: ;
((*(R21 *)rt_nil_check(l_S_460))).f_B = l_HEAD_461;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv468 = l_S_460;
return rv468; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R21 * l_S_469; memset(&l_S_469, 0, sizeof l_S_469);
l_S_469 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_469))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_469))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_469))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_469))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_469))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_469))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv470 = l_S_469;
return rv470; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_469))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_469))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_469))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_469))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv471 = l_S_469;
return rv471; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { RT_B_TICK(); 
R21 * l_S_472; memset(&l_S_472, 0, sizeof l_S_472);
l_S_472 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_473; memset(&l_HEAD_473, 0, sizeof l_HEAD_473);
l_HEAD_473 = NULL;
R21 * l_TAIL_474; memset(&l_TAIL_474, 0, sizeof l_TAIL_474);
l_TAIL_474 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end475;
{
{
R21 * l_P_476; memset(&l_P_476, 0, sizeof l_P_476);
l_P_476 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_477; memset(&l_H_477, 0, sizeof l_H_477);
l_H_477 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R10(&((*(R21 *)rt_nil_check(l_P_476))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_476))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_476))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_476))).f_E))).f_A = l_H_477;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_476))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_476))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_476))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_476))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_476))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_477))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_477))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end478;
}
}
RT_B_TICK();
} L_end478: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_476))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_476))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_476, &l_HEAD_473, &l_TAIL_474);
}
}
RT_B_TICK();
} L_end475: ;
((*(R21 *)rt_nil_check(l_S_472))).f_A = l_HEAD_473;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv479 = l_S_472;
return rv479; }
rt_raise(RT_X_INIT);
}
static R10 r_NO_TEXT(void) { RT_B_TICK(); 
{ R10 rv480 = ({ R10 rc481; memset(&rc481, 0, sizeof rc481);  rc481.f_AT = ((rt_int)0LL); rc481.f_LEN = ((rt_int)0LL); rc481.f_H = ((rt_int)0LL); rc481; });
return rv480; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv482 = ({ R23 rc483; memset(&rc483, 0, sizeof rc483);  rc483.f_OK = 0; rc483.f_V = ((rt_int)0LL); rc483; });
return rv482; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv484 = ({ R23 rc485; memset(&rc485, 0, sizeof rc485);  rc485.f_OK = 1; rc485.f_V = p_V; rc485; });
return rv484; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_486; memset(&l_Y_486, 0, sizeof l_Y_486);
l_Y_486 = ((R12 *)rt_alloc(sizeof (R12)));
rt_int l_LEVEL_487; memset(&l_LEVEL_487, 0, sizeof l_LEVEL_487);
l_LEVEL_487 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_487 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_486)), ({ R12 rc488; memset(&rc488, 0, sizeof rc488);  rc488.f_KIND = p_KIND; rc488.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc488.f_LEVEL = l_LEVEL_487; S_R10(&rc488.f_NAME, p_NAME, 0); rc488.f_T = NULL; S_R10(&rc488.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc488.f_FIELD, r_NO_TEXT(), 0); rc488.f_INPUT = 0; rc488.f_BYREF = 0; rc488.f_HASMV = 0; rc488.f_MV = ((rt_int)0LL); rc488.f_TS = NULL; rc488.f_BUSY = 0; S_R10(&rc488.f_FWD, r_NO_TEXT(), 0); rc488.f_PARAMS = NULL; rc488.f_RESULT = NULL; rc488.f_DECL = NULL; S_R10(&rc488.f_PREFIX, r_NO_TEXT(), 0); rc488.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc488.f_EXPORTED = 0; rc488.f_GENERIC = 0; rc488.f_FRAMED = 0; rc488.f_USES = NULL; rc488.f_INSTANCES = NULL; rc488.f_BINDINGS = NULL; rc488.f_ORIG = NULL; rc488.f_MEMBERS = NULL; rc488.f_SAVED = NULL; rc488.f_OWNER = r_CUR_OWNER(); rc488.f_CHAIN = NULL; rc488.f_SNEXT = NULL; rc488; }), 0);
{ R12 * rv489 = l_Y_486;
return rv489; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv490 = ((rt_int)0LL);
return rv490; }
}
{ rt_int rv491 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv491; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv492 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv492; }
}
{ R12 * rv493 = p_Y;
return rv493; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv494 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv494; }
}
{ rt_int rv495 = (p_NAME).f_H;
return rv495; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_496; memset(&l_Y_496, 0, sizeof l_Y_496);
l_Y_496 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_496 == NULL)) goto L_end497;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_496))).f_NAME, p_NAME))
{
{ R12 * rv498 = l_Y_496;
return rv498; }
}
l_Y_496 = ((*(R12 *)rt_nil_check(l_Y_496))).f_CHAIN;
}
RT_B_TICK();
} L_end497: ;
{ R12 * rv499 = NULL;
return rv499; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_500; memset(&l_Y_500, 0, sizeof l_Y_500);
l_Y_500 = r_LOOKUP(p_NAME);
if ((l_Y_500 == NULL))
{
{ R12 * rv501 = NULL;
return rv501; }
}
{ R12 * rv502 = r_ORIGINAL(l_Y_500);
return rv502; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv503 = r_LOOKUP(r_MKN(p_NAME));
return rv503; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_504; memset(&l_Z_504, 0, sizeof l_Z_504);
l_Z_504 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_504 == NULL)) goto L_end505;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_504))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv506 = l_Z_504;
return rv506; }
}
l_Z_504 = ((*(R12 *)rt_nil_check(l_Z_504))).f_CHAIN;
}
RT_B_TICK();
} L_end505: ;
{ R12 * rv507 = NULL;
return rv507; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv508 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv508; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_509; memset(&l_B_509, 0, sizeof l_B_509);
l_B_509 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_510; memset(&l_OLD_510, 0, sizeof l_OLD_510);
l_OLD_510 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_510 == NULL)) goto L_end511;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_510))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end511;
}
if ((!((((r_IS_ROUTINE(l_OLD_510) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_510))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_510 = r_LOOKUP_NEXT(l_OLD_510);
}
RT_B_TICK();
} L_end511: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_509, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_509, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end512;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end512;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end512: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_513; memset(&l_B_513, 0, sizeof l_B_513);
l_B_513 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_514; memset(&l_P_514, 0, sizeof l_P_514);
l_P_514 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_513, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_514 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_513, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_514 == NULL)) goto L_end515;
{
if ((((*(R12 *)rt_nil_check(l_P_514))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_514))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_514 = ((*(R12 *)rt_nil_check(l_P_514))).f_CHAIN;
}
RT_B_TICK();
} L_end515: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_516; memset(&l_HEAD_516, 0, sizeof l_HEAD_516);
l_HEAD_516 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end517;
{
{
R12 * l_Y_518; memset(&l_Y_518, 0, sizeof l_Y_518);
l_Y_518 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_518);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_518))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_518))).f_SNEXT = l_HEAD_516;
l_HEAD_516 = l_Y_518;
}
}
RT_B_TICK();
} L_end517: ;
{ R12 * rv519 = l_HEAD_516;
return rv519; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_520; memset(&l_T_520, 0, sizeof l_T_520);
l_T_520 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_520)), ({ R22 rc521; memset(&rc521, 0, sizeof rc521);  rc521.f_KIND = p_KIND; rc521.f_SCALE = ((rt_int)0LL); S_R10(&rc521.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc521.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc521.f_MLO, r_NO_MVAL(), 0); S_R23(&rc521.f_MHI, r_NO_MVAL(), 0); rc521.f_RLEVEL = ((rt_int)0LL); S_R10(&rc521.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc521.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc521.f_GEN, r_NO_TEXT(), 0); rc521.f_BASE = NULL; rc521.f_ELEM = NULL; rc521.f_TARGET = NULL; rc521.f_TARGET_TS = NULL; rc521.f_FIELDS = NULL; rc521.f_LITS = NULL; rc521.f_NLITS = ((rt_int)0LL); rc521.f_UNORDERED = 0; rc521.f_BOUNDS = NULL; rc521.f_DIMS = ((rt_int)0LL); rc521.f_ARGS = NULL; S_R10(&rc521.f_NAME, r_NO_TEXT(), 0); S_R10(&rc521.f_CNAME, r_NO_TEXT(), 0); rc521.f_MODL = NULL; rc521.f_REPS = NULL; rc521.f_DECL = NULL; rc521; }), 0);
{ R22 * rv522 = l_T_520;
return rv522; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_523; memset(&l_C_523, 0, sizeof l_C_523);
l_C_523 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_523)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv524 = l_C_523;
return rv524; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_525; memset(&l_Y_525, 0, sizeof l_Y_525);
l_Y_525 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_525))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_525))).f_NAME, 0);
}
r_DEFINE(l_Y_525, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_526; memset(&l_Y_526, 0, sizeof l_Y_526);
l_Y_526 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_526))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_526))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_526))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_526))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_526))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_526, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_527; memset(&l_HEAD_527, 0, sizeof l_HEAD_527);
l_HEAD_527 = NULL;
R21 * l_TAIL_528; memset(&l_TAIL_528, 0, sizeof l_TAIL_528);
l_TAIL_528 = NULL;
rt_int l_START_529; memset(&l_START_529, 0, sizeof l_START_529);
l_START_529 = ((rt_int)0LL);
{ rt_int it531_lo = ((rt_int)0LL), it531_hi = (rt_int)(p_NAMES).len;
for (rt_int it531 = it531_lo; it531 <= it531_hi; it531++) {
{
if (((it531 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it531, it531), rt_str(" ", 1))))
{
if ((it531 > l_START_529))
{
{
R21 * l_N_532; memset(&l_N_532, 0, sizeof l_N_532);
l_N_532 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_532))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_529, rt_sub(it531, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_532, &l_HEAD_527, &l_TAIL_528);
}
}
l_START_529 = rt_add(it531, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it531 == it531_hi) break;
} } L_end530: ;
{
R22 * l_T_533; memset(&l_T_533, 0, sizeof l_T_533);
l_T_533 = r_ENUM_CLASS(l_HEAD_527, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_533);
{ R22 * rv534 = l_T_533;
return rv534; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_535; memset(&l_T_535, 0, sizeof l_T_535);
R21 * l_ASCII_LITS_536; memset(&l_ASCII_LITS_536, 0, sizeof l_ASCII_LITS_536);
l_ASCII_LITS_536 = NULL;
R21 * l_TAIL_537; memset(&l_TAIL_537, 0, sizeof l_TAIL_537);
l_TAIL_537 = NULL;
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
{ rt_int it539_lo = ((rt_int)0LL), it539_hi = ((rt_int)127LL);
for (rt_int it539 = it539_lo; it539 <= it539_hi; it539++) {
{
{
R21 * l_N_540; memset(&l_N_540, 0, sizeof l_N_540);
l_N_540 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_540))).f_NAME, r_ASCII_NAME(it539), 0);
r_ADD_LIST(l_N_540, &l_ASCII_LITS_536, &l_TAIL_537);
}
}
RT_B_TICK();
if (it539 == it539_hi) break;
} } L_end538: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_536, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_535 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
l_T_535 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_535 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_535 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_CONTROLS_541; memset(&l_CONTROLS_541, 0, sizeof l_CONTROLS_541);
l_CONTROLS_541 = rt_str_new(((rt_int)128LL));
rt_b_assign(&l_CONTROLS_541, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_541, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv542 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_541, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv542; }
}
{ R10 rv543 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_541, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv543; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv544 = r_MKN(rt_str("\\''''", 5));
return rv544; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv545 = r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv545; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv546 = r_MKN(rt_str("\\ACCENT", 7));
return rv546; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv547 = r_MKN(rt_str_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv547; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv548 = r_MKN(rt_str("\\[", 2));
return rv548; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv549 = r_MKN(rt_str("\\BAR", 4));
return rv549; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv550 = r_MKN(rt_str("\\]", 2));
return rv550; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv551 = r_MKN(rt_str("\\TILDE", 6));
return rv551; }
}
{ R10 rv552 = r_MKN(rt_str("\\DEL", 4));
return rv552; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv553 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv553; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv554 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv554; }
}
{ R22 * rv555 = p_T;
return rv555; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_556; memset(&l_K_556, 0, sizeof l_K_556);
l_K_556 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv557 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv557; }
}
else if ((l_K_556 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv558 = r_MK(rt_str("INTEGER", 7));
return rv558; }
}
{ R10 rv559 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv559; }
}
else if ((l_K_556 == g_T_BOOL))
{
{ R10 rv560 = r_MK(rt_str("BOOLEAN", 7));
return rv560; }
}
else if ((l_K_556 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv561 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv561; }
}
{ R10 rv562 = r_MK(rt_str("an enumerated type", 18));
return rv562; }
}
else if ((l_K_556 == g_T_STR))
{
{ R10 rv563 = r_MK(rt_str("CHAR_STR", 8));
return rv563; }
}
else if ((l_K_556 == g_T_BITS))
{
{ R10 rv564 = r_MK(rt_str("BIT", 3));
return rv564; }
}
else if ((l_K_556 == g_T_FLOAT))
{
{ R10 rv565 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv565; }
}
else if ((l_K_556 == g_T_ARR))
{
{ R10 rv566 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv566; }
}
else if ((l_K_556 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv567 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv567; }
}
{ R10 rv568 = r_MK(rt_str("RECORD", 6));
return rv568; }
}
else if ((l_K_556 == g_T_PTR))
{
{ R10 rv569 = r_MK(rt_str("PTR", 3));
return rv569; }
}
else if ((l_K_556 == g_T_SEM))
{
{ R10 rv570 = r_MK(rt_str("SEMAPHORE", 9));
return rv570; }
}
else if ((l_K_556 == g_T_NIL))
{
{ R10 rv571 = r_MK(rt_str("NIL", 3));
return rv571; }
}
else if ((l_K_556 == g_T_VOID))
{
{ R10 rv572 = r_MK(rt_str("no value", 8));
return rv572; }
}
{ R10 rv573 = r_MK(rt_str("a type", 6));
return rv573; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { RT_B_TICK(); 
rstr l_S_574; memset(&l_S_574, 0, sizeof l_S_574);
l_S_574 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_574, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_575; memset(&l_AT_575, 0, sizeof l_AT_575);
l_AT_575 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_576; memset(&l_START_576, 0, sizeof l_START_576);
l_START_576 = ((rt_int)0LL);
R10 l_R_577; memset(&l_R_577, 0, sizeof l_R_577);
rt_int l_I_578; memset(&l_I_578, 0, sizeof l_I_578);
l_I_578 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv579 = p_T;
return rv579; }
}
for (;;) {
if ((l_I_578 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end580;
{
if (rt_b_eq(rt_b_slice(l_S_574, l_I_578, rt_add(l_I_578, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_577, r_MK(rt_b_slice(l_S_574, l_START_576, rt_sub(l_I_578, ((rt_int)1LL)))), 0);
S_R10(&l_R_577, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_578 = rt_add(l_I_578, ((rt_int)2LL));
l_START_576 = l_I_578;
}
else
{
l_I_578 = rt_add(l_I_578, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end580: ;
if ((l_START_576 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_575;
{ R10 rv581 = p_T;
return rv581; }
}
S_R10(&l_R_577, r_MK(rt_b_slice(l_S_574, l_START_576, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv582 = ({ R10 rc583; memset(&rc583, 0, sizeof rc583);  rc583.f_AT = l_AT_575; rc583.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_575); rc583.f_H = rt_neg(((rt_int)1LL)); rc583; });
return rv582; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_584; memset(&l_P_584, 0, sizeof l_P_584);
l_P_584 = p_A;
R21 * l_Q_585; memset(&l_Q_585, 0, sizeof l_Q_585);
l_Q_585 = p_B;
for (;;) {
if (((l_P_584 == NULL) || (l_Q_585 == NULL))) goto L_end586;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_584))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_585))).f_NAME)))
{
{ rt_int rv587 = 0;
return rv587; }
}
l_P_584 = ((*(R21 *)rt_nil_check(l_P_584))).f_NEXT;
l_Q_585 = ((*(R21 *)rt_nil_check(l_Q_585))).f_NEXT;
}
RT_B_TICK();
} L_end586: ;
{ rt_int rv588 = ((l_P_584 == NULL) && (l_Q_585 == NULL));
return rv588; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_589; memset(&l_Y_589, 0, sizeof l_Y_589);
l_Y_589 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_590; memset(&l_T_590, 0, sizeof l_T_590);
for (;;) {
if ((l_Y_589 == NULL)) goto L_end591;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_589))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_589))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_589))).f_T, p_LINE);
{ R22 * rv592 = ((*(R12 *)rt_nil_check(l_Y_589))).f_T;
return rv592; }
}
l_Y_589 = ((*(R12 *)rt_nil_check(l_Y_589))).f_INSTANCES;
}
RT_B_TICK();
} L_end591: ;
l_T_590 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_590))).f_BASE = l_T_590;
((*(R22 *)rt_nil_check(l_T_590))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_590))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_590))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_590))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_589 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_589))).f_T = l_T_590;
((*(R12 *)rt_nil_check(l_Y_589))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_589;
{
R21 * l_P_593; memset(&l_P_593, 0, sizeof l_P_593);
l_P_593 = p_LITS;
R10 l_NAMES_594; memset(&l_NAMES_594, 0, sizeof l_NAMES_594);
S_R10(&l_NAMES_594, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_593 == NULL)) goto L_end595;
{
S_R10(&l_NAMES_594, r_FMT2(rt_str("@@, ", 4), l_NAMES_594, r_CSTRING(((*(R21 *)rt_nil_check(l_P_593))).f_NAME)), 0);
l_P_593 = ((*(R21 *)rt_nil_check(l_P_593))).f_NEXT;
}
RT_B_TICK();
} L_end595: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_590))).f_CNAME, l_NAMES_594));
}
r_DECLARE_LITERALS(l_T_590, p_LINE);
{ R22 * rv596 = l_T_590;
return rv596; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_597; memset(&l_P_597, 0, sizeof l_P_597);
l_P_597 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_598; memset(&l_I_598, 0, sizeof l_I_598);
l_I_598 = ((rt_int)0LL);
for (;;) {
if ((l_P_597 == NULL)) goto L_end599;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_597))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_600; memset(&l_Y_600, 0, sizeof l_Y_600);
l_Y_600 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_597))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_600))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_600))).f_MV = l_I_598;
((*(R12 *)rt_nil_check(l_Y_600))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_600))).f_INPUT = 1;
r_DEFINE(l_Y_600, p_LINE);
}
}
l_I_598 = rt_add(l_I_598, ((rt_int)1LL));
l_P_597 = ((*(R21 *)rt_nil_check(l_P_597))).f_NEXT;
}
RT_B_TICK();
} L_end599: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_601; memset(&l_V_601, 0, sizeof l_V_601);
l_V_601 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_601 == NULL)) || (p_T == NULL)))
{
{ R12 * rv602 = l_V_601;
return rv602; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv603 = NULL;
return rv603; }
}
{
R21 * l_P_604; memset(&l_P_604, 0, sizeof l_P_604);
l_P_604 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_605; memset(&l_I_605, 0, sizeof l_I_605);
l_I_605 = ((rt_int)0LL);
for (;;) {
if ((l_P_604 == NULL)) goto L_end606;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_604))).f_NAME, p_NAME))
{
{
R12 * l_Y_607; memset(&l_Y_607, 0, sizeof l_Y_607);
l_Y_607 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_607))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_607))).f_MV = l_I_605;
((*(R12 *)rt_nil_check(l_Y_607))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_607))).f_INPUT = 1;
{ R12 * rv608 = l_Y_607;
return rv608; }
}
}
l_I_605 = rt_add(l_I_605, ((rt_int)1LL));
l_P_604 = ((*(R21 *)rt_nil_check(l_P_604))).f_NEXT;
}
RT_B_TICK();
} L_end606: ;
}
{ R12 * rv609 = NULL;
return rv609; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_610; memset(&l_Y_610, 0, sizeof l_Y_610);
l_Y_610 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_610 == NULL)) goto L_end611;
{
if ((((*(R12 *)rt_nil_check(l_Y_610))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv612 = l_Y_610;
return rv612; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_610))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv613 = l_Y_610;
return rv613; }
}
}
l_Y_610 = r_LOOKUP_NEXT(l_Y_610);
}
RT_B_TICK();
} L_end611: ;
{ R12 * rv614 = NULL;
return rv614; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_615; memset(&l_Y_615, 0, sizeof l_Y_615);
l_Y_615 = r_LOOKUP(p_NAME);
rt_int l_N_616; memset(&l_N_616, 0, sizeof l_N_616);
l_N_616 = ((rt_int)0LL);
for (;;) {
if ((l_Y_615 == NULL)) goto L_end617;
{
if ((((*(R12 *)rt_nil_check(l_Y_615))).f_KIND == g_Y_ENUMLIT))
{
l_N_616 = rt_add(l_N_616, ((rt_int)1LL));
}
l_Y_615 = r_LOOKUP_NEXT(l_Y_615);
}
RT_B_TICK();
} L_end617: ;
{ rt_int rv618 = l_N_616;
return rv618; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv619 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv619; }
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
R22 * l_N_620; memset(&l_N_620, 0, sizeof l_N_620);
if ((p_R == NULL))
{
{ R22 * rv621 = p_T;
return rv621; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_620 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_LO_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_HI_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv622 = l_N_620;
return rv622; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_620 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_620))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_623; memset(&l_LO_623, 0, sizeof l_LO_623);
R26 l_HI_624; memset(&l_HI_624, 0, sizeof l_HI_624);
S_R26(&l_LO_623, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_624, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_LO_C, (l_LO_623).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_HI_C, (l_HI_624).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_620))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_620))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_620))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_620))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_LO_C, r_RESCALE(l_LO_623, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_HI_C, r_RESCALE(l_HI_624, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_620))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_620))).f_MHI, r_NO_MVAL(), 0);
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_620))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_620))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_620))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_620))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_620))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_620))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_620))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_620))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_620))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv625 = l_N_620;
return rv625; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_626; memset(&l_Y_626, 0, sizeof l_Y_626);
l_Y_626 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_626 == NULL)))
{
{ R23 rv627 = r_SOME(((*(R12 *)rt_nil_check(l_Y_626))).f_MV);
return rv627; }
}
}
}
{ R23 rv628 = r_MANIFEST(p_E);
return rv628; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv629 = ((rt_int)0LL);
return rv629; }
}
{ rt_int rv630 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv630; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv631 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv631; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_632; memset(&l_A_632, 0, sizeof l_A_632);
l_A_632 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it634_lo = ((rt_int)1LL), it634_hi = p_K;
for (rt_int it634 = it634_lo; it634 <= it634_hi; it634++) {
{
if ((l_A_632 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_632 = ((*(R21 *)rt_nil_check(l_A_632))).f_NEXT;
}
RT_B_TICK();
if (it634 == it634_hi) break;
} } L_end633: ;
if ((l_A_632 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv635 = l_A_632;
return rv635; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_636; memset(&l_T_636, 0, sizeof l_T_636);
rt_int l_K_637; memset(&l_K_637, 0, sizeof l_K_637);
l_K_637 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_637 == g_TS_ARRAY))
{
{ R22 * rv638 = r_RESOLVE_ARRAY(p_TS);
return rv638; }
}
else if ((l_K_637 == g_TS_RECORD))
{
{ R22 * rv639 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv639; }
}
else if ((l_K_637 == g_TS_ENUM))
{
l_T_636 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_636 = r_WITH_RANGE(l_T_636, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_636 = r_COPY_TYP(l_T_636);
((*(R22 *)rt_nil_check(l_T_636))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
}
{ R22 * rv640 = l_T_636;
return rv640; }
}
else if ((l_K_637 == g_TS_GEN))
{
{ R22 * rv641 = r_GEN_TYPE(p_TS);
return rv641; }
}
else if ((!(l_K_637 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
l_T_636 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_636 == NULL))
{
l_T_636 = r_RESOLVE_USER(p_TS);
}
l_T_636 = r_WITH_RANGE(l_T_636, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_636 = r_COPY_TYP(l_T_636);
((*(R22 *)rt_nil_check(l_T_636))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
if (((!(((*(R22 *)rt_nil_check(l_T_636))).f_KIND == g_T_ENUM)) || (!((*(R22 *)rt_nil_check(l_T_636))).f_UNORDERED)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
}
{ R22 * rv642 = l_T_636;
return rv642; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_643; memset(&l_B_643, 0, sizeof l_B_643);
l_B_643 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_643 == NULL)) goto L_end644;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_643))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_643))).f_T == NULL))))
{
{ R22 * rv645 = ((*(R20 *)rt_nil_check(l_B_643))).f_T;
return rv645; }
}
l_B_643 = ((*(R20 *)rt_nil_check(l_B_643))).f_NEXT;
}
RT_B_TICK();
} L_end644: ;
{
R12 * l_Y_646; memset(&l_Y_646, 0, sizeof l_Y_646);
l_Y_646 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_646 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_646))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_646))).f_T == NULL))))
{
{ R22 * rv647 = ((*(R12 *)rt_nil_check(l_Y_646))).f_T;
return rv647; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_648; memset(&l_NAME_648, 0, sizeof l_NAME_648);
S_R10(&l_NAME_648, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_649; memset(&l_T_649, 0, sizeof l_T_649);
if (r_TEQS(l_NAME_648, rt_str("FIXED", 5)))
{
{
R23 l_S_650; memset(&l_S_650, 0, sizeof l_S_650);
S_R23(&l_S_650, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
R23 l_R_651; memset(&l_R_651, 0, sizeof l_R_651);
S_R23(&l_R_651, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)1LL))), 0);
R21 * l_P_652; memset(&l_P_652, 0, sizeof l_P_652);
l_P_652 = r_NTH_ARG(p_TS, ((rt_int)2LL));
if ((!(l_S_650).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the scale must be manifest (3.2.1)", 34));
}
if (((!(l_R_651).f_OK) || (!((l_R_651).f_V == ((rt_int)2LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
if (((((*(R21 *)rt_nil_check(l_P_652))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_652))).f_KIND == g_N_ENUMLIT)))
{
if (((!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_652))).f_NAME, NULL) == NULL)) && (!r_TEQS(((*(R21 *)rt_nil_check(l_P_652))).f_NAME, rt_str("STD", 3)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
if (((l_S_650).f_V == ((rt_int)0LL)))
{
{ R22 * rv653 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv653; }
}
l_T_649 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_649))).f_SCALE = (l_S_650).f_V;
{ R22 * rv654 = l_T_649;
return rv654; }
}
}
else if (r_TEQS(l_NAME_648, rt_str("FLOAT", 5)))
{
{
R23 l_P_655; memset(&l_P_655, 0, sizeof l_P_655);
S_R23(&l_P_655, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
if ((!(l_P_655).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the precision must be manifest (3.3.1)", 38));
}
if ((((l_P_655).f_V < ((rt_int)1LL)) || ((l_P_655).f_V > ((rt_int)15LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
l_T_649 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_649))).f_SCALE = (l_P_655).f_V;
{ R22 * rv656 = l_T_649;
return rv656; }
}
}
else if (r_TEQS(l_NAME_648, rt_str("BIT", 3)))
{
l_T_649 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_649, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv657 = l_T_649;
return rv657; }
}
else if ((r_TEQS(l_NAME_648, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_648, rt_str("ASCII_STR", 9))))
{
l_T_649 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_649, r_NTH_ARG(p_TS, ((rt_int)0LL)));
if (r_TEQS(l_NAME_648, rt_str("CHAR_STR", 8)))
{
{
R21 * l_CS_658; memset(&l_CS_658, 0, sizeof l_CS_658);
l_CS_658 = r_NTH_ARG(p_TS, ((rt_int)1LL));
if (((((*(R21 *)rt_nil_check(l_CS_658))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_658))).f_KIND == g_N_DONTCARE)))
{
{ R22 * rv659 = l_T_649;
return rv659; }
}
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_CS_658))).f_NAME, rt_str("ASCII", 5))))
{
if ((!(((*(R22 *)rt_nil_check(r_ARG_TYPE(l_CS_658)))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
}
}
}
{ R22 * rv660 = l_T_649;
return rv660; }
}
else if (r_TEQS(l_NAME_648, rt_str("PTR", 3)))
{
l_T_649 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_649))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv661 = l_T_649;
return rv661; }
}
else if (r_TEQS(l_NAME_648, rt_str("SEMAPHORE", 9)))
{
l_T_649 = r_NEW_TYP(g_T_SEM);
{
R21 * l_U_662; memset(&l_U_662, 0, sizeof l_U_662);
l_U_662 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_662))).f_NAME, rt_str("REGION", 6)))
{
((*(R22 *)rt_nil_check(l_T_649))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_662))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R22 * rv663 = l_T_649;
return rv663; }
}
{ R22 * rv664 = NULL;
return rv664; }
rt_raise(RT_X_INIT);
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_665; memset(&l_B_665, 0, sizeof l_B_665);
l_B_665 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_665 == NULL)) goto L_end666;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_665))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_665))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_665))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc667; memset(&rc667, 0, sizeof rc667);  rc667.f_OK = ((*(R20 *)rt_nil_check(l_B_665))).f_HASMV; rc667.f_V = ((*(R20 *)rt_nil_check(l_B_665))).f_MV; rc667; }), 0);
return;
}
l_B_665 = ((*(R20 *)rt_nil_check(l_B_665))).f_NEXT;
}
RT_B_TICK();
} L_end666: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_668; memset(&l_C_668, 0, sizeof l_C_668);
R23 l_M_669; memset(&l_M_669, 0, sizeof l_M_669);
r_ATTR_VALUE(p_A, &l_C_668, &l_M_669);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_668, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_669, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_670; memset(&l_T_670, 0, sizeof l_T_670);
l_T_670 = r_NEW_TYP(g_T_ARR);
R21 * l_R_671; memset(&l_R_671, 0, sizeof l_R_671);
l_R_671 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_672; memset(&l_TAIL_672, 0, sizeof l_TAIL_672);
l_TAIL_672 = NULL;
for (;;) {
if ((l_R_671 == NULL)) goto L_end673;
{
{
R25 * l_B_674; memset(&l_B_674, 0, sizeof l_B_674);
l_B_674 = ((R25 *)rt_alloc(sizeof (R25)));
R26 l_LO_675; memset(&l_LO_675, 0, sizeof l_LO_675);
R26 l_HI_676; memset(&l_HI_676, 0, sizeof l_HI_676);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_671))).f_A))
{
S_R26(&l_LO_675, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_671))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_671))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_675, r_EXPR(((*(R21 *)rt_nil_check(l_R_671))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_671))).f_B))
{
S_R26(&l_HI_676, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_671))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_671))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_676, r_EXPR(((*(R21 *)rt_nil_check(l_R_671))).f_B, (l_LO_675).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_674)), ({ R25 rc677; memset(&rc677, 0, sizeof rc677);  S_R10(&rc677.f_LO, (l_LO_675).f_C, 0); S_R10(&rc677.f_HI, (l_HI_676).f_C, 0); S_R23(&rc677.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_671))).f_A), 0); S_R23(&rc677.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_671))).f_B), 0); rc677.f_ANYARG = 0; rc677.f_NEXT = NULL; rc677; }), 0);
if ((((*(R22 *)rt_nil_check((l_LO_675).f_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_674))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_671))).f_A, (l_LO_675).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_674))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_671))).f_B, (l_LO_675).f_T), 0);
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_675).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_671))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_672 == NULL))
{
((*(R22 *)rt_nil_check(l_T_670))).f_BOUNDS = l_B_674;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_672))).f_NEXT = l_B_674;
}
l_TAIL_672 = l_B_674;
((*(R22 *)rt_nil_check(l_T_670))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_670))).f_DIMS, ((rt_int)1LL));
}
l_R_671 = ((*(R21 *)rt_nil_check(l_R_671))).f_NEXT;
}
RT_B_TICK();
} L_end673: ;
((*(R22 *)rt_nil_check(l_T_670))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_670))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_670))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_670))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_670))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_670))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_670))).f_DIMS), 0);
{ R22 * rv678 = l_T_670;
return rv678; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_679; memset(&l_Y_679, 0, sizeof l_Y_679);
l_Y_679 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_680; memset(&l_B_680, 0, sizeof l_B_680);
l_B_680 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_680 == NULL)) goto L_end681;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_680))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_680))).f_T == NULL))))
{
{ R22 * rv682 = ((*(R20 *)rt_nil_check(l_B_680))).f_T;
return rv682; }
}
l_B_680 = ((*(R20 *)rt_nil_check(l_B_680))).f_NEXT;
}
RT_B_TICK();
} L_end681: ;
}
}
if ((l_Y_679 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_679))).f_KIND == g_Y_GEN))
{
{ R22 * rv683 = r_GEN_TYPE(p_TS);
return rv683; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_679))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_679))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv684 = ((*(R12 *)rt_nil_check(l_Y_679))).f_T;
return rv684; }
}
{
R21 * l_D_685; memset(&l_D_685, 0, sizeof l_D_685);
l_D_685 = ((*(R12 *)rt_nil_check(l_Y_679))).f_DECL;
R22 * l_T_686; memset(&l_T_686, 0, sizeof l_T_686);
if ((((*(R21 *)rt_nil_check(l_D_685))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_679))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_679))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_679))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_685))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_679))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_685))).f_B, r_RECORD_NAME(l_Y_679), l_Y_679, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_679))).f_T = r_RESOLVE_IN_DECL(l_Y_679, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_679))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_679))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_679))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_679))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_679))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_679))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_679))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_679))).f_BUSY = 0;
}
l_T_686 = ((*(R12 *)rt_nil_check(l_Y_679))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_685))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_686 = r_RECORD_INSTANCE(l_Y_679, p_TS);
}
else
{
l_T_686 = r_RESOLVE_IN_DECL(l_Y_679, p_TS);
}
}
{ R22 * rv687 = r_ABSTRACT_VIEW(l_Y_679, l_T_686);
return rv687; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_688; memset(&l_A_688, 0, sizeof l_A_688);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv689 = p_T;
return rv689; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv690 = p_T;
return rv690; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv691 = p_T;
return rv691; }
}
l_A_688 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_688))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_688))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_688))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_688))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_688))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv692 = l_A_688;
return rv692; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_693; memset(&l_P_693, 0, sizeof l_P_693);
l_P_693 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_693 == NULL)) goto L_end694;
{
if ((l_P_693 == p_M))
{
{ rt_int rv695 = 1;
return rv695; }
}
l_P_693 = ((*(R12 *)rt_nil_check(l_P_693))).f_MODL;
}
RT_B_TICK();
} L_end694: ;
{ rt_int rv696 = 0;
return rv696; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_697; memset(&l_D_697, 0, sizeof l_D_697);
l_D_697 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_698; memset(&l_T_698, 0, sizeof l_T_698);
if ((p_TS == NULL))
{
{ R22 * rv699 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_697))).f_B);
return rv699; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_697))).f_A, p_TS);
l_T_698 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_697))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv700 = l_T_698;
return rv700; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_701; memset(&l_F_701, 0, sizeof l_F_701);
l_F_701 = p_FORMALS;
R21 * l_A_702; memset(&l_A_702, 0, sizeof l_A_702);
l_A_702 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_701 == NULL)) goto L_end703;
{
{
R21 * l_N_704; memset(&l_N_704, 0, sizeof l_N_704);
l_N_704 = ((*(R21 *)rt_nil_check(l_F_701))).f_A;
for (;;) {
if ((l_N_704 == NULL)) goto L_end705;
{
if ((l_A_702 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_701))).f_B == NULL))
{
{
R12 * l_Y_706; memset(&l_Y_706, 0, sizeof l_Y_706);
l_Y_706 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_704))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_706))).f_T = r_ARG_TYPE(l_A_702);
r_DEFINE(l_Y_706, ((*(R21 *)rt_nil_check(l_A_702))).f_LINE);
}
}
else
{
{
R12 * l_Y_707; memset(&l_Y_707, 0, sizeof l_Y_707);
l_Y_707 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_704))).f_NAME);
R10 l_C_708; memset(&l_C_708, 0, sizeof l_C_708);
R23 l_M_709; memset(&l_M_709, 0, sizeof l_M_709);
((*(R12 *)rt_nil_check(l_Y_707))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_701))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_702))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_702))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_702))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_702))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_708, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_702))).f_NAME, (((*(R21 *)rt_nil_check(l_A_702))).f_NAME).f_LEN))), 0);
S_R23(&l_M_709, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_702, &l_C_708, &l_M_709);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_707))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_708))))
{
S_R10(&l_C_708, (r_EXPR(l_A_702, ((*(R12 *)rt_nil_check(l_Y_707))).f_T)).f_C, 0);
S_R23(&l_M_709, r_ENUM_MANIFEST(l_A_702, ((*(R12 *)rt_nil_check(l_Y_707))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_707))).f_ACCESS, l_C_708, 0);
((*(R12 *)rt_nil_check(l_Y_707))).f_HASMV = (l_M_709).f_OK;
((*(R12 *)rt_nil_check(l_Y_707))).f_MV = (l_M_709).f_V;
((*(R12 *)rt_nil_check(l_Y_707))).f_INPUT = 1;
r_DEFINE(l_Y_707, ((*(R21 *)rt_nil_check(l_A_702))).f_LINE);
}
}
l_A_702 = ((*(R21 *)rt_nil_check(l_A_702))).f_NEXT;
l_N_704 = ((*(R21 *)rt_nil_check(l_N_704))).f_NEXT;
}
RT_B_TICK();
} L_end705: ;
}
l_F_701 = ((*(R21 *)rt_nil_check(l_F_701))).f_NEXT;
}
RT_B_TICK();
} L_end703: ;
if ((!(l_A_702 == NULL)))
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
{ R10 rv710 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv710; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv711 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv711; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_712; memset(&l_K_712, 0, sizeof l_K_712);
l_K_712 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv713 = r_MK(rt_str("rt_int", 6));
return rv713; }
}
else if ((l_K_712 == g_T_FLOAT))
{
{ R10 rv714 = r_MK(rt_str("double", 6));
return rv714; }
}
else if (((l_K_712 == g_T_STR) || (l_K_712 == g_T_BITS)))
{
{ R10 rv715 = r_MK(rt_str("rstr", 4));
return rv715; }
}
else if (((l_K_712 == g_T_REC) || (l_K_712 == g_T_ARR)))
{
{ R10 rv716 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv716; }
}
else if ((l_K_712 == g_T_ABS))
{
{ R10 rv717 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv717; }
}
else if ((l_K_712 == g_T_SEM))
{
{ R10 rv718 = r_MK(rt_str("rt_b_sem *", 10));
return rv718; }
}
else if ((l_K_712 == g_T_PATHS))
{
{ R10 rv719 = r_MK(rt_str("rt_b_paths", 10));
return rv719; }
}
else if ((l_K_712 == g_T_VOID))
{
{ R10 rv720 = r_MK(rt_str("void", 4));
return rv720; }
}
else if ((l_K_712 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_721; memset(&l_TT_721, 0, sizeof l_TT_721);
l_TT_721 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_721))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_721))).f_A == NULL)))
{
{
R12 * l_Y_722; memset(&l_Y_722, 0, sizeof l_Y_722);
l_Y_722 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_721))).f_NAME);
if ((!(l_Y_722 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_722))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_722))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_722))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_722))).f_DECL))).f_A == NULL)))
{
{ R10 rv723 = r_CATS(r_RECORD_NAME(l_Y_722), rt_str(" *", 2));
return rv723; }
}
}
}
}
}
}
}
{ R10 rv724 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv724; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv725 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv725; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_726; memset(&l_F_726, 0, sizeof l_F_726);
l_F_726 = ((R24 *)rt_alloc(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_726)), ({ R24 rc727; memset(&rc727, 0, sizeof rc727);  S_R10(&rc727.f_NAME, p_NAME, 0); S_R10(&rc727.f_CNAME, r_FMT1(rt_str("f_@", 3), p_NAME), 0); rc727.f_T = p_T; rc727.f_KIND = p_KIND; S_R10(&rc727.f_TAGF, r_NO_TEXT(), 0); rc727.f_LABELS = NULL; rc727.f_NEXT = NULL; rc727; }), 0);
{ R24 * rv728 = l_F_726;
return rv728; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_729; memset(&l_F_729, 0, sizeof l_F_729);
l_F_729 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_729 == NULL)) goto L_end730;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_729))).f_NAME, p_NAME))
{
{ R24 * rv731 = l_F_729;
return rv731; }
}
l_F_729 = ((*(R24 *)rt_nil_check(l_F_729))).f_NEXT;
}
RT_B_TICK();
} L_end730: ;
{ R24 * rv732 = NULL;
return rv732; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_733; memset(&l_P_733, 0, sizeof l_P_733);
l_P_733 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_734; memset(&l_N_734, 0, sizeof l_N_734);
l_N_734 = ((rt_int)0LL);
for (;;) {
if ((l_P_733 == NULL)) goto L_end735;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_733))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
l_N_734 = rt_add(l_N_734, ((rt_int)1LL));
}
l_P_733 = ((*(R24 *)rt_nil_check(l_P_733))).f_NEXT;
}
RT_B_TICK();
} L_end735: ;
if ((l_N_734 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_734)), 0);
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
R21 * l_D_736; memset(&l_D_736, 0, sizeof l_D_736);
l_D_736 = p_DECLS;
for (;;) {
if ((l_D_736 == NULL)) goto L_end737;
{
if ((((*(R21 *)rt_nil_check(l_D_736))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_738; memset(&l_FT_738, 0, sizeof l_FT_738);
l_FT_738 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_736))).f_B);
R21 * l_N_739; memset(&l_N_739, 0, sizeof l_N_739);
l_N_739 = ((*(R21 *)rt_nil_check(l_D_736))).f_A;
for (;;) {
if ((l_N_739 == NULL)) goto L_end740;
{
{
R24 * l_F_741; memset(&l_F_741, 0, sizeof l_F_741);
l_F_741 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_739))).f_NAME, l_FT_738, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_741))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_741))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_741, &(*p_TAIL));
}
l_N_739 = ((*(R21 *)rt_nil_check(l_N_739))).f_NEXT;
}
RT_B_TICK();
} L_end740: ;
}
}
else
{
{
R24 * l_TF_742; memset(&l_TF_742, 0, sizeof l_TF_742);
l_TF_742 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_736))).f_NAME);
R21 * l_S_743; memset(&l_S_743, 0, sizeof l_S_743);
l_S_743 = ((*(R21 *)rt_nil_check(l_D_736))).f_A;
if ((l_TF_742 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_736))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_736))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_742))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_736))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_736))).f_NAME);
}
for (;;) {
if ((l_S_743 == NULL)) goto L_end744;
{
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_743))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_736))).f_NAME), ((*(R21 *)rt_nil_check(l_S_743))).f_A, &(*p_TAIL));
l_S_743 = ((*(R21 *)rt_nil_check(l_S_743))).f_NEXT;
}
RT_B_TICK();
} L_end744: ;
}
}
l_D_736 = ((*(R21 *)rt_nil_check(l_D_736))).f_NEXT;
}
RT_B_TICK();
} L_end737: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_745; memset(&l_T_745, 0, sizeof l_T_745);
l_T_745 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_746; memset(&l_TAIL_746, 0, sizeof l_TAIL_746);
l_TAIL_746 = NULL;
((*(R22 *)rt_nil_check(l_T_745))).f_BASE = l_T_745;
((*(R22 *)rt_nil_check(l_T_745))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_745))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_745))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_745))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_745))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_745))).f_CNAME));
}
{
R21 * l_F_747; memset(&l_F_747, 0, sizeof l_F_747);
l_F_747 = p_FORMALS;
for (;;) {
if ((l_F_747 == NULL)) goto L_end748;
{
if ((!(((*(R21 *)rt_nil_check(l_F_747))).f_B == NULL)))
{
{
R22 * l_FT_749; memset(&l_FT_749, 0, sizeof l_FT_749);
l_FT_749 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_747))).f_B);
R21 * l_N_750; memset(&l_N_750, 0, sizeof l_N_750);
l_N_750 = ((*(R21 *)rt_nil_check(l_F_747))).f_A;
rt_int l_KIND_751; memset(&l_KIND_751, 0, sizeof l_KIND_751);
l_KIND_751 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_747))).f_IV == ((rt_int)1LL)))
{
l_KIND_751 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_749))) || (!(((*(R22 *)rt_nil_check(l_FT_749))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_747))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_750 == NULL)) goto L_end752;
{
r_ADD_FIELD(l_T_745, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_750))).f_NAME, l_FT_749, l_KIND_751), &l_TAIL_746);
l_N_750 = ((*(R21 *)rt_nil_check(l_N_750))).f_NEXT;
}
RT_B_TICK();
} L_end752: ;
}
}
l_F_747 = ((*(R21 *)rt_nil_check(l_F_747))).f_NEXT;
}
RT_B_TICK();
} L_end748: ;
}
r_RECORD_FIELDS(l_T_745, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_746);
r_COMPLETE_RECORD(l_T_745);
{ R22 * rv753 = l_T_745;
return rv753; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_754; memset(&l_D_754, 0, sizeof l_D_754);
l_D_754 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_755; memset(&l_CLASS_755, 0, sizeof l_CLASS_755);
l_CLASS_755 = NULL;
R20 * l_TARGS_756; memset(&l_TARGS_756, 0, sizeof l_TARGS_756);
l_TARGS_756 = NULL;
R25 * l_VARGS_757; memset(&l_VARGS_757, 0, sizeof l_VARGS_757);
l_VARGS_757 = NULL;
R25 * l_VTAIL_758; memset(&l_VTAIL_758, 0, sizeof l_VTAIL_758);
l_VTAIL_758 = NULL;
R21 * l_A_759; memset(&l_A_759, 0, sizeof l_A_759);
l_A_759 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_760; memset(&l_F_760, 0, sizeof l_F_760);
l_F_760 = ((*(R21 *)rt_nil_check(l_D_754))).f_A;
for (;;) {
if ((l_F_760 == NULL)) goto L_end761;
{
{
R21 * l_N_762; memset(&l_N_762, 0, sizeof l_N_762);
l_N_762 = ((*(R21 *)rt_nil_check(l_F_760))).f_A;
for (;;) {
if ((l_N_762 == NULL)) goto L_end763;
{
if ((l_A_759 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_760))).f_B == NULL))
{
{
R20 * l_B_764; memset(&l_B_764, 0, sizeof l_B_764);
l_B_764 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_764)), ({ R20 rc765; memset(&rc765, 0, sizeof rc765);  S_R10(&rc765.f_NAME, ((*(R21 *)rt_nil_check(l_N_762))).f_NAME, 0); rc765.f_T = r_ARG_TYPE(l_A_759); S_R10(&rc765.f_C, r_NO_TEXT(), 0); rc765.f_HASMV = 0; rc765.f_MV = ((rt_int)0LL); rc765.f_R = NULL; rc765.f_NEXT = l_TARGS_756; rc765; }), 0);
l_TARGS_756 = l_B_764;
}
}
else
{
{
R25 * l_V_766; memset(&l_V_766, 0, sizeof l_V_766);
l_V_766 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_766)), ({ R25 rc767; memset(&rc767, 0, sizeof rc767);  S_R10(&rc767.f_LO, r_NO_TEXT(), 0); S_R10(&rc767.f_HI, r_NO_TEXT(), 0); S_R23(&rc767.f_MLO, r_NO_MVAL(), 0); S_R23(&rc767.f_MHI, r_NO_MVAL(), 0); rc767.f_ANYARG = 0; rc767.f_NEXT = NULL; rc767; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_759))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_760))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_759))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_766))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_759))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_766))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_766))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_759))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_766))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_766))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_759))).f_NAME, (((*(R21 *)rt_nil_check(l_A_759))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_768; memset(&l_FT_768, 0, sizeof l_FT_768);
l_FT_768 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_760))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_766))).f_LO, (r_EXPR(l_A_759, l_FT_768)).f_C, 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_766))).f_MLO, r_ENUM_MANIFEST(l_A_759, l_FT_768), 0);
if (((((*(R21 *)rt_nil_check(l_F_760))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_766))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_759))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_758 == NULL))
{
l_VARGS_757 = l_V_766;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_758))).f_NEXT = l_V_766;
}
l_VTAIL_758 = l_V_766;
}
}
l_A_759 = ((*(R21 *)rt_nil_check(l_A_759))).f_NEXT;
l_N_762 = ((*(R21 *)rt_nil_check(l_N_762))).f_NEXT;
}
RT_B_TICK();
} L_end763: ;
}
l_F_760 = ((*(R21 *)rt_nil_check(l_F_760))).f_NEXT;
}
RT_B_TICK();
} L_end761: ;
if ((!(l_A_759 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_769; memset(&l_R_769, 0, sizeof l_R_769);
l_R_769 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_769 == NULL)) goto L_end770;
{
if (((((*(R12 *)rt_nil_check(l_R_769))).f_DECL == l_D_754) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_769))).f_BINDINGS, l_TARGS_756)))
{
l_CLASS_755 = ((*(R12 *)rt_nil_check(l_R_769))).f_T;
goto L_end770;
}
l_R_769 = ((*(R12 *)rt_nil_check(l_R_769))).f_INSTANCES;
}
RT_B_TICK();
} L_end770: ;
}
if ((l_CLASS_755 == NULL))
{
{
R12 * l_R_771; memset(&l_R_771, 0, sizeof l_R_771);
l_R_771 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_772; memset(&l_B_772, 0, sizeof l_B_772);
l_B_772 = l_TARGS_756;
R20 * l_SAVED_773; memset(&l_SAVED_773, 0, sizeof l_SAVED_773);
l_SAVED_773 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_774; memset(&l_ENTERED_774, 0, sizeof l_ENTERED_774);
((*(R12 *)rt_nil_check(l_R_771))).f_DECL = l_D_754;
((*(R12 *)rt_nil_check(l_R_771))).f_BINDINGS = l_TARGS_756;
((*(R12 *)rt_nil_check(l_R_771))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_771;
l_ENTERED_774 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_772 == NULL)) goto L_end775;
{
{
R12 * l_TY_776; memset(&l_TY_776, 0, sizeof l_TY_776);
l_TY_776 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_772))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_776))).f_T = ((*(R20 *)rt_nil_check(l_B_772))).f_T;
r_DEFINE(l_TY_776, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_772 = ((*(R20 *)rt_nil_check(l_B_772))).f_NEXT;
}
RT_B_TICK();
} L_end775: ;
l_F_760 = ((*(R21 *)rt_nil_check(l_D_754))).f_A;
for (;;) {
if ((l_F_760 == NULL)) goto L_end777;
{
if ((!(((*(R21 *)rt_nil_check(l_F_760))).f_B == NULL)))
{
{
R21 * l_N_778; memset(&l_N_778, 0, sizeof l_N_778);
l_N_778 = ((*(R21 *)rt_nil_check(l_F_760))).f_A;
for (;;) {
if ((l_N_778 == NULL)) goto L_end779;
{
{
R12 * l_P_780; memset(&l_P_780, 0, sizeof l_P_780);
l_P_780 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_778))).f_NAME);
((*(R12 *)rt_nil_check(l_P_780))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_760))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_780))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), ((*(R21 *)rt_nil_check(l_N_778))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_P_780))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_780))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_780, ((*(R21 *)rt_nil_check(l_F_760))).f_LINE);
}
l_N_778 = ((*(R21 *)rt_nil_check(l_N_778))).f_NEXT;
}
RT_B_TICK();
} L_end779: ;
}
}
l_F_760 = ((*(R21 *)rt_nil_check(l_F_760))).f_NEXT;
}
RT_B_TICK();
} L_end777: ;
if ((l_TARGS_756 == NULL))
{
l_CLASS_755 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_754))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_754))).f_A);
}
else
{
l_CLASS_755 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_754))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_754))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_755))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_771))).f_T = l_CLASS_755;
r_CLOSE_SCOPE();
if (l_ENTERED_774)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_773;
}
}
{
R22 * l_T_781; memset(&l_T_781, 0, sizeof l_T_781);
l_T_781 = r_COPY_TYP(l_CLASS_755);
((*(R22 *)rt_nil_check(l_T_781))).f_ARGS = l_VARGS_757;
{ R22 * rv782 = l_T_781;
return rv782; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_783; memset(&l_P_783, 0, sizeof l_P_783);
l_P_783 = p_A;
R20 * l_Q_784; memset(&l_Q_784, 0, sizeof l_Q_784);
l_Q_784 = p_B;
for (;;) {
if (((l_P_783 == NULL) || (l_Q_784 == NULL))) goto L_end785;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_783))).f_T, ((*(R20 *)rt_nil_check(l_Q_784))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_783))).f_T, ((*(R20 *)rt_nil_check(l_Q_784))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_783))).f_T, ((*(R20 *)rt_nil_check(l_Q_784))).f_T))))
{
{ rt_int rv786 = 0;
return rv786; }
}
l_P_783 = ((*(R20 *)rt_nil_check(l_P_783))).f_NEXT;
l_Q_784 = ((*(R20 *)rt_nil_check(l_Q_784))).f_NEXT;
}
RT_B_TICK();
} L_end785: ;
{ rt_int rv787 = ((l_P_783 == NULL) && (l_Q_784 == NULL));
return rv787; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_788; memset(&l_A_788, 0, sizeof l_A_788);
l_A_788 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_788 == NULL)) goto L_end789;
{
if (((*(R25 *)rt_nil_check(l_A_788))).f_ANYARG)
{
{ rt_int rv790 = 1;
return rv790; }
}
l_A_788 = ((*(R25 *)rt_nil_check(l_A_788))).f_NEXT;
}
RT_B_TICK();
} L_end789: ;
{ rt_int rv791 = 0;
return rv791; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_792; memset(&l_L_792, 0, sizeof l_L_792);
l_L_792 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_793; memset(&l_C_793, 0, sizeof l_C_793);
S_R10(&l_C_793, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_794; memset(&l_TF_794, 0, sizeof l_TF_794);
l_TF_794 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_792 == NULL)) goto L_end795;
{
if ((((*(R21 *)rt_nil_check(l_L_792))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_793, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_793, p_SELF, ((*(R24 *)rt_nil_check(l_TF_794))).f_CNAME), 0);
S_R10(&l_C_793, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_793, (r_EXPR(((*(R21 *)rt_nil_check(l_L_792))).f_A, ((*(R24 *)rt_nil_check(l_TF_794))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_794))).f_CNAME), 0);
S_R10(&l_C_793, r_FMT2(rt_str("@@)", 3), l_C_793, (r_EXPR(((*(R21 *)rt_nil_check(l_L_792))).f_B, ((*(R24 *)rt_nil_check(l_TF_794))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_793, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_793, p_SELF, ((*(R24 *)rt_nil_check(l_TF_794))).f_CNAME, (r_EXPR(l_L_792, ((*(R24 *)rt_nil_check(l_TF_794))).f_T)).f_C), 0);
}
l_L_792 = ((*(R21 *)rt_nil_check(l_L_792))).f_NEXT;
}
RT_B_TICK();
} L_end795: ;
{ R10 rv796 = r_FMT1(rt_str("(@)", 3), l_C_793);
return rv796; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_797; memset(&l_C_797, 0, sizeof l_C_797);
S_R10(&l_C_797, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_798; memset(&l_F_798, 0, sizeof l_F_798);
l_F_798 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_799; memset(&l_BODY_799, 0, sizeof l_BODY_799);
S_R10(&l_BODY_799, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_800; memset(&l_ASSIGN_800, 0, sizeof l_ASSIGN_800);
S_R10(&l_ASSIGN_800, r_MK(rt_str("", 0)), 0);
R10 l_COPY_801; memset(&l_COPY_801, 0, sizeof l_COPY_801);
S_R10(&l_COPY_801, r_MK(rt_str("", 0)), 0);
R10 l_EQ_802; memset(&l_EQ_802, 0, sizeof l_EQ_802);
S_R10(&l_EQ_802, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_798 == NULL)) goto L_end803;
{
S_R10(&l_BODY_799, r_FMT3(rt_str("@ @ @;", 6), l_BODY_799, r_CTYPE(((*(R24 *)rt_nil_check(l_F_798))).f_T), ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME), 0);
S_R10(&l_COPY_801, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_801, ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_798))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_798))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_800, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_800, ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_798))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_800, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_800, ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_800, r_FMT2(rt_str("@ @", 3), l_ASSIGN_800, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_798))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_798))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_802, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_802, r_VARIANT_COND(l_F_798, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_798))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_802, r_FMT2(rt_str("@ && @", 6), l_EQ_802, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_798))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_798))).f_CNAME))), 0);
}
l_F_798 = ((*(R24 *)rt_nil_check(l_F_798))).f_NEXT;
}
RT_B_TICK();
} L_end803: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_797, l_BODY_799));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_797, l_C_797, l_C_797));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_797, l_C_797, l_C_797));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_797, l_C_797, l_C_797, l_ASSIGN_800));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_797, l_C_797, l_C_797, l_EQ_802));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_797, l_C_797, l_C_797));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_797, l_C_797, l_C_797, l_C_797));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_801));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_804; memset(&l_ET_C_804, 0, sizeof l_ET_C_804);
S_R10(&l_ET_C_804, r_CTYPE(p_ELEM), 0);
R10 l_KEY_805; memset(&l_KEY_805, 0, sizeof l_KEY_805);
S_R10(&l_KEY_805, r_FMT3(rt_str("@/@/@", 5), l_ET_C_804, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_806; memset(&l_Y_806, 0, sizeof l_Y_806);
l_Y_806 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_806 == NULL)) goto L_end807;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_806))).f_NAME, l_KEY_805) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_806))).f_T, p_ELEM)))
{
{ R10 rv808 = ((*(R12 *)rt_nil_check(l_Y_806))).f_ACCESS;
return rv808; }
}
l_Y_806 = ((*(R12 *)rt_nil_check(l_Y_806))).f_INSTANCES;
}
RT_B_TICK();
} L_end807: ;
l_Y_806 = r_NEW_SYM(g_Y_TYPE, l_KEY_805);
((*(R12 *)rt_nil_check(l_Y_806))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_806))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_806))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_806;
{
R10 l_C_809; memset(&l_C_809, 0, sizeof l_C_809);
S_R10(&l_C_809, ((*(R12 *)rt_nil_check(l_Y_806))).f_ACCESS, 0);
R10 l_D_810; memset(&l_D_810, 0, sizeof l_D_810);
S_R10(&l_D_810, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_809, l_C_809));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_809, l_D_810, l_D_810, l_ET_C_804));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_809, l_C_809, l_C_809));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_809, l_C_809, l_C_809));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_809, l_C_809, l_C_809, l_D_810));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_810, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_809, l_C_809, l_C_809, l_D_810));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_810, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_809, l_C_809, l_C_809));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_809, l_C_809, l_C_809, l_C_809));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_810, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv811 = ((*(R12 *)rt_nil_check(l_Y_806))).f_ACCESS;
return rv811; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_812; memset(&l_K_812, 0, sizeof l_K_812);
l_K_812 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_812 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv813 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv813; }
}
{ R10 rv814 = r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv814; }
}
else if ((l_K_812 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv815 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv815; }
}
{ R10 rv816 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv816; }
}
else if ((l_K_812 == g_T_SEM))
{
{ R10 rv817 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv817; }
}
else if ((l_K_812 == g_T_ABS))
{
{ R10 rv818 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv818; }
}
else if ((l_K_812 == g_T_ARR))
{
{
R25 * l_B_819; memset(&l_B_819, 0, sizeof l_B_819);
l_B_819 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_820; memset(&l_I_820, 0, sizeof l_I_820);
l_I_820 = ((rt_int)0LL);
R10 l_R_821; memset(&l_R_821, 0, sizeof l_R_821);
S_R10(&l_R_821, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_819 == NULL)) goto L_end822;
{
S_R10(&l_R_821, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_821, p_LV, r_NUM(l_I_820), ((*(R25 *)rt_nil_check(l_B_819))).f_LO), 0);
S_R10(&l_R_821, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_821, p_LV, r_NUM(l_I_820), ((*(R25 *)rt_nil_check(l_B_819))).f_HI), 0);
l_I_820 = rt_add(l_I_820, ((rt_int)1LL));
l_B_819 = ((*(R25 *)rt_nil_check(l_B_819))).f_NEXT;
}
RT_B_TICK();
} L_end822: ;
S_R10(&l_R_821, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_821, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_821, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_821, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_823; memset(&l_IV_823, 0, sizeof l_IV_823);
S_R10(&l_IV_823, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_821, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_821, l_IV_823, l_IV_823, l_IV_823), 0);
S_R10(&l_R_821, r_FMT2(rt_str("@ @ }", 5), l_R_821, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_823))), 0);
}
}
{ R10 rv824 = r_CATS(l_R_821, rt_str(" }", 2));
return rv824; }
}
}
else if ((l_K_812 == g_T_REC))
{
{
R24 * l_F_825; memset(&l_F_825, 0, sizeof l_F_825);
l_F_825 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_826; memset(&l_A_826, 0, sizeof l_A_826);
l_A_826 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_827; memset(&l_R_827, 0, sizeof l_R_827);
S_R10(&l_R_827, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_825 == NULL)) goto L_end828;
{
if ((!(((*(R24 *)rt_nil_check(l_F_825))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_826 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_826))).f_ANYARG))
{
S_R10(&l_R_827, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_827, p_LV, ((*(R24 *)rt_nil_check(l_F_825))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_826))).f_LO), 0);
}
l_A_826 = ((*(R25 *)rt_nil_check(l_A_826))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_825))).f_T))
{
S_R10(&l_R_827, r_FMT2(rt_str("@ @", 3), l_R_827, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_825))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_825))).f_CNAME)), p_LV)), 0);
}
l_F_825 = ((*(R24 *)rt_nil_check(l_F_825))).f_NEXT;
}
RT_B_TICK();
} L_end828: ;
{ R10 rv829 = l_R_827;
return rv829; }
}
}
{ R10 rv830 = r_NO_TEXT();
return rv830; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_831; memset(&l_K_831, 0, sizeof l_K_831);
l_K_831 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_831 == g_T_STR) || (l_K_831 == g_T_BITS)) || (l_K_831 == g_T_ARR)) || (l_K_831 == g_T_SEM)))
{
{ rt_int rv832 = 1;
return rv832; }
}
else if ((l_K_831 == g_T_ABS))
{
{ rt_int rv833 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv833; }
}
else if ((l_K_831 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv834 = 1;
return rv834; }
}
{
R24 * l_F_835; memset(&l_F_835, 0, sizeof l_F_835);
l_F_835 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_835 == NULL)) goto L_end836;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_835))).f_T))
{
{ rt_int rv837 = 1;
return rv837; }
}
l_F_835 = ((*(R24 *)rt_nil_check(l_F_835))).f_NEXT;
}
RT_B_TICK();
} L_end836: ;
}
}
{ rt_int rv838 = 0;
return rv838; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_839; memset(&l_K_839, 0, sizeof l_K_839);
l_K_839 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_839 == g_T_STR) || (l_K_839 == g_T_BITS)))
{
{ R10 rv840 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv840; }
}
else if ((l_K_839 == g_T_ABS))
{
{ R10 rv841 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv841; }
}
else if (((l_K_839 == g_T_ARR) || (l_K_839 == g_T_REC)))
{
{ R10 rv842 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv842; }
}
{ R10 rv843 = p_V;
return rv843; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_844; memset(&l_K_844, 0, sizeof l_K_844);
l_K_844 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_844 == g_T_STR) || (l_K_844 == g_T_BITS)))
{
{ R10 rv845 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv845; }
}
else if ((l_K_844 == g_T_ABS))
{
{ R10 rv846 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv846; }
}
else if ((l_K_844 == g_T_SEM))
{
{ R10 rv847 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv847; }
}
else if ((l_K_844 == g_T_ARR))
{
{ R10 rv848 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv848; }
}
else if ((l_K_844 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv849 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv849; }
}
{ R10 rv850 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv850; }
}
{ R10 rv851 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv851; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_852; memset(&l_K_852, 0, sizeof l_K_852);
l_K_852 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_852 == g_T_STR) || (l_K_852 == g_T_BITS)))
{
{ R10 rv853 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv853; }
}
else if ((l_K_852 == g_T_ABS))
{
{ R10 rv854 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv854; }
}
else if (((l_K_852 == g_T_ARR) || (l_K_852 == g_T_REC)))
{
{ R10 rv855 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv855; }
}
else if ((l_K_852 == g_T_SEM))
{
{ R10 rv856 = r_MK(rt_str("0", 1));
return rv856; }
}
{ R10 rv857 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv857; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv858 = p_V;
return rv858; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv859 = p_V;
return rv859; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv860 = p_V;
return rv860; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
{ R10 rv861 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv861; }
}
{ R10 rv862 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv862; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv863 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv863; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv864 = 1;
return rv864; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv865 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv865; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv866 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv866; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv867 = 0;
return rv867; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv868 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv868; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv869 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv869; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv870 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv870; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv871 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv871; }
}
{ rt_int rv872 = 1;
return rv872; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv873 = 1;
return rv873; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv874 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv874; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv875 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv875; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv876 = 0;
return rv876; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv877 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv877; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv878 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv878; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv879 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv879; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv880 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv880; }
}
{ rt_int rv881 = 1;
return rv881; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv882 = 0;
return rv882; }
}
{ rt_int rv883 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv883; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_884; memset(&l_P_884, 0, sizeof l_P_884);
l_P_884 = p_A;
R25 * l_Q_885; memset(&l_Q_885, 0, sizeof l_Q_885);
l_Q_885 = p_B;
for (;;) {
if (((l_P_884 == NULL) || (l_Q_885 == NULL))) goto L_end886;
{
if ((r_IS_GEN_ARG(l_P_884) || r_IS_GEN_ARG(l_Q_885)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_884))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_885))).f_ANYARG)))
{
{ rt_int rv887 = 0;
return rv887; }
}
if (((((*(R25 *)rt_nil_check(l_P_884))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_885))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_884))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_885))).f_MLO).f_V)))
{
{ rt_int rv888 = 0;
return rv888; }
}
}
l_P_884 = ((*(R25 *)rt_nil_check(l_P_884))).f_NEXT;
l_Q_885 = ((*(R25 *)rt_nil_check(l_Q_885))).f_NEXT;
}
RT_B_TICK();
} L_end886: ;
{ rt_int rv889 = ((l_P_884 == NULL) && (l_Q_885 == NULL));
return rv889; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_890; memset(&l_CS_890, 0, sizeof l_CS_890);
l_CS_890 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_891; memset(&l_T_891, 0, sizeof l_T_891);
rt_int l_LEV_892; memset(&l_LEV_892, 0, sizeof l_LEV_892);
if ((((*(R18 *)rt_nil_check(l_CS_890))).f_LEVEL == p_LEVEL))
{
{ R10 rv893 = r_MK(rt_str("F", 1));
return rv893; }
}
if (((*(R18 *)rt_nil_check(l_CS_890))).f_FRAMED)
{
S_R10(&l_T_891, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_891, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_892 = rt_sub(((*(R18 *)rt_nil_check(l_CS_890))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_892 <= p_LEVEL)) goto L_end894;
{
S_R10(&l_T_891, r_CATS(l_T_891, rt_str("->up", 4)), 0);
l_LEV_892 = rt_sub(l_LEV_892, ((rt_int)1LL));
}
RT_B_TICK();
} L_end894: ;
{ R10 rv895 = l_T_891;
return rv895; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv896 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv896; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv897 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv897; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv898 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv898; }
}
{ R10 rv899 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv899; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_900; memset(&l_CS_900, 0, sizeof l_CS_900);
l_CS_900 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_901; memset(&l_T_901, 0, sizeof l_T_901);
l_T_901 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_902; memset(&l_CN_902, 0, sizeof l_CN_902);
if ((((*(R18 *)rt_nil_check(l_CS_900))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_902, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME), 0);
}
else
{
S_R10(&l_CN_902, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_901), l_CN_902));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_902, 0);
{ R10 rv903 = l_CN_902;
return rv903; }
}
S_R10(&l_CN_902, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_902, 0);
if (((*(R18 *)rt_nil_check(l_CS_900))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_901), l_CN_902), &((*(R18 *)rt_nil_check(l_CS_900))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_902), 0);
{ R10 rv904 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv904; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_901), l_CN_902, l_CN_902, l_CN_902));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_902, 0);
{ R10 rv905 = l_CN_902;
return rv905; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_906; memset(&l_T_906, 0, sizeof l_T_906);
l_T_906 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_907; memset(&l_N_907, 0, sizeof l_N_907);
l_N_907 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_908; memset(&l_V_908, 0, sizeof l_V_908);
rt_int l_HAVE_V_909; memset(&l_HAVE_V_909, 0, sizeof l_HAVE_V_909);
l_HAVE_V_909 = 0;
if (((((*(R22 *)rt_nil_check(l_T_906))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_906))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_907 == NULL)) goto L_end910;
{
{
R12 * l_Y_911; memset(&l_Y_911, 0, sizeof l_Y_911);
l_Y_911 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_907))).f_NAME);
R10 l_CN_912; memset(&l_CN_912, 0, sizeof l_CN_912);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_911))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_911))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_906) && (((*(R22 *)rt_nil_check(l_T_906))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_913; memset(&l_M_913, 0, sizeof l_M_913);
S_R23(&l_M_913, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_911))).f_HASMV = (l_M_913).f_OK;
((*(R12 *)rt_nil_check(l_Y_911))).f_MV = (l_M_913).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_911))).f_T = l_T_906;
S_R10(&l_CN_912, r_NEW_OBJECT(l_Y_911, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_906))
{
r_CODE(r_INIT_CODE(l_T_906, l_CN_912));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_909))
{
S_R26(&l_V_908, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_906), 0);
l_HAVE_V_909 = 1;
}
r_CODE(r_STORE_CODE(l_T_906, l_CN_912, l_V_908, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_911, ((*(R21 *)rt_nil_check(l_N_907))).f_LINE);
}
l_N_907 = ((*(R21 *)rt_nil_check(l_N_907))).f_NEXT;
}
RT_B_TICK();
} L_end910: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv914 = ({ R26 rc915; memset(&rc915, 0, sizeof rc915);  S_R10(&rc915.f_C, p_C, 0); rc915.f_T = p_T; rc915.f_LVAL = 0; S_R10(&rc915.f_SELF, r_NO_TEXT(), 0); rc915; });
return rv914; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv916 = ({ R26 rc917; memset(&rc917, 0, sizeof rc917);  S_R10(&rc917.f_C, p_C, 0); rc917.f_T = p_T; rc917.f_LVAL = p_LVAL; S_R10(&rc917.f_SELF, p_SELF, 0); rc917; });
return rv916; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_918; memset(&l_T_918, 0, sizeof l_T_918);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv919 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv919; }
}
l_T_918 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_918))).f_SCALE = p_SCALE;
{ R22 * rv920 = l_T_918;
return rv920; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_921; memset(&l_T_921, 0, sizeof l_T_921);
l_T_921 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_921))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_921))).f_MLEN, p_M, 0);
{ R22 * rv922 = l_T_921;
return rv922; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_923; memset(&l_S_923, 0, sizeof l_S_923);
l_S_923 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_923, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_924; memset(&l_AT_924, 0, sizeof l_AT_924);
l_AT_924 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_925; memset(&l_R_925, 0, sizeof l_R_925);
S_R10(&l_R_925, r_MK(rt_str("\"", 1)), 0);
{ rt_int it927_lo = ((rt_int)0LL), it927_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it927 = it927_lo; it927 <= it927_hi; it927++) {
{
if ((rt_b_eq(rt_b_slice(l_S_923, it927, it927), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_923, it927, it927), rt_str("\\", 1))))
{
S_R10(&l_R_925, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_923, it927, it927))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_923, it927, it927), rt_str("\?", 1)))
{
S_R10(&l_R_925, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_928; memset(&l_C_928, 0, sizeof l_C_928);
l_C_928 = r_CODE_OF(rt_b_slice(l_S_923, it927, it927));
if (({ rt_int iv929 = l_C_928; (((rt_int)32LL) <= iv929) && (iv929 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_925, r_MK(rt_b_slice(l_S_923, it927, it927)), 0);
}
else
{
S_R10(&l_R_925, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_928, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_928, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_928, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it927 == it927_hi) break;
} } L_end926: ;
S_R10(&l_R_925, r_MK(rt_str("\"", 1)), 0);
{ R10 rv930 = ({ R10 rc931; memset(&rc931, 0, sizeof rc931);  rc931.f_AT = l_AT_924; rc931.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_924); rc931.f_H = rt_neg(((rt_int)1LL)); rc931; });
return rv930; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_932; memset(&l_K_932, 0, sizeof l_K_932);
l_K_932 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_933; memset(&l_NO_933, 0, sizeof l_NO_933);
S_R23(&l_NO_933, ({ R23 rc934; memset(&rc934, 0, sizeof rc934);  rc934.f_OK = 0; rc934.f_V = ((rt_int)0LL); rc934; }), 0);
if ((l_K_932 == g_N_INT))
{
{ R23 rv935 = ({ R23 rc936; memset(&rc936, 0, sizeof rc936);  rc936.f_OK = 1; rc936.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc936; });
return rv935; }
}
else if ((l_K_932 == g_N_PAREN))
{
{ R23 rv937 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv937; }
}
else if ((l_K_932 == g_N_BOOL))
{
{ R23 rv938 = ({ R23 rc939; memset(&rc939, 0, sizeof rc939);  rc939.f_OK = 1; rc939.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc939; });
return rv938; }
}
else if ((l_K_932 == g_N_UNOP))
{
{
R23 l_A_940; memset(&l_A_940, 0, sizeof l_A_940);
S_R23(&l_A_940, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
{ R23 rv941 = ({ R23 rc942; memset(&rc942, 0, sizeof rc942);  rc942.f_OK = (l_A_940).f_OK; rc942.f_V = rt_neg((l_A_940).f_V); rc942; });
return rv941; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv943 = l_A_940;
return rv943; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv944 = ({ R23 rc945; memset(&rc945, 0, sizeof rc945);  rc945.f_OK = (l_A_940).f_OK; rc945.f_V = rt_sub(((rt_int)1LL), (l_A_940).f_V); rc945; });
return rv944; }
}
}
}
else if ((l_K_932 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv946 = l_NO_933;
return rv946; }
}
{
R23 l_A_947; memset(&l_A_947, 0, sizeof l_A_947);
S_R23(&l_A_947, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_948; memset(&l_B_948, 0, sizeof l_B_948);
S_R23(&l_B_948, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_949; memset(&l_OP_949, 0, sizeof l_OP_949);
S_R10(&l_OP_949, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_949, rt_str("&", 1)) && (l_A_947).f_OK))
{
if (((l_A_947).f_V == ((rt_int)0LL)))
{
{ R23 rv950 = l_A_947;
return rv950; }
}
{ R23 rv951 = l_B_948;
return rv951; }
}
else if ((r_TEQS(l_OP_949, rt_str("!", 1)) && (l_A_947).f_OK))
{
if (((l_A_947).f_V == ((rt_int)1LL)))
{
{ R23 rv952 = l_A_947;
return rv952; }
}
{ R23 rv953 = l_B_948;
return rv953; }
}
if ((!(((l_A_947).f_OK && (l_B_948).f_OK))))
{
{ R23 rv954 = l_NO_933;
return rv954; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv955 = l_NO_933;
return rv955; }
}
if (r_TEQS(l_OP_949, rt_str("+", 1)))
{
{ R23 rv956 = ({ R23 rc957; memset(&rc957, 0, sizeof rc957);  rc957.f_OK = 1; rc957.f_V = rt_add((l_A_947).f_V, (l_B_948).f_V); rc957; });
return rv956; }
}
else if (r_TEQS(l_OP_949, rt_str("-", 1)))
{
{ R23 rv958 = ({ R23 rc959; memset(&rc959, 0, sizeof rc959);  rc959.f_OK = 1; rc959.f_V = rt_sub((l_A_947).f_V, (l_B_948).f_V); rc959; });
return rv958; }
}
else if (r_TEQS(l_OP_949, rt_str("*", 1)))
{
{ R23 rv960 = ({ R23 rc961; memset(&rc961, 0, sizeof rc961);  rc961.f_OK = 1; rc961.f_V = rt_mul((l_A_947).f_V, (l_B_948).f_V); rc961; });
return rv960; }
}
else if ((r_TEQS(l_OP_949, rt_str("//", 2)) && (!((l_B_948).f_V == ((rt_int)0LL)))))
{
{ R23 rv962 = ({ R23 rc963; memset(&rc963, 0, sizeof rc963);  rc963.f_OK = 1; rc963.f_V = rt_quot((l_A_947).f_V, (l_B_948).f_V); rc963; });
return rv962; }
}
else if ((r_TEQS(l_OP_949, rt_str("MOD", 3)) && (!((l_B_948).f_V == ((rt_int)0LL)))))
{
{ R23 rv964 = ({ R23 rc965; memset(&rc965, 0, sizeof rc965);  rc965.f_OK = 1; rc965.f_V = rt_rem((l_A_947).f_V, (l_B_948).f_V); rc965; });
return rv964; }
}
else if (r_TEQS(l_OP_949, rt_str("=", 1)))
{
{ R23 rv966 = ({ R23 rc967; memset(&rc967, 0, sizeof rc967);  rc967.f_OK = 1; rc967.f_V = r_BOOL_INT(((l_A_947).f_V == (l_B_948).f_V)); rc967; });
return rv966; }
}
else if (r_TEQS(l_OP_949, rt_str("<>", 2)))
{
{ R23 rv968 = ({ R23 rc969; memset(&rc969, 0, sizeof rc969);  rc969.f_OK = 1; rc969.f_V = r_BOOL_INT((!((l_A_947).f_V == (l_B_948).f_V))); rc969; });
return rv968; }
}
else if (r_TEQS(l_OP_949, rt_str("<", 1)))
{
{ R23 rv970 = ({ R23 rc971; memset(&rc971, 0, sizeof rc971);  rc971.f_OK = 1; rc971.f_V = r_BOOL_INT(((l_A_947).f_V < (l_B_948).f_V)); rc971; });
return rv970; }
}
else if (r_TEQS(l_OP_949, rt_str(">", 1)))
{
{ R23 rv972 = ({ R23 rc973; memset(&rc973, 0, sizeof rc973);  rc973.f_OK = 1; rc973.f_V = r_BOOL_INT(((l_A_947).f_V > (l_B_948).f_V)); rc973; });
return rv972; }
}
else if (r_TEQS(l_OP_949, rt_str("<=", 2)))
{
{ R23 rv974 = ({ R23 rc975; memset(&rc975, 0, sizeof rc975);  rc975.f_OK = 1; rc975.f_V = r_BOOL_INT(((l_A_947).f_V <= (l_B_948).f_V)); rc975; });
return rv974; }
}
else if (r_TEQS(l_OP_949, rt_str(">=", 2)))
{
{ R23 rv976 = ({ R23 rc977; memset(&rc977, 0, sizeof rc977);  rc977.f_OK = 1; rc977.f_V = r_BOOL_INT(((l_A_947).f_V >= (l_B_948).f_V)); rc977; });
return rv976; }
}
}
}
else if ((l_K_932 == g_N_IN))
{
{
R23 l_A_978; memset(&l_A_978, 0, sizeof l_A_978);
S_R23(&l_A_978, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_979; memset(&l_L_979, 0, sizeof l_L_979);
S_R23(&l_L_979, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_980; memset(&l_U_980, 0, sizeof l_U_980);
S_R23(&l_U_980, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_981; memset(&l_LO_981, 0, sizeof l_LO_981);
rt_int l_HI_982; memset(&l_HI_982, 0, sizeof l_HI_982);
if ((!(((((l_A_978).f_OK && (l_L_979).f_OK) && (l_U_980).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv983 = l_NO_933;
return rv983; }
}
l_LO_981 = (l_L_979).f_V;
l_HI_982 = (l_U_980).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_981 = rt_add(l_LO_981, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_982 = rt_sub(l_HI_982, ((rt_int)1LL));
}
{ R23 rv984 = ({ R23 rc985; memset(&rc985, 0, sizeof rc985);  rc985.f_OK = 1; rc985.f_V = r_BOOL_INT((((l_A_978).f_V >= l_LO_981) && ((l_A_978).f_V <= l_HI_982))); rc985; });
return rv984; }
}
}
else if (((l_K_932 == g_N_NAME) || (l_K_932 == g_TS_GEN)))
{
{
R12 * l_Y_986; memset(&l_Y_986, 0, sizeof l_Y_986);
l_Y_986 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_987; memset(&l_B_987, 0, sizeof l_B_987);
l_B_987 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_987 == NULL)) goto L_end988;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_987))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_987))).f_HASMV))
{
{ R23 rv989 = ({ R23 rc990; memset(&rc990, 0, sizeof rc990);  rc990.f_OK = 1; rc990.f_V = ((*(R20 *)rt_nil_check(l_B_987))).f_MV; rc990; });
return rv989; }
}
l_B_987 = ((*(R20 *)rt_nil_check(l_B_987))).f_NEXT;
}
RT_B_TICK();
} L_end988: ;
if ((!(l_Y_986 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_986))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_986))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_986))).f_HASMV))
{
{ R23 rv991 = ({ R23 rc992; memset(&rc992, 0, sizeof rc992);  rc992.f_OK = 1; rc992.f_V = ((*(R12 *)rt_nil_check(l_Y_986))).f_MV; rc992; });
return rv991; }
}
if ((((*(R12 *)rt_nil_check(l_Y_986))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv993 = ({ R23 rc994; memset(&rc994, 0, sizeof rc994);  rc994.f_OK = 1; rc994.f_V = ((*(R12 *)rt_nil_check(l_Y_986))).f_MV; rc994; });
return rv993; }
}
}
}
}
}
else if ((l_K_932 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv995 = ({ R23 rc996; memset(&rc996, 0, sizeof rc996);  rc996.f_OK = 1; rc996.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc996; });
return rv995; }
}
}
else if ((l_K_932 == g_N_FIELD))
{
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SCALE", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RADIX", 5)))) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_997; memset(&l_Y_997, 0, sizeof l_Y_997);
l_Y_997 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_997 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_997))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_997))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_997))).f_KIND == g_Y_TYPE))) && (!(((*(R12 *)rt_nil_check(l_Y_997))).f_T == NULL))))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_997))).f_T)))).f_KIND == g_T_INT))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RADIX", 5)))
{
{ R23 rv998 = ({ R23 rc999; memset(&rc999, 0, sizeof rc999);  rc999.f_OK = 1; rc999.f_V = ((rt_int)2LL); rc999; });
return rv998; }
}
{ R23 rv1000 = ({ R23 rc1001; memset(&rc1001, 0, sizeof rc1001);  rc1001.f_OK = 1; rc1001.f_V = ((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_997))).f_T)))).f_SCALE; rc1001; });
return rv1000; }
}
}
}
}
}
}
else if ((l_K_932 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1002 = ({ R23 rc1003; memset(&rc1003, 0, sizeof rc1003);  rc1003.f_OK = 1; rc1003.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1003; });
return rv1002; }
}
}
{ R23 rv1004 = l_NO_933;
return rv1004; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1005 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1005; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1006 = ((rt_int)1LL);
return rv1006; }
}
{ rt_int rv1007 = ((rt_int)0LL);
return rv1007; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1008; memset(&l_K_1008, 0, sizeof l_K_1008);
l_K_1008 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1008 == g_N_INT))
{
{ R26 rv1009 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1009; }
}
else if ((l_K_1008 == g_N_REAL))
{
{ R26 rv1010 = r_REAL_LITERAL(p_E);
return rv1010; }
}
else if ((l_K_1008 == g_N_BOOL))
{
{ R26 rv1011 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1011; }
}
else if ((l_K_1008 == g_N_NIL))
{
{ R26 rv1012 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1012; }
}
else if ((l_K_1008 == g_N_PAREN))
{
{
R26 l_V_1013; memset(&l_V_1013, 0, sizeof l_V_1013);
S_R26(&l_V_1013, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1013).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1013).f_C), 0);
{ R26 rv1014 = l_V_1013;
return rv1014; }
}
}
else if ((l_K_1008 == g_N_STR))
{
{ R26 rv1015 = r_STRING_LITERAL(p_E);
return rv1015; }
}
else if ((l_K_1008 == g_N_BITS))
{
{ R26 rv1016 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1016; }
}
else if ((l_K_1008 == g_N_ENUMLIT))
{
{ R26 rv1017 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1017; }
}
else if ((l_K_1008 == g_N_RECCONS))
{
{ R26 rv1018 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1018; }
}
else if ((l_K_1008 == g_N_ARRCONS))
{
{ R26 rv1019 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1019; }
}
else if ((l_K_1008 == g_N_TYPESPEC))
{
{ R26 rv1020 = r_TYPE_SPECIFIER(p_E);
return rv1020; }
}
else if ((l_K_1008 == g_N_QUAL))
{
{
rt_int l_SAVED_1021; memset(&l_SAVED_1021, 0, sizeof l_SAVED_1021);
l_SAVED_1021 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1022; memset(&l_V_1022, 0, sizeof l_V_1022);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
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
S_R26(&l_V_1022, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1021;
{ R26 rv1023 = l_V_1022;
return rv1023; }
}
}
else if ((l_K_1008 == g_N_NEW))
{
{ R26 rv1024 = r_NEW_EXPR(p_E, p_WANT);
return rv1024; }
}
else if ((l_K_1008 == g_N_NAME))
{
{ R26 rv1025 = r_NAME_EXPR(p_E, p_WANT);
return rv1025; }
}
else if ((l_K_1008 == g_N_APPLY))
{
{
R12 * l_Y_1026; memset(&l_Y_1026, 0, sizeof l_Y_1026);
l_Y_1026 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1026 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1026))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1026))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1027; memset(&l_N_1027, 0, sizeof l_N_1027);
l_N_1027 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1028; memset(&l_A_1028, 0, sizeof l_A_1028);
l_A_1028 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1028))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1027))).f_A = l_A_1028;
((*(R21 *)rt_nil_check(l_N_1027))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1029 = r_EXPR(l_N_1027, p_WANT);
return rv1029; }
}
}
}
{ R26 rv1030 = r_CALL_EXPR(p_E, p_WANT);
return rv1030; }
}
}
else if ((l_K_1008 == g_N_FIELD))
{
{ R26 rv1031 = r_FIELD_EXPR(p_E);
return rv1031; }
}
else if ((l_K_1008 == g_N_DEREF))
{
{
R26 l_B_1032; memset(&l_B_1032, 0, sizeof l_B_1032);
S_R26(&l_B_1032, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1032).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1033; memset(&l_TT_1033, 0, sizeof l_TT_1033);
l_TT_1033 = r_TARGET((l_B_1032).f_T);
{ R26 rv1034 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1033), (l_B_1032).f_C), l_TT_1033, 1, r_NO_TEXT());
return rv1034; }
}
}
}
else if ((l_K_1008 == g_N_INDEX))
{
{ R26 rv1035 = r_INDEX_EXPR(p_E);
return rv1035; }
}
else if ((l_K_1008 == g_N_SUBSTR))
{
{
R26 l_B_1036; memset(&l_B_1036, 0, sizeof l_B_1036);
S_R26(&l_B_1036, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1037; memset(&l_BT_1037, 0, sizeof l_BT_1037);
l_BT_1037 = r_REAL_TYPE((l_B_1036).f_T);
R10 l_LO_1038; memset(&l_LO_1038, 0, sizeof l_LO_1038);
R10 l_HI_1039; memset(&l_HI_1039, 0, sizeof l_HI_1039);
if ((!(((((*(R22 *)rt_nil_check(l_BT_1037))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1037))).f_KIND == g_T_BITS)))))
{
if ((((*(R22 *)rt_nil_check((l_B_1036).f_T))).f_KIND == g_T_ABS))
{
{ R26 rv1040 = r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_1036, ((*(R21 *)rt_nil_check(p_E))).f_B, ((*(R21 *)rt_nil_check(p_E))).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1040; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1038, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1039, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1037))).f_KIND == g_T_BITS))
{
{ R26 rv1041 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1036).f_C, l_LO_1038, l_HI_1039), r_BITS_TYPE(((rt_int)1LL)));
return rv1041; }
}
{
R22 * l_T_1042; memset(&l_T_1042, 0, sizeof l_T_1042);
l_T_1042 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1042))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1037))).f_BASE;
{ R26 rv1043 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1036).f_C, l_LO_1038, l_HI_1039), l_T_1042);
return rv1043; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1037))).f_KIND == g_T_BITS))
{
{ R26 rv1044 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1036).f_C, l_LO_1038, l_HI_1039), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1044; }
}
{
R22 * l_T_1045; memset(&l_T_1045, 0, sizeof l_T_1045);
l_T_1045 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1045))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1037))).f_BASE;
{ R26 rv1046 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1036).f_C, l_LO_1038, l_HI_1039), l_T_1045);
return rv1046; }
}
}
}
else if ((l_K_1008 == g_N_UNOP))
{
{ R26 rv1047 = r_UNARY(p_E);
return rv1047; }
}
else if ((l_K_1008 == g_N_BINOP))
{
{ R26 rv1048 = r_BINARY(p_E);
return rv1048; }
}
else if ((l_K_1008 == g_N_IN))
{
{ R26 rv1049 = r_IN_EXPR(p_E);
return rv1049; }
}
else if (((l_K_1008 == g_N_ANY) || (l_K_1008 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((((((l_K_1008 == g_TS_NAME) || (l_K_1008 == g_TS_ARRAY)) || (l_K_1008 == g_TS_RECORD)) || (l_K_1008 == g_TS_ENUM)) || (l_K_1008 == g_TS_GEN)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1050; memset(&l_SAVED_1050, 0, sizeof l_SAVED_1050);
l_SAVED_1050 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1051; memset(&l_V_1051, 0, sizeof l_V_1051);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R26(&l_V_1051, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1050;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1051).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1052 = (l_V_1051).f_C;
return rv1052; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1051).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1051).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1051).f_T));
}
{ R10 rv1053 = (l_V_1051).f_C;
return rv1053; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1054; memset(&l_V_1054, 0, sizeof l_V_1054);
S_R26(&l_V_1054, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1054).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1054).f_T));
}
{ R10 rv1055 = (l_V_1054).f_C;
return rv1055; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1056; memset(&l_T_1056, 0, sizeof l_T_1056);
l_T_1056 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1056))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1056))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1057 = l_T_1056;
return rv1057; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1058; memset(&l_T_1058, 0, sizeof l_T_1058);
S_R10(&l_T_1058, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1059; memset(&l_S_1059, 0, sizeof l_S_1059);
l_S_1059 = rt_str_new((l_T_1058).f_LEN);
rt_b_assign(&l_S_1059, r_STR(l_T_1058, (l_T_1058).f_LEN));
rt_int l_POINT_1060; memset(&l_POINT_1060, 0, sizeof l_POINT_1060);
l_POINT_1060 = 0;
rt_int l_DIGITS_1061; memset(&l_DIGITS_1061, 0, sizeof l_DIGITS_1061);
l_DIGITS_1061 = ((rt_int)0LL);
{ rt_int it1063_lo = ((rt_int)0LL), it1063_hi = rt_sub((l_T_1058).f_LEN, ((rt_int)1LL));
for (rt_int it1063 = it1063_lo; it1063 <= it1063_hi; it1063++) {
{
if (rt_b_eq(rt_b_slice(l_S_1059, it1063, it1063), rt_str(".", 1)))
{
l_POINT_1060 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1059, it1063, it1063), rt_str("E", 1)))
{
goto L_end1062;
}
else
{
l_DIGITS_1061 = rt_add(l_DIGITS_1061, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1063 == it1063_hi) break;
} } L_end1062: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1060)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1064 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1058), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1064; }
}
if ((!l_POINT_1060))
{
{ R26 rv1065 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1058)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1065; }
}
{
R22 * l_F_1066; memset(&l_F_1066, 0, sizeof l_F_1066);
l_F_1066 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_F_1066))).f_SCALE = l_DIGITS_1061;
if ((l_DIGITS_1061 > ((rt_int)15LL)))
{
((*(R22 *)rt_nil_check(l_F_1066))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_1061 < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1066))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_1059, rt_sub((l_T_1058).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1058).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
{ R26 rv1067 = r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_1058), l_F_1066);
return rv1067; }
}
if (rt_b_eq(rt_b_slice(l_S_1059, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
{ R26 rv1068 = r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_1058), l_F_1066);
return rv1068; }
}
{ R26 rv1069 = r_MKET(r_FMT1(rt_str("(@)", 3), l_T_1058), l_F_1066);
return rv1069; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1070; memset(&l_T_1070, 0, sizeof l_T_1070);
S_R10(&l_T_1070, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1071; memset(&l_S_1071, 0, sizeof l_S_1071);
l_S_1071 = rt_str_new((l_T_1070).f_LEN);
rt_b_assign(&l_S_1071, r_STR(l_T_1070, (l_T_1070).f_LEN));
rt_int l_SIG_1072; memset(&l_SIG_1072, 0, sizeof l_SIG_1072);
l_SIG_1072 = ((rt_int)0LL);
rt_int l_FRAC_1073; memset(&l_FRAC_1073, 0, sizeof l_FRAC_1073);
l_FRAC_1073 = ((rt_int)0LL);
rt_int l_POINT_1074; memset(&l_POINT_1074, 0, sizeof l_POINT_1074);
l_POINT_1074 = 0;
rt_int l_EXP_1075; memset(&l_EXP_1075, 0, sizeof l_EXP_1075);
l_EXP_1075 = ((rt_int)0LL);
rt_int l_I_1076; memset(&l_I_1076, 0, sizeof l_I_1076);
l_I_1076 = ((rt_int)0LL);
for (;;) {
if ((l_I_1076 >= (l_T_1070).f_LEN)) goto L_end1077;
{
if (rt_b_eq(rt_b_slice(l_S_1071, l_I_1076, l_I_1076), rt_str("E", 1)))
{
goto L_end1077;
}
if (rt_b_eq(rt_b_slice(l_S_1071, l_I_1076, l_I_1076), rt_str(".", 1)))
{
l_POINT_1074 = 1;
}
else
{
if (((l_SIG_1072 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1071, l_I_1076, l_I_1076), rt_str("0", 1)))))
{
l_SIG_1072 = rt_add(l_SIG_1072, ((rt_int)1LL));
}
if (l_POINT_1074)
{
l_FRAC_1073 = rt_add(l_FRAC_1073, ((rt_int)1LL));
}
}
l_I_1076 = rt_add(l_I_1076, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1077: ;
if ((rt_sub(l_I_1076, r_BOOL_INT(l_POINT_1074)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1076 < (l_T_1070).f_LEN))
{
{
rt_int l_NEG_1078; memset(&l_NEG_1078, 0, sizeof l_NEG_1078);
l_NEG_1078 = 0;
l_I_1076 = rt_add(l_I_1076, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1071, l_I_1076, l_I_1076), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1071, l_I_1076, l_I_1076), rt_str("+", 1))))
{
l_NEG_1078 = rt_b_eq(rt_b_slice(l_S_1071, l_I_1076, l_I_1076), rt_str("-", 1));
l_I_1076 = rt_add(l_I_1076, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1076 >= (l_T_1070).f_LEN)) goto L_end1079;
{
if ((l_EXP_1075 <= ((rt_int)1000LL)))
{
l_EXP_1075 = rt_sub(rt_add(rt_mul(l_EXP_1075, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1071, l_I_1076, l_I_1076))), ((rt_int)48LL));
}
l_I_1076 = rt_add(l_I_1076, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1079: ;
if ((l_EXP_1075 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1078)
{
l_EXP_1075 = rt_neg(l_EXP_1075);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1072 > ((rt_int)0LL)))
{
{
rt_int l_P10_1080; memset(&l_P10_1080, 0, sizeof l_P10_1080);
l_P10_1080 = rt_sub(rt_add(rt_sub(l_SIG_1072, ((rt_int)1LL)), l_EXP_1075), l_FRAC_1073);
rt_int l_BITS_1081; memset(&l_BITS_1081, 0, sizeof l_BITS_1081);
l_BITS_1081 = rt_add(rt_quot((rt_mul(l_P10_1080, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1080 < ((rt_int)0LL)))
{
l_BITS_1081 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1080), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1081 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1082; memset(&l_CS_1082, 0, sizeof l_CS_1082);
l_CS_1082 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1083; memset(&l_P_1083, 0, sizeof l_P_1083);
l_P_1083 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1084; memset(&l_S_1084, 0, sizeof l_S_1084);
S_R10(&l_S_1084, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1085; memset(&l_Y_1085, 0, sizeof l_Y_1085);
l_Y_1085 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1085 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1082 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1082)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1082 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1082)))).f_BASE;
}
}
for (;;) {
if ((l_P_1083 == NULL)) goto L_end1086;
{
if ((((*(R21 *)rt_nil_check(l_P_1083))).f_IV == g_K_STR))
{
if ((l_CS_1082 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1084, r_CAT(l_S_1084, ((*(R21 *)rt_nil_check(l_P_1083))).f_NAME), 0);
}
else
{
{
R10 l_Q_1087; memset(&l_Q_1087, 0, sizeof l_Q_1087);
S_R10(&l_Q_1087, ((*(R21 *)rt_nil_check(l_P_1083))).f_NAME, 0);
rstr l_QS_1088; memset(&l_QS_1088, 0, sizeof l_QS_1088);
l_QS_1088 = rt_str_new((l_Q_1087).f_LEN);
rt_b_assign(&l_QS_1088, r_STR(l_Q_1087, (l_Q_1087).f_LEN));
{ rt_int it1090_lo = ((rt_int)0LL), it1090_hi = rt_sub((l_Q_1087).f_LEN, ((rt_int)1LL));
for (rt_int it1090 = it1090_lo; it1090 <= it1090_hi; it1090++) {
{
{
R10 l_LIT_1091; memset(&l_LIT_1091, 0, sizeof l_LIT_1091);
R12 * l_Y_1092; memset(&l_Y_1092, 0, sizeof l_Y_1092);
if (rt_b_eq(rt_b_slice(l_QS_1088, it1090, it1090), rt_str("'", 1)))
{
S_R10(&l_LIT_1091, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1091, r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1088, it1090, it1090)), rt_str("'", 1))), 0);
}
l_Y_1092 = r_FIND_LITERAL(l_LIT_1091, l_CS_1082);
if ((l_Y_1092 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1083))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1088, it1090, it1090)));
}
S_R10(&l_S_1084, r_CATS(l_S_1084, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1092))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1090 == it1090_hi) break;
} } L_end1089: ;
}
}
}
else
{
{
R12 * l_Y_1093; memset(&l_Y_1093, 0, sizeof l_Y_1093);
l_Y_1093 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1083))).f_NAME, l_CS_1082);
if ((l_Y_1093 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1083))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1083))).f_NAME);
}
S_R10(&l_S_1084, r_CATS(l_S_1084, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1093))).f_MV)), 0);
}
}
l_P_1083 = ((*(R21 *)rt_nil_check(l_P_1083))).f_NEXT;
}
RT_B_TICK();
} L_end1086: ;
{
R22 * l_T_1094; memset(&l_T_1094, 0, sizeof l_T_1094);
l_T_1094 = r_STR_TYPE(r_NUM((l_S_1084).f_LEN), r_SOME((l_S_1084).f_LEN));
((*(R22 *)rt_nil_check(l_T_1094))).f_BASE = l_CS_1082;
{ R26 rv1095 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1084), r_NUM((l_S_1084).f_LEN)), l_T_1094);
return rv1095; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1096; memset(&l_TS_1096, 0, sizeof l_TS_1096);
l_TS_1096 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1096))).f_NAME, p_NAME, 0);
{ R22 * rv1097 = r_RESOLVE(l_TS_1096);
return rv1097; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1098; memset(&l_Y_1098, 0, sizeof l_Y_1098);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1099; memset(&l_WT_1099, 0, sizeof l_WT_1099);
l_WT_1099 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1099))).f_KIND == g_T_ENUM))
{
l_Y_1098 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1099);
if ((!(l_Y_1098 == NULL)))
{
{ R26 rv1100 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1098))).f_MV), r_ENUM_RESULT(l_Y_1098, p_WANT));
return rv1100; }
}
}
}
}
l_Y_1098 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1101; memset(&l_FOUND_1101, 0, sizeof l_FOUND_1101);
l_FOUND_1101 = NULL;
rt_int l_N_1102; memset(&l_N_1102, 0, sizeof l_N_1102);
l_N_1102 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1098 == NULL)) goto L_end1103;
{
if ((((*(R12 *)rt_nil_check(l_Y_1098))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1098))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1101 == NULL)))
{
if (((l_FOUND_1101 == NULL) || (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1101))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1101 = l_Y_1098;
}
else
{
l_N_1102 = rt_add(l_N_1102, ((rt_int)1LL));
}
}
}
l_Y_1098 = r_LOOKUP_NEXT(l_Y_1098);
}
RT_B_TICK();
} L_end1103: ;
if ((l_FOUND_1101 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1102 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1104 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1101))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1101))).f_T);
return rv1104; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1105 = p_WANT;
return rv1105; }
}
{ R22 * rv1106 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1106; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1107; memset(&l_Y_1107, 0, sizeof l_Y_1107);
l_Y_1107 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1107 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1107))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1107))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1108; memset(&l_WRITABLE_1108, 0, sizeof l_WRITABLE_1108);
l_WRITABLE_1108 = r_CHECK_IMPORTED(l_Y_1107, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1109 = r_MKLV(r_OBJ_ACCESS(l_Y_1107), ((*(R12 *)rt_nil_check(l_Y_1107))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1107))).f_KIND == g_Y_VAR) && l_WRITABLE_1108), r_NO_TEXT());
return rv1109; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1107))).f_KIND == g_Y_GEN))
{
{ R26 rv1110 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1107))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1107))).f_T);
return rv1110; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1107))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1111 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1111; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1107))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1107))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1112; memset(&l_N_1112, 0, sizeof l_N_1112);
l_N_1112 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1112))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1113 = r_CALL_EXPR(l_N_1112, p_WANT);
return rv1113; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1114; memset(&l_A_1114, 0, sizeof l_A_1114);
l_A_1114 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((*(R21 *)rt_nil_check(l_A_1114))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1114))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1114))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1115; memset(&l_B_1115, 0, sizeof l_B_1115);
S_R26(&l_B_1115, r_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1114))).f_A))).f_A, NULL), 0);
R10 l_I_1116; memset(&l_I_1116, 0, sizeof l_I_1116);
S_R10(&l_I_1116, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1114))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1115).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1117 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1115).f_C, l_I_1116, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1115).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1117; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1118 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1115).f_C, l_I_1116, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1115).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1118; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1114))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1114))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1114))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1114))).f_A))).f_A))).f_NAME))
{
{ R26 rv1119 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1114))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1114))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1119; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1114))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1120; memset(&l_Y_1120, 0, sizeof l_Y_1120);
l_Y_1120 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1114))).f_NAME);
if ((!(l_Y_1120 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1120))).f_KIND == g_Y_TYPE))
{
{ R26 rv1121 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1114))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1121; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1114))).f_NAME))
{
{ R26 rv1122 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1114))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1122; }
}
}
}
{
R26 l_B_1123; memset(&l_B_1123, 0, sizeof l_B_1123);
S_R26(&l_B_1123, r_EXPR(l_A_1114, NULL), 0);
R22 * l_BT_1124; memset(&l_BT_1124, 0, sizeof l_BT_1124);
l_BT_1124 = (l_B_1123).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1124))).f_KIND == g_T_REC))
{
{
R24 * l_F_1125; memset(&l_F_1125, 0, sizeof l_F_1125);
l_F_1125 = r_FIND_FIELD(l_BT_1124, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1125 == NULL)))
{
r_CHECK_VARIANT(l_F_1125, l_BT_1124, l_A_1114, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1126 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1123).f_C, ((*(R24 *)rt_nil_check(l_F_1125))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1125))).f_T, ((l_B_1123).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1125))).f_KIND == ((rt_int)0LL))), (l_B_1123).f_C);
return rv1126; }
}
}
}
{ R26 rv1127 = r_ATTRIBUTE(l_B_1123, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1127; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1128 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1128; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1129; memset(&l_TAGV_1129, 0, sizeof l_TAGV_1129);
S_R23(&l_TAGV_1129, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1129).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1129).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1130; memset(&l_F_1130, 0, sizeof l_F_1130);
l_F_1130 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1131; memset(&l_A_1131, 0, sizeof l_A_1131);
l_A_1131 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1130 == NULL)) goto L_end1132;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1130))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1131 == NULL))
{
{ R23 rv1133 = r_NO_MVAL();
return rv1133; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1130))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1131))).f_ANYARG)
{
{ R23 rv1134 = r_NO_MVAL();
return rv1134; }
}
{ R23 rv1135 = ((*(R25 *)rt_nil_check(l_A_1131))).f_MLO;
return rv1135; }
}
l_A_1131 = ((*(R25 *)rt_nil_check(l_A_1131))).f_NEXT;
}
l_F_1130 = ((*(R24 *)rt_nil_check(l_F_1130))).f_NEXT;
}
RT_B_TICK();
} L_end1132: ;
{ R23 rv1136 = r_NO_MVAL();
return rv1136; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1137; memset(&l_P_1137, 0, sizeof l_P_1137);
l_P_1137 = p_L;
for (;;) {
if ((l_P_1137 == NULL)) goto L_end1138;
{
if ((((*(R21 *)rt_nil_check(l_P_1137))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1137))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1137))).f_B, p_T)).f_V)))
{
{ rt_int rv1139 = 1;
return rv1139; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1137, p_T)).f_V == p_V))
{
{ rt_int rv1140 = 1;
return rv1140; }
}
l_P_1137 = ((*(R21 *)rt_nil_check(l_P_1137))).f_NEXT;
}
RT_B_TICK();
} L_end1138: ;
{ rt_int rv1141 = 0;
return rv1141; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1142; memset(&l_A_1142, 0, sizeof l_A_1142);
S_R26(&l_A_1142, r_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A, NULL), 0);
R10 l_I_1143; memset(&l_I_1143, 0, sizeof l_I_1143);
S_R10(&l_I_1143, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1142).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1144 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1142).f_C, (l_A_1142).f_C, l_I_1143, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1142).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1144; }
}
}
}
{ R26 rv1145 = r_INDEX_EXPR2(p_E);
return rv1145; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1146; memset(&l_B_1146, 0, sizeof l_B_1146);
S_R26(&l_B_1146, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1147; memset(&l_T_1147, 0, sizeof l_T_1147);
l_T_1147 = r_REAL_TYPE((l_B_1146).f_T);
R21 * l_S_1148; memset(&l_S_1148, 0, sizeof l_S_1148);
l_S_1148 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1149; memset(&l_IX_1149, 0, sizeof l_IX_1149);
S_R10(&l_IX_1149, r_MK(rt_str("", 0)), 0);
rt_int l_N_1150; memset(&l_N_1150, 0, sizeof l_N_1150);
l_N_1150 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1147))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1148 == NULL)) goto L_end1151;
{
if ((l_N_1150 > ((rt_int)0LL)))
{
S_R10(&l_IX_1149, r_CATS(l_IX_1149, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1149, r_CAT(l_IX_1149, r_INT_EXPR(l_S_1148)), 0);
l_N_1150 = rt_add(l_N_1150, ((rt_int)1LL));
l_S_1148 = ((*(R21 *)rt_nil_check(l_S_1148))).f_NEXT;
}
RT_B_TICK();
} L_end1151: ;
if ((!(l_N_1150 == ((*(R22 *)rt_nil_check(l_T_1147))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1150 == ((rt_int)1LL)))
{
{ R26 rv1152 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1146).f_C, l_IX_1149, (l_B_1146).f_C, (l_B_1146).f_C), ((*(R22 *)rt_nil_check(l_T_1147))).f_ELEM, (l_B_1146).f_LVAL, r_NO_TEXT());
return rv1152; }
}
{
R10 l_X_1153; memset(&l_X_1153, 0, sizeof l_X_1153);
S_R10(&l_X_1153, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1146).f_C, r_NUM(l_N_1150), (l_B_1146).f_C, (l_B_1146).f_C), 0);
{ R26 rv1154 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1153, l_IX_1149), ((*(R22 *)rt_nil_check(l_T_1147))).f_ELEM, (l_B_1146).f_LVAL, r_NO_TEXT());
return rv1154; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1155 = r_MKN(rt_str("NEGATE_", 7));
return rv1155; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1156 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1156; }
}
{ R10 rv1157 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1157; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1158 = r_MKN(rt_str("ADD_", 4));
return rv1158; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1159 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1159; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1160 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1160; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1161 = r_MKN(rt_str("DIVIDE_", 7));
return rv1161; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1162 = r_MKN(rt_str("MODULUS_", 8));
return rv1162; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1163 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1163; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1164 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1164; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1165 = r_MKN(rt_str("EQUAL_", 6));
return rv1165; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1166 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1166; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1167 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1167; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1168 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1168; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1169 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1169; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1170 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1170; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1171 = r_MKN(rt_str("AND_", 4));
return rv1171; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1172 = r_MKN(rt_str("OR_", 3));
return rv1172; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1173 = r_MKN(rt_str("XOR_", 4));
return rv1173; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1174 = r_MKN(rt_str("IMPLIES_", 8));
return rv1174; }
}
{ R10 rv1175 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1175; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1176; memset(&l_A_1176, 0, sizeof l_A_1176);
l_A_1176 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1176)), ({ R27 rc1177; memset(&rc1177, 0, sizeof rc1177);  rc1177.f_E = NULL; S_R26(&rc1177.f_V, p_V, 0); rc1177.f_HAVE = 1; rc1177.f_MODE = g_M_IN; rc1177.f_NEXT = p_NEXT; rc1177; }), 0);
{ R27 * rv1178 = l_A_1176;
return rv1178; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1179; memset(&l_A_1179, 0, sizeof l_A_1179);
l_A_1179 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1179)), ({ R27 rc1180; memset(&rc1180, 0, sizeof rc1180);  rc1180.f_E = p_E; S_R26(&rc1180.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1180.f_HAVE = 0; rc1180.f_MODE = p_MODE; rc1180.f_NEXT = p_NEXT; rc1180; }), 0);
{ R27 * rv1181 = l_A_1179;
return rv1181; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1182; memset(&l_Y_1182, 0, sizeof l_Y_1182);
l_Y_1182 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1182 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1182 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1183 = l_Y_1182;
return rv1183; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1184; memset(&l_ARGS_1184, 0, sizeof l_ARGS_1184);
l_ARGS_1184 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1185; memset(&l_Y_1185, 0, sizeof l_Y_1185);
l_Y_1185 = r_USER_OPERATOR(p_NAME, l_ARGS_1184, p_LINE);
if ((l_Y_1185 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1186 = r_CALL_SYM(l_Y_1185, l_ARGS_1184, p_LINE);
return rv1186; }
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
{ R10 rv1187 = p_C;
return rv1187; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1188 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1188; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1189 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1189; }
}
{ R10 rv1190 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1190; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1191 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1191; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1192; memset(&l_RT_1192, 0, sizeof l_RT_1192);
l_RT_1192 = r_REAL_TYPE(p_T);
R22 * l_VT_1193; memset(&l_VT_1193, 0, sizeof l_VT_1193);
l_VT_1193 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1193))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_PTR)))
{
{ R10 rv1194 = (p_V).f_C;
return rv1194; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1193))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1193)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1195 = (p_V).f_C;
return rv1195; }
}
if ((!r_SAME_CLASS(l_RT_1192, l_VT_1193)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1193), (r_TYPE_NAME(l_VT_1193)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1192), (r_TYPE_NAME(l_RT_1192)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1192))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1192))).f_SCALE))
{
{ R10 rv1196 = r_RANGE_CHECK(l_RT_1192, (p_V).f_C, p_SELF);
return rv1196; }
}
{ R10 rv1197 = r_RANGE_CHECK(l_RT_1192, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1192))).f_SCALE)), p_SELF);
return rv1197; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_FLOAT) || (((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_ENUM)))
{
{ R10 rv1198 = r_RANGE_CHECK(l_RT_1192, (p_V).f_C, p_SELF);
return rv1198; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RT_1192))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1193))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1192))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1193))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1192), r_TARGET(l_VT_1193))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1192)) && (!r_HAS_ANY(l_VT_1193))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1192))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1193))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1192))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1192))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1193))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1199 = (p_V).f_C;
return rv1199; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1200; memset(&l_ARGS_1200, 0, sizeof l_ARGS_1200);
l_ARGS_1200 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1201; memset(&l_Y_1201, 0, sizeof l_Y_1201);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1200))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1201 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1200, p_LINE, 0);
if ((l_Y_1201 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1200))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1201 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1200, p_LINE, 0);
}
if ((l_Y_1201 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1202 = r_CATS((r_CALL_SYM(l_Y_1201, l_ARGS_1200, p_LINE)).f_C, rt_str(";", 1));
return rv1202; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1203 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1203; }
}
}
{ R10 rv1204 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1204; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1205 = 1;
return rv1205; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1206 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1206; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1207; memset(&l_F_1207, 0, sizeof l_F_1207);
l_F_1207 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1207 == NULL)) goto L_end1208;
{
if ((((*(R24 *)rt_nil_check(l_F_1207))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1207))).f_T))
{
{ rt_int rv1209 = 1;
return rv1209; }
}
}
l_F_1207 = ((*(R24 *)rt_nil_check(l_F_1207))).f_NEXT;
}
RT_B_TICK();
} L_end1208: ;
}
}
{ rt_int rv1210 = 0;
return rv1210; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1211 = 0;
return rv1211; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1212 = 0;
return rv1212; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1213 = 0;
return rv1213; }
}
{ rt_int rv1214 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1214; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1215 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1215; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1216; memset(&l_D_1216, 0, sizeof l_D_1216);
S_R10(&l_D_1216, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1217; memset(&l_S_1217, 0, sizeof l_S_1217);
S_R10(&l_S_1217, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1218; memset(&l_I_1218, 0, sizeof l_I_1218);
S_R10(&l_I_1218, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1219; memset(&l_N_1219, 0, sizeof l_N_1219);
S_R10(&l_N_1219, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1220; memset(&l_VE_1220, 0, sizeof l_VE_1220);
l_VE_1220 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1221; memset(&l_R_1221, 0, sizeof l_R_1221);
S_R10(&l_R_1221, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1216, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1221, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1221, l_S_1217, p_RV), 0);
S_R10(&l_R_1221, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1221, l_N_1219, l_D_1216, l_D_1216), 0);
S_R10(&l_R_1221, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1221, l_S_1217, l_S_1217), 0);
S_R10(&l_R_1221, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1221, l_I_1218, l_N_1219, l_D_1216), 0);
S_R10(&l_R_1221, r_FMT2(rt_str("@@->hi);", 8), l_R_1221, l_D_1216), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1221, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1221, l_I_1218, l_I_1218, l_I_1218), 0);
S_R10(&l_R_1221, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1221, l_I_1218, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1217, l_I_1218), r_NO_TEXT())), 0);
}
S_R10(&l_R_1221, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1221, l_I_1218, l_I_1218, l_I_1218), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1221, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1221, l_I_1218, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1220, r_FMT2(rt_str("@->p[@]", 7), l_D_1216, l_I_1218), r_FMT2(rt_str("@.p[@]", 6), l_S_1217, l_I_1218), p_LINE)), 0);
}
else
{
S_R10(&l_R_1221, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1221, l_I_1218, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1216, l_I_1218), r_FMT2(rt_str("@.p[@]", 6), l_S_1217, l_I_1218))), 0);
}
{ R10 rv1222 = l_R_1221;
return rv1222; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1223; memset(&l_D_1223, 0, sizeof l_D_1223);
S_R10(&l_D_1223, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1224; memset(&l_S_1224, 0, sizeof l_S_1224);
S_R10(&l_S_1224, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1225; memset(&l_F_1225, 0, sizeof l_F_1225);
l_F_1225 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1226; memset(&l_R_1226, 0, sizeof l_R_1226);
S_R10(&l_R_1226, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1223, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1226, r_FMT3(rt_str("@@ = @;", 7), l_R_1226, l_S_1224, p_RV), 0);
for (;;) {
if ((l_F_1225 == NULL)) goto L_end1227;
{
{
R10 l_DF_1228; memset(&l_DF_1228, 0, sizeof l_DF_1228);
S_R10(&l_DF_1228, r_FMT2(rt_str("@->@", 4), l_D_1223, ((*(R24 *)rt_nil_check(l_F_1225))).f_CNAME), 0);
R10 l_SF_1229; memset(&l_SF_1229, 0, sizeof l_SF_1229);
S_R10(&l_SF_1229, r_FMT2(rt_str("@.@", 3), l_S_1224, ((*(R24 *)rt_nil_check(l_F_1225))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1225))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1225))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1226, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1226, l_DF_1228, l_SF_1229), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1225))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1226, r_FMT3(rt_str("@ @ = @;", 8), l_R_1226, l_DF_1228, l_SF_1229), 0);
}
else
{
S_R10(&l_R_1226, r_FMT2(rt_str("@ @", 3), l_R_1226, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1225))).f_T, ((*(R24 *)rt_nil_check(l_F_1225))).f_T, l_DF_1228, l_SF_1229, p_LINE)), 0);
}
}
l_F_1225 = ((*(R24 *)rt_nil_check(l_F_1225))).f_NEXT;
}
RT_B_TICK();
} L_end1227: ;
{ R10 rv1230 = r_CATS(l_R_1226, rt_str(" }", 2));
return rv1230; }
}
}
{ R10 rv1231 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1231; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1232; memset(&l_ARGS_1232, 0, sizeof l_ARGS_1232);
l_ARGS_1232 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1233; memset(&l_Y_1233, 0, sizeof l_Y_1233);
l_Y_1233 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1232, p_LINE);
if ((l_Y_1233 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1234 = (r_CALL_SYM(l_Y_1233, l_ARGS_1232, p_LINE)).f_C;
return rv1234; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1235; memset(&l_X_1235, 0, sizeof l_X_1235);
S_R10(&l_X_1235, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1236; memset(&l_Z_1236, 0, sizeof l_Z_1236);
S_R10(&l_Z_1236, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1237; memset(&l_I_1237, 0, sizeof l_I_1237);
S_R10(&l_I_1237, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1238; memset(&l_N_1238, 0, sizeof l_N_1238);
S_R10(&l_N_1238, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1239; memset(&l_R_1239, 0, sizeof l_R_1239);
S_R10(&l_R_1239, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1235, p_A, l_Z_1236), 0);
S_R10(&l_R_1239, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1239, p_B, l_I_1237, l_N_1238), 0);
S_R10(&l_R_1239, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1239, l_X_1235, l_X_1235, l_Z_1236), 0);
S_R10(&l_R_1239, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1239, l_Z_1236, l_I_1237, l_N_1238), 0);
S_R10(&l_R_1239, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1239, l_X_1235, l_X_1235), 0);
S_R10(&l_R_1239, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1239, l_I_1237, l_I_1237, l_I_1237), 0);
S_R10(&l_R_1239, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1239, l_I_1237, l_I_1237, l_I_1237), 0);
S_R10(&l_R_1239, r_FMT2(rt_str("@@;", 3), l_R_1239, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1235, l_I_1237), r_FMT2(rt_str("@.p[@]", 6), l_Z_1236, l_I_1237), p_LINE)), 0);
{ R10 rv1240 = r_FMT2(rt_str("@ @r; })", 8), l_R_1239, l_I_1237);
return rv1240; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1241; memset(&l_X_1241, 0, sizeof l_X_1241);
S_R10(&l_X_1241, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1242; memset(&l_Z_1242, 0, sizeof l_Z_1242);
S_R10(&l_Z_1242, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1243; memset(&l_F_1243, 0, sizeof l_F_1243);
l_F_1243 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1244; memset(&l_R_1244, 0, sizeof l_R_1244);
S_R10(&l_R_1244, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1241, p_A, l_Z_1242), 0);
R10 l_EQ_1245; memset(&l_EQ_1245, 0, sizeof l_EQ_1245);
S_R10(&l_EQ_1245, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1244, r_FMT2(rt_str("@@;", 3), l_R_1244, p_B), 0);
for (;;) {
if ((l_F_1243 == NULL)) goto L_end1246;
{
{
R10 l_C_1247; memset(&l_C_1247, 0, sizeof l_C_1247);
S_R10(&l_C_1247, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1243))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1241, ((*(R24 *)rt_nil_check(l_F_1243))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1242, ((*(R24 *)rt_nil_check(l_F_1243))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1243))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1245, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1245, r_VARIANT_COND(l_F_1243, p_T, l_X_1241), l_C_1247), 0);
}
else
{
S_R10(&l_EQ_1245, r_FMT2(rt_str("@ && @", 6), l_EQ_1245, l_C_1247), 0);
}
}
l_F_1243 = ((*(R24 *)rt_nil_check(l_F_1243))).f_NEXT;
}
RT_B_TICK();
} L_end1246: ;
{ R10 rv1248 = r_FMT2(rt_str("@ @; })", 7), l_R_1244, l_EQ_1245);
return rv1248; }
}
}
{ R10 rv1249 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1249; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1250; memset(&l_A_1250, 0, sizeof l_A_1250);
S_R26(&l_A_1250, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1251; memset(&l_T_1251, 0, sizeof l_T_1251);
l_T_1251 = (l_A_1250).f_T;
R10 l_OP_1252; memset(&l_OP_1252, 0, sizeof l_OP_1252);
S_R10(&l_OP_1252, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R22 *)rt_nil_check(l_T_1251))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1253; memset(&l_ARGS_1253, 0, sizeof l_ARGS_1253);
l_ARGS_1253 = r_VAL_ARG(l_A_1250, NULL);
R12 * l_Y_1254; memset(&l_Y_1254, 0, sizeof l_Y_1254);
l_Y_1254 = r_USER_OPERATOR(r_OP_NAME(l_OP_1252, 1), l_ARGS_1253, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_1254 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1251));
}
{ R26 rv1255 = r_CALL_SYM(l_Y_1254, l_ARGS_1253, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1255; }
}
}
if (r_TEQS(l_OP_1252, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1251))).f_KIND == g_T_BOOL))
{
{ R26 rv1256 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1250).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1256; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1251))).f_KIND == g_T_BITS))
{
{ R26 rv1257 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1250).f_C), l_T_1251);
return rv1257; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1251))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1252, rt_str("-", 1)))
{
{ R26 rv1258 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1250).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1251))).f_SCALE));
return rv1258; }
}
{ R26 rv1259 = r_MKET((l_A_1250).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1251))).f_SCALE));
return rv1259; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1251))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_1252, rt_str("-", 1)))
{
{ R26 rv1260 = r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_1250).f_C), l_T_1251);
return rv1260; }
}
{ R26 rv1261 = l_A_1250;
return rv1261; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1251));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1262 = (((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1262; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1263; memset(&l_OP_1263, 0, sizeof l_OP_1263);
S_R10(&l_OP_1263, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1264; memset(&l_A_1264, 0, sizeof l_A_1264);
R26 l_B_1265; memset(&l_B_1265, 0, sizeof l_B_1265);
if ((r_TEQS(l_OP_1263, rt_str("&", 1)) || r_TEQS(l_OP_1263, rt_str("!", 1))))
{
{
R23 l_MA_1266; memset(&l_MA_1266, 0, sizeof l_MA_1266);
S_R23(&l_MA_1266, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1267; memset(&l_CA_1267, 0, sizeof l_CA_1267);
S_R10(&l_CA_1267, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1268; memset(&l_CB_1268, 0, sizeof l_CB_1268);
S_R10(&l_CB_1268, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1263, rt_str("&", 1)))
{
{ R26 rv1269 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1267, l_CB_1268), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1269; }
}
{ R26 rv1270 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1267, l_CB_1268), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1270; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1265, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1264, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1265).f_T), 0);
}
else
{
S_R26(&l_A_1264, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1265, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1264).f_T), 0);
}
{ R26 rv1271 = r_APPLY_OPERATOR(p_E, l_OP_1263, l_A_1264, l_B_1265);
return rv1271; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1272; memset(&l_AT_1272, 0, sizeof l_AT_1272);
l_AT_1272 = (p_A).f_T;
R22 * l_BT_1273; memset(&l_BT_1273, 0, sizeof l_BT_1273);
l_BT_1273 = (p_B).f_T;
rt_int l_LINE_1274; memset(&l_LINE_1274, 0, sizeof l_LINE_1274);
l_LINE_1274 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R10 l_NAME_1275; memset(&l_NAME_1275, 0, sizeof l_NAME_1275);
S_R10(&l_NAME_1275, r_OP_NAME(p_OP, 0), 0);
if (((((!(r_LOOKUP(l_NAME_1275) == NULL)) || (!(r_LOOKUP(r_MKN(rt_b_slice(r_STR(l_NAME_1275, (l_NAME_1275).f_LEN), ((rt_int)0LL), rt_sub((l_NAME_1275).f_LEN, ((rt_int)2LL))))) == NULL))) || (((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1276; memset(&l_ARGS_1276, 0, sizeof l_ARGS_1276);
l_ARGS_1276 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R12 * l_Y_1277; memset(&l_Y_1277, 0, sizeof l_Y_1277);
l_Y_1277 = r_USER_OPERATOR(l_NAME_1275, l_ARGS_1276, l_LINE_1274);
if ((!(l_Y_1277 == NULL)))
{
{ R26 rv1278 = r_CALL_SYM(l_Y_1277, l_ARGS_1276, l_LINE_1274);
return rv1278; }
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R12 * l_Q_1279; memset(&l_Q_1279, 0, sizeof l_Q_1279);
l_Q_1279 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1276, l_LINE_1274);
if ((!(l_Q_1279 == NULL)))
{
{ R26 rv1280 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1279, l_ARGS_1276, l_LINE_1274)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1280; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1274, rt_str("no such operation for the abstract type: ", 41), l_NAME_1275);
}
}
}
}
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1281 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1281; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1282 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1282; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_INT)))
{
{ R26 rv1283 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1283; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1284 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1284; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1272, l_BT_1273)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1272))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1274, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1285 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1285; }
}
r_FAILT(l_LINE_1274, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_BITS)))))
{
{
R22 * l_T_1286; memset(&l_T_1286, 0, sizeof l_T_1286);
l_T_1286 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1286))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1272))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1272))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1273))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1286))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1272))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1273))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1286))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1286))).f_MLEN).f_V), 0);
}
{ R26 rv1287 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1286);
return rv1287; }
}
}
r_FAIL(l_LINE_1274, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_BITS)))
{
{ R26 rv1288 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1272);
return rv1288; }
}
r_FAILT(l_LINE_1274, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_INT)))
{
{ R26 rv1289 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1289; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1290; memset(&l_T_1290, 0, sizeof l_T_1290);
l_T_1290 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1290))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1272))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1273))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
{ R26 rv1291 = r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_1290);
return rv1291; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
{ R26 rv1292 = r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_1290);
return rv1292; }
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1272))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1273))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1274, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1274, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1272), (r_TYPE_NAME(l_AT_1272)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1293 = r_MK(rt_str("and", 3));
return rv1293; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1294 = r_MK(rt_str("or", 2));
return rv1294; }
}
{ R10 rv1295 = r_MK(rt_str("xor", 3));
return rv1295; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1296 = p_A;
return rv1296; }
}
{ rt_int rv1297 = p_B;
return rv1297; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1298 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1298; }
}
{ R10 rv1299 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1299; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1300; memset(&l_AT_1300, 0, sizeof l_AT_1300);
l_AT_1300 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1301; memset(&l_BT_1301, 0, sizeof l_BT_1301);
l_BT_1301 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1302; memset(&l_R_1302, 0, sizeof l_R_1302);
if (((((*(R22 *)rt_nil_check(l_AT_1300))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1301))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1300))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1301))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1300))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1301))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1302, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1300))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1301))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1302, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1300, l_BT_1301)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1300))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R22 *)rt_nil_check(l_AT_1300))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1300) || r_HAS_ANY(l_BT_1301)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if (r_HAS_ABS_PART(l_AT_1300))
{
S_R10(&l_R_1302, r_COMPONENT_EQUAL(l_AT_1300, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1302, r_EQUAL_CODE(l_AT_1300, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1302, r_FMT1(rt_str("(!@)", 4), l_R_1302), 0);
}
{ R26 rv1303 = r_MKET(l_R_1302, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1303; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1304; memset(&l_S1_1304, 0, sizeof l_S1_1304);
l_S1_1304 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1305; memset(&l_S2_1305, 0, sizeof l_S2_1305);
l_S2_1305 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1306; memset(&l_S_1306, 0, sizeof l_S_1306);
l_S_1306 = r_MAX_INT(l_S1_1304, l_S2_1305);
R10 l_FN_1307; memset(&l_FN_1307, 0, sizeof l_FN_1307);
S_R10(&l_FN_1307, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1307, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1308 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1307, r_RESCALE_C((p_A).f_C, l_S1_1304, l_S_1306), r_RESCALE_C((p_B).f_C, l_S2_1305, l_S_1306)), r_INT_TYPE(l_S_1306));
return rv1308; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1309 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1304, l_S2_1305)));
return rv1309; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1310 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1304, l_S2_1305)));
return rv1310; }
}
{ R26 rv1311 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1304, l_S2_1305)));
return rv1311; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1312 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1304));
return rv1312; }
}
{ R26 rv1313 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1304));
return rv1313; }
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
rt_int l_S1_1314; memset(&l_S1_1314, 0, sizeof l_S1_1314);
l_S1_1314 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1315; memset(&l_S2_1315, 0, sizeof l_S2_1315);
l_S2_1315 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1316; memset(&l_RND_1316, 0, sizeof l_RND_1316);
S_R10(&l_RND_1316, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1316, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1317 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1317; }
}
{
R23 l_SM_1318; memset(&l_SM_1318, 0, sizeof l_SM_1318);
S_R23(&l_SM_1318, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1319; memset(&l_S_1319, 0, sizeof l_S_1319);
l_S_1319 = (l_SM_1318).f_V;
rt_int l_SR_1320; memset(&l_SR_1320, 0, sizeof l_SR_1320);
l_SR_1320 = r_MAX_INT(l_S1_1314, l_S2_1315);
if ((!(l_SM_1318).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1321 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1319, l_S1_1314), l_S2_1315)), l_RND_1316), r_INT_TYPE(l_S_1319));
return rv1321; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1322 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1319, l_S1_1314), l_S2_1315)), l_RND_1316), r_INT_TYPE(l_S_1319));
return rv1322; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1323 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1314), r_NUM(l_S_1319), l_RND_1316), r_INT_TYPE(l_S_1319));
return rv1323; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_FN_1324; memset(&l_FN_1324, 0, sizeof l_FN_1324);
S_R10(&l_FN_1324, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1324, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1325 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_1324, r_RESCALE_C((p_A).f_C, l_S1_1314, l_SR_1320), r_RESCALE_C((p_B).f_C, l_S2_1315, l_SR_1320)), r_NUM(l_SR_1320), r_NUM(l_S_1319), l_RND_1316), r_INT_TYPE(l_S_1319));
return rv1325; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1326; memset(&l_V_1326, 0, sizeof l_V_1326);
S_R26(&l_V_1326, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1327; memset(&l_T_1327, 0, sizeof l_T_1327);
l_T_1327 = r_REAL_TYPE((l_V_1326).f_T);
R21 * l_R_1328; memset(&l_R_1328, 0, sizeof l_R_1328);
l_R_1328 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1329; memset(&l_TMP_1329, 0, sizeof l_TMP_1329);
S_R10(&l_TMP_1329, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1330; memset(&l_LO_1330, 0, sizeof l_LO_1330);
R26 l_HI_1331; memset(&l_HI_1331, 0, sizeof l_HI_1331);
R10 l_LOC_1332; memset(&l_LOC_1332, 0, sizeof l_LOC_1332);
R10 l_HIC_1333; memset(&l_HIC_1333, 0, sizeof l_HIC_1333);
R10 l_LO_OP_1334; memset(&l_LO_OP_1334, 0, sizeof l_LO_OP_1334);
S_R10(&l_LO_OP_1334, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1335; memset(&l_HI_OP_1335, 0, sizeof l_HI_OP_1335);
S_R10(&l_HI_OP_1335, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1330, r_EXPR(((*(R21 *)rt_nil_check(l_R_1328))).f_A, l_T_1327), 0);
S_R26(&l_HI_1331, r_EXPR(((*(R21 *)rt_nil_check(l_R_1328))).f_B, l_T_1327), 0);
if (((((*(R22 *)rt_nil_check(l_T_1327))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1327))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1327))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1327))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1327))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1330).f_T), l_T_1327)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1331).f_T), l_T_1327))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1328))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1328))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1334, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1328))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1335, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1327))).f_KIND == g_T_INT))
{
{
R26 l_X_1336; memset(&l_X_1336, 0, sizeof l_X_1336);
S_R26(&l_X_1336, r_MKET(l_TMP_1329, (l_V_1326).f_T), 0);
S_R10(&l_LOC_1332, r_FIXED_COMPARE(l_LO_1330, l_X_1336, l_LO_OP_1334), 0);
S_R10(&l_HIC_1333, r_FIXED_COMPARE(l_X_1336, l_HI_1331, l_HI_OP_1335), 0);
}
}
else
{
S_R10(&l_LOC_1332, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1330).f_C, l_LO_OP_1334, l_TMP_1329), 0);
S_R10(&l_HIC_1333, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1329, l_HI_OP_1335, (l_HI_1331).f_C), 0);
}
{ R26 rv1337 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1327), l_TMP_1329, (l_V_1326).f_C, l_LOC_1332), r_FMT1(rt_str("@; })", 5), l_HIC_1333)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1337; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1338 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1338; }
}
{ R10 rv1339 = (p_V).f_C;
return rv1339; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1340 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1340; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1341; memset(&l_B_1341, 0, sizeof l_B_1341);
l_B_1341 = ((rt_int)0LL);
rt_int l_P_1342; memset(&l_P_1342, 0, sizeof l_P_1342);
l_P_1342 = ((rt_int)1LL);
for (;;) {
if ((l_P_1342 >= p_N)) goto L_end1343;
{
l_B_1341 = rt_add(l_B_1341, ((rt_int)1LL));
l_P_1342 = rt_mul(l_P_1342, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1343: ;
{ rt_int rv1344 = l_B_1341;
return rv1344; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1345; memset(&l_M_1345, 0, sizeof l_M_1345);
S_R23(&l_M_1345, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1345).f_OK)
{
{ rt_int rv1346 = (l_M_1345).f_V;
return rv1346; }
}
}
}
}
{ rt_int rv1347 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1347; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1348; memset(&l_T_1348, 0, sizeof l_T_1348);
l_T_1348 = (p_B).f_T;
rt_int l_K_1349; memset(&l_K_1349, 0, sizeof l_K_1349);
l_K_1349 = ((*(R22 *)rt_nil_check(l_T_1348))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1350 = r_SIZE_OF(l_T_1348, (p_B).f_C);
return rv1350; }
}
if ((l_K_1349 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1351 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1348))).f_SCALE);
return rv1351; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1352 = r_INT_ET(((rt_int)2LL));
return rv1352; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1353 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1353; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1354 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1354; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1348))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1355 = r_MKET(((*(R22 *)rt_nil_check(l_T_1348))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1348))).f_SCALE));
return rv1355; }
}
{ R26 rv1356 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1348))).f_SCALE));
return rv1356; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1348))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1357 = r_MKET(((*(R22 *)rt_nil_check(l_T_1348))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1348))).f_SCALE));
return rv1357; }
}
{ R26 rv1358 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1348))).f_SCALE));
return rv1358; }
}
}
else if ((l_K_1349 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1359 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1348))).f_SCALE);
return rv1359; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1360 = r_INT_ET(((rt_int)15LL));
return rv1360; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1361 = r_INT_ET(((rt_int)2LL));
return rv1361; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ R26 rv1362 = r_INT_ET(rt_neg(((rt_int)1022LL)));
return rv1362; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ R26 rv1363 = r_INT_ET(((rt_int)1023LL));
return rv1363; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
{ R26 rv1364 = r_INT_ET(((rt_int)53LL));
return rv1364; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ R26 rv1365 = r_INT_ET(((rt_int)11LL));
return rv1365; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1348))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1366 = r_MKET(((*(R22 *)rt_nil_check(l_T_1348))).f_LO_C, l_T_1348);
return rv1366; }
}
{ R26 rv1367 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1348);
return rv1367; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1348))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1368 = r_MKET(((*(R22 *)rt_nil_check(l_T_1348))).f_HI_C, l_T_1348);
return rv1368; }
}
{ R26 rv1369 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1348);
return rv1369; }
}
}
else if ((l_K_1349 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1348))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1370 = r_MKET(((*(R22 *)rt_nil_check(l_T_1348))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1348))).f_BASE);
return rv1370; }
}
{ R26 rv1371 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1348))).f_BASE);
return rv1371; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1348))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1372 = r_MKET(((*(R22 *)rt_nil_check(l_T_1348))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1348))).f_BASE);
return rv1372; }
}
{ R26 rv1373 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1348))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1348))).f_BASE);
return rv1373; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1348))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1374 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R22 *)rt_nil_check(l_T_1348))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1348))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1374; }
}
{ R26 rv1375 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1348))).f_BASE))).f_NLITS);
return rv1375; }
}
}
else if (((l_K_1349 == g_T_STR) || (l_K_1349 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1376 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1376; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1377 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1377; }
}
}
else if ((l_K_1349 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1378 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1348))).f_DIMS);
return rv1378; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1348))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1379 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1379; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1380 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1380; }
}
}
else if ((l_K_1349 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1348))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1381 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1381; }
}
{ R26 rv1382 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1382; }
}
}
else if (((l_K_1349 == g_T_ABS) || (l_K_1349 == g_T_REC)))
{
{
R22 * l_U_1383; memset(&l_U_1383, 0, sizeof l_U_1383);
l_U_1383 = l_T_1348;
if ((l_K_1349 == g_T_ABS))
{
l_U_1383 = ((*(R22 *)rt_nil_check(l_T_1348))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1383))).f_KIND == g_T_REC))
{
{
R24 * l_F_1384; memset(&l_F_1384, 0, sizeof l_F_1384);
l_F_1384 = r_FIND_FIELD(l_U_1383, p_NAME);
if ((!(l_F_1384 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1384))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1385 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1384))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1384))).f_T);
return rv1385; }
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
R21 * l_N_1386; memset(&l_N_1386, 0, sizeof l_N_1386);
l_N_1386 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1386))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1387 = l_N_1386;
return rv1387; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1388; memset(&l_K_1388, 0, sizeof l_K_1388);
l_K_1388 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1388 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1389 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1389; }
}
}
{ R26 rv1390 = r_INT_ET(((rt_int)64LL));
return rv1390; }
}
else if ((l_K_1388 == g_T_FLOAT))
{
{ R26 rv1391 = r_INT_ET(((rt_int)64LL));
return rv1391; }
}
else if ((l_K_1388 == g_T_BOOL))
{
{ R26 rv1392 = r_INT_ET(((rt_int)1LL));
return rv1392; }
}
else if ((l_K_1388 == g_T_ENUM))
{
{ R26 rv1393 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1393; }
}
else if ((l_K_1388 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1394 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1394; }
}
{ R26 rv1395 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1395; }
}
else if ((l_K_1388 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1396 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1396; }
}
{ R26 rv1397 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1397; }
}
else if (((l_K_1388 == g_T_PTR) || (l_K_1388 == g_T_SEM)))
{
{ R26 rv1398 = r_INT_ET(((rt_int)64LL));
return rv1398; }
}
else if ((l_K_1388 == g_T_ABS))
{
{ R26 rv1399 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1399; }
}
else if ((l_K_1388 == g_T_ARR))
{
{ R26 rv1400 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1400; }
}
{ R26 rv1401 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1401; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{
R22 * l_T_1402; memset(&l_T_1402, 0, sizeof l_T_1402);
l_T_1402 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
{ R26 rv1403 = r_ATTRIBUTE(r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1402)), l_T_1402), p_NAME, p_LINE);
return rv1403; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1404 = r_INT_ET(((rt_int)100000000LL));
return rv1404; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1405 = r_INT_ET(((rt_int)15LL));
return rv1405; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1406 = r_INT_ET(((rt_int)0LL));
return rv1406; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1407; memset(&l_T_1407, 0, sizeof l_T_1407);
l_T_1407 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1407 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1407 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1407 = r_REAL_TYPE(l_T_1407);
if ((!(((*(R22 *)rt_nil_check(l_T_1407))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1407))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1408; memset(&l_TMP_1408, 0, sizeof l_TMP_1408);
S_R10(&l_TMP_1408, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1409; memset(&l_R_1409, 0, sizeof l_R_1409);
S_R10(&l_R_1409, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1407))).f_CNAME, l_TMP_1408, l_TMP_1408, l_TMP_1408), 0);
R24 * l_F_1410; memset(&l_F_1410, 0, sizeof l_F_1410);
l_F_1410 = ((*(R22 *)rt_nil_check(l_T_1407))).f_FIELDS;
S_R10(&l_R_1409, r_FMT2(rt_str("@@", 2), l_R_1409, r_INIT_CODE(l_T_1407, l_TMP_1408)), 0);
for (;;) {
if ((l_F_1410 == NULL)) goto L_end1411;
{
if ((((*(R24 *)rt_nil_check(l_F_1410))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1410))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1410))).f_LABELS, (r_TAG_VALUE(l_T_1407, ((*(R24 *)rt_nil_check(l_F_1410))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1407, ((*(R24 *)rt_nil_check(l_F_1410))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1412; memset(&l_INIT_1412, 0, sizeof l_INIT_1412);
l_INIT_1412 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1410))).f_NAME);
if ((l_INIT_1412 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1410))).f_NAME);
}
S_R10(&l_R_1409, r_FMT2(rt_str("@ @", 3), l_R_1409, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1410))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1408, ((*(R24 *)rt_nil_check(l_F_1410))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1412))).f_A, ((*(R24 *)rt_nil_check(l_F_1410))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1412))).f_LINE, l_TMP_1408)), 0);
}
}
}
l_F_1410 = ((*(R24 *)rt_nil_check(l_F_1410))).f_NEXT;
}
RT_B_TICK();
} L_end1411: ;
{
R21 * l_P_1413; memset(&l_P_1413, 0, sizeof l_P_1413);
l_P_1413 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1413 == NULL)) goto L_end1414;
{
{
R24 * l_G_1415; memset(&l_G_1415, 0, sizeof l_G_1415);
l_G_1415 = r_FIND_FIELD(l_T_1407, ((*(R21 *)rt_nil_check(l_P_1413))).f_NAME);
if ((l_G_1415 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1413))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1413))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1415))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1413))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1413))).f_NAME);
}
r_CHECK_VARIANT(l_G_1415, l_T_1407, NULL, ((*(R21 *)rt_nil_check(l_P_1413))).f_LINE);
}
l_P_1413 = ((*(R21 *)rt_nil_check(l_P_1413))).f_NEXT;
}
RT_B_TICK();
} L_end1414: ;
}
{ R26 rv1416 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1409, l_TMP_1408), l_T_1407);
return rv1416; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1417; memset(&l_P_1417, 0, sizeof l_P_1417);
l_P_1417 = p_L;
for (;;) {
if ((l_P_1417 == NULL)) goto L_end1418;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1417))).f_NAME, p_NAME))
{
{ R21 * rv1419 = l_P_1417;
return rv1419; }
}
l_P_1417 = ((*(R21 *)rt_nil_check(l_P_1417))).f_NEXT;
}
RT_B_TICK();
} L_end1418: ;
{ R21 * rv1420 = NULL;
return rv1420; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1421; memset(&l_DIMS_1421, 0, sizeof l_DIMS_1421);
l_DIMS_1421 = ((rt_int)0LL);
R21 * l_P_1422; memset(&l_P_1422, 0, sizeof l_P_1422);
l_P_1422 = p_E;
R22 * l_ELEM_1423; memset(&l_ELEM_1423, 0, sizeof l_ELEM_1423);
l_ELEM_1423 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1422))).f_KIND == g_N_ARRCONS))) goto L_end1424;
{
l_DIMS_1421 = rt_add(l_DIMS_1421, ((rt_int)1LL));
l_P_1422 = ((*(R21 *)rt_nil_check(l_P_1422))).f_A;
}
RT_B_TICK();
} L_end1424: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1423 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1423 == NULL))
{
l_ELEM_1423 = (r_EXPR(l_P_1422, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1423))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1423))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1423 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1425; memset(&l_A_1425, 0, sizeof l_A_1425);
l_A_1425 = r_ARRAY_OF(l_ELEM_1423, l_DIMS_1421);
R10 l_TMP_1426; memset(&l_TMP_1426, 0, sizeof l_TMP_1426);
S_R10(&l_TMP_1426, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1427; memset(&l_R_1427, 0, sizeof l_R_1427);
S_R10(&l_R_1427, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1425))).f_CNAME, l_TMP_1426, l_TMP_1426), 0);
rt_int l_K_1428; memset(&l_K_1428, 0, sizeof l_K_1428);
l_K_1428 = ((rt_int)0LL);
S_R10(&l_R_1427, r_FMT2(rt_str("@@); ", 5), l_R_1427, l_TMP_1426), 0);
l_P_1422 = p_E;
{ rt_int it1430_lo = ((rt_int)0LL), it1430_hi = rt_sub(l_DIMS_1421, ((rt_int)1LL));
for (rt_int it1430 = it1430_lo; it1430 <= it1430_hi; it1430++) {
{
S_R10(&l_R_1427, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1427, l_TMP_1426, r_NUM(it1430), l_TMP_1426), 0);
S_R10(&l_R_1427, r_FMT3(rt_str("@@] = @;", 8), l_R_1427, r_NUM(it1430), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1422))).f_A), ((rt_int)1LL)))), 0);
l_P_1422 = ((*(R21 *)rt_nil_check(l_P_1422))).f_A;
}
RT_B_TICK();
if (it1430 == it1430_hi) break;
} } L_end1429: ;
S_R10(&l_R_1427, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1427, l_TMP_1426, l_TMP_1426, r_NUM(l_DIMS_1421)), 0);
S_R10(&l_R_1427, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1427, l_TMP_1426, l_TMP_1426), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1421, l_A_1425, l_TMP_1426, &l_R_1427, &l_K_1428);
{ R26 rv1431 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1427, l_TMP_1426), l_A_1425);
return rv1431; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1432; memset(&l_P_1432, 0, sizeof l_P_1432);
l_P_1432 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1432 == NULL)) goto L_end1433;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1432, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1432))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1432))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1432, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1432))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1432 = ((*(R21 *)rt_nil_check(l_P_1432))).f_NEXT;
}
RT_B_TICK();
} L_end1433: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1434; memset(&l_T_1434, 0, sizeof l_T_1434);
l_T_1434 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1434))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1434))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1434))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1435 = l_T_1434;
return rv1435; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1436; memset(&l_T_1436, 0, sizeof l_T_1436);
l_T_1436 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1437; memset(&l_V_1437, 0, sizeof l_V_1437);
S_R26(&l_V_1437, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1436), 0);
R22 * l_RT_1438; memset(&l_RT_1438, 0, sizeof l_RT_1438);
l_RT_1438 = r_REAL_TYPE(l_T_1436);
if (((((*(R22 *)rt_nil_check((l_V_1437).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1438))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1438))).f_KIND == g_T_INT))
{
{ R26 rv1439 = r_MKET(r_RANGE_CHECK(l_RT_1438, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1437).f_C), r_NO_TEXT()), l_T_1436);
return rv1439; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1438))).f_KIND == g_T_BOOL))
{
{ R26 rv1440 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1437).f_C), l_T_1436);
return rv1440; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1438))).f_KIND == g_T_ENUM))
{
{ R26 rv1441 = r_MKET(r_ENUM_OF_BITS(l_RT_1438, (l_V_1437).f_C), l_T_1436);
return rv1441; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1438))).f_KIND == g_T_FLOAT))
{
{ R26 rv1442 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1437).f_C), l_T_1436);
return rv1442; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1438))).f_KIND == g_T_STR))
{
{ R26 rv1443 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1437).f_C), l_T_1436);
return rv1443; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{ R26 rv1444 = r_MKET(r_CONVERT(l_V_1437, l_T_1436, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_1436);
return rv1444; }
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1445 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1445; }
}
}
{ R10 rv1446 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1446; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1447; memset(&l_NAME_1447, 0, sizeof l_NAME_1447);
S_R10(&l_NAME_1447, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1448; memset(&l_L_1448, 0, sizeof l_L_1448);
l_L_1448 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1449; memset(&l_R_1449, 0, sizeof l_R_1449);
S_R10(&l_R_1449, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1448 == NULL)) goto L_end1450;
{
{
R21 * l_V_1451; memset(&l_V_1451, 0, sizeof l_V_1451);
l_V_1451 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1452; memset(&l_FOUND_1452, 0, sizeof l_FOUND_1452);
l_FOUND_1452 = 0;
for (;;) {
if ((l_V_1451 == NULL)) goto L_end1453;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1451))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1448))).f_NAME))
{
S_R10(&l_R_1449, r_FMT2(rt_str("@@, ", 4), l_R_1449, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1451))).f_A, NULL)).f_C), 0);
l_FOUND_1452 = 1;
}
l_V_1451 = ((*(R21 *)rt_nil_check(l_V_1451))).f_NEXT;
}
RT_B_TICK();
} L_end1453: ;
if ((!l_FOUND_1452))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1448))).f_NAME);
}
}
l_L_1448 = ((*(R21 *)rt_nil_check(l_L_1448))).f_NEXT;
}
RT_B_TICK();
} L_end1450: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1447, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1449, l_NAME_1447, l_NAME_1447));
{ R10 rv1454 = r_FMT2(rt_str("@, @", 4), l_NAME_1447, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1454; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1455; memset(&l_SEM_1455, 0, sizeof l_SEM_1455);
l_SEM_1455 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1455 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1455)
{
{
R22 * l_T_1456; memset(&l_T_1456, 0, sizeof l_T_1456);
l_T_1456 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1456 = p_WANT;
}
}
{ R26 rv1457 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1456))).f_SCALE)), l_T_1456);
return rv1457; }
}
}
{
R22 * l_T_1458; memset(&l_T_1458, 0, sizeof l_T_1458);
l_T_1458 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1459; memset(&l_P_1459, 0, sizeof l_P_1459);
l_P_1459 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1459))).f_TARGET = l_T_1458;
((*(R22 *)rt_nil_check(l_P_1459))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1458))
{
{ R26 rv1460 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1458), r_INIT_CODE(l_T_1458, r_MK(rt_str("(*p)", 4)))), l_P_1459);
return rv1460; }
}
{ R26 rv1461 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1458), r_CTYPE(l_T_1458)), l_P_1459);
return rv1461; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1462; memset(&l_P_1462, 0, sizeof l_P_1462);
l_P_1462 = p_L;
{ rt_int it1464_lo = ((rt_int)1LL), it1464_hi = p_K;
for (rt_int it1464 = it1464_lo; it1464 <= it1464_hi; it1464++) {
{
if ((!(l_P_1462 == NULL)))
{
l_P_1462 = ((*(R21 *)rt_nil_check(l_P_1462))).f_NEXT;
}
}
RT_B_TICK();
if (it1464 == it1464_hi) break;
} } L_end1463: ;
{ R21 * rv1465 = l_P_1462;
return rv1465; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1466; memset(&l_N_1466, 0, sizeof l_N_1466);
l_N_1466 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1466 < p_LO) || (l_N_1466 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1467; memset(&l_L_1467, 0, sizeof l_L_1467);
l_L_1467 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1467 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1467))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1467))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1467))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1468 = r_MK(rt_str("1", 1));
return rv1468; }
}
{ R10 rv1469 = r_MK(rt_str("0", 1));
return rv1469; }
}
if (((((*(R21 *)rt_nil_check(l_L_1467))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1467))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1467))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1470 = r_MK(rt_str("1", 1));
return rv1470; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1467))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1471 = r_MK(rt_str("0", 1));
return rv1471; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1472 = r_MK(rt_str("1", 1));
return rv1472; }
}
{ R10 rv1473 = r_MK(rt_str("0", 1));
return rv1473; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1474 = 0;
return rv1474; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1475 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1475; }
}
{ rt_int rv1476 = 0;
return rv1476; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1477 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1477; }
}
{ R21 * rv1478 = p_E;
return rv1478; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1479; memset(&l_NAME_1479, 0, sizeof l_NAME_1479);
S_R10(&l_NAME_1479, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1480; memset(&l_LINE_1480, 0, sizeof l_LINE_1480);
l_LINE_1480 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_1479, rt_str("PUT", 3)) || r_TEQS(l_NAME_1479, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1481; memset(&l_V_1481, 0, sizeof l_V_1481);
S_R26(&l_V_1481, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1481).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1480, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1479, rt_str("PUT", 3)))
{
{ R26 rv1482 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1481).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1482; }
}
{ R26 rv1483 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1481).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1483; }
}
}
else if (r_TEQS(l_NAME_1479, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1484 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1484; }
}
else if (r_TEQS(l_NAME_1479, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1485 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1485; }
}
else if (r_TEQS(l_NAME_1479, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1486 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1486; }
}
else if (r_TEQS(l_NAME_1479, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1487 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1487; }
}
else if (r_TEQS(l_NAME_1479, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1488 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1488; }
}
else if (r_TEQS(l_NAME_1479, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1489 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1489; }
}
if (r_TEQS(l_NAME_1479, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1490 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1480);
return rv1490; }
}
else if (r_TEQS(l_NAME_1479, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1491 = r_TO_FIXED_CALL(p_E);
return rv1491; }
}
else if (r_TEQS(l_NAME_1479, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1492; memset(&l_V_1492, 0, sizeof l_V_1492);
S_R26(&l_V_1492, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1493; memset(&l_P_1493, 0, sizeof l_P_1493);
S_R23(&l_P_1493, r_MANIFEST(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R22 * l_VT_1494; memset(&l_VT_1494, 0, sizeof l_VT_1494);
l_VT_1494 = r_REAL_TYPE((l_V_1492).f_T);
R22 * l_T_1495; memset(&l_T_1495, 0, sizeof l_T_1495);
l_T_1495 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_1493).f_OK))
{
r_FAIL(l_LINE_1480, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_1493).f_V < ((rt_int)1LL)) || ((l_P_1493).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_1480, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R22 *)rt_nil_check(l_T_1495))).f_SCALE = (l_P_1493).f_V;
if ((((*(R22 *)rt_nil_check(l_VT_1494))).f_KIND == g_T_INT))
{
{ R26 rv1496 = r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_1492).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1494))).f_SCALE)), l_T_1495);
return rv1496; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1494))).f_KIND == g_T_FLOAT))
{
{ R26 rv1497 = r_MKET((l_V_1492).f_C, l_T_1495);
return rv1497; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1494))).f_KIND == g_T_STR))
{
{ R26 rv1498 = r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_1492).f_C), l_T_1495);
return rv1498; }
}
r_FAIL(l_LINE_1480, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1479, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1499 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1480);
return rv1499; }
}
else if (r_TEQS(l_NAME_1479, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1500; memset(&l_V_1500, 0, sizeof l_V_1500);
S_R26(&l_V_1500, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1500).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1501 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1500).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1500).f_T))).f_SCALE));
return rv1501; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1500).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1502 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1500).f_C), (l_V_1500).f_T);
return rv1502; }
}
r_FAIL(l_LINE_1480, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1479, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1479, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1503; memset(&l_V_1503, 0, sizeof l_V_1503);
S_R26(&l_V_1503, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1504; memset(&l_T_1504, 0, sizeof l_T_1504);
l_T_1504 = r_REAL_TYPE((l_V_1503).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1504))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1480, rt_str("an enumerated value expected by ", 32), l_NAME_1479);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1504))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1480, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1479);
}
if (r_TEQS(l_NAME_1479, rt_str("SUCC", 4)))
{
{ R26 rv1505 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1503).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1504))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1504))).f_BASE);
return rv1505; }
}
{ R26 rv1506 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1503).f_C), ((*(R22 *)rt_nil_check(l_T_1504))).f_BASE);
return rv1506; }
}
}
else if (r_TEQS(l_NAME_1479, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1507; memset(&l_V_1507, 0, sizeof l_V_1507);
S_R26(&l_V_1507, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1508; memset(&l_K_1508, 0, sizeof l_K_1508);
l_K_1508 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1507).f_T)))).f_KIND;
R22 * l_T_1509; memset(&l_T_1509, 0, sizeof l_T_1509);
l_T_1509 = r_NEW_TYP(l_K_1508);
if (((!(l_K_1508 == g_T_STR)) && (!(l_K_1508 == g_T_BITS))))
{
r_FAIL(l_LINE_1480, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1509))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1507).f_T))).f_BASE;
{ R26 rv1510 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1507).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1509);
return rv1510; }
}
}
else if (r_TEQS(l_NAME_1479, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1511 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1511; }
}
else if (r_TEQS(l_NAME_1479, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1512 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1512; }
}
else if (((r_TEQS(l_NAME_1479, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1479, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1479, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1513; memset(&l_BITS_1513, 0, sizeof l_BITS_1513);
S_R10(&l_BITS_1513, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1479, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1513, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1479, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1513, r_MK(rt_str("4", 1)), 0);
}
{ R26 rv1514 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1513), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1514; }
}
}
else if ((r_TEQS(l_NAME_1479, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1479, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1515; memset(&l_S_1515, 0, sizeof l_S_1515);
S_R23(&l_S_1515, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_1515).f_OK))
{
r_FAIL(l_LINE_1480, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_1479, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1516 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1515).f_V));
return rv1516; }
}
{ R26 rv1517 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1515).f_V));
return rv1517; }
}
}
else if (((r_TEQS(l_NAME_1479, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1479, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1479, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R22 * l_T_1518; memset(&l_T_1518, 0, sizeof l_T_1518);
l_T_1518 = r_NEW_TYP(g_T_FLOAT);
R23 l_P_1519; memset(&l_P_1519, 0, sizeof l_P_1519);
S_R23(&l_P_1519, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_1519).f_OK))
{
r_FAIL(l_LINE_1480, rt_str("the precision must be manifest", 30));
}
((*(R22 *)rt_nil_check(l_T_1518))).f_SCALE = (l_P_1519).f_V;
if (r_TEQS(l_NAME_1479, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1520 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1518);
return rv1520; }
}
else if (r_TEQS(l_NAME_1479, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1521 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1518);
return rv1521; }
}
{ R26 rv1522 = r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_1518);
return rv1522; }
}
}
else if (r_TEQS(l_NAME_1479, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1523 = r_INT_ET(((rt_int)15LL));
return rv1523; }
}
else if (r_TEQS(l_NAME_1479, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1524 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1524; }
}
else if (r_TEQS(l_NAME_1479, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1525 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1525; }
}
{ R26 rv1526 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1526; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1527; memset(&l_T_1527, 0, sizeof l_T_1527);
l_T_1527 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1528; memset(&l_K_1528, 0, sizeof l_K_1528);
l_K_1528 = ((*(R22 *)rt_nil_check(l_T_1527))).f_KIND;
R22 * l_S_1529; memset(&l_S_1529, 0, sizeof l_S_1529);
l_S_1529 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1528 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1527))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1530 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1529);
return rv1530; }
}
{ R26 rv1531 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1527))).f_SCALE)), l_S_1529);
return rv1531; }
}
else if ((l_K_1528 == g_T_FLOAT))
{
{ R26 rv1532 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1527))).f_SCALE)), l_S_1529);
return rv1532; }
}
else if ((l_K_1528 == g_T_BOOL))
{
{ R26 rv1533 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1529);
return rv1533; }
}
else if ((l_K_1528 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1527))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1534 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1529);
return rv1534; }
}
{ R26 rv1535 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1527))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1529);
return rv1535; }
}
else if (((l_K_1528 == g_T_STR) || (l_K_1528 == g_T_BITS)))
{
{ R26 rv1536 = r_MKET((p_V).f_C, l_S_1529);
return rv1536; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1527));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1537; memset(&l_V_1537, 0, sizeof l_V_1537);
S_R26(&l_V_1537, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1538; memset(&l_T_1538, 0, sizeof l_T_1538);
l_T_1538 = r_REAL_TYPE((l_V_1537).f_T);
rt_int l_N_1539; memset(&l_N_1539, 0, sizeof l_N_1539);
l_N_1539 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1540; memset(&l_RND_1540, 0, sizeof l_RND_1540);
S_R10(&l_RND_1540, r_ROUNDING_ARG(p_E, l_N_1539), 0);
rt_int l_S_1541; memset(&l_S_1541, 0, sizeof l_S_1541);
l_S_1541 = ((rt_int)0LL);
if (((l_N_1539 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R23 l_SM_1542; memset(&l_SM_1542, 0, sizeof l_SM_1542);
S_R23(&l_SM_1542, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_1542).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_1541 = (l_SM_1542).f_V;
}
}
if ((l_N_1539 >= ((rt_int)3LL)))
{
{
R21 * l_R_1543; memset(&l_R_1543, 0, sizeof l_R_1543);
l_R_1543 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_1543)) && (!r_TEQS(((*(R21 *)rt_nil_check(l_R_1543))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_1543)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if (((((*(R22 *)rt_nil_check(l_T_1538))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1544 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1541), l_RND_1540), r_INT_TYPE(l_S_1541));
return rv1544; }
}
if ((((*(R22 *)rt_nil_check(l_T_1538))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1545; memset(&l_SAVED_1545, 0, sizeof l_SAVED_1545);
l_SAVED_1545 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1546; memset(&l_C_1546, 0, sizeof l_C_1546);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1540, rt_str("1", 1));
S_R10(&l_C_1546, r_RESCALE_C((l_V_1537).f_C, ((*(R22 *)rt_nil_check(l_T_1538))).f_SCALE, l_S_1541), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1545;
{ R26 rv1547 = r_MKET(l_C_1546, r_INT_TYPE(l_S_1541));
return rv1547; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1538))).f_KIND == g_T_FLOAT))
{
{ R26 rv1548 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1537).f_C, r_NUM(l_S_1541), l_RND_1540), r_INT_TYPE(l_S_1541));
return rv1548; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1538))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1538))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1538))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1538))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1538))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1538))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1549 = r_MKET(r_RESCALE_C((l_V_1537).f_C, ((rt_int)0LL), l_S_1541), r_INT_TYPE(l_S_1541));
return rv1549; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1538))).f_KIND == g_T_BITS))
{
{ R26 rv1550 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1537).f_C), ((rt_int)0LL), l_S_1541), r_INT_TYPE(l_S_1541));
return rv1550; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1538))).f_KIND == g_T_STR))
{
{ R26 rv1551 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1537).f_C, r_NUM(l_S_1541), l_RND_1540), r_INT_TYPE(l_S_1541));
return rv1551; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1537).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1552; memset(&l_T_1552, 0, sizeof l_T_1552);
l_T_1552 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1553; memset(&l_K_1553, 0, sizeof l_K_1553);
l_K_1553 = ((*(R22 *)rt_nil_check(l_T_1552))).f_KIND;
if ((l_K_1553 == g_T_BITS))
{
{ R26 rv1554 = p_V;
return rv1554; }
}
else if ((l_K_1553 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1552))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1552))).f_REPS))).f_B == NULL)))
{
{ R26 rv1555 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1552)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1552)));
return rv1555; }
}
}
{ R26 rv1556 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1552))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1552)));
return rv1556; }
}
else if ((l_K_1553 == g_T_STR))
{
{ R26 rv1557 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1557; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1553 == g_T_INT))
{
{ R26 rv1558 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1558; }
}
else if ((l_K_1553 == g_T_BOOL))
{
{ R26 rv1559 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1559; }
}
else if ((l_K_1553 == g_T_FLOAT))
{
{ R26 rv1560 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1560; }
}
else if ((l_K_1553 == g_T_STR))
{
{ R26 rv1561 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1561; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1552));
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
{ rt_int rv1562 = 0;
return rv1562; }
}
{ rt_int rv1563 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1563; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1564; memset(&l_N_1564, 0, sizeof l_N_1564);
l_N_1564 = ((rt_int)0LL);
R27 * l_P_1565; memset(&l_P_1565, 0, sizeof l_P_1565);
l_P_1565 = p_A;
for (;;) {
if ((l_P_1565 == NULL)) goto L_end1566;
{
l_N_1564 = rt_add(l_N_1564, ((rt_int)1LL));
l_P_1565 = ((*(R27 *)rt_nil_check(l_P_1565))).f_NEXT;
}
RT_B_TICK();
} L_end1566: ;
{ rt_int rv1567 = l_N_1564;
return rv1567; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1568; memset(&l_HEAD_1568, 0, sizeof l_HEAD_1568);
l_HEAD_1568 = NULL;
R27 * l_TAIL_1569; memset(&l_TAIL_1569, 0, sizeof l_TAIL_1569);
l_TAIL_1569 = NULL;
rt_int l_G_1570; memset(&l_G_1570, 0, sizeof l_G_1570);
l_G_1570 = ((rt_int)0LL);
{ rt_int it1572_lo = ((rt_int)0LL), it1572_hi = ((rt_int)2LL);
for (rt_int it1572 = it1572_lo; it1572 <= it1572_hi; it1572++) {
{
{
R21 * l_P_1573; memset(&l_P_1573, 0, sizeof l_P_1573);
l_P_1573 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1572 == ((rt_int)1LL)))
{
l_P_1573 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1572 == ((rt_int)2LL)))
{
l_P_1573 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1573 == NULL)) goto L_end1574;
{
{
R27 * l_A_1575; memset(&l_A_1575, 0, sizeof l_A_1575);
l_A_1575 = r_NODE_ARG(l_P_1573, it1572, NULL);
if ((l_TAIL_1569 == NULL))
{
l_HEAD_1568 = l_A_1575;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1569))).f_NEXT = l_A_1575;
}
l_TAIL_1569 = l_A_1575;
}
l_P_1573 = ((*(R21 *)rt_nil_check(l_P_1573))).f_NEXT;
}
RT_B_TICK();
} L_end1574: ;
}
}
RT_B_TICK();
if (it1572 == it1572_hi) break;
} } L_end1571: ;
{ R27 * rv1576 = l_HEAD_1568;
return rv1576; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1577; memset(&l_SAVED_1577, 0, sizeof l_SAVED_1577);
l_SAVED_1577 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1578; memset(&l_V_1578, 0, sizeof l_V_1578);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R26(&l_V_1578, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1577;
{ R26 rv1579 = l_V_1578;
return rv1579; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1580; memset(&l_ARGS_1580, 0, sizeof l_ARGS_1580);
l_ARGS_1580 = r_CALL_ARGS(p_E);
R12 * l_Y_1581; memset(&l_Y_1581, 0, sizeof l_Y_1581);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1582 = r_START_IO_CALL(p_E);
return rv1582; }
}
l_Y_1581 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1581 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1581))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1583 = r_BUILTIN(p_E, p_WANT);
return rv1583; }
}
{ R26 rv1584 = r_CALL_SYM(l_Y_1581, l_ARGS_1580, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1584; }
}
l_Y_1581 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1580, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1581 == NULL))
{
{
R12 * l_P_1585; memset(&l_P_1585, 0, sizeof l_P_1585);
l_P_1585 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1585 == NULL)) goto L_end1586;
{
if ((((*(R12 *)rt_nil_check(l_P_1585))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1587 = r_BUILTIN(p_E, p_WANT);
return rv1587; }
}
l_P_1585 = r_LOOKUP_NEXT(l_P_1585);
}
RT_B_TICK();
} L_end1586: ;
}
{
R12 * l_B_1588; memset(&l_B_1588, 0, sizeof l_B_1588);
l_B_1588 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1588 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1588))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1589 = r_BUILTIN(p_E, p_WANT);
return rv1589; }
}
if (((((*(R12 *)rt_nil_check(l_B_1588))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1588))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1590 = r_CALL_SYM(l_Y_1581, l_ARGS_1580, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1590; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1591; memset(&l_B_1591, 0, sizeof l_B_1591);
l_B_1591 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1592; memset(&l_S_1592, 0, sizeof l_S_1592);
l_S_1592 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1592, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1594_lo = ((rt_int)1LL), it1594_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1594 = it1594_lo; it1594 <= it1594_hi; it1594++) {
{
if (rt_b_eq(rt_b_slice(l_S_1592, it1594, it1594), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1592, ((rt_int)0LL), rt_sub(it1594, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1595 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1592, rt_add(it1594, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1595; }
}
goto L_end1593;
}
}
RT_B_TICK();
if (it1594 == it1594_hi) break;
} } L_end1593: ;
}
for (;;) {
if ((l_B_1591 == NULL)) goto L_end1596;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1591))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1591))).f_NAME, p_NAME)))
{
{ R12 * rv1597 = ((*(R20 *)rt_nil_check(l_B_1591))).f_R;
return rv1597; }
}
l_B_1591 = ((*(R20 *)rt_nil_check(l_B_1591))).f_NEXT;
}
RT_B_TICK();
} L_end1596: ;
{ R12 * rv1598 = NULL;
return rv1598; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1599 = 0;
return rv1599; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1600 = 0;
return rv1600; }
}
}
}
{ rt_int rv1601 = 1;
return rv1601; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1602; memset(&l_Y_1602, 0, sizeof l_Y_1602);
l_Y_1602 = r_LOOKUP(p_NAME);
R12 * l_BEST_1603; memset(&l_BEST_1603, 0, sizeof l_BEST_1603);
l_BEST_1603 = NULL;
rt_int l_BEST_SCORE_1604; memset(&l_BEST_SCORE_1604, 0, sizeof l_BEST_SCORE_1604);
l_BEST_SCORE_1604 = ((rt_int)0LL);
rt_int l_TIES_1605; memset(&l_TIES_1605, 0, sizeof l_TIES_1605);
l_TIES_1605 = ((rt_int)0LL);
rt_int l_COUNT_1606; memset(&l_COUNT_1606, 0, sizeof l_COUNT_1606);
l_COUNT_1606 = ((rt_int)0LL);
rt_int l_N_1607; memset(&l_N_1607, 0, sizeof l_N_1607);
l_N_1607 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1602 == NULL)) goto L_end1608;
{
if ((!r_IS_ROUTINE(l_Y_1602)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1602))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1608;
}
}
else if (r_CANDIDATE(l_Y_1602, p_NAME))
{
{
R12 * l_R_1609; memset(&l_R_1609, 0, sizeof l_R_1609);
l_R_1609 = r_ORIGINAL(l_Y_1602);
rt_int l_SCORE_1610; memset(&l_SCORE_1610, 0, sizeof l_SCORE_1610);
r_ROUTINE_HEADER(l_R_1609);
if (((r_PARAM_COUNT(l_R_1609) == l_N_1607) && (!r_SEEN_ROUTINE(l_R_1609, p_NAME, l_Y_1602))))
{
l_COUNT_1606 = rt_add(l_COUNT_1606, ((rt_int)1LL));
l_SCORE_1610 = r_MATCH_SCORE(l_R_1609, p_ARGS);
if ((l_SCORE_1610 > l_BEST_SCORE_1604))
{
l_BEST_1603 = l_R_1609;
l_BEST_SCORE_1604 = l_SCORE_1610;
l_TIES_1605 = ((rt_int)0LL);
}
else if (((l_SCORE_1610 == l_BEST_SCORE_1604) && (l_SCORE_1610 > ((rt_int)0LL))))
{
l_TIES_1605 = rt_add(l_TIES_1605, ((rt_int)1LL));
}
}
}
}
l_Y_1602 = r_LOOKUP_NEXT(l_Y_1602);
}
RT_B_TICK();
} L_end1608: ;
if (((l_TIES_1605 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1611 = l_BEST_1603;
return rv1611; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1612; memset(&l_Y_1612, 0, sizeof l_Y_1612);
l_Y_1612 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1612 == p_STOP) || (l_Y_1612 == NULL))) goto L_end1613;
{
if ((((*(R12 *)rt_nil_check(l_Y_1612))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1612) == p_R))
{
{ rt_int rv1614 = 1;
return rv1614; }
}
}
l_Y_1612 = r_LOOKUP_NEXT(l_Y_1612);
}
RT_B_TICK();
} L_end1613: ;
{ rt_int rv1615 = 0;
return rv1615; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_1616; memset(&l_N_1616, 0, sizeof l_N_1616);
l_N_1616 = ((rt_int)0LL);
R28 * l_P_1617; memset(&l_P_1617, 0, sizeof l_P_1617);
l_P_1617 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1617 == NULL)) goto L_end1618;
{
l_N_1616 = rt_add(l_N_1616, ((rt_int)1LL));
l_P_1617 = ((*(R28 *)rt_nil_check(l_P_1617))).f_NEXT;
}
RT_B_TICK();
} L_end1618: ;
{ rt_int rv1619 = l_N_1616;
return rv1619; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_1620; memset(&l_P_1620, 0, sizeof l_P_1620);
l_P_1620 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1621; memset(&l_A_1621, 0, sizeof l_A_1621);
l_A_1621 = p_ARGS;
rt_int l_EXACT_1622; memset(&l_EXACT_1622, 0, sizeof l_EXACT_1622);
l_EXACT_1622 = 1;
R20 * l_BS_1623; memset(&l_BS_1623, 0, sizeof l_BS_1623);
l_BS_1623 = r_NEW_BINDS();
for (;;) {
if ((l_P_1620 == NULL)) goto L_end1624;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1620))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1621))).f_MODE)))
{
{ rt_int rv1625 = ((rt_int)0LL);
return rv1625; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1620))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1620, l_A_1621, l_BS_1623)))
{
{ rt_int rv1626 = ((rt_int)0LL);
return rv1626; }
}
}
else if ((((*(R28 *)rt_nil_check(l_P_1620))).f_T == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1621))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_1621))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv1627 = ((rt_int)0LL);
return rv1627; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_1621))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1621))).f_E, ((*(R28 *)rt_nil_check(l_P_1620))).f_T)))
{
{ rt_int rv1628 = ((rt_int)0LL);
return rv1628; }
}
}
else
{
r_TYPE_ARG(l_A_1621);
{
R22 * l_AT_1629; memset(&l_AT_1629, 0, sizeof l_AT_1629);
l_AT_1629 = (((*(R27 *)rt_nil_check(l_A_1621))).f_V).f_T;
if ((!((r_SAME_CLASS(((*(R28 *)rt_nil_check(l_P_1620))).f_T, l_AT_1629) || (((((*(R22 *)rt_nil_check(l_AT_1629))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1620))).f_T)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1630 = ((rt_int)0LL);
return rv1630; }
}
if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1620))).f_T, l_AT_1629)))
{
if ((((*(R28 *)rt_nil_check(l_P_1620))).f_MODE == g_M_INOUT))
{
{ rt_int rv1631 = ((rt_int)0LL);
return rv1631; }
}
l_EXACT_1622 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1629)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1620))).f_T)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_1620))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_1629))).f_SCALE > ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1620))).f_T))).f_SCALE)))
{
{ rt_int rv1632 = ((rt_int)0LL);
return rv1632; }
}
else if (((((*(R28 *)rt_nil_check(l_P_1620))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1620))).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_1629))).f_SCALE)))
{
{ rt_int rv1633 = ((rt_int)0LL);
return rv1633; }
}
}
}
}
l_P_1620 = ((*(R28 *)rt_nil_check(l_P_1620))).f_NEXT;
l_A_1621 = ((*(R27 *)rt_nil_check(l_A_1621))).f_NEXT;
}
RT_B_TICK();
} L_end1624: ;
if (l_EXACT_1622)
{
{ rt_int rv1634 = ((rt_int)2LL);
return rv1634; }
}
{ rt_int rv1635 = ((rt_int)1LL);
return rv1635; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1636; memset(&l_RT_1636, 0, sizeof l_RT_1636);
l_RT_1636 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1636))).f_KIND == g_T_ENUM))
{
{ rt_int rv1637 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1636) == NULL));
return rv1637; }
}
{ rt_int rv1638 = 0;
return rv1638; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1639 = (((*(R22 *)rt_nil_check(l_RT_1636))).f_KIND == g_T_PTR);
return rv1639; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1640 = (((*(R22 *)rt_nil_check(l_RT_1636))).f_KIND == g_T_REC);
return rv1640; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1641 = (((*(R22 *)rt_nil_check(l_RT_1636))).f_KIND == g_T_ARR);
return rv1641; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1642 = (((*(R22 *)rt_nil_check(l_RT_1636))).f_KIND == g_T_INT);
return rv1642; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1643 = ((((*(R22 *)rt_nil_check(l_RT_1636))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1636))).f_KIND == g_T_SEM));
return rv1643; }
}
{ rt_int rv1644 = 0;
return rv1644; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1645; memset(&l_Y_1645, 0, sizeof l_Y_1645);
l_Y_1645 = r_ORIGINAL(p_Y0);
R28 * l_P_1646; memset(&l_P_1646, 0, sizeof l_P_1646);
R27 * l_A_1647; memset(&l_A_1647, 0, sizeof l_A_1647);
l_A_1647 = p_ARGS;
R10 l_C_1648; memset(&l_C_1648, 0, sizeof l_C_1648);
S_R10(&l_C_1648, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1649; memset(&l_SEP_1649, 0, sizeof l_SEP_1649);
S_R10(&l_SEP_1649, r_MK(rt_str("", 0)), 0);
R10 l_PRE_1650; memset(&l_PRE_1650, 0, sizeof l_PRE_1650);
S_R10(&l_PRE_1650, r_MK(rt_str("", 0)), 0);
R10 l_POST_1651; memset(&l_POST_1651, 0, sizeof l_POST_1651);
S_R10(&l_POST_1651, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_1652; memset(&l_SHARED_1652, 0, sizeof l_SHARED_1652);
l_SHARED_1652 = 0;
if (((*(R12 *)rt_nil_check(l_Y_1645))).f_GENERIC)
{
l_Y_1645 = r_INSTANCE(l_Y_1645, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1645, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1645))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1648, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1645))).f_LEVEL), 0);
S_R10(&l_SEP_1649, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_1653; memset(&l_Q_1653, 0, sizeof l_Q_1653);
l_Q_1653 = p_ARGS;
for (;;) {
if ((l_Q_1653 == NULL)) goto L_end1654;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_1653))).f_MODE == g_M_IN)))
{
l_SHARED_1652 = 1;
}
l_Q_1653 = ((*(R27 *)rt_nil_check(l_Q_1653))).f_NEXT;
}
RT_B_TICK();
} L_end1654: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_1645))).f_USES == NULL)))
{
l_SHARED_1652 = 1;
}
}
l_P_1646 = ((*(R12 *)rt_nil_check(l_Y_1645))).f_PARAMS;
for (;;) {
if ((l_P_1646 == NULL)) goto L_end1655;
{
if ((l_A_1647 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
if ((((*(R28 *)rt_nil_check(l_P_1646))).f_T == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1646))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1646))).f_T)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1656; memset(&l_V_1656, 0, sizeof l_V_1656);
R10 l_CV_1657; memset(&l_CV_1657, 0, sizeof l_CV_1657);
if ((((*(R27 *)rt_nil_check(l_A_1647))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1647))))
{
S_R26(&l_V_1656, ((*(R27 *)rt_nil_check(l_A_1647))).f_V, 0);
}
else
{
S_R26(&l_V_1656, r_EXPR(((*(R27 *)rt_nil_check(l_A_1647))).f_E, ((*(R28 *)rt_nil_check(l_P_1646))).f_T), 0);
}
S_R10(&l_CV_1657, r_CONVERT(l_V_1656, ((*(R28 *)rt_nil_check(l_P_1646))).f_T, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_1652 && (l_V_1656).f_LVAL) && r_IS_STRUCTURED(((*(R28 *)rt_nil_check(l_P_1646))).f_T)))
{
S_R10(&l_CV_1657, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_1646))).f_T, l_CV_1657), 0);
}
S_R10(&l_C_1648, r_FMT3(rt_str("@@@", 3), l_C_1648, l_SEP_1649, l_CV_1657), 0);
S_R10(&l_SEP_1649, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1658; memset(&l_V_1658, 0, sizeof l_V_1658);
if (((*(R27 *)rt_nil_check(l_A_1647))).f_HAVE)
{
S_R26(&l_V_1658, ((*(R27 *)rt_nil_check(l_A_1647))).f_V, 0);
}
else
{
S_R26(&l_V_1658, r_EXPR(((*(R27 *)rt_nil_check(l_A_1647))).f_E, ((*(R28 *)rt_nil_check(l_P_1646))).f_T), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1647))).f_E == NULL)) && (!(l_V_1658).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1647))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1647))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1658, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1658).f_C), (l_V_1658).f_T), 0);
(l_V_1658).f_LVAL = 1;
}
}
if ((!(l_V_1658).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(l_P_1646))).f_T, (l_V_1658).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(((*(R28 *)rt_nil_check(l_P_1646))).f_T));
}
if (((((*(R28 *)rt_nil_check(l_P_1646))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1646))).f_T, (l_V_1658).f_T) && r_SAME_RANGE(((*(R28 *)rt_nil_check(l_P_1646))).f_T, (l_V_1658).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_1646))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1646))).f_T, (l_V_1658).f_T) && r_SAME_RANGE(((*(R28 *)rt_nil_check(l_P_1646))).f_T, (l_V_1658).f_T))))))
{
{
R10 l_TMP_1659; memset(&l_TMP_1659, 0, sizeof l_TMP_1659);
S_R10(&l_TMP_1659, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_1660; memset(&l_AP_1660, 0, sizeof l_AP_1660);
S_R10(&l_AP_1660, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_1650, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_1650, r_CTYPE((l_V_1658).f_T), l_AP_1660, (l_V_1658).f_C), 0);
S_R10(&l_PRE_1650, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_1650, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1646))).f_T), l_TMP_1659, r_COPY_OF((l_V_1658).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1660))), 0);
S_R10(&l_POST_1651, r_FMT2(rt_str("@ @", 3), l_POST_1651, r_STORE_CODE((l_V_1658).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1660), r_MKET(l_TMP_1659, ((*(R28 *)rt_nil_check(l_P_1646))).f_T), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_1648, r_FMT3(rt_str("@@&@", 4), l_C_1648, l_SEP_1649, l_TMP_1659), 0);
}
}
else
{
S_R10(&l_C_1648, r_FMT3(rt_str("@@&@", 4), l_C_1648, l_SEP_1649, (l_V_1658).f_C), 0);
}
S_R10(&l_SEP_1649, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1647 = ((*(R27 *)rt_nil_check(l_A_1647))).f_NEXT;
l_P_1646 = ((*(R28 *)rt_nil_check(l_P_1646))).f_NEXT;
}
RT_B_TICK();
} L_end1655: ;
if ((!(l_A_1647 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_1650).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1661 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_1650, ((*(R12 *)rt_nil_check(l_Y_1645))).f_ACCESS, l_C_1648, l_POST_1651), ((*(R12 *)rt_nil_check(l_Y_1645))).f_RESULT);
return rv1661; }
}
{ R26 rv1662 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1645))).f_ACCESS, l_C_1648), ((*(R12 *)rt_nil_check(l_Y_1645))).f_RESULT);
return rv1662; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1663; memset(&l_K_1663, 0, sizeof l_K_1663);
l_K_1663 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv1664 = ((((l_K_1663 == g_T_STR) || (l_K_1663 == g_T_BITS)) || (l_K_1663 == g_T_ARR)) || (l_K_1663 == g_T_REC));
return rv1664; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1665; memset(&l_RA_1665, 0, sizeof l_RA_1665);
l_RA_1665 = r_REAL_TYPE(p_A);
R22 * l_RB_1666; memset(&l_RB_1666, 0, sizeof l_RB_1666);
l_RB_1666 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_1665)))
{
{ rt_int rv1667 = 1;
return rv1667; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1665))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1665))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1666))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1666))).f_HI_C)))
{
{ rt_int rv1668 = 1;
return rv1668; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_1665))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_1666))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv1669 = ((((*(R22 *)rt_nil_check(l_RA_1665))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_1666))).f_LO_C).f_LEN);
return rv1669; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_1665))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_1666))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_1665))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_1666))).f_MHI).f_OK))
{
{ rt_int rv1670 = (((((*(R22 *)rt_nil_check(l_RA_1665))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_1666))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_1665))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_1666))).f_MHI).f_V));
return rv1670; }
}
{ rt_int rv1671 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_1665))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_1666))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_1665))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_1666))).f_HI_C));
return rv1671; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv1672 = 0;
return rv1672; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1673 = 1;
return rv1673; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1674 = 1;
return rv1674; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1675 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1675; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1676 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1676; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1677 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1677; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1678 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1678; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1679 = 0;
return rv1679; }
}
{
R12 * l_Y_1680; memset(&l_Y_1680, 0, sizeof l_Y_1680);
l_Y_1680 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1681; memset(&l_A_1681, 0, sizeof l_A_1681);
l_A_1681 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1682; memset(&l_F_1682, 0, sizeof l_F_1682);
if ((l_Y_1680 == NULL))
{
{ rt_int rv1683 = 0;
return rv1683; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1680))).f_KIND == g_Y_GEN))
{
{ rt_int rv1684 = 1;
return rv1684; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1680))).f_DECL == NULL))
{
{ rt_int rv1685 = 0;
return rv1685; }
}
l_F_1682 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1680))).f_DECL))).f_A;
for (;;) {
if ((l_F_1682 == NULL)) goto L_end1686;
{
{
R21 * l_N_1687; memset(&l_N_1687, 0, sizeof l_N_1687);
l_N_1687 = ((*(R21 *)rt_nil_check(l_F_1682))).f_A;
for (;;) {
if ((l_N_1687 == NULL)) goto L_end1688;
{
if ((l_A_1681 == NULL))
{
{ rt_int rv1689 = 0;
return rv1689; }
}
if (((((*(R21 *)rt_nil_check(l_F_1682))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_1681))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_1681))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1681)))))
{
{ rt_int rv1690 = 1;
return rv1690; }
}
l_A_1681 = ((*(R21 *)rt_nil_check(l_A_1681))).f_NEXT;
l_N_1687 = ((*(R21 *)rt_nil_check(l_N_1687))).f_NEXT;
}
RT_B_TICK();
} L_end1688: ;
}
l_F_1682 = ((*(R21 *)rt_nil_check(l_F_1682))).f_NEXT;
}
RT_B_TICK();
} L_end1686: ;
}
}
{ rt_int rv1691 = 0;
return rv1691; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_1692; memset(&l_P_1692, 0, sizeof l_P_1692);
l_P_1692 = p_A;
for (;;) {
if ((l_P_1692 == NULL)) goto L_end1693;
{
if (((((*(R21 *)rt_nil_check(l_P_1692))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_1692))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1694 = 1;
return rv1694; }
}
l_P_1692 = ((*(R21 *)rt_nil_check(l_P_1692))).f_NEXT;
}
RT_B_TICK();
} L_end1693: ;
{ rt_int rv1695 = 0;
return rv1695; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1696; memset(&l_R_1696, 0, sizeof l_R_1696);
l_R_1696 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_1697; memset(&l_P_1697, 0, sizeof l_P_1697);
R28 * l_TAIL_1698; memset(&l_TAIL_1698, 0, sizeof l_TAIL_1698);
l_TAIL_1698 = NULL;
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1697 = ((*(R21 *)rt_nil_check(l_R_1696))).f_A;
for (;;) {
if ((l_P_1697 == NULL)) goto L_end1699;
{
if (((((*(R21 *)rt_nil_check(l_P_1697))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_1697))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1697 = ((*(R21 *)rt_nil_check(l_P_1697))).f_NEXT;
}
RT_B_TICK();
} L_end1699: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_1696))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1697 = ((*(R21 *)rt_nil_check(l_R_1696))).f_A;
for (;;) {
if ((l_P_1697 == NULL)) goto L_end1700;
{
{
R28 * l_PM_1701; memset(&l_PM_1701, 0, sizeof l_PM_1701);
l_PM_1701 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1701)), ({ R28 rc1702; memset(&rc1702, 0, sizeof rc1702);  S_R10(&rc1702.f_NAME, ((*(R21 *)rt_nil_check(l_P_1697))).f_NAME, 0); rc1702.f_MODE = ((*(R21 *)rt_nil_check(l_P_1697))).f_IV; rc1702.f_T = NULL; rc1702.f_TS = ((*(R21 *)rt_nil_check(l_P_1697))).f_B; rc1702.f_NEXT = NULL; rc1702; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_1696))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_1697))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1697))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_1701))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1697))).f_B);
}
if ((l_TAIL_1698 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1701;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1698))).f_NEXT = l_PM_1701;
}
l_TAIL_1698 = l_PM_1701;
}
l_P_1697 = ((*(R21 *)rt_nil_check(l_P_1697))).f_NEXT;
}
RT_B_TICK();
} L_end1700: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1703; memset(&l_R_1703, 0, sizeof l_R_1703);
l_R_1703 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_1704; memset(&l_T_1704, 0, sizeof l_T_1704);
if ((((*(R21 *)rt_nil_check(l_R_1703))).f_B == NULL))
{
{ R22 * rv1705 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1705; }
}
r_OPEN_SCOPE();
{
R28 * l_P_1706; memset(&l_P_1706, 0, sizeof l_P_1706);
l_P_1706 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1706 == NULL)) goto L_end1707;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1706))).f_T == NULL)))
{
{
R12 * l_V_1708; memset(&l_V_1708, 0, sizeof l_V_1708);
l_V_1708 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_1706))).f_NAME);
((*(R12 *)rt_nil_check(l_V_1708))).f_T = ((*(R28 *)rt_nil_check(l_P_1706))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_1708))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_1706))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_V_1708))).f_INPUT = 1;
r_DEFINE(l_V_1708, ((*(R21 *)rt_nil_check(l_R_1703))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_1706))).f_T, ((*(R12 *)rt_nil_check(l_V_1708))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_1703))).f_LINE, 0);
}
}
l_P_1706 = ((*(R28 *)rt_nil_check(l_P_1706))).f_NEXT;
}
RT_B_TICK();
} L_end1707: ;
}
l_T_1704 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_1703))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv1709 = l_T_1704;
return rv1709; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_1710; memset(&l_PS_1710, 0, sizeof l_PS_1710);
S_R10(&l_PS_1710, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1711; memset(&l_SEP_1711, 0, sizeof l_SEP_1711);
S_R10(&l_SEP_1711, r_MK(rt_str("", 0)), 0);
R28 * l_P_1712; memset(&l_P_1712, 0, sizeof l_P_1712);
l_P_1712 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_1710, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_1711, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_1712 == NULL)) goto L_end1713;
{
if ((((*(R28 *)rt_nil_check(l_P_1712))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1712))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1712))).f_MODE == g_M_IN))
{
S_R10(&l_PS_1710, r_FMT4(rt_str("@@@ p_@", 7), l_PS_1710, l_SEP_1711, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1712))).f_T), ((*(R28 *)rt_nil_check(l_P_1712))).f_NAME), 0);
S_R10(&l_SEP_1711, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_1710, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_1710, l_SEP_1711, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1712))).f_T), ((*(R28 *)rt_nil_check(l_P_1712))).f_NAME), 0);
S_R10(&l_SEP_1711, r_MK(rt_str(", ", 2)), 0);
}
l_P_1712 = ((*(R28 *)rt_nil_check(l_P_1712))).f_NEXT;
}
RT_B_TICK();
} L_end1713: ;
if (((l_PS_1710).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_1710, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv1714 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_1710);
return rv1714; }
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
R25 * l_B_1715; memset(&l_B_1715, 0, sizeof l_B_1715);
l_B_1715 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1716; memset(&l_I_1716, 0, sizeof l_I_1716);
l_I_1716 = ((rt_int)0LL);
for (;;) {
if ((l_B_1715 == NULL)) goto L_end1717;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1715))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1715))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_1716)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1715))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1715))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_1715))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1715))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_1716)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1715))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_1716), p_PC, r_NUM(l_I_1716)), ((*(R25 *)rt_nil_check(l_B_1715))).f_LO), p_LINE, p_CHECK);
}
}
l_I_1716 = rt_add(l_I_1716, ((rt_int)1LL));
l_B_1715 = ((*(R25 *)rt_nil_check(l_B_1715))).f_NEXT;
}
RT_B_TICK();
} L_end1717: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_1718; memset(&l_U_1718, 0, sizeof l_U_1718);
l_U_1718 = r_REAL_TYPE(p_T);
R24 * l_F_1719; memset(&l_F_1719, 0, sizeof l_F_1719);
l_F_1719 = ((*(R22 *)rt_nil_check(l_U_1718))).f_FIELDS;
R25 * l_A_1720; memset(&l_A_1720, 0, sizeof l_A_1720);
l_A_1720 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_1719 == NULL) || (l_A_1720 == NULL))) goto L_end1721;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1719))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_1720))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_1720))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_1719))).f_CNAME), p_LINE, p_CHECK);
}
l_A_1720 = ((*(R25 *)rt_nil_check(l_A_1720))).f_NEXT;
}
l_F_1719 = ((*(R24 *)rt_nil_check(l_F_1719))).f_NEXT;
}
RT_B_TICK();
} L_end1721: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1722 = 0;
return rv1722; }
}
{ rt_int rv1723 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1723; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv1724 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv1724; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_1725; memset(&l_OLD_1725, 0, sizeof l_OLD_1725);
l_OLD_1725 = r_LOOKUP(p_NAME);
if ((!(l_OLD_1725 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_1725))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_1725))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_1725))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_1726; memset(&l_G_1726, 0, sizeof l_G_1726);
l_G_1726 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_1726))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_1726))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_1726))).f_INPUT = 1;
r_DEFINE(l_G_1726, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_1727; memset(&l_B_1727, 0, sizeof l_B_1727);
l_B_1727 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1727)), ({ R20 rc1728; memset(&rc1728, 0, sizeof rc1728);  S_R10(&rc1728.f_NAME, r_NO_TEXT(), 0); rc1728.f_T = NULL; S_R10(&rc1728.f_C, r_NO_TEXT(), 0); rc1728.f_HASMV = 0; rc1728.f_MV = ((rt_int)0LL); rc1728.f_R = NULL; rc1728.f_NEXT = NULL; rc1728; }), 0);
{ R20 * rv1729 = l_B_1727;
return rv1729; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_1730; memset(&l_B_1730, 0, sizeof l_B_1730);
l_B_1730 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1730)), ({ R20 rc1731; memset(&rc1731, 0, sizeof rc1731);  S_R10(&rc1731.f_NAME, p_NAME, 0); rc1731.f_T = p_T; S_R10(&rc1731.f_C, r_NO_TEXT(), 0); rc1731.f_HASMV = (p_M).f_OK; rc1731.f_MV = (p_M).f_V; rc1731.f_R = p_R; rc1731.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc1731; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_1730))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_1730;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1732; memset(&l_B_1732, 0, sizeof l_B_1732);
l_B_1732 = p_BS;
for (;;) {
if ((l_B_1732 == NULL)) goto L_end1733;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_1732))).f_NAME, p_NAME))
{
{ R20 * rv1734 = l_B_1732;
return rv1734; }
}
l_B_1732 = ((*(R20 *)rt_nil_check(l_B_1732))).f_NEXT;
}
RT_B_TICK();
} L_end1733: ;
{ R20 * rv1735 = NULL;
return rv1735; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_1736; memset(&l_RT_1736, 0, sizeof l_RT_1736);
l_RT_1736 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv1737 = 1;
return rv1737; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv1738 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv1738; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1739 = 1;
return rv1739; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1740 = 1;
return rv1740; }
}
{
R20 * l_B_1741; memset(&l_B_1741, 0, sizeof l_B_1741);
l_B_1741 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_1741 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_1741))).f_T == NULL))
{
{ rt_int rv1742 = 0;
return rv1742; }
}
{ rt_int rv1743 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_1741))).f_T, p_T);
return rv1743; }
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
{ rt_int rv1744 = 1;
return rv1744; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_ARR)))
{
{ rt_int rv1745 = 0;
return rv1745; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_1736))).f_DIMS)))
{
{ rt_int rv1746 = 0;
return rv1746; }
}
{ rt_int rv1747 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_1736))).f_ELEM, p_BS);
return rv1747; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv1748 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1748; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1749 = 0;
return rv1749; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_1736))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_1736))).f_MHI, p_BS))))
{
{ rt_int rv1750 = 0;
return rv1750; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_INT)))
{
{ rt_int rv1751 = 0;
return rv1751; }
}
{ rt_int rv1752 = (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1736))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
return rv1752; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv1753 = ((((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_1736))).f_SCALE == ((rt_int)0LL)));
return rv1753; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1754 = 0;
return rv1754; }
}
{ rt_int rv1755 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1736))).f_SCALE), p_BS);
return rv1755; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv1756 = (((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_BOOL);
return rv1756; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv1757 = (((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_STR);
return rv1757; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_STR)))
{
{ rt_int rv1758 = 0;
return rv1758; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv1759 = 1;
return rv1759; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_1736))).f_BASE == NULL)))
{
{ rt_int rv1760 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_1736))).f_BASE, p_BS);
return rv1760; }
}
{ rt_int rv1761 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv1761; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv1762 = (((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_BITS);
return rv1762; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv1763 = (((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_SEM);
return rv1763; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_PTR)))
{
{ rt_int rv1764 = 0;
return rv1764; }
}
{ rt_int rv1765 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_1736), p_BS);
return rv1765; }
}
{
R12 * l_Y_1766; memset(&l_Y_1766, 0, sizeof l_Y_1766);
l_Y_1766 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_1766 == NULL))
{
{ rt_int rv1767 = 0;
return rv1767; }
}
if (((((*(R12 *)rt_nil_check(l_Y_1766))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_1766))).f_DECL == NULL)))
{
{ rt_int rv1768 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_1766))).f_T, p_T);
return rv1768; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1766))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv1769 = 0;
return rv1769; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_1766))))
{
{ rt_int rv1770 = 0;
return rv1770; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1766))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1736))).f_KIND == g_T_REC)))
{
{ rt_int rv1771 = 0;
return rv1771; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1736))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv1772 = 0;
return rv1772; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1736))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_1766))))
{
{ rt_int rv1773 = 0;
return rv1773; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv1774 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1774; }
}
{ rt_int rv1775 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1766))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1766))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_1736, p_BS);
return rv1775; }
}
{
R21 * l_F_1776; memset(&l_F_1776, 0, sizeof l_F_1776);
l_F_1776 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1766))).f_DECL))).f_A;
R21 * l_A_1777; memset(&l_A_1777, 0, sizeof l_A_1777);
l_A_1777 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_1778; memset(&l_V_1778, 0, sizeof l_V_1778);
l_V_1778 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_1779; memset(&l_CLASS_1779, 0, sizeof l_CLASS_1779);
l_CLASS_1779 = r_RECORD_CLASS_OF(l_RT_1736);
for (;;) {
if ((l_F_1776 == NULL)) goto L_end1780;
{
{
R21 * l_N_1781; memset(&l_N_1781, 0, sizeof l_N_1781);
l_N_1781 = ((*(R21 *)rt_nil_check(l_F_1776))).f_A;
for (;;) {
if ((l_N_1781 == NULL)) goto L_end1782;
{
if ((l_A_1777 == NULL))
{
{ rt_int rv1783 = 0;
return rv1783; }
}
if ((((*(R21 *)rt_nil_check(l_F_1776))).f_B == NULL))
{
if ((!(l_CLASS_1779 == NULL)))
{
{
R20 * l_B_1784; memset(&l_B_1784, 0, sizeof l_B_1784);
l_B_1784 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_1779))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_1781))).f_NAME);
if ((!(l_B_1784 == NULL)))
{
if ((!r_UNIFY(l_A_1777, ((*(R20 *)rt_nil_check(l_B_1784))).f_T, p_BS)))
{
{ rt_int rv1785 = 0;
return rv1785; }
}
}
}
}
}
else
{
if ((!(l_V_1778 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_1777))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_1777))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_1777))).f_KIND == g_N_ANY))))
{
{
R23 l_M_1786; memset(&l_M_1786, 0, sizeof l_M_1786);
S_R23(&l_M_1786, r_MANIFEST(l_A_1777), 0);
if (((l_M_1786).f_OK && (((*(R25 *)rt_nil_check(l_V_1778))).f_MLO).f_OK))
{
if ((!((l_M_1786).f_V == (((*(R25 *)rt_nil_check(l_V_1778))).f_MLO).f_V)))
{
{ rt_int rv1787 = 0;
return rv1787; }
}
}
}
}
l_V_1778 = ((*(R25 *)rt_nil_check(l_V_1778))).f_NEXT;
}
}
l_A_1777 = ((*(R21 *)rt_nil_check(l_A_1777))).f_NEXT;
l_N_1781 = ((*(R21 *)rt_nil_check(l_N_1781))).f_NEXT;
}
RT_B_TICK();
} L_end1782: ;
}
l_F_1776 = ((*(R21 *)rt_nil_check(l_F_1776))).f_NEXT;
}
RT_B_TICK();
} L_end1780: ;
}
{ rt_int rv1788 = 1;
return rv1788; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_1789; memset(&l_R_1789, 0, sizeof l_R_1789);
l_R_1789 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv1790 = NULL;
return rv1790; }
}
for (;;) {
if ((l_R_1789 == NULL)) goto L_end1791;
{
if ((((*(R12 *)rt_nil_check(l_R_1789))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv1792 = l_R_1789;
return rv1792; }
}
l_R_1789 = ((*(R12 *)rt_nil_check(l_R_1789))).f_INSTANCES;
}
RT_B_TICK();
} L_end1791: ;
{ R12 * rv1793 = NULL;
return rv1793; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv1794 = 1;
return rv1794; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1795 = 1;
return rv1795; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1796 = 1;
return rv1796; }
}
{
R20 * l_B_1797; memset(&l_B_1797, 0, sizeof l_B_1797);
l_B_1797 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_1797 == NULL)))
{
{ rt_int rv1798 = ((((*(R20 *)rt_nil_check(l_B_1797))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_1797))).f_MV == (p_M).f_V));
return rv1798; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv1799 = 0;
return rv1799; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv1800 = 1;
return rv1800; }
}
{
R23 l_V_1801; memset(&l_V_1801, 0, sizeof l_V_1801);
S_R23(&l_V_1801, r_MANIFEST(p_A), 0);
if (((l_V_1801).f_OK && (p_M).f_OK))
{
{ rt_int rv1802 = ((l_V_1801).f_V == (p_M).f_V);
return rv1802; }
}
}
{ rt_int rv1803 = 1;
return rv1803; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1804 = 0;
return rv1804; }
}
{ rt_int rv1805 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv1805; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv1806 = 1;
return rv1806; }
}
r_TYPE_ARG(p_A);
{ rt_int rv1807 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv1807; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_1808; memset(&l_BS_1808, 0, sizeof l_BS_1808);
l_BS_1808 = r_NEW_BINDS();
R28 * l_P_1809; memset(&l_P_1809, 0, sizeof l_P_1809);
l_P_1809 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_1810; memset(&l_A_1810, 0, sizeof l_A_1810);
l_A_1810 = p_ARGS;
for (;;) {
if ((l_P_1809 == NULL)) goto L_end1811;
{
if ((((*(R28 *)rt_nil_check(l_P_1809))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1810))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1809))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_1810))).f_E), r_NO_MVAL(), NULL, l_BS_1808);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1809))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1809))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_1809))).f_TS, ((*(R27 *)rt_nil_check(l_A_1810))).f_E, p_LINE), l_BS_1808);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_1810))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_1810))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_1809))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1810))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_1810))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_1810))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_1810))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_1810))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_1809))).f_TS, (((*(R27 *)rt_nil_check(l_A_1810))).f_V).f_T, l_BS_1808)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_1809))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1809))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_1809))).f_NAME, (((*(R28 *)rt_nil_check(l_P_1809))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_1810))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_1808);
}
}
l_P_1809 = ((*(R28 *)rt_nil_check(l_P_1809))).f_NEXT;
l_A_1810 = ((*(R27 *)rt_nil_check(l_A_1810))).f_NEXT;
}
RT_B_TICK();
} L_end1811: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_1808);
{
R12 * l_I_1812; memset(&l_I_1812, 0, sizeof l_I_1812);
l_I_1812 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_1812 == NULL)) goto L_end1813;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_1812))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_1808))).f_NEXT))
{
{ R12 * rv1814 = l_I_1812;
return rv1814; }
}
l_I_1812 = ((*(R12 *)rt_nil_check(l_I_1812))).f_INSTANCES;
}
RT_B_TICK();
} L_end1813: ;
}
{ R12 * rv1815 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_1808))).f_NEXT, p_ARGS);
return rv1815; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_1816; memset(&l_P_1816, 0, sizeof l_P_1816);
l_P_1816 = p_A;
for (;;) {
if ((l_P_1816 == NULL)) goto L_end1817;
{
{
R20 * l_Q_1818; memset(&l_Q_1818, 0, sizeof l_Q_1818);
l_Q_1818 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_1816))).f_NAME);
if ((l_Q_1818 == NULL))
{
{ rt_int rv1819 = 0;
return rv1819; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_1816))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_1818))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_1816))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_1818))).f_T == NULL)))
{
{ rt_int rv1820 = 0;
return rv1820; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1816))).f_T, ((*(R20 *)rt_nil_check(l_Q_1818))).f_T)))
{
{ rt_int rv1821 = 0;
return rv1821; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_1816))).f_T, ((*(R20 *)rt_nil_check(l_Q_1818))).f_T)))
{
{ rt_int rv1822 = 0;
return rv1822; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_1816))).f_T, ((*(R20 *)rt_nil_check(l_Q_1818))).f_T)))
{
{ rt_int rv1823 = 0;
return rv1823; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_1816))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_1818))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_1816))).f_MV == ((*(R20 *)rt_nil_check(l_Q_1818))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_1816))).f_R == ((*(R20 *)rt_nil_check(l_Q_1818))).f_R))))
{
{ rt_int rv1824 = 0;
return rv1824; }
}
}
l_P_1816 = ((*(R20 *)rt_nil_check(l_P_1816))).f_NEXT;
}
RT_B_TICK();
} L_end1817: ;
{ rt_int rv1825 = 1;
return rv1825; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1826; memset(&l_RA_1826, 0, sizeof l_RA_1826);
l_RA_1826 = r_REAL_TYPE(p_A);
R22 * l_RB_1827; memset(&l_RB_1827, 0, sizeof l_RB_1827);
l_RB_1827 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_1826))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_1826))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_1826))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_1827))).f_KIND))))
{
{ rt_int rv1828 = 1;
return rv1828; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1826))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1827))).f_MLEN).f_OK))
{
{ rt_int rv1829 = ((((*(R22 *)rt_nil_check(l_RA_1826))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1827))).f_MLEN).f_V);
return rv1829; }
}
{ rt_int rv1830 = ((((*(R22 *)rt_nil_check(l_RA_1826))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_1827))).f_MLEN).f_OK);
return rv1830; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_1831; memset(&l_RA_1831, 0, sizeof l_RA_1831);
l_RA_1831 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_1832; memset(&l_RB_1832, 0, sizeof l_RB_1832);
l_RB_1832 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_1831 == NULL) || (l_RB_1832 == NULL)))
{
{ rt_int rv1833 = (l_RA_1831 == l_RB_1832);
return rv1833; }
}
if ((l_RA_1831 == l_RB_1832))
{
{ rt_int rv1834 = 1;
return rv1834; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_1831))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_1832))).f_NAME)))
{
{ rt_int rv1835 = 0;
return rv1835; }
}
{
R21 * l_X_1836; memset(&l_X_1836, 0, sizeof l_X_1836);
l_X_1836 = ((*(R21 *)rt_nil_check(l_RA_1831))).f_A;
R21 * l_Y_1837; memset(&l_Y_1837, 0, sizeof l_Y_1837);
l_Y_1837 = ((*(R21 *)rt_nil_check(l_RB_1832))).f_A;
for (;;) {
if (((l_X_1836 == NULL) || (l_Y_1837 == NULL))) goto L_end1838;
{
if (((((((*(R21 *)rt_nil_check(l_X_1836))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_1836))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_1837))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_1837))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_1836))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_1837))).f_NAME)))
{
{ rt_int rv1839 = 0;
return rv1839; }
}
}
else
{
{
R23 l_MX_1840; memset(&l_MX_1840, 0, sizeof l_MX_1840);
S_R23(&l_MX_1840, r_MANIFEST(l_X_1836), 0);
R23 l_MY_1841; memset(&l_MY_1841, 0, sizeof l_MY_1841);
S_R23(&l_MY_1841, r_MANIFEST(l_Y_1837), 0);
if (((!((l_MX_1840).f_OK == (l_MY_1841).f_OK)) || (!((l_MX_1840).f_V == (l_MY_1841).f_V))))
{
{ rt_int rv1842 = 0;
return rv1842; }
}
}
}
l_X_1836 = ((*(R21 *)rt_nil_check(l_X_1836))).f_NEXT;
l_Y_1837 = ((*(R21 *)rt_nil_check(l_Y_1837))).f_NEXT;
}
RT_B_TICK();
} L_end1838: ;
{ rt_int rv1843 = ((((l_X_1836 == NULL) && (l_Y_1837 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_1831))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_1832))).f_B == NULL));
return rv1843; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1844; memset(&l_Y_1844, 0, sizeof l_Y_1844);
l_Y_1844 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_1845; memset(&l_FOUND_1845, 0, sizeof l_FOUND_1845);
l_FOUND_1845 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_1844 == NULL)) goto L_end1846;
{
if ((((*(R12 *)rt_nil_check(l_Y_1844))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_1847; memset(&l_R_1847, 0, sizeof l_R_1847);
l_R_1847 = r_ORIGINAL(l_Y_1844);
r_ROUTINE_HEADER(l_R_1847);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_1847)) && (!((*(R12 *)rt_nil_check(l_R_1847))).f_GENERIC)))
{
if (((!(l_FOUND_1845 == NULL)) && (!(l_FOUND_1845 == l_R_1847))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_1845 = l_R_1847;
}
}
}
l_Y_1844 = r_LOOKUP_NEXT(l_Y_1844);
}
RT_B_TICK();
} L_end1846: ;
if ((l_FOUND_1845 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_1845))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv1848 = l_FOUND_1845;
return rv1848; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_1849; memset(&l_NEEDL_1849, 0, sizeof l_NEEDL_1849);
l_NEEDL_1849 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_1850; memset(&l_SAVED_1850, 0, sizeof l_SAVED_1850);
l_SAVED_1850 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_1849 == NULL)) goto L_end1851;
{
{
R21 * l_T_1852; memset(&l_T_1852, 0, sizeof l_T_1852);
l_T_1852 = ((*(R21 *)rt_nil_check(l_NEEDL_1849))).f_A;
for (;;) {
if ((l_T_1852 == NULL)) goto L_end1853;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_1852))).f_NAME) == NULL))
{
{
R27 * l_ARGS_1854; memset(&l_ARGS_1854, 0, sizeof l_ARGS_1854);
l_ARGS_1854 = NULL;
R27 * l_TAIL_1855; memset(&l_TAIL_1855, 0, sizeof l_TAIL_1855);
l_TAIL_1855 = NULL;
R21 * l_P_1856; memset(&l_P_1856, 0, sizeof l_P_1856);
l_P_1856 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_1852))).f_B))).f_A;
R12 * l_R_1857; memset(&l_R_1857, 0, sizeof l_R_1857);
rt_int l_ENTERED_1858; memset(&l_ENTERED_1858, 0, sizeof l_ENTERED_1858);
l_ENTERED_1858 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_1856 == NULL)) goto L_end1859;
{
{
R27 * l_A_1860; memset(&l_A_1860, 0, sizeof l_A_1860);
if ((((*(R21 *)rt_nil_check(l_P_1856))).f_B == NULL))
{
l_A_1860 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_1860 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1856))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_1860))).f_MODE = ((*(R21 *)rt_nil_check(l_P_1856))).f_IV;
if ((l_TAIL_1855 == NULL))
{
l_ARGS_1854 = l_A_1860;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1855))).f_NEXT = l_A_1860;
}
l_TAIL_1855 = l_A_1860;
}
l_P_1856 = ((*(R21 *)rt_nil_check(l_P_1856))).f_NEXT;
}
RT_B_TICK();
} L_end1859: ;
if (l_ENTERED_1858)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_1857 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_1852))).f_NAME, l_ARGS_1854, p_LINE, 0);
if ((l_R_1857 == NULL))
{
l_R_1857 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_1852))).f_NAME);
for (;;) {
if ((l_R_1857 == NULL)) goto L_end1861;
{
if ((((*(R12 *)rt_nil_check(l_R_1857))).f_KIND == g_Y_BUILTIN))
{
goto L_end1861;
}
l_R_1857 = r_LOOKUP_NEXT(l_R_1857);
}
RT_B_TICK();
} L_end1861: ;
}
if (((l_R_1857 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_1852))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_1852))).f_NAME);
}
if ((!(l_R_1857 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_1852))).f_NAME, NULL, r_NO_MVAL(), l_R_1857, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_1852 = ((*(R21 *)rt_nil_check(l_T_1852))).f_NEXT;
}
RT_B_TICK();
} L_end1853: ;
}
l_NEEDL_1849 = ((*(R21 *)rt_nil_check(l_NEEDL_1849))).f_NEXT;
}
RT_B_TICK();
} L_end1851: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1850;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1862 = 0;
return rv1862; }
}
{
R12 * l_Y_1863; memset(&l_Y_1863, 0, sizeof l_Y_1863);
l_Y_1863 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1864; memset(&l_A_1864, 0, sizeof l_A_1864);
l_A_1864 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1865; memset(&l_F_1865, 0, sizeof l_F_1865);
if ((l_Y_1863 == NULL))
{
{ rt_int rv1866 = 0;
return rv1866; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_1863))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_1863))).f_DECL == NULL)))
{
{ rt_int rv1867 = 0;
return rv1867; }
}
l_F_1865 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1863))).f_DECL))).f_A;
for (;;) {
if ((l_F_1865 == NULL)) goto L_end1868;
{
{
R21 * l_N_1869; memset(&l_N_1869, 0, sizeof l_N_1869);
l_N_1869 = ((*(R21 *)rt_nil_check(l_F_1865))).f_A;
for (;;) {
if ((l_N_1869 == NULL)) goto L_end1870;
{
if ((l_A_1864 == NULL))
{
{ rt_int rv1871 = 0;
return rv1871; }
}
if (((((*(R21 *)rt_nil_check(l_F_1865))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_1864))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1872 = 1;
return rv1872; }
}
l_A_1864 = ((*(R21 *)rt_nil_check(l_A_1864))).f_NEXT;
l_N_1869 = ((*(R21 *)rt_nil_check(l_N_1869))).f_NEXT;
}
RT_B_TICK();
} L_end1870: ;
}
l_F_1865 = ((*(R21 *)rt_nil_check(l_F_1865))).f_NEXT;
}
RT_B_TICK();
} L_end1868: ;
}
{ rt_int rv1873 = 0;
return rv1873; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_1874; memset(&l_A_1874, 0, sizeof l_A_1874);
l_A_1874 = p_ARGS;
R12 * l_I_1875; memset(&l_I_1875, 0, sizeof l_I_1875);
l_I_1875 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_1876; memset(&l_SAVED_1876, 0, sizeof l_SAVED_1876);
l_SAVED_1876 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_1877; memset(&l_P_1877, 0, sizeof l_P_1877);
l_P_1877 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_1878; memset(&l_TAIL_1878, 0, sizeof l_TAIL_1878);
l_TAIL_1878 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_1875)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_1875))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_1875))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_1875))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_1875))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_1875))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_1875;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_1877 == NULL)) goto L_end1879;
{
{
R28 * l_PM_1880; memset(&l_PM_1880, 0, sizeof l_PM_1880);
l_PM_1880 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1880)), (*(R28 *)rt_nil_check(l_P_1877)), 0);
((*(R28 *)rt_nil_check(l_PM_1880))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_1877))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_1880))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1877))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_1880))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1877))).f_TS) && ((*(R27 *)rt_nil_check(l_A_1874))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_1880))).f_T = (((*(R27 *)rt_nil_check(l_A_1874))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1880))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1880))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_1880))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1880))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_1880))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_1877))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_1880))).f_TS = NULL;
if ((l_TAIL_1878 == NULL))
{
((*(R12 *)rt_nil_check(l_I_1875))).f_PARAMS = l_PM_1880;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1878))).f_NEXT = l_PM_1880;
}
l_TAIL_1878 = l_PM_1880;
}
l_P_1877 = ((*(R28 *)rt_nil_check(l_P_1877))).f_NEXT;
l_A_1874 = ((*(R27 *)rt_nil_check(l_A_1874))).f_NEXT;
}
RT_B_TICK();
} L_end1879: ;
((*(R12 *)rt_nil_check(l_I_1875))).f_RESULT = r_RESULT_TYPE(l_I_1875);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1876;
S_R10(&((*(R12 *)rt_nil_check(l_I_1875))).f_FWD, r_C_HEADER(l_I_1875), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_1875))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_1875))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_1875;
{ R12 * rv1881 = l_I_1875;
return rv1881; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1882 = 0;
return rv1882; }
}
{ rt_int rv1883 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv1883; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_1884; memset(&l_C_1884, 0, sizeof l_C_1884);
if ((p_TS == NULL))
{
{ R21 * rv1885 = NULL;
return rv1885; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_1886; memset(&l_F_1886, 0, sizeof l_F_1886);
l_F_1886 = p_FORMALS;
R21 * l_A_1887; memset(&l_A_1887, 0, sizeof l_A_1887);
l_A_1887 = p_ARGS;
for (;;) {
if ((l_F_1886 == NULL)) goto L_end1888;
{
{
R21 * l_N_1889; memset(&l_N_1889, 0, sizeof l_N_1889);
l_N_1889 = ((*(R21 *)rt_nil_check(l_F_1886))).f_A;
for (;;) {
if ((l_N_1889 == NULL)) goto L_end1890;
{
if ((l_A_1887 == NULL))
{
{ R21 * rv1891 = p_TS;
return rv1891; }
}
if (((((*(R21 *)rt_nil_check(l_F_1886))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_1889))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv1892 = l_A_1887;
return rv1892; }
}
l_A_1887 = ((*(R21 *)rt_nil_check(l_A_1887))).f_NEXT;
l_N_1889 = ((*(R21 *)rt_nil_check(l_N_1889))).f_NEXT;
}
RT_B_TICK();
} L_end1890: ;
}
l_F_1886 = ((*(R21 *)rt_nil_check(l_F_1886))).f_NEXT;
}
RT_B_TICK();
} L_end1888: ;
}
{ R21 * rv1893 = p_TS;
return rv1893; }
}
l_C_1884 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_1884))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_1884))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv1894 = l_C_1884;
return rv1894; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_1895; memset(&l_C_1895, 0, sizeof l_C_1895);
l_C_1895 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_1895)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_1895))).f_NEXT = NULL;
{ R21 * rv1896 = l_C_1895;
return rv1896; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1897; memset(&l_P_1897, 0, sizeof l_P_1897);
l_P_1897 = p_L;
for (;;) {
if ((l_P_1897 == NULL)) goto L_end1898;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1897))).f_NAME, p_NAME))
{
{ rt_int rv1899 = 1;
return rv1899; }
}
l_P_1897 = ((*(R21 *)rt_nil_check(l_P_1897))).f_NEXT;
}
RT_B_TICK();
} L_end1898: ;
{ rt_int rv1900 = 0;
return rv1900; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_1901; memset(&l_IS_1901, 0, sizeof l_IS_1901);
l_IS_1901 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv1902 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1902; }
}
if ((l_IS_1901 == NULL))
{
{ rt_int rv1903 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1903; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_1901))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_1901))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv1904 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1904; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_1901))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1901))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1905 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1905; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1901))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1906 = 0;
return rv1906; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_1907; memset(&l_ITEMS_1907, 0, sizeof l_ITEMS_1907);
l_ITEMS_1907 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_1908; memset(&l_HEAD_1908, 0, sizeof l_HEAD_1908);
l_HEAD_1908 = NULL;
R21 * l_TAIL_1909; memset(&l_TAIL_1909, 0, sizeof l_TAIL_1909);
l_TAIL_1909 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_1907 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1907))).f_A, &l_HEAD_1908, &l_TAIL_1909);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1907))).f_B, &l_HEAD_1908, &l_TAIL_1909);
{
R21 * l_R_1910; memset(&l_R_1910, 0, sizeof l_R_1910);
l_R_1910 = ((*(R21 *)rt_nil_check(l_ITEMS_1907))).f_C;
for (;;) {
if ((l_R_1910 == NULL)) goto L_end1911;
{
{
R12 * l_Z_1912; memset(&l_Z_1912, 0, sizeof l_Z_1912);
l_Z_1912 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_1910))).f_NAME);
if ((l_Z_1912 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_1910))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_1910))).f_NAME);
}
for (;;) {
if ((l_Z_1912 == NULL)) goto L_end1913;
{
if ((((*(R12 *)rt_nil_check(l_Z_1912))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_1914; memset(&l_O_1914, 0, sizeof l_O_1914);
l_O_1914 = r_ORIGINAL(l_Z_1912);
R21 * l_U_1915; memset(&l_U_1915, 0, sizeof l_U_1915);
r_COMPUTE_USES(l_O_1914);
l_U_1915 = ((*(R12 *)rt_nil_check(l_O_1914))).f_USES;
for (;;) {
if ((l_U_1915 == NULL)) goto L_end1916;
{
if ((!r_IN_IDENTS(l_HEAD_1908, ((*(R21 *)rt_nil_check(l_U_1915))).f_NAME)))
{
{
R21 * l_N_1917; memset(&l_N_1917, 0, sizeof l_N_1917);
l_N_1917 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_1915))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1917))).f_NAME, ((*(R21 *)rt_nil_check(l_U_1915))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1917))).f_IV = ((*(R21 *)rt_nil_check(l_U_1915))).f_IV;
r_ADD_LIST(l_N_1917, &l_HEAD_1908, &l_TAIL_1909);
}
}
l_U_1915 = ((*(R21 *)rt_nil_check(l_U_1915))).f_NEXT;
}
RT_B_TICK();
} L_end1916: ;
}
}
l_Z_1912 = r_LOOKUP_NEXT(l_Z_1912);
}
RT_B_TICK();
} L_end1913: ;
}
l_R_1910 = ((*(R21 *)rt_nil_check(l_R_1910))).f_NEXT;
}
RT_B_TICK();
} L_end1911: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_1908;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_1918; memset(&l_R_1918, 0, sizeof l_R_1918);
l_R_1918 = p_RS;
for (;;) {
if ((l_R_1918 == NULL)) goto L_end1919;
{
if ((((*(R21 *)rt_nil_check(l_R_1918))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_1918));
}
l_R_1918 = ((*(R21 *)rt_nil_check(l_R_1918))).f_NEXT;
}
RT_B_TICK();
} L_end1919: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_1920; memset(&l_P_1920, 0, sizeof l_P_1920);
l_P_1920 = p_L;
for (;;) {
if ((l_P_1920 == NULL)) goto L_end1921;
{
{
R12 * l_V_1922; memset(&l_V_1922, 0, sizeof l_V_1922);
l_V_1922 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_1920))).f_NAME);
R21 * l_N_1923; memset(&l_N_1923, 0, sizeof l_N_1923);
l_N_1923 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_1920))).f_LINE);
if ((l_V_1922 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1920))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_1920))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_1923))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1920))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1923))).f_IV = ((*(R12 *)rt_nil_check(l_V_1922))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_1922))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_1923, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_1920 = ((*(R21 *)rt_nil_check(l_P_1920))).f_NEXT;
}
RT_B_TICK();
} L_end1921: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_1924; memset(&l_IS_1924, 0, sizeof l_IS_1924);
l_IS_1924 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_1925; memset(&l_U_1925, 0, sizeof l_U_1925);
l_U_1925 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_1924 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_1924))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_1925 == NULL)) goto L_end1926;
{
if ((!(((*(R21 *)rt_nil_check(l_U_1925))).f_IV == ((*(R19 *)rt_nil_check(l_IS_1924))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_1924))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_1925))).f_NAME, (((*(R21 *)rt_nil_check(l_U_1925))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1924))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_1925))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1924))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_1925))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1924))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1924))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1924))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1924))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_1925))).f_NAME)))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_1925))).f_NAME, (((*(R21 *)rt_nil_check(l_U_1925))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_1925 = ((*(R21 *)rt_nil_check(l_U_1925))).f_NEXT;
}
RT_B_TICK();
} L_end1926: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_1927; memset(&l_R_1927, 0, sizeof l_R_1927);
l_R_1927 = p_RS;
for (;;) {
if ((l_R_1927 == NULL)) goto L_end1928;
{
{
R12 * l_Z_1929; memset(&l_Z_1929, 0, sizeof l_Z_1929);
l_Z_1929 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_1927))).f_NAME);
for (;;) {
if ((l_Z_1929 == NULL)) goto L_end1930;
{
if ((((*(R12 *)rt_nil_check(l_Z_1929))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_1931; memset(&l_O_1931, 0, sizeof l_O_1931);
l_O_1931 = r_ORIGINAL(l_Z_1929);
r_COMPUTE_USES(l_O_1931);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_1931))).f_USES, p_NAME))
{
{ rt_int rv1932 = 1;
return rv1932; }
}
}
}
l_Z_1929 = r_LOOKUP_NEXT(l_Z_1929);
}
RT_B_TICK();
} L_end1930: ;
}
l_R_1927 = ((*(R21 *)rt_nil_check(l_R_1927))).f_NEXT;
}
RT_B_TICK();
} L_end1928: ;
{ rt_int rv1933 = 0;
return rv1933; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_1934; memset(&l_M_1934, 0, sizeof l_M_1934);
l_M_1934 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_1934 == NULL)) goto L_end1935;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_1934))).f_NAME))
{
{ rt_int rv1936 = 1;
return rv1936; }
}
l_M_1934 = ((*(R12 *)rt_nil_check(l_M_1934))).f_MODL;
}
RT_B_TICK();
} L_end1935: ;
{ rt_int rv1937 = 0;
return rv1937; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv1938 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv1938; }
}
{ R10 rv1939 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv1939; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_1940; memset(&l_C_1940, 0, sizeof l_C_1940);
l_C_1940 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1940 == NULL)) goto L_end1941;
{
if ((((*(R17 *)rt_nil_check(l_C_1940))).f_KIND == ((rt_int)1LL)))
{
goto L_end1941;
}
if ((((*(R17 *)rt_nil_check(l_C_1940))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_1942; memset(&l_H_1942, 0, sizeof l_H_1942);
l_H_1942 = ((*(R17 *)rt_nil_check(l_C_1940))).f_HANDLERS;
for (;;) {
if ((l_H_1942 == NULL)) goto L_end1943;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_1942))).f_A, p_NAME))
{
{ rt_int rv1944 = 1;
return rv1944; }
}
l_H_1942 = ((*(R21 *)rt_nil_check(l_H_1942))).f_NEXT;
}
RT_B_TICK();
} L_end1943: ;
}
}
l_C_1940 = ((*(R17 *)rt_nil_check(l_C_1940))).f_NEXT;
}
RT_B_TICK();
} L_end1941: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv1945 = 1;
return rv1945; }
}
}
{ rt_int rv1946 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv1946; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_1947; memset(&l_C_1947, 0, sizeof l_C_1947);
l_C_1947 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_1947)), ({ R17 rc1948; memset(&rc1948, 0, sizeof rc1948);  rc1948.f_KIND = p_KIND; S_R10(&rc1948.f_NAME, p_NAME, 0); rc1948.f_HANDLERS = NULL; rc1948.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc1948; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_1947;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_1949; memset(&l_C_1949, 0, sizeof l_C_1949);
l_C_1949 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1949 == NULL)) goto L_end1950;
{
if ((((*(R17 *)rt_nil_check(l_C_1949))).f_KIND == p_KIND))
{
{ R17 * rv1951 = l_C_1949;
return rv1951; }
}
if ((((*(R17 *)rt_nil_check(l_C_1949))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv1952 = NULL;
return rv1952; }
}
if ((((*(R17 *)rt_nil_check(l_C_1949))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_1949))).f_NAME));
}
l_C_1949 = ((*(R17 *)rt_nil_check(l_C_1949))).f_NEXT;
}
RT_B_TICK();
} L_end1950: ;
{ R17 * rv1953 = NULL;
return rv1953; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_1954; memset(&l_C_1954, 0, sizeof l_C_1954);
l_C_1954 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_1955; memset(&l_N_1955, 0, sizeof l_N_1955);
l_N_1955 = ((rt_int)0LL);
for (;;) {
if ((l_C_1954 == NULL)) goto L_end1956;
{
if ((((*(R17 *)rt_nil_check(l_C_1954))).f_KIND == ((rt_int)1LL)))
{
goto L_end1956;
}
if ((((*(R17 *)rt_nil_check(l_C_1954))).f_KIND == ((rt_int)3LL)))
{
l_N_1955 = rt_add(l_N_1955, ((rt_int)1LL));
}
l_C_1954 = ((*(R17 *)rt_nil_check(l_C_1954))).f_NEXT;
}
RT_B_TICK();
} L_end1956: ;
{ rt_int rv1957 = l_N_1955;
return rv1957; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_1958; memset(&l_N_1958, 0, sizeof l_N_1958);
l_N_1958 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_1958 == NULL)) goto L_end1959;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_1958))).f_NAME, p_NAME))
{
{ R10 rv1960 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1960; }
}
l_N_1958 = ((*(R21 *)rt_nil_check(l_N_1958))).f_NEXT;
}
RT_B_TICK();
} L_end1959: ;
l_N_1958 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_1958))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1958))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_1958;
{ R10 rv1961 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1961; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_1962; memset(&l_D_1962, 0, sizeof l_D_1962);
l_D_1962 = p_DECLS;
for (;;) {
if ((l_D_1962 == NULL)) goto L_end1963;
{
if (((((*(R21 *)rt_nil_check(l_D_1962))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_1962))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_1964; memset(&l_Y_1964, 0, sizeof l_Y_1964);
l_Y_1964 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_1962))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_1962))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_1964))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_1964))).f_DECL = l_D_1962;
r_DEFINE(l_Y_1964, ((*(R21 *)rt_nil_check(l_D_1962))).f_LINE);
}
}
l_D_1962 = ((*(R21 *)rt_nil_check(l_D_1962))).f_NEXT;
}
RT_B_TICK();
} L_end1963: ;
}
static void r_DECLARE_LABELS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_1965; memset(&l_S_1965, 0, sizeof l_S_1965);
l_S_1965 = p_S0;
for (;;) {
if ((l_S_1965 == NULL)) goto L_end1966;
{
{
R21 * l_L_1967; memset(&l_L_1967, 0, sizeof l_L_1967);
l_L_1967 = l_S_1965;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_1967))).f_KIND == g_N_LABELED))) goto L_end1968;
{
{
R12 * l_Y_1969; memset(&l_Y_1969, 0, sizeof l_Y_1969);
l_Y_1969 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_1967))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_1969))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(((*(R21 *)rt_nil_check(l_L_1967))).f_NAME, (((*(R21 *)rt_nil_check(l_L_1967))).f_NAME).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_1969))).f_MV = r_GUARDS();
r_DEFINE(l_Y_1969, ((*(R21 *)rt_nil_check(l_L_1967))).f_LINE);
}
l_L_1967 = ((*(R21 *)rt_nil_check(l_L_1967))).f_A;
}
RT_B_TICK();
} L_end1968: ;
}
l_S_1965 = ((*(R21 *)rt_nil_check(l_S_1965))).f_NEXT;
}
RT_B_TICK();
} L_end1966: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_1970; memset(&l_D_1970, 0, sizeof l_D_1970);
l_D_1970 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_1971; memset(&l_S_1971, 0, sizeof l_S_1971);
l_S_1971 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_1970 == NULL)) goto L_end1972;
{
if (((((*(R21 *)rt_nil_check(l_D_1970))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_1970))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1970);
}
l_D_1970 = ((*(R21 *)rt_nil_check(l_D_1970))).f_NEXT;
}
RT_B_TICK();
} L_end1972: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_1971 == NULL)) goto L_end1973;
{
r_STMT(l_S_1971);
l_S_1971 = ((*(R21 *)rt_nil_check(l_S_1971))).f_NEXT;
}
RT_B_TICK();
} L_end1973: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_1974; memset(&l_F_1974, 0, sizeof l_F_1974);
S_R10(&l_F_1974, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_1975; memset(&l_H_1975, 0, sizeof l_H_1975);
l_H_1975 = p_HANDLERS;
R10 l_WORD_1976; memset(&l_WORD_1976, 0, sizeof l_WORD_1976);
S_R10(&l_WORD_1976, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_1974, l_F_1974));
r_PUSH_CTX(((rt_int)3LL), l_F_1974);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_1974, l_F_1974, l_F_1974));
for (;;) {
if ((l_H_1975 == NULL)) goto L_end1977;
{
{
R21 * l_N_1978; memset(&l_N_1978, 0, sizeof l_N_1978);
l_N_1978 = ((*(R21 *)rt_nil_check(l_H_1975))).f_A;
R10 l_COND_1979; memset(&l_COND_1979, 0, sizeof l_COND_1979);
S_R10(&l_COND_1979, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_1978 == NULL)) goto L_end1980;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_1978))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_1978))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_1978))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_1978))).f_NAME);
}
S_R10(&l_COND_1979, r_FMT3(rt_str("@ || @x == @", 12), l_COND_1979, l_F_1974, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_1978))).f_NAME)), 0);
l_N_1978 = ((*(R21 *)rt_nil_check(l_N_1978))).f_NEXT;
}
RT_B_TICK();
} L_end1980: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1976, l_COND_1979));
S_R10(&l_WORD_1976, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_1974, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_1975))).f_B);
r_POP_CTX();
}
l_H_1975 = ((*(R21 *)rt_nil_check(l_H_1975))).f_NEXT;
}
RT_B_TICK();
} L_end1977: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_1974));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_1981; memset(&l_K_1981, 0, sizeof l_K_1981);
l_K_1981 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_1981 == g_N_NULL))
{
return;
}
else if ((l_K_1981 == g_N_LABELED))
{
{
R12 * l_Y_1982; memset(&l_Y_1982, 0, sizeof l_Y_1982);
l_Y_1982 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_1982))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_1981 == g_N_GOTO))
{
{
R12 * l_Y_1983; memset(&l_Y_1983, 0, sizeof l_Y_1983);
l_Y_1983 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_1984; memset(&l_N_1984, 0, sizeof l_N_1984);
R17 * l_C_1985; memset(&l_C_1985, 0, sizeof l_C_1985);
l_C_1985 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_1983 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1983))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1983))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_1984 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_1983))).f_MV);
for (;;) {
if ((l_N_1984 <= ((rt_int)0LL))) goto L_end1986;
{
if ((((*(R17 *)rt_nil_check(l_C_1985))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_1985))).f_NAME));
l_N_1984 = rt_sub(l_N_1984, ((rt_int)1LL));
}
l_C_1985 = ((*(R17 *)rt_nil_check(l_C_1985))).f_NEXT;
}
RT_B_TICK();
} L_end1986: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_1983))).f_ACCESS));
}
}
else if ((l_K_1981 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_1981 == g_N_CALL))
{
{
R26 l_V_1987; memset(&l_V_1987, 0, sizeof l_V_1987);
S_R26(&l_V_1987, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_1987).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_1987).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_1987).f_C, rt_str(";", 1)));
}
}
else if ((l_K_1981 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1981 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_1981 == g_N_LOOP))
{
{
R10 l_END_L_1988; memset(&l_END_L_1988, 0, sizeof l_END_L_1988);
S_R10(&l_END_L_1988, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_1988));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1988);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_1988));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_1988));
}
}
else if ((l_K_1981 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_1981 == g_N_EXIT))
{
{
R17 * l_C_1989; memset(&l_C_1989, 0, sizeof l_C_1989);
l_C_1989 = r_LEAVE(((rt_int)2LL));
if ((l_C_1989 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_1989))).f_NAME));
}
}
else if ((l_K_1981 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_1981 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_1981 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_1981 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_1981 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1981 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_1981 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_1981 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_1990; memset(&l_Y_1990, 0, sizeof l_Y_1990);
l_Y_1990 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_1990 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1990))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1990))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv1991 = r_CALL_EXPR(p_S, NULL);
return rv1991; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_1992; memset(&l_ARM_1992, 0, sizeof l_ARM_1992);
l_ARM_1992 = p_ARMS;
R10 l_WORD_1993; memset(&l_WORD_1993, 0, sizeof l_WORD_1993);
S_R10(&l_WORD_1993, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_1994; memset(&l_OPEN_1994, 0, sizeof l_OPEN_1994);
l_OPEN_1994 = ((rt_int)0LL);
rt_int l_CHOSEN_1995; memset(&l_CHOSEN_1995, 0, sizeof l_CHOSEN_1995);
l_CHOSEN_1995 = 0;
for (;;) {
if ((l_ARM_1992 == NULL)) goto L_end1996;
{
{
R23 l_M_1997; memset(&l_M_1997, 0, sizeof l_M_1997);
S_R23(&l_M_1997, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_1992))).f_A), 0);
if (l_CHOSEN_1995)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_1992))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_1992))).f_B);
}
else if ((l_M_1997).f_OK)
{
if ((!r_TEQS(l_WORD_1993, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_1994 = rt_add(l_OPEN_1994, ((rt_int)1LL));
S_R10(&l_WORD_1993, r_MK(rt_str("if", 2)), 0);
}
if (((l_M_1997).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_1992))).f_B);
l_CHOSEN_1995 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_1992))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1993, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_1992))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_1992))).f_B);
S_R10(&l_WORD_1993, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_1992 = ((*(R21 *)rt_nil_check(l_ARM_1992))).f_NEXT;
}
RT_B_TICK();
} L_end1996: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_1995)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_1993, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it1999_lo = ((rt_int)1LL), it1999_hi = l_OPEN_1994;
for (rt_int it1999 = it1999_lo; it1999 <= it1999_hi; it1999++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it1999 == it1999_hi) break;
} } L_end1998: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2000; memset(&l_SAVED_CODE_2000, 0, sizeof l_SAVED_CODE_2000);
S_R14(&l_SAVED_CODE_2000, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2001; memset(&rc2001, 0, sizeof rc2001);  rc2001.f_HEAD = NULL; rc2001.f_TAIL = NULL; rc2001; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2000, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2002; memset(&l_C_2002, 0, sizeof l_C_2002);
S_R10(&l_C_2002, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2003; memset(&l_END_L_2003, 0, sizeof l_END_L_2003);
S_R10(&l_END_L_2003, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2004; memset(&l_IT_2004, 0, sizeof l_IT_2004);
S_R10(&l_IT_2004, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2005; memset(&l_R_2005, 0, sizeof l_R_2005);
l_R_2005 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2006; memset(&l_LO_2006, 0, sizeof l_LO_2006);
S_R26(&l_LO_2006, r_EXPR(((*(R21 *)rt_nil_check(l_R_2005))).f_A, NULL), 0);
R26 l_HI_2007; memset(&l_HI_2007, 0, sizeof l_HI_2007);
S_R26(&l_HI_2007, r_EXPR(((*(R21 *)rt_nil_check(l_R_2005))).f_B, (l_LO_2006).f_T), 0);
R22 * l_T_2008; memset(&l_T_2008, 0, sizeof l_T_2008);
l_T_2008 = r_REAL_TYPE((l_LO_2006).f_T);
R10 l_LOC_2009; memset(&l_LOC_2009, 0, sizeof l_LOC_2009);
R10 l_HIC_2010; memset(&l_HIC_2010, 0, sizeof l_HIC_2010);
if ((((*(R22 *)rt_nil_check(l_T_2008))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2008))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2008))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2008))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2009, (l_LO_2006).f_C, 0);
S_R10(&l_HIC_2010, (l_HI_2007).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2005))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2005))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2009, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2009), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2005))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2010, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2010), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2004, l_LOC_2009, l_IT_2004, l_HIC_2010));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2004, l_IT_2004, l_IT_2004, l_IT_2004));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2011; memset(&l_Y_2011, 0, sizeof l_Y_2011);
l_Y_2011 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2011))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2008))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2011))).f_T = ((*(R22 *)rt_nil_check(l_T_2008))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2011))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2011, rt_str("", 0)), l_IT_2004));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2011, rt_str("", 0)), l_IT_2004));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2011))).f_ACCESS, l_IT_2004, 0);
}
r_DEFINE(l_Y_2011, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2003);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2004, l_IT_2004));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2003));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2012; memset(&l_CS_2012, 0, sizeof l_CS_2012);
l_CS_2012 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2013; memset(&l_C_2013, 0, sizeof l_C_2013);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2013 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2012))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2012))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2012))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2012))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2012))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2012))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2012))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2012))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2014; memset(&l_V_2014, 0, sizeof l_V_2014);
S_R10(&l_V_2014, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2012))).f_RESULT), l_V_2014, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2012))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2012))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2013 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2014));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2015; memset(&l_C_2015, 0, sizeof l_C_2015);
l_C_2015 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2015 == NULL)) goto L_end2016;
{
if ((((*(R17 *)rt_nil_check(l_C_2015))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2015))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2015))).f_KIND == ((rt_int)1LL)))
{
goto L_end2016;
}
l_C_2015 = ((*(R17 *)rt_nil_check(l_C_2015))).f_NEXT;
}
RT_B_TICK();
} L_end2016: ;
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
R21 * l_TG_2017; memset(&l_TG_2017, 0, sizeof l_TG_2017);
l_TG_2017 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2017))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2018; memset(&l_B_2018, 0, sizeof l_B_2018);
S_R26(&l_B_2018, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2017))).f_A, NULL), 0);
if ((!(l_B_2018).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2018).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2019; memset(&l_ARGS_2019, 0, sizeof l_ARGS_2019);
l_ARGS_2019 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2017))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2017))).f_C, g_M_IN, r_VAL_ARG(l_B_2018, NULL))));
R12 * l_Y_2020; memset(&l_Y_2020, 0, sizeof l_Y_2020);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2019))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2020 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2019, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2020 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2019))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2020 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2019, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2020 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2020, l_ARGS_2019, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2018).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2018).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2021; memset(&l_V_2021, 0, sizeof l_V_2021);
S_R26(&l_V_2021, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2018).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2021).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2018).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2018).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2017))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2017))).f_C), (l_V_2021).f_C));
}
}
return;
}
{
R26 l_LV_2022; memset(&l_LV_2022, 0, sizeof l_LV_2022);
S_R26(&l_LV_2022, r_EXPR(l_TG_2017, NULL), 0);
if ((!(l_LV_2022).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_2022).f_T, (l_LV_2022).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2022).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2022).f_SELF));
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2023; memset(&l_Y_2023, 0, sizeof l_Y_2023);
l_Y_2023 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2024; memset(&l_V_2024, 0, sizeof l_V_2024);
S_R26(&l_V_2024, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2023))).f_T = (l_V_2024).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2025; memset(&l_CN_2025, 0, sizeof l_CN_2025);
S_R10(&l_CN_2025, r_NEW_OBJECT(l_Y_2023, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2024).f_T))
{
r_CODE(r_INIT_CODE((l_V_2024).f_T, l_CN_2025));
}
r_CODE(r_ASSIGN_CODE((l_V_2024).f_T, l_CN_2025, (l_V_2024).f_C));
}
}
else
{
if ((!(l_V_2024).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2026; memset(&l_P_2026, 0, sizeof l_P_2026);
S_R10(&l_P_2026, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2024).f_T), l_P_2026, (l_V_2024).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2023))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2026), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2023))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2023))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2023))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2023, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2027; memset(&l_ARM_2027, 0, sizeof l_ARM_2027);
l_ARM_2027 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2028; memset(&l_CH_2028, 0, sizeof l_CH_2028);
S_R26(&l_CH_2028, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2029; memset(&l_T_2029, 0, sizeof l_T_2029);
l_T_2029 = r_REAL_TYPE((l_CH_2028).f_T);
R12 * l_BOUND_2030; memset(&l_BOUND_2030, 0, sizeof l_BOUND_2030);
l_BOUND_2030 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2029))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2029))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2031; memset(&l_TMP_2031, 0, sizeof l_TMP_2031);
S_R10(&l_TMP_2031, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2032; memset(&l_WORD_2032, 0, sizeof l_WORD_2032);
S_R10(&l_WORD_2032, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2031, (l_CH_2028).f_C));
for (;;) {
if ((l_ARM_2027 == NULL)) goto L_end2033;
{
{
R21 * l_L_2034; memset(&l_L_2034, 0, sizeof l_L_2034);
l_L_2034 = ((*(R21 *)rt_nil_check(l_ARM_2027))).f_A;
R10 l_COND_2035; memset(&l_COND_2035, 0, sizeof l_COND_2035);
S_R10(&l_COND_2035, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2034 == NULL)) goto L_end2036;
{
S_R10(&l_COND_2035, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2035, l_TMP_2031, (r_EXPR(l_L_2034, l_T_2029)).f_C), 0);
l_L_2034 = ((*(R21 *)rt_nil_check(l_L_2034))).f_NEXT;
}
RT_B_TICK();
} L_end2036: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2032, l_COND_2035));
S_R10(&l_WORD_2032, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2027))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2027))).f_C);
}
l_ARM_2027 = ((*(R21 *)rt_nil_check(l_ARM_2027))).f_NEXT;
}
RT_B_TICK();
} L_end2033: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2032, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2029))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2029))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2029))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2029))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2029));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2028).f_C));
for (;;) {
if ((l_ARM_2027 == NULL)) goto L_end2037;
{
{
R21 * l_L_2038; memset(&l_L_2038, 0, sizeof l_L_2038);
l_L_2038 = ((*(R21 *)rt_nil_check(l_ARM_2027))).f_A;
R23 l_FIRST_2039; memset(&l_FIRST_2039, 0, sizeof l_FIRST_2039);
S_R23(&l_FIRST_2039, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2038 == NULL)) goto L_end2040;
{
if ((((*(R21 *)rt_nil_check(l_L_2038))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2041; memset(&l_LO_2041, 0, sizeof l_LO_2041);
S_R23(&l_LO_2041, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2038))).f_A, l_T_2029), 0);
R23 l_HI_2042; memset(&l_HI_2042, 0, sizeof l_HI_2042);
S_R23(&l_HI_2042, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2038))).f_B, l_T_2029), 0);
rt_int l_A_2043; memset(&l_A_2043, 0, sizeof l_A_2043);
l_A_2043 = (l_LO_2041).f_V;
rt_int l_B_2044; memset(&l_B_2044, 0, sizeof l_B_2044);
l_B_2044 = (l_HI_2042).f_V;
if ((!(((l_LO_2041).f_OK && (l_HI_2042).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2038))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2038))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2038))).f_IV == ((rt_int)3LL))))
{
l_A_2043 = rt_add(l_A_2043, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2038))).f_IV >= ((rt_int)2LL)))
{
l_B_2044 = rt_sub(l_B_2044, ((rt_int)1LL));
}
if ((!(l_FIRST_2039).f_OK))
{
S_R23(&l_FIRST_2039, r_SOME(l_A_2043), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2043), r_NUM(l_B_2044)));
}
}
else
{
{
R23 l_M_2045; memset(&l_M_2045, 0, sizeof l_M_2045);
S_R23(&l_M_2045, r_ENUM_MANIFEST(l_L_2038, l_T_2029), 0);
if ((!(l_M_2045).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2038))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2039).f_OK))
{
S_R23(&l_FIRST_2039, l_M_2045, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2045).f_V)));
}
}
l_L_2038 = ((*(R21 *)rt_nil_check(l_L_2038))).f_NEXT;
}
RT_B_TICK();
} L_end2040: ;
if ((!(l_BOUND_2030 == NULL)))
{
{
R22 * l_SAVED_2046; memset(&l_SAVED_2046, 0, sizeof l_SAVED_2046);
l_SAVED_2046 = ((*(R12 *)rt_nil_check(l_BOUND_2030))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2030))).f_T = r_NARROW(l_SAVED_2046, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2039).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2027))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2027))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2030))).f_T = l_SAVED_2046;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2027))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2027))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2027 = ((*(R21 *)rt_nil_check(l_ARM_2027))).f_NEXT;
}
RT_B_TICK();
} L_end2037: ;
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
{ R12 * rv2047 = NULL;
return rv2047; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2048 = NULL;
return rv2048; }
}
{
R12 * l_Y_2049; memset(&l_Y_2049, 0, sizeof l_Y_2049);
l_Y_2049 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2049 == NULL))
{
{ R12 * rv2050 = NULL;
return rv2050; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2049))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2051 = NULL;
return rv2051; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2049))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2052 = NULL;
return rv2052; }
}
{
R24 * l_F_2053; memset(&l_F_2053, 0, sizeof l_F_2053);
l_F_2053 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2049))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2053 == NULL))
{
{ R12 * rv2054 = NULL;
return rv2054; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2053))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2055 = NULL;
return rv2055; }
}
}
{ R12 * rv2056 = l_Y_2049;
return rv2056; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2057; memset(&l_N_2057, 0, sizeof l_N_2057);
l_N_2057 = r_COPY_TYP(p_T);
R24 * l_F_2058; memset(&l_F_2058, 0, sizeof l_F_2058);
l_F_2058 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2059; memset(&l_A_2059, 0, sizeof l_A_2059);
l_A_2059 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2060; memset(&l_HEAD_2060, 0, sizeof l_HEAD_2060);
l_HEAD_2060 = NULL;
R25 * l_TAIL_2061; memset(&l_TAIL_2061, 0, sizeof l_TAIL_2061);
l_TAIL_2061 = NULL;
for (;;) {
if ((l_F_2058 == NULL)) goto L_end2062;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2058))).f_KIND == ((rt_int)0LL))) && (!(l_A_2059 == NULL))))
{
{
R25 * l_B_2063; memset(&l_B_2063, 0, sizeof l_B_2063);
l_B_2063 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2063)), (*(R25 *)rt_nil_check(l_A_2059)), 0);
((*(R25 *)rt_nil_check(l_B_2063))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2058))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2063))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2063))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2063))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2061 == NULL))
{
l_HEAD_2060 = l_B_2063;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2061))).f_NEXT = l_B_2063;
}
l_TAIL_2061 = l_B_2063;
}
l_A_2059 = ((*(R25 *)rt_nil_check(l_A_2059))).f_NEXT;
}
l_F_2058 = ((*(R24 *)rt_nil_check(l_F_2058))).f_NEXT;
}
RT_B_TICK();
} L_end2062: ;
((*(R22 *)rt_nil_check(l_N_2057))).f_ARGS = l_HEAD_2060;
{ R22 * rv2064 = l_N_2057;
return rv2064; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2065; memset(&l_ARM_2065, 0, sizeof l_ARM_2065);
l_ARM_2065 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2066; memset(&l_SAVED_2066, 0, sizeof l_SAVED_2066);
l_SAVED_2066 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2065 == NULL)) goto L_end2067;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2065))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2065))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2065))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2066;
return;
}
l_ARM_2065 = ((*(R21 *)rt_nil_check(l_ARM_2065))).f_NEXT;
}
RT_B_TICK();
} L_end2067: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2066;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2068; memset(&l_T_2068, 0, sizeof l_T_2068);
l_T_2068 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2068))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2069 = l_T_2068;
return rv2069; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2070; memset(&l_TD_2070, 0, sizeof l_TD_2070);
S_R10(&l_TD_2070, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2071; memset(&l_P_2071, 0, sizeof l_P_2071);
l_P_2071 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2071 == NULL)) goto L_end2072;
{
{
R12 * l_Y_2073; memset(&l_Y_2073, 0, sizeof l_Y_2073);
l_Y_2073 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2071))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2073))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2073))).f_DECL = l_P_2071;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2073, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2073))).f_INPUT = 1;
r_DEFINE(l_Y_2073, ((*(R21 *)rt_nil_check(l_P_2071))).f_LINE);
}
l_P_2071 = ((*(R21 *)rt_nil_check(l_P_2071))).f_NEXT;
}
RT_B_TICK();
} L_end2072: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2070));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2070, l_TD_2070));
l_P_2071 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2071 == NULL)) goto L_end2074;
{
r_ACTIVATE_PATH(l_P_2071, l_TD_2070);
l_P_2071 = ((*(R21 *)rt_nil_check(l_P_2071))).f_NEXT;
}
RT_B_TICK();
} L_end2074: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2070, l_TD_2070, l_TD_2070));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2070));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2075; memset(&l_FN_2075, 0, sizeof l_FN_2075);
S_R10(&l_FN_2075, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2076; memset(&l_FT_2076, 0, sizeof l_FT_2076);
S_R10(&l_FT_2076, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2077; memset(&l_Y_2077, 0, sizeof l_Y_2077);
l_Y_2077 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2078; memset(&l_H_2078, 0, sizeof l_H_2078);
S_R10(&l_H_2078, r_OBJ_ACCESS(l_Y_2077), 0);
R10 l_IT_2079; memset(&l_IT_2079, 0, sizeof l_IT_2079);
S_R10(&l_IT_2079, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2080; memset(&l_PRIO_2080, 0, sizeof l_PRIO_2080);
S_R10(&l_PRIO_2080, r_MK(rt_str("0", 1)), 0);
R10 l_START_2081; memset(&l_START_2081, 0, sizeof l_START_2081);
R22 * l_LT_2082; memset(&l_LT_2082, 0, sizeof l_LT_2082);
l_LT_2082 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2076, l_FT_2076));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2080, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2083; memset(&l_R_2083, 0, sizeof l_R_2083);
l_R_2083 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2084; memset(&l_LV_2084, 0, sizeof l_LV_2084);
S_R26(&l_LV_2084, r_EXPR(((*(R21 *)rt_nil_check(l_R_2083))).f_A, NULL), 0);
R10 l_LO_2085; memset(&l_LO_2085, 0, sizeof l_LO_2085);
S_R10(&l_LO_2085, (l_LV_2084).f_C, 0);
R10 l_HI_2086; memset(&l_HI_2086, 0, sizeof l_HI_2086);
S_R10(&l_HI_2086, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2083))).f_B, (l_LV_2084).f_T)).f_C, 0);
R22 * l_RT_2087; memset(&l_RT_2087, 0, sizeof l_RT_2087);
l_RT_2087 = r_REAL_TYPE((l_LV_2084).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2087))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2087))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2082 = ((*(R22 *)rt_nil_check(l_RT_2087))).f_BASE;
S_R10(&l_HI_2086, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2083))).f_B, l_LT_2082)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2087))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2087))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2083))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2083))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2085, r_FMT1(rt_str("(@) + 1", 7), l_LO_2085), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2083))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2086, r_FMT1(rt_str("(@) - 1", 7), l_HI_2086), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2078, l_LO_2085, l_HI_2086));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2079, l_H_2078, l_IT_2079, l_H_2078), l_IT_2079));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2079));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2076, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME, l_IT_2079));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2088; memset(&l_V_2088, 0, sizeof l_V_2088);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2089; memset(&l_I_2089, 0, sizeof l_I_2089);
l_I_2089 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2089))).f_T = l_LT_2082;
((*(R12 *)rt_nil_check(l_I_2089))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2089))).f_ACCESS, l_IT_2079, 0);
((*(R12 *)rt_nil_check(l_I_2089))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2089, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2088, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2088).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2088).f_C));
}
}
S_R10(&l_START_2081, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2078, l_IT_2079, l_FN_2075, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2081, p_TD, l_PRIO_2080, l_IT_2079));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2078));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2081, p_TD, l_PRIO_2080));
}
r_PATH_BODY(p_P, l_FN_2075, l_FT_2076, l_LT_2082);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2090 = r_MK(rt_str("NULL", 4));
return rv2090; }
}
{ R10 rv2091 = r_MK(rt_str("F", 1));
return rv2091; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2092; memset(&l_SAVED_CODE_2092, 0, sizeof l_SAVED_CODE_2092);
S_R14(&l_SAVED_CODE_2092, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2093; memset(&l_SAVED_CTXS_2093, 0, sizeof l_SAVED_CTXS_2093);
l_SAVED_CTXS_2093 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2094; memset(&l_OUTER_2094, 0, sizeof l_OUTER_2094);
l_OUTER_2094 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2095; memset(&l_H_2095, 0, sizeof l_H_2095);
l_H_2095 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2096; memset(&l_CS_2096, 0, sizeof l_CS_2096);
l_CS_2096 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_2097; memset(&l_UPT_2097, 0, sizeof l_UPT_2097);
S_R10(&l_UPT_2097, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2094))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2097, ((*(R18 *)rt_nil_check(l_OUTER_2094))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2096)), ({ R18 rc2098; memset(&rc2098, 0, sizeof rc2098);  rc2098.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2094))).f_LEVEL, ((rt_int)1LL)); rc2098.f_R = NULL; rc2098.f_FRAMED = 1; S_R10(&rc2098.f_FTYPE, p_FT, 0); S_R14(&rc2098.f_FIELDS, ({ R14 rc2099; memset(&rc2099, 0, sizeof rc2099);  rc2099.f_HEAD = NULL; rc2099.f_TAIL = NULL; rc2099; }), 0); rc2098.f_UP = l_OUTER_2094; rc2098.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2095))).f_B; rc2098.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2095))).f_A; rc2098.f_RESULT = NULL; rc2098.f_IS_PATH = 1; S_R10(&rc2098.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2098; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2097), &((*(R18 *)rt_nil_check(l_CS_2096))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2096;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2100; memset(&rc2100, 0, sizeof rc2100);  rc2100.f_HEAD = NULL; rc2100.f_TAIL = NULL; rc2100; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2095))).f_B, ((*(R21 *)rt_nil_check(l_H_2095))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2101; memset(&l_I_2101, 0, sizeof l_I_2101);
l_I_2101 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2101))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2101))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2101))).f_FIELD, r_FMT1(rt_str("l_@", 3), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2101))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2096))).f_FIELDS);
r_DEFINE(l_I_2101, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2102; memset(&l_L_2102, 0, sizeof l_L_2102);
l_L_2102 = ((*(R21 *)rt_nil_check(l_H_2095))).f_A;
R10 l_C_2103; memset(&l_C_2103, 0, sizeof l_C_2103);
S_R10(&l_C_2103, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2102 == NULL)) goto L_end2104;
{
S_R10(&l_C_2103, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2103, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2102))).f_NAME)), 0);
l_L_2102 = ((*(R21 *)rt_nil_check(l_L_2102))).f_NEXT;
}
RT_B_TICK();
} L_end2104: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2103));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2096))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2094;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2092, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2093;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2105; memset(&l_C_2105, 0, sizeof l_C_2105);
l_C_2105 = (p_B).f_HEAD;
R10 l_R_2106; memset(&l_R_2106, 0, sizeof l_R_2106);
S_R10(&l_R_2106, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2105 == NULL)) goto L_end2107;
{
S_R10(&l_R_2106, r_CAT(l_R_2106, ((*(R15 *)rt_nil_check(l_C_2105))).f_T), 0);
l_C_2105 = ((*(R15 *)rt_nil_check(l_C_2105))).f_NEXT;
}
RT_B_TICK();
} L_end2107: ;
{ R10 rv2108 = l_R_2106;
return rv2108; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2109; memset(&l_NAME_2109, 0, sizeof l_NAME_2109);
S_R10(&l_NAME_2109, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2110; memset(&l_SUB_2110, 0, sizeof l_SUB_2110);
S_R10(&l_SUB_2110, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2110, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2111; memset(&l_Y_2111, 0, sizeof l_Y_2111);
l_Y_2111 = r_LOOKUP(l_NAME_2109);
if ((l_Y_2111 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2109);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2111))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2109);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2111))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2112 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2111), l_SUB_2110);
return rv2112; }
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
R10 l_NAME_2113; memset(&l_NAME_2113, 0, sizeof l_NAME_2113);
S_R10(&l_NAME_2113, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2114; memset(&l_LINE_2114, 0, sizeof l_LINE_2114);
l_LINE_2114 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2113, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2115; memset(&l_V_2115, 0, sizeof l_V_2115);
S_R26(&l_V_2115, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2115).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2114, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2116 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2115).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2115).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2116; }
}
}
else if (r_TEQS(l_NAME_2113, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2117 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2117; }
}
{ R26 rv2118 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2118; }
}
else if (r_TEQS(l_NAME_2113, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2119 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2119; }
}
{ R26 rv2120 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2120; }
}
else if ((r_TEQS(l_NAME_2113, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2113, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2114, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2113);
}
{
R26 l_V_2121; memset(&l_V_2121, 0, sizeof l_V_2121);
S_R26(&l_V_2121, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2121).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2114, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2121).f_LVAL))
{
r_FAIL(l_LINE_2114, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2113, rt_str("REQUEST", 7)))
{
{ R26 rv2122 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2121).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2122; }
}
{ R26 rv2123 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2121).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2123; }
}
}
else if (r_TEQS(l_NAME_2113, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2114);
{ R26 rv2124 = r_START_IO_CALL(p_E);
return rv2124; }
}
r_FAILT(l_LINE_2114, rt_str("unknown routine ", 16), l_NAME_2113);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2125; memset(&l_ARGS_2125, 0, sizeof l_ARGS_2125);
l_ARGS_2125 = r_CALL_ARGS(p_E);
R12 * l_Y_2126; memset(&l_Y_2126, 0, sizeof l_Y_2126);
l_Y_2126 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2125, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2127; memset(&l_R_2127, 0, sizeof l_R_2127);
if ((l_Y_2126 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2127, r_CALL_SYM(l_Y_2126, l_ARGS_2125, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2128 = l_R_2127;
return rv2128; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2129; memset(&l_I_2129, 0, sizeof l_I_2129);
l_I_2129 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2129)), ({ R19 rc2130; memset(&rc2130, 0, sizeof rc2130);  rc2130.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2130.f_IMPORTS = p_IMPORTS; rc2130.f_SIGNALS = p_SIGNALS; S_R10(&rc2130.f_NAME, p_NAME, 0); rc2130.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2130; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2129;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2131; memset(&l_BASE_2131, 0, sizeof l_BASE_2131);
S_R10(&l_BASE_2131, r_FMT1(rt_str("r_@", 3), p_NAME), 0);
rstr l_S_2132; memset(&l_S_2132, 0, sizeof l_S_2132);
l_S_2132 = rt_str_new((l_BASE_2131).f_LEN);
rt_b_assign(&l_S_2132, r_STR(l_BASE_2131, (l_BASE_2131).f_LEN));
R21 * l_N_2133; memset(&l_N_2133, 0, sizeof l_N_2133);
l_N_2133 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2135_lo = ((rt_int)0LL), it2135_hi = rt_sub((l_BASE_2131).f_LEN, ((rt_int)1LL));
for (rt_int it2135 = it2135_lo; it2135 <= it2135_hi; it2135++) {
{
if (rt_b_eq(rt_b_slice(l_S_2132, it2135, it2135), rt_str("$", 1)))
{
S_R10(&l_BASE_2131, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_2132, ((rt_int)0LL), rt_sub(it2135, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2132, rt_add(it2135, ((rt_int)1LL)), rt_sub((l_BASE_2131).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2135 == it2135_hi) break;
} } L_end2134: ;
for (;;) {
if ((l_N_2133 == NULL)) goto L_end2136;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2133))).f_NAME, l_BASE_2131))
{
{ R10 rv2137 = r_FMT2(rt_str("@_@", 3), l_BASE_2131, r_NEW_NAME(rt_str("", 0)));
return rv2137; }
}
l_N_2133 = ((*(R21 *)rt_nil_check(l_N_2133))).f_NEXT;
}
RT_B_TICK();
} L_end2136: ;
l_N_2133 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2133))).f_NAME, l_BASE_2131, 0);
((*(R21 *)rt_nil_check(l_N_2133))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2133;
{ R10 rv2138 = l_BASE_2131;
return rv2138; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2139 = 0;
return rv2139; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2140 = 1;
return rv2140; }
}
{ rt_int rv2141 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2141; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2142; memset(&l_S_2142, 0, sizeof l_S_2142);
l_S_2142 = p_S0;
for (;;) {
if ((l_S_2142 == NULL)) goto L_end2143;
{
if (((((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_PAR)))
{
{ rt_int rv2144 = 1;
return rv2144; }
}
if (((((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2142))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2142))).f_B)))
{
{ rt_int rv2145 = 1;
return rv2145; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2142))).f_A))).f_B))
{
{ rt_int rv2146 = 1;
return rv2146; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2142))).f_B))).f_B))
{
{ rt_int rv2147 = 1;
return rv2147; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2148; memset(&l_A_2148, 0, sizeof l_A_2148);
l_A_2148 = ((*(R21 *)rt_nil_check(l_S_2142))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2142))).f_KIND == g_N_CASE))
{
l_A_2148 = ((*(R21 *)rt_nil_check(l_S_2142))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2142))).f_D == NULL)))
{
{ rt_int rv2149 = 1;
return rv2149; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2142))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2142))).f_C))).f_B))
{
{ rt_int rv2150 = 1;
return rv2150; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2142))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2142))).f_B))).f_B))
{
{ rt_int rv2151 = 1;
return rv2151; }
}
}
for (;;) {
if ((l_A_2148 == NULL)) goto L_end2152;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2148))).f_C == NULL)))
{
{ rt_int rv2153 = 1;
return rv2153; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2148))).f_B))).f_B))
{
{ rt_int rv2154 = 1;
return rv2154; }
}
l_A_2148 = ((*(R21 *)rt_nil_check(l_A_2148))).f_NEXT;
}
RT_B_TICK();
} L_end2152: ;
}
}
l_S_2142 = ((*(R21 *)rt_nil_check(l_S_2142))).f_NEXT;
}
RT_B_TICK();
} L_end2143: ;
{ rt_int rv2155 = 0;
return rv2155; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2156; memset(&l_Y_2156, 0, sizeof l_Y_2156);
l_Y_2156 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2157; memset(&l_S_2157, 0, sizeof l_S_2157);
l_S_2157 = rt_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2157, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2156))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2156))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2156))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2156))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2156, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2159_lo = ((rt_int)1LL), it2159_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2159 = it2159_lo; it2159 <= it2159_hi; it2159++) {
{
if (rt_b_eq(rt_b_slice(l_S_2157, it2159, it2159), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2156))).f_PREFIX, r_MKN(rt_b_slice(l_S_2157, ((rt_int)0LL), rt_sub(it2159, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2160; memset(&l_SHORT_2160, 0, sizeof l_SHORT_2160);
l_SHORT_2160 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2157, rt_add(it2159, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2160))).f_ORIG = l_Y_2156;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2160))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2156))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2160))).f_DECL = p_R;
r_DEFINE(l_SHORT_2160, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2158;
}
}
RT_B_TICK();
if (it2159 == it2159_hi) break;
} } L_end2158: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2161; memset(&l_R_2161, 0, sizeof l_R_2161);
l_R_2161 = p_RS;
for (;;) {
if ((l_R_2161 == NULL)) goto L_end2162;
{
if ((((*(R21 *)rt_nil_check(l_R_2161))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2161);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2161);
}
l_R_2161 = ((*(R21 *)rt_nil_check(l_R_2161))).f_NEXT;
}
RT_B_TICK();
} L_end2162: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2163; memset(&l_R_2163, 0, sizeof l_R_2163);
l_R_2163 = p_RS;
for (;;) {
if ((l_R_2163 == NULL)) goto L_end2164;
{
if ((((*(R21 *)rt_nil_check(l_R_2163))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2165; memset(&l_M_2165, 0, sizeof l_M_2165);
l_M_2165 = r_FIND_DECL(l_R_2163);
r_ENTER_MODULE(l_M_2165);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2163))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2165);
}
}
else
{
{
R12 * l_Y_2166; memset(&l_Y_2166, 0, sizeof l_Y_2166);
l_Y_2166 = r_FIND_DECL(l_R_2163);
r_ROUTINE_HEADER(l_Y_2166);
}
}
l_R_2163 = ((*(R21 *)rt_nil_check(l_R_2163))).f_NEXT;
}
RT_B_TICK();
} L_end2164: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2167; memset(&l_Y_2167, 0, sizeof l_Y_2167);
l_Y_2167 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2167 == NULL)) goto L_end2168;
{
if (((((*(R12 *)rt_nil_check(l_Y_2167))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2167))).f_ORIG == NULL)))
{
{ R12 * rv2169 = l_Y_2167;
return rv2169; }
}
l_Y_2167 = r_LOOKUP_NEXT(l_Y_2167);
}
RT_B_TICK();
} L_end2168: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2170; memset(&l_D_2170, 0, sizeof l_D_2170);
l_D_2170 = p_DECLS;
for (;;) {
if ((l_D_2170 == NULL)) goto L_end2171;
{
if (((((*(R21 *)rt_nil_check(l_D_2170))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2170))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2170))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2172; memset(&l_Y_2172, 0, sizeof l_Y_2172);
l_Y_2172 = r_FIND_DECL(l_D_2170);
R22 * l_T_2173; memset(&l_T_2173, 0, sizeof l_T_2173);
l_T_2173 = r_RESOLVE_USER(r_TYPE_REF(l_D_2170));
}
}
}
l_D_2170 = ((*(R21 *)rt_nil_check(l_D_2170))).f_NEXT;
}
RT_B_TICK();
} L_end2171: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2174; memset(&l_TS_2174, 0, sizeof l_TS_2174);
l_TS_2174 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2174))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2175 = l_TS_2174;
return rv2175; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2176; memset(&l_Y_2176, 0, sizeof l_Y_2176);
l_Y_2176 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2177; memset(&l_SAVED_2177, 0, sizeof l_SAVED_2177);
l_SAVED_2177 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2176))).f_DECL = p_M;
r_DEFINE(l_Y_2176, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2178; memset(&l_MARK_2178, 0, sizeof l_MARK_2178);
l_MARK_2178 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2176;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2176))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2178);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2177;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2176);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2179; memset(&l_Y_2179, 0, sizeof l_Y_2179);
l_Y_2179 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2179 == NULL)) goto L_end2180;
{
{
R12 * l_NEXT_2181; memset(&l_NEXT_2181, 0, sizeof l_NEXT_2181);
l_NEXT_2181 = ((*(R12 *)rt_nil_check(l_Y_2179))).f_SNEXT;
r_DEFINE(l_Y_2179, ((rt_int)0LL));
l_Y_2179 = l_NEXT_2181;
}
}
RT_B_TICK();
} L_end2180: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2182; memset(&l_MARK_2182, 0, sizeof l_MARK_2182);
l_MARK_2182 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2182 == NULL)) goto L_end2183;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2182))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2183;
}
l_MARK_2182 = ((*(R12 *)rt_nil_check(l_MARK_2182))).f_SNEXT;
}
RT_B_TICK();
} L_end2183: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2182);
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
{ rt_int rv2184 = 1;
return rv2184; }
}
}
{ rt_int rv2185 = 0;
return rv2185; }
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
R21 * l_D_2186; memset(&l_D_2186, 0, sizeof l_D_2186);
l_D_2186 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2187; memset(&l_Y_2187, 0, sizeof l_Y_2187);
l_Y_2187 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2187 == NULL)) goto L_end2188;
{
if (r_EXPORTED_BY(l_D_2186, l_Y_2187))
{
((*(R12 *)rt_nil_check(l_Y_2187))).f_EXPORTED = 1;
{
R12 * l_A_2189; memset(&l_A_2189, 0, sizeof l_A_2189);
l_A_2189 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2187))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2187))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2189)), (*(R12 *)rt_nil_check(l_Y_2187)), 0);
((*(R12 *)rt_nil_check(l_A_2189))).f_ORIG = r_ORIGINAL(l_Y_2187);
((*(R12 *)rt_nil_check(l_A_2189))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2189, ((*(R21 *)rt_nil_check(l_D_2186))).f_LINE);
}
}
l_Y_2187 = ((*(R12 *)rt_nil_check(l_Y_2187))).f_SNEXT;
}
RT_B_TICK();
} L_end2188: ;
{
R21 * l_X_2190; memset(&l_X_2190, 0, sizeof l_X_2190);
l_X_2190 = ((*(R21 *)rt_nil_check(l_D_2186))).f_B;
for (;;) {
if ((l_X_2190 == NULL)) goto L_end2191;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2190))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2190))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2190))).f_NAME);
}
l_X_2190 = ((*(R21 *)rt_nil_check(l_X_2190))).f_NEXT;
}
RT_B_TICK();
} L_end2191: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2192; memset(&l_Y_2192, 0, sizeof l_Y_2192);
l_Y_2192 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2192 == NULL)) goto L_end2193;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2192))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2192))).f_PREFIX, p_NAME)))
{
{ rt_int rv2194 = 1;
return rv2194; }
}
l_Y_2192 = ((*(R12 *)rt_nil_check(l_Y_2192))).f_SNEXT;
}
RT_B_TICK();
} L_end2193: ;
{ rt_int rv2195 = 0;
return rv2195; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2196; memset(&l_X_2196, 0, sizeof l_X_2196);
l_X_2196 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2197 = 0;
return rv2197; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2198 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2198; }
}
for (;;) {
if ((l_X_2196 == NULL)) goto L_end2199;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2196))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2200 = 1;
return rv2200; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2196))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2196))).f_A == NULL))
{
{ rt_int rv2201 = 1;
return rv2201; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2196))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2202 = 1;
return rv2202; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2203; memset(&l_T_2203, 0, sizeof l_T_2203);
l_T_2203 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2196))).f_NAME, p_Y);
if ((!(l_T_2203 == NULL)))
{
{ rt_int rv2204 = 1;
return rv2204; }
}
}
}
l_X_2196 = ((*(R21 *)rt_nil_check(l_X_2196))).f_NEXT;
}
RT_B_TICK();
} L_end2199: ;
{ rt_int rv2205 = 0;
return rv2205; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2206; memset(&l_M_2206, 0, sizeof l_M_2206);
l_M_2206 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2207; memset(&l_Z_2207, 0, sizeof l_Z_2207);
if ((l_M_2206 == NULL))
{
{ R12 * rv2208 = NULL;
return rv2208; }
}
l_Z_2207 = ((*(R12 *)rt_nil_check(l_M_2206))).f_MEMBERS;
for (;;) {
if ((l_Z_2207 == NULL)) goto L_end2209;
{
if (((((*(R12 *)rt_nil_check(l_Z_2207))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2207))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2207))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2207))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2207))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2210 = l_Z_2207;
return rv2210; }
}
}
}
}
l_Z_2207 = ((*(R12 *)rt_nil_check(l_Z_2207))).f_SNEXT;
}
RT_B_TICK();
} L_end2209: ;
{ R12 * rv2211 = NULL;
return rv2211; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2212; memset(&l_R_2212, 0, sizeof l_R_2212);
l_R_2212 = p_RS;
for (;;) {
if ((l_R_2212 == NULL)) goto L_end2213;
{
if ((((*(R21 *)rt_nil_check(l_R_2212))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2214; memset(&l_M_2214, 0, sizeof l_M_2214);
l_M_2214 = r_FIND_DECL(l_R_2212);
R21 * l_D_2215; memset(&l_D_2215, 0, sizeof l_D_2215);
l_D_2215 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2212))).f_C))).f_A;
r_ENTER_MODULE(l_M_2214);
for (;;) {
if ((l_D_2215 == NULL)) goto L_end2216;
{
if (((((*(R21 *)rt_nil_check(l_D_2215))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2215))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2215);
}
l_D_2215 = ((*(R21 *)rt_nil_check(l_D_2215))).f_NEXT;
}
RT_B_TICK();
} L_end2216: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2212))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2212))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2214);
}
}
l_R_2212 = ((*(R21 *)rt_nil_check(l_R_2212))).f_NEXT;
}
RT_B_TICK();
} L_end2213: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2217; memset(&l_R_2217, 0, sizeof l_R_2217);
l_R_2217 = p_RS;
for (;;) {
if ((l_R_2217 == NULL)) goto L_end2218;
{
if ((((*(R21 *)rt_nil_check(l_R_2217))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2219; memset(&l_M_2219, 0, sizeof l_M_2219);
l_M_2219 = r_FIND_DECL(l_R_2217);
r_ENTER_MODULE(l_M_2219);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2217))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2219);
}
}
else
{
{
R12 * l_Y_2220; memset(&l_Y_2220, 0, sizeof l_Y_2220);
l_Y_2220 = r_FIND_DECL(l_R_2217);
if ((!((*(R12 *)rt_nil_check(l_Y_2220))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2220);
}
}
}
l_R_2217 = ((*(R21 *)rt_nil_check(l_R_2217))).f_NEXT;
}
RT_B_TICK();
} L_end2218: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2221; memset(&l_LEVEL_2221, 0, sizeof l_LEVEL_2221);
l_LEVEL_2221 = r_CUR_LEVEL();
rt_int l_MORE_2222; memset(&l_MORE_2222, 0, sizeof l_MORE_2222);
l_MORE_2222 = 1;
for (;;) {
if ((!l_MORE_2222)) goto L_end2223;
{
l_MORE_2222 = 0;
{
R12 * l_P_2224; memset(&l_P_2224, 0, sizeof l_P_2224);
l_P_2224 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2225; memset(&l_PREV_2225, 0, sizeof l_PREV_2225);
l_PREV_2225 = NULL;
for (;;) {
if ((l_P_2224 == NULL)) goto L_end2226;
{
if ((((*(R12 *)rt_nil_check(l_P_2224))).f_LEVEL == l_LEVEL_2221))
{
if ((l_PREV_2225 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2224))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2225))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2224))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2224);
r_ROUTINE_BODY(l_P_2224);
r_LEAVE_MODULE_OF(l_P_2224);
l_MORE_2222 = 1;
goto L_end2226;
}
l_PREV_2225 = l_P_2224;
l_P_2224 = ((*(R12 *)rt_nil_check(l_P_2224))).f_MEMBERS;
}
RT_B_TICK();
} L_end2226: ;
}
}
RT_B_TICK();
} L_end2223: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2227; memset(&l_D_2227, 0, sizeof l_D_2227);
l_D_2227 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2228; memset(&l_S_2228, 0, sizeof l_S_2228);
l_S_2228 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2227 == NULL)) goto L_end2229;
{
if (((((*(R21 *)rt_nil_check(l_D_2227))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2227))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2227);
}
l_D_2227 = ((*(R21 *)rt_nil_check(l_D_2227))).f_NEXT;
}
RT_B_TICK();
} L_end2229: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2228 == NULL)) goto L_end2230;
{
r_STMT(l_S_2228);
l_S_2228 = ((*(R21 *)rt_nil_check(l_S_2228))).f_NEXT;
}
RT_B_TICK();
} L_end2230: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2231; memset(&l_R_2231, 0, sizeof l_R_2231);
l_R_2231 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2232; memset(&l_SAVED_CODE_2232, 0, sizeof l_SAVED_CODE_2232);
S_R14(&l_SAVED_CODE_2232, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2233; memset(&l_SAVED_CTXS_2233, 0, sizeof l_SAVED_CTXS_2233);
l_SAVED_CTXS_2233 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2234; memset(&l_SAVED_BINDS_2234, 0, sizeof l_SAVED_BINDS_2234);
l_SAVED_BINDS_2234 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2235; memset(&l_OUTER_2235, 0, sizeof l_OUTER_2235);
l_OUTER_2235 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2236; memset(&l_CS_2236, 0, sizeof l_CS_2236);
l_CS_2236 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2237; memset(&l_PROLOGUE_2237, 0, sizeof l_PROLOGUE_2237);
S_R10(&l_PROLOGUE_2237, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2236)), ({ R18 rc2238; memset(&rc2238, 0, sizeof rc2238);  rc2238.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2238.f_R = p_Y; rc2238.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2238.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2238.f_FIELDS, ({ R14 rc2239; memset(&rc2239, 0, sizeof rc2239);  rc2239.f_HEAD = NULL; rc2239.f_TAIL = NULL; rc2239; }), 0); rc2238.f_UP = l_OUTER_2235; rc2238.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2231))).f_E; rc2238.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2231))).f_D))).f_A; rc2238.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2238.f_IS_PATH = 0; S_R10(&rc2238.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2238; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2236))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2236))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2236))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2236))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2237, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2236))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2236))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2237, r_CATS(l_PROLOGUE_2237, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2236;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2240; memset(&rc2240, 0, sizeof rc2240);  rc2240.f_HEAD = NULL; rc2240.f_TAIL = NULL; rc2240; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2231))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2231))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2231))).f_LINE);
{
R28 * l_P_2241; memset(&l_P_2241, 0, sizeof l_P_2241);
l_P_2241 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2241 == NULL)) goto L_end2242;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2241))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2241))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2243; memset(&l_V_2243, 0, sizeof l_V_2243);
l_V_2243 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2243))).f_T = ((*(R28 *)rt_nil_check(l_P_2241))).f_T;
((*(R12 *)rt_nil_check(l_V_2243))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2241))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2243))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2241))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2243))).f_FIELD, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2243))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2241))).f_T), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2236))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2241))).f_T), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2236))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
}
S_R10(&l_PROLOGUE_2237, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2237, ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME, ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2243))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2241))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2244; memset(&l_ARGA_2244, 0, sizeof l_ARGA_2244);
S_R10(&l_ARGA_2244, ((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2241))).f_T, l_ARGA_2244, ((*(R21 *)rt_nil_check(l_R_2231))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2243))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2241))).f_T), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2236))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
}
else
{
S_R10(&l_PROLOGUE_2237, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2237, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2241))).f_T), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, r_FMT1(rt_str("o_@", 3), ((*(R28 *)rt_nil_check(l_P_2241))).f_NAME), 0);
}
S_R10(&l_PROLOGUE_2237, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2237, ((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, l_ARGA_2244), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2241))).f_T))
{
S_R10(&l_PROLOGUE_2237, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2237, ((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2241))).f_T, l_ARGA_2244)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2236))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2236))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2241))).f_T, l_ARGA_2244, ((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS)), 0);
r_DEFINE(l_V_2243, ((*(R21 *)rt_nil_check(l_R_2231))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2243, ((*(R21 *)rt_nil_check(l_R_2231))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2241))).f_T, ((*(R12 *)rt_nil_check(l_V_2243))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2231))).f_LINE, 1);
}
}
}
}
l_P_2241 = ((*(R28 *)rt_nil_check(l_P_2241))).f_NEXT;
}
RT_B_TICK();
} L_end2242: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2231))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2231))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2231))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2236))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2236))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2237));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2236))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2236))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2235;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2232, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2233;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2234;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2245; memset(&l_B_2245, 0, sizeof l_B_2245);
l_B_2245 = p_BS;
for (;;) {
if ((l_B_2245 == NULL)) goto L_end2246;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2245))).f_T == NULL)))
{
{
R12 * l_Y_2247; memset(&l_Y_2247, 0, sizeof l_Y_2247);
l_Y_2247 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2245))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2247))).f_T = ((*(R20 *)rt_nil_check(l_B_2245))).f_T;
r_DEFINE(l_Y_2247, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2245))).f_HASMV)
{
{
R12 * l_Y_2248; memset(&l_Y_2248, 0, sizeof l_Y_2248);
l_Y_2248 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2245))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2248))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2248))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2248))).f_MV = ((*(R20 *)rt_nil_check(l_B_2245))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2248))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2245))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2248))).f_INPUT = 1;
r_DEFINE(l_Y_2248, p_LINE);
}
}
l_B_2245 = ((*(R20 *)rt_nil_check(l_B_2245))).f_NEXT;
}
RT_B_TICK();
} L_end2246: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2249; memset(&l_C_2249, 0, sizeof l_C_2249);
l_C_2249 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2249 == NULL)) goto L_end2250;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2249))).f_T), &(*p_DST));
l_C_2249 = ((*(R15 *)rt_nil_check(l_C_2249))).f_NEXT;
}
RT_B_TICK();
} L_end2250: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2251; memset(&l_U_2251, 0, sizeof l_U_2251);
l_U_2251 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2251 == NULL)) goto L_end2252;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2251))).f_NAME, p_NAME))
{
{ rt_int rv2253 = 1;
return rv2253; }
}
l_U_2251 = ((*(R21 *)rt_nil_check(l_U_2251))).f_NEXT;
}
RT_B_TICK();
} L_end2252: ;
{ rt_int rv2254 = 0;
return rv2254; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2255; memset(&l_U_2255, 0, sizeof l_U_2255);
l_U_2255 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2255 == NULL)) goto L_end2256;
{
{
R21 * l_T_2257; memset(&l_T_2257, 0, sizeof l_T_2257);
l_T_2257 = p_SEGS;
for (;;) {
if ((l_T_2257 == NULL)) goto L_end2258;
{
if ((((!(l_T_2257 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2257))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2257))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2255))).f_NAME)))
{
{ rt_int rv2259 = 0;
return rv2259; }
}
l_T_2257 = ((*(R21 *)rt_nil_check(l_T_2257))).f_NEXT;
}
RT_B_TICK();
} L_end2258: ;
}
l_U_2255 = ((*(R21 *)rt_nil_check(l_U_2255))).f_NEXT;
}
RT_B_TICK();
} L_end2256: ;
{ rt_int rv2260 = 1;
return rv2260; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2261; memset(&l_S_2261, 0, sizeof l_S_2261);
l_S_2261 = p_SEGS;
rt_int l_MAINS_2262; memset(&l_MAINS_2262, 0, sizeof l_MAINS_2262);
l_MAINS_2262 = ((rt_int)0LL);
R18 * l_ROOT_2263; memset(&l_ROOT_2263, 0, sizeof l_ROOT_2263);
l_ROOT_2263 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2263)), ({ R18 rc2264; memset(&rc2264, 0, sizeof rc2264);  rc2264.f_LEVEL = ((rt_int)0LL); rc2264.f_R = NULL; rc2264.f_FRAMED = 0; S_R10(&rc2264.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2264.f_FIELDS, ({ R14 rc2265; memset(&rc2265, 0, sizeof rc2265);  rc2265.f_HEAD = NULL; rc2265.f_TAIL = NULL; rc2265; }), 0); rc2264.f_UP = NULL; rc2264.f_IMPORTS = NULL; rc2264.f_SIGNALS = NULL; rc2264.f_RESULT = NULL; rc2264.f_IS_PATH = 0; S_R10(&rc2264.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2264; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2263;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2266; memset(&rc2266, 0, sizeof rc2266);  rc2266.f_HEAD = NULL; rc2266.f_TAIL = NULL; rc2266; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2261 = p_SEGS;
for (;;) {
if ((l_S_2261 == NULL)) goto L_end2268;
{
if ((((*(R21 *)rt_nil_check(l_S_2261))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2261, p_SEGS))
{
goto L_end2268;
}
}
l_S_2261 = ((*(R21 *)rt_nil_check(l_S_2261))).f_NEXT;
}
RT_B_TICK();
} L_end2268: ;
if ((l_S_2261 == NULL))
{
goto L_end2267;
}
((*(R21 *)rt_nil_check(l_S_2261))).f_D = l_S_2261;
l_MAINS_2262 = rt_add(l_MAINS_2262, ((*(R21 *)rt_nil_check(l_S_2261))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2261))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2261))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2261))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2261, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2261))).f_B);
r_SEGMENT_EXPORTS(l_S_2261);
}
RT_B_TICK();
} L_end2267: ;
l_S_2261 = p_SEGS;
for (;;) {
if ((l_S_2261 == NULL)) goto L_end2269;
{
if ((((*(R21 *)rt_nil_check(l_S_2261))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2261))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2261))).f_NAME);
}
l_S_2261 = ((*(R21 *)rt_nil_check(l_S_2261))).f_NEXT;
}
RT_B_TICK();
} L_end2269: ;
if ((!(l_MAINS_2262 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2270; memset(&l_X_2270, 0, sizeof l_X_2270);
l_X_2270 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2270 == NULL)) goto L_end2271;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R21 *)rt_nil_check(l_X_2270))).f_NAME));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R21 *)rt_nil_check(l_X_2270))).f_NAME, r_CSTRING(((*(R21 *)rt_nil_check(l_X_2270))).f_NAME)));
l_X_2270 = ((*(R21 *)rt_nil_check(l_X_2270))).f_NEXT;
}
RT_B_TICK();
} L_end2271: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2272; memset(&l_M_2272, 0, sizeof l_M_2272);
l_M_2272 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2273 = 0;
return rv2273; }
}
for (;;) {
if ((l_M_2272 == NULL)) goto L_end2274;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2272))).f_NAME))
{
{ rt_int rv2275 = 1;
return rv2275; }
}
l_M_2272 = ((*(R12 *)rt_nil_check(l_M_2272))).f_MODL;
}
RT_B_TICK();
} L_end2274: ;
{ rt_int rv2276 = 0;
return rv2276; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2277; memset(&l_MARK_2277, 0, sizeof l_MARK_2277);
l_MARK_2277 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2278; memset(&l_TAKEN_2278, 0, sizeof l_TAKEN_2278);
for (;;) {
if ((l_MARK_2277 == NULL)) goto L_end2279;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2277))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2279;
}
l_MARK_2277 = ((*(R12 *)rt_nil_check(l_MARK_2277))).f_SNEXT;
}
RT_B_TICK();
} L_end2279: ;
l_TAKEN_2278 = r_TAKE_SCOPE(l_MARK_2277);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2278 == NULL)) goto L_end2280;
{
{
R12 * l_NEXT_2281; memset(&l_NEXT_2281, 0, sizeof l_NEXT_2281);
l_NEXT_2281 = ((*(R12 *)rt_nil_check(l_TAKEN_2278))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2278))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2278))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2278))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2278)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2278))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2278))))))
{
r_DEFINE(l_TAKEN_2278, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2278 = l_NEXT_2281;
}
}
RT_B_TICK();
} L_end2280: ;
}
int main(int argc, char **argv) {
rt_b_lang();
rt_init(argc, argv);
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
