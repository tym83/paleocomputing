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
static R26 r_VALUE_OR_TYPE(R21 * p_E);
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
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_733; memset(&l_F_733, 0, sizeof l_F_733);
l_F_733 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_734; memset(&l_FIRST_734, 0, sizeof l_FIRST_734);
l_FIRST_734 = NULL;
for (;;) {
if ((l_F_733 == NULL)) goto L_end735;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_733))).f_NAME, p_NAME))
{
if ((l_FIRST_734 == NULL))
{
l_FIRST_734 = l_F_733;
}
if (((((*(R24 *)rt_nil_check(l_F_733))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv736 = l_F_733;
return rv736; }
}
{
R23 l_TAGV_737; memset(&l_TAGV_737, 0, sizeof l_TAGV_737);
S_R23(&l_TAGV_737, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_733))).f_TAGF), 0);
if ((l_TAGV_737).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_733))).f_LABELS, (l_TAGV_737).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_733))).f_TAGF)))).f_T))
{
{ R24 * rv738 = l_F_733;
return rv738; }
}
}
}
}
l_F_733 = ((*(R24 *)rt_nil_check(l_F_733))).f_NEXT;
}
RT_B_TICK();
} L_end735: ;
{ R24 * rv739 = l_FIRST_734;
return rv739; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_740; memset(&l_P_740, 0, sizeof l_P_740);
l_P_740 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_741; memset(&l_N_741, 0, sizeof l_N_741);
l_N_741 = ((rt_int)0LL);
for (;;) {
if ((l_P_740 == NULL)) goto L_end742;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_740))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
l_N_741 = rt_add(l_N_741, ((rt_int)1LL));
}
l_P_740 = ((*(R24 *)rt_nil_check(l_P_740))).f_NEXT;
}
RT_B_TICK();
} L_end742: ;
if ((l_N_741 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_741)), 0);
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
R21 * l_D_743; memset(&l_D_743, 0, sizeof l_D_743);
l_D_743 = p_DECLS;
for (;;) {
if ((l_D_743 == NULL)) goto L_end744;
{
if ((((*(R21 *)rt_nil_check(l_D_743))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_745; memset(&l_FT_745, 0, sizeof l_FT_745);
l_FT_745 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_743))).f_B);
R21 * l_N_746; memset(&l_N_746, 0, sizeof l_N_746);
l_N_746 = ((*(R21 *)rt_nil_check(l_D_743))).f_A;
for (;;) {
if ((l_N_746 == NULL)) goto L_end747;
{
{
R24 * l_F_748; memset(&l_F_748, 0, sizeof l_F_748);
l_F_748 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_746))).f_NAME, l_FT_745, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_748))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_748))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_748, &(*p_TAIL));
}
l_N_746 = ((*(R21 *)rt_nil_check(l_N_746))).f_NEXT;
}
RT_B_TICK();
} L_end747: ;
}
}
else
{
{
R24 * l_TF_749; memset(&l_TF_749, 0, sizeof l_TF_749);
l_TF_749 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_743))).f_NAME);
R21 * l_S_750; memset(&l_S_750, 0, sizeof l_S_750);
l_S_750 = ((*(R21 *)rt_nil_check(l_D_743))).f_A;
if ((l_TF_749 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_743))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_743))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_749))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_743))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_743))).f_NAME);
}
for (;;) {
if ((l_S_750 == NULL)) goto L_end751;
{
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_750))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_743))).f_NAME), ((*(R21 *)rt_nil_check(l_S_750))).f_A, &(*p_TAIL));
l_S_750 = ((*(R21 *)rt_nil_check(l_S_750))).f_NEXT;
}
RT_B_TICK();
} L_end751: ;
}
}
l_D_743 = ((*(R21 *)rt_nil_check(l_D_743))).f_NEXT;
}
RT_B_TICK();
} L_end744: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_752; memset(&l_T_752, 0, sizeof l_T_752);
l_T_752 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_753; memset(&l_TAIL_753, 0, sizeof l_TAIL_753);
l_TAIL_753 = NULL;
((*(R22 *)rt_nil_check(l_T_752))).f_BASE = l_T_752;
((*(R22 *)rt_nil_check(l_T_752))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_752))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_752))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_752))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_752))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_752))).f_CNAME));
}
{
R21 * l_F_754; memset(&l_F_754, 0, sizeof l_F_754);
l_F_754 = p_FORMALS;
for (;;) {
if ((l_F_754 == NULL)) goto L_end755;
{
if ((!(((*(R21 *)rt_nil_check(l_F_754))).f_B == NULL)))
{
{
R22 * l_FT_756; memset(&l_FT_756, 0, sizeof l_FT_756);
l_FT_756 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_754))).f_B);
R21 * l_N_757; memset(&l_N_757, 0, sizeof l_N_757);
l_N_757 = ((*(R21 *)rt_nil_check(l_F_754))).f_A;
rt_int l_KIND_758; memset(&l_KIND_758, 0, sizeof l_KIND_758);
l_KIND_758 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_754))).f_IV == ((rt_int)1LL)))
{
l_KIND_758 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_756))) || (!(((*(R22 *)rt_nil_check(l_FT_756))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_754))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_757 == NULL)) goto L_end759;
{
r_ADD_FIELD(l_T_752, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_757))).f_NAME, l_FT_756, l_KIND_758), &l_TAIL_753);
l_N_757 = ((*(R21 *)rt_nil_check(l_N_757))).f_NEXT;
}
RT_B_TICK();
} L_end759: ;
}
}
l_F_754 = ((*(R21 *)rt_nil_check(l_F_754))).f_NEXT;
}
RT_B_TICK();
} L_end755: ;
}
r_RECORD_FIELDS(l_T_752, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_753);
r_COMPLETE_RECORD(l_T_752);
{ R22 * rv760 = l_T_752;
return rv760; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_761; memset(&l_D_761, 0, sizeof l_D_761);
l_D_761 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_762; memset(&l_CLASS_762, 0, sizeof l_CLASS_762);
l_CLASS_762 = NULL;
R20 * l_TARGS_763; memset(&l_TARGS_763, 0, sizeof l_TARGS_763);
l_TARGS_763 = NULL;
R25 * l_VARGS_764; memset(&l_VARGS_764, 0, sizeof l_VARGS_764);
l_VARGS_764 = NULL;
R25 * l_VTAIL_765; memset(&l_VTAIL_765, 0, sizeof l_VTAIL_765);
l_VTAIL_765 = NULL;
R21 * l_A_766; memset(&l_A_766, 0, sizeof l_A_766);
l_A_766 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_767; memset(&l_F_767, 0, sizeof l_F_767);
l_F_767 = ((*(R21 *)rt_nil_check(l_D_761))).f_A;
for (;;) {
if ((l_F_767 == NULL)) goto L_end768;
{
{
R21 * l_N_769; memset(&l_N_769, 0, sizeof l_N_769);
l_N_769 = ((*(R21 *)rt_nil_check(l_F_767))).f_A;
for (;;) {
if ((l_N_769 == NULL)) goto L_end770;
{
if ((l_A_766 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_767))).f_B == NULL))
{
{
R20 * l_B_771; memset(&l_B_771, 0, sizeof l_B_771);
l_B_771 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_771)), ({ R20 rc772; memset(&rc772, 0, sizeof rc772);  S_R10(&rc772.f_NAME, ((*(R21 *)rt_nil_check(l_N_769))).f_NAME, 0); rc772.f_T = r_ARG_TYPE(l_A_766); S_R10(&rc772.f_C, r_NO_TEXT(), 0); rc772.f_HASMV = 0; rc772.f_MV = ((rt_int)0LL); rc772.f_R = NULL; rc772.f_NEXT = l_TARGS_763; rc772; }), 0);
l_TARGS_763 = l_B_771;
}
}
else
{
{
R25 * l_V_773; memset(&l_V_773, 0, sizeof l_V_773);
l_V_773 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_773)), ({ R25 rc774; memset(&rc774, 0, sizeof rc774);  S_R10(&rc774.f_LO, r_NO_TEXT(), 0); S_R10(&rc774.f_HI, r_NO_TEXT(), 0); S_R23(&rc774.f_MLO, r_NO_MVAL(), 0); S_R23(&rc774.f_MHI, r_NO_MVAL(), 0); rc774.f_ANYARG = 0; rc774.f_NEXT = NULL; rc774; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_766))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_767))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_766))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_773))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_766))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_773))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_773))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_766))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_773))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_773))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_766))).f_NAME, (((*(R21 *)rt_nil_check(l_A_766))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_775; memset(&l_FT_775, 0, sizeof l_FT_775);
l_FT_775 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_767))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_773))).f_LO, (r_EXPR(l_A_766, l_FT_775)).f_C, 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_773))).f_MLO, r_ENUM_MANIFEST(l_A_766, l_FT_775), 0);
if (((((*(R21 *)rt_nil_check(l_F_767))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_773))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_766))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_765 == NULL))
{
l_VARGS_764 = l_V_773;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_765))).f_NEXT = l_V_773;
}
l_VTAIL_765 = l_V_773;
}
}
l_A_766 = ((*(R21 *)rt_nil_check(l_A_766))).f_NEXT;
l_N_769 = ((*(R21 *)rt_nil_check(l_N_769))).f_NEXT;
}
RT_B_TICK();
} L_end770: ;
}
l_F_767 = ((*(R21 *)rt_nil_check(l_F_767))).f_NEXT;
}
RT_B_TICK();
} L_end768: ;
if ((!(l_A_766 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_776; memset(&l_R_776, 0, sizeof l_R_776);
l_R_776 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_776 == NULL)) goto L_end777;
{
if (((((*(R12 *)rt_nil_check(l_R_776))).f_DECL == l_D_761) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_776))).f_BINDINGS, l_TARGS_763)))
{
l_CLASS_762 = ((*(R12 *)rt_nil_check(l_R_776))).f_T;
goto L_end777;
}
l_R_776 = ((*(R12 *)rt_nil_check(l_R_776))).f_INSTANCES;
}
RT_B_TICK();
} L_end777: ;
}
if ((l_CLASS_762 == NULL))
{
{
R12 * l_R_778; memset(&l_R_778, 0, sizeof l_R_778);
l_R_778 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_779; memset(&l_B_779, 0, sizeof l_B_779);
l_B_779 = l_TARGS_763;
R20 * l_SAVED_780; memset(&l_SAVED_780, 0, sizeof l_SAVED_780);
l_SAVED_780 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_781; memset(&l_ENTERED_781, 0, sizeof l_ENTERED_781);
((*(R12 *)rt_nil_check(l_R_778))).f_DECL = l_D_761;
((*(R12 *)rt_nil_check(l_R_778))).f_BINDINGS = l_TARGS_763;
((*(R12 *)rt_nil_check(l_R_778))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_778;
l_ENTERED_781 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_779 == NULL)) goto L_end782;
{
{
R12 * l_TY_783; memset(&l_TY_783, 0, sizeof l_TY_783);
l_TY_783 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_779))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_783))).f_T = ((*(R20 *)rt_nil_check(l_B_779))).f_T;
r_DEFINE(l_TY_783, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_779 = ((*(R20 *)rt_nil_check(l_B_779))).f_NEXT;
}
RT_B_TICK();
} L_end782: ;
l_F_767 = ((*(R21 *)rt_nil_check(l_D_761))).f_A;
for (;;) {
if ((l_F_767 == NULL)) goto L_end784;
{
if ((!(((*(R21 *)rt_nil_check(l_F_767))).f_B == NULL)))
{
{
R21 * l_N_785; memset(&l_N_785, 0, sizeof l_N_785);
l_N_785 = ((*(R21 *)rt_nil_check(l_F_767))).f_A;
for (;;) {
if ((l_N_785 == NULL)) goto L_end786;
{
{
R12 * l_P_787; memset(&l_P_787, 0, sizeof l_P_787);
l_P_787 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_785))).f_NAME);
((*(R12 *)rt_nil_check(l_P_787))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_767))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_787))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), ((*(R21 *)rt_nil_check(l_N_785))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_P_787))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_787))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_787, ((*(R21 *)rt_nil_check(l_F_767))).f_LINE);
}
l_N_785 = ((*(R21 *)rt_nil_check(l_N_785))).f_NEXT;
}
RT_B_TICK();
} L_end786: ;
}
}
l_F_767 = ((*(R21 *)rt_nil_check(l_F_767))).f_NEXT;
}
RT_B_TICK();
} L_end784: ;
if ((l_TARGS_763 == NULL))
{
l_CLASS_762 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_761))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_761))).f_A);
}
else
{
l_CLASS_762 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_761))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_761))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_762))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_778))).f_T = l_CLASS_762;
r_CLOSE_SCOPE();
if (l_ENTERED_781)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_780;
}
}
{
R22 * l_T_788; memset(&l_T_788, 0, sizeof l_T_788);
l_T_788 = r_COPY_TYP(l_CLASS_762);
((*(R22 *)rt_nil_check(l_T_788))).f_ARGS = l_VARGS_764;
{ R22 * rv789 = l_T_788;
return rv789; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_790; memset(&l_P_790, 0, sizeof l_P_790);
l_P_790 = p_A;
R20 * l_Q_791; memset(&l_Q_791, 0, sizeof l_Q_791);
l_Q_791 = p_B;
for (;;) {
if (((l_P_790 == NULL) || (l_Q_791 == NULL))) goto L_end792;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_790))).f_T, ((*(R20 *)rt_nil_check(l_Q_791))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_790))).f_T, ((*(R20 *)rt_nil_check(l_Q_791))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_790))).f_T, ((*(R20 *)rt_nil_check(l_Q_791))).f_T))))
{
{ rt_int rv793 = 0;
return rv793; }
}
l_P_790 = ((*(R20 *)rt_nil_check(l_P_790))).f_NEXT;
l_Q_791 = ((*(R20 *)rt_nil_check(l_Q_791))).f_NEXT;
}
RT_B_TICK();
} L_end792: ;
{ rt_int rv794 = ((l_P_790 == NULL) && (l_Q_791 == NULL));
return rv794; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_795; memset(&l_A_795, 0, sizeof l_A_795);
l_A_795 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_795 == NULL)) goto L_end796;
{
if (((*(R25 *)rt_nil_check(l_A_795))).f_ANYARG)
{
{ rt_int rv797 = 1;
return rv797; }
}
l_A_795 = ((*(R25 *)rt_nil_check(l_A_795))).f_NEXT;
}
RT_B_TICK();
} L_end796: ;
{ rt_int rv798 = 0;
return rv798; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_799; memset(&l_L_799, 0, sizeof l_L_799);
l_L_799 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_800; memset(&l_C_800, 0, sizeof l_C_800);
S_R10(&l_C_800, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_801; memset(&l_TF_801, 0, sizeof l_TF_801);
l_TF_801 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_799 == NULL)) goto L_end802;
{
if ((((*(R21 *)rt_nil_check(l_L_799))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_800, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_800, p_SELF, ((*(R24 *)rt_nil_check(l_TF_801))).f_CNAME), 0);
S_R10(&l_C_800, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_800, (r_EXPR(((*(R21 *)rt_nil_check(l_L_799))).f_A, ((*(R24 *)rt_nil_check(l_TF_801))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_801))).f_CNAME), 0);
S_R10(&l_C_800, r_FMT2(rt_str("@@)", 3), l_C_800, (r_EXPR(((*(R21 *)rt_nil_check(l_L_799))).f_B, ((*(R24 *)rt_nil_check(l_TF_801))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_800, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_800, p_SELF, ((*(R24 *)rt_nil_check(l_TF_801))).f_CNAME, (r_EXPR(l_L_799, ((*(R24 *)rt_nil_check(l_TF_801))).f_T)).f_C), 0);
}
l_L_799 = ((*(R21 *)rt_nil_check(l_L_799))).f_NEXT;
}
RT_B_TICK();
} L_end802: ;
{ R10 rv803 = r_FMT1(rt_str("(@)", 3), l_C_800);
return rv803; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_804; memset(&l_C_804, 0, sizeof l_C_804);
S_R10(&l_C_804, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_805; memset(&l_F_805, 0, sizeof l_F_805);
l_F_805 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_806; memset(&l_BODY_806, 0, sizeof l_BODY_806);
S_R10(&l_BODY_806, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_807; memset(&l_ASSIGN_807, 0, sizeof l_ASSIGN_807);
S_R10(&l_ASSIGN_807, r_MK(rt_str("", 0)), 0);
R10 l_COPY_808; memset(&l_COPY_808, 0, sizeof l_COPY_808);
S_R10(&l_COPY_808, r_MK(rt_str("", 0)), 0);
R10 l_EQ_809; memset(&l_EQ_809, 0, sizeof l_EQ_809);
S_R10(&l_EQ_809, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_805 == NULL)) goto L_end810;
{
S_R10(&l_BODY_806, r_FMT3(rt_str("@ @ @;", 6), l_BODY_806, r_CTYPE(((*(R24 *)rt_nil_check(l_F_805))).f_T), ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME), 0);
S_R10(&l_COPY_808, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_808, ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_805))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_805))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_807, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_807, ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_805))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_807, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_807, ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_807, r_FMT2(rt_str("@ @", 3), l_ASSIGN_807, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_805))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_805))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_809, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_809, r_VARIANT_COND(l_F_805, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_805))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_809, r_FMT2(rt_str("@ && @", 6), l_EQ_809, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_805))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_805))).f_CNAME))), 0);
}
l_F_805 = ((*(R24 *)rt_nil_check(l_F_805))).f_NEXT;
}
RT_B_TICK();
} L_end810: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_804, l_BODY_806));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_804, l_C_804, l_C_804));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_804, l_C_804, l_C_804));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_804, l_C_804, l_C_804, l_ASSIGN_807));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_804, l_C_804, l_C_804, l_EQ_809));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_804, l_C_804, l_C_804));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_804, l_C_804, l_C_804, l_C_804));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_808));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_811; memset(&l_ET_C_811, 0, sizeof l_ET_C_811);
S_R10(&l_ET_C_811, r_CTYPE(p_ELEM), 0);
R10 l_KEY_812; memset(&l_KEY_812, 0, sizeof l_KEY_812);
S_R10(&l_KEY_812, r_FMT3(rt_str("@/@/@", 5), l_ET_C_811, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_813; memset(&l_Y_813, 0, sizeof l_Y_813);
l_Y_813 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_813 == NULL)) goto L_end814;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_813))).f_NAME, l_KEY_812) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_813))).f_T, p_ELEM)))
{
{ R10 rv815 = ((*(R12 *)rt_nil_check(l_Y_813))).f_ACCESS;
return rv815; }
}
l_Y_813 = ((*(R12 *)rt_nil_check(l_Y_813))).f_INSTANCES;
}
RT_B_TICK();
} L_end814: ;
l_Y_813 = r_NEW_SYM(g_Y_TYPE, l_KEY_812);
((*(R12 *)rt_nil_check(l_Y_813))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_813))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_813))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_813;
{
R10 l_C_816; memset(&l_C_816, 0, sizeof l_C_816);
S_R10(&l_C_816, ((*(R12 *)rt_nil_check(l_Y_813))).f_ACCESS, 0);
R10 l_D_817; memset(&l_D_817, 0, sizeof l_D_817);
S_R10(&l_D_817, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_816, l_C_816));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_816, l_D_817, l_D_817, l_ET_C_811));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_816, l_C_816, l_C_816));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_816, l_C_816, l_C_816));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_816, l_C_816, l_C_816, l_D_817));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_817, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_816, l_C_816, l_C_816, l_D_817));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_817, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_816, l_C_816, l_C_816));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_816, l_C_816, l_C_816, l_C_816));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_817, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv818 = ((*(R12 *)rt_nil_check(l_Y_813))).f_ACCESS;
return rv818; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_819; memset(&l_K_819, 0, sizeof l_K_819);
l_K_819 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_819 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv820 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv820; }
}
{ R10 rv821 = r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv821; }
}
else if ((l_K_819 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv822 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv822; }
}
{ R10 rv823 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv823; }
}
else if ((l_K_819 == g_T_SEM))
{
{ R10 rv824 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv824; }
}
else if ((l_K_819 == g_T_ABS))
{
{ R10 rv825 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv825; }
}
else if ((l_K_819 == g_T_ARR))
{
{
R25 * l_B_826; memset(&l_B_826, 0, sizeof l_B_826);
l_B_826 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_827; memset(&l_I_827, 0, sizeof l_I_827);
l_I_827 = ((rt_int)0LL);
R10 l_R_828; memset(&l_R_828, 0, sizeof l_R_828);
S_R10(&l_R_828, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_826 == NULL)) goto L_end829;
{
S_R10(&l_R_828, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_828, p_LV, r_NUM(l_I_827), ((*(R25 *)rt_nil_check(l_B_826))).f_LO), 0);
S_R10(&l_R_828, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_828, p_LV, r_NUM(l_I_827), ((*(R25 *)rt_nil_check(l_B_826))).f_HI), 0);
l_I_827 = rt_add(l_I_827, ((rt_int)1LL));
l_B_826 = ((*(R25 *)rt_nil_check(l_B_826))).f_NEXT;
}
RT_B_TICK();
} L_end829: ;
S_R10(&l_R_828, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_828, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_828, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_828, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_830; memset(&l_IV_830, 0, sizeof l_IV_830);
S_R10(&l_IV_830, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_828, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_828, l_IV_830, l_IV_830, l_IV_830), 0);
S_R10(&l_R_828, r_FMT2(rt_str("@ @ }", 5), l_R_828, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_830))), 0);
}
}
{ R10 rv831 = r_CATS(l_R_828, rt_str(" }", 2));
return rv831; }
}
}
else if ((l_K_819 == g_T_REC))
{
{
R24 * l_F_832; memset(&l_F_832, 0, sizeof l_F_832);
l_F_832 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_833; memset(&l_A_833, 0, sizeof l_A_833);
l_A_833 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_834; memset(&l_R_834, 0, sizeof l_R_834);
S_R10(&l_R_834, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_832 == NULL)) goto L_end835;
{
if ((!(((*(R24 *)rt_nil_check(l_F_832))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_833 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_833))).f_ANYARG))
{
S_R10(&l_R_834, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_834, p_LV, ((*(R24 *)rt_nil_check(l_F_832))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_833))).f_LO), 0);
}
l_A_833 = ((*(R25 *)rt_nil_check(l_A_833))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_832))).f_T))
{
S_R10(&l_R_834, r_FMT2(rt_str("@ @", 3), l_R_834, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_832))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_832))).f_CNAME)), p_LV)), 0);
}
l_F_832 = ((*(R24 *)rt_nil_check(l_F_832))).f_NEXT;
}
RT_B_TICK();
} L_end835: ;
{ R10 rv836 = l_R_834;
return rv836; }
}
}
{ R10 rv837 = r_NO_TEXT();
return rv837; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_838; memset(&l_K_838, 0, sizeof l_K_838);
l_K_838 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_838 == g_T_STR) || (l_K_838 == g_T_BITS)) || (l_K_838 == g_T_ARR)) || (l_K_838 == g_T_SEM)))
{
{ rt_int rv839 = 1;
return rv839; }
}
else if ((l_K_838 == g_T_ABS))
{
{ rt_int rv840 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv840; }
}
else if ((l_K_838 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv841 = 1;
return rv841; }
}
{
R24 * l_F_842; memset(&l_F_842, 0, sizeof l_F_842);
l_F_842 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_842 == NULL)) goto L_end843;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_842))).f_T))
{
{ rt_int rv844 = 1;
return rv844; }
}
l_F_842 = ((*(R24 *)rt_nil_check(l_F_842))).f_NEXT;
}
RT_B_TICK();
} L_end843: ;
}
}
{ rt_int rv845 = 0;
return rv845; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_846; memset(&l_K_846, 0, sizeof l_K_846);
l_K_846 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_846 == g_T_STR) || (l_K_846 == g_T_BITS)))
{
{ R10 rv847 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv847; }
}
else if ((l_K_846 == g_T_ABS))
{
{ R10 rv848 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv848; }
}
else if (((l_K_846 == g_T_ARR) || (l_K_846 == g_T_REC)))
{
{ R10 rv849 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv849; }
}
{ R10 rv850 = p_V;
return rv850; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_851; memset(&l_K_851, 0, sizeof l_K_851);
l_K_851 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_851 == g_T_STR) || (l_K_851 == g_T_BITS)))
{
{ R10 rv852 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv852; }
}
else if ((l_K_851 == g_T_ABS))
{
{ R10 rv853 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv853; }
}
else if ((l_K_851 == g_T_SEM))
{
{ R10 rv854 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv854; }
}
else if ((l_K_851 == g_T_ARR))
{
{ R10 rv855 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv855; }
}
else if ((l_K_851 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv856 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv856; }
}
{ R10 rv857 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv857; }
}
{ R10 rv858 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv858; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_859; memset(&l_K_859, 0, sizeof l_K_859);
l_K_859 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_859 == g_T_STR) || (l_K_859 == g_T_BITS)))
{
{ R10 rv860 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv860; }
}
else if ((l_K_859 == g_T_ABS))
{
{ R10 rv861 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv861; }
}
else if (((l_K_859 == g_T_ARR) || (l_K_859 == g_T_REC)))
{
{ R10 rv862 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv862; }
}
else if ((l_K_859 == g_T_SEM))
{
{ R10 rv863 = r_MK(rt_str("0", 1));
return rv863; }
}
{ R10 rv864 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv864; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv865 = p_V;
return rv865; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv866 = p_V;
return rv866; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv867 = p_V;
return rv867; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
{ R10 rv868 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv868; }
}
{ R10 rv869 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv869; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv870 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv870; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv871 = 1;
return rv871; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv872 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv872; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv873 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv873; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv874 = 0;
return rv874; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv875 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv875; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv876 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv876; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv877 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv877; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv878 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv878; }
}
{ rt_int rv879 = 1;
return rv879; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv880 = 1;
return rv880; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv881 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv881; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv882 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv882; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv883 = 0;
return rv883; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv884 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv884; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv885 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv885; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv886 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv886; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv887 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv887; }
}
{ rt_int rv888 = 1;
return rv888; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv889 = 0;
return rv889; }
}
{ rt_int rv890 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv890; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_891; memset(&l_P_891, 0, sizeof l_P_891);
l_P_891 = p_A;
R25 * l_Q_892; memset(&l_Q_892, 0, sizeof l_Q_892);
l_Q_892 = p_B;
for (;;) {
if (((l_P_891 == NULL) || (l_Q_892 == NULL))) goto L_end893;
{
if ((r_IS_GEN_ARG(l_P_891) || r_IS_GEN_ARG(l_Q_892)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_891))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_892))).f_ANYARG)))
{
{ rt_int rv894 = 0;
return rv894; }
}
if (((((*(R25 *)rt_nil_check(l_P_891))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_892))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_891))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_892))).f_MLO).f_V)))
{
{ rt_int rv895 = 0;
return rv895; }
}
}
l_P_891 = ((*(R25 *)rt_nil_check(l_P_891))).f_NEXT;
l_Q_892 = ((*(R25 *)rt_nil_check(l_Q_892))).f_NEXT;
}
RT_B_TICK();
} L_end893: ;
{ rt_int rv896 = ((l_P_891 == NULL) && (l_Q_892 == NULL));
return rv896; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_897; memset(&l_CS_897, 0, sizeof l_CS_897);
l_CS_897 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_898; memset(&l_T_898, 0, sizeof l_T_898);
rt_int l_LEV_899; memset(&l_LEV_899, 0, sizeof l_LEV_899);
if ((((*(R18 *)rt_nil_check(l_CS_897))).f_LEVEL == p_LEVEL))
{
{ R10 rv900 = r_MK(rt_str("F", 1));
return rv900; }
}
if (((*(R18 *)rt_nil_check(l_CS_897))).f_FRAMED)
{
S_R10(&l_T_898, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_898, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_899 = rt_sub(((*(R18 *)rt_nil_check(l_CS_897))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_899 <= p_LEVEL)) goto L_end901;
{
S_R10(&l_T_898, r_CATS(l_T_898, rt_str("->up", 4)), 0);
l_LEV_899 = rt_sub(l_LEV_899, ((rt_int)1LL));
}
RT_B_TICK();
} L_end901: ;
{ R10 rv902 = l_T_898;
return rv902; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv903 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv903; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv904 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv904; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv905 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv905; }
}
{ R10 rv906 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv906; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_907; memset(&l_CS_907, 0, sizeof l_CS_907);
l_CS_907 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_908; memset(&l_T_908, 0, sizeof l_T_908);
l_T_908 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_909; memset(&l_CN_909, 0, sizeof l_CN_909);
if ((((*(R18 *)rt_nil_check(l_CS_907))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_909, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME), 0);
}
else
{
S_R10(&l_CN_909, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_908), l_CN_909));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_909, 0);
{ R10 rv910 = l_CN_909;
return rv910; }
}
S_R10(&l_CN_909, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_909, 0);
if (((*(R18 *)rt_nil_check(l_CS_907))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_908), l_CN_909), &((*(R18 *)rt_nil_check(l_CS_907))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_909), 0);
{ R10 rv911 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv911; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_908), l_CN_909, l_CN_909, l_CN_909));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_909, 0);
{ R10 rv912 = l_CN_909;
return rv912; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_913; memset(&l_T_913, 0, sizeof l_T_913);
l_T_913 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_914; memset(&l_N_914, 0, sizeof l_N_914);
l_N_914 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_915; memset(&l_V_915, 0, sizeof l_V_915);
rt_int l_HAVE_V_916; memset(&l_HAVE_V_916, 0, sizeof l_HAVE_V_916);
l_HAVE_V_916 = 0;
if (((((*(R22 *)rt_nil_check(l_T_913))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_913))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_914 == NULL)) goto L_end917;
{
{
R12 * l_Y_918; memset(&l_Y_918, 0, sizeof l_Y_918);
l_Y_918 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_914))).f_NAME);
R10 l_CN_919; memset(&l_CN_919, 0, sizeof l_CN_919);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_918))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_918))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_913) && (((*(R22 *)rt_nil_check(l_T_913))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_920; memset(&l_M_920, 0, sizeof l_M_920);
S_R23(&l_M_920, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_918))).f_HASMV = (l_M_920).f_OK;
((*(R12 *)rt_nil_check(l_Y_918))).f_MV = (l_M_920).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_918))).f_T = l_T_913;
S_R10(&l_CN_919, r_NEW_OBJECT(l_Y_918, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_913))
{
r_CODE(r_INIT_CODE(l_T_913, l_CN_919));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_916))
{
S_R26(&l_V_915, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_913), 0);
l_HAVE_V_916 = 1;
}
r_CODE(r_STORE_CODE(l_T_913, l_CN_919, l_V_915, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_918, ((*(R21 *)rt_nil_check(l_N_914))).f_LINE);
}
l_N_914 = ((*(R21 *)rt_nil_check(l_N_914))).f_NEXT;
}
RT_B_TICK();
} L_end917: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv921 = ({ R26 rc922; memset(&rc922, 0, sizeof rc922);  S_R10(&rc922.f_C, p_C, 0); rc922.f_T = p_T; rc922.f_LVAL = 0; S_R10(&rc922.f_SELF, r_NO_TEXT(), 0); rc922; });
return rv921; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv923 = ({ R26 rc924; memset(&rc924, 0, sizeof rc924);  S_R10(&rc924.f_C, p_C, 0); rc924.f_T = p_T; rc924.f_LVAL = p_LVAL; S_R10(&rc924.f_SELF, p_SELF, 0); rc924; });
return rv923; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_925; memset(&l_T_925, 0, sizeof l_T_925);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv926 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv926; }
}
l_T_925 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_925))).f_SCALE = p_SCALE;
{ R22 * rv927 = l_T_925;
return rv927; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_928; memset(&l_T_928, 0, sizeof l_T_928);
l_T_928 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_928))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_928))).f_MLEN, p_M, 0);
{ R22 * rv929 = l_T_928;
return rv929; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_930; memset(&l_S_930, 0, sizeof l_S_930);
l_S_930 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_930, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_931; memset(&l_AT_931, 0, sizeof l_AT_931);
l_AT_931 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_932; memset(&l_R_932, 0, sizeof l_R_932);
S_R10(&l_R_932, r_MK(rt_str("\"", 1)), 0);
{ rt_int it934_lo = ((rt_int)0LL), it934_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it934 = it934_lo; it934 <= it934_hi; it934++) {
{
if ((rt_b_eq(rt_b_slice(l_S_930, it934, it934), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_930, it934, it934), rt_str("\\", 1))))
{
S_R10(&l_R_932, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_930, it934, it934))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_930, it934, it934), rt_str("\?", 1)))
{
S_R10(&l_R_932, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_935; memset(&l_C_935, 0, sizeof l_C_935);
l_C_935 = r_CODE_OF(rt_b_slice(l_S_930, it934, it934));
if (({ rt_int iv936 = l_C_935; (((rt_int)32LL) <= iv936) && (iv936 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_932, r_MK(rt_b_slice(l_S_930, it934, it934)), 0);
}
else
{
S_R10(&l_R_932, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_935, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_935, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_935, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it934 == it934_hi) break;
} } L_end933: ;
S_R10(&l_R_932, r_MK(rt_str("\"", 1)), 0);
{ R10 rv937 = ({ R10 rc938; memset(&rc938, 0, sizeof rc938);  rc938.f_AT = l_AT_931; rc938.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_931); rc938.f_H = rt_neg(((rt_int)1LL)); rc938; });
return rv937; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_939; memset(&l_K_939, 0, sizeof l_K_939);
l_K_939 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_940; memset(&l_NO_940, 0, sizeof l_NO_940);
S_R23(&l_NO_940, ({ R23 rc941; memset(&rc941, 0, sizeof rc941);  rc941.f_OK = 0; rc941.f_V = ((rt_int)0LL); rc941; }), 0);
if ((l_K_939 == g_N_INT))
{
{ R23 rv942 = ({ R23 rc943; memset(&rc943, 0, sizeof rc943);  rc943.f_OK = 1; rc943.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc943; });
return rv942; }
}
else if ((l_K_939 == g_N_PAREN))
{
{ R23 rv944 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv944; }
}
else if ((l_K_939 == g_N_BOOL))
{
{ R23 rv945 = ({ R23 rc946; memset(&rc946, 0, sizeof rc946);  rc946.f_OK = 1; rc946.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc946; });
return rv945; }
}
else if ((l_K_939 == g_N_UNOP))
{
{
R23 l_A_947; memset(&l_A_947, 0, sizeof l_A_947);
S_R23(&l_A_947, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
{ R23 rv948 = ({ R23 rc949; memset(&rc949, 0, sizeof rc949);  rc949.f_OK = (l_A_947).f_OK; rc949.f_V = rt_neg((l_A_947).f_V); rc949; });
return rv948; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv950 = l_A_947;
return rv950; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv951 = ({ R23 rc952; memset(&rc952, 0, sizeof rc952);  rc952.f_OK = (l_A_947).f_OK; rc952.f_V = rt_sub(((rt_int)1LL), (l_A_947).f_V); rc952; });
return rv951; }
}
}
}
else if ((l_K_939 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv953 = l_NO_940;
return rv953; }
}
{
R23 l_A_954; memset(&l_A_954, 0, sizeof l_A_954);
S_R23(&l_A_954, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_955; memset(&l_B_955, 0, sizeof l_B_955);
S_R23(&l_B_955, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_956; memset(&l_OP_956, 0, sizeof l_OP_956);
S_R10(&l_OP_956, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_956, rt_str("&", 1)) && (l_A_954).f_OK))
{
if (((l_A_954).f_V == ((rt_int)0LL)))
{
{ R23 rv957 = l_A_954;
return rv957; }
}
{ R23 rv958 = l_B_955;
return rv958; }
}
else if ((r_TEQS(l_OP_956, rt_str("!", 1)) && (l_A_954).f_OK))
{
if (((l_A_954).f_V == ((rt_int)1LL)))
{
{ R23 rv959 = l_A_954;
return rv959; }
}
{ R23 rv960 = l_B_955;
return rv960; }
}
if ((!(((l_A_954).f_OK && (l_B_955).f_OK))))
{
{ R23 rv961 = l_NO_940;
return rv961; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv962 = l_NO_940;
return rv962; }
}
if (r_TEQS(l_OP_956, rt_str("+", 1)))
{
{ R23 rv963 = ({ R23 rc964; memset(&rc964, 0, sizeof rc964);  rc964.f_OK = 1; rc964.f_V = rt_add((l_A_954).f_V, (l_B_955).f_V); rc964; });
return rv963; }
}
else if (r_TEQS(l_OP_956, rt_str("-", 1)))
{
{ R23 rv965 = ({ R23 rc966; memset(&rc966, 0, sizeof rc966);  rc966.f_OK = 1; rc966.f_V = rt_sub((l_A_954).f_V, (l_B_955).f_V); rc966; });
return rv965; }
}
else if (r_TEQS(l_OP_956, rt_str("*", 1)))
{
{ R23 rv967 = ({ R23 rc968; memset(&rc968, 0, sizeof rc968);  rc968.f_OK = 1; rc968.f_V = rt_mul((l_A_954).f_V, (l_B_955).f_V); rc968; });
return rv967; }
}
else if ((r_TEQS(l_OP_956, rt_str("//", 2)) && (!((l_B_955).f_V == ((rt_int)0LL)))))
{
{ R23 rv969 = ({ R23 rc970; memset(&rc970, 0, sizeof rc970);  rc970.f_OK = 1; rc970.f_V = rt_quot((l_A_954).f_V, (l_B_955).f_V); rc970; });
return rv969; }
}
else if ((r_TEQS(l_OP_956, rt_str("MOD", 3)) && (!((l_B_955).f_V == ((rt_int)0LL)))))
{
{ R23 rv971 = ({ R23 rc972; memset(&rc972, 0, sizeof rc972);  rc972.f_OK = 1; rc972.f_V = rt_rem((l_A_954).f_V, (l_B_955).f_V); rc972; });
return rv971; }
}
else if (r_TEQS(l_OP_956, rt_str("=", 1)))
{
{ R23 rv973 = ({ R23 rc974; memset(&rc974, 0, sizeof rc974);  rc974.f_OK = 1; rc974.f_V = r_BOOL_INT(((l_A_954).f_V == (l_B_955).f_V)); rc974; });
return rv973; }
}
else if (r_TEQS(l_OP_956, rt_str("<>", 2)))
{
{ R23 rv975 = ({ R23 rc976; memset(&rc976, 0, sizeof rc976);  rc976.f_OK = 1; rc976.f_V = r_BOOL_INT((!((l_A_954).f_V == (l_B_955).f_V))); rc976; });
return rv975; }
}
else if (r_TEQS(l_OP_956, rt_str("<", 1)))
{
{ R23 rv977 = ({ R23 rc978; memset(&rc978, 0, sizeof rc978);  rc978.f_OK = 1; rc978.f_V = r_BOOL_INT(((l_A_954).f_V < (l_B_955).f_V)); rc978; });
return rv977; }
}
else if (r_TEQS(l_OP_956, rt_str(">", 1)))
{
{ R23 rv979 = ({ R23 rc980; memset(&rc980, 0, sizeof rc980);  rc980.f_OK = 1; rc980.f_V = r_BOOL_INT(((l_A_954).f_V > (l_B_955).f_V)); rc980; });
return rv979; }
}
else if (r_TEQS(l_OP_956, rt_str("<=", 2)))
{
{ R23 rv981 = ({ R23 rc982; memset(&rc982, 0, sizeof rc982);  rc982.f_OK = 1; rc982.f_V = r_BOOL_INT(((l_A_954).f_V <= (l_B_955).f_V)); rc982; });
return rv981; }
}
else if (r_TEQS(l_OP_956, rt_str(">=", 2)))
{
{ R23 rv983 = ({ R23 rc984; memset(&rc984, 0, sizeof rc984);  rc984.f_OK = 1; rc984.f_V = r_BOOL_INT(((l_A_954).f_V >= (l_B_955).f_V)); rc984; });
return rv983; }
}
}
}
else if ((l_K_939 == g_N_IN))
{
{
R23 l_A_985; memset(&l_A_985, 0, sizeof l_A_985);
S_R23(&l_A_985, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_986; memset(&l_L_986, 0, sizeof l_L_986);
S_R23(&l_L_986, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_987; memset(&l_U_987, 0, sizeof l_U_987);
S_R23(&l_U_987, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_988; memset(&l_LO_988, 0, sizeof l_LO_988);
rt_int l_HI_989; memset(&l_HI_989, 0, sizeof l_HI_989);
if ((!(((((l_A_985).f_OK && (l_L_986).f_OK) && (l_U_987).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv990 = l_NO_940;
return rv990; }
}
l_LO_988 = (l_L_986).f_V;
l_HI_989 = (l_U_987).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_988 = rt_add(l_LO_988, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_989 = rt_sub(l_HI_989, ((rt_int)1LL));
}
{ R23 rv991 = ({ R23 rc992; memset(&rc992, 0, sizeof rc992);  rc992.f_OK = 1; rc992.f_V = r_BOOL_INT((((l_A_985).f_V >= l_LO_988) && ((l_A_985).f_V <= l_HI_989))); rc992; });
return rv991; }
}
}
else if (((l_K_939 == g_N_NAME) || (l_K_939 == g_TS_GEN)))
{
{
R12 * l_Y_993; memset(&l_Y_993, 0, sizeof l_Y_993);
l_Y_993 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_994; memset(&l_B_994, 0, sizeof l_B_994);
l_B_994 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_994 == NULL)) goto L_end995;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_994))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_994))).f_HASMV))
{
{ R23 rv996 = ({ R23 rc997; memset(&rc997, 0, sizeof rc997);  rc997.f_OK = 1; rc997.f_V = ((*(R20 *)rt_nil_check(l_B_994))).f_MV; rc997; });
return rv996; }
}
l_B_994 = ((*(R20 *)rt_nil_check(l_B_994))).f_NEXT;
}
RT_B_TICK();
} L_end995: ;
if ((!(l_Y_993 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_993))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_993))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_993))).f_HASMV))
{
{ R23 rv998 = ({ R23 rc999; memset(&rc999, 0, sizeof rc999);  rc999.f_OK = 1; rc999.f_V = ((*(R12 *)rt_nil_check(l_Y_993))).f_MV; rc999; });
return rv998; }
}
if ((((*(R12 *)rt_nil_check(l_Y_993))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1000 = ({ R23 rc1001; memset(&rc1001, 0, sizeof rc1001);  rc1001.f_OK = 1; rc1001.f_V = ((*(R12 *)rt_nil_check(l_Y_993))).f_MV; rc1001; });
return rv1000; }
}
}
}
}
}
else if ((l_K_939 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1002 = ({ R23 rc1003; memset(&rc1003, 0, sizeof rc1003);  rc1003.f_OK = 1; rc1003.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1003; });
return rv1002; }
}
}
else if ((l_K_939 == g_N_FIELD))
{
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SCALE", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RADIX", 5)))) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_1004; memset(&l_Y_1004, 0, sizeof l_Y_1004);
l_Y_1004 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_1004 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1004))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1004))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1004))).f_KIND == g_Y_TYPE))) && (!(((*(R12 *)rt_nil_check(l_Y_1004))).f_T == NULL))))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_1004))).f_T)))).f_KIND == g_T_INT))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1005 = ({ R23 rc1006; memset(&rc1006, 0, sizeof rc1006);  rc1006.f_OK = 1; rc1006.f_V = ((rt_int)2LL); rc1006; });
return rv1005; }
}
{ R23 rv1007 = ({ R23 rc1008; memset(&rc1008, 0, sizeof rc1008);  rc1008.f_OK = 1; rc1008.f_V = ((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_1004))).f_T)))).f_SCALE; rc1008; });
return rv1007; }
}
}
}
}
}
}
else if ((l_K_939 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1009 = ({ R23 rc1010; memset(&rc1010, 0, sizeof rc1010);  rc1010.f_OK = 1; rc1010.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1010; });
return rv1009; }
}
}
{ R23 rv1011 = l_NO_940;
return rv1011; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1012 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1012; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1013 = ((rt_int)1LL);
return rv1013; }
}
{ rt_int rv1014 = ((rt_int)0LL);
return rv1014; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1015; memset(&l_K_1015, 0, sizeof l_K_1015);
l_K_1015 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1015 == g_N_INT))
{
{ R26 rv1016 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1016; }
}
else if ((l_K_1015 == g_N_REAL))
{
{ R26 rv1017 = r_REAL_LITERAL(p_E);
return rv1017; }
}
else if ((l_K_1015 == g_N_BOOL))
{
{ R26 rv1018 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1018; }
}
else if ((l_K_1015 == g_N_NIL))
{
{ R26 rv1019 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1019; }
}
else if ((l_K_1015 == g_N_PAREN))
{
{
R26 l_V_1020; memset(&l_V_1020, 0, sizeof l_V_1020);
S_R26(&l_V_1020, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1020).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1020).f_C), 0);
{ R26 rv1021 = l_V_1020;
return rv1021; }
}
}
else if ((l_K_1015 == g_N_STR))
{
{ R26 rv1022 = r_STRING_LITERAL(p_E);
return rv1022; }
}
else if ((l_K_1015 == g_N_BITS))
{
{ R26 rv1023 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1023; }
}
else if ((l_K_1015 == g_N_ENUMLIT))
{
{ R26 rv1024 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1024; }
}
else if ((l_K_1015 == g_N_RECCONS))
{
{ R26 rv1025 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1025; }
}
else if ((l_K_1015 == g_N_ARRCONS))
{
{ R26 rv1026 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1026; }
}
else if ((l_K_1015 == g_N_TYPESPEC))
{
{ R26 rv1027 = r_TYPE_SPECIFIER(p_E);
return rv1027; }
}
else if ((l_K_1015 == g_N_QUAL))
{
{
rt_int l_SAVED_1028; memset(&l_SAVED_1028, 0, sizeof l_SAVED_1028);
l_SAVED_1028 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1029; memset(&l_V_1029, 0, sizeof l_V_1029);
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
S_R26(&l_V_1029, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1028;
{ R26 rv1030 = l_V_1029;
return rv1030; }
}
}
else if ((l_K_1015 == g_N_NEW))
{
{ R26 rv1031 = r_NEW_EXPR(p_E, p_WANT);
return rv1031; }
}
else if ((l_K_1015 == g_N_NAME))
{
{ R26 rv1032 = r_NAME_EXPR(p_E, p_WANT);
return rv1032; }
}
else if ((l_K_1015 == g_N_APPLY))
{
{
R12 * l_Y_1033; memset(&l_Y_1033, 0, sizeof l_Y_1033);
l_Y_1033 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1033 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1033))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1033))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1034; memset(&l_N_1034, 0, sizeof l_N_1034);
l_N_1034 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1035; memset(&l_A_1035, 0, sizeof l_A_1035);
l_A_1035 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1035))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1034))).f_A = l_A_1035;
((*(R21 *)rt_nil_check(l_N_1034))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1036 = r_EXPR(l_N_1034, p_WANT);
return rv1036; }
}
}
}
{ R26 rv1037 = r_CALL_EXPR(p_E, p_WANT);
return rv1037; }
}
}
else if ((l_K_1015 == g_N_FIELD))
{
{ R26 rv1038 = r_FIELD_EXPR(p_E);
return rv1038; }
}
else if ((l_K_1015 == g_N_DEREF))
{
{
R26 l_B_1039; memset(&l_B_1039, 0, sizeof l_B_1039);
S_R26(&l_B_1039, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1039).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1040; memset(&l_TT_1040, 0, sizeof l_TT_1040);
l_TT_1040 = r_TARGET((l_B_1039).f_T);
{ R26 rv1041 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1040), (l_B_1039).f_C), l_TT_1040, 1, r_NO_TEXT());
return rv1041; }
}
}
}
else if ((l_K_1015 == g_N_INDEX))
{
{ R26 rv1042 = r_INDEX_EXPR(p_E);
return rv1042; }
}
else if ((l_K_1015 == g_N_SUBSTR))
{
{
R26 l_B_1043; memset(&l_B_1043, 0, sizeof l_B_1043);
S_R26(&l_B_1043, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1044; memset(&l_BT_1044, 0, sizeof l_BT_1044);
l_BT_1044 = r_REAL_TYPE((l_B_1043).f_T);
R10 l_LO_1045; memset(&l_LO_1045, 0, sizeof l_LO_1045);
R10 l_HI_1046; memset(&l_HI_1046, 0, sizeof l_HI_1046);
if ((!(((((*(R22 *)rt_nil_check(l_BT_1044))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1044))).f_KIND == g_T_BITS)))))
{
if ((((*(R22 *)rt_nil_check((l_B_1043).f_T))).f_KIND == g_T_ABS))
{
{ R26 rv1047 = r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_1043, ((*(R21 *)rt_nil_check(p_E))).f_B, ((*(R21 *)rt_nil_check(p_E))).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1047; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1045, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1046, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1044))).f_KIND == g_T_BITS))
{
{ R26 rv1048 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1043).f_C, l_LO_1045, l_HI_1046), r_BITS_TYPE(((rt_int)1LL)));
return rv1048; }
}
{
R22 * l_T_1049; memset(&l_T_1049, 0, sizeof l_T_1049);
l_T_1049 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1049))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1044))).f_BASE;
{ R26 rv1050 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1043).f_C, l_LO_1045, l_HI_1046), l_T_1049);
return rv1050; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1044))).f_KIND == g_T_BITS))
{
{ R26 rv1051 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1043).f_C, l_LO_1045, l_HI_1046), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1051; }
}
{
R22 * l_T_1052; memset(&l_T_1052, 0, sizeof l_T_1052);
l_T_1052 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1052))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1044))).f_BASE;
{ R26 rv1053 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1043).f_C, l_LO_1045, l_HI_1046), l_T_1052);
return rv1053; }
}
}
}
else if ((l_K_1015 == g_N_UNOP))
{
{ R26 rv1054 = r_UNARY(p_E);
return rv1054; }
}
else if ((l_K_1015 == g_N_BINOP))
{
{ R26 rv1055 = r_BINARY(p_E);
return rv1055; }
}
else if ((l_K_1015 == g_N_IN))
{
{ R26 rv1056 = r_IN_EXPR(p_E);
return rv1056; }
}
else if (((l_K_1015 == g_N_ANY) || (l_K_1015 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((((((l_K_1015 == g_TS_NAME) || (l_K_1015 == g_TS_ARRAY)) || (l_K_1015 == g_TS_RECORD)) || (l_K_1015 == g_TS_ENUM)) || (l_K_1015 == g_TS_GEN)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1057; memset(&l_SAVED_1057, 0, sizeof l_SAVED_1057);
l_SAVED_1057 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1058; memset(&l_V_1058, 0, sizeof l_V_1058);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R26(&l_V_1058, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1057;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1058).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1059 = (l_V_1058).f_C;
return rv1059; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1058).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1058).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1058).f_T));
}
{ R10 rv1060 = (l_V_1058).f_C;
return rv1060; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1061; memset(&l_V_1061, 0, sizeof l_V_1061);
S_R26(&l_V_1061, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1061).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1061).f_T));
}
{ R10 rv1062 = (l_V_1061).f_C;
return rv1062; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1063; memset(&l_T_1063, 0, sizeof l_T_1063);
l_T_1063 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1063))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1063))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1064 = l_T_1063;
return rv1064; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1065; memset(&l_T_1065, 0, sizeof l_T_1065);
S_R10(&l_T_1065, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1066; memset(&l_S_1066, 0, sizeof l_S_1066);
l_S_1066 = rt_str_new((l_T_1065).f_LEN);
rt_b_assign(&l_S_1066, r_STR(l_T_1065, (l_T_1065).f_LEN));
rt_int l_POINT_1067; memset(&l_POINT_1067, 0, sizeof l_POINT_1067);
l_POINT_1067 = 0;
rt_int l_DIGITS_1068; memset(&l_DIGITS_1068, 0, sizeof l_DIGITS_1068);
l_DIGITS_1068 = ((rt_int)0LL);
{ rt_int it1070_lo = ((rt_int)0LL), it1070_hi = rt_sub((l_T_1065).f_LEN, ((rt_int)1LL));
for (rt_int it1070 = it1070_lo; it1070 <= it1070_hi; it1070++) {
{
if (rt_b_eq(rt_b_slice(l_S_1066, it1070, it1070), rt_str(".", 1)))
{
l_POINT_1067 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1066, it1070, it1070), rt_str("E", 1)))
{
goto L_end1069;
}
else
{
l_DIGITS_1068 = rt_add(l_DIGITS_1068, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1070 == it1070_hi) break;
} } L_end1069: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1067)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1071 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1065), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1071; }
}
if ((!l_POINT_1067))
{
{ R26 rv1072 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1065)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1072; }
}
{
R22 * l_F_1073; memset(&l_F_1073, 0, sizeof l_F_1073);
l_F_1073 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_F_1073))).f_SCALE = l_DIGITS_1068;
if ((l_DIGITS_1068 > ((rt_int)15LL)))
{
((*(R22 *)rt_nil_check(l_F_1073))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_1068 < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1073))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_1066, rt_sub((l_T_1065).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1065).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
{ R26 rv1074 = r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_1065), l_F_1073);
return rv1074; }
}
if (rt_b_eq(rt_b_slice(l_S_1066, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
{ R26 rv1075 = r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_1065), l_F_1073);
return rv1075; }
}
{ R26 rv1076 = r_MKET(r_FMT1(rt_str("(@)", 3), l_T_1065), l_F_1073);
return rv1076; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1077; memset(&l_T_1077, 0, sizeof l_T_1077);
S_R10(&l_T_1077, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1078; memset(&l_S_1078, 0, sizeof l_S_1078);
l_S_1078 = rt_str_new((l_T_1077).f_LEN);
rt_b_assign(&l_S_1078, r_STR(l_T_1077, (l_T_1077).f_LEN));
rt_int l_SIG_1079; memset(&l_SIG_1079, 0, sizeof l_SIG_1079);
l_SIG_1079 = ((rt_int)0LL);
rt_int l_FRAC_1080; memset(&l_FRAC_1080, 0, sizeof l_FRAC_1080);
l_FRAC_1080 = ((rt_int)0LL);
rt_int l_POINT_1081; memset(&l_POINT_1081, 0, sizeof l_POINT_1081);
l_POINT_1081 = 0;
rt_int l_EXP_1082; memset(&l_EXP_1082, 0, sizeof l_EXP_1082);
l_EXP_1082 = ((rt_int)0LL);
rt_int l_I_1083; memset(&l_I_1083, 0, sizeof l_I_1083);
l_I_1083 = ((rt_int)0LL);
for (;;) {
if ((l_I_1083 >= (l_T_1077).f_LEN)) goto L_end1084;
{
if (rt_b_eq(rt_b_slice(l_S_1078, l_I_1083, l_I_1083), rt_str("E", 1)))
{
goto L_end1084;
}
if (rt_b_eq(rt_b_slice(l_S_1078, l_I_1083, l_I_1083), rt_str(".", 1)))
{
l_POINT_1081 = 1;
}
else
{
if (((l_SIG_1079 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1078, l_I_1083, l_I_1083), rt_str("0", 1)))))
{
l_SIG_1079 = rt_add(l_SIG_1079, ((rt_int)1LL));
}
if (l_POINT_1081)
{
l_FRAC_1080 = rt_add(l_FRAC_1080, ((rt_int)1LL));
}
}
l_I_1083 = rt_add(l_I_1083, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1084: ;
if ((rt_sub(l_I_1083, r_BOOL_INT(l_POINT_1081)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1083 < (l_T_1077).f_LEN))
{
{
rt_int l_NEG_1085; memset(&l_NEG_1085, 0, sizeof l_NEG_1085);
l_NEG_1085 = 0;
l_I_1083 = rt_add(l_I_1083, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1078, l_I_1083, l_I_1083), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1078, l_I_1083, l_I_1083), rt_str("+", 1))))
{
l_NEG_1085 = rt_b_eq(rt_b_slice(l_S_1078, l_I_1083, l_I_1083), rt_str("-", 1));
l_I_1083 = rt_add(l_I_1083, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1083 >= (l_T_1077).f_LEN)) goto L_end1086;
{
if ((l_EXP_1082 <= ((rt_int)1000LL)))
{
l_EXP_1082 = rt_sub(rt_add(rt_mul(l_EXP_1082, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1078, l_I_1083, l_I_1083))), ((rt_int)48LL));
}
l_I_1083 = rt_add(l_I_1083, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1086: ;
if ((l_EXP_1082 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1085)
{
l_EXP_1082 = rt_neg(l_EXP_1082);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1079 > ((rt_int)0LL)))
{
{
rt_int l_P10_1087; memset(&l_P10_1087, 0, sizeof l_P10_1087);
l_P10_1087 = rt_sub(rt_add(rt_sub(l_SIG_1079, ((rt_int)1LL)), l_EXP_1082), l_FRAC_1080);
rt_int l_BITS_1088; memset(&l_BITS_1088, 0, sizeof l_BITS_1088);
l_BITS_1088 = rt_add(rt_quot((rt_mul(l_P10_1087, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1087 < ((rt_int)0LL)))
{
l_BITS_1088 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1087), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1088 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1089; memset(&l_CS_1089, 0, sizeof l_CS_1089);
l_CS_1089 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1090; memset(&l_P_1090, 0, sizeof l_P_1090);
l_P_1090 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1091; memset(&l_S_1091, 0, sizeof l_S_1091);
S_R10(&l_S_1091, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1092; memset(&l_Y_1092, 0, sizeof l_Y_1092);
l_Y_1092 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1092 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1092))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1089 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1089)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1089 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1089)))).f_BASE;
}
}
for (;;) {
if ((l_P_1090 == NULL)) goto L_end1093;
{
if ((((*(R21 *)rt_nil_check(l_P_1090))).f_IV == g_K_STR))
{
if ((l_CS_1089 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1091, r_CAT(l_S_1091, ((*(R21 *)rt_nil_check(l_P_1090))).f_NAME), 0);
}
else
{
{
R10 l_Q_1094; memset(&l_Q_1094, 0, sizeof l_Q_1094);
S_R10(&l_Q_1094, ((*(R21 *)rt_nil_check(l_P_1090))).f_NAME, 0);
rstr l_QS_1095; memset(&l_QS_1095, 0, sizeof l_QS_1095);
l_QS_1095 = rt_str_new((l_Q_1094).f_LEN);
rt_b_assign(&l_QS_1095, r_STR(l_Q_1094, (l_Q_1094).f_LEN));
{ rt_int it1097_lo = ((rt_int)0LL), it1097_hi = rt_sub((l_Q_1094).f_LEN, ((rt_int)1LL));
for (rt_int it1097 = it1097_lo; it1097 <= it1097_hi; it1097++) {
{
{
R10 l_LIT_1098; memset(&l_LIT_1098, 0, sizeof l_LIT_1098);
R12 * l_Y_1099; memset(&l_Y_1099, 0, sizeof l_Y_1099);
if (rt_b_eq(rt_b_slice(l_QS_1095, it1097, it1097), rt_str("'", 1)))
{
S_R10(&l_LIT_1098, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1098, r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1095, it1097, it1097)), rt_str("'", 1))), 0);
}
l_Y_1099 = r_FIND_LITERAL(l_LIT_1098, l_CS_1089);
if ((l_Y_1099 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1090))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1095, it1097, it1097)));
}
S_R10(&l_S_1091, r_CATS(l_S_1091, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1099))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1097 == it1097_hi) break;
} } L_end1096: ;
}
}
}
else
{
{
R12 * l_Y_1100; memset(&l_Y_1100, 0, sizeof l_Y_1100);
l_Y_1100 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1090))).f_NAME, l_CS_1089);
if ((l_Y_1100 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1090))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1090))).f_NAME);
}
S_R10(&l_S_1091, r_CATS(l_S_1091, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1100))).f_MV)), 0);
}
}
l_P_1090 = ((*(R21 *)rt_nil_check(l_P_1090))).f_NEXT;
}
RT_B_TICK();
} L_end1093: ;
{
R22 * l_T_1101; memset(&l_T_1101, 0, sizeof l_T_1101);
l_T_1101 = r_STR_TYPE(r_NUM((l_S_1091).f_LEN), r_SOME((l_S_1091).f_LEN));
((*(R22 *)rt_nil_check(l_T_1101))).f_BASE = l_CS_1089;
{ R26 rv1102 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1091), r_NUM((l_S_1091).f_LEN)), l_T_1101);
return rv1102; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1103; memset(&l_TS_1103, 0, sizeof l_TS_1103);
l_TS_1103 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1103))).f_NAME, p_NAME, 0);
{ R22 * rv1104 = r_RESOLVE(l_TS_1103);
return rv1104; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1105; memset(&l_Y_1105, 0, sizeof l_Y_1105);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1106; memset(&l_WT_1106, 0, sizeof l_WT_1106);
l_WT_1106 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1106))).f_KIND == g_T_ENUM))
{
l_Y_1105 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1106);
if ((!(l_Y_1105 == NULL)))
{
{ R26 rv1107 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1105))).f_MV), r_ENUM_RESULT(l_Y_1105, p_WANT));
return rv1107; }
}
}
}
}
l_Y_1105 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1108; memset(&l_FOUND_1108, 0, sizeof l_FOUND_1108);
l_FOUND_1108 = NULL;
rt_int l_N_1109; memset(&l_N_1109, 0, sizeof l_N_1109);
l_N_1109 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1105 == NULL)) goto L_end1110;
{
if ((((*(R12 *)rt_nil_check(l_Y_1105))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1105))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1108 == NULL)))
{
if (((l_FOUND_1108 == NULL) || (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1108))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1108 = l_Y_1105;
}
else
{
l_N_1109 = rt_add(l_N_1109, ((rt_int)1LL));
}
}
}
l_Y_1105 = r_LOOKUP_NEXT(l_Y_1105);
}
RT_B_TICK();
} L_end1110: ;
if ((l_FOUND_1108 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1109 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1111 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1108))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1108))).f_T);
return rv1111; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1112 = p_WANT;
return rv1112; }
}
{ R22 * rv1113 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1113; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1114; memset(&l_Y_1114, 0, sizeof l_Y_1114);
l_Y_1114 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1114 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1114))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1114))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1115; memset(&l_WRITABLE_1115, 0, sizeof l_WRITABLE_1115);
l_WRITABLE_1115 = r_CHECK_IMPORTED(l_Y_1114, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1116 = r_MKLV(r_OBJ_ACCESS(l_Y_1114), ((*(R12 *)rt_nil_check(l_Y_1114))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1114))).f_KIND == g_Y_VAR) && l_WRITABLE_1115), r_NO_TEXT());
return rv1116; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1114))).f_KIND == g_Y_GEN))
{
{ R26 rv1117 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1114))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1114))).f_T);
return rv1117; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1114))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1118 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1118; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1114))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1114))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1119; memset(&l_N_1119, 0, sizeof l_N_1119);
l_N_1119 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1119))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1120 = r_CALL_EXPR(l_N_1119, p_WANT);
return rv1120; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1121; memset(&l_A_1121, 0, sizeof l_A_1121);
l_A_1121 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((*(R21 *)rt_nil_check(l_A_1121))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1121))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1121))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1122; memset(&l_B_1122, 0, sizeof l_B_1122);
S_R26(&l_B_1122, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1121))).f_A))).f_A), 0);
R10 l_I_1123; memset(&l_I_1123, 0, sizeof l_I_1123);
S_R10(&l_I_1123, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1121))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1122).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1124 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1122).f_C, l_I_1123, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1122).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1124; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1125 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1122).f_C, l_I_1123, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1122).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1125; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1121))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1121))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1121))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1121))).f_A))).f_A))).f_NAME))
{
{ R26 rv1126 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1121))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1121))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1126; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1121))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1127; memset(&l_Y_1127, 0, sizeof l_Y_1127);
l_Y_1127 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1121))).f_NAME);
if ((!(l_Y_1127 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1127))).f_KIND == g_Y_TYPE))
{
{ R26 rv1128 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1121))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1128; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1121))).f_NAME))
{
{ R26 rv1129 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1121))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1129; }
}
}
}
{
R26 l_B_1130; memset(&l_B_1130, 0, sizeof l_B_1130);
S_R26(&l_B_1130, r_EXPR(l_A_1121, NULL), 0);
R22 * l_BT_1131; memset(&l_BT_1131, 0, sizeof l_BT_1131);
l_BT_1131 = (l_B_1130).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1131))).f_KIND == g_T_REC))
{
{
R24 * l_F_1132; memset(&l_F_1132, 0, sizeof l_F_1132);
l_F_1132 = r_FIND_VFIELD(l_BT_1131, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1132 == NULL)))
{
r_CHECK_VARIANT(l_F_1132, l_BT_1131, l_A_1121, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1133 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1130).f_C, ((*(R24 *)rt_nil_check(l_F_1132))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1132))).f_T, ((l_B_1130).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1132))).f_KIND == ((rt_int)0LL))), (l_B_1130).f_C);
return rv1133; }
}
}
}
{ R26 rv1134 = r_ATTRIBUTE(l_B_1130, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1134; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1135 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1135; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1136; memset(&l_TAGV_1136, 0, sizeof l_TAGV_1136);
S_R23(&l_TAGV_1136, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1136).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1136).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1137; memset(&l_F_1137, 0, sizeof l_F_1137);
l_F_1137 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1138; memset(&l_A_1138, 0, sizeof l_A_1138);
l_A_1138 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1137 == NULL)) goto L_end1139;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1137))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1138 == NULL))
{
{ R23 rv1140 = r_NO_MVAL();
return rv1140; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1137))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1138))).f_ANYARG)
{
{ R23 rv1141 = r_NO_MVAL();
return rv1141; }
}
{ R23 rv1142 = ((*(R25 *)rt_nil_check(l_A_1138))).f_MLO;
return rv1142; }
}
l_A_1138 = ((*(R25 *)rt_nil_check(l_A_1138))).f_NEXT;
}
l_F_1137 = ((*(R24 *)rt_nil_check(l_F_1137))).f_NEXT;
}
RT_B_TICK();
} L_end1139: ;
{ R23 rv1143 = r_NO_MVAL();
return rv1143; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1144; memset(&l_P_1144, 0, sizeof l_P_1144);
l_P_1144 = p_L;
for (;;) {
if ((l_P_1144 == NULL)) goto L_end1145;
{
if ((((*(R21 *)rt_nil_check(l_P_1144))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1144))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1144))).f_B, p_T)).f_V)))
{
{ rt_int rv1146 = 1;
return rv1146; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1144, p_T)).f_V == p_V))
{
{ rt_int rv1147 = 1;
return rv1147; }
}
l_P_1144 = ((*(R21 *)rt_nil_check(l_P_1144))).f_NEXT;
}
RT_B_TICK();
} L_end1145: ;
{ rt_int rv1148 = 0;
return rv1148; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1149 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1149; }
}
{ R26 rv1150 = r_EXPR(p_E, NULL);
return rv1150; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1151; memset(&l_A_1151, 0, sizeof l_A_1151);
S_R26(&l_A_1151, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1152; memset(&l_I_1152, 0, sizeof l_I_1152);
S_R10(&l_I_1152, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1151).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1153 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1151).f_C, (l_A_1151).f_C, l_I_1152, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1151).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1153; }
}
}
}
{ R26 rv1154 = r_INDEX_EXPR2(p_E);
return rv1154; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1155; memset(&l_B_1155, 0, sizeof l_B_1155);
S_R26(&l_B_1155, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1156; memset(&l_T_1156, 0, sizeof l_T_1156);
l_T_1156 = r_REAL_TYPE((l_B_1155).f_T);
R21 * l_S_1157; memset(&l_S_1157, 0, sizeof l_S_1157);
l_S_1157 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1158; memset(&l_IX_1158, 0, sizeof l_IX_1158);
S_R10(&l_IX_1158, r_MK(rt_str("", 0)), 0);
rt_int l_N_1159; memset(&l_N_1159, 0, sizeof l_N_1159);
l_N_1159 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1156))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1157 == NULL)) goto L_end1160;
{
if ((l_N_1159 > ((rt_int)0LL)))
{
S_R10(&l_IX_1158, r_CATS(l_IX_1158, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1158, r_CAT(l_IX_1158, r_INT_EXPR(l_S_1157)), 0);
l_N_1159 = rt_add(l_N_1159, ((rt_int)1LL));
l_S_1157 = ((*(R21 *)rt_nil_check(l_S_1157))).f_NEXT;
}
RT_B_TICK();
} L_end1160: ;
if ((!(l_N_1159 == ((*(R22 *)rt_nil_check(l_T_1156))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1159 == ((rt_int)1LL)))
{
{ R26 rv1161 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1155).f_C, l_IX_1158, (l_B_1155).f_C, (l_B_1155).f_C), ((*(R22 *)rt_nil_check(l_T_1156))).f_ELEM, (l_B_1155).f_LVAL, r_NO_TEXT());
return rv1161; }
}
{
R10 l_X_1162; memset(&l_X_1162, 0, sizeof l_X_1162);
S_R10(&l_X_1162, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1155).f_C, r_NUM(l_N_1159), (l_B_1155).f_C, (l_B_1155).f_C), 0);
{ R26 rv1163 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1162, l_IX_1158), ((*(R22 *)rt_nil_check(l_T_1156))).f_ELEM, (l_B_1155).f_LVAL, r_NO_TEXT());
return rv1163; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1164 = r_MKN(rt_str("NEGATE_", 7));
return rv1164; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1165 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1165; }
}
{ R10 rv1166 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1166; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1167 = r_MKN(rt_str("ADD_", 4));
return rv1167; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1168 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1168; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1169 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1169; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1170 = r_MKN(rt_str("DIVIDE_", 7));
return rv1170; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1171 = r_MKN(rt_str("MODULUS_", 8));
return rv1171; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1172 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1172; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1173 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1173; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1174 = r_MKN(rt_str("EQUAL_", 6));
return rv1174; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1175 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1175; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1176 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1176; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1177 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1177; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1178 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1178; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1179 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1179; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1180 = r_MKN(rt_str("AND_", 4));
return rv1180; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1181 = r_MKN(rt_str("OR_", 3));
return rv1181; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1182 = r_MKN(rt_str("XOR_", 4));
return rv1182; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1183 = r_MKN(rt_str("IMPLIES_", 8));
return rv1183; }
}
{ R10 rv1184 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1184; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1185; memset(&l_A_1185, 0, sizeof l_A_1185);
l_A_1185 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1185)), ({ R27 rc1186; memset(&rc1186, 0, sizeof rc1186);  rc1186.f_E = NULL; S_R26(&rc1186.f_V, p_V, 0); rc1186.f_HAVE = 1; rc1186.f_MODE = g_M_IN; rc1186.f_NEXT = p_NEXT; rc1186; }), 0);
{ R27 * rv1187 = l_A_1185;
return rv1187; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1188; memset(&l_A_1188, 0, sizeof l_A_1188);
l_A_1188 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1188)), ({ R27 rc1189; memset(&rc1189, 0, sizeof rc1189);  rc1189.f_E = p_E; S_R26(&rc1189.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1189.f_HAVE = 0; rc1189.f_MODE = p_MODE; rc1189.f_NEXT = p_NEXT; rc1189; }), 0);
{ R27 * rv1190 = l_A_1188;
return rv1190; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1191; memset(&l_Y_1191, 0, sizeof l_Y_1191);
l_Y_1191 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1191 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1191 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1192 = l_Y_1191;
return rv1192; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1193; memset(&l_ARGS_1193, 0, sizeof l_ARGS_1193);
l_ARGS_1193 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1194; memset(&l_Y_1194, 0, sizeof l_Y_1194);
l_Y_1194 = r_USER_OPERATOR(p_NAME, l_ARGS_1193, p_LINE);
if ((l_Y_1194 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1195 = r_CALL_SYM(l_Y_1194, l_ARGS_1193, p_LINE);
return rv1195; }
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
{ R10 rv1196 = p_C;
return rv1196; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1197 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1197; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1198 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1198; }
}
{ R10 rv1199 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1199; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1200 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1200; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1201; memset(&l_RT_1201, 0, sizeof l_RT_1201);
l_RT_1201 = r_REAL_TYPE(p_T);
R22 * l_VT_1202; memset(&l_VT_1202, 0, sizeof l_VT_1202);
l_VT_1202 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1202))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_PTR)))
{
{ R10 rv1203 = (p_V).f_C;
return rv1203; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1202))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1202)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1204 = (p_V).f_C;
return rv1204; }
}
if ((!r_SAME_CLASS(l_RT_1201, l_VT_1202)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1202), (r_TYPE_NAME(l_VT_1202)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1201), (r_TYPE_NAME(l_RT_1201)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1201))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1201))).f_SCALE))
{
{ R10 rv1205 = r_RANGE_CHECK(l_RT_1201, (p_V).f_C, p_SELF);
return rv1205; }
}
{ R10 rv1206 = r_RANGE_CHECK(l_RT_1201, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1201))).f_SCALE)), p_SELF);
return rv1206; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_FLOAT) || (((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_ENUM)))
{
{ R10 rv1207 = r_RANGE_CHECK(l_RT_1201, (p_V).f_C, p_SELF);
return rv1207; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RT_1201))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1202))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1201))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1202))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1201), r_TARGET(l_VT_1202))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1201)) && (!r_HAS_ANY(l_VT_1202))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1201))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1202))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1201))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1201))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1202))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1208 = (p_V).f_C;
return rv1208; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1209; memset(&l_ARGS_1209, 0, sizeof l_ARGS_1209);
l_ARGS_1209 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1210; memset(&l_Y_1210, 0, sizeof l_Y_1210);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1209))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1210 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1209, p_LINE, 0);
if ((l_Y_1210 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1209))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1210 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1209, p_LINE, 0);
}
if ((l_Y_1210 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1211 = r_CATS((r_CALL_SYM(l_Y_1210, l_ARGS_1209, p_LINE)).f_C, rt_str(";", 1));
return rv1211; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1212 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1212; }
}
}
{ R10 rv1213 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1213; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1214 = 1;
return rv1214; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1215 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1215; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1216; memset(&l_F_1216, 0, sizeof l_F_1216);
l_F_1216 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1216 == NULL)) goto L_end1217;
{
if ((((*(R24 *)rt_nil_check(l_F_1216))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1216))).f_T))
{
{ rt_int rv1218 = 1;
return rv1218; }
}
}
l_F_1216 = ((*(R24 *)rt_nil_check(l_F_1216))).f_NEXT;
}
RT_B_TICK();
} L_end1217: ;
}
}
{ rt_int rv1219 = 0;
return rv1219; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1220 = 0;
return rv1220; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1221 = 0;
return rv1221; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1222 = 0;
return rv1222; }
}
{ rt_int rv1223 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1223; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1224 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1224; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1225; memset(&l_D_1225, 0, sizeof l_D_1225);
S_R10(&l_D_1225, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1226; memset(&l_S_1226, 0, sizeof l_S_1226);
S_R10(&l_S_1226, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1227; memset(&l_I_1227, 0, sizeof l_I_1227);
S_R10(&l_I_1227, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1228; memset(&l_N_1228, 0, sizeof l_N_1228);
S_R10(&l_N_1228, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1229; memset(&l_VE_1229, 0, sizeof l_VE_1229);
l_VE_1229 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1230; memset(&l_R_1230, 0, sizeof l_R_1230);
S_R10(&l_R_1230, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1225, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1230, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1230, l_S_1226, p_RV), 0);
S_R10(&l_R_1230, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1230, l_N_1228, l_D_1225, l_D_1225), 0);
S_R10(&l_R_1230, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1230, l_S_1226, l_S_1226), 0);
S_R10(&l_R_1230, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1230, l_I_1227, l_N_1228, l_D_1225), 0);
S_R10(&l_R_1230, r_FMT2(rt_str("@@->hi);", 8), l_R_1230, l_D_1225), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1230, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1230, l_I_1227, l_I_1227, l_I_1227), 0);
S_R10(&l_R_1230, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1230, l_I_1227, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1226, l_I_1227), r_NO_TEXT())), 0);
}
S_R10(&l_R_1230, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1230, l_I_1227, l_I_1227, l_I_1227), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1230, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1230, l_I_1227, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1229, r_FMT2(rt_str("@->p[@]", 7), l_D_1225, l_I_1227), r_FMT2(rt_str("@.p[@]", 6), l_S_1226, l_I_1227), p_LINE)), 0);
}
else
{
S_R10(&l_R_1230, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1230, l_I_1227, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1225, l_I_1227), r_FMT2(rt_str("@.p[@]", 6), l_S_1226, l_I_1227))), 0);
}
{ R10 rv1231 = l_R_1230;
return rv1231; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1232; memset(&l_D_1232, 0, sizeof l_D_1232);
S_R10(&l_D_1232, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1233; memset(&l_S_1233, 0, sizeof l_S_1233);
S_R10(&l_S_1233, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1234; memset(&l_F_1234, 0, sizeof l_F_1234);
l_F_1234 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1235; memset(&l_R_1235, 0, sizeof l_R_1235);
S_R10(&l_R_1235, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1232, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1235, r_FMT3(rt_str("@@ = @;", 7), l_R_1235, l_S_1233, p_RV), 0);
for (;;) {
if ((l_F_1234 == NULL)) goto L_end1236;
{
{
R10 l_DF_1237; memset(&l_DF_1237, 0, sizeof l_DF_1237);
S_R10(&l_DF_1237, r_FMT2(rt_str("@->@", 4), l_D_1232, ((*(R24 *)rt_nil_check(l_F_1234))).f_CNAME), 0);
R10 l_SF_1238; memset(&l_SF_1238, 0, sizeof l_SF_1238);
S_R10(&l_SF_1238, r_FMT2(rt_str("@.@", 3), l_S_1233, ((*(R24 *)rt_nil_check(l_F_1234))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1234))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1234))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1235, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1235, l_DF_1237, l_SF_1238), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1234))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1235, r_FMT3(rt_str("@ @ = @;", 8), l_R_1235, l_DF_1237, l_SF_1238), 0);
}
else
{
S_R10(&l_R_1235, r_FMT2(rt_str("@ @", 3), l_R_1235, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1234))).f_T, ((*(R24 *)rt_nil_check(l_F_1234))).f_T, l_DF_1237, l_SF_1238, p_LINE)), 0);
}
}
l_F_1234 = ((*(R24 *)rt_nil_check(l_F_1234))).f_NEXT;
}
RT_B_TICK();
} L_end1236: ;
{ R10 rv1239 = r_CATS(l_R_1235, rt_str(" }", 2));
return rv1239; }
}
}
{ R10 rv1240 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1240; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1241; memset(&l_ARGS_1241, 0, sizeof l_ARGS_1241);
l_ARGS_1241 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1242; memset(&l_Y_1242, 0, sizeof l_Y_1242);
l_Y_1242 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1241, p_LINE);
if ((l_Y_1242 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1243 = (r_CALL_SYM(l_Y_1242, l_ARGS_1241, p_LINE)).f_C;
return rv1243; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1244; memset(&l_X_1244, 0, sizeof l_X_1244);
S_R10(&l_X_1244, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1245; memset(&l_Z_1245, 0, sizeof l_Z_1245);
S_R10(&l_Z_1245, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1246; memset(&l_I_1246, 0, sizeof l_I_1246);
S_R10(&l_I_1246, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1247; memset(&l_N_1247, 0, sizeof l_N_1247);
S_R10(&l_N_1247, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1248; memset(&l_R_1248, 0, sizeof l_R_1248);
S_R10(&l_R_1248, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1244, p_A, l_Z_1245), 0);
S_R10(&l_R_1248, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1248, p_B, l_I_1246, l_N_1247), 0);
S_R10(&l_R_1248, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1248, l_X_1244, l_X_1244, l_Z_1245), 0);
S_R10(&l_R_1248, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1248, l_Z_1245, l_I_1246, l_N_1247), 0);
S_R10(&l_R_1248, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1248, l_X_1244, l_X_1244), 0);
S_R10(&l_R_1248, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1248, l_I_1246, l_I_1246, l_I_1246), 0);
S_R10(&l_R_1248, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1248, l_I_1246, l_I_1246, l_I_1246), 0);
S_R10(&l_R_1248, r_FMT2(rt_str("@@;", 3), l_R_1248, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1244, l_I_1246), r_FMT2(rt_str("@.p[@]", 6), l_Z_1245, l_I_1246), p_LINE)), 0);
{ R10 rv1249 = r_FMT2(rt_str("@ @r; })", 8), l_R_1248, l_I_1246);
return rv1249; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1250; memset(&l_X_1250, 0, sizeof l_X_1250);
S_R10(&l_X_1250, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1251; memset(&l_Z_1251, 0, sizeof l_Z_1251);
S_R10(&l_Z_1251, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1252; memset(&l_F_1252, 0, sizeof l_F_1252);
l_F_1252 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1253; memset(&l_R_1253, 0, sizeof l_R_1253);
S_R10(&l_R_1253, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1250, p_A, l_Z_1251), 0);
R10 l_EQ_1254; memset(&l_EQ_1254, 0, sizeof l_EQ_1254);
S_R10(&l_EQ_1254, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1253, r_FMT2(rt_str("@@;", 3), l_R_1253, p_B), 0);
for (;;) {
if ((l_F_1252 == NULL)) goto L_end1255;
{
{
R10 l_C_1256; memset(&l_C_1256, 0, sizeof l_C_1256);
S_R10(&l_C_1256, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1252))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1250, ((*(R24 *)rt_nil_check(l_F_1252))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1251, ((*(R24 *)rt_nil_check(l_F_1252))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1252))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1254, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1254, r_VARIANT_COND(l_F_1252, p_T, l_X_1250), l_C_1256), 0);
}
else
{
S_R10(&l_EQ_1254, r_FMT2(rt_str("@ && @", 6), l_EQ_1254, l_C_1256), 0);
}
}
l_F_1252 = ((*(R24 *)rt_nil_check(l_F_1252))).f_NEXT;
}
RT_B_TICK();
} L_end1255: ;
{ R10 rv1257 = r_FMT2(rt_str("@ @; })", 7), l_R_1253, l_EQ_1254);
return rv1257; }
}
}
{ R10 rv1258 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1258; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1259; memset(&l_A_1259, 0, sizeof l_A_1259);
S_R26(&l_A_1259, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1260; memset(&l_T_1260, 0, sizeof l_T_1260);
l_T_1260 = (l_A_1259).f_T;
R10 l_OP_1261; memset(&l_OP_1261, 0, sizeof l_OP_1261);
S_R10(&l_OP_1261, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R22 *)rt_nil_check(l_T_1260))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1262; memset(&l_ARGS_1262, 0, sizeof l_ARGS_1262);
l_ARGS_1262 = r_VAL_ARG(l_A_1259, NULL);
R12 * l_Y_1263; memset(&l_Y_1263, 0, sizeof l_Y_1263);
l_Y_1263 = r_USER_OPERATOR(r_OP_NAME(l_OP_1261, 1), l_ARGS_1262, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_1263 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1260));
}
{ R26 rv1264 = r_CALL_SYM(l_Y_1263, l_ARGS_1262, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1264; }
}
}
if (r_TEQS(l_OP_1261, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1260))).f_KIND == g_T_BOOL))
{
{ R26 rv1265 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1259).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1265; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1260))).f_KIND == g_T_BITS))
{
{ R26 rv1266 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1259).f_C), l_T_1260);
return rv1266; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1260))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1261, rt_str("-", 1)))
{
{ R26 rv1267 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1259).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1260))).f_SCALE));
return rv1267; }
}
{ R26 rv1268 = r_MKET((l_A_1259).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1260))).f_SCALE));
return rv1268; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1260))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_1261, rt_str("-", 1)))
{
{ R26 rv1269 = r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_1259).f_C), l_T_1260);
return rv1269; }
}
{ R26 rv1270 = l_A_1259;
return rv1270; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1260));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1271 = (((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1271; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1272; memset(&l_OP_1272, 0, sizeof l_OP_1272);
S_R10(&l_OP_1272, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1273; memset(&l_A_1273, 0, sizeof l_A_1273);
R26 l_B_1274; memset(&l_B_1274, 0, sizeof l_B_1274);
if ((r_TEQS(l_OP_1272, rt_str("&", 1)) || r_TEQS(l_OP_1272, rt_str("!", 1))))
{
{
R23 l_MA_1275; memset(&l_MA_1275, 0, sizeof l_MA_1275);
S_R23(&l_MA_1275, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1276; memset(&l_CA_1276, 0, sizeof l_CA_1276);
S_R10(&l_CA_1276, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1277; memset(&l_CB_1277, 0, sizeof l_CB_1277);
S_R10(&l_CB_1277, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1272, rt_str("&", 1)))
{
{ R26 rv1278 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1276, l_CB_1277), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1278; }
}
{ R26 rv1279 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1276, l_CB_1277), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1279; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1274, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1273, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1274).f_T), 0);
}
else
{
S_R26(&l_A_1273, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1274, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1273).f_T), 0);
}
{ R26 rv1280 = r_APPLY_OPERATOR(p_E, l_OP_1272, l_A_1273, l_B_1274);
return rv1280; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1281; memset(&l_AT_1281, 0, sizeof l_AT_1281);
l_AT_1281 = (p_A).f_T;
R22 * l_BT_1282; memset(&l_BT_1282, 0, sizeof l_BT_1282);
l_BT_1282 = (p_B).f_T;
rt_int l_LINE_1283; memset(&l_LINE_1283, 0, sizeof l_LINE_1283);
l_LINE_1283 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R10 l_NAME_1284; memset(&l_NAME_1284, 0, sizeof l_NAME_1284);
S_R10(&l_NAME_1284, r_OP_NAME(p_OP, 0), 0);
if (((((!(r_LOOKUP(l_NAME_1284) == NULL)) || (!(r_LOOKUP(r_MKN(rt_b_slice(r_STR(l_NAME_1284, (l_NAME_1284).f_LEN), ((rt_int)0LL), rt_sub((l_NAME_1284).f_LEN, ((rt_int)2LL))))) == NULL))) || (((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1285; memset(&l_ARGS_1285, 0, sizeof l_ARGS_1285);
l_ARGS_1285 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R12 * l_Y_1286; memset(&l_Y_1286, 0, sizeof l_Y_1286);
l_Y_1286 = r_USER_OPERATOR(l_NAME_1284, l_ARGS_1285, l_LINE_1283);
if ((!(l_Y_1286 == NULL)))
{
{ R26 rv1287 = r_CALL_SYM(l_Y_1286, l_ARGS_1285, l_LINE_1283);
return rv1287; }
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R12 * l_Q_1288; memset(&l_Q_1288, 0, sizeof l_Q_1288);
l_Q_1288 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1285, l_LINE_1283);
if ((!(l_Q_1288 == NULL)))
{
{ R26 rv1289 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1288, l_ARGS_1285, l_LINE_1283)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1289; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1283, rt_str("no such operation for the abstract type: ", 41), l_NAME_1284);
}
}
}
}
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1290 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1290; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1291 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1291; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_INT)))
{
{ R26 rv1292 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1292; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1293 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1293; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1281, l_BT_1282)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1281))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1283, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1294 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1294; }
}
r_FAILT(l_LINE_1283, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_BITS)))))
{
{
R22 * l_T_1295; memset(&l_T_1295, 0, sizeof l_T_1295);
l_T_1295 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1295))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1281))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1281))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1282))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1295))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1281))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1282))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1295))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1295))).f_MLEN).f_V), 0);
}
{ R26 rv1296 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1295);
return rv1296; }
}
}
r_FAIL(l_LINE_1283, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_BITS)))
{
{ R26 rv1297 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1281);
return rv1297; }
}
r_FAILT(l_LINE_1283, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_INT)))
{
{ R26 rv1298 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1298; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1299; memset(&l_T_1299, 0, sizeof l_T_1299);
l_T_1299 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1299))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1281))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1282))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
{ R26 rv1300 = r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_1299);
return rv1300; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
{ R26 rv1301 = r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_1299);
return rv1301; }
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1281))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1282))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1283, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1283, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1281), (r_TYPE_NAME(l_AT_1281)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1302 = r_MK(rt_str("and", 3));
return rv1302; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1303 = r_MK(rt_str("or", 2));
return rv1303; }
}
{ R10 rv1304 = r_MK(rt_str("xor", 3));
return rv1304; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1305 = p_A;
return rv1305; }
}
{ rt_int rv1306 = p_B;
return rv1306; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1307 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1307; }
}
{ R10 rv1308 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1308; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1309; memset(&l_AT_1309, 0, sizeof l_AT_1309);
l_AT_1309 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1310; memset(&l_BT_1310, 0, sizeof l_BT_1310);
l_BT_1310 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1311; memset(&l_R_1311, 0, sizeof l_R_1311);
if (((((*(R22 *)rt_nil_check(l_AT_1309))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1310))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1309))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1310))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1309))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1310))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1311, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1309))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1310))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1311, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1309, l_BT_1310)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1309))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R22 *)rt_nil_check(l_AT_1309))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1309) || r_HAS_ANY(l_BT_1310)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if (r_HAS_ABS_PART(l_AT_1309))
{
S_R10(&l_R_1311, r_COMPONENT_EQUAL(l_AT_1309, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1311, r_EQUAL_CODE(l_AT_1309, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1311, r_FMT1(rt_str("(!@)", 4), l_R_1311), 0);
}
{ R26 rv1312 = r_MKET(l_R_1311, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1312; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1313; memset(&l_S1_1313, 0, sizeof l_S1_1313);
l_S1_1313 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1314; memset(&l_S2_1314, 0, sizeof l_S2_1314);
l_S2_1314 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1315; memset(&l_S_1315, 0, sizeof l_S_1315);
l_S_1315 = r_MAX_INT(l_S1_1313, l_S2_1314);
R10 l_FN_1316; memset(&l_FN_1316, 0, sizeof l_FN_1316);
S_R10(&l_FN_1316, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1316, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1317 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1316, r_RESCALE_C((p_A).f_C, l_S1_1313, l_S_1315), r_RESCALE_C((p_B).f_C, l_S2_1314, l_S_1315)), r_INT_TYPE(l_S_1315));
return rv1317; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1318 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1313, l_S2_1314)));
return rv1318; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1319 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1313, l_S2_1314)));
return rv1319; }
}
{ R26 rv1320 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1313, l_S2_1314)));
return rv1320; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1321 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1313));
return rv1321; }
}
{ R26 rv1322 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1313));
return rv1322; }
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
rt_int l_S1_1323; memset(&l_S1_1323, 0, sizeof l_S1_1323);
l_S1_1323 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1324; memset(&l_S2_1324, 0, sizeof l_S2_1324);
l_S2_1324 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1325; memset(&l_RND_1325, 0, sizeof l_RND_1325);
S_R10(&l_RND_1325, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1325, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1326 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1326; }
}
{
R23 l_SM_1327; memset(&l_SM_1327, 0, sizeof l_SM_1327);
S_R23(&l_SM_1327, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1328; memset(&l_S_1328, 0, sizeof l_S_1328);
l_S_1328 = (l_SM_1327).f_V;
rt_int l_SR_1329; memset(&l_SR_1329, 0, sizeof l_SR_1329);
l_SR_1329 = r_MAX_INT(l_S1_1323, l_S2_1324);
if ((!(l_SM_1327).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1330 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1328, l_S1_1323), l_S2_1324)), l_RND_1325), r_INT_TYPE(l_S_1328));
return rv1330; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1331 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1328, l_S1_1323), l_S2_1324)), l_RND_1325), r_INT_TYPE(l_S_1328));
return rv1331; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1332 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1323), r_NUM(l_S_1328), l_RND_1325), r_INT_TYPE(l_S_1328));
return rv1332; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_FN_1333; memset(&l_FN_1333, 0, sizeof l_FN_1333);
S_R10(&l_FN_1333, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1333, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1334 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_1333, r_RESCALE_C((p_A).f_C, l_S1_1323, l_SR_1329), r_RESCALE_C((p_B).f_C, l_S2_1324, l_SR_1329)), r_NUM(l_SR_1329), r_NUM(l_S_1328), l_RND_1325), r_INT_TYPE(l_S_1328));
return rv1334; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1335; memset(&l_V_1335, 0, sizeof l_V_1335);
S_R26(&l_V_1335, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1336; memset(&l_T_1336, 0, sizeof l_T_1336);
l_T_1336 = r_REAL_TYPE((l_V_1335).f_T);
R21 * l_R_1337; memset(&l_R_1337, 0, sizeof l_R_1337);
l_R_1337 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1338; memset(&l_TMP_1338, 0, sizeof l_TMP_1338);
S_R10(&l_TMP_1338, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1339; memset(&l_LO_1339, 0, sizeof l_LO_1339);
R26 l_HI_1340; memset(&l_HI_1340, 0, sizeof l_HI_1340);
R10 l_LOC_1341; memset(&l_LOC_1341, 0, sizeof l_LOC_1341);
R10 l_HIC_1342; memset(&l_HIC_1342, 0, sizeof l_HIC_1342);
R10 l_LO_OP_1343; memset(&l_LO_OP_1343, 0, sizeof l_LO_OP_1343);
S_R10(&l_LO_OP_1343, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1344; memset(&l_HI_OP_1344, 0, sizeof l_HI_OP_1344);
S_R10(&l_HI_OP_1344, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1339, r_EXPR(((*(R21 *)rt_nil_check(l_R_1337))).f_A, l_T_1336), 0);
S_R26(&l_HI_1340, r_EXPR(((*(R21 *)rt_nil_check(l_R_1337))).f_B, l_T_1336), 0);
if (((((*(R22 *)rt_nil_check(l_T_1336))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1336))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1336))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1336))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1336))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1339).f_T), l_T_1336)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1340).f_T), l_T_1336))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1337))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1337))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1343, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1337))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1344, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1336))).f_KIND == g_T_INT))
{
{
R26 l_X_1345; memset(&l_X_1345, 0, sizeof l_X_1345);
S_R26(&l_X_1345, r_MKET(l_TMP_1338, (l_V_1335).f_T), 0);
S_R10(&l_LOC_1341, r_FIXED_COMPARE(l_LO_1339, l_X_1345, l_LO_OP_1343), 0);
S_R10(&l_HIC_1342, r_FIXED_COMPARE(l_X_1345, l_HI_1340, l_HI_OP_1344), 0);
}
}
else
{
S_R10(&l_LOC_1341, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1339).f_C, l_LO_OP_1343, l_TMP_1338), 0);
S_R10(&l_HIC_1342, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1338, l_HI_OP_1344, (l_HI_1340).f_C), 0);
}
{ R26 rv1346 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1336), l_TMP_1338, (l_V_1335).f_C, l_LOC_1341), r_FMT1(rt_str("@; })", 5), l_HIC_1342)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1346; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1347 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1347; }
}
{ R10 rv1348 = (p_V).f_C;
return rv1348; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1349 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1349; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1350; memset(&l_B_1350, 0, sizeof l_B_1350);
l_B_1350 = ((rt_int)0LL);
rt_int l_P_1351; memset(&l_P_1351, 0, sizeof l_P_1351);
l_P_1351 = ((rt_int)1LL);
for (;;) {
if ((l_P_1351 >= p_N)) goto L_end1352;
{
l_B_1350 = rt_add(l_B_1350, ((rt_int)1LL));
l_P_1351 = rt_mul(l_P_1351, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1352: ;
{ rt_int rv1353 = l_B_1350;
return rv1353; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1354; memset(&l_M_1354, 0, sizeof l_M_1354);
S_R23(&l_M_1354, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1354).f_OK)
{
{ rt_int rv1355 = (l_M_1354).f_V;
return rv1355; }
}
}
}
}
{ rt_int rv1356 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1356; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1357; memset(&l_T_1357, 0, sizeof l_T_1357);
l_T_1357 = (p_B).f_T;
rt_int l_K_1358; memset(&l_K_1358, 0, sizeof l_K_1358);
l_K_1358 = ((*(R22 *)rt_nil_check(l_T_1357))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1359 = r_SIZE_OF(l_T_1357, (p_B).f_C);
return rv1359; }
}
if ((l_K_1358 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1360 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1357))).f_SCALE);
return rv1360; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1361 = r_INT_ET(((rt_int)2LL));
return rv1361; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1362 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1362; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1363 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1363; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1357))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1364 = r_MKET(((*(R22 *)rt_nil_check(l_T_1357))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1357))).f_SCALE));
return rv1364; }
}
{ R26 rv1365 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1357))).f_SCALE));
return rv1365; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1357))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1366 = r_MKET(((*(R22 *)rt_nil_check(l_T_1357))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1357))).f_SCALE));
return rv1366; }
}
{ R26 rv1367 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1357))).f_SCALE));
return rv1367; }
}
}
else if ((l_K_1358 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1368 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1357))).f_SCALE);
return rv1368; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1369 = r_INT_ET(((rt_int)15LL));
return rv1369; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1370 = r_INT_ET(((rt_int)2LL));
return rv1370; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ R26 rv1371 = r_INT_ET(rt_neg(((rt_int)1022LL)));
return rv1371; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ R26 rv1372 = r_INT_ET(((rt_int)1023LL));
return rv1372; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
{ R26 rv1373 = r_INT_ET(((rt_int)53LL));
return rv1373; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ R26 rv1374 = r_INT_ET(((rt_int)11LL));
return rv1374; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1357))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1375 = r_MKET(((*(R22 *)rt_nil_check(l_T_1357))).f_LO_C, l_T_1357);
return rv1375; }
}
{ R26 rv1376 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1357);
return rv1376; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1357))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1377 = r_MKET(((*(R22 *)rt_nil_check(l_T_1357))).f_HI_C, l_T_1357);
return rv1377; }
}
{ R26 rv1378 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1357);
return rv1378; }
}
}
else if ((l_K_1358 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1357))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1379 = r_MKET(((*(R22 *)rt_nil_check(l_T_1357))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1357))).f_BASE);
return rv1379; }
}
{ R26 rv1380 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1357))).f_BASE);
return rv1380; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1357))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1381 = r_MKET(((*(R22 *)rt_nil_check(l_T_1357))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1357))).f_BASE);
return rv1381; }
}
{ R26 rv1382 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1357))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1357))).f_BASE);
return rv1382; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1357))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1383 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R22 *)rt_nil_check(l_T_1357))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1357))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1383; }
}
{ R26 rv1384 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1357))).f_BASE))).f_NLITS);
return rv1384; }
}
}
else if (((l_K_1358 == g_T_STR) || (l_K_1358 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1385 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1385; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1386 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1386; }
}
}
else if ((l_K_1358 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1387 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1357))).f_DIMS);
return rv1387; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1357))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1388 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1388; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1389 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1389; }
}
}
else if ((l_K_1358 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1357))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1390 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1390; }
}
{ R26 rv1391 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1391; }
}
}
else if (((l_K_1358 == g_T_ABS) || (l_K_1358 == g_T_REC)))
{
{
R22 * l_U_1392; memset(&l_U_1392, 0, sizeof l_U_1392);
l_U_1392 = l_T_1357;
if ((l_K_1358 == g_T_ABS))
{
l_U_1392 = ((*(R22 *)rt_nil_check(l_T_1357))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1392))).f_KIND == g_T_REC))
{
{
R24 * l_F_1393; memset(&l_F_1393, 0, sizeof l_F_1393);
l_F_1393 = r_FIND_FIELD(l_U_1392, p_NAME);
if ((!(l_F_1393 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1393))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1394 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1393))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1393))).f_T);
return rv1394; }
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
R21 * l_N_1395; memset(&l_N_1395, 0, sizeof l_N_1395);
l_N_1395 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1395))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1396 = l_N_1395;
return rv1396; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1397; memset(&l_K_1397, 0, sizeof l_K_1397);
l_K_1397 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1397 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1398 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1398; }
}
}
{ R26 rv1399 = r_INT_ET(((rt_int)64LL));
return rv1399; }
}
else if ((l_K_1397 == g_T_FLOAT))
{
{ R26 rv1400 = r_INT_ET(((rt_int)64LL));
return rv1400; }
}
else if ((l_K_1397 == g_T_BOOL))
{
{ R26 rv1401 = r_INT_ET(((rt_int)1LL));
return rv1401; }
}
else if ((l_K_1397 == g_T_ENUM))
{
{ R26 rv1402 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1402; }
}
else if ((l_K_1397 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1403 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1403; }
}
{ R26 rv1404 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1404; }
}
else if ((l_K_1397 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1405 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1405; }
}
{ R26 rv1406 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1406; }
}
else if (((l_K_1397 == g_T_PTR) || (l_K_1397 == g_T_SEM)))
{
{ R26 rv1407 = r_INT_ET(((rt_int)64LL));
return rv1407; }
}
else if ((l_K_1397 == g_T_ABS))
{
{ R26 rv1408 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1408; }
}
else if ((l_K_1397 == g_T_ARR))
{
{ R26 rv1409 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1409; }
}
{ R26 rv1410 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1410; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1411 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1411; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1412; memset(&l_T_1412, 0, sizeof l_T_1412);
l_T_1412 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
R22 * l_RT_1413; memset(&l_RT_1413, 0, sizeof l_RT_1413);
l_RT_1413 = r_REAL_TYPE(l_T_1412);
if (((((*(R22 *)rt_nil_check(l_RT_1413))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1413))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1414; memset(&l_TMP_1414, 0, sizeof l_TMP_1414);
S_R10(&l_TMP_1414, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1415; memset(&l_C_1415, 0, sizeof l_C_1415);
S_R10(&l_C_1415, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(l_T_1412), l_TMP_1414, l_TMP_1414, l_TMP_1414), 0);
S_R10(&l_C_1415, r_FMT3(rt_str("@@ @; })", 8), l_C_1415, r_INIT_CODE(l_RT_1413, l_TMP_1414), l_TMP_1414), 0);
{ R26 rv1416 = r_MKET(l_C_1415, l_T_1412);
return rv1416; }
}
}
{ R26 rv1417 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1412)), l_T_1412);
return rv1417; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1418 = 0;
return rv1418; }
}
{
R12 * l_Y_1419; memset(&l_Y_1419, 0, sizeof l_Y_1419);
l_Y_1419 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1419 == NULL))
{
{ rt_int rv1420 = 0;
return rv1420; }
}
{ rt_int rv1421 = (((*(R12 *)rt_nil_check(l_Y_1419))).f_KIND == g_Y_TYPE);
return rv1421; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1422 = r_INT_ET(((rt_int)100000000LL));
return rv1422; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1423 = r_INT_ET(((rt_int)15LL));
return rv1423; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1424 = r_INT_ET(((rt_int)0LL));
return rv1424; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1425; memset(&l_T_1425, 0, sizeof l_T_1425);
l_T_1425 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1425 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1425 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1425 = r_REAL_TYPE(l_T_1425);
if ((!(((*(R22 *)rt_nil_check(l_T_1425))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1425))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1426; memset(&l_TMP_1426, 0, sizeof l_TMP_1426);
S_R10(&l_TMP_1426, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1427; memset(&l_R_1427, 0, sizeof l_R_1427);
S_R10(&l_R_1427, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1425))).f_CNAME, l_TMP_1426, l_TMP_1426, l_TMP_1426), 0);
R24 * l_F_1428; memset(&l_F_1428, 0, sizeof l_F_1428);
l_F_1428 = ((*(R22 *)rt_nil_check(l_T_1425))).f_FIELDS;
S_R10(&l_R_1427, r_FMT2(rt_str("@@", 2), l_R_1427, r_INIT_CODE(l_T_1425, l_TMP_1426)), 0);
for (;;) {
if ((l_F_1428 == NULL)) goto L_end1429;
{
if ((((*(R24 *)rt_nil_check(l_F_1428))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1428))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1428))).f_LABELS, (r_TAG_VALUE(l_T_1425, ((*(R24 *)rt_nil_check(l_F_1428))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1425, ((*(R24 *)rt_nil_check(l_F_1428))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1430; memset(&l_INIT_1430, 0, sizeof l_INIT_1430);
l_INIT_1430 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1428))).f_NAME);
if ((l_INIT_1430 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1428))).f_NAME);
}
S_R10(&l_R_1427, r_FMT2(rt_str("@ @", 3), l_R_1427, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1428))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1426, ((*(R24 *)rt_nil_check(l_F_1428))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1430))).f_A, ((*(R24 *)rt_nil_check(l_F_1428))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1430))).f_LINE, l_TMP_1426)), 0);
}
}
}
l_F_1428 = ((*(R24 *)rt_nil_check(l_F_1428))).f_NEXT;
}
RT_B_TICK();
} L_end1429: ;
{
R21 * l_P_1431; memset(&l_P_1431, 0, sizeof l_P_1431);
l_P_1431 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1431 == NULL)) goto L_end1432;
{
{
R24 * l_G_1433; memset(&l_G_1433, 0, sizeof l_G_1433);
l_G_1433 = r_FIND_VFIELD(l_T_1425, ((*(R21 *)rt_nil_check(l_P_1431))).f_NAME);
if ((l_G_1433 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1431))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1431))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1433))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1431))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1431))).f_NAME);
}
r_CHECK_VARIANT(l_G_1433, l_T_1425, NULL, ((*(R21 *)rt_nil_check(l_P_1431))).f_LINE);
}
l_P_1431 = ((*(R21 *)rt_nil_check(l_P_1431))).f_NEXT;
}
RT_B_TICK();
} L_end1432: ;
}
{ R26 rv1434 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1427, l_TMP_1426), l_T_1425);
return rv1434; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1435; memset(&l_P_1435, 0, sizeof l_P_1435);
l_P_1435 = p_L;
for (;;) {
if ((l_P_1435 == NULL)) goto L_end1436;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1435))).f_NAME, p_NAME))
{
{ R21 * rv1437 = l_P_1435;
return rv1437; }
}
l_P_1435 = ((*(R21 *)rt_nil_check(l_P_1435))).f_NEXT;
}
RT_B_TICK();
} L_end1436: ;
{ R21 * rv1438 = NULL;
return rv1438; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1439; memset(&l_DIMS_1439, 0, sizeof l_DIMS_1439);
l_DIMS_1439 = ((rt_int)0LL);
R21 * l_P_1440; memset(&l_P_1440, 0, sizeof l_P_1440);
l_P_1440 = p_E;
R22 * l_ELEM_1441; memset(&l_ELEM_1441, 0, sizeof l_ELEM_1441);
l_ELEM_1441 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1440))).f_KIND == g_N_ARRCONS))) goto L_end1442;
{
l_DIMS_1439 = rt_add(l_DIMS_1439, ((rt_int)1LL));
l_P_1440 = ((*(R21 *)rt_nil_check(l_P_1440))).f_A;
}
RT_B_TICK();
} L_end1442: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1441 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1441 == NULL))
{
l_ELEM_1441 = (r_EXPR(l_P_1440, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1441))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1441))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1441 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1443; memset(&l_A_1443, 0, sizeof l_A_1443);
l_A_1443 = r_ARRAY_OF(l_ELEM_1441, l_DIMS_1439);
R10 l_TMP_1444; memset(&l_TMP_1444, 0, sizeof l_TMP_1444);
S_R10(&l_TMP_1444, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1445; memset(&l_R_1445, 0, sizeof l_R_1445);
S_R10(&l_R_1445, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1443))).f_CNAME, l_TMP_1444, l_TMP_1444), 0);
rt_int l_K_1446; memset(&l_K_1446, 0, sizeof l_K_1446);
l_K_1446 = ((rt_int)0LL);
S_R10(&l_R_1445, r_FMT2(rt_str("@@); ", 5), l_R_1445, l_TMP_1444), 0);
l_P_1440 = p_E;
{ rt_int it1448_lo = ((rt_int)0LL), it1448_hi = rt_sub(l_DIMS_1439, ((rt_int)1LL));
for (rt_int it1448 = it1448_lo; it1448 <= it1448_hi; it1448++) {
{
S_R10(&l_R_1445, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1445, l_TMP_1444, r_NUM(it1448), l_TMP_1444), 0);
S_R10(&l_R_1445, r_FMT3(rt_str("@@] = @;", 8), l_R_1445, r_NUM(it1448), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1440))).f_A), ((rt_int)1LL)))), 0);
l_P_1440 = ((*(R21 *)rt_nil_check(l_P_1440))).f_A;
}
RT_B_TICK();
if (it1448 == it1448_hi) break;
} } L_end1447: ;
S_R10(&l_R_1445, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1445, l_TMP_1444, l_TMP_1444, r_NUM(l_DIMS_1439)), 0);
S_R10(&l_R_1445, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1445, l_TMP_1444, l_TMP_1444), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1439, l_A_1443, l_TMP_1444, &l_R_1445, &l_K_1446);
{ R26 rv1449 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1445, l_TMP_1444), l_A_1443);
return rv1449; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1450; memset(&l_P_1450, 0, sizeof l_P_1450);
l_P_1450 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1450 == NULL)) goto L_end1451;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1450, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1450))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1450))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1450, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1450))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1450 = ((*(R21 *)rt_nil_check(l_P_1450))).f_NEXT;
}
RT_B_TICK();
} L_end1451: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1452; memset(&l_T_1452, 0, sizeof l_T_1452);
l_T_1452 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1452))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1452))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1452))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1453 = l_T_1452;
return rv1453; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1454; memset(&l_T_1454, 0, sizeof l_T_1454);
l_T_1454 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1455; memset(&l_V_1455, 0, sizeof l_V_1455);
S_R26(&l_V_1455, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1454), 0);
R22 * l_RT_1456; memset(&l_RT_1456, 0, sizeof l_RT_1456);
l_RT_1456 = r_REAL_TYPE(l_T_1454);
if (((((*(R22 *)rt_nil_check((l_V_1455).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1456))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1456))).f_KIND == g_T_INT))
{
{ R26 rv1457 = r_MKET(r_RANGE_CHECK(l_RT_1456, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1455).f_C), r_NO_TEXT()), l_T_1454);
return rv1457; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1456))).f_KIND == g_T_BOOL))
{
{ R26 rv1458 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1455).f_C), l_T_1454);
return rv1458; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1456))).f_KIND == g_T_ENUM))
{
{ R26 rv1459 = r_MKET(r_ENUM_OF_BITS(l_RT_1456, (l_V_1455).f_C), l_T_1454);
return rv1459; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1456))).f_KIND == g_T_FLOAT))
{
{ R26 rv1460 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1455).f_C), l_T_1454);
return rv1460; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1456))).f_KIND == g_T_STR))
{
{ R26 rv1461 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1455).f_C), l_T_1454);
return rv1461; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{ R26 rv1462 = r_MKET(r_CONVERT(l_V_1455, l_T_1454, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_1454);
return rv1462; }
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1463 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1463; }
}
}
{ R10 rv1464 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1464; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1465; memset(&l_NAME_1465, 0, sizeof l_NAME_1465);
S_R10(&l_NAME_1465, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1466; memset(&l_L_1466, 0, sizeof l_L_1466);
l_L_1466 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1467; memset(&l_R_1467, 0, sizeof l_R_1467);
S_R10(&l_R_1467, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1466 == NULL)) goto L_end1468;
{
{
R21 * l_V_1469; memset(&l_V_1469, 0, sizeof l_V_1469);
l_V_1469 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1470; memset(&l_FOUND_1470, 0, sizeof l_FOUND_1470);
l_FOUND_1470 = 0;
for (;;) {
if ((l_V_1469 == NULL)) goto L_end1471;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1469))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1466))).f_NAME))
{
S_R10(&l_R_1467, r_FMT2(rt_str("@@, ", 4), l_R_1467, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1469))).f_A, NULL)).f_C), 0);
l_FOUND_1470 = 1;
}
l_V_1469 = ((*(R21 *)rt_nil_check(l_V_1469))).f_NEXT;
}
RT_B_TICK();
} L_end1471: ;
if ((!l_FOUND_1470))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1466))).f_NAME);
}
}
l_L_1466 = ((*(R21 *)rt_nil_check(l_L_1466))).f_NEXT;
}
RT_B_TICK();
} L_end1468: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1465, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1467, l_NAME_1465, l_NAME_1465));
{ R10 rv1472 = r_FMT2(rt_str("@, @", 4), l_NAME_1465, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1472; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1473; memset(&l_SEM_1473, 0, sizeof l_SEM_1473);
l_SEM_1473 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1473 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1473)
{
{
R22 * l_T_1474; memset(&l_T_1474, 0, sizeof l_T_1474);
l_T_1474 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1474 = p_WANT;
}
}
{ R26 rv1475 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1474))).f_SCALE)), l_T_1474);
return rv1475; }
}
}
{
R22 * l_T_1476; memset(&l_T_1476, 0, sizeof l_T_1476);
l_T_1476 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1477; memset(&l_P_1477, 0, sizeof l_P_1477);
l_P_1477 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1477))).f_TARGET = l_T_1476;
((*(R22 *)rt_nil_check(l_P_1477))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1476))
{
{ R26 rv1478 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1476), r_INIT_CODE(l_T_1476, r_MK(rt_str("(*p)", 4)))), l_P_1477);
return rv1478; }
}
{ R26 rv1479 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1476), r_CTYPE(l_T_1476)), l_P_1477);
return rv1479; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1480; memset(&l_P_1480, 0, sizeof l_P_1480);
l_P_1480 = p_L;
{ rt_int it1482_lo = ((rt_int)1LL), it1482_hi = p_K;
for (rt_int it1482 = it1482_lo; it1482 <= it1482_hi; it1482++) {
{
if ((!(l_P_1480 == NULL)))
{
l_P_1480 = ((*(R21 *)rt_nil_check(l_P_1480))).f_NEXT;
}
}
RT_B_TICK();
if (it1482 == it1482_hi) break;
} } L_end1481: ;
{ R21 * rv1483 = l_P_1480;
return rv1483; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1484; memset(&l_N_1484, 0, sizeof l_N_1484);
l_N_1484 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1484 < p_LO) || (l_N_1484 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1485; memset(&l_L_1485, 0, sizeof l_L_1485);
l_L_1485 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1485 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1485))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1485))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1485))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1486 = r_MK(rt_str("1", 1));
return rv1486; }
}
{ R10 rv1487 = r_MK(rt_str("0", 1));
return rv1487; }
}
if (((((*(R21 *)rt_nil_check(l_L_1485))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1485))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1485))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1488 = r_MK(rt_str("1", 1));
return rv1488; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1485))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1489 = r_MK(rt_str("0", 1));
return rv1489; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1490 = r_MK(rt_str("1", 1));
return rv1490; }
}
{ R10 rv1491 = r_MK(rt_str("0", 1));
return rv1491; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1492 = 0;
return rv1492; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1493 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1493; }
}
{ rt_int rv1494 = 0;
return rv1494; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1495 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1495; }
}
{ R21 * rv1496 = p_E;
return rv1496; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1497; memset(&l_NAME_1497, 0, sizeof l_NAME_1497);
S_R10(&l_NAME_1497, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1498; memset(&l_LINE_1498, 0, sizeof l_LINE_1498);
l_LINE_1498 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_1497, rt_str("PUT", 3)) || r_TEQS(l_NAME_1497, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1499; memset(&l_V_1499, 0, sizeof l_V_1499);
S_R26(&l_V_1499, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1499).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1498, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1497, rt_str("PUT", 3)))
{
{ R26 rv1500 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1499).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1500; }
}
{ R26 rv1501 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1499).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1501; }
}
}
else if (r_TEQS(l_NAME_1497, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1502 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1502; }
}
else if (r_TEQS(l_NAME_1497, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1503 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1503; }
}
else if (r_TEQS(l_NAME_1497, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1504 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1504; }
}
else if (r_TEQS(l_NAME_1497, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1505 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1505; }
}
else if (r_TEQS(l_NAME_1497, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1506 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1506; }
}
else if (r_TEQS(l_NAME_1497, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1507 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1507; }
}
if (r_TEQS(l_NAME_1497, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1508 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1498);
return rv1508; }
}
else if (r_TEQS(l_NAME_1497, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1509 = r_TO_FIXED_CALL(p_E);
return rv1509; }
}
else if (r_TEQS(l_NAME_1497, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1510; memset(&l_V_1510, 0, sizeof l_V_1510);
S_R26(&l_V_1510, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1511; memset(&l_P_1511, 0, sizeof l_P_1511);
S_R23(&l_P_1511, r_MANIFEST(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R22 * l_VT_1512; memset(&l_VT_1512, 0, sizeof l_VT_1512);
l_VT_1512 = r_REAL_TYPE((l_V_1510).f_T);
R22 * l_T_1513; memset(&l_T_1513, 0, sizeof l_T_1513);
l_T_1513 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_1511).f_OK))
{
r_FAIL(l_LINE_1498, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_1511).f_V < ((rt_int)1LL)) || ((l_P_1511).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_1498, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R22 *)rt_nil_check(l_T_1513))).f_SCALE = (l_P_1511).f_V;
if ((((*(R22 *)rt_nil_check(l_VT_1512))).f_KIND == g_T_INT))
{
{ R26 rv1514 = r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_1510).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1512))).f_SCALE)), l_T_1513);
return rv1514; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1512))).f_KIND == g_T_FLOAT))
{
{ R26 rv1515 = r_MKET((l_V_1510).f_C, l_T_1513);
return rv1515; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1512))).f_KIND == g_T_STR))
{
{ R26 rv1516 = r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_1510).f_C), l_T_1513);
return rv1516; }
}
r_FAIL(l_LINE_1498, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1497, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1517 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1498);
return rv1517; }
}
else if (r_TEQS(l_NAME_1497, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1518; memset(&l_V_1518, 0, sizeof l_V_1518);
S_R26(&l_V_1518, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1518).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1519 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1518).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1518).f_T))).f_SCALE));
return rv1519; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1518).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1520 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1518).f_C), (l_V_1518).f_T);
return rv1520; }
}
r_FAIL(l_LINE_1498, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1497, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1497, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1521; memset(&l_V_1521, 0, sizeof l_V_1521);
S_R26(&l_V_1521, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1522; memset(&l_T_1522, 0, sizeof l_T_1522);
l_T_1522 = r_REAL_TYPE((l_V_1521).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1522))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1498, rt_str("an enumerated value expected by ", 32), l_NAME_1497);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1522))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1498, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1497);
}
if (r_TEQS(l_NAME_1497, rt_str("SUCC", 4)))
{
{ R26 rv1523 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1521).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1522))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1522))).f_BASE);
return rv1523; }
}
{ R26 rv1524 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1521).f_C), ((*(R22 *)rt_nil_check(l_T_1522))).f_BASE);
return rv1524; }
}
}
else if (r_TEQS(l_NAME_1497, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1525; memset(&l_V_1525, 0, sizeof l_V_1525);
S_R26(&l_V_1525, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1526; memset(&l_K_1526, 0, sizeof l_K_1526);
l_K_1526 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1525).f_T)))).f_KIND;
R22 * l_T_1527; memset(&l_T_1527, 0, sizeof l_T_1527);
l_T_1527 = r_NEW_TYP(l_K_1526);
if (((!(l_K_1526 == g_T_STR)) && (!(l_K_1526 == g_T_BITS))))
{
r_FAIL(l_LINE_1498, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1527))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1525).f_T))).f_BASE;
{ R26 rv1528 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1525).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1527);
return rv1528; }
}
}
else if (r_TEQS(l_NAME_1497, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1529 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1529; }
}
else if (r_TEQS(l_NAME_1497, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1530 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1530; }
}
else if (((r_TEQS(l_NAME_1497, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1497, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1497, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1531; memset(&l_BITS_1531, 0, sizeof l_BITS_1531);
S_R10(&l_BITS_1531, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1497, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1531, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1497, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1531, r_MK(rt_str("4", 1)), 0);
}
{ R26 rv1532 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1531), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1532; }
}
}
else if ((r_TEQS(l_NAME_1497, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1497, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1533; memset(&l_S_1533, 0, sizeof l_S_1533);
S_R23(&l_S_1533, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_1533).f_OK))
{
r_FAIL(l_LINE_1498, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_1497, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1534 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1533).f_V));
return rv1534; }
}
{ R26 rv1535 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1533).f_V));
return rv1535; }
}
}
else if (((r_TEQS(l_NAME_1497, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1497, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1497, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R22 * l_T_1536; memset(&l_T_1536, 0, sizeof l_T_1536);
l_T_1536 = r_NEW_TYP(g_T_FLOAT);
R23 l_P_1537; memset(&l_P_1537, 0, sizeof l_P_1537);
S_R23(&l_P_1537, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_1537).f_OK))
{
r_FAIL(l_LINE_1498, rt_str("the precision must be manifest", 30));
}
((*(R22 *)rt_nil_check(l_T_1536))).f_SCALE = (l_P_1537).f_V;
if (r_TEQS(l_NAME_1497, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1538 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1536);
return rv1538; }
}
else if (r_TEQS(l_NAME_1497, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1539 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1536);
return rv1539; }
}
{ R26 rv1540 = r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_1536);
return rv1540; }
}
}
else if (r_TEQS(l_NAME_1497, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1541 = r_INT_ET(((rt_int)15LL));
return rv1541; }
}
else if (r_TEQS(l_NAME_1497, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1542 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1542; }
}
else if (r_TEQS(l_NAME_1497, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1543 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1543; }
}
{ R26 rv1544 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1544; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1545; memset(&l_T_1545, 0, sizeof l_T_1545);
l_T_1545 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1546; memset(&l_K_1546, 0, sizeof l_K_1546);
l_K_1546 = ((*(R22 *)rt_nil_check(l_T_1545))).f_KIND;
R22 * l_S_1547; memset(&l_S_1547, 0, sizeof l_S_1547);
l_S_1547 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1546 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1545))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1548 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1547);
return rv1548; }
}
{ R26 rv1549 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1545))).f_SCALE)), l_S_1547);
return rv1549; }
}
else if ((l_K_1546 == g_T_FLOAT))
{
{ R26 rv1550 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1545))).f_SCALE)), l_S_1547);
return rv1550; }
}
else if ((l_K_1546 == g_T_BOOL))
{
{ R26 rv1551 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1547);
return rv1551; }
}
else if ((l_K_1546 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1545))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1552 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1547);
return rv1552; }
}
{ R26 rv1553 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1545))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1547);
return rv1553; }
}
else if (((l_K_1546 == g_T_STR) || (l_K_1546 == g_T_BITS)))
{
{ R26 rv1554 = r_MKET((p_V).f_C, l_S_1547);
return rv1554; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1545));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1555; memset(&l_V_1555, 0, sizeof l_V_1555);
S_R26(&l_V_1555, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1556; memset(&l_T_1556, 0, sizeof l_T_1556);
l_T_1556 = r_REAL_TYPE((l_V_1555).f_T);
rt_int l_N_1557; memset(&l_N_1557, 0, sizeof l_N_1557);
l_N_1557 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1558; memset(&l_RND_1558, 0, sizeof l_RND_1558);
S_R10(&l_RND_1558, r_ROUNDING_ARG(p_E, l_N_1557), 0);
rt_int l_S_1559; memset(&l_S_1559, 0, sizeof l_S_1559);
l_S_1559 = ((rt_int)0LL);
if (((l_N_1557 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R23 l_SM_1560; memset(&l_SM_1560, 0, sizeof l_SM_1560);
S_R23(&l_SM_1560, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_1560).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_1559 = (l_SM_1560).f_V;
}
}
if ((l_N_1557 >= ((rt_int)3LL)))
{
{
R21 * l_R_1561; memset(&l_R_1561, 0, sizeof l_R_1561);
l_R_1561 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_1561)) && (!r_TEQS(((*(R21 *)rt_nil_check(l_R_1561))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_1561)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if (((((*(R22 *)rt_nil_check(l_T_1556))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1562 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1559), l_RND_1558), r_INT_TYPE(l_S_1559));
return rv1562; }
}
if ((((*(R22 *)rt_nil_check(l_T_1556))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1563; memset(&l_SAVED_1563, 0, sizeof l_SAVED_1563);
l_SAVED_1563 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1564; memset(&l_C_1564, 0, sizeof l_C_1564);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1558, rt_str("1", 1));
S_R10(&l_C_1564, r_RESCALE_C((l_V_1555).f_C, ((*(R22 *)rt_nil_check(l_T_1556))).f_SCALE, l_S_1559), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1563;
{ R26 rv1565 = r_MKET(l_C_1564, r_INT_TYPE(l_S_1559));
return rv1565; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1556))).f_KIND == g_T_FLOAT))
{
{ R26 rv1566 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1555).f_C, r_NUM(l_S_1559), l_RND_1558), r_INT_TYPE(l_S_1559));
return rv1566; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1556))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1556))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1556))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1556))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1556))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1556))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1567 = r_MKET(r_RESCALE_C((l_V_1555).f_C, ((rt_int)0LL), l_S_1559), r_INT_TYPE(l_S_1559));
return rv1567; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1556))).f_KIND == g_T_BITS))
{
{ R26 rv1568 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1555).f_C), ((rt_int)0LL), l_S_1559), r_INT_TYPE(l_S_1559));
return rv1568; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1556))).f_KIND == g_T_STR))
{
{ R26 rv1569 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1555).f_C, r_NUM(l_S_1559), l_RND_1558), r_INT_TYPE(l_S_1559));
return rv1569; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1555).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1570; memset(&l_T_1570, 0, sizeof l_T_1570);
l_T_1570 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1571; memset(&l_K_1571, 0, sizeof l_K_1571);
l_K_1571 = ((*(R22 *)rt_nil_check(l_T_1570))).f_KIND;
if ((l_K_1571 == g_T_BITS))
{
{ R26 rv1572 = p_V;
return rv1572; }
}
else if ((l_K_1571 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1570))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1570))).f_REPS))).f_B == NULL)))
{
{ R26 rv1573 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1570)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1570)));
return rv1573; }
}
}
{ R26 rv1574 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1570))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1570)));
return rv1574; }
}
else if ((l_K_1571 == g_T_STR))
{
{ R26 rv1575 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1575; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1571 == g_T_INT))
{
{ R26 rv1576 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1576; }
}
else if ((l_K_1571 == g_T_BOOL))
{
{ R26 rv1577 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1577; }
}
else if ((l_K_1571 == g_T_FLOAT))
{
{ R26 rv1578 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1578; }
}
else if ((l_K_1571 == g_T_STR))
{
{ R26 rv1579 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1579; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1570));
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
{ rt_int rv1580 = 0;
return rv1580; }
}
{ rt_int rv1581 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1581; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1582; memset(&l_N_1582, 0, sizeof l_N_1582);
l_N_1582 = ((rt_int)0LL);
R27 * l_P_1583; memset(&l_P_1583, 0, sizeof l_P_1583);
l_P_1583 = p_A;
for (;;) {
if ((l_P_1583 == NULL)) goto L_end1584;
{
l_N_1582 = rt_add(l_N_1582, ((rt_int)1LL));
l_P_1583 = ((*(R27 *)rt_nil_check(l_P_1583))).f_NEXT;
}
RT_B_TICK();
} L_end1584: ;
{ rt_int rv1585 = l_N_1582;
return rv1585; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1586; memset(&l_HEAD_1586, 0, sizeof l_HEAD_1586);
l_HEAD_1586 = NULL;
R27 * l_TAIL_1587; memset(&l_TAIL_1587, 0, sizeof l_TAIL_1587);
l_TAIL_1587 = NULL;
rt_int l_G_1588; memset(&l_G_1588, 0, sizeof l_G_1588);
l_G_1588 = ((rt_int)0LL);
{ rt_int it1590_lo = ((rt_int)0LL), it1590_hi = ((rt_int)2LL);
for (rt_int it1590 = it1590_lo; it1590 <= it1590_hi; it1590++) {
{
{
R21 * l_P_1591; memset(&l_P_1591, 0, sizeof l_P_1591);
l_P_1591 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1590 == ((rt_int)1LL)))
{
l_P_1591 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1590 == ((rt_int)2LL)))
{
l_P_1591 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1591 == NULL)) goto L_end1592;
{
{
R27 * l_A_1593; memset(&l_A_1593, 0, sizeof l_A_1593);
l_A_1593 = r_NODE_ARG(l_P_1591, it1590, NULL);
if ((l_TAIL_1587 == NULL))
{
l_HEAD_1586 = l_A_1593;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1587))).f_NEXT = l_A_1593;
}
l_TAIL_1587 = l_A_1593;
}
l_P_1591 = ((*(R21 *)rt_nil_check(l_P_1591))).f_NEXT;
}
RT_B_TICK();
} L_end1592: ;
}
}
RT_B_TICK();
if (it1590 == it1590_hi) break;
} } L_end1589: ;
{ R27 * rv1594 = l_HEAD_1586;
return rv1594; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1595; memset(&l_SAVED_1595, 0, sizeof l_SAVED_1595);
l_SAVED_1595 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1596; memset(&l_V_1596, 0, sizeof l_V_1596);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R26(&l_V_1596, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1595;
{ R26 rv1597 = l_V_1596;
return rv1597; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1598; memset(&l_ARGS_1598, 0, sizeof l_ARGS_1598);
l_ARGS_1598 = r_CALL_ARGS(p_E);
R12 * l_Y_1599; memset(&l_Y_1599, 0, sizeof l_Y_1599);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1600 = r_START_IO_CALL(p_E);
return rv1600; }
}
l_Y_1599 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1599 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1599))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1601 = r_BUILTIN(p_E, p_WANT);
return rv1601; }
}
{ R26 rv1602 = r_CALL_SYM(l_Y_1599, l_ARGS_1598, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1602; }
}
l_Y_1599 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1598, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1599 == NULL))
{
{
R12 * l_P_1603; memset(&l_P_1603, 0, sizeof l_P_1603);
l_P_1603 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1603 == NULL)) goto L_end1604;
{
if ((((*(R12 *)rt_nil_check(l_P_1603))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1605 = r_BUILTIN(p_E, p_WANT);
return rv1605; }
}
l_P_1603 = r_LOOKUP_NEXT(l_P_1603);
}
RT_B_TICK();
} L_end1604: ;
}
{
R12 * l_B_1606; memset(&l_B_1606, 0, sizeof l_B_1606);
l_B_1606 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1606 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1606))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1607 = r_BUILTIN(p_E, p_WANT);
return rv1607; }
}
if (((((*(R12 *)rt_nil_check(l_B_1606))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1606))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1608 = r_CALL_SYM(l_Y_1599, l_ARGS_1598, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1608; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1609; memset(&l_B_1609, 0, sizeof l_B_1609);
l_B_1609 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1610; memset(&l_S_1610, 0, sizeof l_S_1610);
l_S_1610 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1610, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1612_lo = ((rt_int)1LL), it1612_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1612 = it1612_lo; it1612 <= it1612_hi; it1612++) {
{
if (rt_b_eq(rt_b_slice(l_S_1610, it1612, it1612), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1610, ((rt_int)0LL), rt_sub(it1612, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1613 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1610, rt_add(it1612, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1613; }
}
goto L_end1611;
}
}
RT_B_TICK();
if (it1612 == it1612_hi) break;
} } L_end1611: ;
}
for (;;) {
if ((l_B_1609 == NULL)) goto L_end1614;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1609))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1609))).f_NAME, p_NAME)))
{
{ R12 * rv1615 = ((*(R20 *)rt_nil_check(l_B_1609))).f_R;
return rv1615; }
}
l_B_1609 = ((*(R20 *)rt_nil_check(l_B_1609))).f_NEXT;
}
RT_B_TICK();
} L_end1614: ;
{ R12 * rv1616 = NULL;
return rv1616; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1617 = 0;
return rv1617; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1618 = 0;
return rv1618; }
}
}
}
{ rt_int rv1619 = 1;
return rv1619; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1620; memset(&l_Y_1620, 0, sizeof l_Y_1620);
l_Y_1620 = r_LOOKUP(p_NAME);
R12 * l_BEST_1621; memset(&l_BEST_1621, 0, sizeof l_BEST_1621);
l_BEST_1621 = NULL;
rt_int l_BEST_SCORE_1622; memset(&l_BEST_SCORE_1622, 0, sizeof l_BEST_SCORE_1622);
l_BEST_SCORE_1622 = ((rt_int)0LL);
rt_int l_TIES_1623; memset(&l_TIES_1623, 0, sizeof l_TIES_1623);
l_TIES_1623 = ((rt_int)0LL);
rt_int l_COUNT_1624; memset(&l_COUNT_1624, 0, sizeof l_COUNT_1624);
l_COUNT_1624 = ((rt_int)0LL);
rt_int l_N_1625; memset(&l_N_1625, 0, sizeof l_N_1625);
l_N_1625 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1620 == NULL)) goto L_end1626;
{
if ((!r_IS_ROUTINE(l_Y_1620)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1620))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1626;
}
}
else if (r_CANDIDATE(l_Y_1620, p_NAME))
{
{
R12 * l_R_1627; memset(&l_R_1627, 0, sizeof l_R_1627);
l_R_1627 = r_ORIGINAL(l_Y_1620);
rt_int l_SCORE_1628; memset(&l_SCORE_1628, 0, sizeof l_SCORE_1628);
r_ROUTINE_HEADER(l_R_1627);
if ((((r_PARAM_COUNT(l_R_1627) == l_N_1625) && (!r_SEEN_ROUTINE(l_R_1627, p_NAME, l_Y_1620))) && (!r_HIDDEN_ROUTINE(l_R_1627, p_NAME, l_Y_1620))))
{
l_COUNT_1624 = rt_add(l_COUNT_1624, ((rt_int)1LL));
l_SCORE_1628 = r_MATCH_SCORE(l_R_1627, p_ARGS);
if ((l_SCORE_1628 > l_BEST_SCORE_1622))
{
l_BEST_1621 = l_R_1627;
l_BEST_SCORE_1622 = l_SCORE_1628;
l_TIES_1623 = ((rt_int)0LL);
}
else if (((l_SCORE_1628 == l_BEST_SCORE_1622) && (l_SCORE_1628 > ((rt_int)0LL))))
{
l_TIES_1623 = rt_add(l_TIES_1623, ((rt_int)1LL));
}
}
}
}
l_Y_1620 = r_LOOKUP_NEXT(l_Y_1620);
}
RT_B_TICK();
} L_end1626: ;
if (((l_TIES_1623 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1629 = l_BEST_1621;
return rv1629; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1630; memset(&l_Y_1630, 0, sizeof l_Y_1630);
l_Y_1630 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1630 == p_STOP) || (l_Y_1630 == NULL))) goto L_end1631;
{
if ((((*(R12 *)rt_nil_check(l_Y_1630))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1630) == p_R))
{
{ rt_int rv1632 = 1;
return rv1632; }
}
}
l_Y_1630 = r_LOOKUP_NEXT(l_Y_1630);
}
RT_B_TICK();
} L_end1631: ;
{ rt_int rv1633 = 0;
return rv1633; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1634; memset(&l_Y_1634, 0, sizeof l_Y_1634);
l_Y_1634 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1634 == p_STOP) || (l_Y_1634 == NULL))) goto L_end1635;
{
if (((((*(R12 *)rt_nil_check(l_Y_1634))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_1634))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_1636; memset(&l_O_1636, 0, sizeof l_O_1636);
l_O_1636 = r_ORIGINAL(l_Y_1634);
if ((!(l_O_1636 == p_R)))
{
r_ROUTINE_HEADER(l_O_1636);
if (r_SAME_SIGNATURE(l_O_1636, p_R))
{
{ rt_int rv1637 = 1;
return rv1637; }
}
}
}
}
l_Y_1634 = r_LOOKUP_NEXT(l_Y_1634);
}
RT_B_TICK();
} L_end1635: ;
{ rt_int rv1638 = 0;
return rv1638; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_1639; memset(&l_P_1639, 0, sizeof l_P_1639);
l_P_1639 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_1640; memset(&l_Q_1640, 0, sizeof l_Q_1640);
l_Q_1640 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv1641 = 0;
return rv1641; }
}
for (;;) {
if (((l_P_1639 == NULL) || (l_Q_1640 == NULL))) goto L_end1642;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1639))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_1640))).f_MODE)))
{
{ rt_int rv1643 = 0;
return rv1643; }
}
if (((((*(R28 *)rt_nil_check(l_P_1639))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_1640))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_1639))).f_T == ((*(R28 *)rt_nil_check(l_Q_1640))).f_T)))
{
{ rt_int rv1644 = 0;
return rv1644; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1639))).f_T, ((*(R28 *)rt_nil_check(l_Q_1640))).f_T)))
{
{ rt_int rv1645 = 0;
return rv1645; }
}
l_P_1639 = ((*(R28 *)rt_nil_check(l_P_1639))).f_NEXT;
l_Q_1640 = ((*(R28 *)rt_nil_check(l_Q_1640))).f_NEXT;
}
RT_B_TICK();
} L_end1642: ;
{ rt_int rv1646 = ((l_P_1639 == NULL) && (l_Q_1640 == NULL));
return rv1646; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_1647; memset(&l_N_1647, 0, sizeof l_N_1647);
l_N_1647 = ((rt_int)0LL);
R28 * l_P_1648; memset(&l_P_1648, 0, sizeof l_P_1648);
l_P_1648 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1648 == NULL)) goto L_end1649;
{
l_N_1647 = rt_add(l_N_1647, ((rt_int)1LL));
l_P_1648 = ((*(R28 *)rt_nil_check(l_P_1648))).f_NEXT;
}
RT_B_TICK();
} L_end1649: ;
{ rt_int rv1650 = l_N_1647;
return rv1650; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_1651; memset(&l_P_1651, 0, sizeof l_P_1651);
l_P_1651 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1652; memset(&l_A_1652, 0, sizeof l_A_1652);
l_A_1652 = p_ARGS;
rt_int l_EXACT_1653; memset(&l_EXACT_1653, 0, sizeof l_EXACT_1653);
l_EXACT_1653 = 1;
R20 * l_BS_1654; memset(&l_BS_1654, 0, sizeof l_BS_1654);
l_BS_1654 = r_NEW_BINDS();
R22 * l_PT_1655; memset(&l_PT_1655, 0, sizeof l_PT_1655);
for (;;) {
if ((l_P_1651 == NULL)) goto L_end1656;
{
l_PT_1655 = r_FORMAL_VIEW(p_R, l_P_1651);
if ((!(((*(R28 *)rt_nil_check(l_P_1651))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1652))).f_MODE)))
{
{ rt_int rv1657 = ((rt_int)0LL);
return rv1657; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1651))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1651, l_A_1652, l_BS_1654)))
{
{ rt_int rv1658 = ((rt_int)0LL);
return rv1658; }
}
}
else if ((l_PT_1655 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1652))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_1652))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv1659 = ((rt_int)0LL);
return rv1659; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_1652))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1652))).f_E, l_PT_1655)))
{
{ rt_int rv1660 = ((rt_int)0LL);
return rv1660; }
}
}
else
{
r_TYPE_ARG(l_A_1652);
{
R22 * l_AT_1661; memset(&l_AT_1661, 0, sizeof l_AT_1661);
l_AT_1661 = (((*(R27 *)rt_nil_check(l_A_1652))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_1655, l_AT_1661) || (((((*(R22 *)rt_nil_check(l_AT_1661))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1655)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1662 = ((rt_int)0LL);
return rv1662; }
}
if ((!r_SAME_TYPE(l_PT_1655, l_AT_1661)))
{
if ((((*(R28 *)rt_nil_check(l_P_1651))).f_MODE == g_M_INOUT))
{
{ rt_int rv1663 = ((rt_int)0LL);
return rv1663; }
}
l_EXACT_1653 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1661)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1655)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_1651))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_1661))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_1655))).f_SCALE)))
{
{ rt_int rv1664 = ((rt_int)0LL);
return rv1664; }
}
else if (((((*(R28 *)rt_nil_check(l_P_1651))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_1655))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_1661))).f_SCALE)))
{
{ rt_int rv1665 = ((rt_int)0LL);
return rv1665; }
}
}
}
}
l_P_1651 = ((*(R28 *)rt_nil_check(l_P_1651))).f_NEXT;
l_A_1652 = ((*(R27 *)rt_nil_check(l_A_1652))).f_NEXT;
}
RT_B_TICK();
} L_end1656: ;
if (l_EXACT_1653)
{
{ rt_int rv1666 = ((rt_int)2LL);
return rv1666; }
}
{ rt_int rv1667 = ((rt_int)1LL);
return rv1667; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1668; memset(&l_RT_1668, 0, sizeof l_RT_1668);
l_RT_1668 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1668))).f_KIND == g_T_ENUM))
{
{ rt_int rv1669 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1668) == NULL));
return rv1669; }
}
{ rt_int rv1670 = 0;
return rv1670; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1671 = (((*(R22 *)rt_nil_check(l_RT_1668))).f_KIND == g_T_PTR);
return rv1671; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1672 = (((*(R22 *)rt_nil_check(l_RT_1668))).f_KIND == g_T_REC);
return rv1672; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1673 = (((*(R22 *)rt_nil_check(l_RT_1668))).f_KIND == g_T_ARR);
return rv1673; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1674 = (((*(R22 *)rt_nil_check(l_RT_1668))).f_KIND == g_T_INT);
return rv1674; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1675 = ((((*(R22 *)rt_nil_check(l_RT_1668))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1668))).f_KIND == g_T_SEM));
return rv1675; }
}
{ rt_int rv1676 = 0;
return rv1676; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1677; memset(&l_Y_1677, 0, sizeof l_Y_1677);
l_Y_1677 = r_ORIGINAL(p_Y0);
R28 * l_P_1678; memset(&l_P_1678, 0, sizeof l_P_1678);
R27 * l_A_1679; memset(&l_A_1679, 0, sizeof l_A_1679);
l_A_1679 = p_ARGS;
R10 l_C_1680; memset(&l_C_1680, 0, sizeof l_C_1680);
S_R10(&l_C_1680, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1681; memset(&l_SEP_1681, 0, sizeof l_SEP_1681);
S_R10(&l_SEP_1681, r_MK(rt_str("", 0)), 0);
R10 l_PRE_1682; memset(&l_PRE_1682, 0, sizeof l_PRE_1682);
S_R10(&l_PRE_1682, r_MK(rt_str("", 0)), 0);
R10 l_POST_1683; memset(&l_POST_1683, 0, sizeof l_POST_1683);
S_R10(&l_POST_1683, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_1684; memset(&l_SHARED_1684, 0, sizeof l_SHARED_1684);
l_SHARED_1684 = 0;
R22 * l_PT_1685; memset(&l_PT_1685, 0, sizeof l_PT_1685);
if (((*(R12 *)rt_nil_check(l_Y_1677))).f_GENERIC)
{
l_Y_1677 = r_INSTANCE(l_Y_1677, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1677, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1677))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1680, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1677))).f_LEVEL), 0);
S_R10(&l_SEP_1681, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_1686; memset(&l_Q_1686, 0, sizeof l_Q_1686);
l_Q_1686 = p_ARGS;
for (;;) {
if ((l_Q_1686 == NULL)) goto L_end1687;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_1686))).f_MODE == g_M_IN)))
{
l_SHARED_1684 = 1;
}
l_Q_1686 = ((*(R27 *)rt_nil_check(l_Q_1686))).f_NEXT;
}
RT_B_TICK();
} L_end1687: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_1677))).f_USES == NULL)))
{
l_SHARED_1684 = 1;
}
}
l_P_1678 = ((*(R12 *)rt_nil_check(l_Y_1677))).f_PARAMS;
for (;;) {
if ((l_P_1678 == NULL)) goto L_end1688;
{
if ((l_A_1679 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_1685 = r_FORMAL_VIEW(l_Y_1677, l_P_1678);
if ((l_PT_1685 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1678))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1685)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1689; memset(&l_V_1689, 0, sizeof l_V_1689);
R10 l_CV_1690; memset(&l_CV_1690, 0, sizeof l_CV_1690);
if ((((*(R27 *)rt_nil_check(l_A_1679))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1679))))
{
S_R26(&l_V_1689, ((*(R27 *)rt_nil_check(l_A_1679))).f_V, 0);
}
else
{
S_R26(&l_V_1689, r_EXPR(((*(R27 *)rt_nil_check(l_A_1679))).f_E, l_PT_1685), 0);
}
S_R10(&l_CV_1690, r_CONVERT(l_V_1689, l_PT_1685, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_1684 && (l_V_1689).f_LVAL) && r_IS_STRUCTURED(l_PT_1685)))
{
S_R10(&l_CV_1690, r_COPY_OF(l_PT_1685, l_CV_1690), 0);
}
S_R10(&l_C_1680, r_FMT3(rt_str("@@@", 3), l_C_1680, l_SEP_1681, l_CV_1690), 0);
S_R10(&l_SEP_1681, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1691; memset(&l_V_1691, 0, sizeof l_V_1691);
if (((*(R27 *)rt_nil_check(l_A_1679))).f_HAVE)
{
S_R26(&l_V_1691, ((*(R27 *)rt_nil_check(l_A_1679))).f_V, 0);
}
else
{
S_R26(&l_V_1691, r_EXPR(((*(R27 *)rt_nil_check(l_A_1679))).f_E, l_PT_1685), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1679))).f_E == NULL)) && (!(l_V_1691).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1679))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1679))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1691, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1691).f_C), (l_V_1691).f_T), 0);
(l_V_1691).f_LVAL = 1;
}
}
if ((!(l_V_1691).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_1685, (l_V_1691).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_1685));
}
if (((((*(R28 *)rt_nil_check(l_P_1678))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_1685, (l_V_1691).f_T) && r_SAME_RANGE(l_PT_1685, (l_V_1691).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_1678))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_1685, (l_V_1691).f_T) && r_SAME_RANGE(l_PT_1685, (l_V_1691).f_T))))))
{
{
R10 l_TMP_1692; memset(&l_TMP_1692, 0, sizeof l_TMP_1692);
S_R10(&l_TMP_1692, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_1693; memset(&l_AP_1693, 0, sizeof l_AP_1693);
S_R10(&l_AP_1693, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_1682, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_1682, r_CTYPE((l_V_1691).f_T), l_AP_1693, (l_V_1691).f_C), 0);
S_R10(&l_PRE_1682, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_1682, r_CTYPE(l_PT_1685), l_TMP_1692, r_COPY_OF((l_V_1691).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1693))), 0);
S_R10(&l_POST_1683, r_FMT2(rt_str("@ @", 3), l_POST_1683, r_STORE_CODE((l_V_1691).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1693), r_MKET(l_TMP_1692, l_PT_1685), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_1680, r_FMT3(rt_str("@@&@", 4), l_C_1680, l_SEP_1681, l_TMP_1692), 0);
}
}
else
{
S_R10(&l_C_1680, r_FMT3(rt_str("@@&@", 4), l_C_1680, l_SEP_1681, (l_V_1691).f_C), 0);
}
S_R10(&l_SEP_1681, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1679 = ((*(R27 *)rt_nil_check(l_A_1679))).f_NEXT;
l_P_1678 = ((*(R28 *)rt_nil_check(l_P_1678))).f_NEXT;
}
RT_B_TICK();
} L_end1688: ;
if ((!(l_A_1679 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_1682).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1694 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_1682, ((*(R12 *)rt_nil_check(l_Y_1677))).f_ACCESS, l_C_1680, l_POST_1683), r_RESULT_VIEW(l_Y_1677));
return rv1694; }
}
{ R26 rv1695 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1677))).f_ACCESS, l_C_1680), r_RESULT_VIEW(l_Y_1677));
return rv1695; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv1696 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv1696; }
}
{ R22 * rv1697 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv1697; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv1698 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1698; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv1699 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1699; }
}
{ R22 * rv1700 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv1700; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv1701 = p_T;
return rv1701; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv1702 = p_T;
return rv1702; }
}
{
R12 * l_M_1703; memset(&l_M_1703, 0, sizeof l_M_1703);
l_M_1703 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_1703 == NULL)) goto L_end1704;
{
{
R12 * l_Y_1705; memset(&l_Y_1705, 0, sizeof l_Y_1705);
l_Y_1705 = r_MEMBER_TYPE(l_M_1703, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_1705 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_1705))).f_EXPORTED)
{
{ R22 * rv1706 = r_ABSTRACT_VIEW(l_Y_1705, p_T);
return rv1706; }
}
{ R22 * rv1707 = p_T;
return rv1707; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_1703))).f_MODL))
{
goto L_end1704;
}
l_M_1703 = ((*(R12 *)rt_nil_check(l_M_1703))).f_MODL;
}
RT_B_TICK();
} L_end1704: ;
}
{ R22 * rv1708 = p_T;
return rv1708; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1709; memset(&l_Y_1709, 0, sizeof l_Y_1709);
l_Y_1709 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_1710; memset(&l_Z_1710, 0, sizeof l_Z_1710);
l_Z_1710 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_1710 == NULL)) goto L_end1711;
{
if ((((((*(R12 *)rt_nil_check(l_Z_1710))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_1710))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_1710))).f_ORIG == NULL)))
{
{ R12 * rv1712 = l_Z_1710;
return rv1712; }
}
l_Z_1710 = r_LOOKUP_NEXT(l_Z_1710);
}
RT_B_TICK();
} L_end1711: ;
}
{ R12 * rv1713 = NULL;
return rv1713; }
}
for (;;) {
if ((l_Y_1709 == NULL)) goto L_end1714;
{
if (((((*(R12 *)rt_nil_check(l_Y_1709))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_1709))).f_NAME, p_NAME)))
{
{ R12 * rv1715 = l_Y_1709;
return rv1715; }
}
l_Y_1709 = ((*(R12 *)rt_nil_check(l_Y_1709))).f_SNEXT;
}
RT_B_TICK();
} L_end1714: ;
{ R12 * rv1716 = NULL;
return rv1716; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1717; memset(&l_K_1717, 0, sizeof l_K_1717);
l_K_1717 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv1718 = ((((l_K_1717 == g_T_STR) || (l_K_1717 == g_T_BITS)) || (l_K_1717 == g_T_ARR)) || (l_K_1717 == g_T_REC));
return rv1718; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1719; memset(&l_RA_1719, 0, sizeof l_RA_1719);
l_RA_1719 = r_REAL_TYPE(p_A);
R22 * l_RB_1720; memset(&l_RB_1720, 0, sizeof l_RB_1720);
l_RB_1720 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_1719)))
{
{ rt_int rv1721 = 1;
return rv1721; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1719))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1719))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1720))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1720))).f_HI_C)))
{
{ rt_int rv1722 = 1;
return rv1722; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_1719))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_1720))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv1723 = ((((*(R22 *)rt_nil_check(l_RA_1719))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_1720))).f_LO_C).f_LEN);
return rv1723; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_1719))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_1720))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_1719))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_1720))).f_MHI).f_OK))
{
{ rt_int rv1724 = (((((*(R22 *)rt_nil_check(l_RA_1719))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_1720))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_1719))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_1720))).f_MHI).f_V));
return rv1724; }
}
{ rt_int rv1725 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_1719))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_1720))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_1719))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_1720))).f_HI_C));
return rv1725; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv1726 = 0;
return rv1726; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1727 = 1;
return rv1727; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1728 = 1;
return rv1728; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1729 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1729; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1730 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1730; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1731 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1731; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1732 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1732; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1733 = 0;
return rv1733; }
}
{
R12 * l_Y_1734; memset(&l_Y_1734, 0, sizeof l_Y_1734);
l_Y_1734 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1735; memset(&l_A_1735, 0, sizeof l_A_1735);
l_A_1735 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1736; memset(&l_F_1736, 0, sizeof l_F_1736);
if ((l_Y_1734 == NULL))
{
{ rt_int rv1737 = 0;
return rv1737; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1734))).f_KIND == g_Y_GEN))
{
{ rt_int rv1738 = 1;
return rv1738; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1734))).f_DECL == NULL))
{
{ rt_int rv1739 = 0;
return rv1739; }
}
l_F_1736 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1734))).f_DECL))).f_A;
for (;;) {
if ((l_F_1736 == NULL)) goto L_end1740;
{
{
R21 * l_N_1741; memset(&l_N_1741, 0, sizeof l_N_1741);
l_N_1741 = ((*(R21 *)rt_nil_check(l_F_1736))).f_A;
for (;;) {
if ((l_N_1741 == NULL)) goto L_end1742;
{
if ((l_A_1735 == NULL))
{
{ rt_int rv1743 = 0;
return rv1743; }
}
if (((((*(R21 *)rt_nil_check(l_F_1736))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_1735))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_1735))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1735)))))
{
{ rt_int rv1744 = 1;
return rv1744; }
}
l_A_1735 = ((*(R21 *)rt_nil_check(l_A_1735))).f_NEXT;
l_N_1741 = ((*(R21 *)rt_nil_check(l_N_1741))).f_NEXT;
}
RT_B_TICK();
} L_end1742: ;
}
l_F_1736 = ((*(R21 *)rt_nil_check(l_F_1736))).f_NEXT;
}
RT_B_TICK();
} L_end1740: ;
}
}
{ rt_int rv1745 = 0;
return rv1745; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_1746; memset(&l_P_1746, 0, sizeof l_P_1746);
l_P_1746 = p_A;
for (;;) {
if ((l_P_1746 == NULL)) goto L_end1747;
{
if (((((*(R21 *)rt_nil_check(l_P_1746))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_1746))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1748 = 1;
return rv1748; }
}
l_P_1746 = ((*(R21 *)rt_nil_check(l_P_1746))).f_NEXT;
}
RT_B_TICK();
} L_end1747: ;
{ rt_int rv1749 = 0;
return rv1749; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1750; memset(&l_R_1750, 0, sizeof l_R_1750);
l_R_1750 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_1751; memset(&l_P_1751, 0, sizeof l_P_1751);
R28 * l_TAIL_1752; memset(&l_TAIL_1752, 0, sizeof l_TAIL_1752);
l_TAIL_1752 = NULL;
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1751 = ((*(R21 *)rt_nil_check(l_R_1750))).f_A;
for (;;) {
if ((l_P_1751 == NULL)) goto L_end1753;
{
if (((((*(R21 *)rt_nil_check(l_P_1751))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_1751))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1751 = ((*(R21 *)rt_nil_check(l_P_1751))).f_NEXT;
}
RT_B_TICK();
} L_end1753: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_1750))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1751 = ((*(R21 *)rt_nil_check(l_R_1750))).f_A;
for (;;) {
if ((l_P_1751 == NULL)) goto L_end1754;
{
{
R28 * l_PM_1755; memset(&l_PM_1755, 0, sizeof l_PM_1755);
l_PM_1755 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1755)), ({ R28 rc1756; memset(&rc1756, 0, sizeof rc1756);  S_R10(&rc1756.f_NAME, ((*(R21 *)rt_nil_check(l_P_1751))).f_NAME, 0); rc1756.f_MODE = ((*(R21 *)rt_nil_check(l_P_1751))).f_IV; rc1756.f_T = NULL; rc1756.f_TS = ((*(R21 *)rt_nil_check(l_P_1751))).f_B; rc1756.f_NEXT = NULL; rc1756; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_1750))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_1751))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1751))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_1755))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1751))).f_B);
}
if ((l_TAIL_1752 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1755;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1752))).f_NEXT = l_PM_1755;
}
l_TAIL_1752 = l_PM_1755;
}
l_P_1751 = ((*(R21 *)rt_nil_check(l_P_1751))).f_NEXT;
}
RT_B_TICK();
} L_end1754: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1757; memset(&l_R_1757, 0, sizeof l_R_1757);
l_R_1757 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_1758; memset(&l_T_1758, 0, sizeof l_T_1758);
if ((((*(R21 *)rt_nil_check(l_R_1757))).f_B == NULL))
{
{ R22 * rv1759 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1759; }
}
r_OPEN_SCOPE();
{
R28 * l_P_1760; memset(&l_P_1760, 0, sizeof l_P_1760);
l_P_1760 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1760 == NULL)) goto L_end1761;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1760))).f_T == NULL)))
{
{
R12 * l_V_1762; memset(&l_V_1762, 0, sizeof l_V_1762);
l_V_1762 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_1760))).f_NAME);
((*(R12 *)rt_nil_check(l_V_1762))).f_T = ((*(R28 *)rt_nil_check(l_P_1760))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_1762))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_1760))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_V_1762))).f_INPUT = 1;
r_DEFINE(l_V_1762, ((*(R21 *)rt_nil_check(l_R_1757))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_1760))).f_T, ((*(R12 *)rt_nil_check(l_V_1762))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_1757))).f_LINE, 0);
}
}
l_P_1760 = ((*(R28 *)rt_nil_check(l_P_1760))).f_NEXT;
}
RT_B_TICK();
} L_end1761: ;
}
l_T_1758 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_1757))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv1763 = l_T_1758;
return rv1763; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_1764; memset(&l_PS_1764, 0, sizeof l_PS_1764);
S_R10(&l_PS_1764, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1765; memset(&l_SEP_1765, 0, sizeof l_SEP_1765);
S_R10(&l_SEP_1765, r_MK(rt_str("", 0)), 0);
R28 * l_P_1766; memset(&l_P_1766, 0, sizeof l_P_1766);
l_P_1766 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_1764, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_1765, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_1766 == NULL)) goto L_end1767;
{
if ((((*(R28 *)rt_nil_check(l_P_1766))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1766))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1766))).f_MODE == g_M_IN))
{
S_R10(&l_PS_1764, r_FMT4(rt_str("@@@ p_@", 7), l_PS_1764, l_SEP_1765, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1766))).f_T), ((*(R28 *)rt_nil_check(l_P_1766))).f_NAME), 0);
S_R10(&l_SEP_1765, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_1764, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_1764, l_SEP_1765, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1766))).f_T), ((*(R28 *)rt_nil_check(l_P_1766))).f_NAME), 0);
S_R10(&l_SEP_1765, r_MK(rt_str(", ", 2)), 0);
}
l_P_1766 = ((*(R28 *)rt_nil_check(l_P_1766))).f_NEXT;
}
RT_B_TICK();
} L_end1767: ;
if (((l_PS_1764).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_1764, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv1768 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_1764);
return rv1768; }
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
R25 * l_B_1769; memset(&l_B_1769, 0, sizeof l_B_1769);
l_B_1769 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1770; memset(&l_I_1770, 0, sizeof l_I_1770);
l_I_1770 = ((rt_int)0LL);
for (;;) {
if ((l_B_1769 == NULL)) goto L_end1771;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1769))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1769))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_1770)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1769))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1769))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_1769))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1769))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_1770)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1769))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_1770), p_PC, r_NUM(l_I_1770)), ((*(R25 *)rt_nil_check(l_B_1769))).f_LO), p_LINE, p_CHECK);
}
}
l_I_1770 = rt_add(l_I_1770, ((rt_int)1LL));
l_B_1769 = ((*(R25 *)rt_nil_check(l_B_1769))).f_NEXT;
}
RT_B_TICK();
} L_end1771: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_1772; memset(&l_U_1772, 0, sizeof l_U_1772);
l_U_1772 = r_REAL_TYPE(p_T);
R24 * l_F_1773; memset(&l_F_1773, 0, sizeof l_F_1773);
l_F_1773 = ((*(R22 *)rt_nil_check(l_U_1772))).f_FIELDS;
R25 * l_A_1774; memset(&l_A_1774, 0, sizeof l_A_1774);
l_A_1774 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_1773 == NULL) || (l_A_1774 == NULL))) goto L_end1775;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1773))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_1774))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_1774))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_1773))).f_CNAME), p_LINE, p_CHECK);
}
l_A_1774 = ((*(R25 *)rt_nil_check(l_A_1774))).f_NEXT;
}
l_F_1773 = ((*(R24 *)rt_nil_check(l_F_1773))).f_NEXT;
}
RT_B_TICK();
} L_end1775: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1776 = 0;
return rv1776; }
}
{ rt_int rv1777 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1777; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv1778 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv1778; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_1779; memset(&l_OLD_1779, 0, sizeof l_OLD_1779);
l_OLD_1779 = r_LOOKUP(p_NAME);
if ((!(l_OLD_1779 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_1779))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_1779))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_1779))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_1780; memset(&l_G_1780, 0, sizeof l_G_1780);
l_G_1780 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_1780))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_1780))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_1780))).f_INPUT = 1;
r_DEFINE(l_G_1780, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_1781; memset(&l_B_1781, 0, sizeof l_B_1781);
l_B_1781 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1781)), ({ R20 rc1782; memset(&rc1782, 0, sizeof rc1782);  S_R10(&rc1782.f_NAME, r_NO_TEXT(), 0); rc1782.f_T = NULL; S_R10(&rc1782.f_C, r_NO_TEXT(), 0); rc1782.f_HASMV = 0; rc1782.f_MV = ((rt_int)0LL); rc1782.f_R = NULL; rc1782.f_NEXT = NULL; rc1782; }), 0);
{ R20 * rv1783 = l_B_1781;
return rv1783; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_1784; memset(&l_B_1784, 0, sizeof l_B_1784);
l_B_1784 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1784)), ({ R20 rc1785; memset(&rc1785, 0, sizeof rc1785);  S_R10(&rc1785.f_NAME, p_NAME, 0); rc1785.f_T = p_T; S_R10(&rc1785.f_C, r_NO_TEXT(), 0); rc1785.f_HASMV = (p_M).f_OK; rc1785.f_MV = (p_M).f_V; rc1785.f_R = p_R; rc1785.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc1785; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_1784))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_1784;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1786; memset(&l_B_1786, 0, sizeof l_B_1786);
l_B_1786 = p_BS;
for (;;) {
if ((l_B_1786 == NULL)) goto L_end1787;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_1786))).f_NAME, p_NAME))
{
{ R20 * rv1788 = l_B_1786;
return rv1788; }
}
l_B_1786 = ((*(R20 *)rt_nil_check(l_B_1786))).f_NEXT;
}
RT_B_TICK();
} L_end1787: ;
{ R20 * rv1789 = NULL;
return rv1789; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_1790; memset(&l_RT_1790, 0, sizeof l_RT_1790);
l_RT_1790 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv1791 = 1;
return rv1791; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv1792 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv1792; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1793 = 1;
return rv1793; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1794 = 1;
return rv1794; }
}
{
R20 * l_B_1795; memset(&l_B_1795, 0, sizeof l_B_1795);
l_B_1795 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_1795 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_1795))).f_T == NULL))
{
{ rt_int rv1796 = 0;
return rv1796; }
}
{ rt_int rv1797 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_1795))).f_T, p_T);
return rv1797; }
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
{ rt_int rv1798 = 1;
return rv1798; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_ARR)))
{
{ rt_int rv1799 = 0;
return rv1799; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_1790))).f_DIMS)))
{
{ rt_int rv1800 = 0;
return rv1800; }
}
{ rt_int rv1801 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_1790))).f_ELEM, p_BS);
return rv1801; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv1802 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1802; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1803 = 0;
return rv1803; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_1790))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_1790))).f_MHI, p_BS))))
{
{ rt_int rv1804 = 0;
return rv1804; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_INT)))
{
{ rt_int rv1805 = 0;
return rv1805; }
}
{ rt_int rv1806 = (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1790))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
return rv1806; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv1807 = ((((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_1790))).f_SCALE == ((rt_int)0LL)));
return rv1807; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1808 = 0;
return rv1808; }
}
{ rt_int rv1809 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1790))).f_SCALE), p_BS);
return rv1809; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv1810 = (((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_BOOL);
return rv1810; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv1811 = (((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_STR);
return rv1811; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_STR)))
{
{ rt_int rv1812 = 0;
return rv1812; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv1813 = 1;
return rv1813; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_1790))).f_BASE == NULL)))
{
{ rt_int rv1814 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_1790))).f_BASE, p_BS);
return rv1814; }
}
{ rt_int rv1815 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv1815; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv1816 = (((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_BITS);
return rv1816; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv1817 = (((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_SEM);
return rv1817; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_PTR)))
{
{ rt_int rv1818 = 0;
return rv1818; }
}
{ rt_int rv1819 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_1790), p_BS);
return rv1819; }
}
{
R12 * l_Y_1820; memset(&l_Y_1820, 0, sizeof l_Y_1820);
l_Y_1820 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_1820 == NULL))
{
{ rt_int rv1821 = 0;
return rv1821; }
}
if (((((*(R12 *)rt_nil_check(l_Y_1820))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_1820))).f_DECL == NULL)))
{
{ rt_int rv1822 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_1820))).f_T, p_T);
return rv1822; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1820))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv1823 = 0;
return rv1823; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_1820))))
{
{ rt_int rv1824 = 0;
return rv1824; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1820))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1790))).f_KIND == g_T_REC)))
{
{ rt_int rv1825 = 0;
return rv1825; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1790))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv1826 = 0;
return rv1826; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1790))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_1820))))
{
{ rt_int rv1827 = 0;
return rv1827; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv1828 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1828; }
}
{ rt_int rv1829 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1820))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1820))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_1790, p_BS);
return rv1829; }
}
{
R21 * l_F_1830; memset(&l_F_1830, 0, sizeof l_F_1830);
l_F_1830 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1820))).f_DECL))).f_A;
R21 * l_A_1831; memset(&l_A_1831, 0, sizeof l_A_1831);
l_A_1831 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_1832; memset(&l_V_1832, 0, sizeof l_V_1832);
l_V_1832 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_1833; memset(&l_CLASS_1833, 0, sizeof l_CLASS_1833);
l_CLASS_1833 = r_RECORD_CLASS_OF(l_RT_1790);
for (;;) {
if ((l_F_1830 == NULL)) goto L_end1834;
{
{
R21 * l_N_1835; memset(&l_N_1835, 0, sizeof l_N_1835);
l_N_1835 = ((*(R21 *)rt_nil_check(l_F_1830))).f_A;
for (;;) {
if ((l_N_1835 == NULL)) goto L_end1836;
{
if ((l_A_1831 == NULL))
{
{ rt_int rv1837 = 0;
return rv1837; }
}
if ((((*(R21 *)rt_nil_check(l_F_1830))).f_B == NULL))
{
if ((!(l_CLASS_1833 == NULL)))
{
{
R20 * l_B_1838; memset(&l_B_1838, 0, sizeof l_B_1838);
l_B_1838 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_1833))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_1835))).f_NAME);
if ((!(l_B_1838 == NULL)))
{
if ((!r_UNIFY(l_A_1831, ((*(R20 *)rt_nil_check(l_B_1838))).f_T, p_BS)))
{
{ rt_int rv1839 = 0;
return rv1839; }
}
}
}
}
}
else
{
if ((!(l_V_1832 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_1831))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_1831))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_1831))).f_KIND == g_N_ANY))))
{
{
R23 l_M_1840; memset(&l_M_1840, 0, sizeof l_M_1840);
S_R23(&l_M_1840, r_MANIFEST(l_A_1831), 0);
if (((l_M_1840).f_OK && (((*(R25 *)rt_nil_check(l_V_1832))).f_MLO).f_OK))
{
if ((!((l_M_1840).f_V == (((*(R25 *)rt_nil_check(l_V_1832))).f_MLO).f_V)))
{
{ rt_int rv1841 = 0;
return rv1841; }
}
}
}
}
l_V_1832 = ((*(R25 *)rt_nil_check(l_V_1832))).f_NEXT;
}
}
l_A_1831 = ((*(R21 *)rt_nil_check(l_A_1831))).f_NEXT;
l_N_1835 = ((*(R21 *)rt_nil_check(l_N_1835))).f_NEXT;
}
RT_B_TICK();
} L_end1836: ;
}
l_F_1830 = ((*(R21 *)rt_nil_check(l_F_1830))).f_NEXT;
}
RT_B_TICK();
} L_end1834: ;
}
{ rt_int rv1842 = 1;
return rv1842; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_1843; memset(&l_R_1843, 0, sizeof l_R_1843);
l_R_1843 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv1844 = NULL;
return rv1844; }
}
for (;;) {
if ((l_R_1843 == NULL)) goto L_end1845;
{
if ((((*(R12 *)rt_nil_check(l_R_1843))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv1846 = l_R_1843;
return rv1846; }
}
l_R_1843 = ((*(R12 *)rt_nil_check(l_R_1843))).f_INSTANCES;
}
RT_B_TICK();
} L_end1845: ;
{ R12 * rv1847 = NULL;
return rv1847; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv1848 = 1;
return rv1848; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1849 = 1;
return rv1849; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1850 = 1;
return rv1850; }
}
{
R20 * l_B_1851; memset(&l_B_1851, 0, sizeof l_B_1851);
l_B_1851 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_1851 == NULL)))
{
{ rt_int rv1852 = ((((*(R20 *)rt_nil_check(l_B_1851))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_1851))).f_MV == (p_M).f_V));
return rv1852; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv1853 = 0;
return rv1853; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv1854 = 1;
return rv1854; }
}
{
R23 l_V_1855; memset(&l_V_1855, 0, sizeof l_V_1855);
S_R23(&l_V_1855, r_MANIFEST(p_A), 0);
if (((l_V_1855).f_OK && (p_M).f_OK))
{
{ rt_int rv1856 = ((l_V_1855).f_V == (p_M).f_V);
return rv1856; }
}
}
{ rt_int rv1857 = 1;
return rv1857; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1858 = 0;
return rv1858; }
}
{ rt_int rv1859 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv1859; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv1860 = 1;
return rv1860; }
}
r_TYPE_ARG(p_A);
{ rt_int rv1861 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv1861; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_1862; memset(&l_BS_1862, 0, sizeof l_BS_1862);
l_BS_1862 = r_NEW_BINDS();
R28 * l_P_1863; memset(&l_P_1863, 0, sizeof l_P_1863);
l_P_1863 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_1864; memset(&l_A_1864, 0, sizeof l_A_1864);
l_A_1864 = p_ARGS;
for (;;) {
if ((l_P_1863 == NULL)) goto L_end1865;
{
if ((((*(R28 *)rt_nil_check(l_P_1863))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1864))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1863))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_1864))).f_E), r_NO_MVAL(), NULL, l_BS_1862);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1863))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1863))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_1863))).f_TS, ((*(R27 *)rt_nil_check(l_A_1864))).f_E, p_LINE), l_BS_1862);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_1864))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_1864))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_1863))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1864))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_1864))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_1864))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_1864))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_1864))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_1863))).f_TS, (((*(R27 *)rt_nil_check(l_A_1864))).f_V).f_T, l_BS_1862)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_1863))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1863))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_1863))).f_NAME, (((*(R28 *)rt_nil_check(l_P_1863))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_1864))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_1862);
}
}
l_P_1863 = ((*(R28 *)rt_nil_check(l_P_1863))).f_NEXT;
l_A_1864 = ((*(R27 *)rt_nil_check(l_A_1864))).f_NEXT;
}
RT_B_TICK();
} L_end1865: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_1862);
{
R12 * l_I_1866; memset(&l_I_1866, 0, sizeof l_I_1866);
l_I_1866 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_1866 == NULL)) goto L_end1867;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_1866))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_1862))).f_NEXT))
{
{ R12 * rv1868 = l_I_1866;
return rv1868; }
}
l_I_1866 = ((*(R12 *)rt_nil_check(l_I_1866))).f_INSTANCES;
}
RT_B_TICK();
} L_end1867: ;
}
{ R12 * rv1869 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_1862))).f_NEXT, p_ARGS);
return rv1869; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_1870; memset(&l_P_1870, 0, sizeof l_P_1870);
l_P_1870 = p_A;
for (;;) {
if ((l_P_1870 == NULL)) goto L_end1871;
{
{
R20 * l_Q_1872; memset(&l_Q_1872, 0, sizeof l_Q_1872);
l_Q_1872 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_1870))).f_NAME);
if ((l_Q_1872 == NULL))
{
{ rt_int rv1873 = 0;
return rv1873; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_1870))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_1872))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_1870))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_1872))).f_T == NULL)))
{
{ rt_int rv1874 = 0;
return rv1874; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1870))).f_T, ((*(R20 *)rt_nil_check(l_Q_1872))).f_T)))
{
{ rt_int rv1875 = 0;
return rv1875; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_1870))).f_T, ((*(R20 *)rt_nil_check(l_Q_1872))).f_T)))
{
{ rt_int rv1876 = 0;
return rv1876; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_1870))).f_T, ((*(R20 *)rt_nil_check(l_Q_1872))).f_T)))
{
{ rt_int rv1877 = 0;
return rv1877; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_1870))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_1872))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_1870))).f_MV == ((*(R20 *)rt_nil_check(l_Q_1872))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_1870))).f_R == ((*(R20 *)rt_nil_check(l_Q_1872))).f_R))))
{
{ rt_int rv1878 = 0;
return rv1878; }
}
}
l_P_1870 = ((*(R20 *)rt_nil_check(l_P_1870))).f_NEXT;
}
RT_B_TICK();
} L_end1871: ;
{ rt_int rv1879 = 1;
return rv1879; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1880; memset(&l_RA_1880, 0, sizeof l_RA_1880);
l_RA_1880 = r_REAL_TYPE(p_A);
R22 * l_RB_1881; memset(&l_RB_1881, 0, sizeof l_RB_1881);
l_RB_1881 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_1880))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_1880))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_1880))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_1881))).f_KIND))))
{
{ rt_int rv1882 = 1;
return rv1882; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1880))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1881))).f_MLEN).f_OK))
{
{ rt_int rv1883 = ((((*(R22 *)rt_nil_check(l_RA_1880))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1881))).f_MLEN).f_V);
return rv1883; }
}
{ rt_int rv1884 = ((((*(R22 *)rt_nil_check(l_RA_1880))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_1881))).f_MLEN).f_OK);
return rv1884; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_1885; memset(&l_RA_1885, 0, sizeof l_RA_1885);
l_RA_1885 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_1886; memset(&l_RB_1886, 0, sizeof l_RB_1886);
l_RB_1886 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_1885 == NULL) || (l_RB_1886 == NULL)))
{
{ rt_int rv1887 = (l_RA_1885 == l_RB_1886);
return rv1887; }
}
if ((l_RA_1885 == l_RB_1886))
{
{ rt_int rv1888 = 1;
return rv1888; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_1885))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_1886))).f_NAME)))
{
{ rt_int rv1889 = 0;
return rv1889; }
}
{
R21 * l_X_1890; memset(&l_X_1890, 0, sizeof l_X_1890);
l_X_1890 = ((*(R21 *)rt_nil_check(l_RA_1885))).f_A;
R21 * l_Y_1891; memset(&l_Y_1891, 0, sizeof l_Y_1891);
l_Y_1891 = ((*(R21 *)rt_nil_check(l_RB_1886))).f_A;
for (;;) {
if (((l_X_1890 == NULL) || (l_Y_1891 == NULL))) goto L_end1892;
{
if (((((((*(R21 *)rt_nil_check(l_X_1890))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_1890))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_1891))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_1891))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_1890))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_1891))).f_NAME)))
{
{ rt_int rv1893 = 0;
return rv1893; }
}
}
else
{
{
R23 l_MX_1894; memset(&l_MX_1894, 0, sizeof l_MX_1894);
S_R23(&l_MX_1894, r_MANIFEST(l_X_1890), 0);
R23 l_MY_1895; memset(&l_MY_1895, 0, sizeof l_MY_1895);
S_R23(&l_MY_1895, r_MANIFEST(l_Y_1891), 0);
if (((!((l_MX_1894).f_OK == (l_MY_1895).f_OK)) || (!((l_MX_1894).f_V == (l_MY_1895).f_V))))
{
{ rt_int rv1896 = 0;
return rv1896; }
}
}
}
l_X_1890 = ((*(R21 *)rt_nil_check(l_X_1890))).f_NEXT;
l_Y_1891 = ((*(R21 *)rt_nil_check(l_Y_1891))).f_NEXT;
}
RT_B_TICK();
} L_end1892: ;
{ rt_int rv1897 = ((((l_X_1890 == NULL) && (l_Y_1891 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_1885))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_1886))).f_B == NULL));
return rv1897; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1898; memset(&l_Y_1898, 0, sizeof l_Y_1898);
l_Y_1898 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_1899; memset(&l_FOUND_1899, 0, sizeof l_FOUND_1899);
l_FOUND_1899 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_1898 == NULL)) goto L_end1900;
{
if ((((*(R12 *)rt_nil_check(l_Y_1898))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_1901; memset(&l_R_1901, 0, sizeof l_R_1901);
l_R_1901 = r_ORIGINAL(l_Y_1898);
r_ROUTINE_HEADER(l_R_1901);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_1901)) && (!((*(R12 *)rt_nil_check(l_R_1901))).f_GENERIC)))
{
if (((!(l_FOUND_1899 == NULL)) && (!(l_FOUND_1899 == l_R_1901))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_1899 = l_R_1901;
}
}
}
l_Y_1898 = r_LOOKUP_NEXT(l_Y_1898);
}
RT_B_TICK();
} L_end1900: ;
if ((l_FOUND_1899 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_1899))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv1902 = l_FOUND_1899;
return rv1902; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_1903; memset(&l_NEEDL_1903, 0, sizeof l_NEEDL_1903);
l_NEEDL_1903 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_1904; memset(&l_SAVED_1904, 0, sizeof l_SAVED_1904);
l_SAVED_1904 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_1903 == NULL)) goto L_end1905;
{
{
R21 * l_T_1906; memset(&l_T_1906, 0, sizeof l_T_1906);
l_T_1906 = ((*(R21 *)rt_nil_check(l_NEEDL_1903))).f_A;
for (;;) {
if ((l_T_1906 == NULL)) goto L_end1907;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_1906))).f_NAME) == NULL))
{
{
R27 * l_ARGS_1908; memset(&l_ARGS_1908, 0, sizeof l_ARGS_1908);
l_ARGS_1908 = NULL;
R27 * l_TAIL_1909; memset(&l_TAIL_1909, 0, sizeof l_TAIL_1909);
l_TAIL_1909 = NULL;
R21 * l_P_1910; memset(&l_P_1910, 0, sizeof l_P_1910);
l_P_1910 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_1906))).f_B))).f_A;
R12 * l_R_1911; memset(&l_R_1911, 0, sizeof l_R_1911);
rt_int l_ENTERED_1912; memset(&l_ENTERED_1912, 0, sizeof l_ENTERED_1912);
l_ENTERED_1912 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_1910 == NULL)) goto L_end1913;
{
{
R27 * l_A_1914; memset(&l_A_1914, 0, sizeof l_A_1914);
if ((((*(R21 *)rt_nil_check(l_P_1910))).f_B == NULL))
{
l_A_1914 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_1914 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1910))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_1914))).f_MODE = ((*(R21 *)rt_nil_check(l_P_1910))).f_IV;
if ((l_TAIL_1909 == NULL))
{
l_ARGS_1908 = l_A_1914;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1909))).f_NEXT = l_A_1914;
}
l_TAIL_1909 = l_A_1914;
}
l_P_1910 = ((*(R21 *)rt_nil_check(l_P_1910))).f_NEXT;
}
RT_B_TICK();
} L_end1913: ;
if (l_ENTERED_1912)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_1911 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_1906))).f_NAME, l_ARGS_1908, p_LINE, 0);
if ((l_R_1911 == NULL))
{
l_R_1911 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_1906))).f_NAME);
for (;;) {
if ((l_R_1911 == NULL)) goto L_end1915;
{
if ((((*(R12 *)rt_nil_check(l_R_1911))).f_KIND == g_Y_BUILTIN))
{
goto L_end1915;
}
l_R_1911 = r_LOOKUP_NEXT(l_R_1911);
}
RT_B_TICK();
} L_end1915: ;
}
if (((l_R_1911 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_1906))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_1906))).f_NAME);
}
if ((!(l_R_1911 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_1906))).f_NAME, NULL, r_NO_MVAL(), l_R_1911, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_1906 = ((*(R21 *)rt_nil_check(l_T_1906))).f_NEXT;
}
RT_B_TICK();
} L_end1907: ;
}
l_NEEDL_1903 = ((*(R21 *)rt_nil_check(l_NEEDL_1903))).f_NEXT;
}
RT_B_TICK();
} L_end1905: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1904;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1916 = 0;
return rv1916; }
}
{
R12 * l_Y_1917; memset(&l_Y_1917, 0, sizeof l_Y_1917);
l_Y_1917 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1918; memset(&l_A_1918, 0, sizeof l_A_1918);
l_A_1918 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1919; memset(&l_F_1919, 0, sizeof l_F_1919);
if ((l_Y_1917 == NULL))
{
{ rt_int rv1920 = 0;
return rv1920; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_1917))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_1917))).f_DECL == NULL)))
{
{ rt_int rv1921 = 0;
return rv1921; }
}
l_F_1919 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1917))).f_DECL))).f_A;
for (;;) {
if ((l_F_1919 == NULL)) goto L_end1922;
{
{
R21 * l_N_1923; memset(&l_N_1923, 0, sizeof l_N_1923);
l_N_1923 = ((*(R21 *)rt_nil_check(l_F_1919))).f_A;
for (;;) {
if ((l_N_1923 == NULL)) goto L_end1924;
{
if ((l_A_1918 == NULL))
{
{ rt_int rv1925 = 0;
return rv1925; }
}
if (((((*(R21 *)rt_nil_check(l_F_1919))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_1918))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1926 = 1;
return rv1926; }
}
l_A_1918 = ((*(R21 *)rt_nil_check(l_A_1918))).f_NEXT;
l_N_1923 = ((*(R21 *)rt_nil_check(l_N_1923))).f_NEXT;
}
RT_B_TICK();
} L_end1924: ;
}
l_F_1919 = ((*(R21 *)rt_nil_check(l_F_1919))).f_NEXT;
}
RT_B_TICK();
} L_end1922: ;
}
{ rt_int rv1927 = 0;
return rv1927; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_1928; memset(&l_A_1928, 0, sizeof l_A_1928);
l_A_1928 = p_ARGS;
R12 * l_I_1929; memset(&l_I_1929, 0, sizeof l_I_1929);
l_I_1929 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_1930; memset(&l_SAVED_1930, 0, sizeof l_SAVED_1930);
l_SAVED_1930 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_1931; memset(&l_P_1931, 0, sizeof l_P_1931);
l_P_1931 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_1932; memset(&l_TAIL_1932, 0, sizeof l_TAIL_1932);
l_TAIL_1932 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_1929)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_1929))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_1929))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_1929))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_1929))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_1929))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_1929;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_1931 == NULL)) goto L_end1933;
{
{
R28 * l_PM_1934; memset(&l_PM_1934, 0, sizeof l_PM_1934);
l_PM_1934 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1934)), (*(R28 *)rt_nil_check(l_P_1931)), 0);
((*(R28 *)rt_nil_check(l_PM_1934))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_1931))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_1934))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1931))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_1934))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1931))).f_TS) && ((*(R27 *)rt_nil_check(l_A_1928))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_1934))).f_T = (((*(R27 *)rt_nil_check(l_A_1928))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1934))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1934))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_1934))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1934))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_1934))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_1931))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_1934))).f_TS = NULL;
if ((l_TAIL_1932 == NULL))
{
((*(R12 *)rt_nil_check(l_I_1929))).f_PARAMS = l_PM_1934;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1932))).f_NEXT = l_PM_1934;
}
l_TAIL_1932 = l_PM_1934;
}
l_P_1931 = ((*(R28 *)rt_nil_check(l_P_1931))).f_NEXT;
l_A_1928 = ((*(R27 *)rt_nil_check(l_A_1928))).f_NEXT;
}
RT_B_TICK();
} L_end1933: ;
((*(R12 *)rt_nil_check(l_I_1929))).f_RESULT = r_RESULT_TYPE(l_I_1929);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1930;
S_R10(&((*(R12 *)rt_nil_check(l_I_1929))).f_FWD, r_C_HEADER(l_I_1929), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_1929))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_1929))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_1929;
{ R12 * rv1935 = l_I_1929;
return rv1935; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1936 = 0;
return rv1936; }
}
{ rt_int rv1937 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv1937; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_1938; memset(&l_C_1938, 0, sizeof l_C_1938);
if ((p_TS == NULL))
{
{ R21 * rv1939 = NULL;
return rv1939; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_1940; memset(&l_F_1940, 0, sizeof l_F_1940);
l_F_1940 = p_FORMALS;
R21 * l_A_1941; memset(&l_A_1941, 0, sizeof l_A_1941);
l_A_1941 = p_ARGS;
for (;;) {
if ((l_F_1940 == NULL)) goto L_end1942;
{
{
R21 * l_N_1943; memset(&l_N_1943, 0, sizeof l_N_1943);
l_N_1943 = ((*(R21 *)rt_nil_check(l_F_1940))).f_A;
for (;;) {
if ((l_N_1943 == NULL)) goto L_end1944;
{
if ((l_A_1941 == NULL))
{
{ R21 * rv1945 = p_TS;
return rv1945; }
}
if (((((*(R21 *)rt_nil_check(l_F_1940))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_1943))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv1946 = l_A_1941;
return rv1946; }
}
l_A_1941 = ((*(R21 *)rt_nil_check(l_A_1941))).f_NEXT;
l_N_1943 = ((*(R21 *)rt_nil_check(l_N_1943))).f_NEXT;
}
RT_B_TICK();
} L_end1944: ;
}
l_F_1940 = ((*(R21 *)rt_nil_check(l_F_1940))).f_NEXT;
}
RT_B_TICK();
} L_end1942: ;
}
{ R21 * rv1947 = p_TS;
return rv1947; }
}
l_C_1938 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_1938))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_1938))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv1948 = l_C_1938;
return rv1948; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_1949; memset(&l_C_1949, 0, sizeof l_C_1949);
l_C_1949 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_1949)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_1949))).f_NEXT = NULL;
{ R21 * rv1950 = l_C_1949;
return rv1950; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1951; memset(&l_P_1951, 0, sizeof l_P_1951);
l_P_1951 = p_L;
for (;;) {
if ((l_P_1951 == NULL)) goto L_end1952;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1951))).f_NAME, p_NAME))
{
{ rt_int rv1953 = 1;
return rv1953; }
}
l_P_1951 = ((*(R21 *)rt_nil_check(l_P_1951))).f_NEXT;
}
RT_B_TICK();
} L_end1952: ;
{ rt_int rv1954 = 0;
return rv1954; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_1955; memset(&l_IS_1955, 0, sizeof l_IS_1955);
l_IS_1955 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv1956 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1956; }
}
if ((l_IS_1955 == NULL))
{
{ rt_int rv1957 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1957; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_1955))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_1955))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv1958 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1958; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_1955))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1955))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1959 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1959; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1955))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1960 = 0;
return rv1960; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_1961; memset(&l_ITEMS_1961, 0, sizeof l_ITEMS_1961);
l_ITEMS_1961 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_1962; memset(&l_HEAD_1962, 0, sizeof l_HEAD_1962);
l_HEAD_1962 = NULL;
R21 * l_TAIL_1963; memset(&l_TAIL_1963, 0, sizeof l_TAIL_1963);
l_TAIL_1963 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_1961 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1961))).f_A, &l_HEAD_1962, &l_TAIL_1963);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1961))).f_B, &l_HEAD_1962, &l_TAIL_1963);
{
R21 * l_R_1964; memset(&l_R_1964, 0, sizeof l_R_1964);
l_R_1964 = ((*(R21 *)rt_nil_check(l_ITEMS_1961))).f_C;
for (;;) {
if ((l_R_1964 == NULL)) goto L_end1965;
{
{
R12 * l_Z_1966; memset(&l_Z_1966, 0, sizeof l_Z_1966);
l_Z_1966 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_1964))).f_NAME);
if (((l_Z_1966 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_1964))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_1964))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_1964))).f_NAME);
}
for (;;) {
if ((l_Z_1966 == NULL)) goto L_end1967;
{
if ((((*(R12 *)rt_nil_check(l_Z_1966))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_1968; memset(&l_O_1968, 0, sizeof l_O_1968);
l_O_1968 = r_ORIGINAL(l_Z_1966);
R21 * l_U_1969; memset(&l_U_1969, 0, sizeof l_U_1969);
r_COMPUTE_USES(l_O_1968);
l_U_1969 = ((*(R12 *)rt_nil_check(l_O_1968))).f_USES;
for (;;) {
if ((l_U_1969 == NULL)) goto L_end1970;
{
if ((!r_IN_IDENTS(l_HEAD_1962, ((*(R21 *)rt_nil_check(l_U_1969))).f_NAME)))
{
{
R21 * l_N_1971; memset(&l_N_1971, 0, sizeof l_N_1971);
l_N_1971 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_1969))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1971))).f_NAME, ((*(R21 *)rt_nil_check(l_U_1969))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1971))).f_IV = ((*(R21 *)rt_nil_check(l_U_1969))).f_IV;
r_ADD_LIST(l_N_1971, &l_HEAD_1962, &l_TAIL_1963);
}
}
l_U_1969 = ((*(R21 *)rt_nil_check(l_U_1969))).f_NEXT;
}
RT_B_TICK();
} L_end1970: ;
}
}
l_Z_1966 = r_LOOKUP_NEXT(l_Z_1966);
}
RT_B_TICK();
} L_end1967: ;
}
l_R_1964 = ((*(R21 *)rt_nil_check(l_R_1964))).f_NEXT;
}
RT_B_TICK();
} L_end1965: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_1962;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_1972; memset(&l_M_1972, 0, sizeof l_M_1972);
if ((p_B == NULL))
{
{ rt_int rv1973 = 0;
return rv1973; }
}
l_M_1972 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_1972 == NULL)) goto L_end1974;
{
if ((((*(R21 *)rt_nil_check(l_M_1972))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_1972))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_1972))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_1972))).f_C, p_NAME)))
{
{ rt_int rv1975 = 1;
return rv1975; }
}
}
l_M_1972 = ((*(R21 *)rt_nil_check(l_M_1972))).f_NEXT;
}
RT_B_TICK();
} L_end1974: ;
{ rt_int rv1976 = 0;
return rv1976; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_1977; memset(&l_R_1977, 0, sizeof l_R_1977);
l_R_1977 = p_RS;
for (;;) {
if ((l_R_1977 == NULL)) goto L_end1978;
{
if ((((*(R21 *)rt_nil_check(l_R_1977))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_1977));
}
l_R_1977 = ((*(R21 *)rt_nil_check(l_R_1977))).f_NEXT;
}
RT_B_TICK();
} L_end1978: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_1979; memset(&l_P_1979, 0, sizeof l_P_1979);
l_P_1979 = p_L;
for (;;) {
if ((l_P_1979 == NULL)) goto L_end1980;
{
{
R12 * l_V_1981; memset(&l_V_1981, 0, sizeof l_V_1981);
l_V_1981 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_1979))).f_NAME);
R21 * l_N_1982; memset(&l_N_1982, 0, sizeof l_N_1982);
l_N_1982 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_1979))).f_LINE);
if ((l_V_1981 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1979))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_1979))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_1982))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1979))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1982))).f_IV = ((*(R12 *)rt_nil_check(l_V_1981))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_1981))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_1982, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_1979 = ((*(R21 *)rt_nil_check(l_P_1979))).f_NEXT;
}
RT_B_TICK();
} L_end1980: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_1983; memset(&l_IS_1983, 0, sizeof l_IS_1983);
l_IS_1983 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_1984; memset(&l_U_1984, 0, sizeof l_U_1984);
l_U_1984 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_1983 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_1983))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_1984 == NULL)) goto L_end1985;
{
if ((!(((*(R21 *)rt_nil_check(l_U_1984))).f_IV == ((*(R19 *)rt_nil_check(l_IS_1983))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_1983))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_1984))).f_NAME, (((*(R21 *)rt_nil_check(l_U_1984))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1983))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_1984))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1983))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_1984))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1983))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1983))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1983))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1983))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_1984))).f_NAME)))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_1984))).f_NAME, (((*(R21 *)rt_nil_check(l_U_1984))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_1984 = ((*(R21 *)rt_nil_check(l_U_1984))).f_NEXT;
}
RT_B_TICK();
} L_end1985: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_1986; memset(&l_R_1986, 0, sizeof l_R_1986);
l_R_1986 = p_RS;
for (;;) {
if ((l_R_1986 == NULL)) goto L_end1987;
{
{
R12 * l_Z_1988; memset(&l_Z_1988, 0, sizeof l_Z_1988);
l_Z_1988 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_1986))).f_NAME);
for (;;) {
if ((l_Z_1988 == NULL)) goto L_end1989;
{
if ((((*(R12 *)rt_nil_check(l_Z_1988))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_1990; memset(&l_O_1990, 0, sizeof l_O_1990);
l_O_1990 = r_ORIGINAL(l_Z_1988);
r_COMPUTE_USES(l_O_1990);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_1990))).f_USES, p_NAME))
{
{ rt_int rv1991 = 1;
return rv1991; }
}
}
}
l_Z_1988 = r_LOOKUP_NEXT(l_Z_1988);
}
RT_B_TICK();
} L_end1989: ;
}
l_R_1986 = ((*(R21 *)rt_nil_check(l_R_1986))).f_NEXT;
}
RT_B_TICK();
} L_end1987: ;
{ rt_int rv1992 = 0;
return rv1992; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_1993; memset(&l_M_1993, 0, sizeof l_M_1993);
l_M_1993 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_1993 == NULL)) goto L_end1994;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_1993))).f_NAME))
{
{ rt_int rv1995 = 1;
return rv1995; }
}
l_M_1993 = ((*(R12 *)rt_nil_check(l_M_1993))).f_MODL;
}
RT_B_TICK();
} L_end1994: ;
{ rt_int rv1996 = 0;
return rv1996; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv1997 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv1997; }
}
{ R10 rv1998 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv1998; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_1999; memset(&l_C_1999, 0, sizeof l_C_1999);
l_C_1999 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1999 == NULL)) goto L_end2000;
{
if ((((*(R17 *)rt_nil_check(l_C_1999))).f_KIND == ((rt_int)1LL)))
{
goto L_end2000;
}
if ((((*(R17 *)rt_nil_check(l_C_1999))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2001; memset(&l_H_2001, 0, sizeof l_H_2001);
l_H_2001 = ((*(R17 *)rt_nil_check(l_C_1999))).f_HANDLERS;
for (;;) {
if ((l_H_2001 == NULL)) goto L_end2002;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2001))).f_A, p_NAME))
{
{ rt_int rv2003 = 1;
return rv2003; }
}
l_H_2001 = ((*(R21 *)rt_nil_check(l_H_2001))).f_NEXT;
}
RT_B_TICK();
} L_end2002: ;
}
}
l_C_1999 = ((*(R17 *)rt_nil_check(l_C_1999))).f_NEXT;
}
RT_B_TICK();
} L_end2000: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2004 = 1;
return rv2004; }
}
}
{ rt_int rv2005 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2005; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2006; memset(&l_C_2006, 0, sizeof l_C_2006);
l_C_2006 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2006)), ({ R17 rc2007; memset(&rc2007, 0, sizeof rc2007);  rc2007.f_KIND = p_KIND; S_R10(&rc2007.f_NAME, p_NAME, 0); rc2007.f_HANDLERS = NULL; rc2007.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2007; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2006;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2008; memset(&l_C_2008, 0, sizeof l_C_2008);
l_C_2008 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2008 == NULL)) goto L_end2009;
{
if ((((*(R17 *)rt_nil_check(l_C_2008))).f_KIND == p_KIND))
{
{ R17 * rv2010 = l_C_2008;
return rv2010; }
}
if ((((*(R17 *)rt_nil_check(l_C_2008))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2011 = NULL;
return rv2011; }
}
if ((((*(R17 *)rt_nil_check(l_C_2008))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2008))).f_NAME));
}
l_C_2008 = ((*(R17 *)rt_nil_check(l_C_2008))).f_NEXT;
}
RT_B_TICK();
} L_end2009: ;
{ R17 * rv2012 = NULL;
return rv2012; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2013; memset(&l_C_2013, 0, sizeof l_C_2013);
l_C_2013 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2014; memset(&l_N_2014, 0, sizeof l_N_2014);
l_N_2014 = ((rt_int)0LL);
for (;;) {
if ((l_C_2013 == NULL)) goto L_end2015;
{
if ((((*(R17 *)rt_nil_check(l_C_2013))).f_KIND == ((rt_int)1LL)))
{
goto L_end2015;
}
if ((((*(R17 *)rt_nil_check(l_C_2013))).f_KIND == ((rt_int)3LL)))
{
l_N_2014 = rt_add(l_N_2014, ((rt_int)1LL));
}
l_C_2013 = ((*(R17 *)rt_nil_check(l_C_2013))).f_NEXT;
}
RT_B_TICK();
} L_end2015: ;
{ rt_int rv2016 = l_N_2014;
return rv2016; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2017; memset(&l_N_2017, 0, sizeof l_N_2017);
l_N_2017 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2017 == NULL)) goto L_end2018;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2017))).f_NAME, p_NAME))
{
{ R10 rv2019 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv2019; }
}
l_N_2017 = ((*(R21 *)rt_nil_check(l_N_2017))).f_NEXT;
}
RT_B_TICK();
} L_end2018: ;
l_N_2017 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2017))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2017))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2017;
{ R10 rv2020 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv2020; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2021; memset(&l_D_2021, 0, sizeof l_D_2021);
l_D_2021 = p_DECLS;
for (;;) {
if ((l_D_2021 == NULL)) goto L_end2022;
{
if (((((*(R21 *)rt_nil_check(l_D_2021))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2021))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2023; memset(&l_Y_2023, 0, sizeof l_Y_2023);
l_Y_2023 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2021))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2021))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2023))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2023))).f_DECL = l_D_2021;
r_DEFINE(l_Y_2023, ((*(R21 *)rt_nil_check(l_D_2021))).f_LINE);
}
}
l_D_2021 = ((*(R21 *)rt_nil_check(l_D_2021))).f_NEXT;
}
RT_B_TICK();
} L_end2022: ;
}
static void r_DECLARE_LABELS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2024; memset(&l_S_2024, 0, sizeof l_S_2024);
l_S_2024 = p_S0;
for (;;) {
if ((l_S_2024 == NULL)) goto L_end2025;
{
{
R21 * l_L_2026; memset(&l_L_2026, 0, sizeof l_L_2026);
l_L_2026 = l_S_2024;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2026))).f_KIND == g_N_LABELED))) goto L_end2027;
{
{
R12 * l_Y_2028; memset(&l_Y_2028, 0, sizeof l_Y_2028);
l_Y_2028 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2026))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2028))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(((*(R21 *)rt_nil_check(l_L_2026))).f_NAME, (((*(R21 *)rt_nil_check(l_L_2026))).f_NAME).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2028))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2028, ((*(R21 *)rt_nil_check(l_L_2026))).f_LINE);
}
l_L_2026 = ((*(R21 *)rt_nil_check(l_L_2026))).f_A;
}
RT_B_TICK();
} L_end2027: ;
}
l_S_2024 = ((*(R21 *)rt_nil_check(l_S_2024))).f_NEXT;
}
RT_B_TICK();
} L_end2025: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2029; memset(&l_D_2029, 0, sizeof l_D_2029);
l_D_2029 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2030; memset(&l_S_2030, 0, sizeof l_S_2030);
l_S_2030 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2029 == NULL)) goto L_end2031;
{
if (((((*(R21 *)rt_nil_check(l_D_2029))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2029))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2029);
}
l_D_2029 = ((*(R21 *)rt_nil_check(l_D_2029))).f_NEXT;
}
RT_B_TICK();
} L_end2031: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2030 == NULL)) goto L_end2032;
{
r_STMT(l_S_2030);
l_S_2030 = ((*(R21 *)rt_nil_check(l_S_2030))).f_NEXT;
}
RT_B_TICK();
} L_end2032: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2033; memset(&l_F_2033, 0, sizeof l_F_2033);
S_R10(&l_F_2033, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2034; memset(&l_H_2034, 0, sizeof l_H_2034);
l_H_2034 = p_HANDLERS;
R10 l_WORD_2035; memset(&l_WORD_2035, 0, sizeof l_WORD_2035);
S_R10(&l_WORD_2035, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2033, l_F_2033));
r_PUSH_CTX(((rt_int)3LL), l_F_2033);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2033, l_F_2033, l_F_2033));
for (;;) {
if ((l_H_2034 == NULL)) goto L_end2036;
{
{
R21 * l_N_2037; memset(&l_N_2037, 0, sizeof l_N_2037);
l_N_2037 = ((*(R21 *)rt_nil_check(l_H_2034))).f_A;
R10 l_COND_2038; memset(&l_COND_2038, 0, sizeof l_COND_2038);
S_R10(&l_COND_2038, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2037 == NULL)) goto L_end2039;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2037))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2037))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2037))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2037))).f_NAME);
}
S_R10(&l_COND_2038, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2038, l_F_2033, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2037))).f_NAME)), 0);
l_N_2037 = ((*(R21 *)rt_nil_check(l_N_2037))).f_NEXT;
}
RT_B_TICK();
} L_end2039: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2035, l_COND_2038));
S_R10(&l_WORD_2035, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2033, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2034))).f_B);
r_POP_CTX();
}
l_H_2034 = ((*(R21 *)rt_nil_check(l_H_2034))).f_NEXT;
}
RT_B_TICK();
} L_end2036: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2033));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2040; memset(&l_K_2040, 0, sizeof l_K_2040);
l_K_2040 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2040 == g_N_NULL))
{
return;
}
else if ((l_K_2040 == g_N_LABELED))
{
{
R12 * l_Y_2041; memset(&l_Y_2041, 0, sizeof l_Y_2041);
l_Y_2041 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2041))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2040 == g_N_GOTO))
{
{
R12 * l_Y_2042; memset(&l_Y_2042, 0, sizeof l_Y_2042);
l_Y_2042 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2043; memset(&l_N_2043, 0, sizeof l_N_2043);
R17 * l_C_2044; memset(&l_C_2044, 0, sizeof l_C_2044);
l_C_2044 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2042 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2042))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2042))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2043 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2042))).f_MV);
for (;;) {
if ((l_N_2043 <= ((rt_int)0LL))) goto L_end2045;
{
if ((((*(R17 *)rt_nil_check(l_C_2044))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2044))).f_NAME));
l_N_2043 = rt_sub(l_N_2043, ((rt_int)1LL));
}
l_C_2044 = ((*(R17 *)rt_nil_check(l_C_2044))).f_NEXT;
}
RT_B_TICK();
} L_end2045: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2042))).f_ACCESS));
}
}
else if ((l_K_2040 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2040 == g_N_CALL))
{
{
R26 l_V_2046; memset(&l_V_2046, 0, sizeof l_V_2046);
S_R26(&l_V_2046, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2046).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2046).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2046).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2040 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2040 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2040 == g_N_LOOP))
{
{
R10 l_END_L_2047; memset(&l_END_L_2047, 0, sizeof l_END_L_2047);
S_R10(&l_END_L_2047, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2047));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2047);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2047));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2047));
}
}
else if ((l_K_2040 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2040 == g_N_EXIT))
{
{
R17 * l_C_2048; memset(&l_C_2048, 0, sizeof l_C_2048);
l_C_2048 = r_LEAVE(((rt_int)2LL));
if ((l_C_2048 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2048))).f_NAME));
}
}
else if ((l_K_2040 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2040 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2040 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2040 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2040 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2040 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2040 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2040 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2049; memset(&l_Y_2049, 0, sizeof l_Y_2049);
l_Y_2049 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2049 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2049))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2049))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2050 = r_CALL_EXPR(p_S, NULL);
return rv2050; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2051; memset(&l_ARM_2051, 0, sizeof l_ARM_2051);
l_ARM_2051 = p_ARMS;
R10 l_WORD_2052; memset(&l_WORD_2052, 0, sizeof l_WORD_2052);
S_R10(&l_WORD_2052, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2053; memset(&l_OPEN_2053, 0, sizeof l_OPEN_2053);
l_OPEN_2053 = ((rt_int)0LL);
rt_int l_CHOSEN_2054; memset(&l_CHOSEN_2054, 0, sizeof l_CHOSEN_2054);
l_CHOSEN_2054 = 0;
for (;;) {
if ((l_ARM_2051 == NULL)) goto L_end2055;
{
{
R23 l_M_2056; memset(&l_M_2056, 0, sizeof l_M_2056);
S_R23(&l_M_2056, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2051))).f_A), 0);
if (l_CHOSEN_2054)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2051))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2051))).f_B);
}
else if ((l_M_2056).f_OK)
{
if ((!r_TEQS(l_WORD_2052, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2053 = rt_add(l_OPEN_2053, ((rt_int)1LL));
S_R10(&l_WORD_2052, r_MK(rt_str("if", 2)), 0);
}
if (((l_M_2056).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2051))).f_B);
l_CHOSEN_2054 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2051))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2052, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2051))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2051))).f_B);
S_R10(&l_WORD_2052, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2051 = ((*(R21 *)rt_nil_check(l_ARM_2051))).f_NEXT;
}
RT_B_TICK();
} L_end2055: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2054)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2052, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2058_lo = ((rt_int)1LL), it2058_hi = l_OPEN_2053;
for (rt_int it2058 = it2058_lo; it2058 <= it2058_hi; it2058++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2058 == it2058_hi) break;
} } L_end2057: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2059; memset(&l_SAVED_CODE_2059, 0, sizeof l_SAVED_CODE_2059);
S_R14(&l_SAVED_CODE_2059, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2060; memset(&rc2060, 0, sizeof rc2060);  rc2060.f_HEAD = NULL; rc2060.f_TAIL = NULL; rc2060; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2059, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2061; memset(&l_C_2061, 0, sizeof l_C_2061);
S_R10(&l_C_2061, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2062; memset(&l_END_L_2062, 0, sizeof l_END_L_2062);
S_R10(&l_END_L_2062, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2063; memset(&l_IT_2063, 0, sizeof l_IT_2063);
S_R10(&l_IT_2063, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2064; memset(&l_R_2064, 0, sizeof l_R_2064);
l_R_2064 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2065; memset(&l_LO_2065, 0, sizeof l_LO_2065);
S_R26(&l_LO_2065, r_EXPR(((*(R21 *)rt_nil_check(l_R_2064))).f_A, NULL), 0);
R26 l_HI_2066; memset(&l_HI_2066, 0, sizeof l_HI_2066);
S_R26(&l_HI_2066, r_EXPR(((*(R21 *)rt_nil_check(l_R_2064))).f_B, (l_LO_2065).f_T), 0);
R22 * l_T_2067; memset(&l_T_2067, 0, sizeof l_T_2067);
l_T_2067 = r_REAL_TYPE((l_LO_2065).f_T);
R10 l_LOC_2068; memset(&l_LOC_2068, 0, sizeof l_LOC_2068);
R10 l_HIC_2069; memset(&l_HIC_2069, 0, sizeof l_HIC_2069);
if ((((*(R22 *)rt_nil_check(l_T_2067))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2067))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2067))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2067))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2068, (l_LO_2065).f_C, 0);
S_R10(&l_HIC_2069, (l_HI_2066).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2064))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2064))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2068, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2068), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2064))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2069, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2069), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2063, l_LOC_2068, l_IT_2063, l_HIC_2069));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2063, l_IT_2063, l_IT_2063, l_IT_2063));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2070; memset(&l_Y_2070, 0, sizeof l_Y_2070);
l_Y_2070 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2070))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2067))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2070))).f_T = ((*(R22 *)rt_nil_check(l_T_2067))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2070))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2070, rt_str("", 0)), l_IT_2063));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2070, rt_str("", 0)), l_IT_2063));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2070))).f_ACCESS, l_IT_2063, 0);
}
r_DEFINE(l_Y_2070, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2062);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2063, l_IT_2063));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2062));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2071; memset(&l_CS_2071, 0, sizeof l_CS_2071);
l_CS_2071 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2072; memset(&l_C_2072, 0, sizeof l_C_2072);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2072 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2071))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2071))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2071))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2071))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2071))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2071))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2071))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2071))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2073; memset(&l_V_2073, 0, sizeof l_V_2073);
S_R10(&l_V_2073, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2071))).f_RESULT), l_V_2073, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2071))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2071))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2072 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2073));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2074; memset(&l_C_2074, 0, sizeof l_C_2074);
l_C_2074 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2074 == NULL)) goto L_end2075;
{
if ((((*(R17 *)rt_nil_check(l_C_2074))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2074))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2074))).f_KIND == ((rt_int)1LL)))
{
goto L_end2075;
}
l_C_2074 = ((*(R17 *)rt_nil_check(l_C_2074))).f_NEXT;
}
RT_B_TICK();
} L_end2075: ;
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
R21 * l_TG_2076; memset(&l_TG_2076, 0, sizeof l_TG_2076);
l_TG_2076 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2076))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2077; memset(&l_B_2077, 0, sizeof l_B_2077);
S_R26(&l_B_2077, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2076))).f_A, NULL), 0);
if ((!(l_B_2077).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2077).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2078; memset(&l_ARGS_2078, 0, sizeof l_ARGS_2078);
l_ARGS_2078 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2076))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2076))).f_C, g_M_IN, r_VAL_ARG(l_B_2077, NULL))));
R12 * l_Y_2079; memset(&l_Y_2079, 0, sizeof l_Y_2079);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2078))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2079 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2078, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2079 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2078))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2079 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2078, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2079 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2079, l_ARGS_2078, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2077).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2077).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2080; memset(&l_V_2080, 0, sizeof l_V_2080);
S_R26(&l_V_2080, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2077).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2080).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2077).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2077).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2076))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2076))).f_C), (l_V_2080).f_C));
}
}
return;
}
{
R26 l_LV_2081; memset(&l_LV_2081, 0, sizeof l_LV_2081);
S_R26(&l_LV_2081, r_EXPR(l_TG_2076, NULL), 0);
if ((!(l_LV_2081).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_2081).f_T, (l_LV_2081).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2081).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2081).f_SELF));
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2082; memset(&l_Y_2082, 0, sizeof l_Y_2082);
l_Y_2082 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2083; memset(&l_V_2083, 0, sizeof l_V_2083);
S_R26(&l_V_2083, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2082))).f_T = (l_V_2083).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2084; memset(&l_CN_2084, 0, sizeof l_CN_2084);
S_R10(&l_CN_2084, r_NEW_OBJECT(l_Y_2082, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2083).f_T))
{
r_CODE(r_INIT_CODE((l_V_2083).f_T, l_CN_2084));
}
r_CODE(r_ASSIGN_CODE((l_V_2083).f_T, l_CN_2084, (l_V_2083).f_C));
}
}
else
{
if ((!(l_V_2083).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2085; memset(&l_P_2085, 0, sizeof l_P_2085);
S_R10(&l_P_2085, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2083).f_T), l_P_2085, (l_V_2083).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2082))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2085), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2082))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2082))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2082))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2082, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2086; memset(&l_ARM_2086, 0, sizeof l_ARM_2086);
l_ARM_2086 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2087; memset(&l_CH_2087, 0, sizeof l_CH_2087);
S_R26(&l_CH_2087, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2088; memset(&l_T_2088, 0, sizeof l_T_2088);
l_T_2088 = r_REAL_TYPE((l_CH_2087).f_T);
R12 * l_BOUND_2089; memset(&l_BOUND_2089, 0, sizeof l_BOUND_2089);
l_BOUND_2089 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2088))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2088))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2090; memset(&l_TMP_2090, 0, sizeof l_TMP_2090);
S_R10(&l_TMP_2090, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2091; memset(&l_WORD_2091, 0, sizeof l_WORD_2091);
S_R10(&l_WORD_2091, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2090, (l_CH_2087).f_C));
for (;;) {
if ((l_ARM_2086 == NULL)) goto L_end2092;
{
{
R21 * l_L_2093; memset(&l_L_2093, 0, sizeof l_L_2093);
l_L_2093 = ((*(R21 *)rt_nil_check(l_ARM_2086))).f_A;
R10 l_COND_2094; memset(&l_COND_2094, 0, sizeof l_COND_2094);
S_R10(&l_COND_2094, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2093 == NULL)) goto L_end2095;
{
S_R10(&l_COND_2094, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2094, l_TMP_2090, (r_EXPR(l_L_2093, l_T_2088)).f_C), 0);
l_L_2093 = ((*(R21 *)rt_nil_check(l_L_2093))).f_NEXT;
}
RT_B_TICK();
} L_end2095: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2091, l_COND_2094));
S_R10(&l_WORD_2091, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2086))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2086))).f_C);
}
l_ARM_2086 = ((*(R21 *)rt_nil_check(l_ARM_2086))).f_NEXT;
}
RT_B_TICK();
} L_end2092: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2091, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2088))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2088))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2088))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2088))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2088));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2087).f_C));
for (;;) {
if ((l_ARM_2086 == NULL)) goto L_end2096;
{
{
R21 * l_L_2097; memset(&l_L_2097, 0, sizeof l_L_2097);
l_L_2097 = ((*(R21 *)rt_nil_check(l_ARM_2086))).f_A;
R23 l_FIRST_2098; memset(&l_FIRST_2098, 0, sizeof l_FIRST_2098);
S_R23(&l_FIRST_2098, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2097 == NULL)) goto L_end2099;
{
if ((((*(R21 *)rt_nil_check(l_L_2097))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2100; memset(&l_LO_2100, 0, sizeof l_LO_2100);
S_R23(&l_LO_2100, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2097))).f_A, l_T_2088), 0);
R23 l_HI_2101; memset(&l_HI_2101, 0, sizeof l_HI_2101);
S_R23(&l_HI_2101, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2097))).f_B, l_T_2088), 0);
rt_int l_A_2102; memset(&l_A_2102, 0, sizeof l_A_2102);
l_A_2102 = (l_LO_2100).f_V;
rt_int l_B_2103; memset(&l_B_2103, 0, sizeof l_B_2103);
l_B_2103 = (l_HI_2101).f_V;
if ((!(((l_LO_2100).f_OK && (l_HI_2101).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2097))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2097))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2097))).f_IV == ((rt_int)3LL))))
{
l_A_2102 = rt_add(l_A_2102, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2097))).f_IV >= ((rt_int)2LL)))
{
l_B_2103 = rt_sub(l_B_2103, ((rt_int)1LL));
}
if ((!(l_FIRST_2098).f_OK))
{
S_R23(&l_FIRST_2098, r_SOME(l_A_2102), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2102), r_NUM(l_B_2103)));
}
}
else
{
{
R23 l_M_2104; memset(&l_M_2104, 0, sizeof l_M_2104);
S_R23(&l_M_2104, r_ENUM_MANIFEST(l_L_2097, l_T_2088), 0);
if ((!(l_M_2104).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2097))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2098).f_OK))
{
S_R23(&l_FIRST_2098, l_M_2104, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2104).f_V)));
}
}
l_L_2097 = ((*(R21 *)rt_nil_check(l_L_2097))).f_NEXT;
}
RT_B_TICK();
} L_end2099: ;
if ((!(l_BOUND_2089 == NULL)))
{
{
R22 * l_SAVED_2105; memset(&l_SAVED_2105, 0, sizeof l_SAVED_2105);
l_SAVED_2105 = ((*(R12 *)rt_nil_check(l_BOUND_2089))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2089))).f_T = r_NARROW(l_SAVED_2105, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2098).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2086))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2086))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2089))).f_T = l_SAVED_2105;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2086))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2086))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2086 = ((*(R21 *)rt_nil_check(l_ARM_2086))).f_NEXT;
}
RT_B_TICK();
} L_end2096: ;
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
{ R12 * rv2106 = NULL;
return rv2106; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2107 = NULL;
return rv2107; }
}
{
R12 * l_Y_2108; memset(&l_Y_2108, 0, sizeof l_Y_2108);
l_Y_2108 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2108 == NULL))
{
{ R12 * rv2109 = NULL;
return rv2109; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2108))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2110 = NULL;
return rv2110; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2108))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2111 = NULL;
return rv2111; }
}
{
R24 * l_F_2112; memset(&l_F_2112, 0, sizeof l_F_2112);
l_F_2112 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2108))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2112 == NULL))
{
{ R12 * rv2113 = NULL;
return rv2113; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2112))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2114 = NULL;
return rv2114; }
}
}
{ R12 * rv2115 = l_Y_2108;
return rv2115; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2116; memset(&l_N_2116, 0, sizeof l_N_2116);
l_N_2116 = r_COPY_TYP(p_T);
R24 * l_F_2117; memset(&l_F_2117, 0, sizeof l_F_2117);
l_F_2117 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2118; memset(&l_A_2118, 0, sizeof l_A_2118);
l_A_2118 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2119; memset(&l_HEAD_2119, 0, sizeof l_HEAD_2119);
l_HEAD_2119 = NULL;
R25 * l_TAIL_2120; memset(&l_TAIL_2120, 0, sizeof l_TAIL_2120);
l_TAIL_2120 = NULL;
for (;;) {
if ((l_F_2117 == NULL)) goto L_end2121;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2117))).f_KIND == ((rt_int)0LL))) && (!(l_A_2118 == NULL))))
{
{
R25 * l_B_2122; memset(&l_B_2122, 0, sizeof l_B_2122);
l_B_2122 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2122)), (*(R25 *)rt_nil_check(l_A_2118)), 0);
((*(R25 *)rt_nil_check(l_B_2122))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2117))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2122))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2122))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2122))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2120 == NULL))
{
l_HEAD_2119 = l_B_2122;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2120))).f_NEXT = l_B_2122;
}
l_TAIL_2120 = l_B_2122;
}
l_A_2118 = ((*(R25 *)rt_nil_check(l_A_2118))).f_NEXT;
}
l_F_2117 = ((*(R24 *)rt_nil_check(l_F_2117))).f_NEXT;
}
RT_B_TICK();
} L_end2121: ;
((*(R22 *)rt_nil_check(l_N_2116))).f_ARGS = l_HEAD_2119;
{ R22 * rv2123 = l_N_2116;
return rv2123; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2124; memset(&l_ARM_2124, 0, sizeof l_ARM_2124);
l_ARM_2124 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2125; memset(&l_SAVED_2125, 0, sizeof l_SAVED_2125);
l_SAVED_2125 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2124 == NULL)) goto L_end2126;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2124))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2124))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2124))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2125;
return;
}
l_ARM_2124 = ((*(R21 *)rt_nil_check(l_ARM_2124))).f_NEXT;
}
RT_B_TICK();
} L_end2126: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2125;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2127; memset(&l_T_2127, 0, sizeof l_T_2127);
l_T_2127 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2127))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2128 = l_T_2127;
return rv2128; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2129; memset(&l_TD_2129, 0, sizeof l_TD_2129);
S_R10(&l_TD_2129, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2130; memset(&l_P_2130, 0, sizeof l_P_2130);
l_P_2130 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2130 == NULL)) goto L_end2131;
{
{
R12 * l_Y_2132; memset(&l_Y_2132, 0, sizeof l_Y_2132);
l_Y_2132 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2130))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2132))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2132))).f_DECL = l_P_2130;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2132, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2132))).f_INPUT = 1;
r_DEFINE(l_Y_2132, ((*(R21 *)rt_nil_check(l_P_2130))).f_LINE);
}
l_P_2130 = ((*(R21 *)rt_nil_check(l_P_2130))).f_NEXT;
}
RT_B_TICK();
} L_end2131: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2129));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2129, l_TD_2129));
l_P_2130 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2130 == NULL)) goto L_end2133;
{
r_ACTIVATE_PATH(l_P_2130, l_TD_2129);
l_P_2130 = ((*(R21 *)rt_nil_check(l_P_2130))).f_NEXT;
}
RT_B_TICK();
} L_end2133: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2129, l_TD_2129, l_TD_2129));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2129));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2134; memset(&l_FN_2134, 0, sizeof l_FN_2134);
S_R10(&l_FN_2134, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2135; memset(&l_FT_2135, 0, sizeof l_FT_2135);
S_R10(&l_FT_2135, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2136; memset(&l_Y_2136, 0, sizeof l_Y_2136);
l_Y_2136 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2137; memset(&l_H_2137, 0, sizeof l_H_2137);
S_R10(&l_H_2137, r_OBJ_ACCESS(l_Y_2136), 0);
R10 l_IT_2138; memset(&l_IT_2138, 0, sizeof l_IT_2138);
S_R10(&l_IT_2138, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2139; memset(&l_PRIO_2139, 0, sizeof l_PRIO_2139);
S_R10(&l_PRIO_2139, r_MK(rt_str("0", 1)), 0);
R10 l_START_2140; memset(&l_START_2140, 0, sizeof l_START_2140);
R22 * l_LT_2141; memset(&l_LT_2141, 0, sizeof l_LT_2141);
l_LT_2141 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2135, l_FT_2135));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2139, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2142; memset(&l_R_2142, 0, sizeof l_R_2142);
l_R_2142 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2143; memset(&l_LV_2143, 0, sizeof l_LV_2143);
S_R26(&l_LV_2143, r_EXPR(((*(R21 *)rt_nil_check(l_R_2142))).f_A, NULL), 0);
R10 l_LO_2144; memset(&l_LO_2144, 0, sizeof l_LO_2144);
S_R10(&l_LO_2144, (l_LV_2143).f_C, 0);
R10 l_HI_2145; memset(&l_HI_2145, 0, sizeof l_HI_2145);
S_R10(&l_HI_2145, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2142))).f_B, (l_LV_2143).f_T)).f_C, 0);
R22 * l_RT_2146; memset(&l_RT_2146, 0, sizeof l_RT_2146);
l_RT_2146 = r_REAL_TYPE((l_LV_2143).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2146))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2146))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2141 = ((*(R22 *)rt_nil_check(l_RT_2146))).f_BASE;
S_R10(&l_HI_2145, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2142))).f_B, l_LT_2141)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2146))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2146))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2142))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2142))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2144, r_FMT1(rt_str("(@) + 1", 7), l_LO_2144), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2142))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2145, r_FMT1(rt_str("(@) - 1", 7), l_HI_2145), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2137, l_LO_2144, l_HI_2145));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2138, l_H_2137, l_IT_2138, l_H_2137), l_IT_2138));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2138));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2135, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME, l_IT_2138));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2147; memset(&l_V_2147, 0, sizeof l_V_2147);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2148; memset(&l_I_2148, 0, sizeof l_I_2148);
l_I_2148 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2148))).f_T = l_LT_2141;
((*(R12 *)rt_nil_check(l_I_2148))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2148))).f_ACCESS, l_IT_2138, 0);
((*(R12 *)rt_nil_check(l_I_2148))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2148, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2147, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2147).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2147).f_C));
}
}
S_R10(&l_START_2140, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2137, l_IT_2138, l_FN_2134, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2140, p_TD, l_PRIO_2139, l_IT_2138));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2137));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2140, p_TD, l_PRIO_2139));
}
r_PATH_BODY(p_P, l_FN_2134, l_FT_2135, l_LT_2141);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2149 = r_MK(rt_str("NULL", 4));
return rv2149; }
}
{ R10 rv2150 = r_MK(rt_str("F", 1));
return rv2150; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2151; memset(&l_SAVED_CODE_2151, 0, sizeof l_SAVED_CODE_2151);
S_R14(&l_SAVED_CODE_2151, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2152; memset(&l_SAVED_CTXS_2152, 0, sizeof l_SAVED_CTXS_2152);
l_SAVED_CTXS_2152 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2153; memset(&l_OUTER_2153, 0, sizeof l_OUTER_2153);
l_OUTER_2153 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2154; memset(&l_H_2154, 0, sizeof l_H_2154);
l_H_2154 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2155; memset(&l_CS_2155, 0, sizeof l_CS_2155);
l_CS_2155 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_2156; memset(&l_UPT_2156, 0, sizeof l_UPT_2156);
S_R10(&l_UPT_2156, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2153))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2156, ((*(R18 *)rt_nil_check(l_OUTER_2153))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2155)), ({ R18 rc2157; memset(&rc2157, 0, sizeof rc2157);  rc2157.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2153))).f_LEVEL, ((rt_int)1LL)); rc2157.f_R = NULL; rc2157.f_FRAMED = 1; S_R10(&rc2157.f_FTYPE, p_FT, 0); S_R14(&rc2157.f_FIELDS, ({ R14 rc2158; memset(&rc2158, 0, sizeof rc2158);  rc2158.f_HEAD = NULL; rc2158.f_TAIL = NULL; rc2158; }), 0); rc2157.f_UP = l_OUTER_2153; rc2157.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2154))).f_B; rc2157.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2154))).f_A; rc2157.f_RESULT = NULL; rc2157.f_IS_PATH = 1; S_R10(&rc2157.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2157; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2156), &((*(R18 *)rt_nil_check(l_CS_2155))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2155;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2159; memset(&rc2159, 0, sizeof rc2159);  rc2159.f_HEAD = NULL; rc2159.f_TAIL = NULL; rc2159; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2154))).f_B, ((*(R21 *)rt_nil_check(l_H_2154))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2160; memset(&l_I_2160, 0, sizeof l_I_2160);
l_I_2160 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2160))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2160))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2160))).f_FIELD, r_FMT1(rt_str("l_@", 3), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2160))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2155))).f_FIELDS);
r_DEFINE(l_I_2160, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2161; memset(&l_L_2161, 0, sizeof l_L_2161);
l_L_2161 = ((*(R21 *)rt_nil_check(l_H_2154))).f_A;
R10 l_C_2162; memset(&l_C_2162, 0, sizeof l_C_2162);
S_R10(&l_C_2162, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2161 == NULL)) goto L_end2163;
{
S_R10(&l_C_2162, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2162, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2161))).f_NAME)), 0);
l_L_2161 = ((*(R21 *)rt_nil_check(l_L_2161))).f_NEXT;
}
RT_B_TICK();
} L_end2163: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2162));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2155))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2153;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2151, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2152;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2164; memset(&l_C_2164, 0, sizeof l_C_2164);
l_C_2164 = (p_B).f_HEAD;
R10 l_R_2165; memset(&l_R_2165, 0, sizeof l_R_2165);
S_R10(&l_R_2165, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2164 == NULL)) goto L_end2166;
{
S_R10(&l_R_2165, r_CAT(l_R_2165, ((*(R15 *)rt_nil_check(l_C_2164))).f_T), 0);
l_C_2164 = ((*(R15 *)rt_nil_check(l_C_2164))).f_NEXT;
}
RT_B_TICK();
} L_end2166: ;
{ R10 rv2167 = l_R_2165;
return rv2167; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2168; memset(&l_NAME_2168, 0, sizeof l_NAME_2168);
S_R10(&l_NAME_2168, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2169; memset(&l_SUB_2169, 0, sizeof l_SUB_2169);
S_R10(&l_SUB_2169, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2169, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2170; memset(&l_Y_2170, 0, sizeof l_Y_2170);
l_Y_2170 = r_LOOKUP(l_NAME_2168);
if ((l_Y_2170 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2168);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2170))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2168);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2170))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2171 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2170), l_SUB_2169);
return rv2171; }
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
R10 l_NAME_2172; memset(&l_NAME_2172, 0, sizeof l_NAME_2172);
S_R10(&l_NAME_2172, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2173; memset(&l_LINE_2173, 0, sizeof l_LINE_2173);
l_LINE_2173 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2172, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2174; memset(&l_V_2174, 0, sizeof l_V_2174);
S_R26(&l_V_2174, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2174).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2173, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2175 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2174).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2174).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2175; }
}
}
else if (r_TEQS(l_NAME_2172, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2176 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2176; }
}
{ R26 rv2177 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2177; }
}
else if (r_TEQS(l_NAME_2172, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2178 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2178; }
}
{ R26 rv2179 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2179; }
}
else if ((r_TEQS(l_NAME_2172, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2172, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2173, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2172);
}
{
R26 l_V_2180; memset(&l_V_2180, 0, sizeof l_V_2180);
S_R26(&l_V_2180, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2180).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2173, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2180).f_LVAL))
{
r_FAIL(l_LINE_2173, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2172, rt_str("REQUEST", 7)))
{
{ R26 rv2181 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2180).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2181; }
}
{ R26 rv2182 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2180).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2182; }
}
}
else if (r_TEQS(l_NAME_2172, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2173);
{ R26 rv2183 = r_START_IO_CALL(p_E);
return rv2183; }
}
r_FAILT(l_LINE_2173, rt_str("unknown routine ", 16), l_NAME_2172);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2184; memset(&l_ARGS_2184, 0, sizeof l_ARGS_2184);
l_ARGS_2184 = r_CALL_ARGS(p_E);
R12 * l_Y_2185; memset(&l_Y_2185, 0, sizeof l_Y_2185);
l_Y_2185 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2184, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2186; memset(&l_R_2186, 0, sizeof l_R_2186);
if ((l_Y_2185 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2186, r_CALL_SYM(l_Y_2185, l_ARGS_2184, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2187 = l_R_2186;
return rv2187; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2188; memset(&l_I_2188, 0, sizeof l_I_2188);
l_I_2188 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2188)), ({ R19 rc2189; memset(&rc2189, 0, sizeof rc2189);  rc2189.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2189.f_IMPORTS = p_IMPORTS; rc2189.f_SIGNALS = p_SIGNALS; S_R10(&rc2189.f_NAME, p_NAME, 0); rc2189.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2189; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2188;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2190; memset(&l_BASE_2190, 0, sizeof l_BASE_2190);
S_R10(&l_BASE_2190, r_FMT1(rt_str("r_@", 3), p_NAME), 0);
rstr l_S_2191; memset(&l_S_2191, 0, sizeof l_S_2191);
l_S_2191 = rt_str_new((l_BASE_2190).f_LEN);
rt_b_assign(&l_S_2191, r_STR(l_BASE_2190, (l_BASE_2190).f_LEN));
R21 * l_N_2192; memset(&l_N_2192, 0, sizeof l_N_2192);
l_N_2192 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2194_lo = ((rt_int)0LL), it2194_hi = rt_sub((l_BASE_2190).f_LEN, ((rt_int)1LL));
for (rt_int it2194 = it2194_lo; it2194 <= it2194_hi; it2194++) {
{
if (rt_b_eq(rt_b_slice(l_S_2191, it2194, it2194), rt_str("$", 1)))
{
S_R10(&l_BASE_2190, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_2191, ((rt_int)0LL), rt_sub(it2194, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2191, rt_add(it2194, ((rt_int)1LL)), rt_sub((l_BASE_2190).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2194 == it2194_hi) break;
} } L_end2193: ;
for (;;) {
if ((l_N_2192 == NULL)) goto L_end2195;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2192))).f_NAME, l_BASE_2190))
{
{ R10 rv2196 = r_FMT2(rt_str("@_@", 3), l_BASE_2190, r_NEW_NAME(rt_str("", 0)));
return rv2196; }
}
l_N_2192 = ((*(R21 *)rt_nil_check(l_N_2192))).f_NEXT;
}
RT_B_TICK();
} L_end2195: ;
l_N_2192 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2192))).f_NAME, l_BASE_2190, 0);
((*(R21 *)rt_nil_check(l_N_2192))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2192;
{ R10 rv2197 = l_BASE_2190;
return rv2197; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2198 = 0;
return rv2198; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2199 = 1;
return rv2199; }
}
{ rt_int rv2200 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2200; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2201; memset(&l_S_2201, 0, sizeof l_S_2201);
l_S_2201 = p_S0;
for (;;) {
if ((l_S_2201 == NULL)) goto L_end2202;
{
if (((((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_PAR)))
{
{ rt_int rv2203 = 1;
return rv2203; }
}
if (((((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2201))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2201))).f_B)))
{
{ rt_int rv2204 = 1;
return rv2204; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2201))).f_A))).f_B))
{
{ rt_int rv2205 = 1;
return rv2205; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2201))).f_B))).f_B))
{
{ rt_int rv2206 = 1;
return rv2206; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2207; memset(&l_A_2207, 0, sizeof l_A_2207);
l_A_2207 = ((*(R21 *)rt_nil_check(l_S_2201))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2201))).f_KIND == g_N_CASE))
{
l_A_2207 = ((*(R21 *)rt_nil_check(l_S_2201))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2201))).f_D == NULL)))
{
{ rt_int rv2208 = 1;
return rv2208; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2201))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2201))).f_C))).f_B))
{
{ rt_int rv2209 = 1;
return rv2209; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2201))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2201))).f_B))).f_B))
{
{ rt_int rv2210 = 1;
return rv2210; }
}
}
for (;;) {
if ((l_A_2207 == NULL)) goto L_end2211;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2207))).f_C == NULL)))
{
{ rt_int rv2212 = 1;
return rv2212; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2207))).f_B))).f_B))
{
{ rt_int rv2213 = 1;
return rv2213; }
}
l_A_2207 = ((*(R21 *)rt_nil_check(l_A_2207))).f_NEXT;
}
RT_B_TICK();
} L_end2211: ;
}
}
l_S_2201 = ((*(R21 *)rt_nil_check(l_S_2201))).f_NEXT;
}
RT_B_TICK();
} L_end2202: ;
{ rt_int rv2214 = 0;
return rv2214; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2215; memset(&l_Y_2215, 0, sizeof l_Y_2215);
l_Y_2215 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2216; memset(&l_S_2216, 0, sizeof l_S_2216);
l_S_2216 = rt_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2216, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2215))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2215))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2215))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2215))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2215, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2218_lo = ((rt_int)1LL), it2218_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2218 = it2218_lo; it2218 <= it2218_hi; it2218++) {
{
if (rt_b_eq(rt_b_slice(l_S_2216, it2218, it2218), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2215))).f_PREFIX, r_MKN(rt_b_slice(l_S_2216, ((rt_int)0LL), rt_sub(it2218, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2219; memset(&l_SHORT_2219, 0, sizeof l_SHORT_2219);
l_SHORT_2219 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2216, rt_add(it2218, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2219))).f_ORIG = l_Y_2215;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2219))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2215))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2219))).f_DECL = p_R;
r_DEFINE(l_SHORT_2219, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2217;
}
}
RT_B_TICK();
if (it2218 == it2218_hi) break;
} } L_end2217: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2220; memset(&l_R_2220, 0, sizeof l_R_2220);
l_R_2220 = p_RS;
for (;;) {
if ((l_R_2220 == NULL)) goto L_end2221;
{
if ((((*(R21 *)rt_nil_check(l_R_2220))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2220);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2220);
}
l_R_2220 = ((*(R21 *)rt_nil_check(l_R_2220))).f_NEXT;
}
RT_B_TICK();
} L_end2221: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2222; memset(&l_R_2222, 0, sizeof l_R_2222);
l_R_2222 = p_RS;
for (;;) {
if ((l_R_2222 == NULL)) goto L_end2223;
{
if ((((*(R21 *)rt_nil_check(l_R_2222))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2224; memset(&l_M_2224, 0, sizeof l_M_2224);
l_M_2224 = r_FIND_DECL(l_R_2222);
r_ENTER_MODULE(l_M_2224);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2222))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2224);
}
}
else
{
{
R12 * l_Y_2225; memset(&l_Y_2225, 0, sizeof l_Y_2225);
l_Y_2225 = r_FIND_DECL(l_R_2222);
r_ROUTINE_HEADER(l_Y_2225);
}
}
l_R_2222 = ((*(R21 *)rt_nil_check(l_R_2222))).f_NEXT;
}
RT_B_TICK();
} L_end2223: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2226; memset(&l_Y_2226, 0, sizeof l_Y_2226);
l_Y_2226 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2226 == NULL)) goto L_end2227;
{
if (((((*(R12 *)rt_nil_check(l_Y_2226))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2226))).f_ORIG == NULL)))
{
{ R12 * rv2228 = l_Y_2226;
return rv2228; }
}
l_Y_2226 = r_LOOKUP_NEXT(l_Y_2226);
}
RT_B_TICK();
} L_end2227: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2229; memset(&l_D_2229, 0, sizeof l_D_2229);
l_D_2229 = p_DECLS;
for (;;) {
if ((l_D_2229 == NULL)) goto L_end2230;
{
if (((((*(R21 *)rt_nil_check(l_D_2229))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2229))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2229))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2231; memset(&l_Y_2231, 0, sizeof l_Y_2231);
l_Y_2231 = r_FIND_DECL(l_D_2229);
R22 * l_T_2232; memset(&l_T_2232, 0, sizeof l_T_2232);
l_T_2232 = r_RESOLVE_USER(r_TYPE_REF(l_D_2229));
}
}
}
l_D_2229 = ((*(R21 *)rt_nil_check(l_D_2229))).f_NEXT;
}
RT_B_TICK();
} L_end2230: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2233; memset(&l_TS_2233, 0, sizeof l_TS_2233);
l_TS_2233 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2233))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2234 = l_TS_2233;
return rv2234; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2235; memset(&l_Y_2235, 0, sizeof l_Y_2235);
l_Y_2235 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2236; memset(&l_SAVED_2236, 0, sizeof l_SAVED_2236);
l_SAVED_2236 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2235))).f_DECL = p_M;
r_DEFINE(l_Y_2235, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2237; memset(&l_MARK_2237, 0, sizeof l_MARK_2237);
l_MARK_2237 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2235;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2235))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2237);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2236;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2235);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2238; memset(&l_Y_2238, 0, sizeof l_Y_2238);
l_Y_2238 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2238 == NULL)) goto L_end2239;
{
{
R12 * l_NEXT_2240; memset(&l_NEXT_2240, 0, sizeof l_NEXT_2240);
l_NEXT_2240 = ((*(R12 *)rt_nil_check(l_Y_2238))).f_SNEXT;
r_DEFINE(l_Y_2238, ((rt_int)0LL));
l_Y_2238 = l_NEXT_2240;
}
}
RT_B_TICK();
} L_end2239: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2241; memset(&l_MARK_2241, 0, sizeof l_MARK_2241);
l_MARK_2241 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2241 == NULL)) goto L_end2242;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2241))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2242;
}
l_MARK_2241 = ((*(R12 *)rt_nil_check(l_MARK_2241))).f_SNEXT;
}
RT_B_TICK();
} L_end2242: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2241);
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
{ rt_int rv2243 = 1;
return rv2243; }
}
}
{ rt_int rv2244 = 0;
return rv2244; }
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
R21 * l_D_2245; memset(&l_D_2245, 0, sizeof l_D_2245);
l_D_2245 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2246; memset(&l_Y_2246, 0, sizeof l_Y_2246);
l_Y_2246 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2246 == NULL)) goto L_end2247;
{
if (r_EXPORTED_BY(l_D_2245, l_Y_2246))
{
((*(R12 *)rt_nil_check(l_Y_2246))).f_EXPORTED = 1;
{
R12 * l_A_2248; memset(&l_A_2248, 0, sizeof l_A_2248);
l_A_2248 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2246))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2246))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2248)), (*(R12 *)rt_nil_check(l_Y_2246)), 0);
((*(R12 *)rt_nil_check(l_A_2248))).f_ORIG = r_ORIGINAL(l_Y_2246);
((*(R12 *)rt_nil_check(l_A_2248))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2248, ((*(R21 *)rt_nil_check(l_D_2245))).f_LINE);
}
}
l_Y_2246 = ((*(R12 *)rt_nil_check(l_Y_2246))).f_SNEXT;
}
RT_B_TICK();
} L_end2247: ;
{
R21 * l_X_2249; memset(&l_X_2249, 0, sizeof l_X_2249);
l_X_2249 = ((*(R21 *)rt_nil_check(l_D_2245))).f_B;
for (;;) {
if ((l_X_2249 == NULL)) goto L_end2250;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2249))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2249))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2249))).f_NAME);
}
l_X_2249 = ((*(R21 *)rt_nil_check(l_X_2249))).f_NEXT;
}
RT_B_TICK();
} L_end2250: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2251; memset(&l_Y_2251, 0, sizeof l_Y_2251);
l_Y_2251 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2251 == NULL)) goto L_end2252;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2251))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2251))).f_PREFIX, p_NAME)))
{
{ rt_int rv2253 = 1;
return rv2253; }
}
l_Y_2251 = ((*(R12 *)rt_nil_check(l_Y_2251))).f_SNEXT;
}
RT_B_TICK();
} L_end2252: ;
{ rt_int rv2254 = 0;
return rv2254; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2255; memset(&l_X_2255, 0, sizeof l_X_2255);
l_X_2255 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2256 = 0;
return rv2256; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2257 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2257; }
}
for (;;) {
if ((l_X_2255 == NULL)) goto L_end2258;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2255))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2259 = 1;
return rv2259; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2255))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2255))).f_A == NULL))
{
{ rt_int rv2260 = 1;
return rv2260; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2255))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2261 = 1;
return rv2261; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2262; memset(&l_T_2262, 0, sizeof l_T_2262);
l_T_2262 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2255))).f_NAME, p_Y);
if ((!(l_T_2262 == NULL)))
{
{ rt_int rv2263 = 1;
return rv2263; }
}
}
}
l_X_2255 = ((*(R21 *)rt_nil_check(l_X_2255))).f_NEXT;
}
RT_B_TICK();
} L_end2258: ;
{ rt_int rv2264 = 0;
return rv2264; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2265; memset(&l_M_2265, 0, sizeof l_M_2265);
l_M_2265 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2266; memset(&l_Z_2266, 0, sizeof l_Z_2266);
if ((l_M_2265 == NULL))
{
{ R12 * rv2267 = NULL;
return rv2267; }
}
l_Z_2266 = ((*(R12 *)rt_nil_check(l_M_2265))).f_MEMBERS;
for (;;) {
if ((l_Z_2266 == NULL)) goto L_end2268;
{
if (((((*(R12 *)rt_nil_check(l_Z_2266))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2266))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2266))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2266))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2266))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2269 = l_Z_2266;
return rv2269; }
}
}
}
}
l_Z_2266 = ((*(R12 *)rt_nil_check(l_Z_2266))).f_SNEXT;
}
RT_B_TICK();
} L_end2268: ;
{ R12 * rv2270 = NULL;
return rv2270; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2271; memset(&l_R_2271, 0, sizeof l_R_2271);
l_R_2271 = p_RS;
for (;;) {
if ((l_R_2271 == NULL)) goto L_end2272;
{
if ((((*(R21 *)rt_nil_check(l_R_2271))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2273; memset(&l_M_2273, 0, sizeof l_M_2273);
l_M_2273 = r_FIND_DECL(l_R_2271);
R21 * l_D_2274; memset(&l_D_2274, 0, sizeof l_D_2274);
l_D_2274 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2271))).f_C))).f_A;
r_ENTER_MODULE(l_M_2273);
for (;;) {
if ((l_D_2274 == NULL)) goto L_end2275;
{
if (((((*(R21 *)rt_nil_check(l_D_2274))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2274))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2274);
}
l_D_2274 = ((*(R21 *)rt_nil_check(l_D_2274))).f_NEXT;
}
RT_B_TICK();
} L_end2275: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2271))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2271))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2273);
}
}
l_R_2271 = ((*(R21 *)rt_nil_check(l_R_2271))).f_NEXT;
}
RT_B_TICK();
} L_end2272: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2276; memset(&l_R_2276, 0, sizeof l_R_2276);
l_R_2276 = p_RS;
for (;;) {
if ((l_R_2276 == NULL)) goto L_end2277;
{
if ((((*(R21 *)rt_nil_check(l_R_2276))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2278; memset(&l_M_2278, 0, sizeof l_M_2278);
l_M_2278 = r_FIND_DECL(l_R_2276);
r_ENTER_MODULE(l_M_2278);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2276))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2278);
}
}
else
{
{
R12 * l_Y_2279; memset(&l_Y_2279, 0, sizeof l_Y_2279);
l_Y_2279 = r_FIND_DECL(l_R_2276);
if ((!((*(R12 *)rt_nil_check(l_Y_2279))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2279);
}
}
}
l_R_2276 = ((*(R21 *)rt_nil_check(l_R_2276))).f_NEXT;
}
RT_B_TICK();
} L_end2277: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2280; memset(&l_LEVEL_2280, 0, sizeof l_LEVEL_2280);
l_LEVEL_2280 = r_CUR_LEVEL();
rt_int l_MORE_2281; memset(&l_MORE_2281, 0, sizeof l_MORE_2281);
l_MORE_2281 = 1;
for (;;) {
if ((!l_MORE_2281)) goto L_end2282;
{
l_MORE_2281 = 0;
{
R12 * l_P_2283; memset(&l_P_2283, 0, sizeof l_P_2283);
l_P_2283 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2284; memset(&l_PREV_2284, 0, sizeof l_PREV_2284);
l_PREV_2284 = NULL;
for (;;) {
if ((l_P_2283 == NULL)) goto L_end2285;
{
if ((((*(R12 *)rt_nil_check(l_P_2283))).f_LEVEL == l_LEVEL_2280))
{
if ((l_PREV_2284 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2283))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2284))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2283))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2283);
r_ROUTINE_BODY(l_P_2283);
r_LEAVE_MODULE_OF(l_P_2283);
l_MORE_2281 = 1;
goto L_end2285;
}
l_PREV_2284 = l_P_2283;
l_P_2283 = ((*(R12 *)rt_nil_check(l_P_2283))).f_MEMBERS;
}
RT_B_TICK();
} L_end2285: ;
}
}
RT_B_TICK();
} L_end2282: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2286; memset(&l_D_2286, 0, sizeof l_D_2286);
l_D_2286 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2287; memset(&l_S_2287, 0, sizeof l_S_2287);
l_S_2287 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2286 == NULL)) goto L_end2288;
{
if (((((*(R21 *)rt_nil_check(l_D_2286))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2286))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2286);
}
l_D_2286 = ((*(R21 *)rt_nil_check(l_D_2286))).f_NEXT;
}
RT_B_TICK();
} L_end2288: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2287 == NULL)) goto L_end2289;
{
r_STMT(l_S_2287);
l_S_2287 = ((*(R21 *)rt_nil_check(l_S_2287))).f_NEXT;
}
RT_B_TICK();
} L_end2289: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2290; memset(&l_R_2290, 0, sizeof l_R_2290);
l_R_2290 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2291; memset(&l_SAVED_CODE_2291, 0, sizeof l_SAVED_CODE_2291);
S_R14(&l_SAVED_CODE_2291, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2292; memset(&l_SAVED_CTXS_2292, 0, sizeof l_SAVED_CTXS_2292);
l_SAVED_CTXS_2292 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2293; memset(&l_SAVED_BINDS_2293, 0, sizeof l_SAVED_BINDS_2293);
l_SAVED_BINDS_2293 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2294; memset(&l_OUTER_2294, 0, sizeof l_OUTER_2294);
l_OUTER_2294 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2295; memset(&l_CS_2295, 0, sizeof l_CS_2295);
l_CS_2295 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2296; memset(&l_PROLOGUE_2296, 0, sizeof l_PROLOGUE_2296);
S_R10(&l_PROLOGUE_2296, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2295)), ({ R18 rc2297; memset(&rc2297, 0, sizeof rc2297);  rc2297.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2297.f_R = p_Y; rc2297.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2297.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2297.f_FIELDS, ({ R14 rc2298; memset(&rc2298, 0, sizeof rc2298);  rc2298.f_HEAD = NULL; rc2298.f_TAIL = NULL; rc2298; }), 0); rc2297.f_UP = l_OUTER_2294; rc2297.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2290))).f_E; rc2297.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2290))).f_D))).f_A; rc2297.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2297.f_IS_PATH = 0; S_R10(&rc2297.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2297; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2295))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2295))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2295))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2295))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2296, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2295))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2295))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2296, r_CATS(l_PROLOGUE_2296, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2295;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2299; memset(&rc2299, 0, sizeof rc2299);  rc2299.f_HEAD = NULL; rc2299.f_TAIL = NULL; rc2299; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2290))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2290))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2290))).f_LINE);
{
R28 * l_P_2300; memset(&l_P_2300, 0, sizeof l_P_2300);
l_P_2300 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2300 == NULL)) goto L_end2301;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2300))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2300))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2302; memset(&l_V_2302, 0, sizeof l_V_2302);
l_V_2302 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2302))).f_T = ((*(R28 *)rt_nil_check(l_P_2300))).f_T;
((*(R12 *)rt_nil_check(l_V_2302))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2300))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2302))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2300))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2302))).f_FIELD, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2302))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2300))).f_T), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2295))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2300))).f_T), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2295))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
}
S_R10(&l_PROLOGUE_2296, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2296, ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME, ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2302))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2300))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2303; memset(&l_ARGA_2303, 0, sizeof l_ARGA_2303);
S_R10(&l_ARGA_2303, ((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2300))).f_T, l_ARGA_2303, ((*(R21 *)rt_nil_check(l_R_2290))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2302))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2300))).f_T), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2295))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
}
else
{
S_R10(&l_PROLOGUE_2296, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2296, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2300))).f_T), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, r_FMT1(rt_str("o_@", 3), ((*(R28 *)rt_nil_check(l_P_2300))).f_NAME), 0);
}
S_R10(&l_PROLOGUE_2296, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2296, ((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, l_ARGA_2303), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2300))).f_T))
{
S_R10(&l_PROLOGUE_2296, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2296, ((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2300))).f_T, l_ARGA_2303)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2295))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2295))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2300))).f_T, l_ARGA_2303, ((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS)), 0);
r_DEFINE(l_V_2302, ((*(R21 *)rt_nil_check(l_R_2290))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2302, ((*(R21 *)rt_nil_check(l_R_2290))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2300))).f_T, ((*(R12 *)rt_nil_check(l_V_2302))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2290))).f_LINE, 1);
}
}
}
}
l_P_2300 = ((*(R28 *)rt_nil_check(l_P_2300))).f_NEXT;
}
RT_B_TICK();
} L_end2301: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2290))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2290))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2290))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2295))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2295))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2296));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2295))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2295))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2294;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2291, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2292;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2293;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2304; memset(&l_B_2304, 0, sizeof l_B_2304);
l_B_2304 = p_BS;
for (;;) {
if ((l_B_2304 == NULL)) goto L_end2305;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2304))).f_T == NULL)))
{
{
R12 * l_Y_2306; memset(&l_Y_2306, 0, sizeof l_Y_2306);
l_Y_2306 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2304))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2306))).f_T = ((*(R20 *)rt_nil_check(l_B_2304))).f_T;
r_DEFINE(l_Y_2306, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2304))).f_HASMV)
{
{
R12 * l_Y_2307; memset(&l_Y_2307, 0, sizeof l_Y_2307);
l_Y_2307 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2304))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2307))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2307))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2307))).f_MV = ((*(R20 *)rt_nil_check(l_B_2304))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2307))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2304))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2307))).f_INPUT = 1;
r_DEFINE(l_Y_2307, p_LINE);
}
}
l_B_2304 = ((*(R20 *)rt_nil_check(l_B_2304))).f_NEXT;
}
RT_B_TICK();
} L_end2305: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2308; memset(&l_C_2308, 0, sizeof l_C_2308);
l_C_2308 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2308 == NULL)) goto L_end2309;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2308))).f_T), &(*p_DST));
l_C_2308 = ((*(R15 *)rt_nil_check(l_C_2308))).f_NEXT;
}
RT_B_TICK();
} L_end2309: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2310; memset(&l_U_2310, 0, sizeof l_U_2310);
l_U_2310 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2310 == NULL)) goto L_end2311;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2310))).f_NAME, p_NAME))
{
{ rt_int rv2312 = 1;
return rv2312; }
}
l_U_2310 = ((*(R21 *)rt_nil_check(l_U_2310))).f_NEXT;
}
RT_B_TICK();
} L_end2311: ;
{ rt_int rv2313 = 0;
return rv2313; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2314; memset(&l_U_2314, 0, sizeof l_U_2314);
l_U_2314 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2314 == NULL)) goto L_end2315;
{
{
R21 * l_T_2316; memset(&l_T_2316, 0, sizeof l_T_2316);
l_T_2316 = p_SEGS;
for (;;) {
if ((l_T_2316 == NULL)) goto L_end2317;
{
if ((((!(l_T_2316 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2316))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2316))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2314))).f_NAME)))
{
{ rt_int rv2318 = 0;
return rv2318; }
}
l_T_2316 = ((*(R21 *)rt_nil_check(l_T_2316))).f_NEXT;
}
RT_B_TICK();
} L_end2317: ;
}
l_U_2314 = ((*(R21 *)rt_nil_check(l_U_2314))).f_NEXT;
}
RT_B_TICK();
} L_end2315: ;
{ rt_int rv2319 = 1;
return rv2319; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2320; memset(&l_S_2320, 0, sizeof l_S_2320);
l_S_2320 = p_SEGS;
rt_int l_MAINS_2321; memset(&l_MAINS_2321, 0, sizeof l_MAINS_2321);
l_MAINS_2321 = ((rt_int)0LL);
R18 * l_ROOT_2322; memset(&l_ROOT_2322, 0, sizeof l_ROOT_2322);
l_ROOT_2322 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2322)), ({ R18 rc2323; memset(&rc2323, 0, sizeof rc2323);  rc2323.f_LEVEL = ((rt_int)0LL); rc2323.f_R = NULL; rc2323.f_FRAMED = 0; S_R10(&rc2323.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2323.f_FIELDS, ({ R14 rc2324; memset(&rc2324, 0, sizeof rc2324);  rc2324.f_HEAD = NULL; rc2324.f_TAIL = NULL; rc2324; }), 0); rc2323.f_UP = NULL; rc2323.f_IMPORTS = NULL; rc2323.f_SIGNALS = NULL; rc2323.f_RESULT = NULL; rc2323.f_IS_PATH = 0; S_R10(&rc2323.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2323; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2322;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2325; memset(&rc2325, 0, sizeof rc2325);  rc2325.f_HEAD = NULL; rc2325.f_TAIL = NULL; rc2325; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2320 = p_SEGS;
for (;;) {
if ((l_S_2320 == NULL)) goto L_end2327;
{
if ((((*(R21 *)rt_nil_check(l_S_2320))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2320, p_SEGS))
{
goto L_end2327;
}
}
l_S_2320 = ((*(R21 *)rt_nil_check(l_S_2320))).f_NEXT;
}
RT_B_TICK();
} L_end2327: ;
if ((l_S_2320 == NULL))
{
goto L_end2326;
}
((*(R21 *)rt_nil_check(l_S_2320))).f_D = l_S_2320;
l_MAINS_2321 = rt_add(l_MAINS_2321, ((*(R21 *)rt_nil_check(l_S_2320))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2320))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2320))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2320))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2320, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2320))).f_B);
r_SEGMENT_EXPORTS(l_S_2320);
}
RT_B_TICK();
} L_end2326: ;
l_S_2320 = p_SEGS;
for (;;) {
if ((l_S_2320 == NULL)) goto L_end2328;
{
if ((((*(R21 *)rt_nil_check(l_S_2320))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2320))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2320))).f_NAME);
}
l_S_2320 = ((*(R21 *)rt_nil_check(l_S_2320))).f_NEXT;
}
RT_B_TICK();
} L_end2328: ;
if ((!(l_MAINS_2321 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2329; memset(&l_X_2329, 0, sizeof l_X_2329);
l_X_2329 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2329 == NULL)) goto L_end2330;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R21 *)rt_nil_check(l_X_2329))).f_NAME));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R21 *)rt_nil_check(l_X_2329))).f_NAME, r_CSTRING(((*(R21 *)rt_nil_check(l_X_2329))).f_NAME)));
l_X_2329 = ((*(R21 *)rt_nil_check(l_X_2329))).f_NEXT;
}
RT_B_TICK();
} L_end2330: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2331; memset(&l_M_2331, 0, sizeof l_M_2331);
l_M_2331 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2332 = 0;
return rv2332; }
}
for (;;) {
if ((l_M_2331 == NULL)) goto L_end2333;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2331))).f_NAME))
{
{ rt_int rv2334 = 1;
return rv2334; }
}
l_M_2331 = ((*(R12 *)rt_nil_check(l_M_2331))).f_MODL;
}
RT_B_TICK();
} L_end2333: ;
{ rt_int rv2335 = 0;
return rv2335; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2336; memset(&l_MARK_2336, 0, sizeof l_MARK_2336);
l_MARK_2336 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2337; memset(&l_TAKEN_2337, 0, sizeof l_TAKEN_2337);
for (;;) {
if ((l_MARK_2336 == NULL)) goto L_end2338;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2336))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2338;
}
l_MARK_2336 = ((*(R12 *)rt_nil_check(l_MARK_2336))).f_SNEXT;
}
RT_B_TICK();
} L_end2338: ;
l_TAKEN_2337 = r_TAKE_SCOPE(l_MARK_2336);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2337 == NULL)) goto L_end2339;
{
{
R12 * l_NEXT_2340; memset(&l_NEXT_2340, 0, sizeof l_NEXT_2340);
l_NEXT_2340 = ((*(R12 *)rt_nil_check(l_TAKEN_2337))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2337))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2337))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2337))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2337)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2337))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2337))))))
{
r_DEFINE(l_TAKEN_2337, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2337 = l_NEXT_2340;
}
}
RT_B_TICK();
} L_end2339: ;
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
