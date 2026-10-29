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
static rt_int r_NAMES_OBJECT(R10 p_NAME);
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
if ((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))))
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
static R21 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R21 * l_LEFT_319; memset(&l_LEFT_319, 0, sizeof l_LEFT_319);
l_LEFT_319 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end320;
{
{
R9 l_T_321; memset(&l_T_321, 0, sizeof l_T_321);
S_R9(&l_T_321, r_CUR(), 0);
r_SKIP();
l_LEFT_319 = r_BIN_NODE((l_T_321).f_TX, (l_T_321).f_LINE, l_LEFT_319, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end320: ;
{ R21 * rv322 = l_LEFT_319;
return rv322; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R21 * l_LEFT_323; memset(&l_LEFT_323, 0, sizeof l_LEFT_323);
l_LEFT_323 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end324;
{
{
R9 l_T_325; memset(&l_T_325, 0, sizeof l_T_325);
S_R9(&l_T_325, r_CUR(), 0);
r_SKIP();
l_LEFT_323 = r_BIN_NODE((l_T_325).f_TX, (l_T_325).f_LINE, l_LEFT_323, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end324: ;
{ R21 * rv326 = l_LEFT_323;
return rv326; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R21 * l_LEFT_327; memset(&l_LEFT_327, 0, sizeof l_LEFT_327);
l_LEFT_327 = r_PARSE_SUM();
for (;;) {
{
{
R9 l_T_329; memset(&l_T_329, 0, sizeof l_T_329);
S_R9(&l_T_329, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_327 = r_BIN_NODE((l_T_329).f_TX, (l_T_329).f_LINE, l_LEFT_327, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_330; memset(&l_N_330, 0, sizeof l_N_330);
l_N_330 = r_NEW_NODE(g_N_IN, (l_T_329).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_330))).f_A = l_LEFT_327;
((*(R21 *)rt_nil_check(l_N_330))).f_B = r_PARSE_RANGE();
l_LEFT_327 = l_N_330;
}
}
else
{
{ R21 * rv331 = l_LEFT_327;
return rv331; }
}
}
}
RT_B_TICK();
} L_end328: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_332; memset(&l_SAVED_332, 0, sizeof l_SAVED_332);
l_SAVED_332 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_333; memset(&l_LINE_333, 0, sizeof l_LINE_333);
l_LINE_333 = r_LINE_NOW();
R21 * l_N_334; memset(&l_N_334, 0, sizeof l_N_334);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv335 = NULL;
return rv335; }
}
{
R9 l_OP_336; memset(&l_OP_336, 0, sizeof l_OP_336);
S_R9(&l_OP_336, r_AHEAD(((rt_int)1LL)), 0);
R10 l_T_337; memset(&l_T_337, 0, sizeof l_T_337);
S_R10(&l_T_337, (l_OP_336).f_TX, 0);
rt_int l_FOUND_338; memset(&l_FOUND_338, 0, sizeof l_FOUND_338);
l_FOUND_338 = 0;
if (((!((l_OP_336).f_KIND == g_K_SYM)) && (!((l_OP_336).f_KIND == g_K_RES))))
{
{ R21 * rv339 = NULL;
return rv339; }
}
{ rt_int it341_lo = ((rt_int)0LL), it341_hi = rt_sub((rt_int)(p_OPS).len, (l_T_337).f_LEN);
for (rt_int it341 = it341_lo; it341 <= it341_hi; it341++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it341, rt_sub(rt_add(it341, (l_T_337).f_LEN), ((rt_int)1LL))), r_STR(l_T_337, (l_T_337).f_LEN)))
{
if (((((it341 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it341, ((rt_int)1LL)), rt_sub(it341, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it341, (l_T_337).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it341, (l_T_337).f_LEN), rt_add(it341, (l_T_337).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_338 = 1;
}
}
}
RT_B_TICK();
if (it341 == it341_hi) break;
} } L_end340: ;
if ((!l_FOUND_338))
{
{ R21 * rv342 = NULL;
return rv342; }
}
r_SKIP();
r_SKIP();
l_N_334 = r_BIN_NODE(l_T_337, l_LINE_333, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_334))).f_FL = ((rt_int)2LL);
{ R21 * rv343 = l_N_334;
return rv343; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_334))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_334))).f_FL = ((rt_int)1LL);
{ R21 * rv344 = l_N_334;
return rv344; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_332;
{ R21 * rv345 = NULL;
return rv345; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { RT_B_TICK(); 
R21 * l_LEFT_346; memset(&l_LEFT_346, 0, sizeof l_LEFT_346);
l_LEFT_346 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R9 l_T_348; memset(&l_T_348, 0, sizeof l_T_348);
S_R9(&l_T_348, r_CUR(), 0);
r_SKIP();
l_LEFT_346 = r_BIN_NODE((l_T_348).f_TX, (l_T_348).f_LINE, l_LEFT_346, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_349; memset(&l_N_349, 0, sizeof l_N_349);
l_N_349 = r_TRY_SCALED(l_LEFT_346, rt_str("+ -", 3));
if ((l_N_349 == NULL))
{
{ R21 * rv350 = l_LEFT_346;
return rv350; }
}
((*(R21 *)rt_nil_check(l_N_349))).f_B = r_PARSE_TERM();
l_LEFT_346 = l_N_349;
}
}
}
RT_B_TICK();
} L_end347: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { RT_B_TICK(); 
R21 * l_LEFT_351; memset(&l_LEFT_351, 0, sizeof l_LEFT_351);
l_LEFT_351 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R9 l_T_353; memset(&l_T_353, 0, sizeof l_T_353);
S_R9(&l_T_353, r_CUR(), 0);
r_SKIP();
l_LEFT_351 = r_BIN_NODE((l_T_353).f_TX, (l_T_353).f_LINE, l_LEFT_351, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_354; memset(&l_N_354, 0, sizeof l_N_354);
l_N_354 = r_TRY_SCALED(l_LEFT_351, rt_str("* / // MOD", 10));
if ((l_N_354 == NULL))
{
{ R21 * rv355 = l_LEFT_351;
return rv355; }
}
((*(R21 *)rt_nil_check(l_N_354))).f_B = r_PARSE_FACTOR();
l_LEFT_351 = l_N_354;
}
}
}
RT_B_TICK();
} L_end352: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R21 * l_LEFT_356; memset(&l_LEFT_356, 0, sizeof l_LEFT_356);
l_LEFT_356 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R9 l_T_358; memset(&l_T_358, 0, sizeof l_T_358);
S_R9(&l_T_358, r_CUR(), 0);
r_SKIP();
l_LEFT_356 = r_BIN_NODE((l_T_358).f_TX, (l_T_358).f_LINE, l_LEFT_356, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_359; memset(&l_N_359, 0, sizeof l_N_359);
l_N_359 = r_TRY_SCALED(l_LEFT_356, rt_str("**", 2));
if ((l_N_359 == NULL))
{
{ R21 * rv360 = l_LEFT_356;
return rv360; }
}
((*(R21 *)rt_nil_check(l_N_359))).f_B = r_PARSE_SECONDARY();
l_LEFT_356 = l_N_359;
}
}
}
RT_B_TICK();
} L_end357: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R9 l_T_361; memset(&l_T_361, 0, sizeof l_T_361);
S_R9(&l_T_361, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_362; memset(&l_N_362, 0, sizeof l_N_362);
l_N_362 = r_NEW_NODE(g_N_UNOP, (l_T_361).f_LINE);
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_362))).f_NAME, (l_T_361).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_362))).f_A = r_PARSE_POSTFIX();
{ R21 * rv363 = l_N_362;
return rv363; }
}
}
{ R21 * rv364 = r_PARSE_POSTFIX();
return rv364; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { RT_B_TICK(); 
R21 * l_HEAD_365; memset(&l_HEAD_365, 0, sizeof l_HEAD_365);
l_HEAD_365 = NULL;
R21 * l_TAIL_366; memset(&l_TAIL_366, 0, sizeof l_TAIL_366);
l_TAIL_366 = NULL;
rt_int l_GROUP_367; memset(&l_GROUP_367, 0, sizeof l_GROUP_367);
l_GROUP_367 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end368;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_367) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_365;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_365;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_367 = rt_add(l_GROUP_367, ((rt_int)1LL));
l_HEAD_365 = NULL;
l_TAIL_366 = NULL;
}
else
{
if ((l_GROUP_367 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_365, &l_TAIL_366);
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_365, &l_TAIL_366);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end368: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_367) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_365;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_365;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_365;
}
break;
}
{ R21 * rv369 = p_N;
return rv369; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R21 * l_E_370; memset(&l_E_370, 0, sizeof l_E_370);
l_E_370 = r_PARSE_ATOM();
R21 * l_N_371; memset(&l_N_371, 0, sizeof l_N_371);
for (;;) {
{
{
rt_int l_LINE_373; memset(&l_LINE_373, 0, sizeof l_LINE_373);
l_LINE_373 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_370))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_E_370))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_370))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_370))).f_KIND = g_N_APPLY;
l_E_370 = r_PARSE_ARGS(l_E_370);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_371 = r_NEW_NODE(g_N_INDEX, l_LINE_373);
l_N_371 = r_PARSE_ARGS(l_N_371);
((*(R21 *)rt_nil_check(l_N_371))).f_B = ((*(R21 *)rt_nil_check(l_N_371))).f_A;
((*(R21 *)rt_nil_check(l_N_371))).f_A = l_E_370;
l_E_370 = l_N_371;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_371 = r_NEW_NODE(g_N_FIELD, l_LINE_373);
((*(R21 *)rt_nil_check(l_N_371))).f_A = l_E_370;
S_R10(&((*(R21 *)rt_nil_check(l_N_371))).f_NAME, r_IDENT(), 0);
l_E_370 = l_N_371;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_371 = r_NEW_NODE(g_N_DEREF, l_LINE_373);
((*(R21 *)rt_nil_check(l_N_371))).f_A = l_E_370;
l_E_370 = l_N_371;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_371 = r_NEW_NODE(g_N_SUBSTR, l_LINE_373);
((*(R21 *)rt_nil_check(l_N_371))).f_A = l_E_370;
((*(R21 *)rt_nil_check(l_N_371))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_371))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_370 = l_N_371;
}
else
{
{ R21 * rv374 = l_E_370;
return rv374; }
}
}
}
RT_B_TICK();
} L_end372: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_375; memset(&l_AT_375, 0, sizeof l_AT_375);
l_AT_375 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_376; memset(&l_N_376, 0, sizeof l_N_376);
l_N_376 = r_NEW_NODE(g_N_BITS, p_LINE);
R10 l_R_377; memset(&l_R_377, 0, sizeof l_R_377);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end378;
{
{
R10 l_T_379; memset(&l_T_379, 0, sizeof l_T_379);
S_R10(&l_T_379, (r_CUR()).f_TX, 0);
rstr l_S_380; memset(&l_S_380, 0, sizeof l_S_380);
l_S_380 = rt_str_new((l_T_379).f_LEN);
rt_b_assign(&l_S_380, r_STR(l_T_379, (l_T_379).f_LEN));
{ rt_int it382_lo = ((rt_int)0LL), it382_hi = rt_sub((l_T_379).f_LEN, ((rt_int)1LL));
for (rt_int it382 = it382_lo; it382 <= it382_hi; it382++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_380, it382, it382), rt_str(" ", 1))))
{
{
rt_int l_C_383; memset(&l_C_383, 0, sizeof l_C_383);
l_C_383 = r_CODE_OF(rt_b_slice(l_S_380, it382, it382));
rt_int l_V_384; memset(&l_V_384, 0, sizeof l_V_384);
l_V_384 = rt_sub(l_C_383, ((rt_int)48LL));
rt_int l_P_385; memset(&l_P_385, 0, sizeof l_P_385);
l_P_385 = ((rt_int)1LL);
if ((l_C_383 >= ((rt_int)65LL)))
{
l_V_384 = rt_sub(l_C_383, ((rt_int)55LL));
}
{ rt_int it387_lo = ((rt_int)1LL), it387_hi = p_BITS_PER;
for (rt_int it387 = it387_lo; it387 <= it387_hi; it387++) {
{
l_P_385 = rt_mul(l_P_385, ((rt_int)2LL));
}
RT_B_TICK();
if (it387 == it387_hi) break;
} } L_end386: ;
if (((l_V_384 < ((rt_int)0LL)) || (l_V_384 >= l_P_385)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it389_lo = ((rt_int)1LL), it389_hi = p_BITS_PER;
for (rt_int it389 = it389_lo; it389 <= it389_hi; it389++) {
{
l_P_385 = rt_quot(l_P_385, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_384, l_P_385)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R10(&l_R_377, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R10(&l_R_377, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it389 == it389_hi) break;
} } L_end388: ;
}
}
}
RT_B_TICK();
if (it382 == it382_hi) break;
} } L_end381: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end378: ;
S_R10(&((*(R21 *)rt_nil_check(l_N_376))).f_NAME, ({ R10 rc390; memset(&rc390, 0, sizeof rc390);  rc390.f_AT = l_AT_375; rc390.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_375); rc390.f_H = rt_neg(((rt_int)1LL)); rc390; }), 0);
{ R21 * rv391 = l_N_376;
return rv391; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R9 l_T_392; memset(&l_T_392, 0, sizeof l_T_392);
S_R9(&l_T_392, r_CUR(), 0);
R21 * l_N_393; memset(&l_N_393, 0, sizeof l_N_393);
if (((l_T_392).f_KIND == g_K_NUM))
{
l_N_393 = r_NEW_NODE(g_N_INT, (l_T_392).f_LINE);
((*(R21 *)rt_nil_check(l_N_393))).f_IV = (l_T_392).f_IV;
S_R10(&((*(R21 *)rt_nil_check(l_N_393))).f_NAME, (l_T_392).f_TX, 0);
r_SKIP();
{ R21 * rv394 = l_N_393;
return rv394; }
}
if ((((l_T_392).f_KIND == g_K_REAL) || ((l_T_392).f_KIND == g_K_FIX)))
{
l_N_393 = r_NEW_NODE(g_N_REAL, (l_T_392).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_393))).f_NAME, (l_T_392).f_TX, 0);
if (((l_T_392).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_393))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_393))).f_IV = (l_T_392).f_IV;
}
r_SKIP();
{ R21 * rv395 = l_N_393;
return rv395; }
}
if (((l_T_392).f_KIND == g_K_GEN))
{
{ R21 * rv396 = r_PARSE_TYPE_ARG();
return rv396; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_392, rt_str("BIN", 3)))
{
{ R21 * rv397 = r_PARSE_BITS(((rt_int)1LL), (l_T_392).f_LINE);
return rv397; }
}
else if (r_TOK_IS(l_T_392, rt_str("OCT", 3)))
{
{ R21 * rv398 = r_PARSE_BITS(((rt_int)3LL), (l_T_392).f_LINE);
return rv398; }
}
{ R21 * rv399 = r_PARSE_BITS(((rt_int)4LL), (l_T_392).f_LINE);
return rv399; }
}
if ((((l_T_392).f_KIND == g_K_STR) || ((l_T_392).f_KIND == g_K_ENUM)))
{
{ R21 * rv400 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv400; }
}
if ((((l_T_392).f_KIND == g_K_ID) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR)))
{
r_SKIP();
{ R21 * rv401 = r_PARSE_CHARSTRING((l_T_392).f_TX);
return rv401; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_393 = r_NEW_NODE(g_N_BOOL, (l_T_392).f_LINE);
((*(R21 *)rt_nil_check(l_N_393))).f_IV = ((rt_int)1LL);
{ R21 * rv402 = l_N_393;
return rv402; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv403 = r_NEW_NODE(g_N_BOOL, (l_T_392).f_LINE);
return rv403; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv404 = r_NEW_NODE(g_N_NIL, (l_T_392).f_LINE);
return rv404; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv405 = r_NEW_NODE(g_N_ANY, (l_T_392).f_LINE);
return rv405; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_406; memset(&l_TS_406, 0, sizeof l_TS_406);
l_TS_406 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_393 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_393))).f_B = l_TS_406;
{ R21 * rv407 = l_N_393;
return rv407; }
}
l_N_393 = r_NEW_NODE(g_N_TYPESPEC, (l_T_392).f_LINE);
((*(R21 *)rt_nil_check(l_N_393))).f_A = l_TS_406;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_393))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv408 = l_N_393;
return rv408; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_409; memset(&l_HEAD_409, 0, sizeof l_HEAD_409);
l_HEAD_409 = NULL;
R21 * l_TAIL_410; memset(&l_TAIL_410, 0, sizeof l_TAIL_410);
l_TAIL_410 = NULL;
r_SKIP();
for (;;) {
{
l_N_393 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_393))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_393))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_393, &l_HEAD_409, &l_TAIL_410);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end411;
} L_end411: ;
r_EXPECT(rt_str(")", 1));
l_N_393 = r_NEW_NODE(g_N_RECCONS, (l_T_392).f_LINE);
((*(R21 *)rt_nil_check(l_N_393))).f_A = l_HEAD_409;
{ R21 * rv412 = l_N_393;
return rv412; }
}
}
r_SKIP();
{
R21 * l_E_413; memset(&l_E_413, 0, sizeof l_E_413);
l_E_413 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_414; memset(&l_HEAD_414, 0, sizeof l_HEAD_414);
l_HEAD_414 = NULL;
R21 * l_TAIL_415; memset(&l_TAIL_415, 0, sizeof l_TAIL_415);
l_TAIL_415 = NULL;
r_ADD_LIST(l_E_413, &l_HEAD_414, &l_TAIL_415);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end416;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_414, &l_TAIL_415);
}
RT_B_TICK();
} L_end416: ;
r_EXPECT(rt_str(")", 1));
l_N_393 = r_NEW_NODE(g_N_ARRCONS, (l_T_392).f_LINE);
((*(R21 *)rt_nil_check(l_N_393))).f_A = l_HEAD_414;
{ R21 * rv417 = l_N_393;
return rv417; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_393 = r_NEW_NODE(g_N_PAREN, (l_T_392).f_LINE);
((*(R21 *)rt_nil_check(l_N_393))).f_A = l_E_413;
{ R21 * rv418 = l_N_393;
return rv418; }
}
}
if (((l_T_392).f_KIND == g_K_ID))
{
l_N_393 = r_NEW_NODE(g_N_NAME, (l_T_392).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_393))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R21 *)rt_nil_check(l_N_393))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_393))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_393))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R21 *)rt_nil_check(l_N_393))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_393))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv419 = l_N_393;
return rv419; }
}
r_FAILT((l_T_392).f_LINE, rt_str("an expression expected, not ", 28), (l_T_392).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_420; memset(&l_LINE_420, 0, sizeof l_LINE_420);
l_LINE_420 = r_LINE_NOW();
R21 * l_HEAD_421; memset(&l_HEAD_421, 0, sizeof l_HEAD_421);
l_HEAD_421 = NULL;
R21 * l_TAIL_422; memset(&l_TAIL_422, 0, sizeof l_TAIL_422);
l_TAIL_422 = NULL;
rt_int l_STRINGS_423; memset(&l_STRINGS_423, 0, sizeof l_STRINGS_423);
l_STRINGS_423 = ((rt_int)0LL);
R21 * l_N_424; memset(&l_N_424, 0, sizeof l_N_424);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end425;
{
l_N_424 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_424))).f_IV = (r_CUR()).f_KIND;
S_R10(&((*(R21 *)rt_nil_check(l_N_424))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_424))).f_IV == g_K_STR))
{
l_STRINGS_423 = rt_add(l_STRINGS_423, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_424, &l_HEAD_421, &l_TAIL_422);
}
RT_B_TICK();
} L_end425: ;
if (((l_STRINGS_423 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))))
{
if ((!(((*(R21 *)rt_nil_check(l_HEAD_421))).f_NEXT == NULL)))
{
r_FAIL(l_LINE_420, rt_str("two enumerated literals in a row", 32));
}
((*(R21 *)rt_nil_check(l_HEAD_421))).f_KIND = g_N_ENUMLIT;
{ R21 * rv426 = l_HEAD_421;
return rv426; }
}
l_N_424 = r_NEW_NODE(g_N_STR, l_LINE_420);
((*(R21 *)rt_nil_check(l_N_424))).f_A = l_HEAD_421;
S_R10(&((*(R21 *)rt_nil_check(l_N_424))).f_NAME, p_CHARSET, 0);
{ R21 * rv427 = l_N_424;
return rv427; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv428 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv428; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R21 * l_HEAD_429; memset(&l_HEAD_429, 0, sizeof l_HEAD_429);
l_HEAD_429 = NULL;
R21 * l_TAIL_430; memset(&l_TAIL_430, 0, sizeof l_TAIL_430);
l_TAIL_430 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end431;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_429, &l_TAIL_430);
}
RT_B_TICK();
} L_end431: ;
{ R21 * rv432 = l_HEAD_429;
return rv432; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R21 * l_HEAD_433; memset(&l_HEAD_433, 0, sizeof l_HEAD_433);
l_HEAD_433 = NULL;
R21 * l_TAIL_434; memset(&l_TAIL_434, 0, sizeof l_TAIL_434);
l_TAIL_434 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end435;
{
{
R21 * l_H_436; memset(&l_H_436, 0, sizeof l_H_436);
l_H_436 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_436))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_436))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_436, &l_HEAD_433, &l_TAIL_434);
}
}
RT_B_TICK();
} L_end435: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv437 = l_HEAD_433;
return rv437; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R21 * l_S_438; memset(&l_S_438, 0, sizeof l_S_438);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_438 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_S_438))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_438))).f_A = r_PARSE_STATEMENT();
{ R21 * rv439 = l_S_438;
return rv439; }
}
l_S_438 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_440; memset(&l_X_440, 0, sizeof l_X_440);
l_X_440 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_440))).f_A = l_S_438;
((*(R21 *)rt_nil_check(l_X_440))).f_B = r_PARSE_HANDLERS();
{ R21 * rv441 = l_X_440;
return rv441; }
}
}
{ R21 * rv442 = l_S_438;
return rv442; }
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
rt_int l_LINE_443; memset(&l_LINE_443, 0, sizeof l_LINE_443);
l_LINE_443 = r_LINE_NOW();
R21 * l_S_444; memset(&l_S_444, 0, sizeof l_S_444);
R21 * l_T_445; memset(&l_T_445, 0, sizeof l_T_445);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv446 = r_NEW_NODE(g_N_NULL, l_LINE_443);
return rv446; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv447 = r_PARSE_IF();
return rv447; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv448 = r_PARSE_CASE();
return rv448; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv449 = r_PARSE_LOOP();
return rv449; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv450 = r_PARSE_PAR();
return rv450; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_444 = r_NEW_NODE(g_N_BLOCK, l_LINE_443);
((*(R21 *)rt_nil_check(l_S_444))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv451 = l_S_444;
return rv451; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_444 = r_NEW_NODE(g_N_WITH, l_LINE_443);
S_R10(&((*(R21 *)rt_nil_check(l_S_444))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_444))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_444))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_444))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_444))).f_B = r_PARSE_UNLABELED();
{ R21 * rv452 = l_S_444;
return rv452; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv453 = r_NEW_NODE(g_N_EXIT, l_LINE_443);
return rv453; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_444 = r_NEW_NODE(g_N_GOTO, l_LINE_443);
S_R10(&((*(R21 *)rt_nil_check(l_S_444))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv454 = l_S_444;
return rv454; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_444 = r_NEW_NODE(g_N_RETURN, l_LINE_443);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_444))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv455 = l_S_444;
return rv455; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_444 = r_NEW_NODE(g_N_SIGNAL, l_LINE_443);
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_444))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv456 = l_S_444;
return rv456; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_444 = r_NEW_NODE(g_N_ASSERT, l_LINE_443);
((*(R21 *)rt_nil_check(l_S_444))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv457 = l_S_444;
return rv457; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_444 = r_NEW_NODE(g_N_TERMINATE, l_LINE_443);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_444))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv458 = l_S_444;
return rv458; }
}
l_T_445 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_443, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_444 = r_NEW_NODE(g_N_ASSIGN, l_LINE_443);
((*(R21 *)rt_nil_check(l_S_444))).f_A = l_T_445;
((*(R21 *)rt_nil_check(l_S_444))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv459 = l_S_444;
return rv459; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R21 *)rt_nil_check(l_T_445))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_445))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_T_445))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_T_445))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_443, rt_str("a statement expected", 20));
}
{ R21 * rv460 = l_T_445;
return rv460; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { RT_B_TICK(); 
R21 * l_S_461; memset(&l_S_461, 0, sizeof l_S_461);
l_S_461 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_462; memset(&l_HEAD_462, 0, sizeof l_HEAD_462);
l_HEAD_462 = NULL;
R21 * l_TAIL_463; memset(&l_TAIL_463, 0, sizeof l_TAIL_463);
l_TAIL_463 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_465; memset(&l_ARM_465, 0, sizeof l_ARM_465);
l_ARM_465 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_465))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_465))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_465, &l_HEAD_462, &l_TAIL_463);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end464;
} L_end464: ;
((*(R21 *)rt_nil_check(l_S_461))).f_A = l_HEAD_462;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_461))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv466 = l_S_461;
return rv466; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv467 = r_PARSE_RANGE();
return rv467; }
}
{ R21 * rv468 = r_PARSE_EXPR();
return rv468; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { RT_B_TICK(); 
R21 * l_S_469; memset(&l_S_469, 0, sizeof l_S_469);
l_S_469 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_470; memset(&l_HEAD_470, 0, sizeof l_HEAD_470);
l_HEAD_470 = NULL;
R21 * l_TAIL_471; memset(&l_TAIL_471, 0, sizeof l_TAIL_471);
l_TAIL_471 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_469))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end472;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_469))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_469))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_473; memset(&l_ARM_473, 0, sizeof l_ARM_473);
l_ARM_473 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_474; memset(&l_LH_474, 0, sizeof l_LH_474);
l_LH_474 = NULL;
R21 * l_LT_475; memset(&l_LT_475, 0, sizeof l_LT_475);
l_LT_475 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_474, &l_LT_475);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end476;
} L_end476: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_473))).f_A = l_LH_474;
((*(R21 *)rt_nil_check(l_ARM_473))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_473))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_473, &l_HEAD_470, &l_TAIL_471);
}
}
}
RT_B_TICK();
} L_end472: ;
((*(R21 *)rt_nil_check(l_S_469))).f_B = l_HEAD_470;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv477 = l_S_469;
return rv477; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R21 * l_S_478; memset(&l_S_478, 0, sizeof l_S_478);
l_S_478 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_478))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_478))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_478))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_478))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_478))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_478))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv479 = l_S_478;
return rv479; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_478))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_478))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_478))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_478))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv480 = l_S_478;
return rv480; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { RT_B_TICK(); 
R21 * l_S_481; memset(&l_S_481, 0, sizeof l_S_481);
l_S_481 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_482; memset(&l_HEAD_482, 0, sizeof l_HEAD_482);
l_HEAD_482 = NULL;
R21 * l_TAIL_483; memset(&l_TAIL_483, 0, sizeof l_TAIL_483);
l_TAIL_483 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end484;
{
{
R21 * l_P_485; memset(&l_P_485, 0, sizeof l_P_485);
l_P_485 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_486; memset(&l_H_486, 0, sizeof l_H_486);
l_H_486 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R10(&((*(R21 *)rt_nil_check(l_P_485))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_485))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_485))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_485))).f_E))).f_A = l_H_486;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_485))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_485))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_485))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_485))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_485))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_486))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_486))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end487;
}
}
RT_B_TICK();
} L_end487: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_485))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_485))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_485, &l_HEAD_482, &l_TAIL_483);
}
}
RT_B_TICK();
} L_end484: ;
((*(R21 *)rt_nil_check(l_S_481))).f_A = l_HEAD_482;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv488 = l_S_481;
return rv488; }
rt_raise(RT_X_INIT);
}
static R10 r_NO_TEXT(void) { RT_B_TICK(); 
{ R10 rv489 = ({ R10 rc490; memset(&rc490, 0, sizeof rc490);  rc490.f_AT = ((rt_int)0LL); rc490.f_LEN = ((rt_int)0LL); rc490.f_H = ((rt_int)0LL); rc490; });
return rv489; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv491 = ({ R23 rc492; memset(&rc492, 0, sizeof rc492);  rc492.f_OK = 0; rc492.f_V = ((rt_int)0LL); rc492; });
return rv491; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv493 = ({ R23 rc494; memset(&rc494, 0, sizeof rc494);  rc494.f_OK = 1; rc494.f_V = p_V; rc494; });
return rv493; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_495; memset(&l_Y_495, 0, sizeof l_Y_495);
l_Y_495 = ((R12 *)rt_alloc(sizeof (R12)));
rt_int l_LEVEL_496; memset(&l_LEVEL_496, 0, sizeof l_LEVEL_496);
l_LEVEL_496 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_496 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_495)), ({ R12 rc497; memset(&rc497, 0, sizeof rc497);  rc497.f_KIND = p_KIND; rc497.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc497.f_LEVEL = l_LEVEL_496; S_R10(&rc497.f_NAME, p_NAME, 0); rc497.f_T = NULL; S_R10(&rc497.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc497.f_FIELD, r_NO_TEXT(), 0); rc497.f_INPUT = 0; rc497.f_BYREF = 0; rc497.f_HASMV = 0; rc497.f_MV = ((rt_int)0LL); rc497.f_TS = NULL; rc497.f_BUSY = 0; S_R10(&rc497.f_FWD, r_NO_TEXT(), 0); rc497.f_PARAMS = NULL; rc497.f_RESULT = NULL; rc497.f_DECL = NULL; S_R10(&rc497.f_PREFIX, r_NO_TEXT(), 0); rc497.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc497.f_EXPORTED = 0; rc497.f_GENERIC = 0; rc497.f_FRAMED = 0; rc497.f_USES = NULL; rc497.f_INSTANCES = NULL; rc497.f_BINDINGS = NULL; rc497.f_ORIG = NULL; rc497.f_MEMBERS = NULL; rc497.f_SAVED = NULL; rc497.f_OWNER = r_CUR_OWNER(); rc497.f_CHAIN = NULL; rc497.f_SNEXT = NULL; rc497; }), 0);
{ R12 * rv498 = l_Y_495;
return rv498; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv499 = ((rt_int)0LL);
return rv499; }
}
{ rt_int rv500 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv500; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv501 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv501; }
}
{ R12 * rv502 = p_Y;
return rv502; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv503 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv503; }
}
{ rt_int rv504 = (p_NAME).f_H;
return rv504; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_505; memset(&l_Y_505, 0, sizeof l_Y_505);
l_Y_505 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_505 == NULL)) goto L_end506;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_505))).f_NAME, p_NAME))
{
{ R12 * rv507 = l_Y_505;
return rv507; }
}
l_Y_505 = ((*(R12 *)rt_nil_check(l_Y_505))).f_CHAIN;
}
RT_B_TICK();
} L_end506: ;
{ R12 * rv508 = NULL;
return rv508; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_509; memset(&l_Y_509, 0, sizeof l_Y_509);
l_Y_509 = r_LOOKUP(p_NAME);
if ((l_Y_509 == NULL))
{
{ R12 * rv510 = NULL;
return rv510; }
}
{ R12 * rv511 = r_ORIGINAL(l_Y_509);
return rv511; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv512 = r_LOOKUP(r_MKN(p_NAME));
return rv512; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_513; memset(&l_Z_513, 0, sizeof l_Z_513);
l_Z_513 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_513 == NULL)) goto L_end514;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_513))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv515 = l_Z_513;
return rv515; }
}
l_Z_513 = ((*(R12 *)rt_nil_check(l_Z_513))).f_CHAIN;
}
RT_B_TICK();
} L_end514: ;
{ R12 * rv516 = NULL;
return rv516; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv517 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv517; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_518; memset(&l_B_518, 0, sizeof l_B_518);
l_B_518 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_519; memset(&l_OLD_519, 0, sizeof l_OLD_519);
l_OLD_519 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_519 == NULL)) goto L_end520;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_519))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end520;
}
if ((!((((r_IS_ROUTINE(l_OLD_519) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_519))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_519 = r_LOOKUP_NEXT(l_OLD_519);
}
RT_B_TICK();
} L_end520: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_518, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_518, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end521;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end521;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end521: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_522; memset(&l_B_522, 0, sizeof l_B_522);
l_B_522 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_523; memset(&l_P_523, 0, sizeof l_P_523);
l_P_523 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_522, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_523 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_522, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_523 == NULL)) goto L_end524;
{
if ((((*(R12 *)rt_nil_check(l_P_523))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_523))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_523 = ((*(R12 *)rt_nil_check(l_P_523))).f_CHAIN;
}
RT_B_TICK();
} L_end524: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_525; memset(&l_HEAD_525, 0, sizeof l_HEAD_525);
l_HEAD_525 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end526;
{
{
R12 * l_Y_527; memset(&l_Y_527, 0, sizeof l_Y_527);
l_Y_527 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_527);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_527))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_527))).f_SNEXT = l_HEAD_525;
l_HEAD_525 = l_Y_527;
}
}
RT_B_TICK();
} L_end526: ;
{ R12 * rv528 = l_HEAD_525;
return rv528; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_529; memset(&l_T_529, 0, sizeof l_T_529);
l_T_529 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_529)), ({ R22 rc530; memset(&rc530, 0, sizeof rc530);  rc530.f_KIND = p_KIND; rc530.f_SCALE = ((rt_int)0LL); S_R10(&rc530.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc530.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc530.f_MLO, r_NO_MVAL(), 0); S_R23(&rc530.f_MHI, r_NO_MVAL(), 0); rc530.f_RLEVEL = ((rt_int)0LL); S_R10(&rc530.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc530.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc530.f_GEN, r_NO_TEXT(), 0); rc530.f_BASE = NULL; rc530.f_ELEM = NULL; rc530.f_TARGET = NULL; rc530.f_TARGET_TS = NULL; rc530.f_FIELDS = NULL; rc530.f_LITS = NULL; rc530.f_NLITS = ((rt_int)0LL); rc530.f_UNORDERED = 0; rc530.f_BOUNDS = NULL; rc530.f_DIMS = ((rt_int)0LL); rc530.f_ARGS = NULL; S_R10(&rc530.f_NAME, r_NO_TEXT(), 0); S_R10(&rc530.f_CNAME, r_NO_TEXT(), 0); rc530.f_MODL = NULL; rc530.f_REPS = NULL; rc530.f_DECL = NULL; rc530; }), 0);
{ R22 * rv531 = l_T_529;
return rv531; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_532; memset(&l_C_532, 0, sizeof l_C_532);
l_C_532 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_532)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv533 = l_C_532;
return rv533; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_534; memset(&l_Y_534, 0, sizeof l_Y_534);
l_Y_534 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_534))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_534))).f_NAME, 0);
}
r_DEFINE(l_Y_534, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_535; memset(&l_Y_535, 0, sizeof l_Y_535);
l_Y_535 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_535))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_535))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_535))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_535))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_535))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_535, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_536; memset(&l_HEAD_536, 0, sizeof l_HEAD_536);
l_HEAD_536 = NULL;
R21 * l_TAIL_537; memset(&l_TAIL_537, 0, sizeof l_TAIL_537);
l_TAIL_537 = NULL;
rt_int l_START_538; memset(&l_START_538, 0, sizeof l_START_538);
l_START_538 = ((rt_int)0LL);
{ rt_int it540_lo = ((rt_int)0LL), it540_hi = (rt_int)(p_NAMES).len;
for (rt_int it540 = it540_lo; it540 <= it540_hi; it540++) {
{
if (((it540 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it540, it540), rt_str(" ", 1))))
{
if ((it540 > l_START_538))
{
{
R21 * l_N_541; memset(&l_N_541, 0, sizeof l_N_541);
l_N_541 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_541))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_538, rt_sub(it540, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_541, &l_HEAD_536, &l_TAIL_537);
}
}
l_START_538 = rt_add(it540, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it540 == it540_hi) break;
} } L_end539: ;
{
R22 * l_T_542; memset(&l_T_542, 0, sizeof l_T_542);
l_T_542 = r_ENUM_CLASS(l_HEAD_536, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_542);
{ R22 * rv543 = l_T_542;
return rv543; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_544; memset(&l_T_544, 0, sizeof l_T_544);
R21 * l_ASCII_LITS_545; memset(&l_ASCII_LITS_545, 0, sizeof l_ASCII_LITS_545);
l_ASCII_LITS_545 = NULL;
R21 * l_TAIL_546; memset(&l_TAIL_546, 0, sizeof l_TAIL_546);
l_TAIL_546 = NULL;
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
{ rt_int it548_lo = ((rt_int)0LL), it548_hi = ((rt_int)127LL);
for (rt_int it548 = it548_lo; it548 <= it548_hi; it548++) {
{
{
R21 * l_N_549; memset(&l_N_549, 0, sizeof l_N_549);
l_N_549 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_549))).f_NAME, r_ASCII_NAME(it548), 0);
r_ADD_LIST(l_N_549, &l_ASCII_LITS_545, &l_TAIL_546);
}
}
RT_B_TICK();
if (it548 == it548_hi) break;
} } L_end547: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_545, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_544 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
l_T_544 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_544 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_544 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_CONTROLS_550; memset(&l_CONTROLS_550, 0, sizeof l_CONTROLS_550);
l_CONTROLS_550 = rt_str_new(((rt_int)128LL));
rt_b_assign(&l_CONTROLS_550, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_550, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv551 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_550, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv551; }
}
{ R10 rv552 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_550, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv552; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv553 = r_MKN(rt_str("\\''''", 5));
return rv553; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv554 = r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv554; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv555 = r_MKN(rt_str("\\ACCENT", 7));
return rv555; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv556 = r_MKN(rt_str_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv556; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv557 = r_MKN(rt_str("\\[", 2));
return rv557; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv558 = r_MKN(rt_str("\\BAR", 4));
return rv558; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv559 = r_MKN(rt_str("\\]", 2));
return rv559; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv560 = r_MKN(rt_str("\\TILDE", 6));
return rv560; }
}
{ R10 rv561 = r_MKN(rt_str("\\DEL", 4));
return rv561; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv562 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv562; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv563 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv563; }
}
{ R22 * rv564 = p_T;
return rv564; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_565; memset(&l_K_565, 0, sizeof l_K_565);
l_K_565 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv566 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv566; }
}
else if ((l_K_565 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv567 = r_MK(rt_str("INTEGER", 7));
return rv567; }
}
{ R10 rv568 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv568; }
}
else if ((l_K_565 == g_T_BOOL))
{
{ R10 rv569 = r_MK(rt_str("BOOLEAN", 7));
return rv569; }
}
else if ((l_K_565 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv570 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv570; }
}
{ R10 rv571 = r_MK(rt_str("an enumerated type", 18));
return rv571; }
}
else if ((l_K_565 == g_T_STR))
{
{ R10 rv572 = r_MK(rt_str("CHAR_STR", 8));
return rv572; }
}
else if ((l_K_565 == g_T_BITS))
{
{ R10 rv573 = r_MK(rt_str("BIT", 3));
return rv573; }
}
else if ((l_K_565 == g_T_FLOAT))
{
{ R10 rv574 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv574; }
}
else if ((l_K_565 == g_T_ARR))
{
{ R10 rv575 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv575; }
}
else if ((l_K_565 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv576 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv576; }
}
{ R10 rv577 = r_MK(rt_str("RECORD", 6));
return rv577; }
}
else if ((l_K_565 == g_T_PTR))
{
{ R10 rv578 = r_MK(rt_str("PTR", 3));
return rv578; }
}
else if ((l_K_565 == g_T_SEM))
{
{ R10 rv579 = r_MK(rt_str("SEMAPHORE", 9));
return rv579; }
}
else if ((l_K_565 == g_T_NIL))
{
{ R10 rv580 = r_MK(rt_str("NIL", 3));
return rv580; }
}
else if ((l_K_565 == g_T_VOID))
{
{ R10 rv581 = r_MK(rt_str("no value", 8));
return rv581; }
}
{ R10 rv582 = r_MK(rt_str("a type", 6));
return rv582; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { RT_B_TICK(); 
rstr l_S_583; memset(&l_S_583, 0, sizeof l_S_583);
l_S_583 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_583, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_584; memset(&l_AT_584, 0, sizeof l_AT_584);
l_AT_584 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_585; memset(&l_START_585, 0, sizeof l_START_585);
l_START_585 = ((rt_int)0LL);
R10 l_R_586; memset(&l_R_586, 0, sizeof l_R_586);
rt_int l_I_587; memset(&l_I_587, 0, sizeof l_I_587);
l_I_587 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv588 = p_T;
return rv588; }
}
for (;;) {
if ((l_I_587 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end589;
{
if (rt_b_eq(rt_b_slice(l_S_583, l_I_587, rt_add(l_I_587, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_586, r_MK(rt_b_slice(l_S_583, l_START_585, rt_sub(l_I_587, ((rt_int)1LL)))), 0);
S_R10(&l_R_586, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_587 = rt_add(l_I_587, ((rt_int)2LL));
l_START_585 = l_I_587;
}
else
{
l_I_587 = rt_add(l_I_587, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end589: ;
if ((l_START_585 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_584;
{ R10 rv590 = p_T;
return rv590; }
}
S_R10(&l_R_586, r_MK(rt_b_slice(l_S_583, l_START_585, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv591 = ({ R10 rc592; memset(&rc592, 0, sizeof rc592);  rc592.f_AT = l_AT_584; rc592.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_584); rc592.f_H = rt_neg(((rt_int)1LL)); rc592; });
return rv591; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_593; memset(&l_P_593, 0, sizeof l_P_593);
l_P_593 = p_A;
R21 * l_Q_594; memset(&l_Q_594, 0, sizeof l_Q_594);
l_Q_594 = p_B;
for (;;) {
if (((l_P_593 == NULL) || (l_Q_594 == NULL))) goto L_end595;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_593))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_594))).f_NAME)))
{
{ rt_int rv596 = 0;
return rv596; }
}
l_P_593 = ((*(R21 *)rt_nil_check(l_P_593))).f_NEXT;
l_Q_594 = ((*(R21 *)rt_nil_check(l_Q_594))).f_NEXT;
}
RT_B_TICK();
} L_end595: ;
{ rt_int rv597 = ((l_P_593 == NULL) && (l_Q_594 == NULL));
return rv597; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_598; memset(&l_Y_598, 0, sizeof l_Y_598);
l_Y_598 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_599; memset(&l_T_599, 0, sizeof l_T_599);
for (;;) {
if ((l_Y_598 == NULL)) goto L_end600;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_598))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_598))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_598))).f_T, p_LINE);
{ R22 * rv601 = ((*(R12 *)rt_nil_check(l_Y_598))).f_T;
return rv601; }
}
l_Y_598 = ((*(R12 *)rt_nil_check(l_Y_598))).f_INSTANCES;
}
RT_B_TICK();
} L_end600: ;
l_T_599 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_599))).f_BASE = l_T_599;
((*(R22 *)rt_nil_check(l_T_599))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_599))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_599))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_599))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_598 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_598))).f_T = l_T_599;
((*(R12 *)rt_nil_check(l_Y_598))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_598;
{
R21 * l_P_602; memset(&l_P_602, 0, sizeof l_P_602);
l_P_602 = p_LITS;
R10 l_NAMES_603; memset(&l_NAMES_603, 0, sizeof l_NAMES_603);
S_R10(&l_NAMES_603, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_602 == NULL)) goto L_end604;
{
S_R10(&l_NAMES_603, r_FMT2(rt_str("@@, ", 4), l_NAMES_603, r_CSTRING(((*(R21 *)rt_nil_check(l_P_602))).f_NAME)), 0);
l_P_602 = ((*(R21 *)rt_nil_check(l_P_602))).f_NEXT;
}
RT_B_TICK();
} L_end604: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_599))).f_CNAME, l_NAMES_603));
}
r_DECLARE_LITERALS(l_T_599, p_LINE);
{ R22 * rv605 = l_T_599;
return rv605; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_606; memset(&l_P_606, 0, sizeof l_P_606);
l_P_606 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_607; memset(&l_I_607, 0, sizeof l_I_607);
l_I_607 = ((rt_int)0LL);
for (;;) {
if ((l_P_606 == NULL)) goto L_end608;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_606))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_609; memset(&l_Y_609, 0, sizeof l_Y_609);
l_Y_609 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_606))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_609))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_609))).f_MV = l_I_607;
((*(R12 *)rt_nil_check(l_Y_609))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_609))).f_INPUT = 1;
r_DEFINE(l_Y_609, p_LINE);
}
}
l_I_607 = rt_add(l_I_607, ((rt_int)1LL));
l_P_606 = ((*(R21 *)rt_nil_check(l_P_606))).f_NEXT;
}
RT_B_TICK();
} L_end608: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_610; memset(&l_V_610, 0, sizeof l_V_610);
l_V_610 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_610 == NULL)) || (p_T == NULL)))
{
{ R12 * rv611 = l_V_610;
return rv611; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv612 = NULL;
return rv612; }
}
{
R21 * l_P_613; memset(&l_P_613, 0, sizeof l_P_613);
l_P_613 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_614; memset(&l_I_614, 0, sizeof l_I_614);
l_I_614 = ((rt_int)0LL);
for (;;) {
if ((l_P_613 == NULL)) goto L_end615;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_613))).f_NAME, p_NAME))
{
{
R12 * l_Y_616; memset(&l_Y_616, 0, sizeof l_Y_616);
l_Y_616 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_616))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_616))).f_MV = l_I_614;
((*(R12 *)rt_nil_check(l_Y_616))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_616))).f_INPUT = 1;
{ R12 * rv617 = l_Y_616;
return rv617; }
}
}
l_I_614 = rt_add(l_I_614, ((rt_int)1LL));
l_P_613 = ((*(R21 *)rt_nil_check(l_P_613))).f_NEXT;
}
RT_B_TICK();
} L_end615: ;
}
{ R12 * rv618 = NULL;
return rv618; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_619; memset(&l_Y_619, 0, sizeof l_Y_619);
l_Y_619 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_619 == NULL)) goto L_end620;
{
if ((((*(R12 *)rt_nil_check(l_Y_619))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv621 = l_Y_619;
return rv621; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_619))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv622 = l_Y_619;
return rv622; }
}
}
l_Y_619 = r_LOOKUP_NEXT(l_Y_619);
}
RT_B_TICK();
} L_end620: ;
{ R12 * rv623 = NULL;
return rv623; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_624; memset(&l_Y_624, 0, sizeof l_Y_624);
l_Y_624 = r_LOOKUP(p_NAME);
rt_int l_N_625; memset(&l_N_625, 0, sizeof l_N_625);
l_N_625 = ((rt_int)0LL);
for (;;) {
if ((l_Y_624 == NULL)) goto L_end626;
{
if ((((*(R12 *)rt_nil_check(l_Y_624))).f_KIND == g_Y_ENUMLIT))
{
l_N_625 = rt_add(l_N_625, ((rt_int)1LL));
}
l_Y_624 = r_LOOKUP_NEXT(l_Y_624);
}
RT_B_TICK();
} L_end626: ;
{ rt_int rv627 = l_N_625;
return rv627; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv628 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv628; }
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
R22 * l_N_629; memset(&l_N_629, 0, sizeof l_N_629);
if ((p_R == NULL))
{
{ R22 * rv630 = p_T;
return rv630; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_629 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_LO_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_HI_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv631 = l_N_629;
return rv631; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_629 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_629))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_632; memset(&l_LO_632, 0, sizeof l_LO_632);
R26 l_HI_633; memset(&l_HI_633, 0, sizeof l_HI_633);
S_R26(&l_LO_632, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_633, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_LO_C, (l_LO_632).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_HI_C, (l_HI_633).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_629))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_629))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_629))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_629))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_LO_C, r_RESCALE(l_LO_632, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_HI_C, r_RESCALE(l_HI_633, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_629))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_629))).f_MHI, r_NO_MVAL(), 0);
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_629))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_629))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_629))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_629))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_629))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_629))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_629))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_629))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_629))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv634 = l_N_629;
return rv634; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_635; memset(&l_Y_635, 0, sizeof l_Y_635);
l_Y_635 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_635 == NULL)))
{
{ R23 rv636 = r_SOME(((*(R12 *)rt_nil_check(l_Y_635))).f_MV);
return rv636; }
}
}
}
{ R23 rv637 = r_MANIFEST(p_E);
return rv637; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv638 = ((rt_int)0LL);
return rv638; }
}
{ rt_int rv639 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv639; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv640 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv640; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_641; memset(&l_A_641, 0, sizeof l_A_641);
l_A_641 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it643_lo = ((rt_int)1LL), it643_hi = p_K;
for (rt_int it643 = it643_lo; it643 <= it643_hi; it643++) {
{
if ((l_A_641 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_641 = ((*(R21 *)rt_nil_check(l_A_641))).f_NEXT;
}
RT_B_TICK();
if (it643 == it643_hi) break;
} } L_end642: ;
if ((l_A_641 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv644 = l_A_641;
return rv644; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_645; memset(&l_T_645, 0, sizeof l_T_645);
rt_int l_K_646; memset(&l_K_646, 0, sizeof l_K_646);
l_K_646 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_646 == g_TS_ARRAY))
{
{ R22 * rv647 = r_RESOLVE_ARRAY(p_TS);
return rv647; }
}
else if ((l_K_646 == g_TS_RECORD))
{
{ R22 * rv648 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv648; }
}
else if ((l_K_646 == g_TS_ENUM))
{
l_T_645 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_645 = r_WITH_RANGE(l_T_645, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_645 = r_COPY_TYP(l_T_645);
((*(R22 *)rt_nil_check(l_T_645))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
}
{ R22 * rv649 = l_T_645;
return rv649; }
}
else if ((l_K_646 == g_TS_GEN))
{
{ R22 * rv650 = r_GEN_TYPE(p_TS);
return rv650; }
}
else if ((!(l_K_646 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
l_T_645 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_645 == NULL))
{
l_T_645 = r_RESOLVE_USER(p_TS);
}
l_T_645 = r_WITH_RANGE(l_T_645, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_645 = r_COPY_TYP(l_T_645);
((*(R22 *)rt_nil_check(l_T_645))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
if (((!(((*(R22 *)rt_nil_check(l_T_645))).f_KIND == g_T_ENUM)) || (!((*(R22 *)rt_nil_check(l_T_645))).f_UNORDERED)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
}
{ R22 * rv651 = l_T_645;
return rv651; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_652; memset(&l_B_652, 0, sizeof l_B_652);
l_B_652 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_652 == NULL)) goto L_end653;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_652))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_652))).f_T == NULL))))
{
{ R22 * rv654 = ((*(R20 *)rt_nil_check(l_B_652))).f_T;
return rv654; }
}
l_B_652 = ((*(R20 *)rt_nil_check(l_B_652))).f_NEXT;
}
RT_B_TICK();
} L_end653: ;
{
R12 * l_Y_655; memset(&l_Y_655, 0, sizeof l_Y_655);
l_Y_655 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_655 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_655))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_655))).f_T == NULL))))
{
{ R22 * rv656 = ((*(R12 *)rt_nil_check(l_Y_655))).f_T;
return rv656; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_657; memset(&l_NAME_657, 0, sizeof l_NAME_657);
S_R10(&l_NAME_657, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_658; memset(&l_T_658, 0, sizeof l_T_658);
if (r_TEQS(l_NAME_657, rt_str("FIXED", 5)))
{
{
R23 l_S_659; memset(&l_S_659, 0, sizeof l_S_659);
S_R23(&l_S_659, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
R23 l_R_660; memset(&l_R_660, 0, sizeof l_R_660);
S_R23(&l_R_660, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)1LL))), 0);
R21 * l_P_661; memset(&l_P_661, 0, sizeof l_P_661);
l_P_661 = r_NTH_ARG(p_TS, ((rt_int)2LL));
if ((!(l_S_659).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the scale must be manifest (3.2.1)", 34));
}
if (((!(l_R_660).f_OK) || (!((l_R_660).f_V == ((rt_int)2LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
if (((((*(R21 *)rt_nil_check(l_P_661))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_661))).f_KIND == g_N_ENUMLIT)))
{
if (((!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_661))).f_NAME, NULL) == NULL)) && (!r_TEQS(((*(R21 *)rt_nil_check(l_P_661))).f_NAME, rt_str("STD", 3)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
if (((l_S_659).f_V == ((rt_int)0LL)))
{
{ R22 * rv662 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv662; }
}
l_T_658 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_658))).f_SCALE = (l_S_659).f_V;
{ R22 * rv663 = l_T_658;
return rv663; }
}
}
else if (r_TEQS(l_NAME_657, rt_str("FLOAT", 5)))
{
{
R23 l_P_664; memset(&l_P_664, 0, sizeof l_P_664);
S_R23(&l_P_664, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
if ((!(l_P_664).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the precision must be manifest (3.3.1)", 38));
}
if ((((l_P_664).f_V < ((rt_int)1LL)) || ((l_P_664).f_V > ((rt_int)15LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
l_T_658 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_658))).f_SCALE = (l_P_664).f_V;
{ R22 * rv665 = l_T_658;
return rv665; }
}
}
else if (r_TEQS(l_NAME_657, rt_str("BIT", 3)))
{
l_T_658 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_658, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv666 = l_T_658;
return rv666; }
}
else if ((r_TEQS(l_NAME_657, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_657, rt_str("ASCII_STR", 9))))
{
l_T_658 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_658, r_NTH_ARG(p_TS, ((rt_int)0LL)));
if (r_TEQS(l_NAME_657, rt_str("CHAR_STR", 8)))
{
{
R21 * l_CS_667; memset(&l_CS_667, 0, sizeof l_CS_667);
l_CS_667 = r_NTH_ARG(p_TS, ((rt_int)1LL));
if (((((*(R21 *)rt_nil_check(l_CS_667))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_667))).f_KIND == g_N_DONTCARE)))
{
{ R22 * rv668 = l_T_658;
return rv668; }
}
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_CS_667))).f_NAME, rt_str("ASCII", 5))))
{
if ((!(((*(R22 *)rt_nil_check(r_ARG_TYPE(l_CS_667)))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
}
}
}
{ R22 * rv669 = l_T_658;
return rv669; }
}
else if (r_TEQS(l_NAME_657, rt_str("PTR", 3)))
{
l_T_658 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_658))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv670 = l_T_658;
return rv670; }
}
else if (r_TEQS(l_NAME_657, rt_str("SEMAPHORE", 9)))
{
l_T_658 = r_NEW_TYP(g_T_SEM);
{
R21 * l_U_671; memset(&l_U_671, 0, sizeof l_U_671);
l_U_671 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_671))).f_NAME, rt_str("REGION", 6)))
{
((*(R22 *)rt_nil_check(l_T_658))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_671))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R22 * rv672 = l_T_658;
return rv672; }
}
{ R22 * rv673 = NULL;
return rv673; }
rt_raise(RT_X_INIT);
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_674; memset(&l_B_674, 0, sizeof l_B_674);
l_B_674 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_674 == NULL)) goto L_end675;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_674))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_674))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_674))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc676; memset(&rc676, 0, sizeof rc676);  rc676.f_OK = ((*(R20 *)rt_nil_check(l_B_674))).f_HASMV; rc676.f_V = ((*(R20 *)rt_nil_check(l_B_674))).f_MV; rc676; }), 0);
return;
}
l_B_674 = ((*(R20 *)rt_nil_check(l_B_674))).f_NEXT;
}
RT_B_TICK();
} L_end675: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_677; memset(&l_C_677, 0, sizeof l_C_677);
R23 l_M_678; memset(&l_M_678, 0, sizeof l_M_678);
r_ATTR_VALUE(p_A, &l_C_677, &l_M_678);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_677, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_678, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_679; memset(&l_T_679, 0, sizeof l_T_679);
l_T_679 = r_NEW_TYP(g_T_ARR);
R21 * l_R_680; memset(&l_R_680, 0, sizeof l_R_680);
l_R_680 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_681; memset(&l_TAIL_681, 0, sizeof l_TAIL_681);
l_TAIL_681 = NULL;
for (;;) {
if ((l_R_680 == NULL)) goto L_end682;
{
{
R25 * l_B_683; memset(&l_B_683, 0, sizeof l_B_683);
l_B_683 = ((R25 *)rt_alloc(sizeof (R25)));
R26 l_LO_684; memset(&l_LO_684, 0, sizeof l_LO_684);
R26 l_HI_685; memset(&l_HI_685, 0, sizeof l_HI_685);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_680))).f_A))
{
S_R26(&l_LO_684, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_680))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_680))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_684, r_EXPR(((*(R21 *)rt_nil_check(l_R_680))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_680))).f_B))
{
S_R26(&l_HI_685, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_680))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_680))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_685, r_EXPR(((*(R21 *)rt_nil_check(l_R_680))).f_B, (l_LO_684).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_683)), ({ R25 rc686; memset(&rc686, 0, sizeof rc686);  S_R10(&rc686.f_LO, (l_LO_684).f_C, 0); S_R10(&rc686.f_HI, (l_HI_685).f_C, 0); S_R23(&rc686.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_680))).f_A), 0); S_R23(&rc686.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_680))).f_B), 0); rc686.f_ANYARG = 0; rc686.f_NEXT = NULL; rc686; }), 0);
if ((((*(R22 *)rt_nil_check((l_LO_684).f_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_683))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_680))).f_A, (l_LO_684).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_683))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_680))).f_B, (l_LO_684).f_T), 0);
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_684).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_680))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_681 == NULL))
{
((*(R22 *)rt_nil_check(l_T_679))).f_BOUNDS = l_B_683;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_681))).f_NEXT = l_B_683;
}
l_TAIL_681 = l_B_683;
((*(R22 *)rt_nil_check(l_T_679))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_679))).f_DIMS, ((rt_int)1LL));
}
l_R_680 = ((*(R21 *)rt_nil_check(l_R_680))).f_NEXT;
}
RT_B_TICK();
} L_end682: ;
((*(R22 *)rt_nil_check(l_T_679))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_679))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_679))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_679))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_679))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_679))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_679))).f_DIMS), 0);
{ R22 * rv687 = l_T_679;
return rv687; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_688; memset(&l_Y_688, 0, sizeof l_Y_688);
l_Y_688 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_689; memset(&l_B_689, 0, sizeof l_B_689);
l_B_689 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_689 == NULL)) goto L_end690;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_689))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_689))).f_T == NULL))))
{
{ R22 * rv691 = ((*(R20 *)rt_nil_check(l_B_689))).f_T;
return rv691; }
}
l_B_689 = ((*(R20 *)rt_nil_check(l_B_689))).f_NEXT;
}
RT_B_TICK();
} L_end690: ;
}
}
if ((l_Y_688 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_688))).f_KIND == g_Y_GEN))
{
{ R22 * rv692 = r_GEN_TYPE(p_TS);
return rv692; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_688))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_688))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv693 = ((*(R12 *)rt_nil_check(l_Y_688))).f_T;
return rv693; }
}
{
R21 * l_D_694; memset(&l_D_694, 0, sizeof l_D_694);
l_D_694 = ((*(R12 *)rt_nil_check(l_Y_688))).f_DECL;
R22 * l_T_695; memset(&l_T_695, 0, sizeof l_T_695);
if ((((*(R21 *)rt_nil_check(l_D_694))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_688))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_688))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_688))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_694))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_688))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_694))).f_B, r_RECORD_NAME(l_Y_688), l_Y_688, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_688))).f_T = r_RESOLVE_IN_DECL(l_Y_688, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_688))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_688))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_688))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_688))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_688))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_688))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_688))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_688))).f_BUSY = 0;
}
l_T_695 = ((*(R12 *)rt_nil_check(l_Y_688))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_694))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_695 = r_RECORD_INSTANCE(l_Y_688, p_TS);
}
else
{
l_T_695 = r_RESOLVE_IN_DECL(l_Y_688, p_TS);
}
}
{ R22 * rv696 = r_ABSTRACT_VIEW(l_Y_688, l_T_695);
return rv696; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_697; memset(&l_A_697, 0, sizeof l_A_697);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv698 = p_T;
return rv698; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv699 = p_T;
return rv699; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv700 = p_T;
return rv700; }
}
l_A_697 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_697))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_697))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_697))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_697))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_697))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv701 = l_A_697;
return rv701; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_702; memset(&l_P_702, 0, sizeof l_P_702);
l_P_702 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_702 == NULL)) goto L_end703;
{
if ((l_P_702 == p_M))
{
{ rt_int rv704 = 1;
return rv704; }
}
l_P_702 = ((*(R12 *)rt_nil_check(l_P_702))).f_MODL;
}
RT_B_TICK();
} L_end703: ;
{ rt_int rv705 = 0;
return rv705; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_706; memset(&l_D_706, 0, sizeof l_D_706);
l_D_706 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_707; memset(&l_T_707, 0, sizeof l_T_707);
if ((p_TS == NULL))
{
{ R22 * rv708 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_706))).f_B);
return rv708; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_706))).f_A, p_TS);
l_T_707 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_706))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv709 = l_T_707;
return rv709; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_710; memset(&l_F_710, 0, sizeof l_F_710);
l_F_710 = p_FORMALS;
R21 * l_A_711; memset(&l_A_711, 0, sizeof l_A_711);
l_A_711 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_710 == NULL)) goto L_end712;
{
{
R21 * l_N_713; memset(&l_N_713, 0, sizeof l_N_713);
l_N_713 = ((*(R21 *)rt_nil_check(l_F_710))).f_A;
for (;;) {
if ((l_N_713 == NULL)) goto L_end714;
{
if ((l_A_711 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_710))).f_B == NULL))
{
{
R12 * l_Y_715; memset(&l_Y_715, 0, sizeof l_Y_715);
l_Y_715 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_713))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_715))).f_T = r_ARG_TYPE(l_A_711);
r_DEFINE(l_Y_715, ((*(R21 *)rt_nil_check(l_A_711))).f_LINE);
}
}
else
{
{
R12 * l_Y_716; memset(&l_Y_716, 0, sizeof l_Y_716);
l_Y_716 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_713))).f_NAME);
R10 l_C_717; memset(&l_C_717, 0, sizeof l_C_717);
R23 l_M_718; memset(&l_M_718, 0, sizeof l_M_718);
((*(R12 *)rt_nil_check(l_Y_716))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_710))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_711))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_711))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_711))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_711))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_717, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_711))).f_NAME, (((*(R21 *)rt_nil_check(l_A_711))).f_NAME).f_LEN))), 0);
S_R23(&l_M_718, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_711, &l_C_717, &l_M_718);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_716))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_717))))
{
S_R10(&l_C_717, (r_EXPR(l_A_711, ((*(R12 *)rt_nil_check(l_Y_716))).f_T)).f_C, 0);
S_R23(&l_M_718, r_ENUM_MANIFEST(l_A_711, ((*(R12 *)rt_nil_check(l_Y_716))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_716))).f_ACCESS, l_C_717, 0);
((*(R12 *)rt_nil_check(l_Y_716))).f_HASMV = (l_M_718).f_OK;
((*(R12 *)rt_nil_check(l_Y_716))).f_MV = (l_M_718).f_V;
((*(R12 *)rt_nil_check(l_Y_716))).f_INPUT = 1;
r_DEFINE(l_Y_716, ((*(R21 *)rt_nil_check(l_A_711))).f_LINE);
}
}
l_A_711 = ((*(R21 *)rt_nil_check(l_A_711))).f_NEXT;
l_N_713 = ((*(R21 *)rt_nil_check(l_N_713))).f_NEXT;
}
RT_B_TICK();
} L_end714: ;
}
l_F_710 = ((*(R21 *)rt_nil_check(l_F_710))).f_NEXT;
}
RT_B_TICK();
} L_end712: ;
if ((!(l_A_711 == NULL)))
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
{ R10 rv719 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv719; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv720 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv720; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_721; memset(&l_K_721, 0, sizeof l_K_721);
l_K_721 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv722 = r_MK(rt_str("rt_int", 6));
return rv722; }
}
else if ((l_K_721 == g_T_FLOAT))
{
{ R10 rv723 = r_MK(rt_str("double", 6));
return rv723; }
}
else if (((l_K_721 == g_T_STR) || (l_K_721 == g_T_BITS)))
{
{ R10 rv724 = r_MK(rt_str("rstr", 4));
return rv724; }
}
else if (((l_K_721 == g_T_REC) || (l_K_721 == g_T_ARR)))
{
{ R10 rv725 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv725; }
}
else if ((l_K_721 == g_T_ABS))
{
{ R10 rv726 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv726; }
}
else if ((l_K_721 == g_T_SEM))
{
{ R10 rv727 = r_MK(rt_str("rt_b_sem *", 10));
return rv727; }
}
else if ((l_K_721 == g_T_PATHS))
{
{ R10 rv728 = r_MK(rt_str("rt_b_paths", 10));
return rv728; }
}
else if ((l_K_721 == g_T_VOID))
{
{ R10 rv729 = r_MK(rt_str("void", 4));
return rv729; }
}
else if ((l_K_721 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_730; memset(&l_TT_730, 0, sizeof l_TT_730);
l_TT_730 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_730))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_730))).f_A == NULL)))
{
{
R12 * l_Y_731; memset(&l_Y_731, 0, sizeof l_Y_731);
l_Y_731 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_730))).f_NAME);
if ((!(l_Y_731 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_731))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_731))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_731))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_731))).f_DECL))).f_A == NULL)))
{
{ R10 rv732 = r_CATS(r_RECORD_NAME(l_Y_731), rt_str(" *", 2));
return rv732; }
}
}
}
}
}
}
}
{ R10 rv733 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv733; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv734 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv734; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_735; memset(&l_F_735, 0, sizeof l_F_735);
l_F_735 = ((R24 *)rt_alloc(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_735)), ({ R24 rc736; memset(&rc736, 0, sizeof rc736);  S_R10(&rc736.f_NAME, p_NAME, 0); S_R10(&rc736.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc736.f_T = p_T; rc736.f_KIND = p_KIND; S_R10(&rc736.f_TAGF, r_NO_TEXT(), 0); rc736.f_LABELS = NULL; rc736.f_NEXT = NULL; rc736; }), 0);
{ R24 * rv737 = l_F_735;
return rv737; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_738; memset(&l_F_738, 0, sizeof l_F_738);
l_F_738 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_738 == NULL)) goto L_end739;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_738))).f_NAME, p_NAME))
{
{ R24 * rv740 = l_F_738;
return rv740; }
}
l_F_738 = ((*(R24 *)rt_nil_check(l_F_738))).f_NEXT;
}
RT_B_TICK();
} L_end739: ;
{ R24 * rv741 = NULL;
return rv741; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_742; memset(&l_F_742, 0, sizeof l_F_742);
l_F_742 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_743; memset(&l_FIRST_743, 0, sizeof l_FIRST_743);
l_FIRST_743 = NULL;
for (;;) {
if ((l_F_742 == NULL)) goto L_end744;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_742))).f_NAME, p_NAME))
{
if ((l_FIRST_743 == NULL))
{
l_FIRST_743 = l_F_742;
}
if (((((*(R24 *)rt_nil_check(l_F_742))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv745 = l_F_742;
return rv745; }
}
{
R23 l_TAGV_746; memset(&l_TAGV_746, 0, sizeof l_TAGV_746);
S_R23(&l_TAGV_746, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_742))).f_TAGF), 0);
if ((l_TAGV_746).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_742))).f_LABELS, (l_TAGV_746).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_742))).f_TAGF)))).f_T))
{
{ R24 * rv747 = l_F_742;
return rv747; }
}
}
}
}
l_F_742 = ((*(R24 *)rt_nil_check(l_F_742))).f_NEXT;
}
RT_B_TICK();
} L_end744: ;
{ R24 * rv748 = l_FIRST_743;
return rv748; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_749; memset(&l_P_749, 0, sizeof l_P_749);
l_P_749 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_750; memset(&l_N_750, 0, sizeof l_N_750);
l_N_750 = ((rt_int)0LL);
for (;;) {
if ((l_P_749 == NULL)) goto L_end751;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_749))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
l_N_750 = rt_add(l_N_750, ((rt_int)1LL));
}
l_P_749 = ((*(R24 *)rt_nil_check(l_P_749))).f_NEXT;
}
RT_B_TICK();
} L_end751: ;
if ((l_N_750 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_750)), 0);
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
R21 * l_D_752; memset(&l_D_752, 0, sizeof l_D_752);
l_D_752 = p_DECLS;
for (;;) {
if ((l_D_752 == NULL)) goto L_end753;
{
if ((((*(R21 *)rt_nil_check(l_D_752))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_754; memset(&l_FT_754, 0, sizeof l_FT_754);
l_FT_754 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_752))).f_B);
R21 * l_N_755; memset(&l_N_755, 0, sizeof l_N_755);
l_N_755 = ((*(R21 *)rt_nil_check(l_D_752))).f_A;
for (;;) {
if ((l_N_755 == NULL)) goto L_end756;
{
{
R24 * l_F_757; memset(&l_F_757, 0, sizeof l_F_757);
l_F_757 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_755))).f_NAME, l_FT_754, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_757))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_757))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_757, &(*p_TAIL));
}
l_N_755 = ((*(R21 *)rt_nil_check(l_N_755))).f_NEXT;
}
RT_B_TICK();
} L_end756: ;
}
}
else
{
{
R24 * l_TF_758; memset(&l_TF_758, 0, sizeof l_TF_758);
l_TF_758 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_752))).f_NAME);
R21 * l_S_759; memset(&l_S_759, 0, sizeof l_S_759);
l_S_759 = ((*(R21 *)rt_nil_check(l_D_752))).f_A;
if ((l_TF_758 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_752))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_752))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_758))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_752))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_752))).f_NAME);
}
for (;;) {
if ((l_S_759 == NULL)) goto L_end760;
{
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_759))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_752))).f_NAME), ((*(R21 *)rt_nil_check(l_S_759))).f_A, &(*p_TAIL));
l_S_759 = ((*(R21 *)rt_nil_check(l_S_759))).f_NEXT;
}
RT_B_TICK();
} L_end760: ;
}
}
l_D_752 = ((*(R21 *)rt_nil_check(l_D_752))).f_NEXT;
}
RT_B_TICK();
} L_end753: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_761; memset(&l_T_761, 0, sizeof l_T_761);
l_T_761 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_762; memset(&l_TAIL_762, 0, sizeof l_TAIL_762);
l_TAIL_762 = NULL;
((*(R22 *)rt_nil_check(l_T_761))).f_BASE = l_T_761;
((*(R22 *)rt_nil_check(l_T_761))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_761))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_761))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_761))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_761))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_761))).f_CNAME));
}
{
R21 * l_F_763; memset(&l_F_763, 0, sizeof l_F_763);
l_F_763 = p_FORMALS;
for (;;) {
if ((l_F_763 == NULL)) goto L_end764;
{
if ((!(((*(R21 *)rt_nil_check(l_F_763))).f_B == NULL)))
{
{
R22 * l_FT_765; memset(&l_FT_765, 0, sizeof l_FT_765);
l_FT_765 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_763))).f_B);
R21 * l_N_766; memset(&l_N_766, 0, sizeof l_N_766);
l_N_766 = ((*(R21 *)rt_nil_check(l_F_763))).f_A;
rt_int l_KIND_767; memset(&l_KIND_767, 0, sizeof l_KIND_767);
l_KIND_767 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_763))).f_IV == ((rt_int)1LL)))
{
l_KIND_767 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_765))) || (!(((*(R22 *)rt_nil_check(l_FT_765))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_763))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_766 == NULL)) goto L_end768;
{
r_ADD_FIELD(l_T_761, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_766))).f_NAME, l_FT_765, l_KIND_767), &l_TAIL_762);
l_N_766 = ((*(R21 *)rt_nil_check(l_N_766))).f_NEXT;
}
RT_B_TICK();
} L_end768: ;
}
}
l_F_763 = ((*(R21 *)rt_nil_check(l_F_763))).f_NEXT;
}
RT_B_TICK();
} L_end764: ;
}
r_RECORD_FIELDS(l_T_761, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_762);
r_COMPLETE_RECORD(l_T_761);
{ R22 * rv769 = l_T_761;
return rv769; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_770; memset(&l_D_770, 0, sizeof l_D_770);
l_D_770 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_771; memset(&l_CLASS_771, 0, sizeof l_CLASS_771);
l_CLASS_771 = NULL;
R20 * l_TARGS_772; memset(&l_TARGS_772, 0, sizeof l_TARGS_772);
l_TARGS_772 = NULL;
R25 * l_VARGS_773; memset(&l_VARGS_773, 0, sizeof l_VARGS_773);
l_VARGS_773 = NULL;
R25 * l_VTAIL_774; memset(&l_VTAIL_774, 0, sizeof l_VTAIL_774);
l_VTAIL_774 = NULL;
R21 * l_A_775; memset(&l_A_775, 0, sizeof l_A_775);
l_A_775 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_776; memset(&l_F_776, 0, sizeof l_F_776);
l_F_776 = ((*(R21 *)rt_nil_check(l_D_770))).f_A;
for (;;) {
if ((l_F_776 == NULL)) goto L_end777;
{
{
R21 * l_N_778; memset(&l_N_778, 0, sizeof l_N_778);
l_N_778 = ((*(R21 *)rt_nil_check(l_F_776))).f_A;
for (;;) {
if ((l_N_778 == NULL)) goto L_end779;
{
if ((l_A_775 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_776))).f_B == NULL))
{
{
R20 * l_B_780; memset(&l_B_780, 0, sizeof l_B_780);
l_B_780 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_780)), ({ R20 rc781; memset(&rc781, 0, sizeof rc781);  S_R10(&rc781.f_NAME, ((*(R21 *)rt_nil_check(l_N_778))).f_NAME, 0); rc781.f_T = r_ARG_TYPE(l_A_775); S_R10(&rc781.f_C, r_NO_TEXT(), 0); rc781.f_HASMV = 0; rc781.f_MV = ((rt_int)0LL); rc781.f_R = NULL; rc781.f_NEXT = l_TARGS_772; rc781; }), 0);
l_TARGS_772 = l_B_780;
}
}
else
{
{
R25 * l_V_782; memset(&l_V_782, 0, sizeof l_V_782);
l_V_782 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_782)), ({ R25 rc783; memset(&rc783, 0, sizeof rc783);  S_R10(&rc783.f_LO, r_NO_TEXT(), 0); S_R10(&rc783.f_HI, r_NO_TEXT(), 0); S_R23(&rc783.f_MLO, r_NO_MVAL(), 0); S_R23(&rc783.f_MHI, r_NO_MVAL(), 0); rc783.f_ANYARG = 0; rc783.f_NEXT = NULL; rc783; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_775))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_776))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_775))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_782))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_775))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_782))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_782))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_775))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_782))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_782))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_775))).f_NAME, (((*(R21 *)rt_nil_check(l_A_775))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_784; memset(&l_FT_784, 0, sizeof l_FT_784);
l_FT_784 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_776))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_782))).f_LO, (r_EXPR(l_A_775, l_FT_784)).f_C, 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_782))).f_MLO, r_ENUM_MANIFEST(l_A_775, l_FT_784), 0);
if (((((*(R21 *)rt_nil_check(l_F_776))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_782))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_775))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_774 == NULL))
{
l_VARGS_773 = l_V_782;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_774))).f_NEXT = l_V_782;
}
l_VTAIL_774 = l_V_782;
}
}
l_A_775 = ((*(R21 *)rt_nil_check(l_A_775))).f_NEXT;
l_N_778 = ((*(R21 *)rt_nil_check(l_N_778))).f_NEXT;
}
RT_B_TICK();
} L_end779: ;
}
l_F_776 = ((*(R21 *)rt_nil_check(l_F_776))).f_NEXT;
}
RT_B_TICK();
} L_end777: ;
if ((!(l_A_775 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_785; memset(&l_R_785, 0, sizeof l_R_785);
l_R_785 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_785 == NULL)) goto L_end786;
{
if (((((*(R12 *)rt_nil_check(l_R_785))).f_DECL == l_D_770) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_785))).f_BINDINGS, l_TARGS_772)))
{
l_CLASS_771 = ((*(R12 *)rt_nil_check(l_R_785))).f_T;
goto L_end786;
}
l_R_785 = ((*(R12 *)rt_nil_check(l_R_785))).f_INSTANCES;
}
RT_B_TICK();
} L_end786: ;
}
if ((l_CLASS_771 == NULL))
{
{
R12 * l_R_787; memset(&l_R_787, 0, sizeof l_R_787);
l_R_787 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_788; memset(&l_B_788, 0, sizeof l_B_788);
l_B_788 = l_TARGS_772;
R20 * l_SAVED_789; memset(&l_SAVED_789, 0, sizeof l_SAVED_789);
l_SAVED_789 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_790; memset(&l_ENTERED_790, 0, sizeof l_ENTERED_790);
((*(R12 *)rt_nil_check(l_R_787))).f_DECL = l_D_770;
((*(R12 *)rt_nil_check(l_R_787))).f_BINDINGS = l_TARGS_772;
((*(R12 *)rt_nil_check(l_R_787))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_787;
l_ENTERED_790 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_788 == NULL)) goto L_end791;
{
{
R12 * l_TY_792; memset(&l_TY_792, 0, sizeof l_TY_792);
l_TY_792 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_788))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_792))).f_T = ((*(R20 *)rt_nil_check(l_B_788))).f_T;
r_DEFINE(l_TY_792, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_788 = ((*(R20 *)rt_nil_check(l_B_788))).f_NEXT;
}
RT_B_TICK();
} L_end791: ;
l_F_776 = ((*(R21 *)rt_nil_check(l_D_770))).f_A;
for (;;) {
if ((l_F_776 == NULL)) goto L_end793;
{
if ((!(((*(R21 *)rt_nil_check(l_F_776))).f_B == NULL)))
{
{
R21 * l_N_794; memset(&l_N_794, 0, sizeof l_N_794);
l_N_794 = ((*(R21 *)rt_nil_check(l_F_776))).f_A;
for (;;) {
if ((l_N_794 == NULL)) goto L_end795;
{
{
R12 * l_P_796; memset(&l_P_796, 0, sizeof l_P_796);
l_P_796 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_794))).f_NAME);
((*(R12 *)rt_nil_check(l_P_796))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_776))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_796))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_794))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_796))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_796))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_796, ((*(R21 *)rt_nil_check(l_F_776))).f_LINE);
}
l_N_794 = ((*(R21 *)rt_nil_check(l_N_794))).f_NEXT;
}
RT_B_TICK();
} L_end795: ;
}
}
l_F_776 = ((*(R21 *)rt_nil_check(l_F_776))).f_NEXT;
}
RT_B_TICK();
} L_end793: ;
if ((l_TARGS_772 == NULL))
{
l_CLASS_771 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_770))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_770))).f_A);
}
else
{
l_CLASS_771 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_770))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_770))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_771))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_787))).f_T = l_CLASS_771;
r_CLOSE_SCOPE();
if (l_ENTERED_790)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_789;
}
}
{
R22 * l_T_797; memset(&l_T_797, 0, sizeof l_T_797);
l_T_797 = r_COPY_TYP(l_CLASS_771);
((*(R22 *)rt_nil_check(l_T_797))).f_ARGS = l_VARGS_773;
{ R22 * rv798 = l_T_797;
return rv798; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_799; memset(&l_P_799, 0, sizeof l_P_799);
l_P_799 = p_A;
R20 * l_Q_800; memset(&l_Q_800, 0, sizeof l_Q_800);
l_Q_800 = p_B;
for (;;) {
if (((l_P_799 == NULL) || (l_Q_800 == NULL))) goto L_end801;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_799))).f_T, ((*(R20 *)rt_nil_check(l_Q_800))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_799))).f_T, ((*(R20 *)rt_nil_check(l_Q_800))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_799))).f_T, ((*(R20 *)rt_nil_check(l_Q_800))).f_T))))
{
{ rt_int rv802 = 0;
return rv802; }
}
l_P_799 = ((*(R20 *)rt_nil_check(l_P_799))).f_NEXT;
l_Q_800 = ((*(R20 *)rt_nil_check(l_Q_800))).f_NEXT;
}
RT_B_TICK();
} L_end801: ;
{ rt_int rv803 = ((l_P_799 == NULL) && (l_Q_800 == NULL));
return rv803; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_804; memset(&l_A_804, 0, sizeof l_A_804);
l_A_804 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_804 == NULL)) goto L_end805;
{
if (((*(R25 *)rt_nil_check(l_A_804))).f_ANYARG)
{
{ rt_int rv806 = 1;
return rv806; }
}
l_A_804 = ((*(R25 *)rt_nil_check(l_A_804))).f_NEXT;
}
RT_B_TICK();
} L_end805: ;
{ rt_int rv807 = 0;
return rv807; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_808; memset(&l_L_808, 0, sizeof l_L_808);
l_L_808 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_809; memset(&l_C_809, 0, sizeof l_C_809);
S_R10(&l_C_809, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_810; memset(&l_TF_810, 0, sizeof l_TF_810);
l_TF_810 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_808 == NULL)) goto L_end811;
{
if ((((*(R21 *)rt_nil_check(l_L_808))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_809, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_809, p_SELF, ((*(R24 *)rt_nil_check(l_TF_810))).f_CNAME), 0);
S_R10(&l_C_809, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_809, (r_EXPR(((*(R21 *)rt_nil_check(l_L_808))).f_A, ((*(R24 *)rt_nil_check(l_TF_810))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_810))).f_CNAME), 0);
S_R10(&l_C_809, r_FMT2(rt_str("@@)", 3), l_C_809, (r_EXPR(((*(R21 *)rt_nil_check(l_L_808))).f_B, ((*(R24 *)rt_nil_check(l_TF_810))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_809, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_809, p_SELF, ((*(R24 *)rt_nil_check(l_TF_810))).f_CNAME, (r_EXPR(l_L_808, ((*(R24 *)rt_nil_check(l_TF_810))).f_T)).f_C), 0);
}
l_L_808 = ((*(R21 *)rt_nil_check(l_L_808))).f_NEXT;
}
RT_B_TICK();
} L_end811: ;
{ R10 rv812 = r_FMT1(rt_str("(@)", 3), l_C_809);
return rv812; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_813; memset(&l_C_813, 0, sizeof l_C_813);
S_R10(&l_C_813, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_814; memset(&l_F_814, 0, sizeof l_F_814);
l_F_814 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_815; memset(&l_BODY_815, 0, sizeof l_BODY_815);
S_R10(&l_BODY_815, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_816; memset(&l_ASSIGN_816, 0, sizeof l_ASSIGN_816);
S_R10(&l_ASSIGN_816, r_MK(rt_str("", 0)), 0);
R10 l_COPY_817; memset(&l_COPY_817, 0, sizeof l_COPY_817);
S_R10(&l_COPY_817, r_MK(rt_str("", 0)), 0);
R10 l_EQ_818; memset(&l_EQ_818, 0, sizeof l_EQ_818);
S_R10(&l_EQ_818, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_814 == NULL)) goto L_end819;
{
S_R10(&l_BODY_815, r_FMT3(rt_str("@ @ @;", 6), l_BODY_815, r_CTYPE(((*(R24 *)rt_nil_check(l_F_814))).f_T), ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME), 0);
S_R10(&l_COPY_817, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_817, ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_814))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_814))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_816, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_816, ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_814))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_816, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_816, ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_816, r_FMT2(rt_str("@ @", 3), l_ASSIGN_816, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_814))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_814))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_818, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_818, r_VARIANT_COND(l_F_814, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_814))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_818, r_FMT2(rt_str("@ && @", 6), l_EQ_818, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_814))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_814))).f_CNAME))), 0);
}
l_F_814 = ((*(R24 *)rt_nil_check(l_F_814))).f_NEXT;
}
RT_B_TICK();
} L_end819: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_813, l_BODY_815));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_813, l_C_813, l_C_813));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_813, l_C_813, l_C_813));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_813, l_C_813, l_C_813, l_ASSIGN_816));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_813, l_C_813, l_C_813, l_EQ_818));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_813, l_C_813, l_C_813));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_813, l_C_813, l_C_813, l_C_813));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_817));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_820; memset(&l_ET_C_820, 0, sizeof l_ET_C_820);
S_R10(&l_ET_C_820, r_CTYPE(p_ELEM), 0);
R10 l_KEY_821; memset(&l_KEY_821, 0, sizeof l_KEY_821);
S_R10(&l_KEY_821, r_FMT3(rt_str("@/@/@", 5), l_ET_C_820, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_822; memset(&l_Y_822, 0, sizeof l_Y_822);
l_Y_822 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_822 == NULL)) goto L_end823;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_822))).f_NAME, l_KEY_821) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_822))).f_T, p_ELEM)))
{
{ R10 rv824 = ((*(R12 *)rt_nil_check(l_Y_822))).f_ACCESS;
return rv824; }
}
l_Y_822 = ((*(R12 *)rt_nil_check(l_Y_822))).f_INSTANCES;
}
RT_B_TICK();
} L_end823: ;
l_Y_822 = r_NEW_SYM(g_Y_TYPE, l_KEY_821);
((*(R12 *)rt_nil_check(l_Y_822))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_822))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_822))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_822;
{
R10 l_C_825; memset(&l_C_825, 0, sizeof l_C_825);
S_R10(&l_C_825, ((*(R12 *)rt_nil_check(l_Y_822))).f_ACCESS, 0);
R10 l_D_826; memset(&l_D_826, 0, sizeof l_D_826);
S_R10(&l_D_826, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_825, l_C_825));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_825, l_D_826, l_D_826, l_ET_C_820));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_825, l_C_825, l_C_825));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_825, l_C_825, l_C_825));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_825, l_C_825, l_C_825, l_D_826));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_826, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_825, l_C_825, l_C_825, l_D_826));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_826, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_825, l_C_825, l_C_825));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_825, l_C_825, l_C_825, l_C_825));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_826, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv827 = ((*(R12 *)rt_nil_check(l_Y_822))).f_ACCESS;
return rv827; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_828; memset(&l_K_828, 0, sizeof l_K_828);
l_K_828 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_828 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv829 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv829; }
}
{ R10 rv830 = r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv830; }
}
else if ((l_K_828 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv831 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv831; }
}
{ R10 rv832 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv832; }
}
else if ((l_K_828 == g_T_SEM))
{
{ R10 rv833 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv833; }
}
else if ((l_K_828 == g_T_ABS))
{
{ R10 rv834 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv834; }
}
else if ((l_K_828 == g_T_ARR))
{
{
R25 * l_B_835; memset(&l_B_835, 0, sizeof l_B_835);
l_B_835 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_836; memset(&l_I_836, 0, sizeof l_I_836);
l_I_836 = ((rt_int)0LL);
R10 l_R_837; memset(&l_R_837, 0, sizeof l_R_837);
S_R10(&l_R_837, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_835 == NULL)) goto L_end838;
{
S_R10(&l_R_837, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_837, p_LV, r_NUM(l_I_836), ((*(R25 *)rt_nil_check(l_B_835))).f_LO), 0);
S_R10(&l_R_837, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_837, p_LV, r_NUM(l_I_836), ((*(R25 *)rt_nil_check(l_B_835))).f_HI), 0);
l_I_836 = rt_add(l_I_836, ((rt_int)1LL));
l_B_835 = ((*(R25 *)rt_nil_check(l_B_835))).f_NEXT;
}
RT_B_TICK();
} L_end838: ;
S_R10(&l_R_837, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_837, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_837, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_837, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_839; memset(&l_IV_839, 0, sizeof l_IV_839);
S_R10(&l_IV_839, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_837, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_837, l_IV_839, l_IV_839, l_IV_839), 0);
S_R10(&l_R_837, r_FMT2(rt_str("@ @ }", 5), l_R_837, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_839))), 0);
}
}
{ R10 rv840 = r_CATS(l_R_837, rt_str(" }", 2));
return rv840; }
}
}
else if ((l_K_828 == g_T_REC))
{
{
R24 * l_F_841; memset(&l_F_841, 0, sizeof l_F_841);
l_F_841 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_842; memset(&l_A_842, 0, sizeof l_A_842);
l_A_842 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_843; memset(&l_R_843, 0, sizeof l_R_843);
S_R10(&l_R_843, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_841 == NULL)) goto L_end844;
{
if ((!(((*(R24 *)rt_nil_check(l_F_841))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_842 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_842))).f_ANYARG))
{
S_R10(&l_R_843, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_843, p_LV, ((*(R24 *)rt_nil_check(l_F_841))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_842))).f_LO), 0);
}
l_A_842 = ((*(R25 *)rt_nil_check(l_A_842))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_841))).f_T))
{
S_R10(&l_R_843, r_FMT2(rt_str("@ @", 3), l_R_843, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_841))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_841))).f_CNAME)), p_LV)), 0);
}
l_F_841 = ((*(R24 *)rt_nil_check(l_F_841))).f_NEXT;
}
RT_B_TICK();
} L_end844: ;
{ R10 rv845 = l_R_843;
return rv845; }
}
}
{ R10 rv846 = r_NO_TEXT();
return rv846; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_847; memset(&l_K_847, 0, sizeof l_K_847);
l_K_847 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_847 == g_T_STR) || (l_K_847 == g_T_BITS)) || (l_K_847 == g_T_ARR)) || (l_K_847 == g_T_SEM)))
{
{ rt_int rv848 = 1;
return rv848; }
}
else if ((l_K_847 == g_T_ABS))
{
{ rt_int rv849 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv849; }
}
else if ((l_K_847 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv850 = 1;
return rv850; }
}
{
R24 * l_F_851; memset(&l_F_851, 0, sizeof l_F_851);
l_F_851 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_851 == NULL)) goto L_end852;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_851))).f_T))
{
{ rt_int rv853 = 1;
return rv853; }
}
l_F_851 = ((*(R24 *)rt_nil_check(l_F_851))).f_NEXT;
}
RT_B_TICK();
} L_end852: ;
}
}
{ rt_int rv854 = 0;
return rv854; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_855; memset(&l_K_855, 0, sizeof l_K_855);
l_K_855 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_855 == g_T_STR) || (l_K_855 == g_T_BITS)))
{
{ R10 rv856 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv856; }
}
else if ((l_K_855 == g_T_ABS))
{
{ R10 rv857 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv857; }
}
else if (((l_K_855 == g_T_ARR) || (l_K_855 == g_T_REC)))
{
{ R10 rv858 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv858; }
}
{ R10 rv859 = p_V;
return rv859; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_860; memset(&l_K_860, 0, sizeof l_K_860);
l_K_860 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_860 == g_T_STR) || (l_K_860 == g_T_BITS)))
{
{ R10 rv861 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv861; }
}
else if ((l_K_860 == g_T_ABS))
{
{ R10 rv862 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv862; }
}
else if ((l_K_860 == g_T_SEM))
{
{ R10 rv863 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv863; }
}
else if ((l_K_860 == g_T_ARR))
{
{ R10 rv864 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv864; }
}
else if ((l_K_860 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv865 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv865; }
}
{ R10 rv866 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv866; }
}
{ R10 rv867 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv867; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_868; memset(&l_K_868, 0, sizeof l_K_868);
l_K_868 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_868 == g_T_STR) || (l_K_868 == g_T_BITS)))
{
{ R10 rv869 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv869; }
}
else if ((l_K_868 == g_T_ABS))
{
{ R10 rv870 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv870; }
}
else if (((l_K_868 == g_T_ARR) || (l_K_868 == g_T_REC)))
{
{ R10 rv871 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv871; }
}
else if ((l_K_868 == g_T_SEM))
{
{ R10 rv872 = r_MK(rt_str("0", 1));
return rv872; }
}
{ R10 rv873 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv873; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv874 = p_V;
return rv874; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv875 = p_V;
return rv875; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv876 = p_V;
return rv876; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
{ R10 rv877 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv877; }
}
{ R10 rv878 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv878; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv879 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv879; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv880 = 1;
return rv880; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv881 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv881; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv882 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv882; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv883 = 0;
return rv883; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv884 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv884; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv885 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv885; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv886 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv886; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv887 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv887; }
}
{ rt_int rv888 = 1;
return rv888; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv889 = 1;
return rv889; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv890 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv890; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv891 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv891; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv892 = 0;
return rv892; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv893 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv893; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv894 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv894; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv895 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv895; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv896 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv896; }
}
{ rt_int rv897 = 1;
return rv897; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv898 = 0;
return rv898; }
}
{ rt_int rv899 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv899; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_900; memset(&l_P_900, 0, sizeof l_P_900);
l_P_900 = p_A;
R25 * l_Q_901; memset(&l_Q_901, 0, sizeof l_Q_901);
l_Q_901 = p_B;
for (;;) {
if (((l_P_900 == NULL) || (l_Q_901 == NULL))) goto L_end902;
{
if ((r_IS_GEN_ARG(l_P_900) || r_IS_GEN_ARG(l_Q_901)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_900))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_901))).f_ANYARG)))
{
{ rt_int rv903 = 0;
return rv903; }
}
if (((((*(R25 *)rt_nil_check(l_P_900))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_901))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_900))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_901))).f_MLO).f_V)))
{
{ rt_int rv904 = 0;
return rv904; }
}
}
l_P_900 = ((*(R25 *)rt_nil_check(l_P_900))).f_NEXT;
l_Q_901 = ((*(R25 *)rt_nil_check(l_Q_901))).f_NEXT;
}
RT_B_TICK();
} L_end902: ;
{ rt_int rv905 = ((l_P_900 == NULL) && (l_Q_901 == NULL));
return rv905; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_906; memset(&l_CS_906, 0, sizeof l_CS_906);
l_CS_906 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_907; memset(&l_T_907, 0, sizeof l_T_907);
rt_int l_LEV_908; memset(&l_LEV_908, 0, sizeof l_LEV_908);
if ((((*(R18 *)rt_nil_check(l_CS_906))).f_LEVEL == p_LEVEL))
{
{ R10 rv909 = r_MK(rt_str("F", 1));
return rv909; }
}
if (((*(R18 *)rt_nil_check(l_CS_906))).f_FRAMED)
{
S_R10(&l_T_907, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_907, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_908 = rt_sub(((*(R18 *)rt_nil_check(l_CS_906))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_908 <= p_LEVEL)) goto L_end910;
{
S_R10(&l_T_907, r_CATS(l_T_907, rt_str("->up", 4)), 0);
l_LEV_908 = rt_sub(l_LEV_908, ((rt_int)1LL));
}
RT_B_TICK();
} L_end910: ;
{ R10 rv911 = l_T_907;
return rv911; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv912 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv912; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv913 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv913; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv914 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv914; }
}
{ R10 rv915 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv915; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_916; memset(&l_CS_916, 0, sizeof l_CS_916);
l_CS_916 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_917; memset(&l_T_917, 0, sizeof l_T_917);
l_T_917 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_918; memset(&l_CN_918, 0, sizeof l_CN_918);
if ((((*(R18 *)rt_nil_check(l_CS_916))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_918, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_918, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_917), l_CN_918));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_918, 0);
{ R10 rv919 = l_CN_918;
return rv919; }
}
S_R10(&l_CN_918, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_918, 0);
if (((*(R18 *)rt_nil_check(l_CS_916))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_917), l_CN_918), &((*(R18 *)rt_nil_check(l_CS_916))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_918), 0);
{ R10 rv920 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv920; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_917), l_CN_918, l_CN_918, l_CN_918));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_918, 0);
{ R10 rv921 = l_CN_918;
return rv921; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_922; memset(&l_T_922, 0, sizeof l_T_922);
l_T_922 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_923; memset(&l_N_923, 0, sizeof l_N_923);
l_N_923 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_924; memset(&l_V_924, 0, sizeof l_V_924);
rt_int l_HAVE_V_925; memset(&l_HAVE_V_925, 0, sizeof l_HAVE_V_925);
l_HAVE_V_925 = 0;
if (((((*(R22 *)rt_nil_check(l_T_922))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_922))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_923 == NULL)) goto L_end926;
{
{
R12 * l_Y_927; memset(&l_Y_927, 0, sizeof l_Y_927);
l_Y_927 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_923))).f_NAME);
R10 l_CN_928; memset(&l_CN_928, 0, sizeof l_CN_928);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_927))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_927))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_922) && (((*(R22 *)rt_nil_check(l_T_922))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_929; memset(&l_M_929, 0, sizeof l_M_929);
S_R23(&l_M_929, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_927))).f_HASMV = (l_M_929).f_OK;
((*(R12 *)rt_nil_check(l_Y_927))).f_MV = (l_M_929).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_927))).f_T = l_T_922;
S_R10(&l_CN_928, r_NEW_OBJECT(l_Y_927, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_922))
{
r_CODE(r_INIT_CODE(l_T_922, l_CN_928));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_925))
{
S_R26(&l_V_924, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_922), 0);
l_HAVE_V_925 = 1;
}
r_CODE(r_STORE_CODE(l_T_922, l_CN_928, l_V_924, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_927, ((*(R21 *)rt_nil_check(l_N_923))).f_LINE);
}
l_N_923 = ((*(R21 *)rt_nil_check(l_N_923))).f_NEXT;
}
RT_B_TICK();
} L_end926: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv930 = ({ R26 rc931; memset(&rc931, 0, sizeof rc931);  S_R10(&rc931.f_C, p_C, 0); rc931.f_T = p_T; rc931.f_LVAL = 0; S_R10(&rc931.f_SELF, r_NO_TEXT(), 0); rc931; });
return rv930; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv932 = ({ R26 rc933; memset(&rc933, 0, sizeof rc933);  S_R10(&rc933.f_C, p_C, 0); rc933.f_T = p_T; rc933.f_LVAL = p_LVAL; S_R10(&rc933.f_SELF, p_SELF, 0); rc933; });
return rv932; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_934; memset(&l_T_934, 0, sizeof l_T_934);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv935 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv935; }
}
l_T_934 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_934))).f_SCALE = p_SCALE;
{ R22 * rv936 = l_T_934;
return rv936; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_937; memset(&l_T_937, 0, sizeof l_T_937);
l_T_937 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_937))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_937))).f_MLEN, p_M, 0);
{ R22 * rv938 = l_T_937;
return rv938; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_939; memset(&l_S_939, 0, sizeof l_S_939);
l_S_939 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_939, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_940; memset(&l_AT_940, 0, sizeof l_AT_940);
l_AT_940 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_941; memset(&l_R_941, 0, sizeof l_R_941);
S_R10(&l_R_941, r_MK(rt_str("\"", 1)), 0);
{ rt_int it943_lo = ((rt_int)0LL), it943_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it943 = it943_lo; it943 <= it943_hi; it943++) {
{
if ((rt_b_eq(rt_b_slice(l_S_939, it943, it943), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_939, it943, it943), rt_str("\\", 1))))
{
S_R10(&l_R_941, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_939, it943, it943))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_939, it943, it943), rt_str("\?", 1)))
{
S_R10(&l_R_941, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_944; memset(&l_C_944, 0, sizeof l_C_944);
l_C_944 = r_CODE_OF(rt_b_slice(l_S_939, it943, it943));
if (({ rt_int iv945 = l_C_944; (((rt_int)32LL) <= iv945) && (iv945 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_941, r_MK(rt_b_slice(l_S_939, it943, it943)), 0);
}
else
{
S_R10(&l_R_941, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_944, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_944, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_944, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it943 == it943_hi) break;
} } L_end942: ;
S_R10(&l_R_941, r_MK(rt_str("\"", 1)), 0);
{ R10 rv946 = ({ R10 rc947; memset(&rc947, 0, sizeof rc947);  rc947.f_AT = l_AT_940; rc947.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_940); rc947.f_H = rt_neg(((rt_int)1LL)); rc947; });
return rv946; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_948; memset(&l_K_948, 0, sizeof l_K_948);
l_K_948 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_949; memset(&l_NO_949, 0, sizeof l_NO_949);
S_R23(&l_NO_949, ({ R23 rc950; memset(&rc950, 0, sizeof rc950);  rc950.f_OK = 0; rc950.f_V = ((rt_int)0LL); rc950; }), 0);
if ((l_K_948 == g_N_INT))
{
{ R23 rv951 = ({ R23 rc952; memset(&rc952, 0, sizeof rc952);  rc952.f_OK = 1; rc952.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc952; });
return rv951; }
}
else if ((l_K_948 == g_N_PAREN))
{
{ R23 rv953 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv953; }
}
else if ((l_K_948 == g_N_BOOL))
{
{ R23 rv954 = ({ R23 rc955; memset(&rc955, 0, sizeof rc955);  rc955.f_OK = 1; rc955.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc955; });
return rv954; }
}
else if ((l_K_948 == g_N_UNOP))
{
{
R23 l_A_956; memset(&l_A_956, 0, sizeof l_A_956);
S_R23(&l_A_956, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
{ R23 rv957 = ({ R23 rc958; memset(&rc958, 0, sizeof rc958);  rc958.f_OK = (l_A_956).f_OK; rc958.f_V = rt_neg((l_A_956).f_V); rc958; });
return rv957; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv959 = l_A_956;
return rv959; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv960 = ({ R23 rc961; memset(&rc961, 0, sizeof rc961);  rc961.f_OK = (l_A_956).f_OK; rc961.f_V = rt_sub(((rt_int)1LL), (l_A_956).f_V); rc961; });
return rv960; }
}
}
}
else if ((l_K_948 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv962 = l_NO_949;
return rv962; }
}
{
R23 l_A_963; memset(&l_A_963, 0, sizeof l_A_963);
S_R23(&l_A_963, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_964; memset(&l_B_964, 0, sizeof l_B_964);
S_R23(&l_B_964, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_965; memset(&l_OP_965, 0, sizeof l_OP_965);
S_R10(&l_OP_965, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_965, rt_str("&", 1)) && (l_A_963).f_OK))
{
if (((l_A_963).f_V == ((rt_int)0LL)))
{
{ R23 rv966 = l_A_963;
return rv966; }
}
{ R23 rv967 = l_B_964;
return rv967; }
}
else if ((r_TEQS(l_OP_965, rt_str("!", 1)) && (l_A_963).f_OK))
{
if (((l_A_963).f_V == ((rt_int)1LL)))
{
{ R23 rv968 = l_A_963;
return rv968; }
}
{ R23 rv969 = l_B_964;
return rv969; }
}
if ((!(((l_A_963).f_OK && (l_B_964).f_OK))))
{
{ R23 rv970 = l_NO_949;
return rv970; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv971 = l_NO_949;
return rv971; }
}
if (r_TEQS(l_OP_965, rt_str("+", 1)))
{
{ R23 rv972 = ({ R23 rc973; memset(&rc973, 0, sizeof rc973);  rc973.f_OK = 1; rc973.f_V = rt_add((l_A_963).f_V, (l_B_964).f_V); rc973; });
return rv972; }
}
else if (r_TEQS(l_OP_965, rt_str("-", 1)))
{
{ R23 rv974 = ({ R23 rc975; memset(&rc975, 0, sizeof rc975);  rc975.f_OK = 1; rc975.f_V = rt_sub((l_A_963).f_V, (l_B_964).f_V); rc975; });
return rv974; }
}
else if (r_TEQS(l_OP_965, rt_str("*", 1)))
{
{ R23 rv976 = ({ R23 rc977; memset(&rc977, 0, sizeof rc977);  rc977.f_OK = 1; rc977.f_V = rt_mul((l_A_963).f_V, (l_B_964).f_V); rc977; });
return rv976; }
}
else if ((r_TEQS(l_OP_965, rt_str("//", 2)) && (!((l_B_964).f_V == ((rt_int)0LL)))))
{
{ R23 rv978 = ({ R23 rc979; memset(&rc979, 0, sizeof rc979);  rc979.f_OK = 1; rc979.f_V = rt_quot((l_A_963).f_V, (l_B_964).f_V); rc979; });
return rv978; }
}
else if ((r_TEQS(l_OP_965, rt_str("MOD", 3)) && (!((l_B_964).f_V == ((rt_int)0LL)))))
{
{ R23 rv980 = ({ R23 rc981; memset(&rc981, 0, sizeof rc981);  rc981.f_OK = 1; rc981.f_V = rt_rem((l_A_963).f_V, (l_B_964).f_V); rc981; });
return rv980; }
}
else if (r_TEQS(l_OP_965, rt_str("=", 1)))
{
{ R23 rv982 = ({ R23 rc983; memset(&rc983, 0, sizeof rc983);  rc983.f_OK = 1; rc983.f_V = r_BOOL_INT(((l_A_963).f_V == (l_B_964).f_V)); rc983; });
return rv982; }
}
else if (r_TEQS(l_OP_965, rt_str("<>", 2)))
{
{ R23 rv984 = ({ R23 rc985; memset(&rc985, 0, sizeof rc985);  rc985.f_OK = 1; rc985.f_V = r_BOOL_INT((!((l_A_963).f_V == (l_B_964).f_V))); rc985; });
return rv984; }
}
else if (r_TEQS(l_OP_965, rt_str("<", 1)))
{
{ R23 rv986 = ({ R23 rc987; memset(&rc987, 0, sizeof rc987);  rc987.f_OK = 1; rc987.f_V = r_BOOL_INT(((l_A_963).f_V < (l_B_964).f_V)); rc987; });
return rv986; }
}
else if (r_TEQS(l_OP_965, rt_str(">", 1)))
{
{ R23 rv988 = ({ R23 rc989; memset(&rc989, 0, sizeof rc989);  rc989.f_OK = 1; rc989.f_V = r_BOOL_INT(((l_A_963).f_V > (l_B_964).f_V)); rc989; });
return rv988; }
}
else if (r_TEQS(l_OP_965, rt_str("<=", 2)))
{
{ R23 rv990 = ({ R23 rc991; memset(&rc991, 0, sizeof rc991);  rc991.f_OK = 1; rc991.f_V = r_BOOL_INT(((l_A_963).f_V <= (l_B_964).f_V)); rc991; });
return rv990; }
}
else if (r_TEQS(l_OP_965, rt_str(">=", 2)))
{
{ R23 rv992 = ({ R23 rc993; memset(&rc993, 0, sizeof rc993);  rc993.f_OK = 1; rc993.f_V = r_BOOL_INT(((l_A_963).f_V >= (l_B_964).f_V)); rc993; });
return rv992; }
}
}
}
else if ((l_K_948 == g_N_IN))
{
{
R23 l_A_994; memset(&l_A_994, 0, sizeof l_A_994);
S_R23(&l_A_994, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_995; memset(&l_L_995, 0, sizeof l_L_995);
S_R23(&l_L_995, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_996; memset(&l_U_996, 0, sizeof l_U_996);
S_R23(&l_U_996, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_997; memset(&l_LO_997, 0, sizeof l_LO_997);
rt_int l_HI_998; memset(&l_HI_998, 0, sizeof l_HI_998);
if ((!(((((l_A_994).f_OK && (l_L_995).f_OK) && (l_U_996).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv999 = l_NO_949;
return rv999; }
}
l_LO_997 = (l_L_995).f_V;
l_HI_998 = (l_U_996).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_997 = rt_add(l_LO_997, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_998 = rt_sub(l_HI_998, ((rt_int)1LL));
}
{ R23 rv1000 = ({ R23 rc1001; memset(&rc1001, 0, sizeof rc1001);  rc1001.f_OK = 1; rc1001.f_V = r_BOOL_INT((((l_A_994).f_V >= l_LO_997) && ((l_A_994).f_V <= l_HI_998))); rc1001; });
return rv1000; }
}
}
else if (((l_K_948 == g_N_NAME) || (l_K_948 == g_TS_GEN)))
{
{
R12 * l_Y_1002; memset(&l_Y_1002, 0, sizeof l_Y_1002);
l_Y_1002 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1003; memset(&l_B_1003, 0, sizeof l_B_1003);
l_B_1003 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1003 == NULL)) goto L_end1004;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1003))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1003))).f_HASMV))
{
{ R23 rv1005 = ({ R23 rc1006; memset(&rc1006, 0, sizeof rc1006);  rc1006.f_OK = 1; rc1006.f_V = ((*(R20 *)rt_nil_check(l_B_1003))).f_MV; rc1006; });
return rv1005; }
}
l_B_1003 = ((*(R20 *)rt_nil_check(l_B_1003))).f_NEXT;
}
RT_B_TICK();
} L_end1004: ;
if ((!(l_Y_1002 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1002))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1002))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1002))).f_HASMV))
{
{ R23 rv1007 = ({ R23 rc1008; memset(&rc1008, 0, sizeof rc1008);  rc1008.f_OK = 1; rc1008.f_V = ((*(R12 *)rt_nil_check(l_Y_1002))).f_MV; rc1008; });
return rv1007; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1002))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1009 = ({ R23 rc1010; memset(&rc1010, 0, sizeof rc1010);  rc1010.f_OK = 1; rc1010.f_V = ((*(R12 *)rt_nil_check(l_Y_1002))).f_MV; rc1010; });
return rv1009; }
}
}
}
}
}
else if ((l_K_948 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1011 = ({ R23 rc1012; memset(&rc1012, 0, sizeof rc1012);  rc1012.f_OK = 1; rc1012.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1012; });
return rv1011; }
}
}
else if ((l_K_948 == g_N_FIELD))
{
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SCALE", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RADIX", 5)))) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_1013; memset(&l_Y_1013, 0, sizeof l_Y_1013);
l_Y_1013 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_1013 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1013))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1013))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1013))).f_KIND == g_Y_TYPE))) && (!(((*(R12 *)rt_nil_check(l_Y_1013))).f_T == NULL))))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_1013))).f_T)))).f_KIND == g_T_INT))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1014 = ({ R23 rc1015; memset(&rc1015, 0, sizeof rc1015);  rc1015.f_OK = 1; rc1015.f_V = ((rt_int)2LL); rc1015; });
return rv1014; }
}
{ R23 rv1016 = ({ R23 rc1017; memset(&rc1017, 0, sizeof rc1017);  rc1017.f_OK = 1; rc1017.f_V = ((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_1013))).f_T)))).f_SCALE; rc1017; });
return rv1016; }
}
}
}
}
}
}
else if ((l_K_948 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1018 = ({ R23 rc1019; memset(&rc1019, 0, sizeof rc1019);  rc1019.f_OK = 1; rc1019.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1019; });
return rv1018; }
}
}
{ R23 rv1020 = l_NO_949;
return rv1020; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1021 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1021; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1022 = ((rt_int)1LL);
return rv1022; }
}
{ rt_int rv1023 = ((rt_int)0LL);
return rv1023; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1024; memset(&l_K_1024, 0, sizeof l_K_1024);
l_K_1024 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1024 == g_N_INT))
{
{ R26 rv1025 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1025; }
}
else if ((l_K_1024 == g_N_REAL))
{
{ R26 rv1026 = r_REAL_LITERAL(p_E);
return rv1026; }
}
else if ((l_K_1024 == g_N_BOOL))
{
{ R26 rv1027 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1027; }
}
else if ((l_K_1024 == g_N_NIL))
{
{ R26 rv1028 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1028; }
}
else if ((l_K_1024 == g_N_PAREN))
{
{
R26 l_V_1029; memset(&l_V_1029, 0, sizeof l_V_1029);
S_R26(&l_V_1029, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1029).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1029).f_C), 0);
{ R26 rv1030 = l_V_1029;
return rv1030; }
}
}
else if ((l_K_1024 == g_N_STR))
{
{ R26 rv1031 = r_STRING_LITERAL(p_E);
return rv1031; }
}
else if ((l_K_1024 == g_N_BITS))
{
{ R26 rv1032 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1032; }
}
else if ((l_K_1024 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1033 = r_NAME_EXPR(p_E, p_WANT);
return rv1033; }
}
{ R26 rv1034 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1034; }
}
else if ((l_K_1024 == g_N_RECCONS))
{
{ R26 rv1035 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1035; }
}
else if ((l_K_1024 == g_N_ARRCONS))
{
{ R26 rv1036 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1036; }
}
else if ((l_K_1024 == g_N_TYPESPEC))
{
{ R26 rv1037 = r_TYPE_SPECIFIER(p_E);
return rv1037; }
}
else if ((l_K_1024 == g_N_QUAL))
{
{
rt_int l_SAVED_1038; memset(&l_SAVED_1038, 0, sizeof l_SAVED_1038);
l_SAVED_1038 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1039; memset(&l_V_1039, 0, sizeof l_V_1039);
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
S_R26(&l_V_1039, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1038;
{ R26 rv1040 = l_V_1039;
return rv1040; }
}
}
else if ((l_K_1024 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1041; memset(&l_N_1041, 0, sizeof l_N_1041);
l_N_1041 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1041))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1041))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1042 = r_EXPR(l_N_1041, p_WANT);
return rv1042; }
}
}
{ R26 rv1043 = r_NEW_EXPR(p_E, p_WANT);
return rv1043; }
}
else if ((l_K_1024 == g_N_NAME))
{
{ R26 rv1044 = r_NAME_EXPR(p_E, p_WANT);
return rv1044; }
}
else if ((l_K_1024 == g_N_APPLY))
{
{
R12 * l_Y_1045; memset(&l_Y_1045, 0, sizeof l_Y_1045);
l_Y_1045 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1045 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1045))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1045))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1046; memset(&l_N_1046, 0, sizeof l_N_1046);
l_N_1046 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1047; memset(&l_A_1047, 0, sizeof l_A_1047);
l_A_1047 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1047))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1046))).f_A = l_A_1047;
((*(R21 *)rt_nil_check(l_N_1046))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1048 = r_EXPR(l_N_1046, p_WANT);
return rv1048; }
}
}
}
{ R26 rv1049 = r_CALL_EXPR(p_E, p_WANT);
return rv1049; }
}
}
else if ((l_K_1024 == g_N_FIELD))
{
{ R26 rv1050 = r_FIELD_EXPR(p_E);
return rv1050; }
}
else if ((l_K_1024 == g_N_DEREF))
{
{
R26 l_B_1051; memset(&l_B_1051, 0, sizeof l_B_1051);
S_R26(&l_B_1051, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1051).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1052; memset(&l_TT_1052, 0, sizeof l_TT_1052);
l_TT_1052 = r_TARGET((l_B_1051).f_T);
{ R26 rv1053 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1052), (l_B_1051).f_C), l_TT_1052, 1, r_NO_TEXT());
return rv1053; }
}
}
}
else if ((l_K_1024 == g_N_INDEX))
{
{ R26 rv1054 = r_INDEX_EXPR(p_E);
return rv1054; }
}
else if ((l_K_1024 == g_N_SUBSTR))
{
{
R26 l_B_1055; memset(&l_B_1055, 0, sizeof l_B_1055);
S_R26(&l_B_1055, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1056; memset(&l_BT_1056, 0, sizeof l_BT_1056);
l_BT_1056 = r_REAL_TYPE((l_B_1055).f_T);
R10 l_LO_1057; memset(&l_LO_1057, 0, sizeof l_LO_1057);
R10 l_HI_1058; memset(&l_HI_1058, 0, sizeof l_HI_1058);
if ((!(((((*(R22 *)rt_nil_check(l_BT_1056))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1056))).f_KIND == g_T_BITS)))))
{
if ((((*(R22 *)rt_nil_check((l_B_1055).f_T))).f_KIND == g_T_ABS))
{
{ R26 rv1059 = r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_1055, ((*(R21 *)rt_nil_check(p_E))).f_B, ((*(R21 *)rt_nil_check(p_E))).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1059; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1057, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1058, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1056))).f_KIND == g_T_BITS))
{
{ R26 rv1060 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1055).f_C, l_LO_1057, l_HI_1058), r_BITS_TYPE(((rt_int)1LL)));
return rv1060; }
}
{
R22 * l_T_1061; memset(&l_T_1061, 0, sizeof l_T_1061);
l_T_1061 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1061))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1056))).f_BASE;
{ R26 rv1062 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1055).f_C, l_LO_1057, l_HI_1058), l_T_1061);
return rv1062; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1056))).f_KIND == g_T_BITS))
{
{ R26 rv1063 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1055).f_C, l_LO_1057, l_HI_1058), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1063; }
}
{
R22 * l_T_1064; memset(&l_T_1064, 0, sizeof l_T_1064);
l_T_1064 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1064))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1056))).f_BASE;
{ R26 rv1065 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1055).f_C, l_LO_1057, l_HI_1058), l_T_1064);
return rv1065; }
}
}
}
else if ((l_K_1024 == g_N_UNOP))
{
{ R26 rv1066 = r_UNARY(p_E);
return rv1066; }
}
else if ((l_K_1024 == g_N_BINOP))
{
{ R26 rv1067 = r_BINARY(p_E);
return rv1067; }
}
else if ((l_K_1024 == g_N_IN))
{
{ R26 rv1068 = r_IN_EXPR(p_E);
return rv1068; }
}
else if (((l_K_1024 == g_N_ANY) || (l_K_1024 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1024 == g_TS_GEN))
{
{
R21 * l_N_1069; memset(&l_N_1069, 0, sizeof l_N_1069);
l_N_1069 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1069))).f_NAME, r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1069))).f_NAME))
{
{ R26 rv1070 = r_NAME_EXPR(l_N_1069, p_WANT);
return rv1070; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1024 == g_TS_NAME) || (l_K_1024 == g_TS_ARRAY)) || (l_K_1024 == g_TS_RECORD)) || (l_K_1024 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1071; memset(&l_SAVED_1071, 0, sizeof l_SAVED_1071);
l_SAVED_1071 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1072; memset(&l_V_1072, 0, sizeof l_V_1072);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R26(&l_V_1072, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1071;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1072).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1073 = (l_V_1072).f_C;
return rv1073; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1072).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1072).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1072).f_T));
}
{ R10 rv1074 = (l_V_1072).f_C;
return rv1074; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1075; memset(&l_V_1075, 0, sizeof l_V_1075);
S_R26(&l_V_1075, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1075).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1075).f_T));
}
{ R10 rv1076 = (l_V_1075).f_C;
return rv1076; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1077; memset(&l_T_1077, 0, sizeof l_T_1077);
l_T_1077 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1077))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1077))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1078 = l_T_1077;
return rv1078; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1079; memset(&l_T_1079, 0, sizeof l_T_1079);
S_R10(&l_T_1079, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1080; memset(&l_S_1080, 0, sizeof l_S_1080);
l_S_1080 = rt_str_new((l_T_1079).f_LEN);
rt_b_assign(&l_S_1080, r_STR(l_T_1079, (l_T_1079).f_LEN));
rt_int l_POINT_1081; memset(&l_POINT_1081, 0, sizeof l_POINT_1081);
l_POINT_1081 = 0;
rt_int l_DIGITS_1082; memset(&l_DIGITS_1082, 0, sizeof l_DIGITS_1082);
l_DIGITS_1082 = ((rt_int)0LL);
{ rt_int it1084_lo = ((rt_int)0LL), it1084_hi = rt_sub((l_T_1079).f_LEN, ((rt_int)1LL));
for (rt_int it1084 = it1084_lo; it1084 <= it1084_hi; it1084++) {
{
if (rt_b_eq(rt_b_slice(l_S_1080, it1084, it1084), rt_str(".", 1)))
{
l_POINT_1081 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1080, it1084, it1084), rt_str("E", 1)))
{
goto L_end1083;
}
else
{
l_DIGITS_1082 = rt_add(l_DIGITS_1082, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1084 == it1084_hi) break;
} } L_end1083: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1081)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1085 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1079), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1085; }
}
if ((!l_POINT_1081))
{
{ R26 rv1086 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1079)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1086; }
}
{
R22 * l_F_1087; memset(&l_F_1087, 0, sizeof l_F_1087);
l_F_1087 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_F_1087))).f_SCALE = l_DIGITS_1082;
if ((l_DIGITS_1082 > ((rt_int)15LL)))
{
((*(R22 *)rt_nil_check(l_F_1087))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_1082 < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1087))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_1080, rt_sub((l_T_1079).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1079).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
{ R26 rv1088 = r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_1079), l_F_1087);
return rv1088; }
}
if (rt_b_eq(rt_b_slice(l_S_1080, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
{ R26 rv1089 = r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_1079), l_F_1087);
return rv1089; }
}
{ R26 rv1090 = r_MKET(r_FMT1(rt_str("(@)", 3), l_T_1079), l_F_1087);
return rv1090; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1091; memset(&l_T_1091, 0, sizeof l_T_1091);
S_R10(&l_T_1091, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1092; memset(&l_S_1092, 0, sizeof l_S_1092);
l_S_1092 = rt_str_new((l_T_1091).f_LEN);
rt_b_assign(&l_S_1092, r_STR(l_T_1091, (l_T_1091).f_LEN));
rt_int l_SIG_1093; memset(&l_SIG_1093, 0, sizeof l_SIG_1093);
l_SIG_1093 = ((rt_int)0LL);
rt_int l_FRAC_1094; memset(&l_FRAC_1094, 0, sizeof l_FRAC_1094);
l_FRAC_1094 = ((rt_int)0LL);
rt_int l_POINT_1095; memset(&l_POINT_1095, 0, sizeof l_POINT_1095);
l_POINT_1095 = 0;
rt_int l_EXP_1096; memset(&l_EXP_1096, 0, sizeof l_EXP_1096);
l_EXP_1096 = ((rt_int)0LL);
rt_int l_I_1097; memset(&l_I_1097, 0, sizeof l_I_1097);
l_I_1097 = ((rt_int)0LL);
for (;;) {
if ((l_I_1097 >= (l_T_1091).f_LEN)) goto L_end1098;
{
if (rt_b_eq(rt_b_slice(l_S_1092, l_I_1097, l_I_1097), rt_str("E", 1)))
{
goto L_end1098;
}
if (rt_b_eq(rt_b_slice(l_S_1092, l_I_1097, l_I_1097), rt_str(".", 1)))
{
l_POINT_1095 = 1;
}
else
{
if (((l_SIG_1093 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1092, l_I_1097, l_I_1097), rt_str("0", 1)))))
{
l_SIG_1093 = rt_add(l_SIG_1093, ((rt_int)1LL));
}
if (l_POINT_1095)
{
l_FRAC_1094 = rt_add(l_FRAC_1094, ((rt_int)1LL));
}
}
l_I_1097 = rt_add(l_I_1097, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1098: ;
if ((rt_sub(l_I_1097, r_BOOL_INT(l_POINT_1095)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1097 < (l_T_1091).f_LEN))
{
{
rt_int l_NEG_1099; memset(&l_NEG_1099, 0, sizeof l_NEG_1099);
l_NEG_1099 = 0;
l_I_1097 = rt_add(l_I_1097, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1092, l_I_1097, l_I_1097), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1092, l_I_1097, l_I_1097), rt_str("+", 1))))
{
l_NEG_1099 = rt_b_eq(rt_b_slice(l_S_1092, l_I_1097, l_I_1097), rt_str("-", 1));
l_I_1097 = rt_add(l_I_1097, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1097 >= (l_T_1091).f_LEN)) goto L_end1100;
{
if ((l_EXP_1096 <= ((rt_int)1000LL)))
{
l_EXP_1096 = rt_sub(rt_add(rt_mul(l_EXP_1096, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1092, l_I_1097, l_I_1097))), ((rt_int)48LL));
}
l_I_1097 = rt_add(l_I_1097, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1100: ;
if ((l_EXP_1096 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1099)
{
l_EXP_1096 = rt_neg(l_EXP_1096);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1093 > ((rt_int)0LL)))
{
{
rt_int l_P10_1101; memset(&l_P10_1101, 0, sizeof l_P10_1101);
l_P10_1101 = rt_sub(rt_add(rt_sub(l_SIG_1093, ((rt_int)1LL)), l_EXP_1096), l_FRAC_1094);
rt_int l_BITS_1102; memset(&l_BITS_1102, 0, sizeof l_BITS_1102);
l_BITS_1102 = rt_add(rt_quot((rt_mul(l_P10_1101, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1101 < ((rt_int)0LL)))
{
l_BITS_1102 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1101), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1102 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1103; memset(&l_CS_1103, 0, sizeof l_CS_1103);
l_CS_1103 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1104; memset(&l_P_1104, 0, sizeof l_P_1104);
l_P_1104 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1105; memset(&l_S_1105, 0, sizeof l_S_1105);
S_R10(&l_S_1105, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1106; memset(&l_Y_1106, 0, sizeof l_Y_1106);
l_Y_1106 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1106 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1106))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1103 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1103)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1103 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1103)))).f_BASE;
}
}
for (;;) {
if ((l_P_1104 == NULL)) goto L_end1107;
{
if ((((*(R21 *)rt_nil_check(l_P_1104))).f_IV == g_K_STR))
{
if ((l_CS_1103 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1105, r_CAT(l_S_1105, ((*(R21 *)rt_nil_check(l_P_1104))).f_NAME), 0);
}
else
{
{
R10 l_Q_1108; memset(&l_Q_1108, 0, sizeof l_Q_1108);
S_R10(&l_Q_1108, ((*(R21 *)rt_nil_check(l_P_1104))).f_NAME, 0);
rstr l_QS_1109; memset(&l_QS_1109, 0, sizeof l_QS_1109);
l_QS_1109 = rt_str_new((l_Q_1108).f_LEN);
rt_b_assign(&l_QS_1109, r_STR(l_Q_1108, (l_Q_1108).f_LEN));
{ rt_int it1111_lo = ((rt_int)0LL), it1111_hi = rt_sub((l_Q_1108).f_LEN, ((rt_int)1LL));
for (rt_int it1111 = it1111_lo; it1111 <= it1111_hi; it1111++) {
{
{
R10 l_LIT_1112; memset(&l_LIT_1112, 0, sizeof l_LIT_1112);
R12 * l_Y_1113; memset(&l_Y_1113, 0, sizeof l_Y_1113);
if (rt_b_eq(rt_b_slice(l_QS_1109, it1111, it1111), rt_str("'", 1)))
{
S_R10(&l_LIT_1112, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1112, r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1109, it1111, it1111)), rt_str("'", 1))), 0);
}
l_Y_1113 = r_FIND_LITERAL(l_LIT_1112, l_CS_1103);
if ((l_Y_1113 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1104))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1109, it1111, it1111)));
}
S_R10(&l_S_1105, r_CATS(l_S_1105, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1113))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1111 == it1111_hi) break;
} } L_end1110: ;
}
}
}
else
{
{
R12 * l_Y_1114; memset(&l_Y_1114, 0, sizeof l_Y_1114);
l_Y_1114 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1104))).f_NAME, l_CS_1103);
if ((l_Y_1114 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1104))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1104))).f_NAME);
}
S_R10(&l_S_1105, r_CATS(l_S_1105, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1114))).f_MV)), 0);
}
}
l_P_1104 = ((*(R21 *)rt_nil_check(l_P_1104))).f_NEXT;
}
RT_B_TICK();
} L_end1107: ;
{
R22 * l_T_1115; memset(&l_T_1115, 0, sizeof l_T_1115);
l_T_1115 = r_STR_TYPE(r_NUM((l_S_1105).f_LEN), r_SOME((l_S_1105).f_LEN));
((*(R22 *)rt_nil_check(l_T_1115))).f_BASE = l_CS_1103;
{ R26 rv1116 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1105), r_NUM((l_S_1105).f_LEN)), l_T_1115);
return rv1116; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1117; memset(&l_TS_1117, 0, sizeof l_TS_1117);
l_TS_1117 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1117))).f_NAME, p_NAME, 0);
{ R22 * rv1118 = r_RESOLVE(l_TS_1117);
return rv1118; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1119; memset(&l_Y_1119, 0, sizeof l_Y_1119);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1120; memset(&l_WT_1120, 0, sizeof l_WT_1120);
l_WT_1120 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1120))).f_KIND == g_T_ENUM))
{
l_Y_1119 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1120);
if ((!(l_Y_1119 == NULL)))
{
{ R26 rv1121 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1119))).f_MV), r_ENUM_RESULT(l_Y_1119, p_WANT));
return rv1121; }
}
}
}
}
l_Y_1119 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1122; memset(&l_FOUND_1122, 0, sizeof l_FOUND_1122);
l_FOUND_1122 = NULL;
rt_int l_N_1123; memset(&l_N_1123, 0, sizeof l_N_1123);
l_N_1123 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1119 == NULL)) goto L_end1124;
{
if ((((*(R12 *)rt_nil_check(l_Y_1119))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1119))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1122 == NULL)))
{
if (((l_FOUND_1122 == NULL) || (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1122))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1122 = l_Y_1119;
}
else
{
l_N_1123 = rt_add(l_N_1123, ((rt_int)1LL));
}
}
}
l_Y_1119 = r_LOOKUP_NEXT(l_Y_1119);
}
RT_B_TICK();
} L_end1124: ;
if ((l_FOUND_1122 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1123 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1125 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1122))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1122))).f_T);
return rv1125; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1126 = p_WANT;
return rv1126; }
}
{ R22 * rv1127 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1127; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1128; memset(&l_Y_1128, 0, sizeof l_Y_1128);
l_Y_1128 = r_LOOKUP(p_NAME);
if ((l_Y_1128 == NULL))
{
{ rt_int rv1129 = 0;
return rv1129; }
}
{ rt_int rv1130 = (((((*(R12 *)rt_nil_check(l_Y_1128))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1128))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1128))).f_KIND == g_Y_ROUTINE));
return rv1130; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1131; memset(&l_Y_1131, 0, sizeof l_Y_1131);
l_Y_1131 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1131 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1131))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1131))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1132; memset(&l_WRITABLE_1132, 0, sizeof l_WRITABLE_1132);
l_WRITABLE_1132 = r_CHECK_IMPORTED(l_Y_1131, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1133 = r_MKLV(r_OBJ_ACCESS(l_Y_1131), ((*(R12 *)rt_nil_check(l_Y_1131))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1131))).f_KIND == g_Y_VAR) && l_WRITABLE_1132), r_NO_TEXT());
return rv1133; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1131))).f_KIND == g_Y_GEN))
{
{ R26 rv1134 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1131))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1131))).f_T);
return rv1134; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1131))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1135 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1135; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1131))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1131))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1136; memset(&l_N_1136, 0, sizeof l_N_1136);
l_N_1136 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1136))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1137 = r_CALL_EXPR(l_N_1136, p_WANT);
return rv1137; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1138; memset(&l_A_1138, 0, sizeof l_A_1138);
l_A_1138 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((*(R21 *)rt_nil_check(l_A_1138))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1138))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1138))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1139; memset(&l_B_1139, 0, sizeof l_B_1139);
S_R26(&l_B_1139, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1138))).f_A))).f_A), 0);
R10 l_I_1140; memset(&l_I_1140, 0, sizeof l_I_1140);
S_R10(&l_I_1140, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1138))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1139).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1141 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1139).f_C, l_I_1140, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1139).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1141; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1142 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1139).f_C, l_I_1140, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1139).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1142; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1138))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1138))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1138))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1138))).f_A))).f_A))).f_NAME))
{
{ R26 rv1143 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1138))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1138))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1143; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1138))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1144; memset(&l_Y_1144, 0, sizeof l_Y_1144);
l_Y_1144 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1138))).f_NAME);
if ((!(l_Y_1144 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1144))).f_KIND == g_Y_TYPE))
{
{ R26 rv1145 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1138))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1145; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1138))).f_NAME))
{
{ R26 rv1146 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1138))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1146; }
}
}
}
{
R26 l_B_1147; memset(&l_B_1147, 0, sizeof l_B_1147);
S_R26(&l_B_1147, r_EXPR(l_A_1138, NULL), 0);
R22 * l_BT_1148; memset(&l_BT_1148, 0, sizeof l_BT_1148);
l_BT_1148 = (l_B_1147).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1148))).f_KIND == g_T_REC))
{
{
R24 * l_F_1149; memset(&l_F_1149, 0, sizeof l_F_1149);
l_F_1149 = r_FIND_VFIELD(l_BT_1148, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1149 == NULL)))
{
r_CHECK_VARIANT(l_F_1149, l_BT_1148, l_A_1138, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1150 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1147).f_C, ((*(R24 *)rt_nil_check(l_F_1149))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1149))).f_T, ((l_B_1147).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1149))).f_KIND == ((rt_int)0LL))), (l_B_1147).f_C);
return rv1150; }
}
}
}
{ R26 rv1151 = r_ATTRIBUTE(l_B_1147, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1151; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1152 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1152; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1153; memset(&l_TAGV_1153, 0, sizeof l_TAGV_1153);
S_R23(&l_TAGV_1153, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1153).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1153).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1154; memset(&l_F_1154, 0, sizeof l_F_1154);
l_F_1154 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1155; memset(&l_A_1155, 0, sizeof l_A_1155);
l_A_1155 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1154 == NULL)) goto L_end1156;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1154))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1155 == NULL))
{
{ R23 rv1157 = r_NO_MVAL();
return rv1157; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1154))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1155))).f_ANYARG)
{
{ R23 rv1158 = r_NO_MVAL();
return rv1158; }
}
{ R23 rv1159 = ((*(R25 *)rt_nil_check(l_A_1155))).f_MLO;
return rv1159; }
}
l_A_1155 = ((*(R25 *)rt_nil_check(l_A_1155))).f_NEXT;
}
l_F_1154 = ((*(R24 *)rt_nil_check(l_F_1154))).f_NEXT;
}
RT_B_TICK();
} L_end1156: ;
{ R23 rv1160 = r_NO_MVAL();
return rv1160; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1161; memset(&l_P_1161, 0, sizeof l_P_1161);
l_P_1161 = p_L;
for (;;) {
if ((l_P_1161 == NULL)) goto L_end1162;
{
if ((((*(R21 *)rt_nil_check(l_P_1161))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1161))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1161))).f_B, p_T)).f_V)))
{
{ rt_int rv1163 = 1;
return rv1163; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1161, p_T)).f_V == p_V))
{
{ rt_int rv1164 = 1;
return rv1164; }
}
l_P_1161 = ((*(R21 *)rt_nil_check(l_P_1161))).f_NEXT;
}
RT_B_TICK();
} L_end1162: ;
{ rt_int rv1165 = 0;
return rv1165; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1166 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1166; }
}
{ R26 rv1167 = r_EXPR(p_E, NULL);
return rv1167; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1168; memset(&l_A_1168, 0, sizeof l_A_1168);
S_R26(&l_A_1168, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1169; memset(&l_I_1169, 0, sizeof l_I_1169);
S_R10(&l_I_1169, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1168).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1170 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1168).f_C, (l_A_1168).f_C, l_I_1169, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1168).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1170; }
}
}
}
{ R26 rv1171 = r_INDEX_EXPR2(p_E);
return rv1171; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1172; memset(&l_B_1172, 0, sizeof l_B_1172);
S_R26(&l_B_1172, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1173; memset(&l_T_1173, 0, sizeof l_T_1173);
l_T_1173 = r_REAL_TYPE((l_B_1172).f_T);
R21 * l_S_1174; memset(&l_S_1174, 0, sizeof l_S_1174);
l_S_1174 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1175; memset(&l_IX_1175, 0, sizeof l_IX_1175);
S_R10(&l_IX_1175, r_MK(rt_str("", 0)), 0);
rt_int l_N_1176; memset(&l_N_1176, 0, sizeof l_N_1176);
l_N_1176 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1173))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1174 == NULL)) goto L_end1177;
{
if ((l_N_1176 > ((rt_int)0LL)))
{
S_R10(&l_IX_1175, r_CATS(l_IX_1175, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1175, r_CAT(l_IX_1175, r_INT_EXPR(l_S_1174)), 0);
l_N_1176 = rt_add(l_N_1176, ((rt_int)1LL));
l_S_1174 = ((*(R21 *)rt_nil_check(l_S_1174))).f_NEXT;
}
RT_B_TICK();
} L_end1177: ;
if ((!(l_N_1176 == ((*(R22 *)rt_nil_check(l_T_1173))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1176 == ((rt_int)1LL)))
{
{ R26 rv1178 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1172).f_C, l_IX_1175, (l_B_1172).f_C, (l_B_1172).f_C), ((*(R22 *)rt_nil_check(l_T_1173))).f_ELEM, (l_B_1172).f_LVAL, r_NO_TEXT());
return rv1178; }
}
{
R10 l_X_1179; memset(&l_X_1179, 0, sizeof l_X_1179);
S_R10(&l_X_1179, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1172).f_C, r_NUM(l_N_1176), (l_B_1172).f_C, (l_B_1172).f_C), 0);
{ R26 rv1180 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1179, l_IX_1175), ((*(R22 *)rt_nil_check(l_T_1173))).f_ELEM, (l_B_1172).f_LVAL, r_NO_TEXT());
return rv1180; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1181 = r_MKN(rt_str("NEGATE_", 7));
return rv1181; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1182 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1182; }
}
{ R10 rv1183 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1183; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1184 = r_MKN(rt_str("ADD_", 4));
return rv1184; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1185 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1185; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1186 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1186; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1187 = r_MKN(rt_str("DIVIDE_", 7));
return rv1187; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1188 = r_MKN(rt_str("MODULUS_", 8));
return rv1188; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1189 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1189; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1190 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1190; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1191 = r_MKN(rt_str("EQUAL_", 6));
return rv1191; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1192 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1192; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1193 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1193; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1194 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1194; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1195 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1195; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1196 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1196; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1197 = r_MKN(rt_str("AND_", 4));
return rv1197; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1198 = r_MKN(rt_str("OR_", 3));
return rv1198; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1199 = r_MKN(rt_str("XOR_", 4));
return rv1199; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1200 = r_MKN(rt_str("IMPLIES_", 8));
return rv1200; }
}
{ R10 rv1201 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1201; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1202; memset(&l_A_1202, 0, sizeof l_A_1202);
l_A_1202 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1202)), ({ R27 rc1203; memset(&rc1203, 0, sizeof rc1203);  rc1203.f_E = NULL; S_R26(&rc1203.f_V, p_V, 0); rc1203.f_HAVE = 1; rc1203.f_MODE = g_M_IN; rc1203.f_NEXT = p_NEXT; rc1203; }), 0);
{ R27 * rv1204 = l_A_1202;
return rv1204; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1205; memset(&l_A_1205, 0, sizeof l_A_1205);
l_A_1205 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1205)), ({ R27 rc1206; memset(&rc1206, 0, sizeof rc1206);  rc1206.f_E = p_E; S_R26(&rc1206.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1206.f_HAVE = 0; rc1206.f_MODE = p_MODE; rc1206.f_NEXT = p_NEXT; rc1206; }), 0);
{ R27 * rv1207 = l_A_1205;
return rv1207; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1208; memset(&l_Y_1208, 0, sizeof l_Y_1208);
l_Y_1208 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1208 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1208 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1209 = l_Y_1208;
return rv1209; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1210; memset(&l_ARGS_1210, 0, sizeof l_ARGS_1210);
l_ARGS_1210 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1211; memset(&l_Y_1211, 0, sizeof l_Y_1211);
l_Y_1211 = r_USER_OPERATOR(p_NAME, l_ARGS_1210, p_LINE);
if ((l_Y_1211 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1212 = r_CALL_SYM(l_Y_1211, l_ARGS_1210, p_LINE);
return rv1212; }
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
{ R10 rv1213 = p_C;
return rv1213; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1214 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1214; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1215 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1215; }
}
{ R10 rv1216 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1216; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1217 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1217; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1218; memset(&l_RT_1218, 0, sizeof l_RT_1218);
l_RT_1218 = r_REAL_TYPE(p_T);
R22 * l_VT_1219; memset(&l_VT_1219, 0, sizeof l_VT_1219);
l_VT_1219 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1219))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_PTR)))
{
{ R10 rv1220 = (p_V).f_C;
return rv1220; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1219))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1219)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1221 = (p_V).f_C;
return rv1221; }
}
if ((!r_SAME_CLASS(l_RT_1218, l_VT_1219)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1219), (r_TYPE_NAME(l_VT_1219)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1218), (r_TYPE_NAME(l_RT_1218)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1218))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1218))).f_SCALE))
{
{ R10 rv1222 = r_RANGE_CHECK(l_RT_1218, (p_V).f_C, p_SELF);
return rv1222; }
}
{ R10 rv1223 = r_RANGE_CHECK(l_RT_1218, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1218))).f_SCALE)), p_SELF);
return rv1223; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_FLOAT) || (((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_ENUM)))
{
{ R10 rv1224 = r_RANGE_CHECK(l_RT_1218, (p_V).f_C, p_SELF);
return rv1224; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RT_1218))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1219))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1218))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1219))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1218), r_TARGET(l_VT_1219))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1218)) && (!r_HAS_ANY(l_VT_1219))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1218))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1219))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1218))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1218))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1219))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1225 = (p_V).f_C;
return rv1225; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1226; memset(&l_ARGS_1226, 0, sizeof l_ARGS_1226);
l_ARGS_1226 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1227; memset(&l_Y_1227, 0, sizeof l_Y_1227);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1226))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1227 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1226, p_LINE, 0);
if ((l_Y_1227 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1226))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1227 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1226, p_LINE, 0);
}
if ((l_Y_1227 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1228 = r_CATS((r_CALL_SYM(l_Y_1227, l_ARGS_1226, p_LINE)).f_C, rt_str(";", 1));
return rv1228; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1229 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1229; }
}
}
{ R10 rv1230 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1230; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1231 = 1;
return rv1231; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1232 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1232; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1233; memset(&l_F_1233, 0, sizeof l_F_1233);
l_F_1233 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1233 == NULL)) goto L_end1234;
{
if ((((*(R24 *)rt_nil_check(l_F_1233))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1233))).f_T))
{
{ rt_int rv1235 = 1;
return rv1235; }
}
}
l_F_1233 = ((*(R24 *)rt_nil_check(l_F_1233))).f_NEXT;
}
RT_B_TICK();
} L_end1234: ;
}
}
{ rt_int rv1236 = 0;
return rv1236; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1237 = 0;
return rv1237; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1238 = 0;
return rv1238; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1239 = 0;
return rv1239; }
}
{ rt_int rv1240 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1240; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1241 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1241; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1242; memset(&l_D_1242, 0, sizeof l_D_1242);
S_R10(&l_D_1242, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1243; memset(&l_S_1243, 0, sizeof l_S_1243);
S_R10(&l_S_1243, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1244; memset(&l_I_1244, 0, sizeof l_I_1244);
S_R10(&l_I_1244, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1245; memset(&l_N_1245, 0, sizeof l_N_1245);
S_R10(&l_N_1245, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1246; memset(&l_VE_1246, 0, sizeof l_VE_1246);
l_VE_1246 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1247; memset(&l_R_1247, 0, sizeof l_R_1247);
S_R10(&l_R_1247, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1242, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1247, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1247, l_S_1243, p_RV), 0);
S_R10(&l_R_1247, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1247, l_N_1245, l_D_1242, l_D_1242), 0);
S_R10(&l_R_1247, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1247, l_S_1243, l_S_1243), 0);
S_R10(&l_R_1247, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1247, l_I_1244, l_N_1245, l_D_1242), 0);
S_R10(&l_R_1247, r_FMT2(rt_str("@@->hi);", 8), l_R_1247, l_D_1242), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1247, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1247, l_I_1244, l_I_1244, l_I_1244), 0);
S_R10(&l_R_1247, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1247, l_I_1244, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1243, l_I_1244), r_NO_TEXT())), 0);
}
S_R10(&l_R_1247, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1247, l_I_1244, l_I_1244, l_I_1244), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1247, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1247, l_I_1244, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1246, r_FMT2(rt_str("@->p[@]", 7), l_D_1242, l_I_1244), r_FMT2(rt_str("@.p[@]", 6), l_S_1243, l_I_1244), p_LINE)), 0);
}
else
{
S_R10(&l_R_1247, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1247, l_I_1244, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1242, l_I_1244), r_FMT2(rt_str("@.p[@]", 6), l_S_1243, l_I_1244))), 0);
}
{ R10 rv1248 = l_R_1247;
return rv1248; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1249; memset(&l_D_1249, 0, sizeof l_D_1249);
S_R10(&l_D_1249, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1250; memset(&l_S_1250, 0, sizeof l_S_1250);
S_R10(&l_S_1250, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1251; memset(&l_F_1251, 0, sizeof l_F_1251);
l_F_1251 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1252; memset(&l_R_1252, 0, sizeof l_R_1252);
S_R10(&l_R_1252, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1249, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1252, r_FMT3(rt_str("@@ = @;", 7), l_R_1252, l_S_1250, p_RV), 0);
for (;;) {
if ((l_F_1251 == NULL)) goto L_end1253;
{
{
R10 l_DF_1254; memset(&l_DF_1254, 0, sizeof l_DF_1254);
S_R10(&l_DF_1254, r_FMT2(rt_str("@->@", 4), l_D_1249, ((*(R24 *)rt_nil_check(l_F_1251))).f_CNAME), 0);
R10 l_SF_1255; memset(&l_SF_1255, 0, sizeof l_SF_1255);
S_R10(&l_SF_1255, r_FMT2(rt_str("@.@", 3), l_S_1250, ((*(R24 *)rt_nil_check(l_F_1251))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1251))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1251))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1252, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1252, l_DF_1254, l_SF_1255), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1251))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1252, r_FMT3(rt_str("@ @ = @;", 8), l_R_1252, l_DF_1254, l_SF_1255), 0);
}
else
{
S_R10(&l_R_1252, r_FMT2(rt_str("@ @", 3), l_R_1252, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1251))).f_T, ((*(R24 *)rt_nil_check(l_F_1251))).f_T, l_DF_1254, l_SF_1255, p_LINE)), 0);
}
}
l_F_1251 = ((*(R24 *)rt_nil_check(l_F_1251))).f_NEXT;
}
RT_B_TICK();
} L_end1253: ;
{ R10 rv1256 = r_CATS(l_R_1252, rt_str(" }", 2));
return rv1256; }
}
}
{ R10 rv1257 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1257; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1258; memset(&l_ARGS_1258, 0, sizeof l_ARGS_1258);
l_ARGS_1258 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1259; memset(&l_Y_1259, 0, sizeof l_Y_1259);
l_Y_1259 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1258, p_LINE);
if ((l_Y_1259 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1260 = (r_CALL_SYM(l_Y_1259, l_ARGS_1258, p_LINE)).f_C;
return rv1260; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1261; memset(&l_X_1261, 0, sizeof l_X_1261);
S_R10(&l_X_1261, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1262; memset(&l_Z_1262, 0, sizeof l_Z_1262);
S_R10(&l_Z_1262, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1263; memset(&l_I_1263, 0, sizeof l_I_1263);
S_R10(&l_I_1263, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1264; memset(&l_N_1264, 0, sizeof l_N_1264);
S_R10(&l_N_1264, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1265; memset(&l_R_1265, 0, sizeof l_R_1265);
S_R10(&l_R_1265, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1261, p_A, l_Z_1262), 0);
S_R10(&l_R_1265, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1265, p_B, l_I_1263, l_N_1264), 0);
S_R10(&l_R_1265, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1265, l_X_1261, l_X_1261, l_Z_1262), 0);
S_R10(&l_R_1265, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1265, l_Z_1262, l_I_1263, l_N_1264), 0);
S_R10(&l_R_1265, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1265, l_X_1261, l_X_1261), 0);
S_R10(&l_R_1265, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1265, l_I_1263, l_I_1263, l_I_1263), 0);
S_R10(&l_R_1265, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1265, l_I_1263, l_I_1263, l_I_1263), 0);
S_R10(&l_R_1265, r_FMT2(rt_str("@@;", 3), l_R_1265, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1261, l_I_1263), r_FMT2(rt_str("@.p[@]", 6), l_Z_1262, l_I_1263), p_LINE)), 0);
{ R10 rv1266 = r_FMT2(rt_str("@ @r; })", 8), l_R_1265, l_I_1263);
return rv1266; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1267; memset(&l_X_1267, 0, sizeof l_X_1267);
S_R10(&l_X_1267, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1268; memset(&l_Z_1268, 0, sizeof l_Z_1268);
S_R10(&l_Z_1268, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1269; memset(&l_F_1269, 0, sizeof l_F_1269);
l_F_1269 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1270; memset(&l_R_1270, 0, sizeof l_R_1270);
S_R10(&l_R_1270, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1267, p_A, l_Z_1268), 0);
R10 l_EQ_1271; memset(&l_EQ_1271, 0, sizeof l_EQ_1271);
S_R10(&l_EQ_1271, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1270, r_FMT2(rt_str("@@;", 3), l_R_1270, p_B), 0);
for (;;) {
if ((l_F_1269 == NULL)) goto L_end1272;
{
{
R10 l_C_1273; memset(&l_C_1273, 0, sizeof l_C_1273);
S_R10(&l_C_1273, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1269))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1267, ((*(R24 *)rt_nil_check(l_F_1269))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1268, ((*(R24 *)rt_nil_check(l_F_1269))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1269))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1271, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1271, r_VARIANT_COND(l_F_1269, p_T, l_X_1267), l_C_1273), 0);
}
else
{
S_R10(&l_EQ_1271, r_FMT2(rt_str("@ && @", 6), l_EQ_1271, l_C_1273), 0);
}
}
l_F_1269 = ((*(R24 *)rt_nil_check(l_F_1269))).f_NEXT;
}
RT_B_TICK();
} L_end1272: ;
{ R10 rv1274 = r_FMT2(rt_str("@ @; })", 7), l_R_1270, l_EQ_1271);
return rv1274; }
}
}
{ R10 rv1275 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1275; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1276; memset(&l_A_1276, 0, sizeof l_A_1276);
S_R26(&l_A_1276, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1277; memset(&l_T_1277, 0, sizeof l_T_1277);
l_T_1277 = (l_A_1276).f_T;
R10 l_OP_1278; memset(&l_OP_1278, 0, sizeof l_OP_1278);
S_R10(&l_OP_1278, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R22 *)rt_nil_check(l_T_1277))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1279; memset(&l_ARGS_1279, 0, sizeof l_ARGS_1279);
l_ARGS_1279 = r_VAL_ARG(l_A_1276, NULL);
R12 * l_Y_1280; memset(&l_Y_1280, 0, sizeof l_Y_1280);
l_Y_1280 = r_USER_OPERATOR(r_OP_NAME(l_OP_1278, 1), l_ARGS_1279, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_1280 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1277));
}
{ R26 rv1281 = r_CALL_SYM(l_Y_1280, l_ARGS_1279, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1281; }
}
}
if (r_TEQS(l_OP_1278, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1277))).f_KIND == g_T_BOOL))
{
{ R26 rv1282 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1276).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1282; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1277))).f_KIND == g_T_BITS))
{
{ R26 rv1283 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1276).f_C), l_T_1277);
return rv1283; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1277))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1278, rt_str("-", 1)))
{
{ R26 rv1284 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1276).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1277))).f_SCALE));
return rv1284; }
}
{ R26 rv1285 = r_MKET((l_A_1276).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1277))).f_SCALE));
return rv1285; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1277))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_1278, rt_str("-", 1)))
{
{ R26 rv1286 = r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_1276).f_C), l_T_1277);
return rv1286; }
}
{ R26 rv1287 = l_A_1276;
return rv1287; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1277));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1288 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1288; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1289; memset(&l_OP_1289, 0, sizeof l_OP_1289);
S_R10(&l_OP_1289, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1290; memset(&l_A_1290, 0, sizeof l_A_1290);
R26 l_B_1291; memset(&l_B_1291, 0, sizeof l_B_1291);
if ((r_TEQS(l_OP_1289, rt_str("&", 1)) || r_TEQS(l_OP_1289, rt_str("!", 1))))
{
{
R23 l_MA_1292; memset(&l_MA_1292, 0, sizeof l_MA_1292);
S_R23(&l_MA_1292, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1293; memset(&l_CA_1293, 0, sizeof l_CA_1293);
S_R10(&l_CA_1293, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1294; memset(&l_CB_1294, 0, sizeof l_CB_1294);
S_R10(&l_CB_1294, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1289, rt_str("&", 1)))
{
{ R26 rv1295 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1293, l_CB_1294), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1295; }
}
{ R26 rv1296 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1293, l_CB_1294), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1296; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1291, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1290, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1291).f_T), 0);
}
else
{
S_R26(&l_A_1290, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1291, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1290).f_T), 0);
}
{ R26 rv1297 = r_APPLY_OPERATOR(p_E, l_OP_1289, l_A_1290, l_B_1291);
return rv1297; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1298; memset(&l_AT_1298, 0, sizeof l_AT_1298);
l_AT_1298 = (p_A).f_T;
R22 * l_BT_1299; memset(&l_BT_1299, 0, sizeof l_BT_1299);
l_BT_1299 = (p_B).f_T;
rt_int l_LINE_1300; memset(&l_LINE_1300, 0, sizeof l_LINE_1300);
l_LINE_1300 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R10 l_NAME_1301; memset(&l_NAME_1301, 0, sizeof l_NAME_1301);
S_R10(&l_NAME_1301, r_OP_NAME(p_OP, 0), 0);
if (((((!(r_LOOKUP(l_NAME_1301) == NULL)) || (!(r_LOOKUP(r_MKN(rt_b_slice(r_STR(l_NAME_1301, (l_NAME_1301).f_LEN), ((rt_int)0LL), rt_sub((l_NAME_1301).f_LEN, ((rt_int)2LL))))) == NULL))) || (((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1302; memset(&l_ARGS_1302, 0, sizeof l_ARGS_1302);
l_ARGS_1302 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R12 * l_Y_1303; memset(&l_Y_1303, 0, sizeof l_Y_1303);
l_Y_1303 = r_USER_OPERATOR(l_NAME_1301, l_ARGS_1302, l_LINE_1300);
if ((!(l_Y_1303 == NULL)))
{
{ R26 rv1304 = r_CALL_SYM(l_Y_1303, l_ARGS_1302, l_LINE_1300);
return rv1304; }
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R12 * l_Q_1305; memset(&l_Q_1305, 0, sizeof l_Q_1305);
l_Q_1305 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1302, l_LINE_1300);
if ((!(l_Q_1305 == NULL)))
{
{ R26 rv1306 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1305, l_ARGS_1302, l_LINE_1300)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1306; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1300, rt_str("no such operation for the abstract type: ", 41), l_NAME_1301);
}
}
}
}
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1307 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1307; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1308 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1308; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_INT)))
{
{ R26 rv1309 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1309; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1310 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1310; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1298, l_BT_1299)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1298))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1300, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1311 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1311; }
}
r_FAILT(l_LINE_1300, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_BITS)))))
{
{
R22 * l_T_1312; memset(&l_T_1312, 0, sizeof l_T_1312);
l_T_1312 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1312))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1298))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1298))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1299))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1312))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1298))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1299))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1312))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1312))).f_MLEN).f_V), 0);
}
{ R26 rv1313 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1312);
return rv1313; }
}
}
r_FAIL(l_LINE_1300, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_BITS)))
{
{ R26 rv1314 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1298);
return rv1314; }
}
r_FAILT(l_LINE_1300, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_INT)))
{
{ R26 rv1315 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1315; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1316; memset(&l_T_1316, 0, sizeof l_T_1316);
l_T_1316 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1316))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1298))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1299))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
{ R26 rv1317 = r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_1316);
return rv1317; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
{ R26 rv1318 = r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_1316);
return rv1318; }
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1298))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1299))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1300, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1300, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1298), (r_TYPE_NAME(l_AT_1298)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1319 = r_MK(rt_str("and", 3));
return rv1319; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1320 = r_MK(rt_str("or", 2));
return rv1320; }
}
{ R10 rv1321 = r_MK(rt_str("xor", 3));
return rv1321; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1322 = p_A;
return rv1322; }
}
{ rt_int rv1323 = p_B;
return rv1323; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1324 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1324; }
}
{ R10 rv1325 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1325; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1326; memset(&l_AT_1326, 0, sizeof l_AT_1326);
l_AT_1326 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1327; memset(&l_BT_1327, 0, sizeof l_BT_1327);
l_BT_1327 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1328; memset(&l_R_1328, 0, sizeof l_R_1328);
if (((((*(R22 *)rt_nil_check(l_AT_1326))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1327))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1326))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1327))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1326))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1327))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1328, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1326))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1327))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1328, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1326, l_BT_1327)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1326))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R22 *)rt_nil_check(l_AT_1326))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1326) || r_HAS_ANY(l_BT_1327)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if (r_HAS_ABS_PART(l_AT_1326))
{
S_R10(&l_R_1328, r_COMPONENT_EQUAL(l_AT_1326, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1328, r_EQUAL_CODE(l_AT_1326, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1328, r_FMT1(rt_str("(!@)", 4), l_R_1328), 0);
}
{ R26 rv1329 = r_MKET(l_R_1328, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1329; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1330; memset(&l_S1_1330, 0, sizeof l_S1_1330);
l_S1_1330 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1331; memset(&l_S2_1331, 0, sizeof l_S2_1331);
l_S2_1331 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1332; memset(&l_S_1332, 0, sizeof l_S_1332);
l_S_1332 = r_MAX_INT(l_S1_1330, l_S2_1331);
R10 l_FN_1333; memset(&l_FN_1333, 0, sizeof l_FN_1333);
S_R10(&l_FN_1333, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1333, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1334 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1333, r_RESCALE_C((p_A).f_C, l_S1_1330, l_S_1332), r_RESCALE_C((p_B).f_C, l_S2_1331, l_S_1332)), r_INT_TYPE(l_S_1332));
return rv1334; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1335 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1330, l_S2_1331)));
return rv1335; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1336 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1330, l_S2_1331)));
return rv1336; }
}
{ R26 rv1337 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1330, l_S2_1331)));
return rv1337; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1338 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1330));
return rv1338; }
}
{ R26 rv1339 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1330));
return rv1339; }
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
rt_int l_S1_1340; memset(&l_S1_1340, 0, sizeof l_S1_1340);
l_S1_1340 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1341; memset(&l_S2_1341, 0, sizeof l_S2_1341);
l_S2_1341 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1342; memset(&l_RND_1342, 0, sizeof l_RND_1342);
S_R10(&l_RND_1342, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1342, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1343 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1343; }
}
{
R23 l_SM_1344; memset(&l_SM_1344, 0, sizeof l_SM_1344);
S_R23(&l_SM_1344, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1345; memset(&l_S_1345, 0, sizeof l_S_1345);
l_S_1345 = (l_SM_1344).f_V;
rt_int l_SR_1346; memset(&l_SR_1346, 0, sizeof l_SR_1346);
l_SR_1346 = r_MAX_INT(l_S1_1340, l_S2_1341);
if ((!(l_SM_1344).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1347 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1345, l_S1_1340), l_S2_1341)), l_RND_1342), r_INT_TYPE(l_S_1345));
return rv1347; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1348 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1345, l_S1_1340), l_S2_1341)), l_RND_1342), r_INT_TYPE(l_S_1345));
return rv1348; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1349 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1340), r_NUM(l_S_1345), l_RND_1342), r_INT_TYPE(l_S_1345));
return rv1349; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_FN_1350; memset(&l_FN_1350, 0, sizeof l_FN_1350);
S_R10(&l_FN_1350, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1350, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1351 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_1350, r_RESCALE_C((p_A).f_C, l_S1_1340, l_SR_1346), r_RESCALE_C((p_B).f_C, l_S2_1341, l_SR_1346)), r_NUM(l_SR_1346), r_NUM(l_S_1345), l_RND_1342), r_INT_TYPE(l_S_1345));
return rv1351; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1352; memset(&l_V_1352, 0, sizeof l_V_1352);
S_R26(&l_V_1352, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1353; memset(&l_T_1353, 0, sizeof l_T_1353);
l_T_1353 = r_REAL_TYPE((l_V_1352).f_T);
R21 * l_R_1354; memset(&l_R_1354, 0, sizeof l_R_1354);
l_R_1354 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1355; memset(&l_TMP_1355, 0, sizeof l_TMP_1355);
S_R10(&l_TMP_1355, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1356; memset(&l_LO_1356, 0, sizeof l_LO_1356);
R26 l_HI_1357; memset(&l_HI_1357, 0, sizeof l_HI_1357);
R10 l_LOC_1358; memset(&l_LOC_1358, 0, sizeof l_LOC_1358);
R10 l_HIC_1359; memset(&l_HIC_1359, 0, sizeof l_HIC_1359);
R10 l_LO_OP_1360; memset(&l_LO_OP_1360, 0, sizeof l_LO_OP_1360);
S_R10(&l_LO_OP_1360, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1361; memset(&l_HI_OP_1361, 0, sizeof l_HI_OP_1361);
S_R10(&l_HI_OP_1361, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1356, r_EXPR(((*(R21 *)rt_nil_check(l_R_1354))).f_A, l_T_1353), 0);
S_R26(&l_HI_1357, r_EXPR(((*(R21 *)rt_nil_check(l_R_1354))).f_B, l_T_1353), 0);
if (((((*(R22 *)rt_nil_check(l_T_1353))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1353))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1353))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1353))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1353))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1356).f_T), l_T_1353)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1357).f_T), l_T_1353))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1354))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1354))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1360, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1354))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1361, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1353))).f_KIND == g_T_INT))
{
{
R26 l_X_1362; memset(&l_X_1362, 0, sizeof l_X_1362);
S_R26(&l_X_1362, r_MKET(l_TMP_1355, (l_V_1352).f_T), 0);
S_R10(&l_LOC_1358, r_FIXED_COMPARE(l_LO_1356, l_X_1362, l_LO_OP_1360), 0);
S_R10(&l_HIC_1359, r_FIXED_COMPARE(l_X_1362, l_HI_1357, l_HI_OP_1361), 0);
}
}
else
{
S_R10(&l_LOC_1358, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1356).f_C, l_LO_OP_1360, l_TMP_1355), 0);
S_R10(&l_HIC_1359, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1355, l_HI_OP_1361, (l_HI_1357).f_C), 0);
}
{ R26 rv1363 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1353), l_TMP_1355, (l_V_1352).f_C, l_LOC_1358), r_FMT1(rt_str("@; })", 5), l_HIC_1359)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1363; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1364 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1364; }
}
{ R10 rv1365 = (p_V).f_C;
return rv1365; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1366 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1366; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1367; memset(&l_B_1367, 0, sizeof l_B_1367);
l_B_1367 = ((rt_int)0LL);
rt_int l_P_1368; memset(&l_P_1368, 0, sizeof l_P_1368);
l_P_1368 = ((rt_int)1LL);
for (;;) {
if ((l_P_1368 >= p_N)) goto L_end1369;
{
l_B_1367 = rt_add(l_B_1367, ((rt_int)1LL));
l_P_1368 = rt_mul(l_P_1368, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1369: ;
{ rt_int rv1370 = l_B_1367;
return rv1370; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1371; memset(&l_M_1371, 0, sizeof l_M_1371);
S_R23(&l_M_1371, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1371).f_OK)
{
{ rt_int rv1372 = (l_M_1371).f_V;
return rv1372; }
}
}
}
}
{ rt_int rv1373 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1373; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1374; memset(&l_T_1374, 0, sizeof l_T_1374);
l_T_1374 = (p_B).f_T;
rt_int l_K_1375; memset(&l_K_1375, 0, sizeof l_K_1375);
l_K_1375 = ((*(R22 *)rt_nil_check(l_T_1374))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1376 = r_SIZE_OF(l_T_1374, (p_B).f_C);
return rv1376; }
}
if ((l_K_1375 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1377 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1374))).f_SCALE);
return rv1377; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1378 = r_INT_ET(((rt_int)2LL));
return rv1378; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1379 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1379; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1380 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1380; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1374))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1381 = r_MKET(((*(R22 *)rt_nil_check(l_T_1374))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1374))).f_SCALE));
return rv1381; }
}
{ R26 rv1382 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1374))).f_SCALE));
return rv1382; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1374))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1383 = r_MKET(((*(R22 *)rt_nil_check(l_T_1374))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1374))).f_SCALE));
return rv1383; }
}
{ R26 rv1384 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1374))).f_SCALE));
return rv1384; }
}
}
else if ((l_K_1375 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1385 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1374))).f_SCALE);
return rv1385; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1386 = r_INT_ET(((rt_int)15LL));
return rv1386; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1387 = r_INT_ET(((rt_int)2LL));
return rv1387; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ R26 rv1388 = r_INT_ET(rt_neg(((rt_int)1022LL)));
return rv1388; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ R26 rv1389 = r_INT_ET(((rt_int)1023LL));
return rv1389; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
{ R26 rv1390 = r_INT_ET(((rt_int)53LL));
return rv1390; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ R26 rv1391 = r_INT_ET(((rt_int)11LL));
return rv1391; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1374))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1392 = r_MKET(((*(R22 *)rt_nil_check(l_T_1374))).f_LO_C, l_T_1374);
return rv1392; }
}
{ R26 rv1393 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1374);
return rv1393; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1374))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1394 = r_MKET(((*(R22 *)rt_nil_check(l_T_1374))).f_HI_C, l_T_1374);
return rv1394; }
}
{ R26 rv1395 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1374);
return rv1395; }
}
}
else if ((l_K_1375 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1374))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1396 = r_MKET(((*(R22 *)rt_nil_check(l_T_1374))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1374))).f_BASE);
return rv1396; }
}
{ R26 rv1397 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1374))).f_BASE);
return rv1397; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1374))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1398 = r_MKET(((*(R22 *)rt_nil_check(l_T_1374))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1374))).f_BASE);
return rv1398; }
}
{ R26 rv1399 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1374))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1374))).f_BASE);
return rv1399; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1374))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1400 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R22 *)rt_nil_check(l_T_1374))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1374))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1400; }
}
{ R26 rv1401 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1374))).f_BASE))).f_NLITS);
return rv1401; }
}
}
else if (((l_K_1375 == g_T_STR) || (l_K_1375 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1402 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1402; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1403 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1403; }
}
}
else if ((l_K_1375 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1404 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1374))).f_DIMS);
return rv1404; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1374))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1405 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1405; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1406 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1406; }
}
}
else if ((l_K_1375 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1374))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1407 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1407; }
}
{ R26 rv1408 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1408; }
}
}
else if (((l_K_1375 == g_T_ABS) || (l_K_1375 == g_T_REC)))
{
{
R22 * l_U_1409; memset(&l_U_1409, 0, sizeof l_U_1409);
l_U_1409 = l_T_1374;
if ((l_K_1375 == g_T_ABS))
{
l_U_1409 = ((*(R22 *)rt_nil_check(l_T_1374))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1409))).f_KIND == g_T_REC))
{
{
R24 * l_F_1410; memset(&l_F_1410, 0, sizeof l_F_1410);
l_F_1410 = r_FIND_FIELD(l_U_1409, p_NAME);
if ((!(l_F_1410 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1410))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1411 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1410))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1410))).f_T);
return rv1411; }
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
R21 * l_N_1412; memset(&l_N_1412, 0, sizeof l_N_1412);
l_N_1412 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1412))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1413 = l_N_1412;
return rv1413; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1414; memset(&l_K_1414, 0, sizeof l_K_1414);
l_K_1414 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1414 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1415 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1415; }
}
}
{ R26 rv1416 = r_INT_ET(((rt_int)64LL));
return rv1416; }
}
else if ((l_K_1414 == g_T_FLOAT))
{
{ R26 rv1417 = r_INT_ET(((rt_int)64LL));
return rv1417; }
}
else if ((l_K_1414 == g_T_BOOL))
{
{ R26 rv1418 = r_INT_ET(((rt_int)1LL));
return rv1418; }
}
else if ((l_K_1414 == g_T_ENUM))
{
{ R26 rv1419 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1419; }
}
else if ((l_K_1414 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1420 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1420; }
}
{ R26 rv1421 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1421; }
}
else if ((l_K_1414 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1422 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1422; }
}
{ R26 rv1423 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1423; }
}
else if (((l_K_1414 == g_T_PTR) || (l_K_1414 == g_T_SEM)))
{
{ R26 rv1424 = r_INT_ET(((rt_int)64LL));
return rv1424; }
}
else if ((l_K_1414 == g_T_ABS))
{
{ R26 rv1425 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1425; }
}
else if ((l_K_1414 == g_T_ARR))
{
{ R26 rv1426 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1426; }
}
{ R26 rv1427 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1427; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1428 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1428; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1429; memset(&l_T_1429, 0, sizeof l_T_1429);
l_T_1429 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
R22 * l_RT_1430; memset(&l_RT_1430, 0, sizeof l_RT_1430);
l_RT_1430 = r_REAL_TYPE(l_T_1429);
if (((((*(R22 *)rt_nil_check(l_RT_1430))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1430))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1431; memset(&l_TMP_1431, 0, sizeof l_TMP_1431);
S_R10(&l_TMP_1431, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1432; memset(&l_C_1432, 0, sizeof l_C_1432);
S_R10(&l_C_1432, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(l_T_1429), l_TMP_1431, l_TMP_1431, l_TMP_1431), 0);
S_R10(&l_C_1432, r_FMT3(rt_str("@@ @; })", 8), l_C_1432, r_INIT_CODE(l_RT_1430, l_TMP_1431), l_TMP_1431), 0);
{ R26 rv1433 = r_MKET(l_C_1432, l_T_1429);
return rv1433; }
}
}
{ R26 rv1434 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1429)), l_T_1429);
return rv1434; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1435 = 0;
return rv1435; }
}
{
R12 * l_Y_1436; memset(&l_Y_1436, 0, sizeof l_Y_1436);
l_Y_1436 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1436 == NULL))
{
{ rt_int rv1437 = 0;
return rv1437; }
}
{ rt_int rv1438 = (((*(R12 *)rt_nil_check(l_Y_1436))).f_KIND == g_Y_TYPE);
return rv1438; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1439 = r_INT_ET(((rt_int)100000000LL));
return rv1439; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1440 = r_INT_ET(((rt_int)15LL));
return rv1440; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1441 = r_INT_ET(((rt_int)0LL));
return rv1441; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1442; memset(&l_T_1442, 0, sizeof l_T_1442);
l_T_1442 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1442 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1442 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1442 = r_REAL_TYPE(l_T_1442);
if ((!(((*(R22 *)rt_nil_check(l_T_1442))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1442))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1443; memset(&l_TMP_1443, 0, sizeof l_TMP_1443);
S_R10(&l_TMP_1443, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1444; memset(&l_R_1444, 0, sizeof l_R_1444);
S_R10(&l_R_1444, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1442))).f_CNAME, l_TMP_1443, l_TMP_1443, l_TMP_1443), 0);
R24 * l_F_1445; memset(&l_F_1445, 0, sizeof l_F_1445);
l_F_1445 = ((*(R22 *)rt_nil_check(l_T_1442))).f_FIELDS;
S_R10(&l_R_1444, r_FMT2(rt_str("@@", 2), l_R_1444, r_INIT_CODE(l_T_1442, l_TMP_1443)), 0);
for (;;) {
if ((l_F_1445 == NULL)) goto L_end1446;
{
if ((((*(R24 *)rt_nil_check(l_F_1445))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1445))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1445))).f_LABELS, (r_TAG_VALUE(l_T_1442, ((*(R24 *)rt_nil_check(l_F_1445))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1442, ((*(R24 *)rt_nil_check(l_F_1445))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1447; memset(&l_INIT_1447, 0, sizeof l_INIT_1447);
l_INIT_1447 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1445))).f_NAME);
if ((l_INIT_1447 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1445))).f_NAME);
}
S_R10(&l_R_1444, r_FMT2(rt_str("@ @", 3), l_R_1444, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1445))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1443, ((*(R24 *)rt_nil_check(l_F_1445))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1447))).f_A, ((*(R24 *)rt_nil_check(l_F_1445))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1447))).f_LINE, l_TMP_1443)), 0);
}
}
}
l_F_1445 = ((*(R24 *)rt_nil_check(l_F_1445))).f_NEXT;
}
RT_B_TICK();
} L_end1446: ;
{
R21 * l_P_1448; memset(&l_P_1448, 0, sizeof l_P_1448);
l_P_1448 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1448 == NULL)) goto L_end1449;
{
{
R24 * l_G_1450; memset(&l_G_1450, 0, sizeof l_G_1450);
l_G_1450 = r_FIND_VFIELD(l_T_1442, ((*(R21 *)rt_nil_check(l_P_1448))).f_NAME);
if ((l_G_1450 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1448))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1448))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1450))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1448))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1448))).f_NAME);
}
r_CHECK_VARIANT(l_G_1450, l_T_1442, NULL, ((*(R21 *)rt_nil_check(l_P_1448))).f_LINE);
}
l_P_1448 = ((*(R21 *)rt_nil_check(l_P_1448))).f_NEXT;
}
RT_B_TICK();
} L_end1449: ;
}
{ R26 rv1451 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1444, l_TMP_1443), l_T_1442);
return rv1451; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1452; memset(&l_P_1452, 0, sizeof l_P_1452);
l_P_1452 = p_L;
for (;;) {
if ((l_P_1452 == NULL)) goto L_end1453;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1452))).f_NAME, p_NAME))
{
{ R21 * rv1454 = l_P_1452;
return rv1454; }
}
l_P_1452 = ((*(R21 *)rt_nil_check(l_P_1452))).f_NEXT;
}
RT_B_TICK();
} L_end1453: ;
{ R21 * rv1455 = NULL;
return rv1455; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1456; memset(&l_DIMS_1456, 0, sizeof l_DIMS_1456);
l_DIMS_1456 = ((rt_int)0LL);
R21 * l_P_1457; memset(&l_P_1457, 0, sizeof l_P_1457);
l_P_1457 = p_E;
R22 * l_ELEM_1458; memset(&l_ELEM_1458, 0, sizeof l_ELEM_1458);
l_ELEM_1458 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1457))).f_KIND == g_N_ARRCONS))) goto L_end1459;
{
l_DIMS_1456 = rt_add(l_DIMS_1456, ((rt_int)1LL));
l_P_1457 = ((*(R21 *)rt_nil_check(l_P_1457))).f_A;
}
RT_B_TICK();
} L_end1459: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1458 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1458 == NULL))
{
l_ELEM_1458 = (r_EXPR(l_P_1457, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1458))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1458))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1458 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1460; memset(&l_A_1460, 0, sizeof l_A_1460);
l_A_1460 = r_ARRAY_OF(l_ELEM_1458, l_DIMS_1456);
R10 l_TMP_1461; memset(&l_TMP_1461, 0, sizeof l_TMP_1461);
S_R10(&l_TMP_1461, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1462; memset(&l_R_1462, 0, sizeof l_R_1462);
S_R10(&l_R_1462, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1460))).f_CNAME, l_TMP_1461, l_TMP_1461), 0);
rt_int l_K_1463; memset(&l_K_1463, 0, sizeof l_K_1463);
l_K_1463 = ((rt_int)0LL);
S_R10(&l_R_1462, r_FMT2(rt_str("@@); ", 5), l_R_1462, l_TMP_1461), 0);
l_P_1457 = p_E;
{ rt_int it1465_lo = ((rt_int)0LL), it1465_hi = rt_sub(l_DIMS_1456, ((rt_int)1LL));
for (rt_int it1465 = it1465_lo; it1465 <= it1465_hi; it1465++) {
{
S_R10(&l_R_1462, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1462, l_TMP_1461, r_NUM(it1465), l_TMP_1461), 0);
S_R10(&l_R_1462, r_FMT3(rt_str("@@] = @;", 8), l_R_1462, r_NUM(it1465), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1457))).f_A), ((rt_int)1LL)))), 0);
l_P_1457 = ((*(R21 *)rt_nil_check(l_P_1457))).f_A;
}
RT_B_TICK();
if (it1465 == it1465_hi) break;
} } L_end1464: ;
S_R10(&l_R_1462, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1462, l_TMP_1461, l_TMP_1461, r_NUM(l_DIMS_1456)), 0);
S_R10(&l_R_1462, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1462, l_TMP_1461, l_TMP_1461), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1456, l_A_1460, l_TMP_1461, &l_R_1462, &l_K_1463);
{ R26 rv1466 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1462, l_TMP_1461), l_A_1460);
return rv1466; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1467; memset(&l_P_1467, 0, sizeof l_P_1467);
l_P_1467 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1467 == NULL)) goto L_end1468;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1467, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1467))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1467))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1467, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1467))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1467 = ((*(R21 *)rt_nil_check(l_P_1467))).f_NEXT;
}
RT_B_TICK();
} L_end1468: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1469; memset(&l_T_1469, 0, sizeof l_T_1469);
l_T_1469 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1469))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1469))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1469))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1470 = l_T_1469;
return rv1470; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1471; memset(&l_T_1471, 0, sizeof l_T_1471);
l_T_1471 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1472; memset(&l_V_1472, 0, sizeof l_V_1472);
S_R26(&l_V_1472, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1471), 0);
R22 * l_RT_1473; memset(&l_RT_1473, 0, sizeof l_RT_1473);
l_RT_1473 = r_REAL_TYPE(l_T_1471);
if (((((*(R22 *)rt_nil_check((l_V_1472).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1473))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1473))).f_KIND == g_T_INT))
{
{ R26 rv1474 = r_MKET(r_RANGE_CHECK(l_RT_1473, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1472).f_C), r_NO_TEXT()), l_T_1471);
return rv1474; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1473))).f_KIND == g_T_BOOL))
{
{ R26 rv1475 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1472).f_C), l_T_1471);
return rv1475; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1473))).f_KIND == g_T_ENUM))
{
{ R26 rv1476 = r_MKET(r_ENUM_OF_BITS(l_RT_1473, (l_V_1472).f_C), l_T_1471);
return rv1476; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1473))).f_KIND == g_T_FLOAT))
{
{ R26 rv1477 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1472).f_C), l_T_1471);
return rv1477; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1473))).f_KIND == g_T_STR))
{
{ R26 rv1478 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1472).f_C), l_T_1471);
return rv1478; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{ R26 rv1479 = r_MKET(r_CONVERT(l_V_1472, l_T_1471, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_1471);
return rv1479; }
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1480 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1480; }
}
}
{ R10 rv1481 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1481; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1482; memset(&l_NAME_1482, 0, sizeof l_NAME_1482);
S_R10(&l_NAME_1482, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1483; memset(&l_L_1483, 0, sizeof l_L_1483);
l_L_1483 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1484; memset(&l_R_1484, 0, sizeof l_R_1484);
S_R10(&l_R_1484, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1483 == NULL)) goto L_end1485;
{
{
R21 * l_V_1486; memset(&l_V_1486, 0, sizeof l_V_1486);
l_V_1486 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1487; memset(&l_FOUND_1487, 0, sizeof l_FOUND_1487);
l_FOUND_1487 = 0;
for (;;) {
if ((l_V_1486 == NULL)) goto L_end1488;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1486))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1483))).f_NAME))
{
S_R10(&l_R_1484, r_FMT2(rt_str("@@, ", 4), l_R_1484, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1486))).f_A, NULL)).f_C), 0);
l_FOUND_1487 = 1;
}
l_V_1486 = ((*(R21 *)rt_nil_check(l_V_1486))).f_NEXT;
}
RT_B_TICK();
} L_end1488: ;
if ((!l_FOUND_1487))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1483))).f_NAME);
}
}
l_L_1483 = ((*(R21 *)rt_nil_check(l_L_1483))).f_NEXT;
}
RT_B_TICK();
} L_end1485: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1482, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1484, l_NAME_1482, l_NAME_1482));
{ R10 rv1489 = r_FMT2(rt_str("@, @", 4), l_NAME_1482, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1489; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1490; memset(&l_SEM_1490, 0, sizeof l_SEM_1490);
l_SEM_1490 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1490 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1490)
{
{
R22 * l_T_1491; memset(&l_T_1491, 0, sizeof l_T_1491);
l_T_1491 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1491 = p_WANT;
}
}
{ R26 rv1492 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1491))).f_SCALE)), l_T_1491);
return rv1492; }
}
}
{
R22 * l_T_1493; memset(&l_T_1493, 0, sizeof l_T_1493);
l_T_1493 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1494; memset(&l_P_1494, 0, sizeof l_P_1494);
l_P_1494 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1494))).f_TARGET = l_T_1493;
((*(R22 *)rt_nil_check(l_P_1494))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1493))
{
{ R26 rv1495 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1493), r_INIT_CODE(l_T_1493, r_MK(rt_str("(*p)", 4)))), l_P_1494);
return rv1495; }
}
{ R26 rv1496 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1493), r_CTYPE(l_T_1493)), l_P_1494);
return rv1496; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1497; memset(&l_P_1497, 0, sizeof l_P_1497);
l_P_1497 = p_L;
{ rt_int it1499_lo = ((rt_int)1LL), it1499_hi = p_K;
for (rt_int it1499 = it1499_lo; it1499 <= it1499_hi; it1499++) {
{
if ((!(l_P_1497 == NULL)))
{
l_P_1497 = ((*(R21 *)rt_nil_check(l_P_1497))).f_NEXT;
}
}
RT_B_TICK();
if (it1499 == it1499_hi) break;
} } L_end1498: ;
{ R21 * rv1500 = l_P_1497;
return rv1500; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1501; memset(&l_N_1501, 0, sizeof l_N_1501);
l_N_1501 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1501 < p_LO) || (l_N_1501 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1502; memset(&l_L_1502, 0, sizeof l_L_1502);
l_L_1502 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1502 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1502))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1502))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1502))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1503 = r_MK(rt_str("1", 1));
return rv1503; }
}
{ R10 rv1504 = r_MK(rt_str("0", 1));
return rv1504; }
}
if (((((*(R21 *)rt_nil_check(l_L_1502))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1502))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1502))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1505 = r_MK(rt_str("1", 1));
return rv1505; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1502))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1506 = r_MK(rt_str("0", 1));
return rv1506; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1507 = r_MK(rt_str("1", 1));
return rv1507; }
}
{ R10 rv1508 = r_MK(rt_str("0", 1));
return rv1508; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1509 = 0;
return rv1509; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1510 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1510; }
}
{ rt_int rv1511 = 0;
return rv1511; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1512 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1512; }
}
{ R21 * rv1513 = p_E;
return rv1513; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1514; memset(&l_NAME_1514, 0, sizeof l_NAME_1514);
S_R10(&l_NAME_1514, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1515; memset(&l_LINE_1515, 0, sizeof l_LINE_1515);
l_LINE_1515 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_1514, rt_str("PUT", 3)) || r_TEQS(l_NAME_1514, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1516; memset(&l_V_1516, 0, sizeof l_V_1516);
S_R26(&l_V_1516, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1516).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1515, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1514, rt_str("PUT", 3)))
{
{ R26 rv1517 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1516).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1517; }
}
{ R26 rv1518 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1516).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1518; }
}
}
else if (r_TEQS(l_NAME_1514, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1519 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1519; }
}
else if (r_TEQS(l_NAME_1514, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1520 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1520; }
}
else if (r_TEQS(l_NAME_1514, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1521 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1521; }
}
else if (r_TEQS(l_NAME_1514, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1522 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1522; }
}
else if (r_TEQS(l_NAME_1514, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1523 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1523; }
}
else if (r_TEQS(l_NAME_1514, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1524 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1524; }
}
if (r_TEQS(l_NAME_1514, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1525 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1515);
return rv1525; }
}
else if (r_TEQS(l_NAME_1514, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1526 = r_TO_FIXED_CALL(p_E);
return rv1526; }
}
else if (r_TEQS(l_NAME_1514, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1527; memset(&l_V_1527, 0, sizeof l_V_1527);
S_R26(&l_V_1527, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1528; memset(&l_P_1528, 0, sizeof l_P_1528);
S_R23(&l_P_1528, r_MANIFEST(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R22 * l_VT_1529; memset(&l_VT_1529, 0, sizeof l_VT_1529);
l_VT_1529 = r_REAL_TYPE((l_V_1527).f_T);
R22 * l_T_1530; memset(&l_T_1530, 0, sizeof l_T_1530);
l_T_1530 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_1528).f_OK))
{
r_FAIL(l_LINE_1515, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_1528).f_V < ((rt_int)1LL)) || ((l_P_1528).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_1515, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R22 *)rt_nil_check(l_T_1530))).f_SCALE = (l_P_1528).f_V;
if ((((*(R22 *)rt_nil_check(l_VT_1529))).f_KIND == g_T_INT))
{
{ R26 rv1531 = r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_1527).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1529))).f_SCALE)), l_T_1530);
return rv1531; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1529))).f_KIND == g_T_FLOAT))
{
{ R26 rv1532 = r_MKET((l_V_1527).f_C, l_T_1530);
return rv1532; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1529))).f_KIND == g_T_STR))
{
{ R26 rv1533 = r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_1527).f_C), l_T_1530);
return rv1533; }
}
r_FAIL(l_LINE_1515, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1514, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1534 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1515);
return rv1534; }
}
else if (r_TEQS(l_NAME_1514, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1535; memset(&l_V_1535, 0, sizeof l_V_1535);
S_R26(&l_V_1535, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1535).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1536 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1535).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1535).f_T))).f_SCALE));
return rv1536; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1535).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1537 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1535).f_C), (l_V_1535).f_T);
return rv1537; }
}
r_FAIL(l_LINE_1515, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1514, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1514, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1538; memset(&l_V_1538, 0, sizeof l_V_1538);
S_R26(&l_V_1538, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1539; memset(&l_T_1539, 0, sizeof l_T_1539);
l_T_1539 = r_REAL_TYPE((l_V_1538).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1539))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1515, rt_str("an enumerated value expected by ", 32), l_NAME_1514);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1539))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1515, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1514);
}
if (r_TEQS(l_NAME_1514, rt_str("SUCC", 4)))
{
{ R26 rv1540 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1538).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1539))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1539))).f_BASE);
return rv1540; }
}
{ R26 rv1541 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1538).f_C), ((*(R22 *)rt_nil_check(l_T_1539))).f_BASE);
return rv1541; }
}
}
else if (r_TEQS(l_NAME_1514, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1542; memset(&l_V_1542, 0, sizeof l_V_1542);
S_R26(&l_V_1542, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1543; memset(&l_K_1543, 0, sizeof l_K_1543);
l_K_1543 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1542).f_T)))).f_KIND;
R22 * l_T_1544; memset(&l_T_1544, 0, sizeof l_T_1544);
l_T_1544 = r_NEW_TYP(l_K_1543);
if (((!(l_K_1543 == g_T_STR)) && (!(l_K_1543 == g_T_BITS))))
{
r_FAIL(l_LINE_1515, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1544))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1542).f_T))).f_BASE;
{ R26 rv1545 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1542).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1544);
return rv1545; }
}
}
else if (r_TEQS(l_NAME_1514, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1546 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1546; }
}
else if (r_TEQS(l_NAME_1514, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1547 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1547; }
}
else if (((r_TEQS(l_NAME_1514, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1514, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1514, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1548; memset(&l_BITS_1548, 0, sizeof l_BITS_1548);
S_R10(&l_BITS_1548, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1514, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1548, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1514, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1548, r_MK(rt_str("4", 1)), 0);
}
{ R26 rv1549 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1548), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1549; }
}
}
else if ((r_TEQS(l_NAME_1514, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1514, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1550; memset(&l_S_1550, 0, sizeof l_S_1550);
S_R23(&l_S_1550, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_1550).f_OK))
{
r_FAIL(l_LINE_1515, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_1514, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1551 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1550).f_V));
return rv1551; }
}
{ R26 rv1552 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1550).f_V));
return rv1552; }
}
}
else if (((r_TEQS(l_NAME_1514, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1514, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1514, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R22 * l_T_1553; memset(&l_T_1553, 0, sizeof l_T_1553);
l_T_1553 = r_NEW_TYP(g_T_FLOAT);
R23 l_P_1554; memset(&l_P_1554, 0, sizeof l_P_1554);
S_R23(&l_P_1554, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_1554).f_OK))
{
r_FAIL(l_LINE_1515, rt_str("the precision must be manifest", 30));
}
((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE = (l_P_1554).f_V;
if (r_TEQS(l_NAME_1514, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1555 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1553);
return rv1555; }
}
else if (r_TEQS(l_NAME_1514, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1556 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1553);
return rv1556; }
}
{ R26 rv1557 = r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_1553);
return rv1557; }
}
}
else if (r_TEQS(l_NAME_1514, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1558 = r_INT_ET(((rt_int)15LL));
return rv1558; }
}
else if (r_TEQS(l_NAME_1514, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1559 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1559; }
}
else if (r_TEQS(l_NAME_1514, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1560 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1560; }
}
{ R26 rv1561 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1561; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1562; memset(&l_T_1562, 0, sizeof l_T_1562);
l_T_1562 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1563; memset(&l_K_1563, 0, sizeof l_K_1563);
l_K_1563 = ((*(R22 *)rt_nil_check(l_T_1562))).f_KIND;
R22 * l_S_1564; memset(&l_S_1564, 0, sizeof l_S_1564);
l_S_1564 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1563 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1562))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1565 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1564);
return rv1565; }
}
{ R26 rv1566 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1562))).f_SCALE)), l_S_1564);
return rv1566; }
}
else if ((l_K_1563 == g_T_FLOAT))
{
{ R26 rv1567 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1562))).f_SCALE)), l_S_1564);
return rv1567; }
}
else if ((l_K_1563 == g_T_BOOL))
{
{ R26 rv1568 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1564);
return rv1568; }
}
else if ((l_K_1563 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1562))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1569 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1564);
return rv1569; }
}
{ R26 rv1570 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1562))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1564);
return rv1570; }
}
else if (((l_K_1563 == g_T_STR) || (l_K_1563 == g_T_BITS)))
{
{ R26 rv1571 = r_MKET((p_V).f_C, l_S_1564);
return rv1571; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1562));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1572; memset(&l_V_1572, 0, sizeof l_V_1572);
S_R26(&l_V_1572, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1573; memset(&l_T_1573, 0, sizeof l_T_1573);
l_T_1573 = r_REAL_TYPE((l_V_1572).f_T);
rt_int l_N_1574; memset(&l_N_1574, 0, sizeof l_N_1574);
l_N_1574 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1575; memset(&l_RND_1575, 0, sizeof l_RND_1575);
S_R10(&l_RND_1575, r_ROUNDING_ARG(p_E, l_N_1574), 0);
rt_int l_S_1576; memset(&l_S_1576, 0, sizeof l_S_1576);
l_S_1576 = ((rt_int)0LL);
if (((l_N_1574 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R23 l_SM_1577; memset(&l_SM_1577, 0, sizeof l_SM_1577);
S_R23(&l_SM_1577, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_1577).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_1576 = (l_SM_1577).f_V;
}
}
if ((l_N_1574 >= ((rt_int)3LL)))
{
{
R21 * l_R_1578; memset(&l_R_1578, 0, sizeof l_R_1578);
l_R_1578 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_1578)) && (!r_TEQS(((*(R21 *)rt_nil_check(l_R_1578))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_1578)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if (((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1579 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1576), l_RND_1575), r_INT_TYPE(l_S_1576));
return rv1579; }
}
if ((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1580; memset(&l_SAVED_1580, 0, sizeof l_SAVED_1580);
l_SAVED_1580 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1581; memset(&l_C_1581, 0, sizeof l_C_1581);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1575, rt_str("1", 1));
S_R10(&l_C_1581, r_RESCALE_C((l_V_1572).f_C, ((*(R22 *)rt_nil_check(l_T_1573))).f_SCALE, l_S_1576), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1580;
{ R26 rv1582 = r_MKET(l_C_1581, r_INT_TYPE(l_S_1576));
return rv1582; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_FLOAT))
{
{ R26 rv1583 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1572).f_C, r_NUM(l_S_1576), l_RND_1575), r_INT_TYPE(l_S_1576));
return rv1583; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1573))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1573))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1573))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1584 = r_MKET(r_RESCALE_C((l_V_1572).f_C, ((rt_int)0LL), l_S_1576), r_INT_TYPE(l_S_1576));
return rv1584; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_BITS))
{
{ R26 rv1585 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1572).f_C), ((rt_int)0LL), l_S_1576), r_INT_TYPE(l_S_1576));
return rv1585; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1573))).f_KIND == g_T_STR))
{
{ R26 rv1586 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1572).f_C, r_NUM(l_S_1576), l_RND_1575), r_INT_TYPE(l_S_1576));
return rv1586; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1572).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1587; memset(&l_T_1587, 0, sizeof l_T_1587);
l_T_1587 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1588; memset(&l_K_1588, 0, sizeof l_K_1588);
l_K_1588 = ((*(R22 *)rt_nil_check(l_T_1587))).f_KIND;
if ((l_K_1588 == g_T_BITS))
{
{ R26 rv1589 = p_V;
return rv1589; }
}
else if ((l_K_1588 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1587))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1587))).f_REPS))).f_B == NULL)))
{
{ R26 rv1590 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1587)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1587)));
return rv1590; }
}
}
{ R26 rv1591 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1587))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1587)));
return rv1591; }
}
else if ((l_K_1588 == g_T_STR))
{
{ R26 rv1592 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1592; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1588 == g_T_INT))
{
{ R26 rv1593 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1593; }
}
else if ((l_K_1588 == g_T_BOOL))
{
{ R26 rv1594 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1594; }
}
else if ((l_K_1588 == g_T_FLOAT))
{
{ R26 rv1595 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1595; }
}
else if ((l_K_1588 == g_T_STR))
{
{ R26 rv1596 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1596; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1587));
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
{ rt_int rv1597 = 0;
return rv1597; }
}
{ rt_int rv1598 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1598; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1599; memset(&l_N_1599, 0, sizeof l_N_1599);
l_N_1599 = ((rt_int)0LL);
R27 * l_P_1600; memset(&l_P_1600, 0, sizeof l_P_1600);
l_P_1600 = p_A;
for (;;) {
if ((l_P_1600 == NULL)) goto L_end1601;
{
l_N_1599 = rt_add(l_N_1599, ((rt_int)1LL));
l_P_1600 = ((*(R27 *)rt_nil_check(l_P_1600))).f_NEXT;
}
RT_B_TICK();
} L_end1601: ;
{ rt_int rv1602 = l_N_1599;
return rv1602; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1603; memset(&l_HEAD_1603, 0, sizeof l_HEAD_1603);
l_HEAD_1603 = NULL;
R27 * l_TAIL_1604; memset(&l_TAIL_1604, 0, sizeof l_TAIL_1604);
l_TAIL_1604 = NULL;
rt_int l_G_1605; memset(&l_G_1605, 0, sizeof l_G_1605);
l_G_1605 = ((rt_int)0LL);
{ rt_int it1607_lo = ((rt_int)0LL), it1607_hi = ((rt_int)2LL);
for (rt_int it1607 = it1607_lo; it1607 <= it1607_hi; it1607++) {
{
{
R21 * l_P_1608; memset(&l_P_1608, 0, sizeof l_P_1608);
l_P_1608 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1607 == ((rt_int)1LL)))
{
l_P_1608 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1607 == ((rt_int)2LL)))
{
l_P_1608 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1608 == NULL)) goto L_end1609;
{
{
R27 * l_A_1610; memset(&l_A_1610, 0, sizeof l_A_1610);
l_A_1610 = r_NODE_ARG(l_P_1608, it1607, NULL);
if ((l_TAIL_1604 == NULL))
{
l_HEAD_1603 = l_A_1610;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1604))).f_NEXT = l_A_1610;
}
l_TAIL_1604 = l_A_1610;
}
l_P_1608 = ((*(R21 *)rt_nil_check(l_P_1608))).f_NEXT;
}
RT_B_TICK();
} L_end1609: ;
}
}
RT_B_TICK();
if (it1607 == it1607_hi) break;
} } L_end1606: ;
{ R27 * rv1611 = l_HEAD_1603;
return rv1611; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1612; memset(&l_SAVED_1612, 0, sizeof l_SAVED_1612);
l_SAVED_1612 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1613; memset(&l_V_1613, 0, sizeof l_V_1613);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R26(&l_V_1613, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1612;
{ R26 rv1614 = l_V_1613;
return rv1614; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1615; memset(&l_ARGS_1615, 0, sizeof l_ARGS_1615);
l_ARGS_1615 = r_CALL_ARGS(p_E);
R12 * l_Y_1616; memset(&l_Y_1616, 0, sizeof l_Y_1616);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1617 = r_START_IO_CALL(p_E);
return rv1617; }
}
l_Y_1616 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1616 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1616))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1618 = r_BUILTIN(p_E, p_WANT);
return rv1618; }
}
{ R26 rv1619 = r_CALL_SYM(l_Y_1616, l_ARGS_1615, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1619; }
}
l_Y_1616 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1615, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1616 == NULL))
{
{
R12 * l_P_1620; memset(&l_P_1620, 0, sizeof l_P_1620);
l_P_1620 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1620 == NULL)) goto L_end1621;
{
if ((((*(R12 *)rt_nil_check(l_P_1620))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1622 = r_BUILTIN(p_E, p_WANT);
return rv1622; }
}
l_P_1620 = r_LOOKUP_NEXT(l_P_1620);
}
RT_B_TICK();
} L_end1621: ;
}
{
R12 * l_B_1623; memset(&l_B_1623, 0, sizeof l_B_1623);
l_B_1623 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1623 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1623))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1624 = r_BUILTIN(p_E, p_WANT);
return rv1624; }
}
if (((((*(R12 *)rt_nil_check(l_B_1623))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1623))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1625 = r_CALL_SYM(l_Y_1616, l_ARGS_1615, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1625; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1626; memset(&l_B_1626, 0, sizeof l_B_1626);
l_B_1626 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1627; memset(&l_S_1627, 0, sizeof l_S_1627);
l_S_1627 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1627, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1629_lo = ((rt_int)1LL), it1629_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1629 = it1629_lo; it1629 <= it1629_hi; it1629++) {
{
if (rt_b_eq(rt_b_slice(l_S_1627, it1629, it1629), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1627, ((rt_int)0LL), rt_sub(it1629, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1630 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1627, rt_add(it1629, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1630; }
}
goto L_end1628;
}
}
RT_B_TICK();
if (it1629 == it1629_hi) break;
} } L_end1628: ;
}
for (;;) {
if ((l_B_1626 == NULL)) goto L_end1631;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1626))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1626))).f_NAME, p_NAME)))
{
{ R12 * rv1632 = ((*(R20 *)rt_nil_check(l_B_1626))).f_R;
return rv1632; }
}
l_B_1626 = ((*(R20 *)rt_nil_check(l_B_1626))).f_NEXT;
}
RT_B_TICK();
} L_end1631: ;
{ R12 * rv1633 = NULL;
return rv1633; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1634 = 0;
return rv1634; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1635 = 0;
return rv1635; }
}
}
}
{ rt_int rv1636 = 1;
return rv1636; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1637; memset(&l_Y_1637, 0, sizeof l_Y_1637);
l_Y_1637 = r_LOOKUP(p_NAME);
R12 * l_BEST_1638; memset(&l_BEST_1638, 0, sizeof l_BEST_1638);
l_BEST_1638 = NULL;
rt_int l_BEST_SCORE_1639; memset(&l_BEST_SCORE_1639, 0, sizeof l_BEST_SCORE_1639);
l_BEST_SCORE_1639 = ((rt_int)0LL);
rt_int l_TIES_1640; memset(&l_TIES_1640, 0, sizeof l_TIES_1640);
l_TIES_1640 = ((rt_int)0LL);
rt_int l_COUNT_1641; memset(&l_COUNT_1641, 0, sizeof l_COUNT_1641);
l_COUNT_1641 = ((rt_int)0LL);
rt_int l_N_1642; memset(&l_N_1642, 0, sizeof l_N_1642);
l_N_1642 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1637 == NULL)) goto L_end1643;
{
if ((!r_IS_ROUTINE(l_Y_1637)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1637))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1643;
}
}
else if (r_CANDIDATE(l_Y_1637, p_NAME))
{
{
R12 * l_R_1644; memset(&l_R_1644, 0, sizeof l_R_1644);
l_R_1644 = r_ORIGINAL(l_Y_1637);
rt_int l_SCORE_1645; memset(&l_SCORE_1645, 0, sizeof l_SCORE_1645);
r_ROUTINE_HEADER(l_R_1644);
if ((((r_PARAM_COUNT(l_R_1644) == l_N_1642) && (!r_SEEN_ROUTINE(l_R_1644, p_NAME, l_Y_1637))) && (!r_HIDDEN_ROUTINE(l_R_1644, p_NAME, l_Y_1637))))
{
l_COUNT_1641 = rt_add(l_COUNT_1641, ((rt_int)1LL));
l_SCORE_1645 = r_MATCH_SCORE(l_R_1644, p_ARGS);
if ((l_SCORE_1645 > l_BEST_SCORE_1639))
{
l_BEST_1638 = l_R_1644;
l_BEST_SCORE_1639 = l_SCORE_1645;
l_TIES_1640 = ((rt_int)0LL);
}
else if (((l_SCORE_1645 == l_BEST_SCORE_1639) && (l_SCORE_1645 > ((rt_int)0LL))))
{
l_TIES_1640 = rt_add(l_TIES_1640, ((rt_int)1LL));
}
}
}
}
l_Y_1637 = r_LOOKUP_NEXT(l_Y_1637);
}
RT_B_TICK();
} L_end1643: ;
if (((l_TIES_1640 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1646 = l_BEST_1638;
return rv1646; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1647; memset(&l_Y_1647, 0, sizeof l_Y_1647);
l_Y_1647 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1647 == p_STOP) || (l_Y_1647 == NULL))) goto L_end1648;
{
if ((((*(R12 *)rt_nil_check(l_Y_1647))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1647) == p_R))
{
{ rt_int rv1649 = 1;
return rv1649; }
}
}
l_Y_1647 = r_LOOKUP_NEXT(l_Y_1647);
}
RT_B_TICK();
} L_end1648: ;
{ rt_int rv1650 = 0;
return rv1650; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1651; memset(&l_Y_1651, 0, sizeof l_Y_1651);
l_Y_1651 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1651 == p_STOP) || (l_Y_1651 == NULL))) goto L_end1652;
{
if (((((*(R12 *)rt_nil_check(l_Y_1651))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_1651))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_1653; memset(&l_O_1653, 0, sizeof l_O_1653);
l_O_1653 = r_ORIGINAL(l_Y_1651);
if ((!(l_O_1653 == p_R)))
{
r_ROUTINE_HEADER(l_O_1653);
if (r_SAME_SIGNATURE(l_O_1653, p_R))
{
{ rt_int rv1654 = 1;
return rv1654; }
}
}
}
}
l_Y_1651 = r_LOOKUP_NEXT(l_Y_1651);
}
RT_B_TICK();
} L_end1652: ;
{ rt_int rv1655 = 0;
return rv1655; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_1656; memset(&l_P_1656, 0, sizeof l_P_1656);
l_P_1656 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_1657; memset(&l_Q_1657, 0, sizeof l_Q_1657);
l_Q_1657 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv1658 = 0;
return rv1658; }
}
for (;;) {
if (((l_P_1656 == NULL) || (l_Q_1657 == NULL))) goto L_end1659;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1656))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_1657))).f_MODE)))
{
{ rt_int rv1660 = 0;
return rv1660; }
}
if (((((*(R28 *)rt_nil_check(l_P_1656))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_1657))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_1656))).f_T == ((*(R28 *)rt_nil_check(l_Q_1657))).f_T)))
{
{ rt_int rv1661 = 0;
return rv1661; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1656))).f_T, ((*(R28 *)rt_nil_check(l_Q_1657))).f_T)))
{
{ rt_int rv1662 = 0;
return rv1662; }
}
l_P_1656 = ((*(R28 *)rt_nil_check(l_P_1656))).f_NEXT;
l_Q_1657 = ((*(R28 *)rt_nil_check(l_Q_1657))).f_NEXT;
}
RT_B_TICK();
} L_end1659: ;
{ rt_int rv1663 = ((l_P_1656 == NULL) && (l_Q_1657 == NULL));
return rv1663; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_1664; memset(&l_N_1664, 0, sizeof l_N_1664);
l_N_1664 = ((rt_int)0LL);
R28 * l_P_1665; memset(&l_P_1665, 0, sizeof l_P_1665);
l_P_1665 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1665 == NULL)) goto L_end1666;
{
l_N_1664 = rt_add(l_N_1664, ((rt_int)1LL));
l_P_1665 = ((*(R28 *)rt_nil_check(l_P_1665))).f_NEXT;
}
RT_B_TICK();
} L_end1666: ;
{ rt_int rv1667 = l_N_1664;
return rv1667; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_1668; memset(&l_P_1668, 0, sizeof l_P_1668);
l_P_1668 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1669; memset(&l_A_1669, 0, sizeof l_A_1669);
l_A_1669 = p_ARGS;
rt_int l_EXACT_1670; memset(&l_EXACT_1670, 0, sizeof l_EXACT_1670);
l_EXACT_1670 = 1;
R20 * l_BS_1671; memset(&l_BS_1671, 0, sizeof l_BS_1671);
l_BS_1671 = r_NEW_BINDS();
R22 * l_PT_1672; memset(&l_PT_1672, 0, sizeof l_PT_1672);
for (;;) {
if ((l_P_1668 == NULL)) goto L_end1673;
{
l_PT_1672 = r_FORMAL_VIEW(p_R, l_P_1668);
if ((!(((*(R28 *)rt_nil_check(l_P_1668))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1669))).f_MODE)))
{
{ rt_int rv1674 = ((rt_int)0LL);
return rv1674; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1668))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1668, l_A_1669, l_BS_1671)))
{
{ rt_int rv1675 = ((rt_int)0LL);
return rv1675; }
}
}
else if ((l_PT_1672 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1669))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_1669))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv1676 = ((rt_int)0LL);
return rv1676; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_1669))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1669))).f_E, l_PT_1672)))
{
{ rt_int rv1677 = ((rt_int)0LL);
return rv1677; }
}
}
else
{
r_TYPE_ARG(l_A_1669);
{
R22 * l_AT_1678; memset(&l_AT_1678, 0, sizeof l_AT_1678);
l_AT_1678 = (((*(R27 *)rt_nil_check(l_A_1669))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_1672, l_AT_1678) || (((((*(R22 *)rt_nil_check(l_AT_1678))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1672)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1679 = ((rt_int)0LL);
return rv1679; }
}
if ((!r_SAME_TYPE(l_PT_1672, l_AT_1678)))
{
if ((((*(R28 *)rt_nil_check(l_P_1668))).f_MODE == g_M_INOUT))
{
{ rt_int rv1680 = ((rt_int)0LL);
return rv1680; }
}
l_EXACT_1670 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1678)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1672)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_1668))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_1678))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_1672))).f_SCALE)))
{
{ rt_int rv1681 = ((rt_int)0LL);
return rv1681; }
}
else if (((((*(R28 *)rt_nil_check(l_P_1668))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_1672))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_1678))).f_SCALE)))
{
{ rt_int rv1682 = ((rt_int)0LL);
return rv1682; }
}
}
}
}
l_P_1668 = ((*(R28 *)rt_nil_check(l_P_1668))).f_NEXT;
l_A_1669 = ((*(R27 *)rt_nil_check(l_A_1669))).f_NEXT;
}
RT_B_TICK();
} L_end1673: ;
if (l_EXACT_1670)
{
{ rt_int rv1683 = ((rt_int)2LL);
return rv1683; }
}
{ rt_int rv1684 = ((rt_int)1LL);
return rv1684; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1685; memset(&l_RT_1685, 0, sizeof l_RT_1685);
l_RT_1685 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_ENUM))
{
{ rt_int rv1686 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1685) == NULL));
return rv1686; }
}
{ rt_int rv1687 = 0;
return rv1687; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1688 = (((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_PTR);
return rv1688; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1689 = (((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_REC);
return rv1689; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1690 = (((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_ARR);
return rv1690; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1691 = (((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_INT);
return rv1691; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1692 = ((((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1685))).f_KIND == g_T_SEM));
return rv1692; }
}
{ rt_int rv1693 = 0;
return rv1693; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1694; memset(&l_Y_1694, 0, sizeof l_Y_1694);
l_Y_1694 = r_ORIGINAL(p_Y0);
R28 * l_P_1695; memset(&l_P_1695, 0, sizeof l_P_1695);
R27 * l_A_1696; memset(&l_A_1696, 0, sizeof l_A_1696);
l_A_1696 = p_ARGS;
R10 l_C_1697; memset(&l_C_1697, 0, sizeof l_C_1697);
S_R10(&l_C_1697, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1698; memset(&l_SEP_1698, 0, sizeof l_SEP_1698);
S_R10(&l_SEP_1698, r_MK(rt_str("", 0)), 0);
R10 l_PRE_1699; memset(&l_PRE_1699, 0, sizeof l_PRE_1699);
S_R10(&l_PRE_1699, r_MK(rt_str("", 0)), 0);
R10 l_POST_1700; memset(&l_POST_1700, 0, sizeof l_POST_1700);
S_R10(&l_POST_1700, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_1701; memset(&l_SHARED_1701, 0, sizeof l_SHARED_1701);
l_SHARED_1701 = 0;
R22 * l_PT_1702; memset(&l_PT_1702, 0, sizeof l_PT_1702);
if (((*(R12 *)rt_nil_check(l_Y_1694))).f_GENERIC)
{
l_Y_1694 = r_INSTANCE(l_Y_1694, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1694, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1694))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1697, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1694))).f_LEVEL), 0);
S_R10(&l_SEP_1698, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_1703; memset(&l_Q_1703, 0, sizeof l_Q_1703);
l_Q_1703 = p_ARGS;
for (;;) {
if ((l_Q_1703 == NULL)) goto L_end1704;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_1703))).f_MODE == g_M_IN)))
{
l_SHARED_1701 = 1;
}
l_Q_1703 = ((*(R27 *)rt_nil_check(l_Q_1703))).f_NEXT;
}
RT_B_TICK();
} L_end1704: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_1694))).f_USES == NULL)))
{
l_SHARED_1701 = 1;
}
}
l_P_1695 = ((*(R12 *)rt_nil_check(l_Y_1694))).f_PARAMS;
for (;;) {
if ((l_P_1695 == NULL)) goto L_end1705;
{
if ((l_A_1696 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_1702 = r_FORMAL_VIEW(l_Y_1694, l_P_1695);
if ((l_PT_1702 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1695))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1702)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1706; memset(&l_V_1706, 0, sizeof l_V_1706);
R10 l_CV_1707; memset(&l_CV_1707, 0, sizeof l_CV_1707);
if ((((*(R27 *)rt_nil_check(l_A_1696))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1696))))
{
S_R26(&l_V_1706, ((*(R27 *)rt_nil_check(l_A_1696))).f_V, 0);
}
else
{
S_R26(&l_V_1706, r_EXPR(((*(R27 *)rt_nil_check(l_A_1696))).f_E, l_PT_1702), 0);
}
S_R10(&l_CV_1707, r_CONVERT(l_V_1706, l_PT_1702, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_1701 && (l_V_1706).f_LVAL) && r_IS_STRUCTURED(l_PT_1702)))
{
S_R10(&l_CV_1707, r_COPY_OF(l_PT_1702, l_CV_1707), 0);
}
S_R10(&l_C_1697, r_FMT3(rt_str("@@@", 3), l_C_1697, l_SEP_1698, l_CV_1707), 0);
S_R10(&l_SEP_1698, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1708; memset(&l_V_1708, 0, sizeof l_V_1708);
if (((*(R27 *)rt_nil_check(l_A_1696))).f_HAVE)
{
S_R26(&l_V_1708, ((*(R27 *)rt_nil_check(l_A_1696))).f_V, 0);
}
else
{
S_R26(&l_V_1708, r_EXPR(((*(R27 *)rt_nil_check(l_A_1696))).f_E, l_PT_1702), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1696))).f_E == NULL)) && (!(l_V_1708).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1696))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1696))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1708, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1708).f_C), (l_V_1708).f_T), 0);
(l_V_1708).f_LVAL = 1;
}
}
if ((!(l_V_1708).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_1702, (l_V_1708).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_1702));
}
if (((((*(R28 *)rt_nil_check(l_P_1695))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_1702, (l_V_1708).f_T) && r_SAME_RANGE(l_PT_1702, (l_V_1708).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_1695))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_1702, (l_V_1708).f_T) && r_SAME_RANGE(l_PT_1702, (l_V_1708).f_T))))))
{
{
R10 l_TMP_1709; memset(&l_TMP_1709, 0, sizeof l_TMP_1709);
S_R10(&l_TMP_1709, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_1710; memset(&l_AP_1710, 0, sizeof l_AP_1710);
S_R10(&l_AP_1710, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_1699, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_1699, r_CTYPE((l_V_1708).f_T), l_AP_1710, (l_V_1708).f_C), 0);
S_R10(&l_PRE_1699, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_1699, r_CTYPE(l_PT_1702), l_TMP_1709, r_COPY_OF((l_V_1708).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1710))), 0);
S_R10(&l_POST_1700, r_FMT2(rt_str("@ @", 3), l_POST_1700, r_STORE_CODE((l_V_1708).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1710), r_MKET(l_TMP_1709, l_PT_1702), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_1697, r_FMT3(rt_str("@@&@", 4), l_C_1697, l_SEP_1698, l_TMP_1709), 0);
}
}
else
{
S_R10(&l_C_1697, r_FMT3(rt_str("@@&@", 4), l_C_1697, l_SEP_1698, (l_V_1708).f_C), 0);
}
S_R10(&l_SEP_1698, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1696 = ((*(R27 *)rt_nil_check(l_A_1696))).f_NEXT;
l_P_1695 = ((*(R28 *)rt_nil_check(l_P_1695))).f_NEXT;
}
RT_B_TICK();
} L_end1705: ;
if ((!(l_A_1696 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_1699).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1711 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_1699, ((*(R12 *)rt_nil_check(l_Y_1694))).f_ACCESS, l_C_1697, l_POST_1700), r_RESULT_VIEW(l_Y_1694));
return rv1711; }
}
{ R26 rv1712 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1694))).f_ACCESS, l_C_1697), r_RESULT_VIEW(l_Y_1694));
return rv1712; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv1713 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv1713; }
}
{ R22 * rv1714 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv1714; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv1715 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1715; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv1716 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1716; }
}
{ R22 * rv1717 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv1717; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv1718 = p_T;
return rv1718; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv1719 = p_T;
return rv1719; }
}
{
R12 * l_M_1720; memset(&l_M_1720, 0, sizeof l_M_1720);
l_M_1720 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_1720 == NULL)) goto L_end1721;
{
{
R12 * l_Y_1722; memset(&l_Y_1722, 0, sizeof l_Y_1722);
l_Y_1722 = r_MEMBER_TYPE(l_M_1720, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_1722 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_1722))).f_EXPORTED)
{
{ R22 * rv1723 = r_ABSTRACT_VIEW(l_Y_1722, p_T);
return rv1723; }
}
{ R22 * rv1724 = p_T;
return rv1724; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_1720))).f_MODL))
{
goto L_end1721;
}
l_M_1720 = ((*(R12 *)rt_nil_check(l_M_1720))).f_MODL;
}
RT_B_TICK();
} L_end1721: ;
}
{ R22 * rv1725 = p_T;
return rv1725; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1726; memset(&l_Y_1726, 0, sizeof l_Y_1726);
l_Y_1726 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_1727; memset(&l_Z_1727, 0, sizeof l_Z_1727);
l_Z_1727 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_1727 == NULL)) goto L_end1728;
{
if ((((((*(R12 *)rt_nil_check(l_Z_1727))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_1727))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_1727))).f_ORIG == NULL)))
{
{ R12 * rv1729 = l_Z_1727;
return rv1729; }
}
l_Z_1727 = r_LOOKUP_NEXT(l_Z_1727);
}
RT_B_TICK();
} L_end1728: ;
}
{ R12 * rv1730 = NULL;
return rv1730; }
}
for (;;) {
if ((l_Y_1726 == NULL)) goto L_end1731;
{
if (((((*(R12 *)rt_nil_check(l_Y_1726))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_1726))).f_NAME, p_NAME)))
{
{ R12 * rv1732 = l_Y_1726;
return rv1732; }
}
l_Y_1726 = ((*(R12 *)rt_nil_check(l_Y_1726))).f_SNEXT;
}
RT_B_TICK();
} L_end1731: ;
{ R12 * rv1733 = NULL;
return rv1733; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1734; memset(&l_K_1734, 0, sizeof l_K_1734);
l_K_1734 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv1735 = ((((l_K_1734 == g_T_STR) || (l_K_1734 == g_T_BITS)) || (l_K_1734 == g_T_ARR)) || (l_K_1734 == g_T_REC));
return rv1735; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1736; memset(&l_RA_1736, 0, sizeof l_RA_1736);
l_RA_1736 = r_REAL_TYPE(p_A);
R22 * l_RB_1737; memset(&l_RB_1737, 0, sizeof l_RB_1737);
l_RB_1737 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_1736)))
{
{ rt_int rv1738 = 1;
return rv1738; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1736))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1736))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1737))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1737))).f_HI_C)))
{
{ rt_int rv1739 = 1;
return rv1739; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_1736))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_1737))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv1740 = ((((*(R22 *)rt_nil_check(l_RA_1736))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_1737))).f_LO_C).f_LEN);
return rv1740; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_1736))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_1737))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_1736))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_1737))).f_MHI).f_OK))
{
{ rt_int rv1741 = (((((*(R22 *)rt_nil_check(l_RA_1736))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_1737))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_1736))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_1737))).f_MHI).f_V));
return rv1741; }
}
{ rt_int rv1742 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_1736))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_1737))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_1736))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_1737))).f_HI_C));
return rv1742; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv1743 = 0;
return rv1743; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1744 = 1;
return rv1744; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1745 = 1;
return rv1745; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1746 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1746; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1747 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1747; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1748 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1748; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1749 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1749; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1750 = 0;
return rv1750; }
}
{
R12 * l_Y_1751; memset(&l_Y_1751, 0, sizeof l_Y_1751);
l_Y_1751 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1752; memset(&l_A_1752, 0, sizeof l_A_1752);
l_A_1752 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1753; memset(&l_F_1753, 0, sizeof l_F_1753);
if ((l_Y_1751 == NULL))
{
{ rt_int rv1754 = 0;
return rv1754; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1751))).f_KIND == g_Y_GEN))
{
{ rt_int rv1755 = 1;
return rv1755; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1751))).f_DECL == NULL))
{
{ rt_int rv1756 = 0;
return rv1756; }
}
l_F_1753 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1751))).f_DECL))).f_A;
for (;;) {
if ((l_F_1753 == NULL)) goto L_end1757;
{
{
R21 * l_N_1758; memset(&l_N_1758, 0, sizeof l_N_1758);
l_N_1758 = ((*(R21 *)rt_nil_check(l_F_1753))).f_A;
for (;;) {
if ((l_N_1758 == NULL)) goto L_end1759;
{
if ((l_A_1752 == NULL))
{
{ rt_int rv1760 = 0;
return rv1760; }
}
if (((((*(R21 *)rt_nil_check(l_F_1753))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_1752))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_1752))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1752)))))
{
{ rt_int rv1761 = 1;
return rv1761; }
}
l_A_1752 = ((*(R21 *)rt_nil_check(l_A_1752))).f_NEXT;
l_N_1758 = ((*(R21 *)rt_nil_check(l_N_1758))).f_NEXT;
}
RT_B_TICK();
} L_end1759: ;
}
l_F_1753 = ((*(R21 *)rt_nil_check(l_F_1753))).f_NEXT;
}
RT_B_TICK();
} L_end1757: ;
}
}
{ rt_int rv1762 = 0;
return rv1762; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_1763; memset(&l_P_1763, 0, sizeof l_P_1763);
l_P_1763 = p_A;
for (;;) {
if ((l_P_1763 == NULL)) goto L_end1764;
{
if (((((*(R21 *)rt_nil_check(l_P_1763))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_1763))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1765 = 1;
return rv1765; }
}
l_P_1763 = ((*(R21 *)rt_nil_check(l_P_1763))).f_NEXT;
}
RT_B_TICK();
} L_end1764: ;
{ rt_int rv1766 = 0;
return rv1766; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1767; memset(&l_R_1767, 0, sizeof l_R_1767);
l_R_1767 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_1768; memset(&l_P_1768, 0, sizeof l_P_1768);
R28 * l_TAIL_1769; memset(&l_TAIL_1769, 0, sizeof l_TAIL_1769);
l_TAIL_1769 = NULL;
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1768 = ((*(R21 *)rt_nil_check(l_R_1767))).f_A;
for (;;) {
if ((l_P_1768 == NULL)) goto L_end1770;
{
if (((((*(R21 *)rt_nil_check(l_P_1768))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_1768))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1768 = ((*(R21 *)rt_nil_check(l_P_1768))).f_NEXT;
}
RT_B_TICK();
} L_end1770: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_1767))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1768 = ((*(R21 *)rt_nil_check(l_R_1767))).f_A;
for (;;) {
if ((l_P_1768 == NULL)) goto L_end1771;
{
{
R28 * l_PM_1772; memset(&l_PM_1772, 0, sizeof l_PM_1772);
l_PM_1772 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1772)), ({ R28 rc1773; memset(&rc1773, 0, sizeof rc1773);  S_R10(&rc1773.f_NAME, ((*(R21 *)rt_nil_check(l_P_1768))).f_NAME, 0); rc1773.f_MODE = ((*(R21 *)rt_nil_check(l_P_1768))).f_IV; rc1773.f_T = NULL; rc1773.f_TS = ((*(R21 *)rt_nil_check(l_P_1768))).f_B; rc1773.f_NEXT = NULL; rc1773; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_1767))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_1768))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1768))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_1772))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1768))).f_B);
}
if ((l_TAIL_1769 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1772;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1769))).f_NEXT = l_PM_1772;
}
l_TAIL_1769 = l_PM_1772;
}
l_P_1768 = ((*(R21 *)rt_nil_check(l_P_1768))).f_NEXT;
}
RT_B_TICK();
} L_end1771: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1774; memset(&l_R_1774, 0, sizeof l_R_1774);
l_R_1774 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_1775; memset(&l_T_1775, 0, sizeof l_T_1775);
if ((((*(R21 *)rt_nil_check(l_R_1774))).f_B == NULL))
{
{ R22 * rv1776 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1776; }
}
r_OPEN_SCOPE();
{
R28 * l_P_1777; memset(&l_P_1777, 0, sizeof l_P_1777);
l_P_1777 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1777 == NULL)) goto L_end1778;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1777))).f_T == NULL)))
{
{
R12 * l_V_1779; memset(&l_V_1779, 0, sizeof l_V_1779);
l_V_1779 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_1777))).f_NAME);
((*(R12 *)rt_nil_check(l_V_1779))).f_T = ((*(R28 *)rt_nil_check(l_P_1777))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_1779))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_1777))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_1779))).f_INPUT = 1;
r_DEFINE(l_V_1779, ((*(R21 *)rt_nil_check(l_R_1774))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_1777))).f_T, ((*(R12 *)rt_nil_check(l_V_1779))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_1774))).f_LINE, 0);
}
}
l_P_1777 = ((*(R28 *)rt_nil_check(l_P_1777))).f_NEXT;
}
RT_B_TICK();
} L_end1778: ;
}
l_T_1775 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_1774))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv1780 = l_T_1775;
return rv1780; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_1781; memset(&l_PS_1781, 0, sizeof l_PS_1781);
S_R10(&l_PS_1781, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1782; memset(&l_SEP_1782, 0, sizeof l_SEP_1782);
S_R10(&l_SEP_1782, r_MK(rt_str("", 0)), 0);
R28 * l_P_1783; memset(&l_P_1783, 0, sizeof l_P_1783);
l_P_1783 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_1781, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_1782, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_1783 == NULL)) goto L_end1784;
{
if ((((*(R28 *)rt_nil_check(l_P_1783))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1783))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1783))).f_MODE == g_M_IN))
{
S_R10(&l_PS_1781, r_FMT4(rt_str("@@@ p_@", 7), l_PS_1781, l_SEP_1782, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1783))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_1783))).f_NAME)), 0);
S_R10(&l_SEP_1782, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_1781, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_1781, l_SEP_1782, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1783))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_1783))).f_NAME)), 0);
S_R10(&l_SEP_1782, r_MK(rt_str(", ", 2)), 0);
}
l_P_1783 = ((*(R28 *)rt_nil_check(l_P_1783))).f_NEXT;
}
RT_B_TICK();
} L_end1784: ;
if (((l_PS_1781).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_1781, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv1785 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_1781);
return rv1785; }
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
R25 * l_B_1786; memset(&l_B_1786, 0, sizeof l_B_1786);
l_B_1786 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1787; memset(&l_I_1787, 0, sizeof l_I_1787);
l_I_1787 = ((rt_int)0LL);
for (;;) {
if ((l_B_1786 == NULL)) goto L_end1788;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1786))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1786))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_1787)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1786))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1786))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_1786))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1786))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_1787)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1786))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_1787), p_PC, r_NUM(l_I_1787)), ((*(R25 *)rt_nil_check(l_B_1786))).f_LO), p_LINE, p_CHECK);
}
}
l_I_1787 = rt_add(l_I_1787, ((rt_int)1LL));
l_B_1786 = ((*(R25 *)rt_nil_check(l_B_1786))).f_NEXT;
}
RT_B_TICK();
} L_end1788: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_1789; memset(&l_U_1789, 0, sizeof l_U_1789);
l_U_1789 = r_REAL_TYPE(p_T);
R24 * l_F_1790; memset(&l_F_1790, 0, sizeof l_F_1790);
l_F_1790 = ((*(R22 *)rt_nil_check(l_U_1789))).f_FIELDS;
R25 * l_A_1791; memset(&l_A_1791, 0, sizeof l_A_1791);
l_A_1791 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_1790 == NULL) || (l_A_1791 == NULL))) goto L_end1792;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1790))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_1791))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_1791))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_1790))).f_CNAME), p_LINE, p_CHECK);
}
l_A_1791 = ((*(R25 *)rt_nil_check(l_A_1791))).f_NEXT;
}
l_F_1790 = ((*(R24 *)rt_nil_check(l_F_1790))).f_NEXT;
}
RT_B_TICK();
} L_end1792: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1793 = 0;
return rv1793; }
}
{ rt_int rv1794 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1794; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv1795 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv1795; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_1796; memset(&l_OLD_1796, 0, sizeof l_OLD_1796);
l_OLD_1796 = r_LOOKUP(p_NAME);
if ((!(l_OLD_1796 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_1796))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_1796))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_1796))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_1797; memset(&l_G_1797, 0, sizeof l_G_1797);
l_G_1797 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_1797))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_1797))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_1797))).f_INPUT = 1;
r_DEFINE(l_G_1797, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_1798; memset(&l_B_1798, 0, sizeof l_B_1798);
l_B_1798 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1798)), ({ R20 rc1799; memset(&rc1799, 0, sizeof rc1799);  S_R10(&rc1799.f_NAME, r_NO_TEXT(), 0); rc1799.f_T = NULL; S_R10(&rc1799.f_C, r_NO_TEXT(), 0); rc1799.f_HASMV = 0; rc1799.f_MV = ((rt_int)0LL); rc1799.f_R = NULL; rc1799.f_NEXT = NULL; rc1799; }), 0);
{ R20 * rv1800 = l_B_1798;
return rv1800; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_1801; memset(&l_B_1801, 0, sizeof l_B_1801);
l_B_1801 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1801)), ({ R20 rc1802; memset(&rc1802, 0, sizeof rc1802);  S_R10(&rc1802.f_NAME, p_NAME, 0); rc1802.f_T = p_T; S_R10(&rc1802.f_C, r_NO_TEXT(), 0); rc1802.f_HASMV = (p_M).f_OK; rc1802.f_MV = (p_M).f_V; rc1802.f_R = p_R; rc1802.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc1802; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_1801))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_1801;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1803; memset(&l_B_1803, 0, sizeof l_B_1803);
l_B_1803 = p_BS;
for (;;) {
if ((l_B_1803 == NULL)) goto L_end1804;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_1803))).f_NAME, p_NAME))
{
{ R20 * rv1805 = l_B_1803;
return rv1805; }
}
l_B_1803 = ((*(R20 *)rt_nil_check(l_B_1803))).f_NEXT;
}
RT_B_TICK();
} L_end1804: ;
{ R20 * rv1806 = NULL;
return rv1806; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_1807; memset(&l_RT_1807, 0, sizeof l_RT_1807);
l_RT_1807 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv1808 = 1;
return rv1808; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv1809 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv1809; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1810 = 1;
return rv1810; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1811 = 1;
return rv1811; }
}
{
R20 * l_B_1812; memset(&l_B_1812, 0, sizeof l_B_1812);
l_B_1812 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_1812 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_1812))).f_T == NULL))
{
{ rt_int rv1813 = 0;
return rv1813; }
}
{ rt_int rv1814 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_1812))).f_T, p_T);
return rv1814; }
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
{ rt_int rv1815 = 1;
return rv1815; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_ARR)))
{
{ rt_int rv1816 = 0;
return rv1816; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_1807))).f_DIMS)))
{
{ rt_int rv1817 = 0;
return rv1817; }
}
{ rt_int rv1818 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_1807))).f_ELEM, p_BS);
return rv1818; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv1819 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1819; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1820 = 0;
return rv1820; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_1807))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_1807))).f_MHI, p_BS))))
{
{ rt_int rv1821 = 0;
return rv1821; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_INT)))
{
{ rt_int rv1822 = 0;
return rv1822; }
}
{ rt_int rv1823 = (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1807))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
return rv1823; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv1824 = ((((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_1807))).f_SCALE == ((rt_int)0LL)));
return rv1824; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1825 = 0;
return rv1825; }
}
{ rt_int rv1826 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1807))).f_SCALE), p_BS);
return rv1826; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv1827 = (((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_BOOL);
return rv1827; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv1828 = (((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_STR);
return rv1828; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_STR)))
{
{ rt_int rv1829 = 0;
return rv1829; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv1830 = 1;
return rv1830; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_1807))).f_BASE == NULL)))
{
{ rt_int rv1831 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_1807))).f_BASE, p_BS);
return rv1831; }
}
{ rt_int rv1832 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv1832; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv1833 = (((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_BITS);
return rv1833; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv1834 = (((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_SEM);
return rv1834; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_PTR)))
{
{ rt_int rv1835 = 0;
return rv1835; }
}
{ rt_int rv1836 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_1807), p_BS);
return rv1836; }
}
{
R12 * l_Y_1837; memset(&l_Y_1837, 0, sizeof l_Y_1837);
l_Y_1837 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_1837 == NULL))
{
{ rt_int rv1838 = 0;
return rv1838; }
}
if (((((*(R12 *)rt_nil_check(l_Y_1837))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_1837))).f_DECL == NULL)))
{
{ rt_int rv1839 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_1837))).f_T, p_T);
return rv1839; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1837))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv1840 = 0;
return rv1840; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_1837))))
{
{ rt_int rv1841 = 0;
return rv1841; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1837))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1807))).f_KIND == g_T_REC)))
{
{ rt_int rv1842 = 0;
return rv1842; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1807))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv1843 = 0;
return rv1843; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1807))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_1837))))
{
{ rt_int rv1844 = 0;
return rv1844; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv1845 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1845; }
}
{ rt_int rv1846 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1837))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1837))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_1807, p_BS);
return rv1846; }
}
{
R21 * l_F_1847; memset(&l_F_1847, 0, sizeof l_F_1847);
l_F_1847 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1837))).f_DECL))).f_A;
R21 * l_A_1848; memset(&l_A_1848, 0, sizeof l_A_1848);
l_A_1848 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_1849; memset(&l_V_1849, 0, sizeof l_V_1849);
l_V_1849 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_1850; memset(&l_CLASS_1850, 0, sizeof l_CLASS_1850);
l_CLASS_1850 = r_RECORD_CLASS_OF(l_RT_1807);
for (;;) {
if ((l_F_1847 == NULL)) goto L_end1851;
{
{
R21 * l_N_1852; memset(&l_N_1852, 0, sizeof l_N_1852);
l_N_1852 = ((*(R21 *)rt_nil_check(l_F_1847))).f_A;
for (;;) {
if ((l_N_1852 == NULL)) goto L_end1853;
{
if ((l_A_1848 == NULL))
{
{ rt_int rv1854 = 0;
return rv1854; }
}
if ((((*(R21 *)rt_nil_check(l_F_1847))).f_B == NULL))
{
if ((!(l_CLASS_1850 == NULL)))
{
{
R20 * l_B_1855; memset(&l_B_1855, 0, sizeof l_B_1855);
l_B_1855 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_1850))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_1852))).f_NAME);
if ((!(l_B_1855 == NULL)))
{
if ((!r_UNIFY(l_A_1848, ((*(R20 *)rt_nil_check(l_B_1855))).f_T, p_BS)))
{
{ rt_int rv1856 = 0;
return rv1856; }
}
}
}
}
}
else
{
if ((!(l_V_1849 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_1848))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_1848))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_1848))).f_KIND == g_N_ANY))))
{
{
R23 l_M_1857; memset(&l_M_1857, 0, sizeof l_M_1857);
S_R23(&l_M_1857, r_MANIFEST(l_A_1848), 0);
if (((l_M_1857).f_OK && (((*(R25 *)rt_nil_check(l_V_1849))).f_MLO).f_OK))
{
if ((!((l_M_1857).f_V == (((*(R25 *)rt_nil_check(l_V_1849))).f_MLO).f_V)))
{
{ rt_int rv1858 = 0;
return rv1858; }
}
}
}
}
l_V_1849 = ((*(R25 *)rt_nil_check(l_V_1849))).f_NEXT;
}
}
l_A_1848 = ((*(R21 *)rt_nil_check(l_A_1848))).f_NEXT;
l_N_1852 = ((*(R21 *)rt_nil_check(l_N_1852))).f_NEXT;
}
RT_B_TICK();
} L_end1853: ;
}
l_F_1847 = ((*(R21 *)rt_nil_check(l_F_1847))).f_NEXT;
}
RT_B_TICK();
} L_end1851: ;
}
{ rt_int rv1859 = 1;
return rv1859; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_1860; memset(&l_R_1860, 0, sizeof l_R_1860);
l_R_1860 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv1861 = NULL;
return rv1861; }
}
for (;;) {
if ((l_R_1860 == NULL)) goto L_end1862;
{
if ((((*(R12 *)rt_nil_check(l_R_1860))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv1863 = l_R_1860;
return rv1863; }
}
l_R_1860 = ((*(R12 *)rt_nil_check(l_R_1860))).f_INSTANCES;
}
RT_B_TICK();
} L_end1862: ;
{ R12 * rv1864 = NULL;
return rv1864; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv1865 = 1;
return rv1865; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1866 = 1;
return rv1866; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1867 = 1;
return rv1867; }
}
{
R20 * l_B_1868; memset(&l_B_1868, 0, sizeof l_B_1868);
l_B_1868 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_1868 == NULL)))
{
{ rt_int rv1869 = ((((*(R20 *)rt_nil_check(l_B_1868))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_1868))).f_MV == (p_M).f_V));
return rv1869; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv1870 = 0;
return rv1870; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv1871 = 1;
return rv1871; }
}
{
R23 l_V_1872; memset(&l_V_1872, 0, sizeof l_V_1872);
S_R23(&l_V_1872, r_MANIFEST(p_A), 0);
if (((l_V_1872).f_OK && (p_M).f_OK))
{
{ rt_int rv1873 = ((l_V_1872).f_V == (p_M).f_V);
return rv1873; }
}
}
{ rt_int rv1874 = 1;
return rv1874; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1875 = 0;
return rv1875; }
}
{ rt_int rv1876 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv1876; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv1877 = 1;
return rv1877; }
}
r_TYPE_ARG(p_A);
{ rt_int rv1878 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv1878; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_1879; memset(&l_BS_1879, 0, sizeof l_BS_1879);
l_BS_1879 = r_NEW_BINDS();
R28 * l_P_1880; memset(&l_P_1880, 0, sizeof l_P_1880);
l_P_1880 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_1881; memset(&l_A_1881, 0, sizeof l_A_1881);
l_A_1881 = p_ARGS;
for (;;) {
if ((l_P_1880 == NULL)) goto L_end1882;
{
if ((((*(R28 *)rt_nil_check(l_P_1880))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1881))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1880))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_1881))).f_E), r_NO_MVAL(), NULL, l_BS_1879);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1880))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1880))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_1880))).f_TS, ((*(R27 *)rt_nil_check(l_A_1881))).f_E, p_LINE), l_BS_1879);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_1881))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_1881))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_1880))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1881))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_1881))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_1881))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_1881))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_1881))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_1880))).f_TS, (((*(R27 *)rt_nil_check(l_A_1881))).f_V).f_T, l_BS_1879)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_1880))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1880))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_1880))).f_NAME, (((*(R28 *)rt_nil_check(l_P_1880))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_1881))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_1879);
}
}
l_P_1880 = ((*(R28 *)rt_nil_check(l_P_1880))).f_NEXT;
l_A_1881 = ((*(R27 *)rt_nil_check(l_A_1881))).f_NEXT;
}
RT_B_TICK();
} L_end1882: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_1879);
{
R12 * l_I_1883; memset(&l_I_1883, 0, sizeof l_I_1883);
l_I_1883 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_1883 == NULL)) goto L_end1884;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_1883))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_1879))).f_NEXT))
{
{ R12 * rv1885 = l_I_1883;
return rv1885; }
}
l_I_1883 = ((*(R12 *)rt_nil_check(l_I_1883))).f_INSTANCES;
}
RT_B_TICK();
} L_end1884: ;
}
{ R12 * rv1886 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_1879))).f_NEXT, p_ARGS);
return rv1886; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_1887; memset(&l_P_1887, 0, sizeof l_P_1887);
l_P_1887 = p_A;
for (;;) {
if ((l_P_1887 == NULL)) goto L_end1888;
{
{
R20 * l_Q_1889; memset(&l_Q_1889, 0, sizeof l_Q_1889);
l_Q_1889 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_1887))).f_NAME);
if ((l_Q_1889 == NULL))
{
{ rt_int rv1890 = 0;
return rv1890; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_1887))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_1889))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_1887))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_1889))).f_T == NULL)))
{
{ rt_int rv1891 = 0;
return rv1891; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1887))).f_T, ((*(R20 *)rt_nil_check(l_Q_1889))).f_T)))
{
{ rt_int rv1892 = 0;
return rv1892; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_1887))).f_T, ((*(R20 *)rt_nil_check(l_Q_1889))).f_T)))
{
{ rt_int rv1893 = 0;
return rv1893; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_1887))).f_T, ((*(R20 *)rt_nil_check(l_Q_1889))).f_T)))
{
{ rt_int rv1894 = 0;
return rv1894; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_1887))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_1889))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_1887))).f_MV == ((*(R20 *)rt_nil_check(l_Q_1889))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_1887))).f_R == ((*(R20 *)rt_nil_check(l_Q_1889))).f_R))))
{
{ rt_int rv1895 = 0;
return rv1895; }
}
}
l_P_1887 = ((*(R20 *)rt_nil_check(l_P_1887))).f_NEXT;
}
RT_B_TICK();
} L_end1888: ;
{ rt_int rv1896 = 1;
return rv1896; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1897; memset(&l_RA_1897, 0, sizeof l_RA_1897);
l_RA_1897 = r_REAL_TYPE(p_A);
R22 * l_RB_1898; memset(&l_RB_1898, 0, sizeof l_RB_1898);
l_RB_1898 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_1897))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_1897))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_1897))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_1898))).f_KIND))))
{
{ rt_int rv1899 = 1;
return rv1899; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1897))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1898))).f_MLEN).f_OK))
{
{ rt_int rv1900 = ((((*(R22 *)rt_nil_check(l_RA_1897))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1898))).f_MLEN).f_V);
return rv1900; }
}
{ rt_int rv1901 = ((((*(R22 *)rt_nil_check(l_RA_1897))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_1898))).f_MLEN).f_OK);
return rv1901; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_1902; memset(&l_RA_1902, 0, sizeof l_RA_1902);
l_RA_1902 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_1903; memset(&l_RB_1903, 0, sizeof l_RB_1903);
l_RB_1903 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_1902 == NULL) || (l_RB_1903 == NULL)))
{
{ rt_int rv1904 = (l_RA_1902 == l_RB_1903);
return rv1904; }
}
if ((l_RA_1902 == l_RB_1903))
{
{ rt_int rv1905 = 1;
return rv1905; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_1902))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_1903))).f_NAME)))
{
{ rt_int rv1906 = 0;
return rv1906; }
}
{
R21 * l_X_1907; memset(&l_X_1907, 0, sizeof l_X_1907);
l_X_1907 = ((*(R21 *)rt_nil_check(l_RA_1902))).f_A;
R21 * l_Y_1908; memset(&l_Y_1908, 0, sizeof l_Y_1908);
l_Y_1908 = ((*(R21 *)rt_nil_check(l_RB_1903))).f_A;
for (;;) {
if (((l_X_1907 == NULL) || (l_Y_1908 == NULL))) goto L_end1909;
{
if (((((((*(R21 *)rt_nil_check(l_X_1907))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_1907))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_1908))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_1908))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_1907))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_1908))).f_NAME)))
{
{ rt_int rv1910 = 0;
return rv1910; }
}
}
else
{
{
R23 l_MX_1911; memset(&l_MX_1911, 0, sizeof l_MX_1911);
S_R23(&l_MX_1911, r_MANIFEST(l_X_1907), 0);
R23 l_MY_1912; memset(&l_MY_1912, 0, sizeof l_MY_1912);
S_R23(&l_MY_1912, r_MANIFEST(l_Y_1908), 0);
if (((!((l_MX_1911).f_OK == (l_MY_1912).f_OK)) || (!((l_MX_1911).f_V == (l_MY_1912).f_V))))
{
{ rt_int rv1913 = 0;
return rv1913; }
}
}
}
l_X_1907 = ((*(R21 *)rt_nil_check(l_X_1907))).f_NEXT;
l_Y_1908 = ((*(R21 *)rt_nil_check(l_Y_1908))).f_NEXT;
}
RT_B_TICK();
} L_end1909: ;
{ rt_int rv1914 = ((((l_X_1907 == NULL) && (l_Y_1908 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_1902))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_1903))).f_B == NULL));
return rv1914; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1915; memset(&l_Y_1915, 0, sizeof l_Y_1915);
l_Y_1915 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_1916; memset(&l_FOUND_1916, 0, sizeof l_FOUND_1916);
l_FOUND_1916 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_1915 == NULL)) goto L_end1917;
{
if ((((*(R12 *)rt_nil_check(l_Y_1915))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_1918; memset(&l_R_1918, 0, sizeof l_R_1918);
l_R_1918 = r_ORIGINAL(l_Y_1915);
r_ROUTINE_HEADER(l_R_1918);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_1918)) && (!((*(R12 *)rt_nil_check(l_R_1918))).f_GENERIC)))
{
if (((!(l_FOUND_1916 == NULL)) && (!(l_FOUND_1916 == l_R_1918))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_1916 = l_R_1918;
}
}
}
l_Y_1915 = r_LOOKUP_NEXT(l_Y_1915);
}
RT_B_TICK();
} L_end1917: ;
if ((l_FOUND_1916 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_1916))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv1919 = l_FOUND_1916;
return rv1919; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_1920; memset(&l_NEEDL_1920, 0, sizeof l_NEEDL_1920);
l_NEEDL_1920 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_1921; memset(&l_SAVED_1921, 0, sizeof l_SAVED_1921);
l_SAVED_1921 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_1920 == NULL)) goto L_end1922;
{
{
R21 * l_T_1923; memset(&l_T_1923, 0, sizeof l_T_1923);
l_T_1923 = ((*(R21 *)rt_nil_check(l_NEEDL_1920))).f_A;
for (;;) {
if ((l_T_1923 == NULL)) goto L_end1924;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_1923))).f_NAME) == NULL))
{
{
R27 * l_ARGS_1925; memset(&l_ARGS_1925, 0, sizeof l_ARGS_1925);
l_ARGS_1925 = NULL;
R27 * l_TAIL_1926; memset(&l_TAIL_1926, 0, sizeof l_TAIL_1926);
l_TAIL_1926 = NULL;
R21 * l_P_1927; memset(&l_P_1927, 0, sizeof l_P_1927);
l_P_1927 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_1923))).f_B))).f_A;
R12 * l_R_1928; memset(&l_R_1928, 0, sizeof l_R_1928);
rt_int l_ENTERED_1929; memset(&l_ENTERED_1929, 0, sizeof l_ENTERED_1929);
l_ENTERED_1929 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_1927 == NULL)) goto L_end1930;
{
{
R27 * l_A_1931; memset(&l_A_1931, 0, sizeof l_A_1931);
if ((((*(R21 *)rt_nil_check(l_P_1927))).f_B == NULL))
{
l_A_1931 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_1931 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1927))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_1931))).f_MODE = ((*(R21 *)rt_nil_check(l_P_1927))).f_IV;
if ((l_TAIL_1926 == NULL))
{
l_ARGS_1925 = l_A_1931;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1926))).f_NEXT = l_A_1931;
}
l_TAIL_1926 = l_A_1931;
}
l_P_1927 = ((*(R21 *)rt_nil_check(l_P_1927))).f_NEXT;
}
RT_B_TICK();
} L_end1930: ;
if (l_ENTERED_1929)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_1928 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_1923))).f_NAME, l_ARGS_1925, p_LINE, 0);
if ((l_R_1928 == NULL))
{
l_R_1928 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_1923))).f_NAME);
for (;;) {
if ((l_R_1928 == NULL)) goto L_end1932;
{
if ((((*(R12 *)rt_nil_check(l_R_1928))).f_KIND == g_Y_BUILTIN))
{
goto L_end1932;
}
l_R_1928 = r_LOOKUP_NEXT(l_R_1928);
}
RT_B_TICK();
} L_end1932: ;
}
if (((l_R_1928 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_1923))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_1923))).f_NAME);
}
if ((!(l_R_1928 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_1923))).f_NAME, NULL, r_NO_MVAL(), l_R_1928, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_1923 = ((*(R21 *)rt_nil_check(l_T_1923))).f_NEXT;
}
RT_B_TICK();
} L_end1924: ;
}
l_NEEDL_1920 = ((*(R21 *)rt_nil_check(l_NEEDL_1920))).f_NEXT;
}
RT_B_TICK();
} L_end1922: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1921;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1933 = 0;
return rv1933; }
}
{
R12 * l_Y_1934; memset(&l_Y_1934, 0, sizeof l_Y_1934);
l_Y_1934 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1935; memset(&l_A_1935, 0, sizeof l_A_1935);
l_A_1935 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1936; memset(&l_F_1936, 0, sizeof l_F_1936);
if ((l_Y_1934 == NULL))
{
{ rt_int rv1937 = 0;
return rv1937; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_1934))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_1934))).f_DECL == NULL)))
{
{ rt_int rv1938 = 0;
return rv1938; }
}
l_F_1936 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1934))).f_DECL))).f_A;
for (;;) {
if ((l_F_1936 == NULL)) goto L_end1939;
{
{
R21 * l_N_1940; memset(&l_N_1940, 0, sizeof l_N_1940);
l_N_1940 = ((*(R21 *)rt_nil_check(l_F_1936))).f_A;
for (;;) {
if ((l_N_1940 == NULL)) goto L_end1941;
{
if ((l_A_1935 == NULL))
{
{ rt_int rv1942 = 0;
return rv1942; }
}
if (((((*(R21 *)rt_nil_check(l_F_1936))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_1935))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1943 = 1;
return rv1943; }
}
l_A_1935 = ((*(R21 *)rt_nil_check(l_A_1935))).f_NEXT;
l_N_1940 = ((*(R21 *)rt_nil_check(l_N_1940))).f_NEXT;
}
RT_B_TICK();
} L_end1941: ;
}
l_F_1936 = ((*(R21 *)rt_nil_check(l_F_1936))).f_NEXT;
}
RT_B_TICK();
} L_end1939: ;
}
{ rt_int rv1944 = 0;
return rv1944; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_1945; memset(&l_A_1945, 0, sizeof l_A_1945);
l_A_1945 = p_ARGS;
R12 * l_I_1946; memset(&l_I_1946, 0, sizeof l_I_1946);
l_I_1946 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_1947; memset(&l_SAVED_1947, 0, sizeof l_SAVED_1947);
l_SAVED_1947 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_1948; memset(&l_P_1948, 0, sizeof l_P_1948);
l_P_1948 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_1949; memset(&l_TAIL_1949, 0, sizeof l_TAIL_1949);
l_TAIL_1949 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_1946)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_1946))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_1946))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_1946))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_1946))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_1946))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_1946;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_1948 == NULL)) goto L_end1950;
{
{
R28 * l_PM_1951; memset(&l_PM_1951, 0, sizeof l_PM_1951);
l_PM_1951 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1951)), (*(R28 *)rt_nil_check(l_P_1948)), 0);
((*(R28 *)rt_nil_check(l_PM_1951))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_1948))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_1951))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1948))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_1951))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1948))).f_TS) && ((*(R27 *)rt_nil_check(l_A_1945))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_1951))).f_T = (((*(R27 *)rt_nil_check(l_A_1945))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1951))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1951))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_1951))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1951))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_1951))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_1948))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_1951))).f_TS = NULL;
if ((l_TAIL_1949 == NULL))
{
((*(R12 *)rt_nil_check(l_I_1946))).f_PARAMS = l_PM_1951;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1949))).f_NEXT = l_PM_1951;
}
l_TAIL_1949 = l_PM_1951;
}
l_P_1948 = ((*(R28 *)rt_nil_check(l_P_1948))).f_NEXT;
l_A_1945 = ((*(R27 *)rt_nil_check(l_A_1945))).f_NEXT;
}
RT_B_TICK();
} L_end1950: ;
((*(R12 *)rt_nil_check(l_I_1946))).f_RESULT = r_RESULT_TYPE(l_I_1946);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1947;
S_R10(&((*(R12 *)rt_nil_check(l_I_1946))).f_FWD, r_C_HEADER(l_I_1946), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_1946))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_1946))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_1946;
{ R12 * rv1952 = l_I_1946;
return rv1952; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1953 = 0;
return rv1953; }
}
{ rt_int rv1954 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv1954; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_1955; memset(&l_C_1955, 0, sizeof l_C_1955);
if ((p_TS == NULL))
{
{ R21 * rv1956 = NULL;
return rv1956; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_1957; memset(&l_F_1957, 0, sizeof l_F_1957);
l_F_1957 = p_FORMALS;
R21 * l_A_1958; memset(&l_A_1958, 0, sizeof l_A_1958);
l_A_1958 = p_ARGS;
for (;;) {
if ((l_F_1957 == NULL)) goto L_end1959;
{
{
R21 * l_N_1960; memset(&l_N_1960, 0, sizeof l_N_1960);
l_N_1960 = ((*(R21 *)rt_nil_check(l_F_1957))).f_A;
for (;;) {
if ((l_N_1960 == NULL)) goto L_end1961;
{
if ((l_A_1958 == NULL))
{
{ R21 * rv1962 = p_TS;
return rv1962; }
}
if (((((*(R21 *)rt_nil_check(l_F_1957))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_1960))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv1963 = l_A_1958;
return rv1963; }
}
l_A_1958 = ((*(R21 *)rt_nil_check(l_A_1958))).f_NEXT;
l_N_1960 = ((*(R21 *)rt_nil_check(l_N_1960))).f_NEXT;
}
RT_B_TICK();
} L_end1961: ;
}
l_F_1957 = ((*(R21 *)rt_nil_check(l_F_1957))).f_NEXT;
}
RT_B_TICK();
} L_end1959: ;
}
{ R21 * rv1964 = p_TS;
return rv1964; }
}
l_C_1955 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_1955))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_1955))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv1965 = l_C_1955;
return rv1965; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_1966; memset(&l_C_1966, 0, sizeof l_C_1966);
l_C_1966 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_1966)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_1966))).f_NEXT = NULL;
{ R21 * rv1967 = l_C_1966;
return rv1967; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1968; memset(&l_P_1968, 0, sizeof l_P_1968);
l_P_1968 = p_L;
for (;;) {
if ((l_P_1968 == NULL)) goto L_end1969;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1968))).f_NAME, p_NAME))
{
{ rt_int rv1970 = 1;
return rv1970; }
}
l_P_1968 = ((*(R21 *)rt_nil_check(l_P_1968))).f_NEXT;
}
RT_B_TICK();
} L_end1969: ;
{ rt_int rv1971 = 0;
return rv1971; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_1972; memset(&l_IS_1972, 0, sizeof l_IS_1972);
l_IS_1972 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv1973 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1973; }
}
if ((l_IS_1972 == NULL))
{
{ rt_int rv1974 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1974; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_1972))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_1972))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv1975 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1975; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_1972))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1972))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1976 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1976; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1972))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1977 = 0;
return rv1977; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_1978; memset(&l_ITEMS_1978, 0, sizeof l_ITEMS_1978);
l_ITEMS_1978 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_1979; memset(&l_HEAD_1979, 0, sizeof l_HEAD_1979);
l_HEAD_1979 = NULL;
R21 * l_TAIL_1980; memset(&l_TAIL_1980, 0, sizeof l_TAIL_1980);
l_TAIL_1980 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_1978 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1978))).f_A, &l_HEAD_1979, &l_TAIL_1980);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1978))).f_B, &l_HEAD_1979, &l_TAIL_1980);
{
R21 * l_R_1981; memset(&l_R_1981, 0, sizeof l_R_1981);
l_R_1981 = ((*(R21 *)rt_nil_check(l_ITEMS_1978))).f_C;
for (;;) {
if ((l_R_1981 == NULL)) goto L_end1982;
{
{
R12 * l_Z_1983; memset(&l_Z_1983, 0, sizeof l_Z_1983);
l_Z_1983 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_1981))).f_NAME);
if (((l_Z_1983 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_1981))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_1981))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_1981))).f_NAME);
}
for (;;) {
if ((l_Z_1983 == NULL)) goto L_end1984;
{
if ((((*(R12 *)rt_nil_check(l_Z_1983))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_1985; memset(&l_O_1985, 0, sizeof l_O_1985);
l_O_1985 = r_ORIGINAL(l_Z_1983);
R21 * l_U_1986; memset(&l_U_1986, 0, sizeof l_U_1986);
r_COMPUTE_USES(l_O_1985);
l_U_1986 = ((*(R12 *)rt_nil_check(l_O_1985))).f_USES;
for (;;) {
if ((l_U_1986 == NULL)) goto L_end1987;
{
if ((!r_IN_IDENTS(l_HEAD_1979, ((*(R21 *)rt_nil_check(l_U_1986))).f_NAME)))
{
{
R21 * l_N_1988; memset(&l_N_1988, 0, sizeof l_N_1988);
l_N_1988 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_1986))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1988))).f_NAME, ((*(R21 *)rt_nil_check(l_U_1986))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1988))).f_IV = ((*(R21 *)rt_nil_check(l_U_1986))).f_IV;
r_ADD_LIST(l_N_1988, &l_HEAD_1979, &l_TAIL_1980);
}
}
l_U_1986 = ((*(R21 *)rt_nil_check(l_U_1986))).f_NEXT;
}
RT_B_TICK();
} L_end1987: ;
}
}
l_Z_1983 = r_LOOKUP_NEXT(l_Z_1983);
}
RT_B_TICK();
} L_end1984: ;
}
l_R_1981 = ((*(R21 *)rt_nil_check(l_R_1981))).f_NEXT;
}
RT_B_TICK();
} L_end1982: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_1979;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_1989; memset(&l_M_1989, 0, sizeof l_M_1989);
if ((p_B == NULL))
{
{ rt_int rv1990 = 0;
return rv1990; }
}
l_M_1989 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_1989 == NULL)) goto L_end1991;
{
if ((((*(R21 *)rt_nil_check(l_M_1989))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_1989))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_1989))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_1989))).f_C, p_NAME)))
{
{ rt_int rv1992 = 1;
return rv1992; }
}
}
l_M_1989 = ((*(R21 *)rt_nil_check(l_M_1989))).f_NEXT;
}
RT_B_TICK();
} L_end1991: ;
{ rt_int rv1993 = 0;
return rv1993; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_1994; memset(&l_R_1994, 0, sizeof l_R_1994);
l_R_1994 = p_RS;
for (;;) {
if ((l_R_1994 == NULL)) goto L_end1995;
{
if ((((*(R21 *)rt_nil_check(l_R_1994))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_1994));
}
l_R_1994 = ((*(R21 *)rt_nil_check(l_R_1994))).f_NEXT;
}
RT_B_TICK();
} L_end1995: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_1996; memset(&l_P_1996, 0, sizeof l_P_1996);
l_P_1996 = p_L;
for (;;) {
if ((l_P_1996 == NULL)) goto L_end1997;
{
{
R12 * l_V_1998; memset(&l_V_1998, 0, sizeof l_V_1998);
l_V_1998 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_1996))).f_NAME);
R21 * l_N_1999; memset(&l_N_1999, 0, sizeof l_N_1999);
l_N_1999 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_1996))).f_LINE);
if ((l_V_1998 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1996))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_1996))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_1999))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1996))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1999))).f_IV = ((*(R12 *)rt_nil_check(l_V_1998))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_1998))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_1999, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_1996 = ((*(R21 *)rt_nil_check(l_P_1996))).f_NEXT;
}
RT_B_TICK();
} L_end1997: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2000; memset(&l_IS_2000, 0, sizeof l_IS_2000);
l_IS_2000 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2001; memset(&l_U_2001, 0, sizeof l_U_2001);
l_U_2001 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2000 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2000))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2001 == NULL)) goto L_end2002;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2001))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2000))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2000))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2001))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2001))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2000))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2001))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2000))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2001))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2000))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2000))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2000))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2000))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2001))).f_NAME)))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2001))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2001))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2001 = ((*(R21 *)rt_nil_check(l_U_2001))).f_NEXT;
}
RT_B_TICK();
} L_end2002: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2003; memset(&l_R_2003, 0, sizeof l_R_2003);
l_R_2003 = p_RS;
for (;;) {
if ((l_R_2003 == NULL)) goto L_end2004;
{
{
R12 * l_Z_2005; memset(&l_Z_2005, 0, sizeof l_Z_2005);
l_Z_2005 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2003))).f_NAME);
for (;;) {
if ((l_Z_2005 == NULL)) goto L_end2006;
{
if ((((*(R12 *)rt_nil_check(l_Z_2005))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2007; memset(&l_O_2007, 0, sizeof l_O_2007);
l_O_2007 = r_ORIGINAL(l_Z_2005);
r_COMPUTE_USES(l_O_2007);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2007))).f_USES, p_NAME))
{
{ rt_int rv2008 = 1;
return rv2008; }
}
}
}
l_Z_2005 = r_LOOKUP_NEXT(l_Z_2005);
}
RT_B_TICK();
} L_end2006: ;
}
l_R_2003 = ((*(R21 *)rt_nil_check(l_R_2003))).f_NEXT;
}
RT_B_TICK();
} L_end2004: ;
{ rt_int rv2009 = 0;
return rv2009; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2010; memset(&l_M_2010, 0, sizeof l_M_2010);
l_M_2010 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2010 == NULL)) goto L_end2011;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2010))).f_NAME))
{
{ rt_int rv2012 = 1;
return rv2012; }
}
l_M_2010 = ((*(R12 *)rt_nil_check(l_M_2010))).f_MODL;
}
RT_B_TICK();
} L_end2011: ;
{ rt_int rv2013 = 0;
return rv2013; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2014 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2014; }
}
{ R10 rv2015 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2015; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2016; memset(&l_C_2016, 0, sizeof l_C_2016);
l_C_2016 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2016 == NULL)) goto L_end2017;
{
if ((((*(R17 *)rt_nil_check(l_C_2016))).f_KIND == ((rt_int)1LL)))
{
goto L_end2017;
}
if ((((*(R17 *)rt_nil_check(l_C_2016))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2018; memset(&l_H_2018, 0, sizeof l_H_2018);
l_H_2018 = ((*(R17 *)rt_nil_check(l_C_2016))).f_HANDLERS;
for (;;) {
if ((l_H_2018 == NULL)) goto L_end2019;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2018))).f_A, p_NAME))
{
{ rt_int rv2020 = 1;
return rv2020; }
}
l_H_2018 = ((*(R21 *)rt_nil_check(l_H_2018))).f_NEXT;
}
RT_B_TICK();
} L_end2019: ;
}
}
l_C_2016 = ((*(R17 *)rt_nil_check(l_C_2016))).f_NEXT;
}
RT_B_TICK();
} L_end2017: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2021 = 1;
return rv2021; }
}
}
{ rt_int rv2022 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2022; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2023; memset(&l_C_2023, 0, sizeof l_C_2023);
l_C_2023 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2023)), ({ R17 rc2024; memset(&rc2024, 0, sizeof rc2024);  rc2024.f_KIND = p_KIND; S_R10(&rc2024.f_NAME, p_NAME, 0); rc2024.f_HANDLERS = NULL; rc2024.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2024; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2023;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2025; memset(&l_C_2025, 0, sizeof l_C_2025);
l_C_2025 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2025 == NULL)) goto L_end2026;
{
if ((((*(R17 *)rt_nil_check(l_C_2025))).f_KIND == p_KIND))
{
{ R17 * rv2027 = l_C_2025;
return rv2027; }
}
if ((((*(R17 *)rt_nil_check(l_C_2025))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2028 = NULL;
return rv2028; }
}
if ((((*(R17 *)rt_nil_check(l_C_2025))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2025))).f_NAME));
}
l_C_2025 = ((*(R17 *)rt_nil_check(l_C_2025))).f_NEXT;
}
RT_B_TICK();
} L_end2026: ;
{ R17 * rv2029 = NULL;
return rv2029; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2030; memset(&l_C_2030, 0, sizeof l_C_2030);
l_C_2030 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2031; memset(&l_N_2031, 0, sizeof l_N_2031);
l_N_2031 = ((rt_int)0LL);
for (;;) {
if ((l_C_2030 == NULL)) goto L_end2032;
{
if ((((*(R17 *)rt_nil_check(l_C_2030))).f_KIND == ((rt_int)1LL)))
{
goto L_end2032;
}
if ((((*(R17 *)rt_nil_check(l_C_2030))).f_KIND == ((rt_int)3LL)))
{
l_N_2031 = rt_add(l_N_2031, ((rt_int)1LL));
}
l_C_2030 = ((*(R17 *)rt_nil_check(l_C_2030))).f_NEXT;
}
RT_B_TICK();
} L_end2032: ;
{ rt_int rv2033 = l_N_2031;
return rv2033; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2034; memset(&l_N_2034, 0, sizeof l_N_2034);
l_N_2034 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2034 == NULL)) goto L_end2035;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2034))).f_NAME, p_NAME))
{
{ R10 rv2036 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2036; }
}
l_N_2034 = ((*(R21 *)rt_nil_check(l_N_2034))).f_NEXT;
}
RT_B_TICK();
} L_end2035: ;
l_N_2034 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2034))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2034))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2034;
{ R10 rv2037 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2037; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2038; memset(&l_D_2038, 0, sizeof l_D_2038);
l_D_2038 = p_DECLS;
for (;;) {
if ((l_D_2038 == NULL)) goto L_end2039;
{
if (((((*(R21 *)rt_nil_check(l_D_2038))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2038))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2040; memset(&l_Y_2040, 0, sizeof l_Y_2040);
l_Y_2040 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2038))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2038))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2040))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2040))).f_DECL = l_D_2038;
r_DEFINE(l_Y_2040, ((*(R21 *)rt_nil_check(l_D_2038))).f_LINE);
}
}
l_D_2038 = ((*(R21 *)rt_nil_check(l_D_2038))).f_NEXT;
}
RT_B_TICK();
} L_end2039: ;
}
static void r_DECLARE_LABELS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2041; memset(&l_S_2041, 0, sizeof l_S_2041);
l_S_2041 = p_S0;
for (;;) {
if ((l_S_2041 == NULL)) goto L_end2042;
{
{
R21 * l_L_2043; memset(&l_L_2043, 0, sizeof l_L_2043);
l_L_2043 = l_S_2041;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2043))).f_KIND == g_N_LABELED))) goto L_end2044;
{
{
R12 * l_Y_2045; memset(&l_Y_2045, 0, sizeof l_Y_2045);
l_Y_2045 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2043))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2045))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2043))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2043))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2045))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2045, ((*(R21 *)rt_nil_check(l_L_2043))).f_LINE);
}
l_L_2043 = ((*(R21 *)rt_nil_check(l_L_2043))).f_A;
}
RT_B_TICK();
} L_end2044: ;
}
l_S_2041 = ((*(R21 *)rt_nil_check(l_S_2041))).f_NEXT;
}
RT_B_TICK();
} L_end2042: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2046; memset(&l_D_2046, 0, sizeof l_D_2046);
l_D_2046 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2047; memset(&l_S_2047, 0, sizeof l_S_2047);
l_S_2047 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2046 == NULL)) goto L_end2048;
{
if (((((*(R21 *)rt_nil_check(l_D_2046))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2046))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2046);
}
l_D_2046 = ((*(R21 *)rt_nil_check(l_D_2046))).f_NEXT;
}
RT_B_TICK();
} L_end2048: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2047 == NULL)) goto L_end2049;
{
r_STMT(l_S_2047);
l_S_2047 = ((*(R21 *)rt_nil_check(l_S_2047))).f_NEXT;
}
RT_B_TICK();
} L_end2049: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2050; memset(&l_F_2050, 0, sizeof l_F_2050);
S_R10(&l_F_2050, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2051; memset(&l_H_2051, 0, sizeof l_H_2051);
l_H_2051 = p_HANDLERS;
R10 l_WORD_2052; memset(&l_WORD_2052, 0, sizeof l_WORD_2052);
S_R10(&l_WORD_2052, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2050, l_F_2050));
r_PUSH_CTX(((rt_int)3LL), l_F_2050);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2050, l_F_2050, l_F_2050));
for (;;) {
if ((l_H_2051 == NULL)) goto L_end2053;
{
{
R21 * l_N_2054; memset(&l_N_2054, 0, sizeof l_N_2054);
l_N_2054 = ((*(R21 *)rt_nil_check(l_H_2051))).f_A;
R10 l_COND_2055; memset(&l_COND_2055, 0, sizeof l_COND_2055);
S_R10(&l_COND_2055, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2054 == NULL)) goto L_end2056;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2054))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2054))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2054))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2054))).f_NAME);
}
S_R10(&l_COND_2055, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2055, l_F_2050, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2054))).f_NAME)), 0);
l_N_2054 = ((*(R21 *)rt_nil_check(l_N_2054))).f_NEXT;
}
RT_B_TICK();
} L_end2056: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2052, l_COND_2055));
S_R10(&l_WORD_2052, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2050, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2051))).f_B);
r_POP_CTX();
}
l_H_2051 = ((*(R21 *)rt_nil_check(l_H_2051))).f_NEXT;
}
RT_B_TICK();
} L_end2053: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2050));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2057; memset(&l_K_2057, 0, sizeof l_K_2057);
l_K_2057 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2057 == g_N_NULL))
{
return;
}
else if ((l_K_2057 == g_N_LABELED))
{
{
R12 * l_Y_2058; memset(&l_Y_2058, 0, sizeof l_Y_2058);
l_Y_2058 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2058))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2057 == g_N_GOTO))
{
{
R12 * l_Y_2059; memset(&l_Y_2059, 0, sizeof l_Y_2059);
l_Y_2059 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2060; memset(&l_N_2060, 0, sizeof l_N_2060);
R17 * l_C_2061; memset(&l_C_2061, 0, sizeof l_C_2061);
l_C_2061 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2059 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2059))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2059))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2060 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2059))).f_MV);
for (;;) {
if ((l_N_2060 <= ((rt_int)0LL))) goto L_end2062;
{
if ((((*(R17 *)rt_nil_check(l_C_2061))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2061))).f_NAME));
l_N_2060 = rt_sub(l_N_2060, ((rt_int)1LL));
}
l_C_2061 = ((*(R17 *)rt_nil_check(l_C_2061))).f_NEXT;
}
RT_B_TICK();
} L_end2062: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2059))).f_ACCESS));
}
}
else if ((l_K_2057 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2057 == g_N_CALL))
{
{
R26 l_V_2063; memset(&l_V_2063, 0, sizeof l_V_2063);
S_R26(&l_V_2063, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2063).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2063).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2063).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2057 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2057 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2057 == g_N_LOOP))
{
{
R10 l_END_L_2064; memset(&l_END_L_2064, 0, sizeof l_END_L_2064);
S_R10(&l_END_L_2064, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2064));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2064);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2064));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2064));
}
}
else if ((l_K_2057 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2057 == g_N_EXIT))
{
{
R17 * l_C_2065; memset(&l_C_2065, 0, sizeof l_C_2065);
l_C_2065 = r_LEAVE(((rt_int)2LL));
if ((l_C_2065 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2065))).f_NAME));
}
}
else if ((l_K_2057 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2057 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2057 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2057 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2057 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2057 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2057 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2057 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2066; memset(&l_Y_2066, 0, sizeof l_Y_2066);
l_Y_2066 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2066 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2066))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2066))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2067 = r_CALL_EXPR(p_S, NULL);
return rv2067; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2068; memset(&l_ARM_2068, 0, sizeof l_ARM_2068);
l_ARM_2068 = p_ARMS;
R10 l_WORD_2069; memset(&l_WORD_2069, 0, sizeof l_WORD_2069);
S_R10(&l_WORD_2069, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2070; memset(&l_OPEN_2070, 0, sizeof l_OPEN_2070);
l_OPEN_2070 = ((rt_int)0LL);
rt_int l_CHOSEN_2071; memset(&l_CHOSEN_2071, 0, sizeof l_CHOSEN_2071);
l_CHOSEN_2071 = 0;
for (;;) {
if ((l_ARM_2068 == NULL)) goto L_end2072;
{
{
R23 l_M_2073; memset(&l_M_2073, 0, sizeof l_M_2073);
S_R23(&l_M_2073, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2068))).f_A), 0);
if (l_CHOSEN_2071)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2068))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2068))).f_B);
}
else if ((l_M_2073).f_OK)
{
if ((!r_TEQS(l_WORD_2069, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2070 = rt_add(l_OPEN_2070, ((rt_int)1LL));
S_R10(&l_WORD_2069, r_MK(rt_str("if", 2)), 0);
}
if (((l_M_2073).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2068))).f_B);
l_CHOSEN_2071 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2068))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2069, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2068))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2068))).f_B);
S_R10(&l_WORD_2069, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2068 = ((*(R21 *)rt_nil_check(l_ARM_2068))).f_NEXT;
}
RT_B_TICK();
} L_end2072: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2071)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2069, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2075_lo = ((rt_int)1LL), it2075_hi = l_OPEN_2070;
for (rt_int it2075 = it2075_lo; it2075 <= it2075_hi; it2075++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2075 == it2075_hi) break;
} } L_end2074: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2076; memset(&l_SAVED_CODE_2076, 0, sizeof l_SAVED_CODE_2076);
S_R14(&l_SAVED_CODE_2076, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2077; memset(&rc2077, 0, sizeof rc2077);  rc2077.f_HEAD = NULL; rc2077.f_TAIL = NULL; rc2077; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2076, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2078; memset(&l_C_2078, 0, sizeof l_C_2078);
S_R10(&l_C_2078, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2079; memset(&l_END_L_2079, 0, sizeof l_END_L_2079);
S_R10(&l_END_L_2079, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2080; memset(&l_IT_2080, 0, sizeof l_IT_2080);
S_R10(&l_IT_2080, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2081; memset(&l_R_2081, 0, sizeof l_R_2081);
l_R_2081 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2082; memset(&l_LO_2082, 0, sizeof l_LO_2082);
S_R26(&l_LO_2082, r_EXPR(((*(R21 *)rt_nil_check(l_R_2081))).f_A, NULL), 0);
R26 l_HI_2083; memset(&l_HI_2083, 0, sizeof l_HI_2083);
S_R26(&l_HI_2083, r_EXPR(((*(R21 *)rt_nil_check(l_R_2081))).f_B, (l_LO_2082).f_T), 0);
R22 * l_T_2084; memset(&l_T_2084, 0, sizeof l_T_2084);
l_T_2084 = r_REAL_TYPE((l_LO_2082).f_T);
R10 l_LOC_2085; memset(&l_LOC_2085, 0, sizeof l_LOC_2085);
R10 l_HIC_2086; memset(&l_HIC_2086, 0, sizeof l_HIC_2086);
if ((((*(R22 *)rt_nil_check(l_T_2084))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2084))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2084))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2084))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2085, (l_LO_2082).f_C, 0);
S_R10(&l_HIC_2086, (l_HI_2083).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2081))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2081))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2085, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2085), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2081))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2086, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2086), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2080, l_LOC_2085, l_IT_2080, l_HIC_2086));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2080, l_IT_2080, l_IT_2080, l_IT_2080));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2087; memset(&l_Y_2087, 0, sizeof l_Y_2087);
l_Y_2087 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2087))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2084))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2087))).f_T = ((*(R22 *)rt_nil_check(l_T_2084))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2087))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2087, rt_str("", 0)), l_IT_2080));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2087, rt_str("", 0)), l_IT_2080));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2087))).f_ACCESS, l_IT_2080, 0);
}
r_DEFINE(l_Y_2087, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2079);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2080, l_IT_2080));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2079));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2088; memset(&l_CS_2088, 0, sizeof l_CS_2088);
l_CS_2088 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2089; memset(&l_C_2089, 0, sizeof l_C_2089);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2089 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2088))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2088))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2088))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2088))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2088))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2088))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2088))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2088))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2090; memset(&l_V_2090, 0, sizeof l_V_2090);
S_R10(&l_V_2090, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2088))).f_RESULT), l_V_2090, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2088))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2088))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2089 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2090));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2091; memset(&l_C_2091, 0, sizeof l_C_2091);
l_C_2091 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2091 == NULL)) goto L_end2092;
{
if ((((*(R17 *)rt_nil_check(l_C_2091))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2091))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2091))).f_KIND == ((rt_int)1LL)))
{
goto L_end2092;
}
l_C_2091 = ((*(R17 *)rt_nil_check(l_C_2091))).f_NEXT;
}
RT_B_TICK();
} L_end2092: ;
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
R21 * l_TG_2093; memset(&l_TG_2093, 0, sizeof l_TG_2093);
l_TG_2093 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2093))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2094; memset(&l_B_2094, 0, sizeof l_B_2094);
S_R26(&l_B_2094, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2093))).f_A, NULL), 0);
if ((!(l_B_2094).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2094).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2095; memset(&l_ARGS_2095, 0, sizeof l_ARGS_2095);
l_ARGS_2095 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2093))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2093))).f_C, g_M_IN, r_VAL_ARG(l_B_2094, NULL))));
R12 * l_Y_2096; memset(&l_Y_2096, 0, sizeof l_Y_2096);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2095))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2096 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2095, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2096 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2095))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2096 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2095, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2096 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2096, l_ARGS_2095, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2094).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2094).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2097; memset(&l_V_2097, 0, sizeof l_V_2097);
S_R26(&l_V_2097, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2094).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2097).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2094).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2094).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2093))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2093))).f_C), (l_V_2097).f_C));
}
}
return;
}
{
R26 l_LV_2098; memset(&l_LV_2098, 0, sizeof l_LV_2098);
S_R26(&l_LV_2098, r_EXPR(l_TG_2093, NULL), 0);
if ((!(l_LV_2098).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_2098).f_T, (l_LV_2098).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2098).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2098).f_SELF));
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2099; memset(&l_Y_2099, 0, sizeof l_Y_2099);
l_Y_2099 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2100; memset(&l_V_2100, 0, sizeof l_V_2100);
S_R26(&l_V_2100, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2099))).f_T = (l_V_2100).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2101; memset(&l_CN_2101, 0, sizeof l_CN_2101);
S_R10(&l_CN_2101, r_NEW_OBJECT(l_Y_2099, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2100).f_T))
{
r_CODE(r_INIT_CODE((l_V_2100).f_T, l_CN_2101));
}
r_CODE(r_ASSIGN_CODE((l_V_2100).f_T, l_CN_2101, (l_V_2100).f_C));
}
}
else
{
if ((!(l_V_2100).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2102; memset(&l_P_2102, 0, sizeof l_P_2102);
S_R10(&l_P_2102, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2100).f_T), l_P_2102, (l_V_2100).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2099))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2102), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2099))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2099))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2099))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2099, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2103; memset(&l_ARM_2103, 0, sizeof l_ARM_2103);
l_ARM_2103 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2104; memset(&l_CH_2104, 0, sizeof l_CH_2104);
S_R26(&l_CH_2104, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2105; memset(&l_T_2105, 0, sizeof l_T_2105);
l_T_2105 = r_REAL_TYPE((l_CH_2104).f_T);
R12 * l_BOUND_2106; memset(&l_BOUND_2106, 0, sizeof l_BOUND_2106);
l_BOUND_2106 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2105))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2105))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2107; memset(&l_TMP_2107, 0, sizeof l_TMP_2107);
S_R10(&l_TMP_2107, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2108; memset(&l_WORD_2108, 0, sizeof l_WORD_2108);
S_R10(&l_WORD_2108, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2107, (l_CH_2104).f_C));
for (;;) {
if ((l_ARM_2103 == NULL)) goto L_end2109;
{
{
R21 * l_L_2110; memset(&l_L_2110, 0, sizeof l_L_2110);
l_L_2110 = ((*(R21 *)rt_nil_check(l_ARM_2103))).f_A;
R10 l_COND_2111; memset(&l_COND_2111, 0, sizeof l_COND_2111);
S_R10(&l_COND_2111, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2110 == NULL)) goto L_end2112;
{
S_R10(&l_COND_2111, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2111, l_TMP_2107, (r_EXPR(l_L_2110, l_T_2105)).f_C), 0);
l_L_2110 = ((*(R21 *)rt_nil_check(l_L_2110))).f_NEXT;
}
RT_B_TICK();
} L_end2112: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2108, l_COND_2111));
S_R10(&l_WORD_2108, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2103))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2103))).f_C);
}
l_ARM_2103 = ((*(R21 *)rt_nil_check(l_ARM_2103))).f_NEXT;
}
RT_B_TICK();
} L_end2109: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2108, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2105))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2105))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2105))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2105))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2105));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2104).f_C));
for (;;) {
if ((l_ARM_2103 == NULL)) goto L_end2113;
{
{
R21 * l_L_2114; memset(&l_L_2114, 0, sizeof l_L_2114);
l_L_2114 = ((*(R21 *)rt_nil_check(l_ARM_2103))).f_A;
R23 l_FIRST_2115; memset(&l_FIRST_2115, 0, sizeof l_FIRST_2115);
S_R23(&l_FIRST_2115, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2114 == NULL)) goto L_end2116;
{
if ((((*(R21 *)rt_nil_check(l_L_2114))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2117; memset(&l_LO_2117, 0, sizeof l_LO_2117);
S_R23(&l_LO_2117, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2114))).f_A, l_T_2105), 0);
R23 l_HI_2118; memset(&l_HI_2118, 0, sizeof l_HI_2118);
S_R23(&l_HI_2118, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2114))).f_B, l_T_2105), 0);
rt_int l_A_2119; memset(&l_A_2119, 0, sizeof l_A_2119);
l_A_2119 = (l_LO_2117).f_V;
rt_int l_B_2120; memset(&l_B_2120, 0, sizeof l_B_2120);
l_B_2120 = (l_HI_2118).f_V;
if ((!(((l_LO_2117).f_OK && (l_HI_2118).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2114))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2114))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2114))).f_IV == ((rt_int)3LL))))
{
l_A_2119 = rt_add(l_A_2119, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2114))).f_IV >= ((rt_int)2LL)))
{
l_B_2120 = rt_sub(l_B_2120, ((rt_int)1LL));
}
if ((!(l_FIRST_2115).f_OK))
{
S_R23(&l_FIRST_2115, r_SOME(l_A_2119), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2119), r_NUM(l_B_2120)));
}
}
else
{
{
R23 l_M_2121; memset(&l_M_2121, 0, sizeof l_M_2121);
S_R23(&l_M_2121, r_ENUM_MANIFEST(l_L_2114, l_T_2105), 0);
if ((!(l_M_2121).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2114))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2115).f_OK))
{
S_R23(&l_FIRST_2115, l_M_2121, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2121).f_V)));
}
}
l_L_2114 = ((*(R21 *)rt_nil_check(l_L_2114))).f_NEXT;
}
RT_B_TICK();
} L_end2116: ;
if ((!(l_BOUND_2106 == NULL)))
{
{
R22 * l_SAVED_2122; memset(&l_SAVED_2122, 0, sizeof l_SAVED_2122);
l_SAVED_2122 = ((*(R12 *)rt_nil_check(l_BOUND_2106))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2106))).f_T = r_NARROW(l_SAVED_2122, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2115).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2103))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2103))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2106))).f_T = l_SAVED_2122;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2103))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2103))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2103 = ((*(R21 *)rt_nil_check(l_ARM_2103))).f_NEXT;
}
RT_B_TICK();
} L_end2113: ;
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
{ R12 * rv2123 = NULL;
return rv2123; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2124 = NULL;
return rv2124; }
}
{
R12 * l_Y_2125; memset(&l_Y_2125, 0, sizeof l_Y_2125);
l_Y_2125 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2125 == NULL))
{
{ R12 * rv2126 = NULL;
return rv2126; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2125))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2127 = NULL;
return rv2127; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2125))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2128 = NULL;
return rv2128; }
}
{
R24 * l_F_2129; memset(&l_F_2129, 0, sizeof l_F_2129);
l_F_2129 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2125))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2129 == NULL))
{
{ R12 * rv2130 = NULL;
return rv2130; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2129))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2131 = NULL;
return rv2131; }
}
}
{ R12 * rv2132 = l_Y_2125;
return rv2132; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2133; memset(&l_N_2133, 0, sizeof l_N_2133);
l_N_2133 = r_COPY_TYP(p_T);
R24 * l_F_2134; memset(&l_F_2134, 0, sizeof l_F_2134);
l_F_2134 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2135; memset(&l_A_2135, 0, sizeof l_A_2135);
l_A_2135 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2136; memset(&l_HEAD_2136, 0, sizeof l_HEAD_2136);
l_HEAD_2136 = NULL;
R25 * l_TAIL_2137; memset(&l_TAIL_2137, 0, sizeof l_TAIL_2137);
l_TAIL_2137 = NULL;
for (;;) {
if ((l_F_2134 == NULL)) goto L_end2138;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2134))).f_KIND == ((rt_int)0LL))) && (!(l_A_2135 == NULL))))
{
{
R25 * l_B_2139; memset(&l_B_2139, 0, sizeof l_B_2139);
l_B_2139 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2139)), (*(R25 *)rt_nil_check(l_A_2135)), 0);
((*(R25 *)rt_nil_check(l_B_2139))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2134))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2139))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2139))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2139))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2137 == NULL))
{
l_HEAD_2136 = l_B_2139;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2137))).f_NEXT = l_B_2139;
}
l_TAIL_2137 = l_B_2139;
}
l_A_2135 = ((*(R25 *)rt_nil_check(l_A_2135))).f_NEXT;
}
l_F_2134 = ((*(R24 *)rt_nil_check(l_F_2134))).f_NEXT;
}
RT_B_TICK();
} L_end2138: ;
((*(R22 *)rt_nil_check(l_N_2133))).f_ARGS = l_HEAD_2136;
{ R22 * rv2140 = l_N_2133;
return rv2140; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2141; memset(&l_ARM_2141, 0, sizeof l_ARM_2141);
l_ARM_2141 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2142; memset(&l_SAVED_2142, 0, sizeof l_SAVED_2142);
l_SAVED_2142 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2141 == NULL)) goto L_end2143;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2141))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2141))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2141))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2142;
return;
}
l_ARM_2141 = ((*(R21 *)rt_nil_check(l_ARM_2141))).f_NEXT;
}
RT_B_TICK();
} L_end2143: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2142;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2144; memset(&l_T_2144, 0, sizeof l_T_2144);
l_T_2144 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2144))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2145 = l_T_2144;
return rv2145; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2146; memset(&l_TD_2146, 0, sizeof l_TD_2146);
S_R10(&l_TD_2146, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2147; memset(&l_P_2147, 0, sizeof l_P_2147);
l_P_2147 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2147 == NULL)) goto L_end2148;
{
{
R12 * l_Y_2149; memset(&l_Y_2149, 0, sizeof l_Y_2149);
l_Y_2149 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2147))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2149))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2149))).f_DECL = l_P_2147;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2149, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2149))).f_INPUT = 1;
r_DEFINE(l_Y_2149, ((*(R21 *)rt_nil_check(l_P_2147))).f_LINE);
}
l_P_2147 = ((*(R21 *)rt_nil_check(l_P_2147))).f_NEXT;
}
RT_B_TICK();
} L_end2148: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2146));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2146, l_TD_2146));
l_P_2147 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2147 == NULL)) goto L_end2150;
{
r_ACTIVATE_PATH(l_P_2147, l_TD_2146);
l_P_2147 = ((*(R21 *)rt_nil_check(l_P_2147))).f_NEXT;
}
RT_B_TICK();
} L_end2150: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2146, l_TD_2146, l_TD_2146));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2146));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2151; memset(&l_FN_2151, 0, sizeof l_FN_2151);
S_R10(&l_FN_2151, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2152; memset(&l_FT_2152, 0, sizeof l_FT_2152);
S_R10(&l_FT_2152, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2153; memset(&l_Y_2153, 0, sizeof l_Y_2153);
l_Y_2153 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2154; memset(&l_H_2154, 0, sizeof l_H_2154);
S_R10(&l_H_2154, r_OBJ_ACCESS(l_Y_2153), 0);
R10 l_IT_2155; memset(&l_IT_2155, 0, sizeof l_IT_2155);
S_R10(&l_IT_2155, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2156; memset(&l_PRIO_2156, 0, sizeof l_PRIO_2156);
S_R10(&l_PRIO_2156, r_MK(rt_str("0", 1)), 0);
R10 l_START_2157; memset(&l_START_2157, 0, sizeof l_START_2157);
R22 * l_LT_2158; memset(&l_LT_2158, 0, sizeof l_LT_2158);
l_LT_2158 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2152, l_FT_2152));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2156, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2159; memset(&l_R_2159, 0, sizeof l_R_2159);
l_R_2159 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2160; memset(&l_LV_2160, 0, sizeof l_LV_2160);
S_R26(&l_LV_2160, r_EXPR(((*(R21 *)rt_nil_check(l_R_2159))).f_A, NULL), 0);
R10 l_LO_2161; memset(&l_LO_2161, 0, sizeof l_LO_2161);
S_R10(&l_LO_2161, (l_LV_2160).f_C, 0);
R10 l_HI_2162; memset(&l_HI_2162, 0, sizeof l_HI_2162);
S_R10(&l_HI_2162, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2159))).f_B, (l_LV_2160).f_T)).f_C, 0);
R22 * l_RT_2163; memset(&l_RT_2163, 0, sizeof l_RT_2163);
l_RT_2163 = r_REAL_TYPE((l_LV_2160).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2163))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2163))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2158 = ((*(R22 *)rt_nil_check(l_RT_2163))).f_BASE;
S_R10(&l_HI_2162, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2159))).f_B, l_LT_2158)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2163))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2163))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2159))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2159))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2161, r_FMT1(rt_str("(@) + 1", 7), l_LO_2161), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2159))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2162, r_FMT1(rt_str("(@) - 1", 7), l_HI_2162), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2154, l_LO_2161, l_HI_2162));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2155, l_H_2154, l_IT_2155, l_H_2154), l_IT_2155));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2155));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2152, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2155));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2164; memset(&l_V_2164, 0, sizeof l_V_2164);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2165; memset(&l_I_2165, 0, sizeof l_I_2165);
l_I_2165 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2165))).f_T = l_LT_2158;
((*(R12 *)rt_nil_check(l_I_2165))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2165))).f_ACCESS, l_IT_2155, 0);
((*(R12 *)rt_nil_check(l_I_2165))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2165, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2164, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2164).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2164).f_C));
}
}
S_R10(&l_START_2157, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2154, l_IT_2155, l_FN_2151, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2157, p_TD, l_PRIO_2156, l_IT_2155));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2154));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2157, p_TD, l_PRIO_2156));
}
r_PATH_BODY(p_P, l_FN_2151, l_FT_2152, l_LT_2158);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2166 = r_MK(rt_str("NULL", 4));
return rv2166; }
}
{ R10 rv2167 = r_MK(rt_str("F", 1));
return rv2167; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2168; memset(&l_SAVED_CODE_2168, 0, sizeof l_SAVED_CODE_2168);
S_R14(&l_SAVED_CODE_2168, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2169; memset(&l_SAVED_CTXS_2169, 0, sizeof l_SAVED_CTXS_2169);
l_SAVED_CTXS_2169 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2170; memset(&l_OUTER_2170, 0, sizeof l_OUTER_2170);
l_OUTER_2170 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2171; memset(&l_H_2171, 0, sizeof l_H_2171);
l_H_2171 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2172; memset(&l_CS_2172, 0, sizeof l_CS_2172);
l_CS_2172 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_2173; memset(&l_UPT_2173, 0, sizeof l_UPT_2173);
S_R10(&l_UPT_2173, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2170))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2173, ((*(R18 *)rt_nil_check(l_OUTER_2170))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2172)), ({ R18 rc2174; memset(&rc2174, 0, sizeof rc2174);  rc2174.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2170))).f_LEVEL, ((rt_int)1LL)); rc2174.f_R = NULL; rc2174.f_FRAMED = 1; S_R10(&rc2174.f_FTYPE, p_FT, 0); S_R14(&rc2174.f_FIELDS, ({ R14 rc2175; memset(&rc2175, 0, sizeof rc2175);  rc2175.f_HEAD = NULL; rc2175.f_TAIL = NULL; rc2175; }), 0); rc2174.f_UP = l_OUTER_2170; rc2174.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2171))).f_B; rc2174.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2171))).f_A; rc2174.f_RESULT = NULL; rc2174.f_IS_PATH = 1; S_R10(&rc2174.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2174; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2173), &((*(R18 *)rt_nil_check(l_CS_2172))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2172;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2176; memset(&rc2176, 0, sizeof rc2176);  rc2176.f_HEAD = NULL; rc2176.f_TAIL = NULL; rc2176; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2171))).f_B, ((*(R21 *)rt_nil_check(l_H_2171))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2177; memset(&l_I_2177, 0, sizeof l_I_2177);
l_I_2177 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2177))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2177))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2177))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2177))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2172))).f_FIELDS);
r_DEFINE(l_I_2177, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2178; memset(&l_L_2178, 0, sizeof l_L_2178);
l_L_2178 = ((*(R21 *)rt_nil_check(l_H_2171))).f_A;
R10 l_C_2179; memset(&l_C_2179, 0, sizeof l_C_2179);
S_R10(&l_C_2179, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2178 == NULL)) goto L_end2180;
{
S_R10(&l_C_2179, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2179, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2178))).f_NAME)), 0);
l_L_2178 = ((*(R21 *)rt_nil_check(l_L_2178))).f_NEXT;
}
RT_B_TICK();
} L_end2180: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2179));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2172))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2170;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2168, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2169;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2181; memset(&l_C_2181, 0, sizeof l_C_2181);
l_C_2181 = (p_B).f_HEAD;
R10 l_R_2182; memset(&l_R_2182, 0, sizeof l_R_2182);
S_R10(&l_R_2182, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2181 == NULL)) goto L_end2183;
{
S_R10(&l_R_2182, r_CAT(l_R_2182, ((*(R15 *)rt_nil_check(l_C_2181))).f_T), 0);
l_C_2181 = ((*(R15 *)rt_nil_check(l_C_2181))).f_NEXT;
}
RT_B_TICK();
} L_end2183: ;
{ R10 rv2184 = l_R_2182;
return rv2184; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2185; memset(&l_NAME_2185, 0, sizeof l_NAME_2185);
S_R10(&l_NAME_2185, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2186; memset(&l_SUB_2186, 0, sizeof l_SUB_2186);
S_R10(&l_SUB_2186, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2186, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2187; memset(&l_Y_2187, 0, sizeof l_Y_2187);
l_Y_2187 = r_LOOKUP(l_NAME_2185);
if ((l_Y_2187 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2185);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2187))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2185);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2187))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2188 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2187), l_SUB_2186);
return rv2188; }
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
R10 l_NAME_2189; memset(&l_NAME_2189, 0, sizeof l_NAME_2189);
S_R10(&l_NAME_2189, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2190; memset(&l_LINE_2190, 0, sizeof l_LINE_2190);
l_LINE_2190 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2189, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2191; memset(&l_V_2191, 0, sizeof l_V_2191);
S_R26(&l_V_2191, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2191).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2190, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2192 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2191).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2191).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2192; }
}
}
else if (r_TEQS(l_NAME_2189, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2193 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2193; }
}
{ R26 rv2194 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2194; }
}
else if (r_TEQS(l_NAME_2189, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2195 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2195; }
}
{ R26 rv2196 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2196; }
}
else if ((r_TEQS(l_NAME_2189, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2189, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2190, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2189);
}
{
R26 l_V_2197; memset(&l_V_2197, 0, sizeof l_V_2197);
S_R26(&l_V_2197, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2197).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2190, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2197).f_LVAL))
{
r_FAIL(l_LINE_2190, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2189, rt_str("REQUEST", 7)))
{
{ R26 rv2198 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2197).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2198; }
}
{ R26 rv2199 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2197).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2199; }
}
}
else if (r_TEQS(l_NAME_2189, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2190);
{ R26 rv2200 = r_START_IO_CALL(p_E);
return rv2200; }
}
r_FAILT(l_LINE_2190, rt_str("unknown routine ", 16), l_NAME_2189);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2201; memset(&l_ARGS_2201, 0, sizeof l_ARGS_2201);
l_ARGS_2201 = r_CALL_ARGS(p_E);
R12 * l_Y_2202; memset(&l_Y_2202, 0, sizeof l_Y_2202);
l_Y_2202 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2201, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2203; memset(&l_R_2203, 0, sizeof l_R_2203);
if ((l_Y_2202 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2203, r_CALL_SYM(l_Y_2202, l_ARGS_2201, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2204 = l_R_2203;
return rv2204; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2205; memset(&l_I_2205, 0, sizeof l_I_2205);
l_I_2205 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2205)), ({ R19 rc2206; memset(&rc2206, 0, sizeof rc2206);  rc2206.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2206.f_IMPORTS = p_IMPORTS; rc2206.f_SIGNALS = p_SIGNALS; S_R10(&rc2206.f_NAME, p_NAME, 0); rc2206.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2206; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2205;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2207; memset(&l_BASE_2207, 0, sizeof l_BASE_2207);
S_R10(&l_BASE_2207, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2208; memset(&l_S_2208, 0, sizeof l_S_2208);
l_S_2208 = rt_str_new((l_BASE_2207).f_LEN);
rt_b_assign(&l_S_2208, r_STR(l_BASE_2207, (l_BASE_2207).f_LEN));
R21 * l_N_2209; memset(&l_N_2209, 0, sizeof l_N_2209);
l_N_2209 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2211_lo = ((rt_int)0LL), it2211_hi = rt_sub((l_BASE_2207).f_LEN, ((rt_int)1LL));
for (rt_int it2211 = it2211_lo; it2211 <= it2211_hi; it2211++) {
{
if (rt_b_eq(rt_b_slice(l_S_2208, it2211, it2211), rt_str("$", 1)))
{
S_R10(&l_BASE_2207, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_2208, ((rt_int)0LL), rt_sub(it2211, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2208, rt_add(it2211, ((rt_int)1LL)), rt_sub((l_BASE_2207).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2211 == it2211_hi) break;
} } L_end2210: ;
for (;;) {
if ((l_N_2209 == NULL)) goto L_end2212;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2209))).f_NAME, l_BASE_2207))
{
{ R10 rv2213 = r_FMT2(rt_str("@_@", 3), l_BASE_2207, r_NEW_NAME(rt_str("", 0)));
return rv2213; }
}
l_N_2209 = ((*(R21 *)rt_nil_check(l_N_2209))).f_NEXT;
}
RT_B_TICK();
} L_end2212: ;
l_N_2209 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2209))).f_NAME, l_BASE_2207, 0);
((*(R21 *)rt_nil_check(l_N_2209))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2209;
{ R10 rv2214 = l_BASE_2207;
return rv2214; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2215 = 0;
return rv2215; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2216 = 1;
return rv2216; }
}
{ rt_int rv2217 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2217; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2218; memset(&l_S_2218, 0, sizeof l_S_2218);
l_S_2218 = p_S0;
for (;;) {
if ((l_S_2218 == NULL)) goto L_end2219;
{
if (((((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_PAR)))
{
{ rt_int rv2220 = 1;
return rv2220; }
}
if (((((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2218))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2218))).f_B)))
{
{ rt_int rv2221 = 1;
return rv2221; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2218))).f_A))).f_B))
{
{ rt_int rv2222 = 1;
return rv2222; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2218))).f_B))).f_B))
{
{ rt_int rv2223 = 1;
return rv2223; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2224; memset(&l_A_2224, 0, sizeof l_A_2224);
l_A_2224 = ((*(R21 *)rt_nil_check(l_S_2218))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2218))).f_KIND == g_N_CASE))
{
l_A_2224 = ((*(R21 *)rt_nil_check(l_S_2218))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2218))).f_D == NULL)))
{
{ rt_int rv2225 = 1;
return rv2225; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2218))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2218))).f_C))).f_B))
{
{ rt_int rv2226 = 1;
return rv2226; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2218))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2218))).f_B))).f_B))
{
{ rt_int rv2227 = 1;
return rv2227; }
}
}
for (;;) {
if ((l_A_2224 == NULL)) goto L_end2228;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2224))).f_C == NULL)))
{
{ rt_int rv2229 = 1;
return rv2229; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2224))).f_B))).f_B))
{
{ rt_int rv2230 = 1;
return rv2230; }
}
l_A_2224 = ((*(R21 *)rt_nil_check(l_A_2224))).f_NEXT;
}
RT_B_TICK();
} L_end2228: ;
}
}
l_S_2218 = ((*(R21 *)rt_nil_check(l_S_2218))).f_NEXT;
}
RT_B_TICK();
} L_end2219: ;
{ rt_int rv2231 = 0;
return rv2231; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2232; memset(&l_Y_2232, 0, sizeof l_Y_2232);
l_Y_2232 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2233; memset(&l_S_2233, 0, sizeof l_S_2233);
l_S_2233 = rt_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2233, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2232))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2232))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2232))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2232))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2232, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2235_lo = ((rt_int)1LL), it2235_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2235 = it2235_lo; it2235 <= it2235_hi; it2235++) {
{
if (rt_b_eq(rt_b_slice(l_S_2233, it2235, it2235), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2232))).f_PREFIX, r_MKN(rt_b_slice(l_S_2233, ((rt_int)0LL), rt_sub(it2235, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2236; memset(&l_SHORT_2236, 0, sizeof l_SHORT_2236);
l_SHORT_2236 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2233, rt_add(it2235, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2236))).f_ORIG = l_Y_2232;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2236))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2232))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2236))).f_DECL = p_R;
r_DEFINE(l_SHORT_2236, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2234;
}
}
RT_B_TICK();
if (it2235 == it2235_hi) break;
} } L_end2234: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2237; memset(&l_R_2237, 0, sizeof l_R_2237);
l_R_2237 = p_RS;
for (;;) {
if ((l_R_2237 == NULL)) goto L_end2238;
{
if ((((*(R21 *)rt_nil_check(l_R_2237))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2237);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2237);
}
l_R_2237 = ((*(R21 *)rt_nil_check(l_R_2237))).f_NEXT;
}
RT_B_TICK();
} L_end2238: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2239; memset(&l_R_2239, 0, sizeof l_R_2239);
l_R_2239 = p_RS;
for (;;) {
if ((l_R_2239 == NULL)) goto L_end2240;
{
if ((((*(R21 *)rt_nil_check(l_R_2239))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2241; memset(&l_M_2241, 0, sizeof l_M_2241);
l_M_2241 = r_FIND_DECL(l_R_2239);
r_ENTER_MODULE(l_M_2241);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2239))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2241);
}
}
else
{
{
R12 * l_Y_2242; memset(&l_Y_2242, 0, sizeof l_Y_2242);
l_Y_2242 = r_FIND_DECL(l_R_2239);
r_ROUTINE_HEADER(l_Y_2242);
}
}
l_R_2239 = ((*(R21 *)rt_nil_check(l_R_2239))).f_NEXT;
}
RT_B_TICK();
} L_end2240: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2243; memset(&l_Y_2243, 0, sizeof l_Y_2243);
l_Y_2243 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2243 == NULL)) goto L_end2244;
{
if (((((*(R12 *)rt_nil_check(l_Y_2243))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2243))).f_ORIG == NULL)))
{
{ R12 * rv2245 = l_Y_2243;
return rv2245; }
}
l_Y_2243 = r_LOOKUP_NEXT(l_Y_2243);
}
RT_B_TICK();
} L_end2244: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2246; memset(&l_D_2246, 0, sizeof l_D_2246);
l_D_2246 = p_DECLS;
for (;;) {
if ((l_D_2246 == NULL)) goto L_end2247;
{
if (((((*(R21 *)rt_nil_check(l_D_2246))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2246))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2246))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2248; memset(&l_Y_2248, 0, sizeof l_Y_2248);
l_Y_2248 = r_FIND_DECL(l_D_2246);
R22 * l_T_2249; memset(&l_T_2249, 0, sizeof l_T_2249);
l_T_2249 = r_RESOLVE_USER(r_TYPE_REF(l_D_2246));
}
}
}
l_D_2246 = ((*(R21 *)rt_nil_check(l_D_2246))).f_NEXT;
}
RT_B_TICK();
} L_end2247: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2250; memset(&l_TS_2250, 0, sizeof l_TS_2250);
l_TS_2250 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2250))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2251 = l_TS_2250;
return rv2251; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2252; memset(&l_Y_2252, 0, sizeof l_Y_2252);
l_Y_2252 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2253; memset(&l_SAVED_2253, 0, sizeof l_SAVED_2253);
l_SAVED_2253 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2252))).f_DECL = p_M;
r_DEFINE(l_Y_2252, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2254; memset(&l_MARK_2254, 0, sizeof l_MARK_2254);
l_MARK_2254 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2252;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2252))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2254);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2253;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2252);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2255; memset(&l_Y_2255, 0, sizeof l_Y_2255);
l_Y_2255 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2255 == NULL)) goto L_end2256;
{
{
R12 * l_NEXT_2257; memset(&l_NEXT_2257, 0, sizeof l_NEXT_2257);
l_NEXT_2257 = ((*(R12 *)rt_nil_check(l_Y_2255))).f_SNEXT;
r_DEFINE(l_Y_2255, ((rt_int)0LL));
l_Y_2255 = l_NEXT_2257;
}
}
RT_B_TICK();
} L_end2256: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2258; memset(&l_MARK_2258, 0, sizeof l_MARK_2258);
l_MARK_2258 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2258 == NULL)) goto L_end2259;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2258))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2259;
}
l_MARK_2258 = ((*(R12 *)rt_nil_check(l_MARK_2258))).f_SNEXT;
}
RT_B_TICK();
} L_end2259: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2258);
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
{ rt_int rv2260 = 1;
return rv2260; }
}
}
{ rt_int rv2261 = 0;
return rv2261; }
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
R21 * l_D_2262; memset(&l_D_2262, 0, sizeof l_D_2262);
l_D_2262 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2263; memset(&l_Y_2263, 0, sizeof l_Y_2263);
l_Y_2263 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2263 == NULL)) goto L_end2264;
{
if (r_EXPORTED_BY(l_D_2262, l_Y_2263))
{
((*(R12 *)rt_nil_check(l_Y_2263))).f_EXPORTED = 1;
{
R12 * l_A_2265; memset(&l_A_2265, 0, sizeof l_A_2265);
l_A_2265 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2263))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2263))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2265)), (*(R12 *)rt_nil_check(l_Y_2263)), 0);
((*(R12 *)rt_nil_check(l_A_2265))).f_ORIG = r_ORIGINAL(l_Y_2263);
((*(R12 *)rt_nil_check(l_A_2265))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2265, ((*(R21 *)rt_nil_check(l_D_2262))).f_LINE);
}
}
l_Y_2263 = ((*(R12 *)rt_nil_check(l_Y_2263))).f_SNEXT;
}
RT_B_TICK();
} L_end2264: ;
{
R21 * l_X_2266; memset(&l_X_2266, 0, sizeof l_X_2266);
l_X_2266 = ((*(R21 *)rt_nil_check(l_D_2262))).f_B;
for (;;) {
if ((l_X_2266 == NULL)) goto L_end2267;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2266))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2266))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2266))).f_NAME);
}
l_X_2266 = ((*(R21 *)rt_nil_check(l_X_2266))).f_NEXT;
}
RT_B_TICK();
} L_end2267: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2268; memset(&l_Y_2268, 0, sizeof l_Y_2268);
l_Y_2268 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2268 == NULL)) goto L_end2269;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2268))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2268))).f_PREFIX, p_NAME)))
{
{ rt_int rv2270 = 1;
return rv2270; }
}
l_Y_2268 = ((*(R12 *)rt_nil_check(l_Y_2268))).f_SNEXT;
}
RT_B_TICK();
} L_end2269: ;
{ rt_int rv2271 = 0;
return rv2271; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2272; memset(&l_X_2272, 0, sizeof l_X_2272);
l_X_2272 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2273 = 0;
return rv2273; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2274 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2274; }
}
for (;;) {
if ((l_X_2272 == NULL)) goto L_end2275;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2272))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2276 = 1;
return rv2276; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2272))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2272))).f_A == NULL))
{
{ rt_int rv2277 = 1;
return rv2277; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2272))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2278 = 1;
return rv2278; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2279; memset(&l_T_2279, 0, sizeof l_T_2279);
l_T_2279 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2272))).f_NAME, p_Y);
if ((!(l_T_2279 == NULL)))
{
{ rt_int rv2280 = 1;
return rv2280; }
}
}
}
l_X_2272 = ((*(R21 *)rt_nil_check(l_X_2272))).f_NEXT;
}
RT_B_TICK();
} L_end2275: ;
{ rt_int rv2281 = 0;
return rv2281; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2282; memset(&l_M_2282, 0, sizeof l_M_2282);
l_M_2282 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2283; memset(&l_Z_2283, 0, sizeof l_Z_2283);
if ((l_M_2282 == NULL))
{
{ R12 * rv2284 = NULL;
return rv2284; }
}
l_Z_2283 = ((*(R12 *)rt_nil_check(l_M_2282))).f_MEMBERS;
for (;;) {
if ((l_Z_2283 == NULL)) goto L_end2285;
{
if (((((*(R12 *)rt_nil_check(l_Z_2283))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2283))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2283))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2283))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2283))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2286 = l_Z_2283;
return rv2286; }
}
}
}
}
l_Z_2283 = ((*(R12 *)rt_nil_check(l_Z_2283))).f_SNEXT;
}
RT_B_TICK();
} L_end2285: ;
{ R12 * rv2287 = NULL;
return rv2287; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2288; memset(&l_R_2288, 0, sizeof l_R_2288);
l_R_2288 = p_RS;
for (;;) {
if ((l_R_2288 == NULL)) goto L_end2289;
{
if ((((*(R21 *)rt_nil_check(l_R_2288))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2290; memset(&l_M_2290, 0, sizeof l_M_2290);
l_M_2290 = r_FIND_DECL(l_R_2288);
R21 * l_D_2291; memset(&l_D_2291, 0, sizeof l_D_2291);
l_D_2291 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2288))).f_C))).f_A;
r_ENTER_MODULE(l_M_2290);
for (;;) {
if ((l_D_2291 == NULL)) goto L_end2292;
{
if (((((*(R21 *)rt_nil_check(l_D_2291))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2291))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2291);
}
l_D_2291 = ((*(R21 *)rt_nil_check(l_D_2291))).f_NEXT;
}
RT_B_TICK();
} L_end2292: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2288))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2288))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2290);
}
}
l_R_2288 = ((*(R21 *)rt_nil_check(l_R_2288))).f_NEXT;
}
RT_B_TICK();
} L_end2289: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2293; memset(&l_R_2293, 0, sizeof l_R_2293);
l_R_2293 = p_RS;
for (;;) {
if ((l_R_2293 == NULL)) goto L_end2294;
{
if ((((*(R21 *)rt_nil_check(l_R_2293))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2295; memset(&l_M_2295, 0, sizeof l_M_2295);
l_M_2295 = r_FIND_DECL(l_R_2293);
r_ENTER_MODULE(l_M_2295);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2293))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2295);
}
}
else
{
{
R12 * l_Y_2296; memset(&l_Y_2296, 0, sizeof l_Y_2296);
l_Y_2296 = r_FIND_DECL(l_R_2293);
if ((!((*(R12 *)rt_nil_check(l_Y_2296))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2296);
}
}
}
l_R_2293 = ((*(R21 *)rt_nil_check(l_R_2293))).f_NEXT;
}
RT_B_TICK();
} L_end2294: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2297; memset(&l_LEVEL_2297, 0, sizeof l_LEVEL_2297);
l_LEVEL_2297 = r_CUR_LEVEL();
rt_int l_MORE_2298; memset(&l_MORE_2298, 0, sizeof l_MORE_2298);
l_MORE_2298 = 1;
for (;;) {
if ((!l_MORE_2298)) goto L_end2299;
{
l_MORE_2298 = 0;
{
R12 * l_P_2300; memset(&l_P_2300, 0, sizeof l_P_2300);
l_P_2300 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2301; memset(&l_PREV_2301, 0, sizeof l_PREV_2301);
l_PREV_2301 = NULL;
for (;;) {
if ((l_P_2300 == NULL)) goto L_end2302;
{
if ((((*(R12 *)rt_nil_check(l_P_2300))).f_LEVEL == l_LEVEL_2297))
{
if ((l_PREV_2301 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2300))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2301))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2300))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2300);
r_ROUTINE_BODY(l_P_2300);
r_LEAVE_MODULE_OF(l_P_2300);
l_MORE_2298 = 1;
goto L_end2302;
}
l_PREV_2301 = l_P_2300;
l_P_2300 = ((*(R12 *)rt_nil_check(l_P_2300))).f_MEMBERS;
}
RT_B_TICK();
} L_end2302: ;
}
}
RT_B_TICK();
} L_end2299: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2303; memset(&l_D_2303, 0, sizeof l_D_2303);
l_D_2303 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2304; memset(&l_S_2304, 0, sizeof l_S_2304);
l_S_2304 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2303 == NULL)) goto L_end2305;
{
if (((((*(R21 *)rt_nil_check(l_D_2303))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2303))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2303);
}
l_D_2303 = ((*(R21 *)rt_nil_check(l_D_2303))).f_NEXT;
}
RT_B_TICK();
} L_end2305: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2304 == NULL)) goto L_end2306;
{
r_STMT(l_S_2304);
l_S_2304 = ((*(R21 *)rt_nil_check(l_S_2304))).f_NEXT;
}
RT_B_TICK();
} L_end2306: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2307; memset(&l_R_2307, 0, sizeof l_R_2307);
l_R_2307 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2308; memset(&l_SAVED_CODE_2308, 0, sizeof l_SAVED_CODE_2308);
S_R14(&l_SAVED_CODE_2308, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2309; memset(&l_SAVED_CTXS_2309, 0, sizeof l_SAVED_CTXS_2309);
l_SAVED_CTXS_2309 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2310; memset(&l_SAVED_BINDS_2310, 0, sizeof l_SAVED_BINDS_2310);
l_SAVED_BINDS_2310 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2311; memset(&l_OUTER_2311, 0, sizeof l_OUTER_2311);
l_OUTER_2311 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2312; memset(&l_CS_2312, 0, sizeof l_CS_2312);
l_CS_2312 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2313; memset(&l_PROLOGUE_2313, 0, sizeof l_PROLOGUE_2313);
S_R10(&l_PROLOGUE_2313, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2312)), ({ R18 rc2314; memset(&rc2314, 0, sizeof rc2314);  rc2314.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2314.f_R = p_Y; rc2314.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2314.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2314.f_FIELDS, ({ R14 rc2315; memset(&rc2315, 0, sizeof rc2315);  rc2315.f_HEAD = NULL; rc2315.f_TAIL = NULL; rc2315; }), 0); rc2314.f_UP = l_OUTER_2311; rc2314.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2307))).f_E; rc2314.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2307))).f_D))).f_A; rc2314.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2314.f_IS_PATH = 0; S_R10(&rc2314.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2314; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2312))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2312))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2312))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2312))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2313, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2312))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2312))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2313, r_CATS(l_PROLOGUE_2313, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2312;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2316; memset(&rc2316, 0, sizeof rc2316);  rc2316.f_HEAD = NULL; rc2316.f_TAIL = NULL; rc2316; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2307))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2307))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2307))).f_LINE);
{
R28 * l_P_2317; memset(&l_P_2317, 0, sizeof l_P_2317);
l_P_2317 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2317 == NULL)) goto L_end2318;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2317))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2317))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2319; memset(&l_V_2319, 0, sizeof l_V_2319);
l_V_2319 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2317))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2319))).f_T = ((*(R28 *)rt_nil_check(l_P_2317))).f_T;
((*(R12 *)rt_nil_check(l_V_2319))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2317))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2319))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2317))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2319))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2319))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2317))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2312))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2317))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2312))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2313, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2313, r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2319))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2317))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2320; memset(&l_ARGA_2320, 0, sizeof l_ARGA_2320);
S_R10(&l_ARGA_2320, ((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2317))).f_T, l_ARGA_2320, ((*(R21 *)rt_nil_check(l_R_2307))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2319))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2317))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2312))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2313, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2313, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2317))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2317))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2313, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2313, ((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, l_ARGA_2320), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2317))).f_T))
{
S_R10(&l_PROLOGUE_2313, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2313, ((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2317))).f_T, l_ARGA_2320)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2312))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2312))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2317))).f_T, l_ARGA_2320, ((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS)), 0);
r_DEFINE(l_V_2319, ((*(R21 *)rt_nil_check(l_R_2307))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2319, ((*(R21 *)rt_nil_check(l_R_2307))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2317))).f_T, ((*(R12 *)rt_nil_check(l_V_2319))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2307))).f_LINE, 1);
}
}
}
}
l_P_2317 = ((*(R28 *)rt_nil_check(l_P_2317))).f_NEXT;
}
RT_B_TICK();
} L_end2318: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2307))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2307))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2307))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2312))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2312))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2313));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2312))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2312))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2311;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2308, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2309;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2310;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2321; memset(&l_B_2321, 0, sizeof l_B_2321);
l_B_2321 = p_BS;
for (;;) {
if ((l_B_2321 == NULL)) goto L_end2322;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2321))).f_T == NULL)))
{
{
R12 * l_Y_2323; memset(&l_Y_2323, 0, sizeof l_Y_2323);
l_Y_2323 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2321))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2323))).f_T = ((*(R20 *)rt_nil_check(l_B_2321))).f_T;
r_DEFINE(l_Y_2323, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2321))).f_HASMV)
{
{
R12 * l_Y_2324; memset(&l_Y_2324, 0, sizeof l_Y_2324);
l_Y_2324 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2321))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2324))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2324))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2324))).f_MV = ((*(R20 *)rt_nil_check(l_B_2321))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2324))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2321))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2324))).f_INPUT = 1;
r_DEFINE(l_Y_2324, p_LINE);
}
}
l_B_2321 = ((*(R20 *)rt_nil_check(l_B_2321))).f_NEXT;
}
RT_B_TICK();
} L_end2322: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2325; memset(&l_C_2325, 0, sizeof l_C_2325);
l_C_2325 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2325 == NULL)) goto L_end2326;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2325))).f_T), &(*p_DST));
l_C_2325 = ((*(R15 *)rt_nil_check(l_C_2325))).f_NEXT;
}
RT_B_TICK();
} L_end2326: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2327; memset(&l_U_2327, 0, sizeof l_U_2327);
l_U_2327 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2327 == NULL)) goto L_end2328;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2327))).f_NAME, p_NAME))
{
{ rt_int rv2329 = 1;
return rv2329; }
}
l_U_2327 = ((*(R21 *)rt_nil_check(l_U_2327))).f_NEXT;
}
RT_B_TICK();
} L_end2328: ;
{ rt_int rv2330 = 0;
return rv2330; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2331; memset(&l_U_2331, 0, sizeof l_U_2331);
l_U_2331 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2331 == NULL)) goto L_end2332;
{
{
R21 * l_T_2333; memset(&l_T_2333, 0, sizeof l_T_2333);
l_T_2333 = p_SEGS;
for (;;) {
if ((l_T_2333 == NULL)) goto L_end2334;
{
if ((((!(l_T_2333 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2333))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2333))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2331))).f_NAME)))
{
{ rt_int rv2335 = 0;
return rv2335; }
}
l_T_2333 = ((*(R21 *)rt_nil_check(l_T_2333))).f_NEXT;
}
RT_B_TICK();
} L_end2334: ;
}
l_U_2331 = ((*(R21 *)rt_nil_check(l_U_2331))).f_NEXT;
}
RT_B_TICK();
} L_end2332: ;
{ rt_int rv2336 = 1;
return rv2336; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2337; memset(&l_S_2337, 0, sizeof l_S_2337);
l_S_2337 = p_SEGS;
rt_int l_MAINS_2338; memset(&l_MAINS_2338, 0, sizeof l_MAINS_2338);
l_MAINS_2338 = ((rt_int)0LL);
R18 * l_ROOT_2339; memset(&l_ROOT_2339, 0, sizeof l_ROOT_2339);
l_ROOT_2339 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2339)), ({ R18 rc2340; memset(&rc2340, 0, sizeof rc2340);  rc2340.f_LEVEL = ((rt_int)0LL); rc2340.f_R = NULL; rc2340.f_FRAMED = 0; S_R10(&rc2340.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2340.f_FIELDS, ({ R14 rc2341; memset(&rc2341, 0, sizeof rc2341);  rc2341.f_HEAD = NULL; rc2341.f_TAIL = NULL; rc2341; }), 0); rc2340.f_UP = NULL; rc2340.f_IMPORTS = NULL; rc2340.f_SIGNALS = NULL; rc2340.f_RESULT = NULL; rc2340.f_IS_PATH = 0; S_R10(&rc2340.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2340; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2339;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2342; memset(&rc2342, 0, sizeof rc2342);  rc2342.f_HEAD = NULL; rc2342.f_TAIL = NULL; rc2342; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2337 = p_SEGS;
for (;;) {
if ((l_S_2337 == NULL)) goto L_end2344;
{
if ((((*(R21 *)rt_nil_check(l_S_2337))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2337, p_SEGS))
{
goto L_end2344;
}
}
l_S_2337 = ((*(R21 *)rt_nil_check(l_S_2337))).f_NEXT;
}
RT_B_TICK();
} L_end2344: ;
if ((l_S_2337 == NULL))
{
goto L_end2343;
}
((*(R21 *)rt_nil_check(l_S_2337))).f_D = l_S_2337;
l_MAINS_2338 = rt_add(l_MAINS_2338, ((*(R21 *)rt_nil_check(l_S_2337))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2337))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2337))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2337))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2337, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2337))).f_B);
r_SEGMENT_EXPORTS(l_S_2337);
}
RT_B_TICK();
} L_end2343: ;
l_S_2337 = p_SEGS;
for (;;) {
if ((l_S_2337 == NULL)) goto L_end2345;
{
if ((((*(R21 *)rt_nil_check(l_S_2337))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2337))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2337))).f_NAME);
}
l_S_2337 = ((*(R21 *)rt_nil_check(l_S_2337))).f_NEXT;
}
RT_B_TICK();
} L_end2345: ;
if ((!(l_MAINS_2338 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2346; memset(&l_X_2346, 0, sizeof l_X_2346);
l_X_2346 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2346 == NULL)) goto L_end2347;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2346))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2346))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2346))).f_NAME)));
l_X_2346 = ((*(R21 *)rt_nil_check(l_X_2346))).f_NEXT;
}
RT_B_TICK();
} L_end2347: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2348; memset(&l_M_2348, 0, sizeof l_M_2348);
l_M_2348 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2349 = 0;
return rv2349; }
}
for (;;) {
if ((l_M_2348 == NULL)) goto L_end2350;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2348))).f_NAME))
{
{ rt_int rv2351 = 1;
return rv2351; }
}
l_M_2348 = ((*(R12 *)rt_nil_check(l_M_2348))).f_MODL;
}
RT_B_TICK();
} L_end2350: ;
{ rt_int rv2352 = 0;
return rv2352; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2353; memset(&l_MARK_2353, 0, sizeof l_MARK_2353);
l_MARK_2353 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2354; memset(&l_TAKEN_2354, 0, sizeof l_TAKEN_2354);
for (;;) {
if ((l_MARK_2353 == NULL)) goto L_end2355;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2353))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2355;
}
l_MARK_2353 = ((*(R12 *)rt_nil_check(l_MARK_2353))).f_SNEXT;
}
RT_B_TICK();
} L_end2355: ;
l_TAKEN_2354 = r_TAKE_SCOPE(l_MARK_2353);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2354 == NULL)) goto L_end2356;
{
{
R12 * l_NEXT_2357; memset(&l_NEXT_2357, 0, sizeof l_NEXT_2357);
l_NEXT_2357 = ((*(R12 *)rt_nil_check(l_TAKEN_2354))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2354))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2354))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2354))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2354)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2354))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2354))))))
{
r_DEFINE(l_TAKEN_2354, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2354 = l_NEXT_2357;
}
}
RT_B_TICK();
} L_end2356: ;
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
