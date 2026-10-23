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
struct R18 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R10 f_FTYPE; R14 f_FIELDS; R18 * f_UP; R21 * f_IMPORTS; R21 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; };
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
static void S_R10(R10 *d, R10 s, int any);
static int E_R10(R10 a, R10 b);
static void S_R9(R9 *d, R9 s, int any);
static int E_R9(R9 a, R9 b);
static void S_A11(A11 *d, A11 s, int any);
static int E_A11(A11 a, A11 b);
static void S_A13(A13 *d, A13 s, int any);
static int E_A13(A13 a, A13 b);
static void S_R14(R14 *d, R14 s, int any);
static int E_R14(R14 a, R14 b);
static void S_A16(A16 *d, A16 s, int any);
static int E_A16(A16 a, A16 b);
static void S_R7(R7 *d, R7 s, int any);
static int E_R7(R7 a, R7 b);
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
static R26 r_UNARY(R21 * p_E);
static rt_int r_IS_LITERALISH(R21 * p_E);
static R26 r_BINARY(R21 * p_E);
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B);
static R10 r_LOWER_OP(R10 p_OP);
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B);
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
static R12 * r_BOUND_ROUTINE(R10 p_NAME);
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME);
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST);
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP);
static rt_int r_PARAM_COUNT(R12 * p_R);
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS);
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T);
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE);
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
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT);
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
static void S_R15(R15 *d, R15 s, int any);
static int E_R15(R15 a, R15 b);
static void S_R12(R12 *d, R12 s, int any);
static int E_R12(R12 a, R12 b);
static void S_R18(R18 *d, R18 s, int any);
static int E_R18(R18 a, R18 b);
static void S_R19(R19 *d, R19 s, int any);
static int E_R19(R19 a, R19 b);
static void S_R22(R22 *d, R22 s, int any);
static int E_R22(R22 a, R22 b);
static void S_R20(R20 *d, R20 s, int any);
static int E_R20(R20 a, R20 b);
static void S_R25(R25 *d, R25 s, int any);
static int E_R25(R25 a, R25 b);
static void S_R24(R24 *d, R24 s, int any);
static int E_R24(R24 a, R24 b);
static void S_R27(R27 *d, R27 s, int any);
static int E_R27(R27 a, R27 b);
static void S_R28(R28 *d, R28 s, int any);
static int E_R28(R28 a, R28 b);
static void S_R17(R17 *d, R17 s, int any);
static int E_R17(R17 a, R17 b);
static void S_A8(A8 *d, A8 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) d->p[i] = s.p[i]; }
static int E_A8(A8 a, A8 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!(a.p[i] == b.p[i])) return 0; return 1; }
static void S_R10(R10 *d, R10 s, int any) {  d->f_AT = s.f_AT; d->f_LEN = s.f_LEN; d->f_H = s.f_H; }
static int E_R10(R10 a, R10 b) { return 1 && (a.f_AT == b.f_AT) && (a.f_LEN == b.f_LEN) && (a.f_H == b.f_H); }
static void S_R9(R9 *d, R9 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R10(&d->f_TX, s.f_TX, 0); }
static int E_R9(R9 a, R9 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R10(a.f_TX, b.f_TX); }
static void S_A11(A11 *d, A11 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) S_R9(&d->p[i], s.p[i], 0); }
static int E_A11(A11 a, A11 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!E_R9(a.p[i], b.p[i])) return 0; return 1; }
static void S_A13(A13 *d, A13 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) d->p[i] = s.p[i]; }
static int E_A13(A13 a, A13 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!(a.p[i] == b.p[i])) return 0; return 1; }
static void S_R14(R14 *d, R14 s, int any) {  d->f_HEAD = s.f_HEAD; d->f_TAIL = s.f_TAIL; }
static int E_R14(R14 a, R14 b) { return 1 && (a.f_HEAD == b.f_HEAD) && (a.f_TAIL == b.f_TAIL); }
static void S_A16(A16 *d, A16 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) S_R14(&d->p[i], s.p[i], 0); }
static int E_A16(A16 a, A16 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!E_R14(a.p[i], b.p[i])) return 0; return 1; }
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static void S_R23(R23 *d, R23 s, int any) {  d->f_OK = s.f_OK; d->f_V = s.f_V; }
static int E_R23(R23 a, R23 b) { return 1 && (a.f_OK == b.f_OK) && (a.f_V == b.f_V); }
static void S_R26(R26 *d, R26 s, int any) {  S_R10(&d->f_C, s.f_C, 0); d->f_T = s.f_T; d->f_LVAL = s.f_LVAL; S_R10(&d->f_SELF, s.f_SELF, 0); }
static int E_R26(R26 a, R26 b) { return 1 && E_R10(a.f_C, b.f_C) && (a.f_T == b.f_T) && (a.f_LVAL == b.f_LVAL) && E_R10(a.f_SELF, b.f_SELF); }
static void S_R21(R21 *d, R21 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_A = s.f_A; d->f_B = s.f_B; d->f_C = s.f_C; d->f_D = s.f_D; d->f_E = s.f_E; d->f_NEXT = s.f_NEXT; d->f_FL = s.f_FL; }
static int E_R21(R21 a, R21 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R10(a.f_NAME, b.f_NAME) && (a.f_A == b.f_A) && (a.f_B == b.f_B) && (a.f_C == b.f_C) && (a.f_D == b.f_D) && (a.f_E == b.f_E) && (a.f_NEXT == b.f_NEXT) && (a.f_FL == b.f_FL); }
static void S_R15(R15 *d, R15 s, int any) {  S_R10(&d->f_T, s.f_T, 0); d->f_NEXT = s.f_NEXT; }
static int E_R15(R15 a, R15 b) { return 1 && E_R10(a.f_T, b.f_T) && (a.f_NEXT == b.f_NEXT); }
static void S_R12(R12 *d, R12 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R10(&d->f_ACCESS, s.f_ACCESS, 0); S_R10(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R10(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R10(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R10(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R10(a.f_ACCESS, b.f_ACCESS) && E_R10(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R10(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R10(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static void S_R18(R18 *d, R18 s, int any) {  d->f_LEVEL = s.f_LEVEL; d->f_R = s.f_R; d->f_FRAMED = s.f_FRAMED; S_R10(&d->f_FTYPE, s.f_FTYPE, 0); S_R14(&d->f_FIELDS, s.f_FIELDS, 0); d->f_UP = s.f_UP; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; d->f_RESULT = s.f_RESULT; d->f_IS_PATH = s.f_IS_PATH; }
static int E_R18(R18 a, R18 b) { return 1 && (a.f_LEVEL == b.f_LEVEL) && (a.f_R == b.f_R) && (a.f_FRAMED == b.f_FRAMED) && E_R10(a.f_FTYPE, b.f_FTYPE) && E_R14(a.f_FIELDS, b.f_FIELDS) && (a.f_UP == b.f_UP) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && (a.f_RESULT == b.f_RESULT) && (a.f_IS_PATH == b.f_IS_PATH); }
static void S_R19(R19 *d, R19 s, int any) {  d->f_ID = s.f_ID; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_UP = s.f_UP; }
static int E_R19(R19 a, R19 b) { return 1 && (a.f_ID == b.f_ID) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && E_R10(a.f_NAME, b.f_NAME) && (a.f_UP == b.f_UP); }
static void S_R22(R22 *d, R22 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R10(&d->f_LO_C, s.f_LO_C, 0); S_R10(&d->f_HI_C, s.f_HI_C, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R10(&d->f_LEN_C, s.f_LEN_C, 0); S_R23(&d->f_MLEN, s.f_MLEN, 0); S_R10(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R10(&d->f_NAME, s.f_NAME, 0); S_R10(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; }
static int E_R22(R22 a, R22 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R10(a.f_LO_C, b.f_LO_C) && E_R10(a.f_HI_C, b.f_HI_C) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R10(a.f_LEN_C, b.f_LEN_C) && E_R23(a.f_MLEN, b.f_MLEN) && E_R10(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R10(a.f_NAME, b.f_NAME) && E_R10(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL); }
static void S_R20(R20 *d, R20 s, int any) {  S_R10(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R10(&d->f_C, s.f_C, 0); d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_R = s.f_R; d->f_NEXT = s.f_NEXT; }
static int E_R20(R20 a, R20 b) { return 1 && E_R10(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R10(a.f_C, b.f_C) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_R == b.f_R) && (a.f_NEXT == b.f_NEXT); }
static void S_R25(R25 *d, R25 s, int any) {  S_R10(&d->f_LO, s.f_LO, 0); S_R10(&d->f_HI, s.f_HI, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_ANYARG = s.f_ANYARG; d->f_NEXT = s.f_NEXT; }
static int E_R25(R25 a, R25 b) { return 1 && E_R10(a.f_LO, b.f_LO) && E_R10(a.f_HI, b.f_HI) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_ANYARG == b.f_ANYARG) && (a.f_NEXT == b.f_NEXT); }
static void S_R24(R24 *d, R24 s, int any) {  S_R10(&d->f_NAME, s.f_NAME, 0); S_R10(&d->f_CNAME, s.f_CNAME, 0); d->f_T = s.f_T; d->f_KIND = s.f_KIND; S_R10(&d->f_TAGF, s.f_TAGF, 0); d->f_LABELS = s.f_LABELS; d->f_NEXT = s.f_NEXT; }
static int E_R24(R24 a, R24 b) { return 1 && E_R10(a.f_NAME, b.f_NAME) && E_R10(a.f_CNAME, b.f_CNAME) && (a.f_T == b.f_T) && (a.f_KIND == b.f_KIND) && E_R10(a.f_TAGF, b.f_TAGF) && (a.f_LABELS == b.f_LABELS) && (a.f_NEXT == b.f_NEXT); }
static void S_R27(R27 *d, R27 s, int any) {  d->f_E = s.f_E; S_R26(&d->f_V, s.f_V, 0); d->f_HAVE = s.f_HAVE; d->f_MODE = s.f_MODE; d->f_NEXT = s.f_NEXT; }
static int E_R27(R27 a, R27 b) { return 1 && (a.f_E == b.f_E) && E_R26(a.f_V, b.f_V) && (a.f_HAVE == b.f_HAVE) && (a.f_MODE == b.f_MODE) && (a.f_NEXT == b.f_NEXT); }
static void S_R28(R28 *d, R28 s, int any) {  S_R10(&d->f_NAME, s.f_NAME, 0); d->f_MODE = s.f_MODE; d->f_T = s.f_T; d->f_TS = s.f_TS; d->f_NEXT = s.f_NEXT; }
static int E_R28(R28 a, R28 b) { return 1 && E_R10(a.f_NAME, b.f_NAME) && (a.f_MODE == b.f_MODE) && (a.f_T == b.f_T) && (a.f_TS == b.f_TS) && (a.f_NEXT == b.f_NEXT); }
static void S_R17(R17 *d, R17 s, int any) {  d->f_KIND = s.f_KIND; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_HANDLERS = s.f_HANDLERS; d->f_NEXT = s.f_NEXT; }
static int E_R17(R17 a, R17 b) { return 1 && (a.f_KIND == b.f_KIND) && E_R10(a.f_NAME, b.f_NAME) && (a.f_HANDLERS == b.f_HANDLERS) && (a.f_NEXT == b.f_NEXT); }
static rstr r_CHAR_OF(rt_int p_C) { 
if (({ rt_int iv29 = p_C; (((rt_int)32LL)) <= iv29 && iv29 <= (((rt_int)126LL)); }))
{
{ rstr rv30 = rt_b_slice(g_GRAPHIC, rt_sub(p_C, ((rt_int)32LL)), rt_sub(p_C, ((rt_int)32LL)));
return rv30; }
}
else if ((p_C == ((rt_int)9LL)))
{
{ rstr rv31 = rt_str("\011", 1);
return rv31; }
}
else if ((p_C == ((rt_int)10LL)))
{
{ rstr rv32 = rt_str("\012", 1);
return rv32; }
}
else if ((p_C == ((rt_int)13LL)))
{
{ rstr rv33 = rt_str("\015", 1);
return rv33; }
}
{ rstr rv34 = rt_str("\?", 1);
return rv34; }
rt_raise(RT_X_INIT);
}
static rt_int r_CODE_OF(rstr p_S) { 
{ rt_int it36_lo = ((rt_int)0LL), it36_hi = ((rt_int)94LL);
for (rt_int it36 = it36_lo; it36 <= it36_hi; it36++) {
{
if (rt_b_eq(rt_b_slice(g_GRAPHIC, it36, it36), p_S))
{
{ rt_int rv37 = rt_add(it36, ((rt_int)32LL));
return rv37; }
}
}
} } L_end35: ;
if (rt_b_eq(p_S, rt_str("\011", 1)))
{
{ rt_int rv38 = ((rt_int)9LL);
return rv38; }
}
else if (rt_b_eq(p_S, rt_str("\012", 1)))
{
{ rt_int rv39 = ((rt_int)10LL);
return rv39; }
}
{ rt_int rv40 = ((rt_int)13LL);
return rv40; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3) { 
{ rt_int rv41 = rt_rem((rt_add(rt_add(rt_add(rt_mul(p_L, ((rt_int)31LL)), rt_mul(p_C1, ((rt_int)7LL))), rt_mul(p_C2, ((rt_int)3LL))), p_C3)), g_HASH_SIZE);
return rv41; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_OF(rstr p_S) { 
if (((rt_int)(p_S).len == ((rt_int)0LL)))
{
{ rt_int rv42 = ((rt_int)0LL);
return rv42; }
}
{ rt_int rv43 = r_HASH_CODES((rt_int)(p_S).len, r_CODE_OF(rt_b_slice(p_S, ((rt_int)0LL), ((rt_int)0LL))), r_CODE_OF(rt_b_slice(p_S, rt_quot((rt_int)(p_S).len, ((rt_int)2LL)), rt_quot((rt_int)(p_S).len, ((rt_int)2LL)))), r_CODE_OF(rt_b_slice(p_S, rt_sub((rt_int)(p_S).len, ((rt_int)1LL)), rt_sub((rt_int)(p_S).len, ((rt_int)1LL)))));
return rv43; }
rt_raise(RT_X_INIT);
}
static R10 r_MK(rstr p_S) { 
rt_int l_AT_44; memset(&l_AT_44, 0, sizeof l_AT_44);
l_AT_44 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_44, (rt_int)(p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, l_AT_44, rt_sub(rt_add(l_AT_44, (rt_int)(p_S).len), ((rt_int)1LL)), p_S);
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_44, (rt_int)(p_S).len);
{ R10 rv45 = ({ R10 rc46; memset(&rc46, 0, sizeof rc46);  rc46.f_AT = l_AT_44; rc46.f_LEN = (rt_int)(p_S).len; rc46.f_H = rt_neg(((rt_int)1LL)); rc46; });
return rv45; }
rt_raise(RT_X_INIT);
}
static R10 r_MKN(rstr p_S) { 
R10 l_T_47; memset(&l_T_47, 0, sizeof l_T_47);
S_R10(&l_T_47, r_MK(p_S), 0);
(l_T_47).f_H = r_HASH_OF(p_S);
{ R10 rv48 = l_T_47;
return rv48; }
rt_raise(RT_X_INIT);
}
static rstr r_STR(R10 p_T, rt_int p_L) { 
{ rstr rv49 = rt_b_slice(((*(R7 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
return rv49; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R10 p_A, R10 p_B) { 
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
{ rt_int rv50 = 0;
return rv50; }
}
{ rt_int rv51 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
return rv51; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R10 p_A, rstr p_S) { 
if ((!((p_A).f_LEN == (rt_int)(p_S).len)))
{
{ rt_int rv52 = 0;
return rv52; }
}
{ rt_int rv53 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
return rv53; }
rt_raise(RT_X_INIT);
}
static R10 r_CAT(R10 p_A, R10 p_B) { 
{ R10 rv54 = r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
return rv54; }
rt_raise(RT_X_INIT);
}
static R10 r_CATS(R10 p_A, rstr p_S) { 
{ R10 rv55 = r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), p_S));
return rv55; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT4(rstr p_P, R10 p_A, R10 p_B, R10 p_C, R10 p_D) { 
rt_int l_AT_56; memset(&l_AT_56, 0, sizeof l_AT_56);
l_AT_56 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_57; memset(&l_N_57, 0, sizeof l_N_57);
l_N_57 = ((rt_int)0LL);
rt_int l_START_58; memset(&l_START_58, 0, sizeof l_START_58);
l_START_58 = ((rt_int)0LL);
R10 l_R_59; memset(&l_R_59, 0, sizeof l_R_59);
{ rt_int it61_lo = ((rt_int)0LL), it61_hi = rt_sub((rt_int)(p_P).len, ((rt_int)1LL));
for (rt_int it61 = it61_lo; it61 <= it61_hi; it61++) {
{
if (rt_b_eq(rt_b_slice(p_P, it61, it61), rt_str("@", 1)))
{
S_R10(&l_R_59, r_MK(rt_b_slice(p_P, l_START_58, rt_sub(it61, ((rt_int)1LL)))), 0);
switch (l_N_57) {
case 0:
{
S_R10(&l_R_59, r_MK(r_STR(p_A, (p_A).f_LEN)), 0);
}
break;
case 1:
{
S_R10(&l_R_59, r_MK(r_STR(p_B, (p_B).f_LEN)), 0);
}
break;
case 2:
{
S_R10(&l_R_59, r_MK(r_STR(p_C, (p_C).f_LEN)), 0);
}
break;
default:
{
S_R10(&l_R_59, r_MK(r_STR(p_D, (p_D).f_LEN)), 0);
}
break;
}
l_N_57 = rt_add(l_N_57, ((rt_int)1LL));
l_START_58 = rt_add(it61, ((rt_int)1LL));
}
}
} } L_end60: ;
S_R10(&l_R_59, r_MK(rt_b_slice(p_P, l_START_58, rt_sub((rt_int)(p_P).len, ((rt_int)1LL)))), 0);
{ R10 rv62 = ({ R10 rc63; memset(&rc63, 0, sizeof rc63);  rc63.f_AT = l_AT_56; rc63.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_56); rc63.f_H = rt_neg(((rt_int)1LL)); rc63; });
return rv62; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT1(rstr p_P, R10 p_A) { 
{ R10 rv64 = r_FMT4(p_P, p_A, p_A, p_A, p_A);
return rv64; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT2(rstr p_P, R10 p_A, R10 p_B) { 
{ R10 rv65 = r_FMT4(p_P, p_A, p_B, p_B, p_B);
return rv65; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT3(rstr p_P, R10 p_A, R10 p_B, R10 p_C) { 
{ R10 rv66 = r_FMT4(p_P, p_A, p_B, p_C, p_C);
return rv66; }
rt_raise(RT_X_INIT);
}
static R10 r_NUM(rt_int p_V) { 
{ R10 rv67 = r_MK(rt_b_image(p_V));
return rv67; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_NAME(rstr p_BASE) { 
((*(R7 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R10 rv68 = r_MK(rt_str_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
return rv68; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R10 p_T, R14 *p_B) { 
R15 * l_C_69; memset(&l_C_69, 0, sizeof l_C_69);
l_C_69 = ((R15 *)rt_alloc(sizeof (R15)));
S_R10(&((*(R15 *)rt_nil_check(l_C_69))).f_T, p_T, 0);
((*(R15 *)rt_nil_check(l_C_69))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_69;
}
else
{
((*(R15 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_69;
}
((*p_B)).f_TAIL = l_C_69;
}
static void r_EMIT(rt_int p_SEC, R10 p_T) { 
r_APPEND(p_T, &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(p_SEC, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
static void r_EMITS(rt_int p_SEC, rstr p_S) { 
r_APPEND(r_MK(p_S), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(p_SEC, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
static void r_CODE(R10 p_T) { 
r_APPEND(p_T, &((*(R7 *)rt_nil_check(g_W))).f_CODE);
}
static void r_CODES(rstr p_S) { 
r_APPEND(r_MK(p_S), &((*(R7 *)rt_nil_check(g_W))).f_CODE);
}
static void r_PUT_BUF(R14 p_B) { 
R15 * l_C_70; memset(&l_C_70, 0, sizeof l_C_70);
l_C_70 = (p_B).f_HEAD;
for (;;) {
if ((l_C_70 == NULL)) goto L_end71;
{
{
R10 l_T_72; memset(&l_T_72, 0, sizeof l_T_72);
S_R10(&l_T_72, ((*(R15 *)rt_nil_check(l_C_70))).f_T, 0);
rt_putln(r_STR(l_T_72, (l_T_72).f_LEN));
}
l_C_70 = ((*(R15 *)rt_nil_check(l_C_70))).f_NEXT;
}
} L_end71: ;
}
static void r_WRITE_OUTPUT(void) { 
{ rt_int it74_lo = ((rt_int)0LL), it74_hi = g_O_LAST;
for (rt_int it74 = it74_lo; it74 <= it74_hi; it74++) {
{
r_PUT_BUF((((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it74, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
} } L_end73: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { 
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R10 p_T) { 
r_FAIL(p_LINE, rt_str_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { 
rt_int l_C_75; memset(&l_C_75, 0, sizeof l_C_75);
l_C_75 = rt_b_get_code();
for (;;) {
if ((l_C_75 < ((rt_int)0LL))) goto L_end76;
{
if ((((*(R7 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_75;
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_75 = rt_b_get_code();
}
} L_end76: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
static rt_int r_AT_SRC(rt_int p_I) { 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv77 = ((rt_int)0LL);
return rv77; }
}
{ rt_int rv78 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv78; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { 
{ rt_int rv79 = ({ rt_int iv80 = p_C; (((rt_int)65LL)) <= iv80 && iv80 <= (((rt_int)90LL)); });
return rv79; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { 
{ rt_int rv81 = ({ rt_int iv82 = p_C; (((rt_int)48LL)) <= iv82 && iv82 <= (((rt_int)57LL)); });
return rv81; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { 
{ rt_int rv83 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv83; }
rt_raise(RT_X_INIT);
}
static R10 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { 
rt_int l_AT_84; memset(&l_AT_84, 0, sizeof l_AT_84);
l_AT_84 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_85; memset(&l_L_85, 0, sizeof l_L_85);
l_L_85 = rt_sub(p_BEYOND, p_FIRST);
R10 l_T_86; memset(&l_T_86, 0, sizeof l_T_86);
if ((rt_add(l_AT_84, l_L_85) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it88_lo = p_FIRST, it88_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it88 = it88_lo; it88 <= it88_hi; it88++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it88, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
} } L_end87: ;
S_R10(&l_T_86, ({ R10 rc89; memset(&rc89, 0, sizeof rc89);  rc89.f_AT = l_AT_84; rc89.f_LEN = l_L_85; rc89.f_H = ((rt_int)0LL); rc89; }), 0);
if ((l_L_85 > ((rt_int)0LL)))
{
(l_T_86).f_H = r_HASH_CODES(l_L_85, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_85, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R10 rv90 = l_T_86;
return rv90; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R10 p_T) { 
rstr l_WORDS_91; memset(&l_WORDS_91, 0, sizeof l_WORDS_91);
l_WORDS_91 = rt_str_new(((rt_int)290LL));
rt_b_assign(&l_WORDS_91, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_92; memset(&l_L_92, 0, sizeof l_L_92);
l_L_92 = (p_T).f_LEN;
{ rt_int it94_lo = ((rt_int)0LL), it94_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_92), ((rt_int)2LL));
for (rt_int it94 = it94_lo; it94 <= it94_hi; it94++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_91, it94, it94), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_91, rt_add(rt_add(it94, l_L_92), ((rt_int)1LL)), rt_add(rt_add(it94, l_L_92), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_91, rt_add(it94, ((rt_int)1LL)), rt_add(it94, l_L_92)), r_STR(p_T, l_L_92)))
{
{ rt_int rv95 = 1;
return rv95; }
}
}
}
}
} } L_end93: ;
{ rt_int rv96 = 0;
return rv96; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R10 p_TX) { 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R9(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R9 rc97; memset(&rc97, 0, sizeof rc97);  rc97.f_KIND = p_KIND; rc97.f_LINE = p_LINE; rc97.f_IV = p_IV; S_R10(&rc97.f_TX, p_TX, 0); rc97; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { 
rt_int l_C_98; memset(&l_C_98, 0, sizeof l_C_98);
l_C_98 = r_AT_SRC(p_I);
rt_int l_D_99; memset(&l_D_99, 0, sizeof l_D_99);
l_D_99 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_98 == ((rt_int)45LL)) && (l_D_99 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv100 = ((rt_int)3LL);
return rv100; }
}
if ((((((((((((l_C_98 == ((rt_int)58LL)) && (l_D_99 == ((rt_int)61LL)))) || (((l_C_98 == ((rt_int)45LL)) && (l_D_99 == ((rt_int)62LL))))) || (((l_C_98 == ((rt_int)60LL)) && (l_D_99 == ((rt_int)61LL))))) || (((l_C_98 == ((rt_int)62LL)) && (l_D_99 == ((rt_int)61LL))))) || (((l_C_98 == ((rt_int)60LL)) && (l_D_99 == ((rt_int)62LL))))) || (((l_C_98 == ((rt_int)42LL)) && (l_D_99 == ((rt_int)42LL))))) || (((l_C_98 == ((rt_int)47LL)) && (l_D_99 == ((rt_int)47LL))))) || (((l_C_98 == ((rt_int)36LL)) && (l_D_99 == ((rt_int)36LL))))) || (((l_C_98 == ((rt_int)33LL)) && (l_D_99 == ((rt_int)33LL))))))
{
{ rt_int rv101 = ((rt_int)2LL);
return rv101; }
}
{ rt_int rv102 = ((rt_int)1LL);
return rv102; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { 
rt_int l_I_103; memset(&l_I_103, 0, sizeof l_I_103);
l_I_103 = ((rt_int)0LL);
rt_int l_LINE_104; memset(&l_LINE_104, 0, sizeof l_LINE_104);
l_LINE_104 = ((rt_int)1LL);
rt_int l_C_105; memset(&l_C_105, 0, sizeof l_C_105);
rt_int l_J_106; memset(&l_J_106, 0, sizeof l_J_106);
rt_int l_V_107; memset(&l_V_107, 0, sizeof l_V_107);
for (;;) {
if ((l_I_103 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end108;
{
l_C_105 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_105 == ((rt_int)10LL)))
{
l_LINE_104 = rt_add(l_LINE_104, ((rt_int)1LL));
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
}
else if (((((l_C_105 == ((rt_int)32LL)) || (l_C_105 == ((rt_int)9LL))) || (l_C_105 == ((rt_int)13LL))) || (l_C_105 == ((rt_int)12LL))))
{
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
}
else if ((l_C_105 == ((rt_int)37LL)))
{
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
for (;;) {
if ((((l_I_103 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end109;
{
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
}
} L_end109: ;
if ((r_AT_SRC(l_I_103) == ((rt_int)37LL)))
{
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
}
}
else if ((l_C_105 == ((rt_int)39LL)))
{
{
rt_int l_AT_110; memset(&l_AT_110, 0, sizeof l_AT_110);
l_AT_110 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
for (;;) {
{
if (((l_I_103 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_104, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_103, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
goto L_end111;
}
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
}
} L_end111: ;
r_ADD_TOKEN(g_K_STR, l_LINE_104, ((rt_int)0LL), ({ R10 rc112; memset(&rc112, 0, sizeof rc112);  rc112.f_AT = l_AT_110; rc112.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_110); rc112.f_H = rt_neg(((rt_int)1LL)); rc112; }));
}
}
else if ((l_C_105 == ((rt_int)92LL)))
{
l_J_106 = rt_add(l_I_103, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_106) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_106, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_106, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_106, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_106 = rt_add(l_I_103, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_106) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_106, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_106 = rt_add(l_I_103, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_106) == ((rt_int)91LL)) || (r_AT_SRC(l_J_106) == ((rt_int)93LL))))
{
l_J_106 = rt_add(l_I_103, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_106)))) goto L_end113;
{
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
} L_end113: ;
if ((l_J_106 == rt_add(l_I_103, ((rt_int)1LL))))
{
r_FAIL(l_LINE_104, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_104, ((rt_int)0LL), r_SOURCE_TEXT(l_I_103, l_J_106));
l_I_103 = l_J_106;
}
else if ((l_C_105 == ((rt_int)63LL)))
{
l_J_106 = rt_add(l_I_103, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_106)))) goto L_end114;
{
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
} L_end114: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_104, ((rt_int)0LL), r_SOURCE_TEXT(l_I_103, l_J_106));
l_I_103 = l_J_106;
}
else if (r_IS_LETTER(l_C_105))
{
l_J_106 = l_I_103;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_106)))) goto L_end115;
{
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
} L_end115: ;
{
R10 l_T_116; memset(&l_T_116, 0, sizeof l_T_116);
S_R10(&l_T_116, r_SOURCE_TEXT(l_I_103, l_J_106), 0);
if (r_IS_RESERVED(l_T_116))
{
r_ADD_TOKEN(g_K_RES, l_LINE_104, ((rt_int)0LL), l_T_116);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_104, ((rt_int)0LL), l_T_116);
}
}
l_I_103 = l_J_106;
}
else if ((r_IS_DIGIT(l_C_105) || (((l_C_105 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_103, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_117; memset(&l_KIND_117, 0, sizeof l_KIND_117);
l_KIND_117 = g_K_NUM;
rt_int l_SCALE_118; memset(&l_SCALE_118, 0, sizeof l_SCALE_118);
l_SCALE_118 = ((rt_int)0LL);
rt_int l_NEG_119; memset(&l_NEG_119, 0, sizeof l_NEG_119);
l_NEG_119 = 0;
l_J_106 = l_I_103;
l_V_107 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_106)))) goto L_end120;
{
if ((l_V_107 < ((rt_int)100000000000000000LL)))
{
l_V_107 = rt_sub(rt_add(rt_mul(l_V_107, ((rt_int)10LL)), r_AT_SRC(l_J_106)), ((rt_int)48LL));
}
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
} L_end120: ;
if ((r_AT_SRC(l_J_106) == ((rt_int)46LL)))
{
l_KIND_117 = g_K_REAL;
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_106)))) goto L_end121;
{
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
} L_end121: ;
}
if (((r_AT_SRC(l_J_106) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_106, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_106, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_106, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_106, ((rt_int)2LL))))))))))
{
l_KIND_117 = g_K_REAL;
l_J_106 = rt_add(l_J_106, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_106)))) goto L_end122;
{
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
} L_end122: ;
}
{
R10 l_T_123; memset(&l_T_123, 0, sizeof l_T_123);
S_R10(&l_T_123, r_SOURCE_TEXT(l_I_103, l_J_106), 0);
if (((r_AT_SRC(l_J_106) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_106, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_117 = g_K_FIX;
l_J_106 = rt_add(l_J_106, ((rt_int)2LL));
if ((r_AT_SRC(l_J_106) == ((rt_int)45LL)))
{
l_NEG_119 = 1;
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_106) == ((rt_int)43LL)))
{
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_106)))) goto L_end124;
{
l_SCALE_118 = rt_sub(rt_add(rt_mul(l_SCALE_118, ((rt_int)10LL)), r_AT_SRC(l_J_106)), ((rt_int)48LL));
l_J_106 = rt_add(l_J_106, ((rt_int)1LL));
}
} L_end124: ;
if (l_NEG_119)
{
l_SCALE_118 = rt_neg(l_SCALE_118);
}
l_V_107 = l_SCALE_118;
}
r_ADD_TOKEN(l_KIND_117, l_LINE_104, l_V_107, l_T_123);
}
}
l_I_103 = l_J_106;
}
else
{
l_J_106 = rt_add(l_I_103, r_SYMBOL_LENGTH(l_I_103));
r_ADD_TOKEN(g_K_SYM, l_LINE_104, ((rt_int)0LL), r_SOURCE_TEXT(l_I_103, l_J_106));
l_I_103 = l_J_106;
}
}
} L_end108: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_104, ((rt_int)0LL), r_MK(rt_str("", 0)));
}
static R9 r_CUR(void) { 
{ R9 rv125 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv125; }
rt_raise(RT_X_INIT);
}
static R9 r_AHEAD(rt_int p_K) { 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R9 rv126 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv126; }
}
{ R9 rv127 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv127; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { 
{ rt_int rv128 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv128; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R9 p_T, rstr p_S) { 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv129 = r_TEQS((p_T).f_TX, p_S);
return rv129; }
}
{ rt_int rv130 = 0;
return rv130; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { 
{ rt_int rv131 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv131; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv132 = 0;
return rv132; }
}
{ rt_int rv133 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv133; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { 
{ rt_int rv134 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv134; }
rt_raise(RT_X_INIT);
}
static void r_SKIP(void) { 
if ((((*(R7 *)rt_nil_check(g_W))).f_POS < rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL))))
{
((*(R7 *)rt_nil_check(g_W))).f_POS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL));
}
}
static rt_int r_ACCEPT(rstr p_S) { 
if (r_IS(p_S))
{
r_SKIP();
{ rt_int rv135 = 1;
return rv135; }
}
{ rt_int rv136 = 0;
return rv136; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { 
if ((!r_ACCEPT(p_S)))
{
{
R10 l_T_137; memset(&l_T_137, 0, sizeof l_T_137);
S_R10(&l_T_137, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_str_cat(rt_str_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_137, (l_T_137).f_LEN)));
}
}
}
static R10 r_IDENT(void) { 
R9 l_T_138; memset(&l_T_138, 0, sizeof l_T_138);
S_R9(&l_T_138, r_CUR(), 0);
if ((!((l_T_138).f_KIND == g_K_ID)))
{
r_FAILT((l_T_138).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_138).f_TX);
}
r_SKIP();
{ R10 rv139 = (l_T_138).f_TX;
return rv139; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R10 p_NAME) { 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R21 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { 
R21 * l_N_140; memset(&l_N_140, 0, sizeof l_N_140);
l_N_140 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_N_140)), ({ R21 rc141; memset(&rc141, 0, sizeof rc141);  rc141.f_KIND = p_KIND; rc141.f_LINE = p_LINE; rc141.f_IV = ((rt_int)0LL); S_R10(&rc141.f_NAME, ({ R10 rc142; memset(&rc142, 0, sizeof rc142);  rc142.f_AT = ((rt_int)0LL); rc142.f_LEN = ((rt_int)0LL); rc142.f_H = ((rt_int)0LL); rc142; }), 0); rc141.f_A = NULL; rc141.f_B = NULL; rc141.f_C = NULL; rc141.f_D = NULL; rc141.f_E = NULL; rc141.f_NEXT = NULL; rc141.f_FL = ((rt_int)0LL); rc141; }), 0);
{ R21 * rv143 = l_N_140;
return rv143; }
rt_raise(RT_X_INIT);
}
static void r_ADD_LIST(R21 * p_N, R21 * *p_HEAD, R21 * *p_TAIL) { 
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
static rt_int r_LIST_LENGTH(R21 * p_N) { 
rt_int l_K_144; memset(&l_K_144, 0, sizeof l_K_144);
l_K_144 = ((rt_int)0LL);
R21 * l_P_145; memset(&l_P_145, 0, sizeof l_P_145);
l_P_145 = p_N;
for (;;) {
if ((l_P_145 == NULL)) goto L_end146;
{
l_K_144 = rt_add(l_K_144, ((rt_int)1LL));
l_P_145 = ((*(R21 *)rt_nil_check(l_P_145))).f_NEXT;
}
} L_end146: ;
{ rt_int rv147 = l_K_144;
return rv147; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_NODE(void) { 
R21 * l_N_148; memset(&l_N_148, 0, sizeof l_N_148);
l_N_148 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_148))).f_NAME, r_IDENT(), 0);
{ R21 * rv149 = l_N_148;
return rv149; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_LIST(void) { 
R21 * l_HEAD_150; memset(&l_HEAD_150, 0, sizeof l_HEAD_150);
l_HEAD_150 = NULL;
R21 * l_TAIL_151; memset(&l_TAIL_151, 0, sizeof l_TAIL_151);
l_TAIL_151 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_150, &l_TAIL_151);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end152;
} L_end152: ;
{ R21 * rv153 = l_HEAD_150;
return rv153; }
rt_raise(RT_X_INIT);
}
static R21 * r_ROUTINE_NAME_NODE(void) { 
R21 * l_N_154; memset(&l_N_154, 0, sizeof l_N_154);
l_N_154 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_154))).f_NAME, r_MKN(rt_str_cat(rt_str_cat(r_STR(((*(R21 *)rt_nil_check(l_N_154))).f_NAME, (((*(R21 *)rt_nil_check(l_N_154))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R21 * rv155 = l_N_154;
return rv155; }
rt_raise(RT_X_INIT);
}
static R21 * r_PAREN_IDENTS(void) { 
R21 * l_L_156; memset(&l_L_156, 0, sizeof l_L_156);
l_L_156 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_156 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R21 * rv157 = l_L_156;
return rv157; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { 
rt_int l_DEPTH_158; memset(&l_DEPTH_158, 0, sizeof l_DEPTH_158);
l_DEPTH_158 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_158 = rt_add(l_DEPTH_158, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_158 = rt_sub(l_DEPTH_158, ((rt_int)1LL));
}
r_SKIP();
}
if ((l_DEPTH_158 == ((rt_int)0LL))) goto L_end159;
} L_end159: ;
}
static R21 * r_PARSE_COMPILATION(void) { 
R21 * l_HEAD_160; memset(&l_HEAD_160, 0, sizeof l_HEAD_160);
l_HEAD_160 = NULL;
R21 * l_TAIL_161; memset(&l_TAIL_161, 0, sizeof l_TAIL_161);
l_TAIL_161 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end162;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_160, &l_TAIL_161);
}
} L_end162: ;
{ R21 * rv163 = l_HEAD_160;
return rv163; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ITEMS(void) { 
R21 * l_N_164; memset(&l_N_164, 0, sizeof l_N_164);
l_N_164 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end165;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R21 *)rt_nil_check(l_N_164))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R21 *)rt_nil_check(l_N_164))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_164))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_164))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_164))).f_E = r_PAREN_IDENTS();
}
else
{
{
R10 l_T_166; memset(&l_T_166, 0, sizeof l_T_166);
S_R10(&l_T_166, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_166);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
} L_end165: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv167 = l_N_164;
return rv167; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SEGMENT(void) { 
R21 * l_S_168; memset(&l_S_168, 0, sizeof l_S_168);
l_S_168 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R21 * l_HEAD_169; memset(&l_HEAD_169, 0, sizeof l_HEAD_169);
l_HEAD_169 = NULL;
R21 * l_TAIL_170; memset(&l_TAIL_170, 0, sizeof l_TAIL_170);
l_TAIL_170 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R21 *)rt_nil_check(l_S_168))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R10(&((*(R21 *)rt_nil_check(l_S_168))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_U_172; memset(&l_U_172, 0, sizeof l_U_172);
l_U_172 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_U_172))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_U_172))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_172, &l_HEAD_169, &l_TAIL_170);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end171;
} L_end171: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_S_168))).f_A = l_HEAD_169;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_S_168))).f_FL = ((rt_int)1LL);
}
else
{
((*(R21 *)rt_nil_check(l_S_168))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_S_168))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_S_168))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv173 = l_S_168;
return rv173; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CLOSED_BODY(void) { 
R21 * l_B_174; memset(&l_B_174, 0, sizeof l_B_174);
l_B_174 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R21 * l_HEAD_175; memset(&l_HEAD_175, 0, sizeof l_HEAD_175);
l_HEAD_175 = NULL;
R21 * l_TAIL_176; memset(&l_TAIL_176, 0, sizeof l_TAIL_176);
l_TAIL_176 = NULL;
((*(R21 *)rt_nil_check(l_B_174))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_174))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_175, &l_TAIL_176);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_175, &l_TAIL_176);
}
else
{
goto L_end177;
}
}
} L_end177: ;
((*(R21 *)rt_nil_check(l_B_174))).f_C = l_HEAD_175;
{ R21 * rv178 = l_B_174;
return rv178; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BODY(void) { 
R21 * l_B_179; memset(&l_B_179, 0, sizeof l_B_179);
l_B_179 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_B_179))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_179))).f_B = r_PARSE_STATEMENTS();
{ R21 * rv180 = l_B_179;
return rv180; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_MODULE(void) { 
R21 * l_M_181; memset(&l_M_181, 0, sizeof l_M_181);
l_M_181 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R21 * l_HEAD_182; memset(&l_HEAD_182, 0, sizeof l_HEAD_182);
l_HEAD_182 = NULL;
R21 * l_TAIL_183; memset(&l_TAIL_183, 0, sizeof l_TAIL_183);
l_TAIL_183 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R10(&((*(R21 *)rt_nil_check(l_M_181))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_M_181))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_M_181))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_185; memset(&l_PAREN_185, 0, sizeof l_PAREN_185);
l_PAREN_185 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_X_187; memset(&l_X_187, 0, sizeof l_X_187);
l_X_187 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_X_187))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R21 *)rt_nil_check(l_X_187))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_187, &l_HEAD_182, &l_TAIL_183);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end186;
} L_end186: ;
if (l_PAREN_185)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R21 *)rt_nil_check(l_M_181))).f_B = l_HEAD_182;
}
}
else
{
goto L_end184;
}
}
} L_end184: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_M_181))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_M_181))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv188 = l_M_181;
return rv188; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_DECLARATIONS(void) { 
R21 * l_HEAD_189; memset(&l_HEAD_189, 0, sizeof l_HEAD_189);
l_HEAD_189 = NULL;
R21 * l_TAIL_190; memset(&l_TAIL_190, 0, sizeof l_TAIL_190);
l_TAIL_190 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_189, &l_TAIL_190);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_189, &l_TAIL_190);
}
else if (r_IS(rt_str("REPTYPE", 7)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_189, &l_TAIL_190);
}
else
{
goto L_end191;
}
}
} L_end191: ;
{ R21 * rv192 = l_HEAD_189;
return rv192; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_OBJECT_DECL(void) { 
R21 * l_D_193; memset(&l_D_193, 0, sizeof l_D_193);
l_D_193 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R21 *)rt_nil_check(l_D_193))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R21 *)rt_nil_check(l_D_193))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_D_193))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R21 *)rt_nil_check(l_D_193))).f_C = r_PARSE_EXPR();
}
else if ((((*(R21 *)rt_nil_check(l_D_193))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R21 *)rt_nil_check(l_D_193))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv194 = l_D_193;
return rv194; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FORMALS(void) { 
R21 * l_HEAD_195; memset(&l_HEAD_195, 0, sizeof l_HEAD_195);
l_HEAD_195 = NULL;
R21 * l_TAIL_196; memset(&l_TAIL_196, 0, sizeof l_TAIL_196);
l_TAIL_196 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_F_198; memset(&l_F_198, 0, sizeof l_F_198);
l_F_198 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R21 *)rt_nil_check(l_F_198))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_F_198))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R21 *)rt_nil_check(l_F_198))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_198, &l_HEAD_195, &l_TAIL_196);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end197;
} L_end197: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv199 = l_HEAD_195;
return rv199; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_DECL(void) { 
R21 * l_D_200; memset(&l_D_200, 0, sizeof l_D_200);
l_D_200 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R10(&((*(R21 *)rt_nil_check(l_D_200))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_200))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_200))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R21 * rv201 = l_D_200;
return rv201; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REPTYPE_DECL(void) { 
R21 * l_D_202; memset(&l_D_202, 0, sizeof l_D_202);
l_D_202 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R10(&((*(R21 *)rt_nil_check(l_D_202))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_202))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R21 *)rt_nil_check(l_D_202))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_202))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R21 * rv203 = l_D_202;
return rv203; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REP(void) { 
R21 * l_R_204; memset(&l_R_204, 0, sizeof l_R_204);
l_R_204 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R21 * l_HEAD_205; memset(&l_HEAD_205, 0, sizeof l_HEAD_205);
l_HEAD_205 = NULL;
R21 * l_TAIL_206; memset(&l_TAIL_206, 0, sizeof l_TAIL_206);
l_TAIL_206 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R21 *)rt_nil_check(l_R_204))).f_KIND = g_TS_GEN;
S_R10(&((*(R21 *)rt_nil_check(l_R_204))).f_NAME, r_GEN_NAME(), 0);
{ R21 * rv207 = l_R_204;
return rv207; }
}
S_R10(&((*(R21 *)rt_nil_check(l_R_204))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R21 * rv208 = l_R_204;
return rv208; }
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_204))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_SKIP_PARENS();
{ R21 * rv209 = l_R_204;
return rv209; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end210;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R21 * l_VH_211; memset(&l_VH_211, 0, sizeof l_VH_211);
l_VH_211 = NULL;
R21 * l_VT_212; memset(&l_VT_212, 0, sizeof l_VT_212);
l_VT_212 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_V_214; memset(&l_V_214, 0, sizeof l_V_214);
l_V_214 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_V_214))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R21 *)rt_nil_check(l_V_214))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_214, &l_VH_211, &l_VT_212);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end213;
} L_end213: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_204))).f_B = l_VH_211;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_205, &l_TAIL_206);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
} L_end210: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_204))).f_A = l_HEAD_205;
{ R21 * rv215 = l_R_204;
return rv215; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_NAME(void) { 
R10 l_T_216; memset(&l_T_216, 0, sizeof l_T_216);
S_R10(&l_T_216, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_216).f_LEN == ((rt_int)1LL)))
{
{ R10 rv217 = r_NO_TEXT();
return rv217; }
}
{ R10 rv218 = r_MKN(rt_b_slice(r_STR(l_T_216, (l_T_216).f_LEN), ((rt_int)1LL), rt_sub((l_T_216).f_LEN, ((rt_int)1LL))));
return rv218; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_ARG(void) { 
R21 * l_N_219; memset(&l_N_219, 0, sizeof l_N_219);
if (r_IS_KIND(g_K_GEN))
{
{
R10 l_T_220; memset(&l_T_220, 0, sizeof l_T_220);
S_R10(&l_T_220, (r_CUR()).f_TX, 0);
if (((l_T_220).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R21 * rv221 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv221; }
}
}
l_N_219 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_219))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_219))).f_C = r_PARSE_REP();
}
{ R21 * rv222 = l_N_219;
return rv222; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv223 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv223; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R21 * rv224 = r_PARSE_TYPE_SPEC();
return rv224; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R21 * rv225 = r_PARSE_TYPE_SPEC();
return rv225; }
}
l_N_219 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R21 * rv226 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_219));
return rv226; }
}
{ R21 * rv227 = l_N_219;
return rv227; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPR_TO_TS(R21 * p_E) { 
R21 * l_N_228; memset(&l_N_228, 0, sizeof l_N_228);
if ((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R21 * rv229 = p_E;
return rv229; }
}
l_N_228 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_228))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R21 * rv230 = l_N_228;
return rv230; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_228))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_228))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R21 * rv231 = l_N_228;
return rv231; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
rt_raise(RT_X_INIT);
}
static R21 * r_TYPE_SPEC_TAIL(R21 * p_N) { 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
((*(R21 *)rt_nil_check(p_N))).f_B = r_PARSE_RANGE();
}
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(p_N))).f_C = r_PARSE_REP();
}
{ R21 * rv232 = p_N;
return rv232; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_SPEC(void) { 
R21 * l_N_233; memset(&l_N_233, 0, sizeof l_N_233);
R21 * l_HEAD_234; memset(&l_HEAD_234, 0, sizeof l_HEAD_234);
l_HEAD_234 = NULL;
R21 * l_TAIL_235; memset(&l_TAIL_235, 0, sizeof l_TAIL_235);
l_TAIL_235 = NULL;
rt_int l_LINE_236; memset(&l_LINE_236, 0, sizeof l_LINE_236);
l_LINE_236 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_233 = r_NEW_NODE(g_TS_ARRAY, l_LINE_236);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R21 * l_R_238; memset(&l_R_238, 0, sizeof l_R_238);
l_R_238 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_R_238))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_238))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_238, &l_HEAD_234, &l_TAIL_235);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end237;
} L_end237: ;
r_EXPECT(rt_str("]", 1));
((*(R21 *)rt_nil_check(l_N_233))).f_A = l_HEAD_234;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_233))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R21 *)rt_nil_check(l_N_233))).f_C = r_PARSE_TYPE_SPEC();
{ R21 * rv239 = l_N_233;
return rv239; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_233 = r_NEW_NODE(g_TS_RECORD, l_LINE_236);
((*(R21 *)rt_nil_check(l_N_233))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_233))).f_D = r_PARSE_REP();
}
{ R21 * rv240 = l_N_233;
return rv240; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R21 * rv241 = r_PARSE_TYPE_ARG();
return rv241; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_233 = r_NEW_NODE(g_TS_ENUM, l_LINE_236);
((*(R21 *)rt_nil_check(l_N_233))).f_A = r_PARSE_LITERALS();
{ R21 * rv242 = r_TYPE_SPEC_TAIL(l_N_233);
return rv242; }
}
l_N_233 = r_NEW_NODE(g_TS_NAME, l_LINE_236);
S_R10(&((*(R21 *)rt_nil_check(l_N_233))).f_NAME, r_IDENT(), 0);
if ((r_TEQS(((*(R21 *)rt_nil_check(l_N_233))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_233))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_233))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R21 *)rt_nil_check(l_N_233))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_N_233))).f_KIND = g_TS_ENUM;
((*(R21 *)rt_nil_check(l_N_233))).f_A = r_PARSE_LITERALS();
{ R21 * rv243 = r_TYPE_SPEC_TAIL(l_N_233);
return rv243; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_233))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_234, &l_TAIL_235);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_234, &l_TAIL_235);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end244;
} L_end244: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_233))).f_A = l_HEAD_234;
}
{ R21 * rv245 = r_TYPE_SPEC_TAIL(l_N_233);
return rv245; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LITERALS(void) { 
R21 * l_HEAD_246; memset(&l_HEAD_246, 0, sizeof l_HEAD_246);
l_HEAD_246 = NULL;
R21 * l_TAIL_247; memset(&l_TAIL_247, 0, sizeof l_TAIL_247);
l_TAIL_247 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_L_249; memset(&l_L_249, 0, sizeof l_L_249);
l_L_249 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R10(&((*(R21 *)rt_nil_check(l_L_249))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_249, &l_HEAD_246, &l_TAIL_247);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end248;
} L_end248: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv250 = l_HEAD_246;
return rv250; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FIELDS(void) { 
R21 * l_HEAD_251; memset(&l_HEAD_251, 0, sizeof l_HEAD_251);
l_HEAD_251 = NULL;
R21 * l_TAIL_252; memset(&l_TAIL_252, 0, sizeof l_TAIL_252);
l_TAIL_252 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R21 * l_F_254; memset(&l_F_254, 0, sizeof l_F_254);
l_F_254 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R21 *)rt_nil_check(l_F_254))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_F_254))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_254, &l_HEAD_251, &l_TAIL_252);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R21 * l_V_255; memset(&l_V_255, 0, sizeof l_V_255);
l_V_255 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R21 * l_VH_256; memset(&l_VH_256, 0, sizeof l_VH_256);
l_VH_256 = NULL;
R21 * l_VT_257; memset(&l_VT_257, 0, sizeof l_VT_257);
l_VT_257 = NULL;
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_V_255))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end258;
{
{
R21 * l_S_259; memset(&l_S_259, 0, sizeof l_S_259);
l_S_259 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R21 * l_LH_260; memset(&l_LH_260, 0, sizeof l_LH_260);
l_LH_260 = NULL;
R21 * l_LT_261; memset(&l_LT_261, 0, sizeof l_LT_261);
l_LT_261 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_260, &l_LT_261);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end262;
} L_end262: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_259))).f_A = l_LH_260;
((*(R21 *)rt_nil_check(l_S_259))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_259, &l_VH_256, &l_VT_257);
}
}
} L_end258: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_V_255))).f_A = l_VH_256;
r_ADD_LIST(l_V_255, &l_HEAD_251, &l_TAIL_252);
}
}
else
{
goto L_end253;
}
}
} L_end253: ;
{ R21 * rv263 = l_HEAD_251;
return rv263; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RANGE(void) { 
R21 * l_R_264; memset(&l_R_264, 0, sizeof l_R_264);
l_R_264 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_264))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R21 *)rt_nil_check(l_R_264))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_264))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R21 *)rt_nil_check(l_R_264))).f_IV = rt_add(((*(R21 *)rt_nil_check(l_R_264))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R21 * rv265 = l_R_264;
return rv265; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { 
rt_int l_DEPTH_266; memset(&l_DEPTH_266, 0, sizeof l_DEPTH_266);
l_DEPTH_266 = ((rt_int)0LL);
rt_int l_K_267; memset(&l_K_267, 0, sizeof l_K_267);
l_K_267 = ((rt_int)0LL);
for (;;) {
{
{
R9 l_T_269; memset(&l_T_269, 0, sizeof l_T_269);
S_R9(&l_T_269, r_AHEAD(l_K_267), 0);
if (((l_T_269).f_KIND == g_K_EOF))
{
{ rt_int rv270 = 0;
return rv270; }
}
if (((l_T_269).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_269).f_TX, rt_str("(", 1)) || r_TEQS((l_T_269).f_TX, rt_str("[", 1))))
{
l_DEPTH_266 = rt_add(l_DEPTH_266, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_269).f_TX, rt_str(")", 1)) || r_TEQS((l_T_269).f_TX, rt_str("]", 1))))
{
l_DEPTH_266 = rt_sub(l_DEPTH_266, ((rt_int)1LL));
if ((l_DEPTH_266 == ((rt_int)0LL)))
{
{ rt_int rv271 = 0;
return rv271; }
}
}
else if (((l_DEPTH_266 == ((rt_int)1LL)) && ((r_TEQS((l_T_269).f_TX, rt_str(":", 1)) || r_TEQS((l_T_269).f_TX, rt_str(",", 1))))))
{
{ rt_int rv272 = r_TEQS((l_T_269).f_TX, rt_str(":", 1));
return rv272; }
}
}
}
l_K_267 = rt_add(l_K_267, ((rt_int)1LL));
}
} L_end268: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PARAMS(void) { 
R21 * l_HEAD_273; memset(&l_HEAD_273, 0, sizeof l_HEAD_273);
l_HEAD_273 = NULL;
R21 * l_TAIL_274; memset(&l_TAIL_274, 0, sizeof l_TAIL_274);
l_TAIL_274 = NULL;
rt_int l_MODE_275; memset(&l_MODE_275, 0, sizeof l_MODE_275);
l_MODE_275 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end276;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_275 = rt_add(l_MODE_275, ((rt_int)1LL));
}
else
{
{
R21 * l_NAMES_277; memset(&l_NAMES_277, 0, sizeof l_NAMES_277);
l_NAMES_277 = r_IDENT_LIST();
R21 * l_TS_278; memset(&l_TS_278, 0, sizeof l_TS_278);
l_TS_278 = NULL;
R21 * l_P_279; memset(&l_P_279, 0, sizeof l_P_279);
l_P_279 = l_NAMES_277;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_278 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_278 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_279 == NULL)) goto L_end280;
{
{
R21 * l_PN_281; memset(&l_PN_281, 0, sizeof l_PN_281);
l_PN_281 = r_NEW_NODE(g_N_PARAM, ((*(R21 *)rt_nil_check(l_P_279))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_PN_281))).f_NAME, ((*(R21 *)rt_nil_check(l_P_279))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_PN_281))).f_IV = l_MODE_275;
((*(R21 *)rt_nil_check(l_PN_281))).f_B = l_TS_278;
r_ADD_LIST(l_PN_281, &l_HEAD_273, &l_TAIL_274);
}
l_P_279 = ((*(R21 *)rt_nil_check(l_P_279))).f_NEXT;
}
} L_end280: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
} L_end276: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv282 = l_HEAD_273;
return rv282; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC) { 
R21 * l_R_283; memset(&l_R_283, 0, sizeof l_R_283);
l_R_283 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R21 * l_HEAD_284; memset(&l_HEAD_284, 0, sizeof l_HEAD_284);
l_HEAD_284 = NULL;
R21 * l_TAIL_285; memset(&l_TAIL_285, 0, sizeof l_TAIL_285);
l_TAIL_285 = NULL;
rt_int l_MODE_286; memset(&l_MODE_286, 0, sizeof l_MODE_286);
l_MODE_286 = g_M_IN;
if (p_FUNC)
{
((*(R21 *)rt_nil_check(l_R_283))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end287;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_286 = rt_add(l_MODE_286, ((rt_int)1LL));
}
else
{
{
R21 * l_P_288; memset(&l_P_288, 0, sizeof l_P_288);
l_P_288 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_P_288))).f_IV = l_MODE_286;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R21 *)rt_nil_check(l_P_288))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_288, &l_HEAD_284, &l_TAIL_285);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
} L_end287: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_283))).f_A = l_HEAD_284;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R21 *)rt_nil_check(l_R_283))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_283))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_283))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_R_283))).f_D = r_PAREN_IDENTS();
}
{ R21 * rv289 = l_R_283;
return rv289; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE_SPEC(void) { 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R21 * rv290 = r_PARSE_TEMPLATE(1);
return rv290; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R21 * rv291 = r_PARSE_TEMPLATE(0);
return rv291; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_WHERE(void) { 
R21 * l_HEAD_292; memset(&l_HEAD_292, 0, sizeof l_HEAD_292);
l_HEAD_292 = NULL;
R21 * l_TAIL_293; memset(&l_TAIL_293, 0, sizeof l_TAIL_293);
l_TAIL_293 = NULL;
for (;;) {
{
{
R21 * l_N_295; memset(&l_N_295, 0, sizeof l_N_295);
l_N_295 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R21 * l_TH_296; memset(&l_TH_296, 0, sizeof l_TH_296);
l_TH_296 = NULL;
R21 * l_TT_297; memset(&l_TT_297, 0, sizeof l_TT_297);
l_TT_297 = NULL;
S_R10(&((*(R21 *)rt_nil_check(l_N_295))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_T_299; memset(&l_T_299, 0, sizeof l_T_299);
l_T_299 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_T_299))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_T_299))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_299, &l_TH_296, &l_TT_297);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end298;
} L_end298: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_295))).f_A = l_TH_296;
r_ADD_LIST(l_N_295, &l_HEAD_292, &l_TAIL_293);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end294;
} L_end294: ;
{ R21 * rv300 = l_HEAD_292;
return rv300; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE(void) { 
R21 * l_R_301; memset(&l_R_301, 0, sizeof l_R_301);
l_R_301 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R21 * l_H_302; memset(&l_H_302, 0, sizeof l_H_302);
l_H_302 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R21 *)rt_nil_check(l_R_301))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
((*(R21 *)rt_nil_check(l_R_301))).f_FL = rt_add(((*(R21 *)rt_nil_check(l_R_301))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R21 *)rt_nil_check(l_R_301))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R10(&((*(R21 *)rt_nil_check(l_R_301))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_301))).f_A = r_PARSE_PARAMS();
}
if ((((*(R21 *)rt_nil_check(l_R_301))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_301))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_301))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_302))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_R_301))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R21 *)rt_nil_check(l_H_302))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end303;
}
}
} L_end303: ;
((*(R21 *)rt_nil_check(l_R_301))).f_D = l_H_302;
r_EXPECT(rt_str(";", 1));
if ((((*(R21 *)rt_nil_check(l_R_301))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_SKIP_PARENS();
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end304;
{
r_SKIP();
}
} L_end304: ;
}
else
{
((*(R21 *)rt_nil_check(l_R_301))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R21 *)rt_nil_check(l_R_301))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R21 *)rt_nil_check(l_R_301))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R21 *)rt_nil_check(l_R_301))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv305 = l_R_301;
return rv305; }
rt_raise(RT_X_INIT);
}
static R21 * r_BIN_NODE(R10 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B) { 
R21 * l_N_306; memset(&l_N_306, 0, sizeof l_N_306);
l_N_306 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_306))).f_NAME, p_OP, 0);
((*(R21 *)rt_nil_check(l_N_306))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_306))).f_B = p_B;
{ R21 * rv307 = l_N_306;
return rv307; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_EXPR(void) { 
R21 * l_E_308; memset(&l_E_308, 0, sizeof l_E_308);
l_E_308 = r_PARSE_SIMPLE();
if ((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))))
{
{
R21 * l_Q_309; memset(&l_Q_309, 0, sizeof l_Q_309);
l_Q_309 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_Q_309))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_Q_309))).f_A = l_E_308;
l_E_308 = l_Q_309;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R21 * l_Q_310; memset(&l_Q_310, 0, sizeof l_Q_310);
l_Q_310 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R21 *)rt_nil_check(l_E_308))).f_KIND == g_N_QUAL))
{
l_Q_310 = l_E_308;
}
else
{
((*(R21 *)rt_nil_check(l_Q_310))).f_A = l_E_308;
}
((*(R21 *)rt_nil_check(l_Q_310))).f_B = r_PARSE_SIMPLE();
l_E_308 = l_Q_310;
}
}
{ R21 * rv311 = l_E_308;
return rv311; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SIMPLE(void) { 
R21 * l_LEFT_312; memset(&l_LEFT_312, 0, sizeof l_LEFT_312);
l_LEFT_312 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end313;
{
{
R9 l_T_314; memset(&l_T_314, 0, sizeof l_T_314);
S_R9(&l_T_314, r_CUR(), 0);
r_SKIP();
l_LEFT_312 = r_BIN_NODE((l_T_314).f_TX, (l_T_314).f_LINE, l_LEFT_312, r_PARSE_CONJ());
}
}
} L_end313: ;
{ R21 * rv315 = l_LEFT_312;
return rv315; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { 
R21 * l_LEFT_316; memset(&l_LEFT_316, 0, sizeof l_LEFT_316);
l_LEFT_316 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end317;
{
{
R9 l_T_318; memset(&l_T_318, 0, sizeof l_T_318);
S_R9(&l_T_318, r_CUR(), 0);
r_SKIP();
l_LEFT_316 = r_BIN_NODE((l_T_318).f_TX, (l_T_318).f_LINE, l_LEFT_316, r_PARSE_RELATION());
}
}
} L_end317: ;
{ R21 * rv319 = l_LEFT_316;
return rv319; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { 
R21 * l_LEFT_320; memset(&l_LEFT_320, 0, sizeof l_LEFT_320);
l_LEFT_320 = r_PARSE_SUM();
for (;;) {
{
{
R9 l_T_322; memset(&l_T_322, 0, sizeof l_T_322);
S_R9(&l_T_322, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_320 = r_BIN_NODE((l_T_322).f_TX, (l_T_322).f_LINE, l_LEFT_320, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_323; memset(&l_N_323, 0, sizeof l_N_323);
l_N_323 = r_NEW_NODE(g_N_IN, (l_T_322).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_323))).f_A = l_LEFT_320;
((*(R21 *)rt_nil_check(l_N_323))).f_B = r_PARSE_RANGE();
l_LEFT_320 = l_N_323;
}
}
else
{
{ R21 * rv324 = l_LEFT_320;
return rv324; }
}
}
}
} L_end321: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { 
rt_int l_SAVED_325; memset(&l_SAVED_325, 0, sizeof l_SAVED_325);
l_SAVED_325 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_326; memset(&l_LINE_326, 0, sizeof l_LINE_326);
l_LINE_326 = r_LINE_NOW();
R21 * l_N_327; memset(&l_N_327, 0, sizeof l_N_327);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv328 = NULL;
return rv328; }
}
{
R9 l_OP_329; memset(&l_OP_329, 0, sizeof l_OP_329);
S_R9(&l_OP_329, r_AHEAD(((rt_int)1LL)), 0);
R10 l_T_330; memset(&l_T_330, 0, sizeof l_T_330);
S_R10(&l_T_330, (l_OP_329).f_TX, 0);
rt_int l_FOUND_331; memset(&l_FOUND_331, 0, sizeof l_FOUND_331);
l_FOUND_331 = 0;
if (((!((l_OP_329).f_KIND == g_K_SYM)) && (!((l_OP_329).f_KIND == g_K_RES))))
{
{ R21 * rv332 = NULL;
return rv332; }
}
{ rt_int it334_lo = ((rt_int)0LL), it334_hi = rt_sub((rt_int)(p_OPS).len, (l_T_330).f_LEN);
for (rt_int it334 = it334_lo; it334 <= it334_hi; it334++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it334, rt_sub(rt_add(it334, (l_T_330).f_LEN), ((rt_int)1LL))), r_STR(l_T_330, (l_T_330).f_LEN)))
{
if (((((it334 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it334, ((rt_int)1LL)), rt_sub(it334, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it334, (l_T_330).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it334, (l_T_330).f_LEN), rt_add(it334, (l_T_330).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_331 = 1;
}
}
}
} } L_end333: ;
if ((!l_FOUND_331))
{
{ R21 * rv335 = NULL;
return rv335; }
}
r_SKIP();
r_SKIP();
l_N_327 = r_BIN_NODE(l_T_330, l_LINE_326, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_327))).f_FL = ((rt_int)2LL);
{ R21 * rv336 = l_N_327;
return rv336; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_327))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_327))).f_FL = ((rt_int)1LL);
{ R21 * rv337 = l_N_327;
return rv337; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_325;
{ R21 * rv338 = NULL;
return rv338; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { 
R21 * l_LEFT_339; memset(&l_LEFT_339, 0, sizeof l_LEFT_339);
l_LEFT_339 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R9 l_T_341; memset(&l_T_341, 0, sizeof l_T_341);
S_R9(&l_T_341, r_CUR(), 0);
r_SKIP();
l_LEFT_339 = r_BIN_NODE((l_T_341).f_TX, (l_T_341).f_LINE, l_LEFT_339, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_342; memset(&l_N_342, 0, sizeof l_N_342);
l_N_342 = r_TRY_SCALED(l_LEFT_339, rt_str("+ -", 3));
if ((l_N_342 == NULL))
{
{ R21 * rv343 = l_LEFT_339;
return rv343; }
}
((*(R21 *)rt_nil_check(l_N_342))).f_B = r_PARSE_TERM();
l_LEFT_339 = l_N_342;
}
}
}
} L_end340: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { 
R21 * l_LEFT_344; memset(&l_LEFT_344, 0, sizeof l_LEFT_344);
l_LEFT_344 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R9 l_T_346; memset(&l_T_346, 0, sizeof l_T_346);
S_R9(&l_T_346, r_CUR(), 0);
r_SKIP();
l_LEFT_344 = r_BIN_NODE((l_T_346).f_TX, (l_T_346).f_LINE, l_LEFT_344, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_347; memset(&l_N_347, 0, sizeof l_N_347);
l_N_347 = r_TRY_SCALED(l_LEFT_344, rt_str("* / // MOD", 10));
if ((l_N_347 == NULL))
{
{ R21 * rv348 = l_LEFT_344;
return rv348; }
}
((*(R21 *)rt_nil_check(l_N_347))).f_B = r_PARSE_FACTOR();
l_LEFT_344 = l_N_347;
}
}
}
} L_end345: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { 
R21 * l_LEFT_349; memset(&l_LEFT_349, 0, sizeof l_LEFT_349);
l_LEFT_349 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R9 l_T_351; memset(&l_T_351, 0, sizeof l_T_351);
S_R9(&l_T_351, r_CUR(), 0);
r_SKIP();
l_LEFT_349 = r_BIN_NODE((l_T_351).f_TX, (l_T_351).f_LINE, l_LEFT_349, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_352; memset(&l_N_352, 0, sizeof l_N_352);
l_N_352 = r_TRY_SCALED(l_LEFT_349, rt_str("**", 2));
if ((l_N_352 == NULL))
{
{ R21 * rv353 = l_LEFT_349;
return rv353; }
}
((*(R21 *)rt_nil_check(l_N_352))).f_B = r_PARSE_SECONDARY();
l_LEFT_349 = l_N_352;
}
}
}
} L_end350: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { 
R9 l_T_354; memset(&l_T_354, 0, sizeof l_T_354);
S_R9(&l_T_354, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_355; memset(&l_N_355, 0, sizeof l_N_355);
l_N_355 = r_NEW_NODE(g_N_UNOP, (l_T_354).f_LINE);
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_355))).f_NAME, (l_T_354).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_355))).f_A = r_PARSE_POSTFIX();
{ R21 * rv356 = l_N_355;
return rv356; }
}
}
{ R21 * rv357 = r_PARSE_POSTFIX();
return rv357; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { 
R21 * l_HEAD_358; memset(&l_HEAD_358, 0, sizeof l_HEAD_358);
l_HEAD_358 = NULL;
R21 * l_TAIL_359; memset(&l_TAIL_359, 0, sizeof l_TAIL_359);
l_TAIL_359 = NULL;
rt_int l_GROUP_360; memset(&l_GROUP_360, 0, sizeof l_GROUP_360);
l_GROUP_360 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end361;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_360) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_358;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_358;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_360 = rt_add(l_GROUP_360, ((rt_int)1LL));
l_HEAD_358 = NULL;
l_TAIL_359 = NULL;
}
else
{
if ((l_GROUP_360 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_358, &l_TAIL_359);
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_358, &l_TAIL_359);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
} L_end361: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_360) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_358;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_358;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_358;
}
break;
}
{ R21 * rv362 = p_N;
return rv362; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { 
R21 * l_E_363; memset(&l_E_363, 0, sizeof l_E_363);
l_E_363 = r_PARSE_ATOM();
R21 * l_N_364; memset(&l_N_364, 0, sizeof l_N_364);
for (;;) {
{
{
rt_int l_LINE_366; memset(&l_LINE_366, 0, sizeof l_LINE_366);
l_LINE_366 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_363))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_363))).f_KIND = g_N_APPLY;
l_E_363 = r_PARSE_ARGS(l_E_363);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_364 = r_NEW_NODE(g_N_INDEX, l_LINE_366);
l_N_364 = r_PARSE_ARGS(l_N_364);
((*(R21 *)rt_nil_check(l_N_364))).f_B = ((*(R21 *)rt_nil_check(l_N_364))).f_A;
((*(R21 *)rt_nil_check(l_N_364))).f_A = l_E_363;
l_E_363 = l_N_364;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_364 = r_NEW_NODE(g_N_FIELD, l_LINE_366);
((*(R21 *)rt_nil_check(l_N_364))).f_A = l_E_363;
S_R10(&((*(R21 *)rt_nil_check(l_N_364))).f_NAME, r_IDENT(), 0);
l_E_363 = l_N_364;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_364 = r_NEW_NODE(g_N_DEREF, l_LINE_366);
((*(R21 *)rt_nil_check(l_N_364))).f_A = l_E_363;
l_E_363 = l_N_364;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_364 = r_NEW_NODE(g_N_SUBSTR, l_LINE_366);
((*(R21 *)rt_nil_check(l_N_364))).f_A = l_E_363;
((*(R21 *)rt_nil_check(l_N_364))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_364))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_363 = l_N_364;
}
else
{
{ R21 * rv367 = l_E_363;
return rv367; }
}
}
}
} L_end365: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { 
rt_int l_AT_368; memset(&l_AT_368, 0, sizeof l_AT_368);
l_AT_368 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_369; memset(&l_N_369, 0, sizeof l_N_369);
l_N_369 = r_NEW_NODE(g_N_BITS, p_LINE);
R10 l_R_370; memset(&l_R_370, 0, sizeof l_R_370);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end371;
{
{
R10 l_T_372; memset(&l_T_372, 0, sizeof l_T_372);
S_R10(&l_T_372, (r_CUR()).f_TX, 0);
rstr l_S_373; memset(&l_S_373, 0, sizeof l_S_373);
l_S_373 = rt_str_new((l_T_372).f_LEN);
rt_b_assign(&l_S_373, r_STR(l_T_372, (l_T_372).f_LEN));
{ rt_int it375_lo = ((rt_int)0LL), it375_hi = rt_sub((l_T_372).f_LEN, ((rt_int)1LL));
for (rt_int it375 = it375_lo; it375 <= it375_hi; it375++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_373, it375, it375), rt_str(" ", 1))))
{
{
rt_int l_C_376; memset(&l_C_376, 0, sizeof l_C_376);
l_C_376 = r_CODE_OF(rt_b_slice(l_S_373, it375, it375));
rt_int l_V_377; memset(&l_V_377, 0, sizeof l_V_377);
l_V_377 = rt_sub(l_C_376, ((rt_int)48LL));
rt_int l_P_378; memset(&l_P_378, 0, sizeof l_P_378);
l_P_378 = ((rt_int)1LL);
if ((l_C_376 >= ((rt_int)65LL)))
{
l_V_377 = rt_sub(l_C_376, ((rt_int)55LL));
}
{ rt_int it380_lo = ((rt_int)1LL), it380_hi = p_BITS_PER;
for (rt_int it380 = it380_lo; it380 <= it380_hi; it380++) {
{
l_P_378 = rt_mul(l_P_378, ((rt_int)2LL));
}
} } L_end379: ;
if (((l_V_377 < ((rt_int)0LL)) || (l_V_377 >= l_P_378)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it382_lo = ((rt_int)1LL), it382_hi = p_BITS_PER;
for (rt_int it382 = it382_lo; it382 <= it382_hi; it382++) {
{
l_P_378 = rt_quot(l_P_378, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_377, l_P_378)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R10(&l_R_370, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R10(&l_R_370, r_MK(rt_str("0", 1)), 0);
}
}
} } L_end381: ;
}
}
}
} } L_end374: ;
}
r_SKIP();
}
} L_end371: ;
S_R10(&((*(R21 *)rt_nil_check(l_N_369))).f_NAME, ({ R10 rc383; memset(&rc383, 0, sizeof rc383);  rc383.f_AT = l_AT_368; rc383.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_368); rc383.f_H = rt_neg(((rt_int)1LL)); rc383; }), 0);
{ R21 * rv384 = l_N_369;
return rv384; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { 
R9 l_T_385; memset(&l_T_385, 0, sizeof l_T_385);
S_R9(&l_T_385, r_CUR(), 0);
R21 * l_N_386; memset(&l_N_386, 0, sizeof l_N_386);
if (((l_T_385).f_KIND == g_K_NUM))
{
l_N_386 = r_NEW_NODE(g_N_INT, (l_T_385).f_LINE);
((*(R21 *)rt_nil_check(l_N_386))).f_IV = (l_T_385).f_IV;
S_R10(&((*(R21 *)rt_nil_check(l_N_386))).f_NAME, (l_T_385).f_TX, 0);
r_SKIP();
{ R21 * rv387 = l_N_386;
return rv387; }
}
if ((((l_T_385).f_KIND == g_K_REAL) || ((l_T_385).f_KIND == g_K_FIX)))
{
l_N_386 = r_NEW_NODE(g_N_REAL, (l_T_385).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_386))).f_NAME, (l_T_385).f_TX, 0);
if (((l_T_385).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_386))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_386))).f_IV = (l_T_385).f_IV;
}
r_SKIP();
{ R21 * rv388 = l_N_386;
return rv388; }
}
if (((l_T_385).f_KIND == g_K_GEN))
{
{ R21 * rv389 = r_PARSE_TYPE_ARG();
return rv389; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_385, rt_str("BIN", 3)))
{
{ R21 * rv390 = r_PARSE_BITS(((rt_int)1LL), (l_T_385).f_LINE);
return rv390; }
}
else if (r_TOK_IS(l_T_385, rt_str("OCT", 3)))
{
{ R21 * rv391 = r_PARSE_BITS(((rt_int)3LL), (l_T_385).f_LINE);
return rv391; }
}
{ R21 * rv392 = r_PARSE_BITS(((rt_int)4LL), (l_T_385).f_LINE);
return rv392; }
}
if ((((l_T_385).f_KIND == g_K_STR) || ((l_T_385).f_KIND == g_K_ENUM)))
{
{ R21 * rv393 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv393; }
}
if ((((l_T_385).f_KIND == g_K_ID) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR)))
{
r_SKIP();
{ R21 * rv394 = r_PARSE_CHARSTRING((l_T_385).f_TX);
return rv394; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_386 = r_NEW_NODE(g_N_BOOL, (l_T_385).f_LINE);
((*(R21 *)rt_nil_check(l_N_386))).f_IV = ((rt_int)1LL);
{ R21 * rv395 = l_N_386;
return rv395; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv396 = r_NEW_NODE(g_N_BOOL, (l_T_385).f_LINE);
return rv396; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv397 = r_NEW_NODE(g_N_NIL, (l_T_385).f_LINE);
return rv397; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv398 = r_NEW_NODE(g_N_ANY, (l_T_385).f_LINE);
return rv398; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_399; memset(&l_TS_399, 0, sizeof l_TS_399);
l_TS_399 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_386 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_386))).f_B = l_TS_399;
{ R21 * rv400 = l_N_386;
return rv400; }
}
l_N_386 = r_NEW_NODE(g_N_TYPESPEC, (l_T_385).f_LINE);
((*(R21 *)rt_nil_check(l_N_386))).f_A = l_TS_399;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_386))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv401 = l_N_386;
return rv401; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_402; memset(&l_HEAD_402, 0, sizeof l_HEAD_402);
l_HEAD_402 = NULL;
R21 * l_TAIL_403; memset(&l_TAIL_403, 0, sizeof l_TAIL_403);
l_TAIL_403 = NULL;
r_SKIP();
for (;;) {
{
l_N_386 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_386))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_386))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_386, &l_HEAD_402, &l_TAIL_403);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end404;
} L_end404: ;
r_EXPECT(rt_str(")", 1));
l_N_386 = r_NEW_NODE(g_N_RECCONS, (l_T_385).f_LINE);
((*(R21 *)rt_nil_check(l_N_386))).f_A = l_HEAD_402;
{ R21 * rv405 = l_N_386;
return rv405; }
}
}
r_SKIP();
{
R21 * l_E_406; memset(&l_E_406, 0, sizeof l_E_406);
l_E_406 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_407; memset(&l_HEAD_407, 0, sizeof l_HEAD_407);
l_HEAD_407 = NULL;
R21 * l_TAIL_408; memset(&l_TAIL_408, 0, sizeof l_TAIL_408);
l_TAIL_408 = NULL;
r_ADD_LIST(l_E_406, &l_HEAD_407, &l_TAIL_408);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end409;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_407, &l_TAIL_408);
}
} L_end409: ;
r_EXPECT(rt_str(")", 1));
l_N_386 = r_NEW_NODE(g_N_ARRCONS, (l_T_385).f_LINE);
((*(R21 *)rt_nil_check(l_N_386))).f_A = l_HEAD_407;
{ R21 * rv410 = l_N_386;
return rv410; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_386 = r_NEW_NODE(g_N_PAREN, (l_T_385).f_LINE);
((*(R21 *)rt_nil_check(l_N_386))).f_A = l_E_406;
{ R21 * rv411 = l_N_386;
return rv411; }
}
}
if (((l_T_385).f_KIND == g_K_ID))
{
l_N_386 = r_NEW_NODE(g_N_NAME, (l_T_385).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_386))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((r_TEQS(((*(R21 *)rt_nil_check(l_N_386))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_386))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_386))).f_NAME, rt_str("SEMAPHORE$NEW", 13))))
{
((*(R21 *)rt_nil_check(l_N_386))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_386))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv412 = l_N_386;
return rv412; }
}
r_FAILT((l_T_385).f_LINE, rt_str("an expression expected, not ", 28), (l_T_385).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET) { 
rt_int l_LINE_413; memset(&l_LINE_413, 0, sizeof l_LINE_413);
l_LINE_413 = r_LINE_NOW();
R21 * l_HEAD_414; memset(&l_HEAD_414, 0, sizeof l_HEAD_414);
l_HEAD_414 = NULL;
R21 * l_TAIL_415; memset(&l_TAIL_415, 0, sizeof l_TAIL_415);
l_TAIL_415 = NULL;
rt_int l_STRINGS_416; memset(&l_STRINGS_416, 0, sizeof l_STRINGS_416);
l_STRINGS_416 = ((rt_int)0LL);
R21 * l_N_417; memset(&l_N_417, 0, sizeof l_N_417);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end418;
{
l_N_417 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_417))).f_IV = (r_CUR()).f_KIND;
S_R10(&((*(R21 *)rt_nil_check(l_N_417))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_417))).f_IV == g_K_STR))
{
l_STRINGS_416 = rt_add(l_STRINGS_416, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_417, &l_HEAD_414, &l_TAIL_415);
}
} L_end418: ;
if (((l_STRINGS_416 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))))
{
if ((!(((*(R21 *)rt_nil_check(l_HEAD_414))).f_NEXT == NULL)))
{
r_FAIL(l_LINE_413, rt_str("two enumerated literals in a row", 32));
}
((*(R21 *)rt_nil_check(l_HEAD_414))).f_KIND = g_N_ENUMLIT;
{ R21 * rv419 = l_HEAD_414;
return rv419; }
}
l_N_417 = r_NEW_NODE(g_N_STR, l_LINE_413);
((*(R21 *)rt_nil_check(l_N_417))).f_A = l_HEAD_414;
S_R10(&((*(R21 *)rt_nil_check(l_N_417))).f_NAME, p_CHARSET, 0);
{ R21 * rv420 = l_N_417;
return rv420; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { 
{ rt_int rv421 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv421; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { 
R21 * l_HEAD_422; memset(&l_HEAD_422, 0, sizeof l_HEAD_422);
l_HEAD_422 = NULL;
R21 * l_TAIL_423; memset(&l_TAIL_423, 0, sizeof l_TAIL_423);
l_TAIL_423 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end424;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_422, &l_TAIL_423);
}
} L_end424: ;
{ R21 * rv425 = l_HEAD_422;
return rv425; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { 
R21 * l_HEAD_426; memset(&l_HEAD_426, 0, sizeof l_HEAD_426);
l_HEAD_426 = NULL;
R21 * l_TAIL_427; memset(&l_TAIL_427, 0, sizeof l_TAIL_427);
l_TAIL_427 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end428;
{
{
R21 * l_H_429; memset(&l_H_429, 0, sizeof l_H_429);
l_H_429 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_429))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_429))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_429, &l_HEAD_426, &l_TAIL_427);
}
}
} L_end428: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv430 = l_HEAD_426;
return rv430; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { 
R21 * l_S_431; memset(&l_S_431, 0, sizeof l_S_431);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_431 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_S_431))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_431))).f_A = r_PARSE_STATEMENT();
{ R21 * rv432 = l_S_431;
return rv432; }
}
l_S_431 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_433; memset(&l_X_433, 0, sizeof l_X_433);
l_X_433 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_433))).f_A = l_S_431;
((*(R21 *)rt_nil_check(l_X_433))).f_B = r_PARSE_HANDLERS();
{ R21 * rv434 = l_X_433;
return rv434; }
}
}
{ R21 * rv435 = l_S_431;
return rv435; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_END(rstr p_WORD) { 
r_EXPECT(rt_str("END", 3));
r_EXPECT(p_WORD);
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
}
static R21 * r_PARSE_UNLABELED(void) { 
rt_int l_LINE_436; memset(&l_LINE_436, 0, sizeof l_LINE_436);
l_LINE_436 = r_LINE_NOW();
R21 * l_S_437; memset(&l_S_437, 0, sizeof l_S_437);
R21 * l_T_438; memset(&l_T_438, 0, sizeof l_T_438);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv439 = r_NEW_NODE(g_N_NULL, l_LINE_436);
return rv439; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv440 = r_PARSE_IF();
return rv440; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv441 = r_PARSE_CASE();
return rv441; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv442 = r_PARSE_LOOP();
return rv442; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv443 = r_PARSE_PAR();
return rv443; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_437 = r_NEW_NODE(g_N_BLOCK, l_LINE_436);
((*(R21 *)rt_nil_check(l_S_437))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv444 = l_S_437;
return rv444; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_437 = r_NEW_NODE(g_N_WITH, l_LINE_436);
S_R10(&((*(R21 *)rt_nil_check(l_S_437))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_437))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_437))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_437))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_437))).f_B = r_PARSE_UNLABELED();
{ R21 * rv445 = l_S_437;
return rv445; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv446 = r_NEW_NODE(g_N_EXIT, l_LINE_436);
return rv446; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_437 = r_NEW_NODE(g_N_GOTO, l_LINE_436);
S_R10(&((*(R21 *)rt_nil_check(l_S_437))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv447 = l_S_437;
return rv447; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_437 = r_NEW_NODE(g_N_RETURN, l_LINE_436);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_437))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv448 = l_S_437;
return rv448; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_437 = r_NEW_NODE(g_N_SIGNAL, l_LINE_436);
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_437))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv449 = l_S_437;
return rv449; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_437 = r_NEW_NODE(g_N_ASSERT, l_LINE_436);
((*(R21 *)rt_nil_check(l_S_437))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv450 = l_S_437;
return rv450; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_437 = r_NEW_NODE(g_N_TERMINATE, l_LINE_436);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_437))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv451 = l_S_437;
return rv451; }
}
l_T_438 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_436, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_437 = r_NEW_NODE(g_N_ASSIGN, l_LINE_436);
((*(R21 *)rt_nil_check(l_S_437))).f_A = l_T_438;
((*(R21 *)rt_nil_check(l_S_437))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv452 = l_S_437;
return rv452; }
}
r_EXPECT(rt_str(";", 1));
if (((((*(R21 *)rt_nil_check(l_T_438))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_438))).f_KIND == g_N_APPLY)))
{
((*(R21 *)rt_nil_check(l_T_438))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_436, rt_str("a statement expected", 20));
}
{ R21 * rv453 = l_T_438;
return rv453; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { 
R21 * l_S_454; memset(&l_S_454, 0, sizeof l_S_454);
l_S_454 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_455; memset(&l_HEAD_455, 0, sizeof l_HEAD_455);
l_HEAD_455 = NULL;
R21 * l_TAIL_456; memset(&l_TAIL_456, 0, sizeof l_TAIL_456);
l_TAIL_456 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_458; memset(&l_ARM_458, 0, sizeof l_ARM_458);
l_ARM_458 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_458))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_458))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_458, &l_HEAD_455, &l_TAIL_456);
}
}
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end457;
} L_end457: ;
((*(R21 *)rt_nil_check(l_S_454))).f_A = l_HEAD_455;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_454))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv459 = l_S_454;
return rv459; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv460 = r_PARSE_RANGE();
return rv460; }
}
{ R21 * rv461 = r_PARSE_EXPR();
return rv461; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { 
R21 * l_S_462; memset(&l_S_462, 0, sizeof l_S_462);
l_S_462 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_463; memset(&l_HEAD_463, 0, sizeof l_HEAD_463);
l_HEAD_463 = NULL;
R21 * l_TAIL_464; memset(&l_TAIL_464, 0, sizeof l_TAIL_464);
l_TAIL_464 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_462))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end465;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_462))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_462))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_466; memset(&l_ARM_466, 0, sizeof l_ARM_466);
l_ARM_466 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_467; memset(&l_LH_467, 0, sizeof l_LH_467);
l_LH_467 = NULL;
R21 * l_LT_468; memset(&l_LT_468, 0, sizeof l_LT_468);
l_LT_468 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_467, &l_LT_468);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end469;
} L_end469: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_466))).f_A = l_LH_467;
((*(R21 *)rt_nil_check(l_ARM_466))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_466))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_466, &l_HEAD_463, &l_TAIL_464);
}
}
}
} L_end465: ;
((*(R21 *)rt_nil_check(l_S_462))).f_B = l_HEAD_463;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv470 = l_S_462;
return rv470; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { 
R21 * l_S_471; memset(&l_S_471, 0, sizeof l_S_471);
l_S_471 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_471))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_471))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_471))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_471))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_471))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_471))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv472 = l_S_471;
return rv472; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_471))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_471))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_471))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_471))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv473 = l_S_471;
return rv473; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { 
R21 * l_S_474; memset(&l_S_474, 0, sizeof l_S_474);
l_S_474 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_475; memset(&l_HEAD_475, 0, sizeof l_HEAD_475);
l_HEAD_475 = NULL;
R21 * l_TAIL_476; memset(&l_TAIL_476, 0, sizeof l_TAIL_476);
l_TAIL_476 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end477;
{
{
R21 * l_P_478; memset(&l_P_478, 0, sizeof l_P_478);
l_P_478 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_479; memset(&l_H_479, 0, sizeof l_H_479);
l_H_479 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R10(&((*(R21 *)rt_nil_check(l_P_478))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_478))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_478))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_478))).f_E))).f_A = l_H_479;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_478))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_478))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_478))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_478))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_478))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_479))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_479))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end480;
}
}
} L_end480: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_478))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_478))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_478, &l_HEAD_475, &l_TAIL_476);
}
}
} L_end477: ;
((*(R21 *)rt_nil_check(l_S_474))).f_A = l_HEAD_475;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv481 = l_S_474;
return rv481; }
rt_raise(RT_X_INIT);
}
static R10 r_NO_TEXT(void) { 
{ R10 rv482 = ({ R10 rc483; memset(&rc483, 0, sizeof rc483);  rc483.f_AT = ((rt_int)0LL); rc483.f_LEN = ((rt_int)0LL); rc483.f_H = ((rt_int)0LL); rc483; });
return rv482; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { 
{ R23 rv484 = ({ R23 rc485; memset(&rc485, 0, sizeof rc485);  rc485.f_OK = 0; rc485.f_V = ((rt_int)0LL); rc485; });
return rv484; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { 
{ R23 rv486 = ({ R23 rc487; memset(&rc487, 0, sizeof rc487);  rc487.f_OK = 1; rc487.f_V = p_V; rc487; });
return rv486; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { 
R12 * l_Y_488; memset(&l_Y_488, 0, sizeof l_Y_488);
l_Y_488 = ((R12 *)rt_alloc(sizeof (R12)));
rt_int l_LEVEL_489; memset(&l_LEVEL_489, 0, sizeof l_LEVEL_489);
l_LEVEL_489 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_489 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_488)), ({ R12 rc490; memset(&rc490, 0, sizeof rc490);  rc490.f_KIND = p_KIND; rc490.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc490.f_LEVEL = l_LEVEL_489; S_R10(&rc490.f_NAME, p_NAME, 0); rc490.f_T = NULL; S_R10(&rc490.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc490.f_FIELD, r_NO_TEXT(), 0); rc490.f_INPUT = 0; rc490.f_BYREF = 0; rc490.f_HASMV = 0; rc490.f_MV = ((rt_int)0LL); rc490.f_TS = NULL; rc490.f_BUSY = 0; S_R10(&rc490.f_FWD, r_NO_TEXT(), 0); rc490.f_PARAMS = NULL; rc490.f_RESULT = NULL; rc490.f_DECL = NULL; S_R10(&rc490.f_PREFIX, r_NO_TEXT(), 0); rc490.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc490.f_EXPORTED = 0; rc490.f_GENERIC = 0; rc490.f_FRAMED = 0; rc490.f_USES = NULL; rc490.f_INSTANCES = NULL; rc490.f_BINDINGS = NULL; rc490.f_ORIG = NULL; rc490.f_MEMBERS = NULL; rc490.f_SAVED = NULL; rc490.f_OWNER = r_CUR_OWNER(); rc490.f_CHAIN = NULL; rc490.f_SNEXT = NULL; rc490; }), 0);
{ R12 * rv491 = l_Y_488;
return rv491; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv492 = ((rt_int)0LL);
return rv492; }
}
{ rt_int rv493 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv493; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv494 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv494; }
}
{ R12 * rv495 = p_Y;
return rv495; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv496 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv496; }
}
{ rt_int rv497 = (p_NAME).f_H;
return rv497; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { 
R12 * l_Y_498; memset(&l_Y_498, 0, sizeof l_Y_498);
l_Y_498 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_498 == NULL)) goto L_end499;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_498))).f_NAME, p_NAME))
{
{ R12 * rv500 = l_Y_498;
return rv500; }
}
l_Y_498 = ((*(R12 *)rt_nil_check(l_Y_498))).f_CHAIN;
}
} L_end499: ;
{ R12 * rv501 = NULL;
return rv501; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { 
R12 * l_Y_502; memset(&l_Y_502, 0, sizeof l_Y_502);
l_Y_502 = r_LOOKUP(p_NAME);
if ((l_Y_502 == NULL))
{
{ R12 * rv503 = NULL;
return rv503; }
}
{ R12 * rv504 = r_ORIGINAL(l_Y_502);
return rv504; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { 
{ R12 * rv505 = r_LOOKUP(r_MKN(p_NAME));
return rv505; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { 
R12 * l_Z_506; memset(&l_Z_506, 0, sizeof l_Z_506);
l_Z_506 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_506 == NULL)) goto L_end507;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_506))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv508 = l_Z_506;
return rv508; }
}
l_Z_506 = ((*(R12 *)rt_nil_check(l_Z_506))).f_CHAIN;
}
} L_end507: ;
{ R12 * rv509 = NULL;
return rv509; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { 
{ rt_int rv510 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv510; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { 
rt_int l_B_511; memset(&l_B_511, 0, sizeof l_B_511);
l_B_511 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_512; memset(&l_OLD_512, 0, sizeof l_OLD_512);
l_OLD_512 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_512 == NULL)) goto L_end513;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_512))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end513;
}
if ((!((((r_IS_ROUTINE(l_OLD_512) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_512))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_512 = r_LOOKUP_NEXT(l_OLD_512);
}
} L_end513: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_511, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_511, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end514;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end514;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
} L_end514: ;
}
static void r_UNLINK(R12 * p_Y) { 
rt_int l_B_515; memset(&l_B_515, 0, sizeof l_B_515);
l_B_515 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_516; memset(&l_P_516, 0, sizeof l_P_516);
l_P_516 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_515, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_516 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_515, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_516 == NULL)) goto L_end517;
{
if ((((*(R12 *)rt_nil_check(l_P_516))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_516))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_516 = ((*(R12 *)rt_nil_check(l_P_516))).f_CHAIN;
}
} L_end517: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { 
R12 * l_HEAD_518; memset(&l_HEAD_518, 0, sizeof l_HEAD_518);
l_HEAD_518 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end519;
{
{
R12 * l_Y_520; memset(&l_Y_520, 0, sizeof l_Y_520);
l_Y_520 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_520);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_520))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_520))).f_SNEXT = l_HEAD_518;
l_HEAD_518 = l_Y_520;
}
}
} L_end519: ;
{ R12 * rv521 = l_HEAD_518;
return rv521; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { 
R22 * l_T_522; memset(&l_T_522, 0, sizeof l_T_522);
l_T_522 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_522)), ({ R22 rc523; memset(&rc523, 0, sizeof rc523);  rc523.f_KIND = p_KIND; rc523.f_SCALE = ((rt_int)0LL); S_R10(&rc523.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc523.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc523.f_MLO, r_NO_MVAL(), 0); S_R23(&rc523.f_MHI, r_NO_MVAL(), 0); rc523.f_RLEVEL = ((rt_int)0LL); S_R10(&rc523.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc523.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc523.f_GEN, r_NO_TEXT(), 0); rc523.f_BASE = NULL; rc523.f_ELEM = NULL; rc523.f_TARGET = NULL; rc523.f_TARGET_TS = NULL; rc523.f_FIELDS = NULL; rc523.f_LITS = NULL; rc523.f_NLITS = ((rt_int)0LL); rc523.f_UNORDERED = 0; rc523.f_BOUNDS = NULL; rc523.f_DIMS = ((rt_int)0LL); rc523.f_ARGS = NULL; S_R10(&rc523.f_NAME, r_NO_TEXT(), 0); S_R10(&rc523.f_CNAME, r_NO_TEXT(), 0); rc523.f_MODL = NULL; rc523.f_REPS = NULL; rc523.f_DECL = NULL; rc523; }), 0);
{ R22 * rv524 = l_T_522;
return rv524; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { 
R22 * l_C_525; memset(&l_C_525, 0, sizeof l_C_525);
l_C_525 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_525)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv526 = l_C_525;
return rv526; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { 
R12 * l_Y_527; memset(&l_Y_527, 0, sizeof l_Y_527);
l_Y_527 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_527))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_527))).f_NAME, 0);
}
r_DEFINE(l_Y_527, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { 
R12 * l_Y_528; memset(&l_Y_528, 0, sizeof l_Y_528);
l_Y_528 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_528))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_528))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_528))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_528))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_528))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_528, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { 
R21 * l_HEAD_529; memset(&l_HEAD_529, 0, sizeof l_HEAD_529);
l_HEAD_529 = NULL;
R21 * l_TAIL_530; memset(&l_TAIL_530, 0, sizeof l_TAIL_530);
l_TAIL_530 = NULL;
rt_int l_START_531; memset(&l_START_531, 0, sizeof l_START_531);
l_START_531 = ((rt_int)0LL);
{ rt_int it533_lo = ((rt_int)0LL), it533_hi = (rt_int)(p_NAMES).len;
for (rt_int it533 = it533_lo; it533 <= it533_hi; it533++) {
{
if (((it533 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it533, it533), rt_str(" ", 1))))
{
if ((it533 > l_START_531))
{
{
R21 * l_N_534; memset(&l_N_534, 0, sizeof l_N_534);
l_N_534 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_534))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_531, rt_sub(it533, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_534, &l_HEAD_529, &l_TAIL_530);
}
}
l_START_531 = rt_add(it533, ((rt_int)1LL));
}
}
} } L_end532: ;
{
R22 * l_T_535; memset(&l_T_535, 0, sizeof l_T_535);
l_T_535 = r_ENUM_CLASS(l_HEAD_529, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_535);
{ R22 * rv536 = l_T_535;
return rv536; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { 
R22 * l_T_537; memset(&l_T_537, 0, sizeof l_T_537);
R21 * l_ASCII_LITS_538; memset(&l_ASCII_LITS_538, 0, sizeof l_ASCII_LITS_538);
l_ASCII_LITS_538 = NULL;
R21 * l_TAIL_539; memset(&l_TAIL_539, 0, sizeof l_TAIL_539);
l_TAIL_539 = NULL;
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
{ rt_int it541_lo = ((rt_int)0LL), it541_hi = ((rt_int)127LL);
for (rt_int it541 = it541_lo; it541 <= it541_hi; it541++) {
{
{
R21 * l_N_542; memset(&l_N_542, 0, sizeof l_N_542);
l_N_542 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_542))).f_NAME, r_ASCII_NAME(it541), 0);
r_ADD_LIST(l_N_542, &l_ASCII_LITS_538, &l_TAIL_539);
}
}
} } L_end540: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_538, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_537 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
l_T_537 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_537 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_537 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
static void r_PREDEFINE_TERMINAL(void) { 
r_PREDEF_BUILTIN(rt_str("PUT", 3));
r_PREDEF_BUILTIN(rt_str("PUT_LINE", 8));
r_PREDEF_BUILTIN(rt_str("NEW_LINE", 8));
r_PREDEF_BUILTIN(rt_str("GET_CODE", 8));
r_PREDEF_BUILTIN(rt_str("GET_LINE", 8));
r_PREDEF_BUILTIN(rt_str("END_OF_INPUT", 12));
r_PREDEF_BUILTIN(rt_str("STOP", 4));
}
static R10 r_ASCII_NAME(rt_int p_C) { 
rstr l_CONTROLS_543; memset(&l_CONTROLS_543, 0, sizeof l_CONTROLS_543);
l_CONTROLS_543 = rt_str_new(((rt_int)128LL));
rt_b_assign(&l_CONTROLS_543, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_543, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv544 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_543, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv544; }
}
{ R10 rv545 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_543, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv545; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv546 = r_MKN(rt_str("\\''''", 5));
return rv546; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv547 = r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv547; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv548 = r_MKN(rt_str("\\ACCENT", 7));
return rv548; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv549 = r_MKN(rt_str_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv549; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv550 = r_MKN(rt_str("\\[", 2));
return rv550; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv551 = r_MKN(rt_str("\\BAR", 4));
return rv551; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv552 = r_MKN(rt_str("\\]", 2));
return rv552; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv553 = r_MKN(rt_str("\\TILDE", 6));
return rv553; }
}
{ R10 rv554 = r_MKN(rt_str("\\DEL", 4));
return rv554; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { 
{ rt_int rv555 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv555; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv556 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv556; }
}
{ R22 * rv557 = p_T;
return rv557; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { 
rt_int l_K_558; memset(&l_K_558, 0, sizeof l_K_558);
l_K_558 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv559 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv559; }
}
else if ((l_K_558 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv560 = r_MK(rt_str("INTEGER", 7));
return rv560; }
}
{ R10 rv561 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv561; }
}
else if ((l_K_558 == g_T_BOOL))
{
{ R10 rv562 = r_MK(rt_str("BOOLEAN", 7));
return rv562; }
}
else if ((l_K_558 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv563 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv563; }
}
{ R10 rv564 = r_MK(rt_str("an enumerated type", 18));
return rv564; }
}
else if ((l_K_558 == g_T_STR))
{
{ R10 rv565 = r_MK(rt_str("CHAR_STR", 8));
return rv565; }
}
else if ((l_K_558 == g_T_BITS))
{
{ R10 rv566 = r_MK(rt_str("BIT", 3));
return rv566; }
}
else if ((l_K_558 == g_T_FLOAT))
{
{ R10 rv567 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv567; }
}
else if ((l_K_558 == g_T_ARR))
{
{ R10 rv568 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv568; }
}
else if ((l_K_558 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv569 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv569; }
}
{ R10 rv570 = r_MK(rt_str("RECORD", 6));
return rv570; }
}
else if ((l_K_558 == g_T_PTR))
{
{ R10 rv571 = r_MK(rt_str("PTR", 3));
return rv571; }
}
else if ((l_K_558 == g_T_SEM))
{
{ R10 rv572 = r_MK(rt_str("SEMAPHORE", 9));
return rv572; }
}
else if ((l_K_558 == g_T_NIL))
{
{ R10 rv573 = r_MK(rt_str("NIL", 3));
return rv573; }
}
else if ((l_K_558 == g_T_VOID))
{
{ R10 rv574 = r_MK(rt_str("no value", 8));
return rv574; }
}
{ R10 rv575 = r_MK(rt_str("a type", 6));
return rv575; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { 
rstr l_S_576; memset(&l_S_576, 0, sizeof l_S_576);
l_S_576 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_576, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_577; memset(&l_AT_577, 0, sizeof l_AT_577);
l_AT_577 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_578; memset(&l_START_578, 0, sizeof l_START_578);
l_START_578 = ((rt_int)0LL);
R10 l_R_579; memset(&l_R_579, 0, sizeof l_R_579);
rt_int l_I_580; memset(&l_I_580, 0, sizeof l_I_580);
l_I_580 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv581 = p_T;
return rv581; }
}
for (;;) {
if ((l_I_580 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end582;
{
if (rt_b_eq(rt_b_slice(l_S_576, l_I_580, rt_add(l_I_580, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_579, r_MK(rt_b_slice(l_S_576, l_START_578, rt_sub(l_I_580, ((rt_int)1LL)))), 0);
S_R10(&l_R_579, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_580 = rt_add(l_I_580, ((rt_int)2LL));
l_START_578 = l_I_580;
}
else
{
l_I_580 = rt_add(l_I_580, ((rt_int)1LL));
}
}
} L_end582: ;
if ((l_START_578 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_577;
{ R10 rv583 = p_T;
return rv583; }
}
S_R10(&l_R_579, r_MK(rt_b_slice(l_S_576, l_START_578, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv584 = ({ R10 rc585; memset(&rc585, 0, sizeof rc585);  rc585.f_AT = l_AT_577; rc585.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_577); rc585.f_H = rt_neg(((rt_int)1LL)); rc585; });
return rv584; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { 
R21 * l_P_586; memset(&l_P_586, 0, sizeof l_P_586);
l_P_586 = p_A;
R21 * l_Q_587; memset(&l_Q_587, 0, sizeof l_Q_587);
l_Q_587 = p_B;
for (;;) {
if (((l_P_586 == NULL) || (l_Q_587 == NULL))) goto L_end588;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_586))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_587))).f_NAME)))
{
{ rt_int rv589 = 0;
return rv589; }
}
l_P_586 = ((*(R21 *)rt_nil_check(l_P_586))).f_NEXT;
l_Q_587 = ((*(R21 *)rt_nil_check(l_Q_587))).f_NEXT;
}
} L_end588: ;
{ rt_int rv590 = ((l_P_586 == NULL) && (l_Q_587 == NULL));
return rv590; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { 
R12 * l_Y_591; memset(&l_Y_591, 0, sizeof l_Y_591);
l_Y_591 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_592; memset(&l_T_592, 0, sizeof l_T_592);
for (;;) {
if ((l_Y_591 == NULL)) goto L_end593;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_591))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_591))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_591))).f_T, p_LINE);
{ R22 * rv594 = ((*(R12 *)rt_nil_check(l_Y_591))).f_T;
return rv594; }
}
l_Y_591 = ((*(R12 *)rt_nil_check(l_Y_591))).f_INSTANCES;
}
} L_end593: ;
l_T_592 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_592))).f_BASE = l_T_592;
((*(R22 *)rt_nil_check(l_T_592))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_592))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_592))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_592))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_591 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_591))).f_T = l_T_592;
((*(R12 *)rt_nil_check(l_Y_591))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_591;
{
R21 * l_P_595; memset(&l_P_595, 0, sizeof l_P_595);
l_P_595 = p_LITS;
R10 l_NAMES_596; memset(&l_NAMES_596, 0, sizeof l_NAMES_596);
S_R10(&l_NAMES_596, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_595 == NULL)) goto L_end597;
{
S_R10(&l_NAMES_596, r_FMT2(rt_str("@@, ", 4), l_NAMES_596, r_CSTRING(((*(R21 *)rt_nil_check(l_P_595))).f_NAME)), 0);
l_P_595 = ((*(R21 *)rt_nil_check(l_P_595))).f_NEXT;
}
} L_end597: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_592))).f_CNAME, l_NAMES_596));
}
r_DECLARE_LITERALS(l_T_592, p_LINE);
{ R22 * rv598 = l_T_592;
return rv598; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { 
R21 * l_P_599; memset(&l_P_599, 0, sizeof l_P_599);
l_P_599 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_600; memset(&l_I_600, 0, sizeof l_I_600);
l_I_600 = ((rt_int)0LL);
for (;;) {
if ((l_P_599 == NULL)) goto L_end601;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_599))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_602; memset(&l_Y_602, 0, sizeof l_Y_602);
l_Y_602 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_599))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_602))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_602))).f_MV = l_I_600;
((*(R12 *)rt_nil_check(l_Y_602))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_602))).f_INPUT = 1;
r_DEFINE(l_Y_602, p_LINE);
}
}
l_I_600 = rt_add(l_I_600, ((rt_int)1LL));
l_P_599 = ((*(R21 *)rt_nil_check(l_P_599))).f_NEXT;
}
} L_end601: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { 
R12 * l_V_603; memset(&l_V_603, 0, sizeof l_V_603);
l_V_603 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_603 == NULL)) || (p_T == NULL)))
{
{ R12 * rv604 = l_V_603;
return rv604; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv605 = NULL;
return rv605; }
}
{
R21 * l_P_606; memset(&l_P_606, 0, sizeof l_P_606);
l_P_606 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_607; memset(&l_I_607, 0, sizeof l_I_607);
l_I_607 = ((rt_int)0LL);
for (;;) {
if ((l_P_606 == NULL)) goto L_end608;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_606))).f_NAME, p_NAME))
{
{
R12 * l_Y_609; memset(&l_Y_609, 0, sizeof l_Y_609);
l_Y_609 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_609))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_609))).f_MV = l_I_607;
((*(R12 *)rt_nil_check(l_Y_609))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_609))).f_INPUT = 1;
{ R12 * rv610 = l_Y_609;
return rv610; }
}
}
l_I_607 = rt_add(l_I_607, ((rt_int)1LL));
l_P_606 = ((*(R21 *)rt_nil_check(l_P_606))).f_NEXT;
}
} L_end608: ;
}
{ R12 * rv611 = NULL;
return rv611; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { 
R12 * l_Y_612; memset(&l_Y_612, 0, sizeof l_Y_612);
l_Y_612 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_612 == NULL)) goto L_end613;
{
if ((((*(R12 *)rt_nil_check(l_Y_612))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv614 = l_Y_612;
return rv614; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_612))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv615 = l_Y_612;
return rv615; }
}
}
l_Y_612 = r_LOOKUP_NEXT(l_Y_612);
}
} L_end613: ;
{ R12 * rv616 = NULL;
return rv616; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { 
R12 * l_Y_617; memset(&l_Y_617, 0, sizeof l_Y_617);
l_Y_617 = r_LOOKUP(p_NAME);
rt_int l_N_618; memset(&l_N_618, 0, sizeof l_N_618);
l_N_618 = ((rt_int)0LL);
for (;;) {
if ((l_Y_617 == NULL)) goto L_end619;
{
if ((((*(R12 *)rt_nil_check(l_Y_617))).f_KIND == g_Y_ENUMLIT))
{
l_N_618 = rt_add(l_N_618, ((rt_int)1LL));
}
l_Y_617 = r_LOOKUP_NEXT(l_Y_617);
}
} L_end619: ;
{ rt_int rv620 = l_N_618;
return rv620; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { 
{ R22 * rv621 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv621; }
rt_raise(RT_X_INIT);
}
static void r_ATTR_VALUE(R21 * p_E, R10 *p_C, R23 *p_M) { 
S_R10(&(*p_C), (r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, 0);
S_R23(&(*p_M), r_MANIFEST(p_E), 0);
if (((*p_M)).f_OK)
{
S_R10(&(*p_C), r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*p_M)).f_V)), 0);
}
}
static R22 * r_WITH_RANGE(R22 * p_T, R21 * p_R) { 
R22 * l_N_622; memset(&l_N_622, 0, sizeof l_N_622);
if ((p_R == NULL))
{
{ R22 * rv623 = p_T;
return rv623; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_622 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_LO_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_HI_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv624 = l_N_622;
return rv624; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_622 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_622))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_625; memset(&l_LO_625, 0, sizeof l_LO_625);
R26 l_HI_626; memset(&l_HI_626, 0, sizeof l_HI_626);
S_R26(&l_LO_625, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_626, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_LO_C, (l_LO_625).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_HI_C, (l_HI_626).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_622))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_622))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_622))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_622))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_LO_C, r_RESCALE(l_LO_625, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_HI_C, r_RESCALE(l_HI_626, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_622))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_622))).f_MHI, r_NO_MVAL(), 0);
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_622))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_622))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_622))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_622))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_622))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_622))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_622))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_622))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_622))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv627 = l_N_622;
return rv627; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_628; memset(&l_Y_628, 0, sizeof l_Y_628);
l_Y_628 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_628 == NULL)))
{
{ R23 rv629 = r_SOME(((*(R12 *)rt_nil_check(l_Y_628))).f_MV);
return rv629; }
}
}
}
{ R23 rv630 = r_MANIFEST(p_E);
return rv630; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv631 = ((rt_int)0LL);
return rv631; }
}
{ rt_int rv632 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv632; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { 
{ R22 * rv633 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv633; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { 
R21 * l_A_634; memset(&l_A_634, 0, sizeof l_A_634);
l_A_634 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it636_lo = ((rt_int)1LL), it636_hi = p_K;
for (rt_int it636 = it636_lo; it636 <= it636_hi; it636++) {
{
if ((l_A_634 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_634 = ((*(R21 *)rt_nil_check(l_A_634))).f_NEXT;
}
} } L_end635: ;
if ((l_A_634 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv637 = l_A_634;
return rv637; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { 
R22 * l_T_638; memset(&l_T_638, 0, sizeof l_T_638);
rt_int l_K_639; memset(&l_K_639, 0, sizeof l_K_639);
l_K_639 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_639 == g_TS_ARRAY))
{
{ R22 * rv640 = r_RESOLVE_ARRAY(p_TS);
return rv640; }
}
else if ((l_K_639 == g_TS_RECORD))
{
{ R22 * rv641 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv641; }
}
else if ((l_K_639 == g_TS_ENUM))
{
l_T_638 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_638 = r_WITH_RANGE(l_T_638, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_638 = r_COPY_TYP(l_T_638);
((*(R22 *)rt_nil_check(l_T_638))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
}
{ R22 * rv642 = l_T_638;
return rv642; }
}
else if ((l_K_639 == g_TS_GEN))
{
{ R22 * rv643 = r_GEN_TYPE(p_TS);
return rv643; }
}
else if ((!(l_K_639 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
l_T_638 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_638 == NULL))
{
l_T_638 = r_RESOLVE_USER(p_TS);
}
l_T_638 = r_WITH_RANGE(l_T_638, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_638 = r_COPY_TYP(l_T_638);
((*(R22 *)rt_nil_check(l_T_638))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
if (((!(((*(R22 *)rt_nil_check(l_T_638))).f_KIND == g_T_ENUM)) || (!((*(R22 *)rt_nil_check(l_T_638))).f_UNORDERED)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
}
{ R22 * rv644 = l_T_638;
return rv644; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { 
R20 * l_B_645; memset(&l_B_645, 0, sizeof l_B_645);
l_B_645 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_645 == NULL)) goto L_end646;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_645))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_645))).f_T == NULL))))
{
{ R22 * rv647 = ((*(R20 *)rt_nil_check(l_B_645))).f_T;
return rv647; }
}
l_B_645 = ((*(R20 *)rt_nil_check(l_B_645))).f_NEXT;
}
} L_end646: ;
{
R12 * l_Y_648; memset(&l_Y_648, 0, sizeof l_Y_648);
l_Y_648 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_648 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_648))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_648))).f_T == NULL))))
{
{ R22 * rv649 = ((*(R12 *)rt_nil_check(l_Y_648))).f_T;
return rv649; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { 
R10 l_NAME_650; memset(&l_NAME_650, 0, sizeof l_NAME_650);
S_R10(&l_NAME_650, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_651; memset(&l_T_651, 0, sizeof l_T_651);
if (r_TEQS(l_NAME_650, rt_str("FIXED", 5)))
{
{
R23 l_S_652; memset(&l_S_652, 0, sizeof l_S_652);
S_R23(&l_S_652, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
R23 l_R_653; memset(&l_R_653, 0, sizeof l_R_653);
S_R23(&l_R_653, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)1LL))), 0);
R21 * l_P_654; memset(&l_P_654, 0, sizeof l_P_654);
l_P_654 = r_NTH_ARG(p_TS, ((rt_int)2LL));
if ((!(l_S_652).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the scale must be manifest (3.2.1)", 34));
}
if (((!(l_R_653).f_OK) || (!((l_R_653).f_V == ((rt_int)2LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
if (((((*(R21 *)rt_nil_check(l_P_654))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_654))).f_KIND == g_N_ENUMLIT)))
{
if (((!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_654))).f_NAME, NULL) == NULL)) && (!r_TEQS(((*(R21 *)rt_nil_check(l_P_654))).f_NAME, rt_str("STD", 3)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
if (((l_S_652).f_V == ((rt_int)0LL)))
{
{ R22 * rv655 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv655; }
}
l_T_651 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_651))).f_SCALE = (l_S_652).f_V;
{ R22 * rv656 = l_T_651;
return rv656; }
}
}
else if (r_TEQS(l_NAME_650, rt_str("FLOAT", 5)))
{
{
R23 l_P_657; memset(&l_P_657, 0, sizeof l_P_657);
S_R23(&l_P_657, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
if ((!(l_P_657).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the precision must be manifest (3.3.1)", 38));
}
if ((((l_P_657).f_V < ((rt_int)1LL)) || ((l_P_657).f_V > ((rt_int)15LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
l_T_651 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_651))).f_SCALE = (l_P_657).f_V;
{ R22 * rv658 = l_T_651;
return rv658; }
}
}
else if (r_TEQS(l_NAME_650, rt_str("BIT", 3)))
{
l_T_651 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_651, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv659 = l_T_651;
return rv659; }
}
else if ((r_TEQS(l_NAME_650, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_650, rt_str("ASCII_STR", 9))))
{
l_T_651 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_651, r_NTH_ARG(p_TS, ((rt_int)0LL)));
if (r_TEQS(l_NAME_650, rt_str("CHAR_STR", 8)))
{
{
R21 * l_CS_660; memset(&l_CS_660, 0, sizeof l_CS_660);
l_CS_660 = r_NTH_ARG(p_TS, ((rt_int)1LL));
if (((((*(R21 *)rt_nil_check(l_CS_660))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_660))).f_KIND == g_N_DONTCARE)))
{
{ R22 * rv661 = l_T_651;
return rv661; }
}
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_CS_660))).f_NAME, rt_str("ASCII", 5))))
{
if ((!(((*(R22 *)rt_nil_check(r_ARG_TYPE(l_CS_660)))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
}
}
}
{ R22 * rv662 = l_T_651;
return rv662; }
}
else if (r_TEQS(l_NAME_650, rt_str("PTR", 3)))
{
l_T_651 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_651))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv663 = l_T_651;
return rv663; }
}
else if (r_TEQS(l_NAME_650, rt_str("SEMAPHORE", 9)))
{
l_T_651 = r_NEW_TYP(g_T_SEM);
{
R21 * l_U_664; memset(&l_U_664, 0, sizeof l_U_664);
l_U_664 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_664))).f_NAME, rt_str("REGION", 6)))
{
((*(R22 *)rt_nil_check(l_T_651))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_664))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R22 * rv665 = l_T_651;
return rv665; }
}
{ R22 * rv666 = NULL;
return rv666; }
rt_raise(RT_X_INIT);
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_667; memset(&l_B_667, 0, sizeof l_B_667);
l_B_667 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_667 == NULL)) goto L_end668;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_667))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_667))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_667))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc669; memset(&rc669, 0, sizeof rc669);  rc669.f_OK = ((*(R20 *)rt_nil_check(l_B_667))).f_HASMV; rc669.f_V = ((*(R20 *)rt_nil_check(l_B_667))).f_MV; rc669; }), 0);
return;
}
l_B_667 = ((*(R20 *)rt_nil_check(l_B_667))).f_NEXT;
}
} L_end668: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_670; memset(&l_C_670, 0, sizeof l_C_670);
R23 l_M_671; memset(&l_M_671, 0, sizeof l_M_671);
r_ATTR_VALUE(p_A, &l_C_670, &l_M_671);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_670, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_671, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { 
R22 * l_T_672; memset(&l_T_672, 0, sizeof l_T_672);
l_T_672 = r_NEW_TYP(g_T_ARR);
R21 * l_R_673; memset(&l_R_673, 0, sizeof l_R_673);
l_R_673 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_674; memset(&l_TAIL_674, 0, sizeof l_TAIL_674);
l_TAIL_674 = NULL;
for (;;) {
if ((l_R_673 == NULL)) goto L_end675;
{
{
R25 * l_B_676; memset(&l_B_676, 0, sizeof l_B_676);
l_B_676 = ((R25 *)rt_alloc(sizeof (R25)));
R26 l_LO_677; memset(&l_LO_677, 0, sizeof l_LO_677);
R26 l_HI_678; memset(&l_HI_678, 0, sizeof l_HI_678);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_673))).f_A))
{
S_R26(&l_LO_677, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_673))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_673))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_677, r_EXPR(((*(R21 *)rt_nil_check(l_R_673))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_673))).f_B))
{
S_R26(&l_HI_678, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_673))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_673))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_678, r_EXPR(((*(R21 *)rt_nil_check(l_R_673))).f_B, (l_LO_677).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_676)), ({ R25 rc679; memset(&rc679, 0, sizeof rc679);  S_R10(&rc679.f_LO, (l_LO_677).f_C, 0); S_R10(&rc679.f_HI, (l_HI_678).f_C, 0); S_R23(&rc679.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_673))).f_A), 0); S_R23(&rc679.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_673))).f_B), 0); rc679.f_ANYARG = 0; rc679.f_NEXT = NULL; rc679; }), 0);
if ((((*(R22 *)rt_nil_check((l_LO_677).f_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_676))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_673))).f_A, (l_LO_677).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_676))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_673))).f_B, (l_LO_677).f_T), 0);
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_677).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_673))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_674 == NULL))
{
((*(R22 *)rt_nil_check(l_T_672))).f_BOUNDS = l_B_676;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_674))).f_NEXT = l_B_676;
}
l_TAIL_674 = l_B_676;
((*(R22 *)rt_nil_check(l_T_672))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_672))).f_DIMS, ((rt_int)1LL));
}
l_R_673 = ((*(R21 *)rt_nil_check(l_R_673))).f_NEXT;
}
} L_end675: ;
((*(R22 *)rt_nil_check(l_T_672))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_672))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_672))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_672))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_672))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_672))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_672))).f_DIMS), 0);
{ R22 * rv680 = l_T_672;
return rv680; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { 
R12 * l_Y_681; memset(&l_Y_681, 0, sizeof l_Y_681);
l_Y_681 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_682; memset(&l_B_682, 0, sizeof l_B_682);
l_B_682 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_682 == NULL)) goto L_end683;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_682))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_682))).f_T == NULL))))
{
{ R22 * rv684 = ((*(R20 *)rt_nil_check(l_B_682))).f_T;
return rv684; }
}
l_B_682 = ((*(R20 *)rt_nil_check(l_B_682))).f_NEXT;
}
} L_end683: ;
}
}
if ((l_Y_681 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_681))).f_KIND == g_Y_GEN))
{
{ R22 * rv685 = r_GEN_TYPE(p_TS);
return rv685; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_681))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_681))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv686 = ((*(R12 *)rt_nil_check(l_Y_681))).f_T;
return rv686; }
}
{
R21 * l_D_687; memset(&l_D_687, 0, sizeof l_D_687);
l_D_687 = ((*(R12 *)rt_nil_check(l_Y_681))).f_DECL;
R22 * l_T_688; memset(&l_T_688, 0, sizeof l_T_688);
if ((((*(R21 *)rt_nil_check(l_D_687))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_681))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_681))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_681))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_687))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_681))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_687))).f_B, r_RECORD_NAME(l_Y_681), l_Y_681, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_681))).f_T = r_RESOLVE_IN_DECL(l_Y_681, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_681))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_681))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_681))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_681))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_681))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_681))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_681))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_681))).f_BUSY = 0;
}
l_T_688 = ((*(R12 *)rt_nil_check(l_Y_681))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_687))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_688 = r_RECORD_INSTANCE(l_Y_681, p_TS);
}
else
{
l_T_688 = r_RESOLVE_IN_DECL(l_Y_681, p_TS);
}
}
{ R22 * rv689 = r_ABSTRACT_VIEW(l_Y_681, l_T_688);
return rv689; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { 
R22 * l_A_690; memset(&l_A_690, 0, sizeof l_A_690);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv691 = p_T;
return rv691; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv692 = p_T;
return rv692; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv693 = p_T;
return rv693; }
}
l_A_690 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_690))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_690))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_690))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_690))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_690))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv694 = l_A_690;
return rv694; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { 
R12 * l_P_695; memset(&l_P_695, 0, sizeof l_P_695);
l_P_695 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_695 == NULL)) goto L_end696;
{
if ((l_P_695 == p_M))
{
{ rt_int rv697 = 1;
return rv697; }
}
l_P_695 = ((*(R12 *)rt_nil_check(l_P_695))).f_MODL;
}
} L_end696: ;
{ rt_int rv698 = 0;
return rv698; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { 
R21 * l_D_699; memset(&l_D_699, 0, sizeof l_D_699);
l_D_699 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_700; memset(&l_T_700, 0, sizeof l_T_700);
if ((p_TS == NULL))
{
{ R22 * rv701 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_699))).f_B);
return rv701; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_699))).f_A, p_TS);
l_T_700 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_699))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv702 = l_T_700;
return rv702; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { 
R21 * l_F_703; memset(&l_F_703, 0, sizeof l_F_703);
l_F_703 = p_FORMALS;
R21 * l_A_704; memset(&l_A_704, 0, sizeof l_A_704);
l_A_704 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_703 == NULL)) goto L_end705;
{
{
R21 * l_N_706; memset(&l_N_706, 0, sizeof l_N_706);
l_N_706 = ((*(R21 *)rt_nil_check(l_F_703))).f_A;
for (;;) {
if ((l_N_706 == NULL)) goto L_end707;
{
if ((l_A_704 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_703))).f_B == NULL))
{
{
R12 * l_Y_708; memset(&l_Y_708, 0, sizeof l_Y_708);
l_Y_708 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_706))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_708))).f_T = r_ARG_TYPE(l_A_704);
r_DEFINE(l_Y_708, ((*(R21 *)rt_nil_check(l_A_704))).f_LINE);
}
}
else
{
{
R12 * l_Y_709; memset(&l_Y_709, 0, sizeof l_Y_709);
l_Y_709 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_706))).f_NAME);
R10 l_C_710; memset(&l_C_710, 0, sizeof l_C_710);
R23 l_M_711; memset(&l_M_711, 0, sizeof l_M_711);
((*(R12 *)rt_nil_check(l_Y_709))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_703))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_704))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_704))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_704))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_704))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_710, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_704))).f_NAME, (((*(R21 *)rt_nil_check(l_A_704))).f_NAME).f_LEN))), 0);
S_R23(&l_M_711, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_704, &l_C_710, &l_M_711);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_709))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_710))))
{
S_R10(&l_C_710, (r_EXPR(l_A_704, ((*(R12 *)rt_nil_check(l_Y_709))).f_T)).f_C, 0);
S_R23(&l_M_711, r_ENUM_MANIFEST(l_A_704, ((*(R12 *)rt_nil_check(l_Y_709))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_709))).f_ACCESS, l_C_710, 0);
((*(R12 *)rt_nil_check(l_Y_709))).f_HASMV = (l_M_711).f_OK;
((*(R12 *)rt_nil_check(l_Y_709))).f_MV = (l_M_711).f_V;
((*(R12 *)rt_nil_check(l_Y_709))).f_INPUT = 1;
r_DEFINE(l_Y_709, ((*(R21 *)rt_nil_check(l_A_704))).f_LINE);
}
}
l_A_704 = ((*(R21 *)rt_nil_check(l_A_704))).f_NEXT;
l_N_706 = ((*(R21 *)rt_nil_check(l_N_706))).f_NEXT;
}
} L_end707: ;
}
l_F_703 = ((*(R21 *)rt_nil_check(l_F_703))).f_NEXT;
}
} L_end705: ;
if ((!(l_A_704 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R10 r_RECORD_NAME(R12 * p_Y) { 
if (((((*(R12 *)rt_nil_check(p_Y))).f_FWD).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, ((*(R12 *)rt_nil_check(p_Y))).f_FWD));
}
{ R10 rv712 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv712; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv713 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv713; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { 
rt_int l_K_714; memset(&l_K_714, 0, sizeof l_K_714);
l_K_714 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv715 = r_MK(rt_str("rt_int", 6));
return rv715; }
}
else if ((l_K_714 == g_T_FLOAT))
{
{ R10 rv716 = r_MK(rt_str("double", 6));
return rv716; }
}
else if (((l_K_714 == g_T_STR) || (l_K_714 == g_T_BITS)))
{
{ R10 rv717 = r_MK(rt_str("rstr", 4));
return rv717; }
}
else if (((l_K_714 == g_T_REC) || (l_K_714 == g_T_ARR)))
{
{ R10 rv718 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv718; }
}
else if ((l_K_714 == g_T_ABS))
{
{ R10 rv719 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv719; }
}
else if ((l_K_714 == g_T_SEM))
{
{ R10 rv720 = r_MK(rt_str("rt_b_sem *", 10));
return rv720; }
}
else if ((l_K_714 == g_T_PATHS))
{
{ R10 rv721 = r_MK(rt_str("rt_b_paths", 10));
return rv721; }
}
else if ((l_K_714 == g_T_VOID))
{
{ R10 rv722 = r_MK(rt_str("void", 4));
return rv722; }
}
else if ((l_K_714 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_723; memset(&l_TT_723, 0, sizeof l_TT_723);
l_TT_723 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_723))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_723))).f_A == NULL)))
{
{
R12 * l_Y_724; memset(&l_Y_724, 0, sizeof l_Y_724);
l_Y_724 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_723))).f_NAME);
if ((!(l_Y_724 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_724))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_724))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_724))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_724))).f_DECL))).f_A == NULL)))
{
{ R10 rv725 = r_CATS(r_RECORD_NAME(l_Y_724), rt_str(" *", 2));
return rv725; }
}
}
}
}
}
}
}
{ R10 rv726 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv726; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { 
{ rt_int rv727 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv727; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { 
R24 * l_F_728; memset(&l_F_728, 0, sizeof l_F_728);
l_F_728 = ((R24 *)rt_alloc(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_728)), ({ R24 rc729; memset(&rc729, 0, sizeof rc729);  S_R10(&rc729.f_NAME, p_NAME, 0); S_R10(&rc729.f_CNAME, r_FMT1(rt_str("f_@", 3), p_NAME), 0); rc729.f_T = p_T; rc729.f_KIND = p_KIND; S_R10(&rc729.f_TAGF, r_NO_TEXT(), 0); rc729.f_LABELS = NULL; rc729.f_NEXT = NULL; rc729; }), 0);
{ R24 * rv730 = l_F_728;
return rv730; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { 
R24 * l_F_731; memset(&l_F_731, 0, sizeof l_F_731);
l_F_731 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_731 == NULL)) goto L_end732;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_731))).f_NAME, p_NAME))
{
{ R24 * rv733 = l_F_731;
return rv733; }
}
l_F_731 = ((*(R24 *)rt_nil_check(l_F_731))).f_NEXT;
}
} L_end732: ;
{ R24 * rv734 = NULL;
return rv734; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { 
R24 * l_P_735; memset(&l_P_735, 0, sizeof l_P_735);
l_P_735 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_736; memset(&l_N_736, 0, sizeof l_N_736);
l_N_736 = ((rt_int)0LL);
for (;;) {
if ((l_P_735 == NULL)) goto L_end737;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_735))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
l_N_736 = rt_add(l_N_736, ((rt_int)1LL));
}
l_P_735 = ((*(R24 *)rt_nil_check(l_P_735))).f_NEXT;
}
} L_end737: ;
if ((l_N_736 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_736)), 0);
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
static void r_RECORD_FIELDS(R22 * p_T, R21 * p_DECLS, R10 p_TAGN, R21 * p_LABELS, R24 * *p_TAIL) { 
R21 * l_D_738; memset(&l_D_738, 0, sizeof l_D_738);
l_D_738 = p_DECLS;
for (;;) {
if ((l_D_738 == NULL)) goto L_end739;
{
if ((((*(R21 *)rt_nil_check(l_D_738))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_740; memset(&l_FT_740, 0, sizeof l_FT_740);
l_FT_740 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_738))).f_B);
R21 * l_N_741; memset(&l_N_741, 0, sizeof l_N_741);
l_N_741 = ((*(R21 *)rt_nil_check(l_D_738))).f_A;
for (;;) {
if ((l_N_741 == NULL)) goto L_end742;
{
{
R24 * l_F_743; memset(&l_F_743, 0, sizeof l_F_743);
l_F_743 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_741))).f_NAME, l_FT_740, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_743))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_743))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_743, &(*p_TAIL));
}
l_N_741 = ((*(R21 *)rt_nil_check(l_N_741))).f_NEXT;
}
} L_end742: ;
}
}
else
{
{
R24 * l_TF_744; memset(&l_TF_744, 0, sizeof l_TF_744);
l_TF_744 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_738))).f_NAME);
R21 * l_S_745; memset(&l_S_745, 0, sizeof l_S_745);
l_S_745 = ((*(R21 *)rt_nil_check(l_D_738))).f_A;
if ((l_TF_744 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_738))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_738))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_744))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_738))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_738))).f_NAME);
}
for (;;) {
if ((l_S_745 == NULL)) goto L_end746;
{
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_745))).f_B, ((*(R21 *)rt_nil_check(l_D_738))).f_NAME, ((*(R21 *)rt_nil_check(l_S_745))).f_A, &(*p_TAIL));
l_S_745 = ((*(R21 *)rt_nil_check(l_S_745))).f_NEXT;
}
} L_end746: ;
}
}
l_D_738 = ((*(R21 *)rt_nil_check(l_D_738))).f_NEXT;
}
} L_end739: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { 
R22 * l_T_747; memset(&l_T_747, 0, sizeof l_T_747);
l_T_747 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_748; memset(&l_TAIL_748, 0, sizeof l_TAIL_748);
l_TAIL_748 = NULL;
((*(R22 *)rt_nil_check(l_T_747))).f_BASE = l_T_747;
((*(R22 *)rt_nil_check(l_T_747))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_747))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_747))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_747))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_747))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_747))).f_CNAME));
}
{
R21 * l_F_749; memset(&l_F_749, 0, sizeof l_F_749);
l_F_749 = p_FORMALS;
for (;;) {
if ((l_F_749 == NULL)) goto L_end750;
{
if ((!(((*(R21 *)rt_nil_check(l_F_749))).f_B == NULL)))
{
{
R22 * l_FT_751; memset(&l_FT_751, 0, sizeof l_FT_751);
l_FT_751 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_749))).f_B);
R21 * l_N_752; memset(&l_N_752, 0, sizeof l_N_752);
l_N_752 = ((*(R21 *)rt_nil_check(l_F_749))).f_A;
rt_int l_KIND_753; memset(&l_KIND_753, 0, sizeof l_KIND_753);
l_KIND_753 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_749))).f_IV == ((rt_int)1LL)))
{
l_KIND_753 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_751))) || (!(((*(R22 *)rt_nil_check(l_FT_751))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_749))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_752 == NULL)) goto L_end754;
{
r_ADD_FIELD(l_T_747, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_752))).f_NAME, l_FT_751, l_KIND_753), &l_TAIL_748);
l_N_752 = ((*(R21 *)rt_nil_check(l_N_752))).f_NEXT;
}
} L_end754: ;
}
}
l_F_749 = ((*(R21 *)rt_nil_check(l_F_749))).f_NEXT;
}
} L_end750: ;
}
r_RECORD_FIELDS(l_T_747, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_748);
r_COMPLETE_RECORD(l_T_747);
{ R22 * rv755 = l_T_747;
return rv755; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { 
R21 * l_D_756; memset(&l_D_756, 0, sizeof l_D_756);
l_D_756 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_757; memset(&l_CLASS_757, 0, sizeof l_CLASS_757);
l_CLASS_757 = NULL;
R20 * l_TARGS_758; memset(&l_TARGS_758, 0, sizeof l_TARGS_758);
l_TARGS_758 = NULL;
R25 * l_VARGS_759; memset(&l_VARGS_759, 0, sizeof l_VARGS_759);
l_VARGS_759 = NULL;
R25 * l_VTAIL_760; memset(&l_VTAIL_760, 0, sizeof l_VTAIL_760);
l_VTAIL_760 = NULL;
R21 * l_A_761; memset(&l_A_761, 0, sizeof l_A_761);
l_A_761 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_762; memset(&l_F_762, 0, sizeof l_F_762);
l_F_762 = ((*(R21 *)rt_nil_check(l_D_756))).f_A;
for (;;) {
if ((l_F_762 == NULL)) goto L_end763;
{
{
R21 * l_N_764; memset(&l_N_764, 0, sizeof l_N_764);
l_N_764 = ((*(R21 *)rt_nil_check(l_F_762))).f_A;
for (;;) {
if ((l_N_764 == NULL)) goto L_end765;
{
if ((l_A_761 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_762))).f_B == NULL))
{
{
R20 * l_B_766; memset(&l_B_766, 0, sizeof l_B_766);
l_B_766 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_766)), ({ R20 rc767; memset(&rc767, 0, sizeof rc767);  S_R10(&rc767.f_NAME, ((*(R21 *)rt_nil_check(l_N_764))).f_NAME, 0); rc767.f_T = r_ARG_TYPE(l_A_761); S_R10(&rc767.f_C, r_NO_TEXT(), 0); rc767.f_HASMV = 0; rc767.f_MV = ((rt_int)0LL); rc767.f_R = NULL; rc767.f_NEXT = l_TARGS_758; rc767; }), 0);
l_TARGS_758 = l_B_766;
}
}
else
{
{
R25 * l_V_768; memset(&l_V_768, 0, sizeof l_V_768);
l_V_768 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_768)), ({ R25 rc769; memset(&rc769, 0, sizeof rc769);  S_R10(&rc769.f_LO, r_NO_TEXT(), 0); S_R10(&rc769.f_HI, r_NO_TEXT(), 0); S_R23(&rc769.f_MLO, r_NO_MVAL(), 0); S_R23(&rc769.f_MHI, r_NO_MVAL(), 0); rc769.f_ANYARG = 0; rc769.f_NEXT = NULL; rc769; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_761))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_762))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_761))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_768))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_761))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_768))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_768))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_761))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_768))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_768))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_761))).f_NAME, (((*(R21 *)rt_nil_check(l_A_761))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_770; memset(&l_FT_770, 0, sizeof l_FT_770);
l_FT_770 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_762))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_768))).f_LO, (r_EXPR(l_A_761, l_FT_770)).f_C, 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_768))).f_MLO, r_ENUM_MANIFEST(l_A_761, l_FT_770), 0);
if (((((*(R21 *)rt_nil_check(l_F_762))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_768))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_761))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_760 == NULL))
{
l_VARGS_759 = l_V_768;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_760))).f_NEXT = l_V_768;
}
l_VTAIL_760 = l_V_768;
}
}
l_A_761 = ((*(R21 *)rt_nil_check(l_A_761))).f_NEXT;
l_N_764 = ((*(R21 *)rt_nil_check(l_N_764))).f_NEXT;
}
} L_end765: ;
}
l_F_762 = ((*(R21 *)rt_nil_check(l_F_762))).f_NEXT;
}
} L_end763: ;
if ((!(l_A_761 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_771; memset(&l_R_771, 0, sizeof l_R_771);
l_R_771 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_771 == NULL)) goto L_end772;
{
if (((((*(R12 *)rt_nil_check(l_R_771))).f_DECL == l_D_756) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_771))).f_BINDINGS, l_TARGS_758)))
{
l_CLASS_757 = ((*(R12 *)rt_nil_check(l_R_771))).f_T;
goto L_end772;
}
l_R_771 = ((*(R12 *)rt_nil_check(l_R_771))).f_INSTANCES;
}
} L_end772: ;
}
if ((l_CLASS_757 == NULL))
{
{
R12 * l_R_773; memset(&l_R_773, 0, sizeof l_R_773);
l_R_773 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_774; memset(&l_B_774, 0, sizeof l_B_774);
l_B_774 = l_TARGS_758;
R20 * l_SAVED_775; memset(&l_SAVED_775, 0, sizeof l_SAVED_775);
l_SAVED_775 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_776; memset(&l_ENTERED_776, 0, sizeof l_ENTERED_776);
((*(R12 *)rt_nil_check(l_R_773))).f_DECL = l_D_756;
((*(R12 *)rt_nil_check(l_R_773))).f_BINDINGS = l_TARGS_758;
((*(R12 *)rt_nil_check(l_R_773))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_773;
l_ENTERED_776 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_774 == NULL)) goto L_end777;
{
{
R12 * l_TY_778; memset(&l_TY_778, 0, sizeof l_TY_778);
l_TY_778 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_774))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_778))).f_T = ((*(R20 *)rt_nil_check(l_B_774))).f_T;
r_DEFINE(l_TY_778, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_774 = ((*(R20 *)rt_nil_check(l_B_774))).f_NEXT;
}
} L_end777: ;
l_F_762 = ((*(R21 *)rt_nil_check(l_D_756))).f_A;
for (;;) {
if ((l_F_762 == NULL)) goto L_end779;
{
if ((!(((*(R21 *)rt_nil_check(l_F_762))).f_B == NULL)))
{
{
R21 * l_N_780; memset(&l_N_780, 0, sizeof l_N_780);
l_N_780 = ((*(R21 *)rt_nil_check(l_F_762))).f_A;
for (;;) {
if ((l_N_780 == NULL)) goto L_end781;
{
{
R12 * l_P_782; memset(&l_P_782, 0, sizeof l_P_782);
l_P_782 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_780))).f_NAME);
((*(R12 *)rt_nil_check(l_P_782))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_762))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_782))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), ((*(R21 *)rt_nil_check(l_N_780))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_P_782))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_782))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_782, ((*(R21 *)rt_nil_check(l_F_762))).f_LINE);
}
l_N_780 = ((*(R21 *)rt_nil_check(l_N_780))).f_NEXT;
}
} L_end781: ;
}
}
l_F_762 = ((*(R21 *)rt_nil_check(l_F_762))).f_NEXT;
}
} L_end779: ;
if ((l_TARGS_758 == NULL))
{
l_CLASS_757 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_756))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_756))).f_A);
}
else
{
l_CLASS_757 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_756))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_756))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_757))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_773))).f_T = l_CLASS_757;
r_CLOSE_SCOPE();
if (l_ENTERED_776)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_775;
}
}
{
R22 * l_T_783; memset(&l_T_783, 0, sizeof l_T_783);
l_T_783 = r_COPY_TYP(l_CLASS_757);
((*(R22 *)rt_nil_check(l_T_783))).f_ARGS = l_VARGS_759;
{ R22 * rv784 = l_T_783;
return rv784; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { 
R20 * l_P_785; memset(&l_P_785, 0, sizeof l_P_785);
l_P_785 = p_A;
R20 * l_Q_786; memset(&l_Q_786, 0, sizeof l_Q_786);
l_Q_786 = p_B;
for (;;) {
if (((l_P_785 == NULL) || (l_Q_786 == NULL))) goto L_end787;
{
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_785))).f_T, ((*(R20 *)rt_nil_check(l_Q_786))).f_T)))
{
{ rt_int rv788 = 0;
return rv788; }
}
l_P_785 = ((*(R20 *)rt_nil_check(l_P_785))).f_NEXT;
l_Q_786 = ((*(R20 *)rt_nil_check(l_Q_786))).f_NEXT;
}
} L_end787: ;
{ rt_int rv789 = ((l_P_785 == NULL) && (l_Q_786 == NULL));
return rv789; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { 
R25 * l_A_790; memset(&l_A_790, 0, sizeof l_A_790);
l_A_790 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_790 == NULL)) goto L_end791;
{
if (((*(R25 *)rt_nil_check(l_A_790))).f_ANYARG)
{
{ rt_int rv792 = 1;
return rv792; }
}
l_A_790 = ((*(R25 *)rt_nil_check(l_A_790))).f_NEXT;
}
} L_end791: ;
{ rt_int rv793 = 0;
return rv793; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { 
R21 * l_L_794; memset(&l_L_794, 0, sizeof l_L_794);
l_L_794 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_795; memset(&l_C_795, 0, sizeof l_C_795);
S_R10(&l_C_795, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_796; memset(&l_TF_796, 0, sizeof l_TF_796);
l_TF_796 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_794 == NULL)) goto L_end797;
{
if ((((*(R21 *)rt_nil_check(l_L_794))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_795, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_795, p_SELF, ((*(R24 *)rt_nil_check(l_TF_796))).f_CNAME), 0);
S_R10(&l_C_795, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_795, (r_EXPR(((*(R21 *)rt_nil_check(l_L_794))).f_A, ((*(R24 *)rt_nil_check(l_TF_796))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_796))).f_CNAME), 0);
S_R10(&l_C_795, r_FMT2(rt_str("@@)", 3), l_C_795, (r_EXPR(((*(R21 *)rt_nil_check(l_L_794))).f_B, ((*(R24 *)rt_nil_check(l_TF_796))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_795, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_795, p_SELF, ((*(R24 *)rt_nil_check(l_TF_796))).f_CNAME, (r_EXPR(l_L_794, ((*(R24 *)rt_nil_check(l_TF_796))).f_T)).f_C), 0);
}
l_L_794 = ((*(R21 *)rt_nil_check(l_L_794))).f_NEXT;
}
} L_end797: ;
{ R10 rv798 = r_FMT1(rt_str("(@)", 3), l_C_795);
return rv798; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { 
R10 l_C_799; memset(&l_C_799, 0, sizeof l_C_799);
S_R10(&l_C_799, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_800; memset(&l_F_800, 0, sizeof l_F_800);
l_F_800 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_801; memset(&l_BODY_801, 0, sizeof l_BODY_801);
S_R10(&l_BODY_801, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_802; memset(&l_ASSIGN_802, 0, sizeof l_ASSIGN_802);
S_R10(&l_ASSIGN_802, r_MK(rt_str("", 0)), 0);
R10 l_EQ_803; memset(&l_EQ_803, 0, sizeof l_EQ_803);
S_R10(&l_EQ_803, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_800 == NULL)) goto L_end804;
{
S_R10(&l_BODY_801, r_FMT3(rt_str("@ @ @;", 6), l_BODY_801, r_CTYPE(((*(R24 *)rt_nil_check(l_F_800))).f_T), ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME), 0);
if ((((*(R24 *)rt_nil_check(l_F_800))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_802, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_802, ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_800))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_802, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_802, ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_802, r_FMT2(rt_str("@ @", 3), l_ASSIGN_802, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_800))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_800))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_803, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_803, r_VARIANT_COND(l_F_800, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_800))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_803, r_FMT2(rt_str("@ && @", 6), l_EQ_803, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_800))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_800))).f_CNAME))), 0);
}
l_F_800 = ((*(R24 *)rt_nil_check(l_F_800))).f_NEXT;
}
} L_end804: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_799, l_BODY_801));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_799, l_C_799, l_C_799));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_799, l_C_799, l_C_799));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_799, l_C_799, l_C_799, l_ASSIGN_802));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_799, l_C_799, l_C_799, l_EQ_803));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { 
R10 l_ET_C_805; memset(&l_ET_C_805, 0, sizeof l_ET_C_805);
S_R10(&l_ET_C_805, r_CTYPE(p_ELEM), 0);
R10 l_KEY_806; memset(&l_KEY_806, 0, sizeof l_KEY_806);
S_R10(&l_KEY_806, r_FMT3(rt_str("@/@/@", 5), l_ET_C_805, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_807; memset(&l_Y_807, 0, sizeof l_Y_807);
l_Y_807 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_807 == NULL)) goto L_end808;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_807))).f_NAME, l_KEY_806) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_807))).f_T, p_ELEM)))
{
{ R10 rv809 = ((*(R12 *)rt_nil_check(l_Y_807))).f_ACCESS;
return rv809; }
}
l_Y_807 = ((*(R12 *)rt_nil_check(l_Y_807))).f_INSTANCES;
}
} L_end808: ;
l_Y_807 = r_NEW_SYM(g_Y_TYPE, l_KEY_806);
((*(R12 *)rt_nil_check(l_Y_807))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_807))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_807))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_807;
{
R10 l_C_810; memset(&l_C_810, 0, sizeof l_C_810);
S_R10(&l_C_810, ((*(R12 *)rt_nil_check(l_Y_807))).f_ACCESS, 0);
R10 l_D_811; memset(&l_D_811, 0, sizeof l_D_811);
S_R10(&l_D_811, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_810, l_C_810));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_810, l_D_811, l_D_811, l_ET_C_805));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_810, l_C_810, l_C_810));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_810, l_C_810, l_C_810));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_810, l_C_810, l_C_810, l_D_811));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_811, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_810, l_C_810, l_C_810, l_D_811));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_811, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
}
{ R10 rv812 = ((*(R12 *)rt_nil_check(l_Y_807))).f_ACCESS;
return rv812; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { 
rt_int l_K_813; memset(&l_K_813, 0, sizeof l_K_813);
l_K_813 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_813 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv814 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv814; }
}
{ R10 rv815 = r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv815; }
}
else if ((l_K_813 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv816 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv816; }
}
{ R10 rv817 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv817; }
}
else if ((l_K_813 == g_T_SEM))
{
{ R10 rv818 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv818; }
}
else if ((l_K_813 == g_T_ABS))
{
{ R10 rv819 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv819; }
}
else if ((l_K_813 == g_T_ARR))
{
{
R25 * l_B_820; memset(&l_B_820, 0, sizeof l_B_820);
l_B_820 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_821; memset(&l_I_821, 0, sizeof l_I_821);
l_I_821 = ((rt_int)0LL);
R10 l_R_822; memset(&l_R_822, 0, sizeof l_R_822);
S_R10(&l_R_822, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_820 == NULL)) goto L_end823;
{
S_R10(&l_R_822, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_822, p_LV, r_NUM(l_I_821), ((*(R25 *)rt_nil_check(l_B_820))).f_LO), 0);
S_R10(&l_R_822, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_822, p_LV, r_NUM(l_I_821), ((*(R25 *)rt_nil_check(l_B_820))).f_HI), 0);
l_I_821 = rt_add(l_I_821, ((rt_int)1LL));
l_B_820 = ((*(R25 *)rt_nil_check(l_B_820))).f_NEXT;
}
} L_end823: ;
S_R10(&l_R_822, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_822, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_822, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_822, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_824; memset(&l_IV_824, 0, sizeof l_IV_824);
S_R10(&l_IV_824, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_822, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_822, l_IV_824, l_IV_824, l_IV_824), 0);
S_R10(&l_R_822, r_FMT2(rt_str("@ @ }", 5), l_R_822, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_824))), 0);
}
}
{ R10 rv825 = r_CATS(l_R_822, rt_str(" }", 2));
return rv825; }
}
}
else if ((l_K_813 == g_T_REC))
{
{
R24 * l_F_826; memset(&l_F_826, 0, sizeof l_F_826);
l_F_826 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_827; memset(&l_A_827, 0, sizeof l_A_827);
l_A_827 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_828; memset(&l_R_828, 0, sizeof l_R_828);
S_R10(&l_R_828, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_826 == NULL)) goto L_end829;
{
if ((!(((*(R24 *)rt_nil_check(l_F_826))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_827 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_827))).f_ANYARG))
{
S_R10(&l_R_828, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_828, p_LV, ((*(R24 *)rt_nil_check(l_F_826))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_827))).f_LO), 0);
}
l_A_827 = ((*(R25 *)rt_nil_check(l_A_827))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_826))).f_T))
{
S_R10(&l_R_828, r_FMT2(rt_str("@ @", 3), l_R_828, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_826))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_826))).f_CNAME)), p_LV)), 0);
}
l_F_826 = ((*(R24 *)rt_nil_check(l_F_826))).f_NEXT;
}
} L_end829: ;
{ R10 rv830 = l_R_828;
return rv830; }
}
}
{ R10 rv831 = r_NO_TEXT();
return rv831; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { 
rt_int l_K_832; memset(&l_K_832, 0, sizeof l_K_832);
l_K_832 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_832 == g_T_STR) || (l_K_832 == g_T_BITS)) || (l_K_832 == g_T_ARR)) || (l_K_832 == g_T_SEM)))
{
{ rt_int rv833 = 1;
return rv833; }
}
else if ((l_K_832 == g_T_ABS))
{
{ rt_int rv834 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv834; }
}
else if ((l_K_832 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv835 = 1;
return rv835; }
}
{
R24 * l_F_836; memset(&l_F_836, 0, sizeof l_F_836);
l_F_836 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_836 == NULL)) goto L_end837;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_836))).f_T))
{
{ rt_int rv838 = 1;
return rv838; }
}
l_F_836 = ((*(R24 *)rt_nil_check(l_F_836))).f_NEXT;
}
} L_end837: ;
}
}
{ rt_int rv839 = 0;
return rv839; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { 
rt_int l_K_840; memset(&l_K_840, 0, sizeof l_K_840);
l_K_840 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_840 == g_T_STR) || (l_K_840 == g_T_BITS)))
{
{ R10 rv841 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv841; }
}
else if ((l_K_840 == g_T_ABS))
{
{ R10 rv842 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv842; }
}
else if ((l_K_840 == g_T_SEM))
{
{ R10 rv843 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv843; }
}
else if ((l_K_840 == g_T_ARR))
{
{ R10 rv844 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv844; }
}
else if ((l_K_840 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv845 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv845; }
}
{ R10 rv846 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv846; }
}
{ R10 rv847 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv847; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { 
rt_int l_K_848; memset(&l_K_848, 0, sizeof l_K_848);
l_K_848 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_848 == g_T_STR) || (l_K_848 == g_T_BITS)))
{
{ R10 rv849 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv849; }
}
else if ((l_K_848 == g_T_ABS))
{
{ R10 rv850 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv850; }
}
else if (((l_K_848 == g_T_ARR) || (l_K_848 == g_T_REC)))
{
{ R10 rv851 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv851; }
}
else if ((l_K_848 == g_T_SEM))
{
{ R10 rv852 = r_MK(rt_str("0", 1));
return rv852; }
}
{ R10 rv853 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv853; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv854 = p_V;
return rv854; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv855 = p_V;
return rv855; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv856 = p_V;
return rv856; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
{ R10 rv857 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv857; }
}
{ R10 rv858 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv858; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { 
{ rt_int rv859 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv859; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { 
if ((p_A == p_B))
{
{ rt_int rv860 = 1;
return rv860; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv861 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv861; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv862 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv862; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv863 = 0;
return rv863; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv864 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv864; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv865 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv865; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv866 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv866; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv867 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv867; }
}
{ rt_int rv868 = 1;
return rv868; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { 
if ((p_A == p_B))
{
{ rt_int rv869 = 1;
return rv869; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv870 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv870; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv871 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv871; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv872 = 0;
return rv872; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv873 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv873; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv874 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv874; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv875 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv875; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv876 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv876; }
}
{ rt_int rv877 = 1;
return rv877; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv878 = 0;
return rv878; }
}
{ rt_int rv879 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv879; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { 
R25 * l_P_880; memset(&l_P_880, 0, sizeof l_P_880);
l_P_880 = p_A;
R25 * l_Q_881; memset(&l_Q_881, 0, sizeof l_Q_881);
l_Q_881 = p_B;
for (;;) {
if (((l_P_880 == NULL) || (l_Q_881 == NULL))) goto L_end882;
{
if ((r_IS_GEN_ARG(l_P_880) || r_IS_GEN_ARG(l_Q_881)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_880))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_881))).f_ANYARG)))
{
{ rt_int rv883 = 0;
return rv883; }
}
if (((((*(R25 *)rt_nil_check(l_P_880))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_881))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_880))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_881))).f_MLO).f_V)))
{
{ rt_int rv884 = 0;
return rv884; }
}
}
l_P_880 = ((*(R25 *)rt_nil_check(l_P_880))).f_NEXT;
l_Q_881 = ((*(R25 *)rt_nil_check(l_Q_881))).f_NEXT;
}
} L_end882: ;
{ rt_int rv885 = ((l_P_880 == NULL) && (l_Q_881 == NULL));
return rv885; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { 
R18 * l_CS_886; memset(&l_CS_886, 0, sizeof l_CS_886);
l_CS_886 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_887; memset(&l_T_887, 0, sizeof l_T_887);
rt_int l_LEV_888; memset(&l_LEV_888, 0, sizeof l_LEV_888);
if ((((*(R18 *)rt_nil_check(l_CS_886))).f_LEVEL == p_LEVEL))
{
{ R10 rv889 = r_MK(rt_str("F", 1));
return rv889; }
}
if (((*(R18 *)rt_nil_check(l_CS_886))).f_FRAMED)
{
S_R10(&l_T_887, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_887, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_888 = rt_sub(((*(R18 *)rt_nil_check(l_CS_886))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_888 <= p_LEVEL)) goto L_end890;
{
S_R10(&l_T_887, r_CATS(l_T_887, rt_str("->up", 4)), 0);
l_LEV_888 = rt_sub(l_LEV_888, ((rt_int)1LL));
}
} L_end890: ;
{ R10 rv891 = l_T_887;
return rv891; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv892 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv892; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv893 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv893; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv894 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv894; }
}
{ R10 rv895 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv895; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { 
R18 * l_CS_896; memset(&l_CS_896, 0, sizeof l_CS_896);
l_CS_896 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_897; memset(&l_T_897, 0, sizeof l_T_897);
l_T_897 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_898; memset(&l_CN_898, 0, sizeof l_CN_898);
if ((((*(R18 *)rt_nil_check(l_CS_896))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_898, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME), 0);
}
else
{
S_R10(&l_CN_898, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_897), l_CN_898));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_898, 0);
{ R10 rv899 = l_CN_898;
return rv899; }
}
S_R10(&l_CN_898, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_898, 0);
if (((*(R18 *)rt_nil_check(l_CS_896))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_897), l_CN_898), &((*(R18 *)rt_nil_check(l_CS_896))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_898), 0);
{ R10 rv900 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv900; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_897), l_CN_898, l_CN_898, l_CN_898));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_898, 0);
{ R10 rv901 = l_CN_898;
return rv901; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { 
R22 * l_T_902; memset(&l_T_902, 0, sizeof l_T_902);
l_T_902 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_903; memset(&l_N_903, 0, sizeof l_N_903);
l_N_903 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_904; memset(&l_V_904, 0, sizeof l_V_904);
rt_int l_HAVE_V_905; memset(&l_HAVE_V_905, 0, sizeof l_HAVE_V_905);
l_HAVE_V_905 = 0;
if (((((*(R22 *)rt_nil_check(l_T_902))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_902))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_903 == NULL)) goto L_end906;
{
{
R12 * l_Y_907; memset(&l_Y_907, 0, sizeof l_Y_907);
l_Y_907 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_903))).f_NAME);
R10 l_CN_908; memset(&l_CN_908, 0, sizeof l_CN_908);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_907))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_907))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_902) && (((*(R22 *)rt_nil_check(l_T_902))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_909; memset(&l_M_909, 0, sizeof l_M_909);
S_R23(&l_M_909, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_907))).f_HASMV = (l_M_909).f_OK;
((*(R12 *)rt_nil_check(l_Y_907))).f_MV = (l_M_909).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_907))).f_T = l_T_902;
S_R10(&l_CN_908, r_NEW_OBJECT(l_Y_907, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_902))
{
r_CODE(r_INIT_CODE(l_T_902, l_CN_908));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_905))
{
S_R26(&l_V_904, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_902), 0);
l_HAVE_V_905 = 1;
}
r_CODE(r_STORE_CODE(l_T_902, l_CN_908, l_V_904, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_907, ((*(R21 *)rt_nil_check(l_N_903))).f_LINE);
}
l_N_903 = ((*(R21 *)rt_nil_check(l_N_903))).f_NEXT;
}
} L_end906: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { 
{ R26 rv910 = ({ R26 rc911; memset(&rc911, 0, sizeof rc911);  S_R10(&rc911.f_C, p_C, 0); rc911.f_T = p_T; rc911.f_LVAL = 0; S_R10(&rc911.f_SELF, r_NO_TEXT(), 0); rc911; });
return rv910; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { 
{ R26 rv912 = ({ R26 rc913; memset(&rc913, 0, sizeof rc913);  S_R10(&rc913.f_C, p_C, 0); rc913.f_T = p_T; rc913.f_LVAL = p_LVAL; S_R10(&rc913.f_SELF, p_SELF, 0); rc913; });
return rv912; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { 
R22 * l_T_914; memset(&l_T_914, 0, sizeof l_T_914);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv915 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv915; }
}
l_T_914 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_914))).f_SCALE = p_SCALE;
{ R22 * rv916 = l_T_914;
return rv916; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { 
R22 * l_T_917; memset(&l_T_917, 0, sizeof l_T_917);
l_T_917 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_917))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_917))).f_MLEN, p_M, 0);
{ R22 * rv918 = l_T_917;
return rv918; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { 
rstr l_S_919; memset(&l_S_919, 0, sizeof l_S_919);
l_S_919 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_919, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_920; memset(&l_AT_920, 0, sizeof l_AT_920);
l_AT_920 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_921; memset(&l_R_921, 0, sizeof l_R_921);
S_R10(&l_R_921, r_MK(rt_str("\"", 1)), 0);
{ rt_int it923_lo = ((rt_int)0LL), it923_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it923 = it923_lo; it923 <= it923_hi; it923++) {
{
if ((rt_b_eq(rt_b_slice(l_S_919, it923, it923), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_919, it923, it923), rt_str("\\", 1))))
{
S_R10(&l_R_921, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_919, it923, it923))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_919, it923, it923), rt_str("\?", 1)))
{
S_R10(&l_R_921, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_924; memset(&l_C_924, 0, sizeof l_C_924);
l_C_924 = r_CODE_OF(rt_b_slice(l_S_919, it923, it923));
if (({ rt_int iv925 = l_C_924; (((rt_int)32LL)) <= iv925 && iv925 <= (((rt_int)126LL)); }))
{
S_R10(&l_R_921, r_MK(rt_b_slice(l_S_919, it923, it923)), 0);
}
else
{
S_R10(&l_R_921, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_924, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_924, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_924, ((rt_int)8LL))))), 0);
}
}
}
}
} } L_end922: ;
S_R10(&l_R_921, r_MK(rt_str("\"", 1)), 0);
{ R10 rv926 = ({ R10 rc927; memset(&rc927, 0, sizeof rc927);  rc927.f_AT = l_AT_920; rc927.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_920); rc927.f_H = rt_neg(((rt_int)1LL)); rc927; });
return rv926; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { 
rt_int l_K_928; memset(&l_K_928, 0, sizeof l_K_928);
l_K_928 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_929; memset(&l_NO_929, 0, sizeof l_NO_929);
S_R23(&l_NO_929, ({ R23 rc930; memset(&rc930, 0, sizeof rc930);  rc930.f_OK = 0; rc930.f_V = ((rt_int)0LL); rc930; }), 0);
if ((l_K_928 == g_N_INT))
{
{ R23 rv931 = ({ R23 rc932; memset(&rc932, 0, sizeof rc932);  rc932.f_OK = 1; rc932.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc932; });
return rv931; }
}
else if ((l_K_928 == g_N_PAREN))
{
{ R23 rv933 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv933; }
}
else if ((l_K_928 == g_N_BOOL))
{
{ R23 rv934 = ({ R23 rc935; memset(&rc935, 0, sizeof rc935);  rc935.f_OK = 1; rc935.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc935; });
return rv934; }
}
else if ((l_K_928 == g_N_UNOP))
{
{
R23 l_A_936; memset(&l_A_936, 0, sizeof l_A_936);
S_R23(&l_A_936, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
{ R23 rv937 = ({ R23 rc938; memset(&rc938, 0, sizeof rc938);  rc938.f_OK = (l_A_936).f_OK; rc938.f_V = rt_neg((l_A_936).f_V); rc938; });
return rv937; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv939 = l_A_936;
return rv939; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv940 = ({ R23 rc941; memset(&rc941, 0, sizeof rc941);  rc941.f_OK = (l_A_936).f_OK; rc941.f_V = rt_sub(((rt_int)1LL), (l_A_936).f_V); rc941; });
return rv940; }
}
}
}
else if ((l_K_928 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv942 = l_NO_929;
return rv942; }
}
{
R23 l_A_943; memset(&l_A_943, 0, sizeof l_A_943);
S_R23(&l_A_943, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_944; memset(&l_B_944, 0, sizeof l_B_944);
S_R23(&l_B_944, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_945; memset(&l_OP_945, 0, sizeof l_OP_945);
S_R10(&l_OP_945, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_945, rt_str("&", 1)) && (l_A_943).f_OK))
{
if (((l_A_943).f_V == ((rt_int)0LL)))
{
{ R23 rv946 = l_A_943;
return rv946; }
}
{ R23 rv947 = l_B_944;
return rv947; }
}
else if ((r_TEQS(l_OP_945, rt_str("!", 1)) && (l_A_943).f_OK))
{
if (((l_A_943).f_V == ((rt_int)1LL)))
{
{ R23 rv948 = l_A_943;
return rv948; }
}
{ R23 rv949 = l_B_944;
return rv949; }
}
if ((!(((l_A_943).f_OK && (l_B_944).f_OK))))
{
{ R23 rv950 = l_NO_929;
return rv950; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv951 = l_NO_929;
return rv951; }
}
if (r_TEQS(l_OP_945, rt_str("+", 1)))
{
{ R23 rv952 = ({ R23 rc953; memset(&rc953, 0, sizeof rc953);  rc953.f_OK = 1; rc953.f_V = rt_add((l_A_943).f_V, (l_B_944).f_V); rc953; });
return rv952; }
}
else if (r_TEQS(l_OP_945, rt_str("-", 1)))
{
{ R23 rv954 = ({ R23 rc955; memset(&rc955, 0, sizeof rc955);  rc955.f_OK = 1; rc955.f_V = rt_sub((l_A_943).f_V, (l_B_944).f_V); rc955; });
return rv954; }
}
else if (r_TEQS(l_OP_945, rt_str("*", 1)))
{
{ R23 rv956 = ({ R23 rc957; memset(&rc957, 0, sizeof rc957);  rc957.f_OK = 1; rc957.f_V = rt_mul((l_A_943).f_V, (l_B_944).f_V); rc957; });
return rv956; }
}
else if ((r_TEQS(l_OP_945, rt_str("//", 2)) && (!((l_B_944).f_V == ((rt_int)0LL)))))
{
{ R23 rv958 = ({ R23 rc959; memset(&rc959, 0, sizeof rc959);  rc959.f_OK = 1; rc959.f_V = rt_quot((l_A_943).f_V, (l_B_944).f_V); rc959; });
return rv958; }
}
else if ((r_TEQS(l_OP_945, rt_str("MOD", 3)) && (!((l_B_944).f_V == ((rt_int)0LL)))))
{
{ R23 rv960 = ({ R23 rc961; memset(&rc961, 0, sizeof rc961);  rc961.f_OK = 1; rc961.f_V = rt_rem((l_A_943).f_V, (l_B_944).f_V); rc961; });
return rv960; }
}
else if (r_TEQS(l_OP_945, rt_str("=", 1)))
{
{ R23 rv962 = ({ R23 rc963; memset(&rc963, 0, sizeof rc963);  rc963.f_OK = 1; rc963.f_V = r_BOOL_INT(((l_A_943).f_V == (l_B_944).f_V)); rc963; });
return rv962; }
}
else if (r_TEQS(l_OP_945, rt_str("<>", 2)))
{
{ R23 rv964 = ({ R23 rc965; memset(&rc965, 0, sizeof rc965);  rc965.f_OK = 1; rc965.f_V = r_BOOL_INT((!((l_A_943).f_V == (l_B_944).f_V))); rc965; });
return rv964; }
}
else if (r_TEQS(l_OP_945, rt_str("<", 1)))
{
{ R23 rv966 = ({ R23 rc967; memset(&rc967, 0, sizeof rc967);  rc967.f_OK = 1; rc967.f_V = r_BOOL_INT(((l_A_943).f_V < (l_B_944).f_V)); rc967; });
return rv966; }
}
else if (r_TEQS(l_OP_945, rt_str(">", 1)))
{
{ R23 rv968 = ({ R23 rc969; memset(&rc969, 0, sizeof rc969);  rc969.f_OK = 1; rc969.f_V = r_BOOL_INT(((l_A_943).f_V > (l_B_944).f_V)); rc969; });
return rv968; }
}
else if (r_TEQS(l_OP_945, rt_str("<=", 2)))
{
{ R23 rv970 = ({ R23 rc971; memset(&rc971, 0, sizeof rc971);  rc971.f_OK = 1; rc971.f_V = r_BOOL_INT(((l_A_943).f_V <= (l_B_944).f_V)); rc971; });
return rv970; }
}
else if (r_TEQS(l_OP_945, rt_str(">=", 2)))
{
{ R23 rv972 = ({ R23 rc973; memset(&rc973, 0, sizeof rc973);  rc973.f_OK = 1; rc973.f_V = r_BOOL_INT(((l_A_943).f_V >= (l_B_944).f_V)); rc973; });
return rv972; }
}
}
}
else if ((l_K_928 == g_N_IN))
{
{
R23 l_A_974; memset(&l_A_974, 0, sizeof l_A_974);
S_R23(&l_A_974, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_975; memset(&l_L_975, 0, sizeof l_L_975);
S_R23(&l_L_975, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_976; memset(&l_U_976, 0, sizeof l_U_976);
S_R23(&l_U_976, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_977; memset(&l_LO_977, 0, sizeof l_LO_977);
rt_int l_HI_978; memset(&l_HI_978, 0, sizeof l_HI_978);
if ((!(((((l_A_974).f_OK && (l_L_975).f_OK) && (l_U_976).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv979 = l_NO_929;
return rv979; }
}
l_LO_977 = (l_L_975).f_V;
l_HI_978 = (l_U_976).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_977 = rt_add(l_LO_977, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_978 = rt_sub(l_HI_978, ((rt_int)1LL));
}
{ R23 rv980 = ({ R23 rc981; memset(&rc981, 0, sizeof rc981);  rc981.f_OK = 1; rc981.f_V = r_BOOL_INT((((l_A_974).f_V >= l_LO_977) && ((l_A_974).f_V <= l_HI_978))); rc981; });
return rv980; }
}
}
else if (((l_K_928 == g_N_NAME) || (l_K_928 == g_TS_GEN)))
{
{
R12 * l_Y_982; memset(&l_Y_982, 0, sizeof l_Y_982);
l_Y_982 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_983; memset(&l_B_983, 0, sizeof l_B_983);
l_B_983 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_983 == NULL)) goto L_end984;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_983))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_983))).f_HASMV))
{
{ R23 rv985 = ({ R23 rc986; memset(&rc986, 0, sizeof rc986);  rc986.f_OK = 1; rc986.f_V = ((*(R20 *)rt_nil_check(l_B_983))).f_MV; rc986; });
return rv985; }
}
l_B_983 = ((*(R20 *)rt_nil_check(l_B_983))).f_NEXT;
}
} L_end984: ;
if ((!(l_Y_982 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_982))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_982))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_982))).f_HASMV))
{
{ R23 rv987 = ({ R23 rc988; memset(&rc988, 0, sizeof rc988);  rc988.f_OK = 1; rc988.f_V = ((*(R12 *)rt_nil_check(l_Y_982))).f_MV; rc988; });
return rv987; }
}
if ((((*(R12 *)rt_nil_check(l_Y_982))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv989 = ({ R23 rc990; memset(&rc990, 0, sizeof rc990);  rc990.f_OK = 1; rc990.f_V = ((*(R12 *)rt_nil_check(l_Y_982))).f_MV; rc990; });
return rv989; }
}
}
}
}
}
else if ((l_K_928 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv991 = ({ R23 rc992; memset(&rc992, 0, sizeof rc992);  rc992.f_OK = 1; rc992.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc992; });
return rv991; }
}
}
else if ((l_K_928 == g_N_FIELD))
{
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SCALE", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RADIX", 5)))) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_993; memset(&l_Y_993, 0, sizeof l_Y_993);
l_Y_993 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_993 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_993))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_993))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_993))).f_KIND == g_Y_TYPE))) && (!(((*(R12 *)rt_nil_check(l_Y_993))).f_T == NULL))))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_993))).f_T)))).f_KIND == g_T_INT))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RADIX", 5)))
{
{ R23 rv994 = ({ R23 rc995; memset(&rc995, 0, sizeof rc995);  rc995.f_OK = 1; rc995.f_V = ((rt_int)2LL); rc995; });
return rv994; }
}
{ R23 rv996 = ({ R23 rc997; memset(&rc997, 0, sizeof rc997);  rc997.f_OK = 1; rc997.f_V = ((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_993))).f_T)))).f_SCALE; rc997; });
return rv996; }
}
}
}
}
}
}
else if ((l_K_928 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv998 = ({ R23 rc999; memset(&rc999, 0, sizeof rc999);  rc999.f_OK = 1; rc999.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc999; });
return rv998; }
}
}
{ R23 rv1000 = l_NO_929;
return rv1000; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { 
{ rt_int rv1001 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1001; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { 
if (p_B)
{
{ rt_int rv1002 = ((rt_int)1LL);
return rv1002; }
}
{ rt_int rv1003 = ((rt_int)0LL);
return rv1003; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { 
rt_int l_K_1004; memset(&l_K_1004, 0, sizeof l_K_1004);
l_K_1004 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1004 == g_N_INT))
{
{ R26 rv1005 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1005; }
}
else if ((l_K_1004 == g_N_REAL))
{
{ R26 rv1006 = r_REAL_LITERAL(p_E);
return rv1006; }
}
else if ((l_K_1004 == g_N_BOOL))
{
{ R26 rv1007 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1007; }
}
else if ((l_K_1004 == g_N_NIL))
{
{ R26 rv1008 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1008; }
}
else if ((l_K_1004 == g_N_PAREN))
{
{
R26 l_V_1009; memset(&l_V_1009, 0, sizeof l_V_1009);
S_R26(&l_V_1009, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1009).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1009).f_C), 0);
{ R26 rv1010 = l_V_1009;
return rv1010; }
}
}
else if ((l_K_1004 == g_N_STR))
{
{ R26 rv1011 = r_STRING_LITERAL(p_E);
return rv1011; }
}
else if ((l_K_1004 == g_N_BITS))
{
{ R26 rv1012 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1012; }
}
else if ((l_K_1004 == g_N_ENUMLIT))
{
{ R26 rv1013 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1013; }
}
else if ((l_K_1004 == g_N_RECCONS))
{
{ R26 rv1014 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1014; }
}
else if ((l_K_1004 == g_N_ARRCONS))
{
{ R26 rv1015 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1015; }
}
else if ((l_K_1004 == g_N_TYPESPEC))
{
{ R26 rv1016 = r_TYPE_SPECIFIER(p_E);
return rv1016; }
}
else if ((l_K_1004 == g_N_QUAL))
{
{
rt_int l_SAVED_1017; memset(&l_SAVED_1017, 0, sizeof l_SAVED_1017);
l_SAVED_1017 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1018; memset(&l_V_1018, 0, sizeof l_V_1018);
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
S_R26(&l_V_1018, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1017;
{ R26 rv1019 = l_V_1018;
return rv1019; }
}
}
else if ((l_K_1004 == g_N_NEW))
{
{ R26 rv1020 = r_NEW_EXPR(p_E, p_WANT);
return rv1020; }
}
else if ((l_K_1004 == g_N_NAME))
{
{ R26 rv1021 = r_NAME_EXPR(p_E, p_WANT);
return rv1021; }
}
else if ((l_K_1004 == g_N_APPLY))
{
{
R12 * l_Y_1022; memset(&l_Y_1022, 0, sizeof l_Y_1022);
l_Y_1022 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1022 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1022))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1022))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1023; memset(&l_N_1023, 0, sizeof l_N_1023);
l_N_1023 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1024; memset(&l_A_1024, 0, sizeof l_A_1024);
l_A_1024 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1024))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1023))).f_A = l_A_1024;
((*(R21 *)rt_nil_check(l_N_1023))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1025 = r_EXPR(l_N_1023, p_WANT);
return rv1025; }
}
}
}
{ R26 rv1026 = r_CALL_EXPR(p_E, p_WANT);
return rv1026; }
}
}
else if ((l_K_1004 == g_N_FIELD))
{
{ R26 rv1027 = r_FIELD_EXPR(p_E);
return rv1027; }
}
else if ((l_K_1004 == g_N_DEREF))
{
{
R26 l_B_1028; memset(&l_B_1028, 0, sizeof l_B_1028);
S_R26(&l_B_1028, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1028).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1029; memset(&l_TT_1029, 0, sizeof l_TT_1029);
l_TT_1029 = r_TARGET((l_B_1028).f_T);
{ R26 rv1030 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1029), (l_B_1028).f_C), l_TT_1029, 1, r_NO_TEXT());
return rv1030; }
}
}
}
else if ((l_K_1004 == g_N_INDEX))
{
{ R26 rv1031 = r_INDEX_EXPR(p_E);
return rv1031; }
}
else if ((l_K_1004 == g_N_SUBSTR))
{
{
R26 l_B_1032; memset(&l_B_1032, 0, sizeof l_B_1032);
S_R26(&l_B_1032, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1033; memset(&l_BT_1033, 0, sizeof l_BT_1033);
l_BT_1033 = r_REAL_TYPE((l_B_1032).f_T);
R10 l_LO_1034; memset(&l_LO_1034, 0, sizeof l_LO_1034);
R10 l_HI_1035; memset(&l_HI_1035, 0, sizeof l_HI_1035);
if ((!(((((*(R22 *)rt_nil_check(l_BT_1033))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1033))).f_KIND == g_T_BITS)))))
{
if ((((*(R22 *)rt_nil_check((l_B_1032).f_T))).f_KIND == g_T_ABS))
{
{ R26 rv1036 = r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_1032, ((*(R21 *)rt_nil_check(p_E))).f_B, ((*(R21 *)rt_nil_check(p_E))).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1036; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1034, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1035, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1033))).f_KIND == g_T_BITS))
{
{ R26 rv1037 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1032).f_C, l_LO_1034, l_HI_1035), r_BITS_TYPE(((rt_int)1LL)));
return rv1037; }
}
{
R22 * l_T_1038; memset(&l_T_1038, 0, sizeof l_T_1038);
l_T_1038 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1038))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1033))).f_BASE;
{ R26 rv1039 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1032).f_C, l_LO_1034, l_HI_1035), l_T_1038);
return rv1039; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1033))).f_KIND == g_T_BITS))
{
{ R26 rv1040 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1032).f_C, l_LO_1034, l_HI_1035), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1040; }
}
{
R22 * l_T_1041; memset(&l_T_1041, 0, sizeof l_T_1041);
l_T_1041 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1041))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1033))).f_BASE;
{ R26 rv1042 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1032).f_C, l_LO_1034, l_HI_1035), l_T_1041);
return rv1042; }
}
}
}
else if ((l_K_1004 == g_N_UNOP))
{
{ R26 rv1043 = r_UNARY(p_E);
return rv1043; }
}
else if ((l_K_1004 == g_N_BINOP))
{
{ R26 rv1044 = r_BINARY(p_E);
return rv1044; }
}
else if ((l_K_1004 == g_N_IN))
{
{ R26 rv1045 = r_IN_EXPR(p_E);
return rv1045; }
}
else if (((l_K_1004 == g_N_ANY) || (l_K_1004 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((((((l_K_1004 == g_TS_NAME) || (l_K_1004 == g_TS_ARRAY)) || (l_K_1004 == g_TS_RECORD)) || (l_K_1004 == g_TS_ENUM)) || (l_K_1004 == g_TS_GEN)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { 
rt_int l_SAVED_1046; memset(&l_SAVED_1046, 0, sizeof l_SAVED_1046);
l_SAVED_1046 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1047; memset(&l_V_1047, 0, sizeof l_V_1047);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R26(&l_V_1047, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1046;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1047).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1048 = (l_V_1047).f_C;
return rv1048; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1047).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1047).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1047).f_T));
}
{ R10 rv1049 = (l_V_1047).f_C;
return rv1049; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { 
R26 l_V_1050; memset(&l_V_1050, 0, sizeof l_V_1050);
S_R26(&l_V_1050, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1050).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1050).f_T));
}
{ R10 rv1051 = (l_V_1050).f_C;
return rv1051; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { 
R22 * l_T_1052; memset(&l_T_1052, 0, sizeof l_T_1052);
l_T_1052 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1052))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1052))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1053 = l_T_1052;
return rv1053; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { 
R10 l_T_1054; memset(&l_T_1054, 0, sizeof l_T_1054);
S_R10(&l_T_1054, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1055; memset(&l_S_1055, 0, sizeof l_S_1055);
l_S_1055 = rt_str_new((l_T_1054).f_LEN);
rt_b_assign(&l_S_1055, r_STR(l_T_1054, (l_T_1054).f_LEN));
rt_int l_POINT_1056; memset(&l_POINT_1056, 0, sizeof l_POINT_1056);
l_POINT_1056 = 0;
rt_int l_DIGITS_1057; memset(&l_DIGITS_1057, 0, sizeof l_DIGITS_1057);
l_DIGITS_1057 = ((rt_int)0LL);
{ rt_int it1059_lo = ((rt_int)0LL), it1059_hi = rt_sub((l_T_1054).f_LEN, ((rt_int)1LL));
for (rt_int it1059 = it1059_lo; it1059 <= it1059_hi; it1059++) {
{
if (rt_b_eq(rt_b_slice(l_S_1055, it1059, it1059), rt_str(".", 1)))
{
l_POINT_1056 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1055, it1059, it1059), rt_str("E", 1)))
{
goto L_end1058;
}
else
{
l_DIGITS_1057 = rt_add(l_DIGITS_1057, ((rt_int)1LL));
}
}
} } L_end1058: ;
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1060 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1054), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1060; }
}
if ((!l_POINT_1056))
{
{ R26 rv1061 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1054)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1061; }
}
{
R22 * l_F_1062; memset(&l_F_1062, 0, sizeof l_F_1062);
l_F_1062 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_F_1062))).f_SCALE = l_DIGITS_1057;
if ((l_DIGITS_1057 > ((rt_int)15LL)))
{
((*(R22 *)rt_nil_check(l_F_1062))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_1057 < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1062))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_1055, rt_sub((l_T_1054).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1054).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
{ R26 rv1063 = r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_1054), l_F_1062);
return rv1063; }
}
if (rt_b_eq(rt_b_slice(l_S_1055, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
{ R26 rv1064 = r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_1054), l_F_1062);
return rv1064; }
}
{ R26 rv1065 = r_MKET(r_FMT1(rt_str("(@)", 3), l_T_1054), l_F_1062);
return rv1065; }
}
rt_raise(RT_X_INIT);
}
static R26 r_STRING_LITERAL(R21 * p_E) { 
rt_int l_AT_1066; memset(&l_AT_1066, 0, sizeof l_AT_1066);
l_AT_1066 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R22 * l_CS_1067; memset(&l_CS_1067, 0, sizeof l_CS_1067);
l_CS_1067 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1068; memset(&l_P_1068, 0, sizeof l_P_1068);
l_P_1068 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_R_1069; memset(&l_R_1069, 0, sizeof l_R_1069);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1070; memset(&l_Y_1070, 0, sizeof l_Y_1070);
l_Y_1070 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1070 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1070))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1067 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(l_CS_1067))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1068 == NULL)) goto L_end1071;
{
if ((((*(R21 *)rt_nil_check(l_P_1068))).f_IV == g_K_STR))
{
if ((l_CS_1067 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_R_1069, r_MK(r_STR(((*(R21 *)rt_nil_check(l_P_1068))).f_NAME, (((*(R21 *)rt_nil_check(l_P_1068))).f_NAME).f_LEN)), 0);
}
else
{
{
R10 l_Q_1072; memset(&l_Q_1072, 0, sizeof l_Q_1072);
S_R10(&l_Q_1072, ((*(R21 *)rt_nil_check(l_P_1068))).f_NAME, 0);
rstr l_QS_1073; memset(&l_QS_1073, 0, sizeof l_QS_1073);
l_QS_1073 = rt_str_new((l_Q_1072).f_LEN);
rt_b_assign(&l_QS_1073, r_STR(l_Q_1072, (l_Q_1072).f_LEN));
{ rt_int it1075_lo = ((rt_int)0LL), it1075_hi = rt_sub((l_Q_1072).f_LEN, ((rt_int)1LL));
for (rt_int it1075 = it1075_lo; it1075 <= it1075_hi; it1075++) {
{
{
R12 * l_Y_1076; memset(&l_Y_1076, 0, sizeof l_Y_1076);
l_Y_1076 = r_FIND_LITERAL(r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1073, it1075, it1075)), rt_str("'", 1))), l_CS_1067);
if ((l_Y_1076 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1068))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1073, it1075, it1075)));
}
S_R10(&l_R_1069, r_MK(r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1076))).f_MV)), 0);
}
}
} } L_end1074: ;
}
}
}
else
{
{
R12 * l_Y_1077; memset(&l_Y_1077, 0, sizeof l_Y_1077);
l_Y_1077 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1068))).f_NAME, l_CS_1067);
if ((l_Y_1077 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1068))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1068))).f_NAME);
}
S_R10(&l_R_1069, r_MK(r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1077))).f_MV)), 0);
}
}
l_P_1068 = ((*(R21 *)rt_nil_check(l_P_1068))).f_NEXT;
}
} L_end1071: ;
{
R10 l_S_1078; memset(&l_S_1078, 0, sizeof l_S_1078);
S_R10(&l_S_1078, ({ R10 rc1079; memset(&rc1079, 0, sizeof rc1079);  rc1079.f_AT = l_AT_1066; rc1079.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1066); rc1079.f_H = rt_neg(((rt_int)1LL)); rc1079; }), 0);
R22 * l_T_1080; memset(&l_T_1080, 0, sizeof l_T_1080);
l_T_1080 = r_STR_TYPE(r_NUM((l_S_1078).f_LEN), r_SOME((l_S_1078).f_LEN));
((*(R22 *)rt_nil_check(l_T_1080))).f_BASE = l_CS_1067;
{ R26 rv1081 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1078), r_NUM((l_S_1078).f_LEN)), l_T_1080);
return rv1081; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { 
R21 * l_TS_1082; memset(&l_TS_1082, 0, sizeof l_TS_1082);
l_TS_1082 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1082))).f_NAME, p_NAME, 0);
{ R22 * rv1083 = r_RESOLVE(l_TS_1082);
return rv1083; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { 
R12 * l_Y_1084; memset(&l_Y_1084, 0, sizeof l_Y_1084);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1085; memset(&l_WT_1085, 0, sizeof l_WT_1085);
l_WT_1085 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1085))).f_KIND == g_T_ENUM))
{
l_Y_1084 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1085);
if ((!(l_Y_1084 == NULL)))
{
{ R26 rv1086 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1084))).f_MV), r_ENUM_RESULT(l_Y_1084, p_WANT));
return rv1086; }
}
}
}
}
l_Y_1084 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1087; memset(&l_FOUND_1087, 0, sizeof l_FOUND_1087);
l_FOUND_1087 = NULL;
rt_int l_N_1088; memset(&l_N_1088, 0, sizeof l_N_1088);
l_N_1088 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1084 == NULL)) goto L_end1089;
{
if ((((*(R12 *)rt_nil_check(l_Y_1084))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1084))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1087 == NULL)))
{
if (((l_FOUND_1087 == NULL) || (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1087))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1087 = l_Y_1084;
}
else
{
l_N_1088 = rt_add(l_N_1088, ((rt_int)1LL));
}
}
}
l_Y_1084 = r_LOOKUP_NEXT(l_Y_1084);
}
} L_end1089: ;
if ((l_FOUND_1087 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1088 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1090 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1087))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1087))).f_T);
return rv1090; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1091 = p_WANT;
return rv1091; }
}
{ R22 * rv1092 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1092; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { 
R12 * l_Y_1093; memset(&l_Y_1093, 0, sizeof l_Y_1093);
l_Y_1093 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1093 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1093))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1093))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1094; memset(&l_WRITABLE_1094, 0, sizeof l_WRITABLE_1094);
l_WRITABLE_1094 = r_CHECK_IMPORTED(l_Y_1093, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1095 = r_MKLV(r_OBJ_ACCESS(l_Y_1093), ((*(R12 *)rt_nil_check(l_Y_1093))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1093))).f_KIND == g_Y_VAR) && l_WRITABLE_1094), r_NO_TEXT());
return rv1095; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1093))).f_KIND == g_Y_GEN))
{
{ R26 rv1096 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1093))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1093))).f_T);
return rv1096; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1093))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1097 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1097; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1093))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1093))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1098; memset(&l_N_1098, 0, sizeof l_N_1098);
l_N_1098 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1098))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1099 = r_CALL_EXPR(l_N_1098, p_WANT);
return rv1099; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { 
R21 * l_A_1100; memset(&l_A_1100, 0, sizeof l_A_1100);
l_A_1100 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((*(R21 *)rt_nil_check(l_A_1100))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1100))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1100))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1101; memset(&l_B_1101, 0, sizeof l_B_1101);
S_R26(&l_B_1101, r_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1100))).f_A))).f_A, NULL), 0);
R10 l_I_1102; memset(&l_I_1102, 0, sizeof l_I_1102);
S_R10(&l_I_1102, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1100))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1101).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1103 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1101).f_C, l_I_1102, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1101).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1103; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1104 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1101).f_C, l_I_1102, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1101).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1104; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1100))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1100))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1100))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1100))).f_A))).f_A))).f_NAME))
{
{ R26 rv1105 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1100))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1100))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1105; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1100))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1106; memset(&l_Y_1106, 0, sizeof l_Y_1106);
l_Y_1106 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1100))).f_NAME);
if ((!(l_Y_1106 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1106))).f_KIND == g_Y_TYPE))
{
{ R26 rv1107 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1100))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1107; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1100))).f_NAME))
{
{ R26 rv1108 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1100))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1108; }
}
}
}
{
R26 l_B_1109; memset(&l_B_1109, 0, sizeof l_B_1109);
S_R26(&l_B_1109, r_EXPR(l_A_1100, NULL), 0);
R22 * l_BT_1110; memset(&l_BT_1110, 0, sizeof l_BT_1110);
l_BT_1110 = (l_B_1109).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1110))).f_KIND == g_T_REC))
{
{
R24 * l_F_1111; memset(&l_F_1111, 0, sizeof l_F_1111);
l_F_1111 = r_FIND_FIELD(l_BT_1110, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1111 == NULL)))
{
r_CHECK_VARIANT(l_F_1111, l_BT_1110, l_A_1100, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1112 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1109).f_C, ((*(R24 *)rt_nil_check(l_F_1111))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1111))).f_T, ((l_B_1109).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1111))).f_KIND == ((rt_int)0LL))), (l_B_1109).f_C);
return rv1112; }
}
}
}
{ R26 rv1113 = r_ATTRIBUTE(l_B_1109, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1113; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { 
{ rt_int rv1114 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1114; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1115; memset(&l_TAGV_1115, 0, sizeof l_TAGV_1115);
S_R23(&l_TAGV_1115, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1115).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1115).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { 
R24 * l_F_1116; memset(&l_F_1116, 0, sizeof l_F_1116);
l_F_1116 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1117; memset(&l_A_1117, 0, sizeof l_A_1117);
l_A_1117 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1116 == NULL)) goto L_end1118;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1116))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1117 == NULL))
{
{ R23 rv1119 = r_NO_MVAL();
return rv1119; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1116))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1117))).f_ANYARG)
{
{ R23 rv1120 = r_NO_MVAL();
return rv1120; }
}
{ R23 rv1121 = ((*(R25 *)rt_nil_check(l_A_1117))).f_MLO;
return rv1121; }
}
l_A_1117 = ((*(R25 *)rt_nil_check(l_A_1117))).f_NEXT;
}
l_F_1116 = ((*(R24 *)rt_nil_check(l_F_1116))).f_NEXT;
}
} L_end1118: ;
{ R23 rv1122 = r_NO_MVAL();
return rv1122; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { 
R21 * l_P_1123; memset(&l_P_1123, 0, sizeof l_P_1123);
l_P_1123 = p_L;
for (;;) {
if ((l_P_1123 == NULL)) goto L_end1124;
{
if ((((*(R21 *)rt_nil_check(l_P_1123))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1123))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1123))).f_B, p_T)).f_V)))
{
{ rt_int rv1125 = 1;
return rv1125; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1123, p_T)).f_V == p_V))
{
{ rt_int rv1126 = 1;
return rv1126; }
}
l_P_1123 = ((*(R21 *)rt_nil_check(l_P_1123))).f_NEXT;
}
} L_end1124: ;
{ rt_int rv1127 = 0;
return rv1127; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1128; memset(&l_A_1128, 0, sizeof l_A_1128);
S_R26(&l_A_1128, r_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A, NULL), 0);
R10 l_I_1129; memset(&l_I_1129, 0, sizeof l_I_1129);
S_R10(&l_I_1129, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1128).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1130 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1128).f_C, (l_A_1128).f_C, l_I_1129, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1128).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1130; }
}
}
}
{ R26 rv1131 = r_INDEX_EXPR2(p_E);
return rv1131; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { 
R26 l_B_1132; memset(&l_B_1132, 0, sizeof l_B_1132);
S_R26(&l_B_1132, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1133; memset(&l_T_1133, 0, sizeof l_T_1133);
l_T_1133 = r_REAL_TYPE((l_B_1132).f_T);
R21 * l_S_1134; memset(&l_S_1134, 0, sizeof l_S_1134);
l_S_1134 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1135; memset(&l_IX_1135, 0, sizeof l_IX_1135);
S_R10(&l_IX_1135, r_MK(rt_str("", 0)), 0);
rt_int l_N_1136; memset(&l_N_1136, 0, sizeof l_N_1136);
l_N_1136 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1133))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1134 == NULL)) goto L_end1137;
{
if ((l_N_1136 > ((rt_int)0LL)))
{
S_R10(&l_IX_1135, r_CATS(l_IX_1135, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1135, r_CAT(l_IX_1135, r_INT_EXPR(l_S_1134)), 0);
l_N_1136 = rt_add(l_N_1136, ((rt_int)1LL));
l_S_1134 = ((*(R21 *)rt_nil_check(l_S_1134))).f_NEXT;
}
} L_end1137: ;
if ((!(l_N_1136 == ((*(R22 *)rt_nil_check(l_T_1133))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1136 == ((rt_int)1LL)))
{
{ R26 rv1138 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1132).f_C, l_IX_1135, (l_B_1132).f_C, (l_B_1132).f_C), ((*(R22 *)rt_nil_check(l_T_1133))).f_ELEM, (l_B_1132).f_LVAL, r_NO_TEXT());
return rv1138; }
}
{
R10 l_X_1139; memset(&l_X_1139, 0, sizeof l_X_1139);
S_R10(&l_X_1139, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1132).f_C, r_NUM(l_N_1136), (l_B_1132).f_C, (l_B_1132).f_C), 0);
{ R26 rv1140 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1139, l_IX_1135), ((*(R22 *)rt_nil_check(l_T_1133))).f_ELEM, (l_B_1132).f_LVAL, r_NO_TEXT());
return rv1140; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1141 = r_MKN(rt_str("NEGATE_", 7));
return rv1141; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1142 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1142; }
}
{ R10 rv1143 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1143; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1144 = r_MKN(rt_str("ADD_", 4));
return rv1144; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1145 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1145; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1146 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1146; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1147 = r_MKN(rt_str("DIVIDE_", 7));
return rv1147; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1148 = r_MKN(rt_str("MODULUS_", 8));
return rv1148; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1149 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1149; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1150 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1150; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1151 = r_MKN(rt_str("EQUAL_", 6));
return rv1151; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1152 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1152; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1153 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1153; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1154 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1154; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1155 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1155; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1156 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1156; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1157 = r_MKN(rt_str("AND_", 4));
return rv1157; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1158 = r_MKN(rt_str("OR_", 3));
return rv1158; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1159 = r_MKN(rt_str("XOR_", 4));
return rv1159; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1160 = r_MKN(rt_str("IMPLIES_", 8));
return rv1160; }
}
{ R10 rv1161 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1161; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { 
R27 * l_A_1162; memset(&l_A_1162, 0, sizeof l_A_1162);
l_A_1162 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1162)), ({ R27 rc1163; memset(&rc1163, 0, sizeof rc1163);  rc1163.f_E = NULL; S_R26(&rc1163.f_V, p_V, 0); rc1163.f_HAVE = 1; rc1163.f_MODE = g_M_IN; rc1163.f_NEXT = p_NEXT; rc1163; }), 0);
{ R27 * rv1164 = l_A_1162;
return rv1164; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { 
R27 * l_A_1165; memset(&l_A_1165, 0, sizeof l_A_1165);
l_A_1165 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1165)), ({ R27 rc1166; memset(&rc1166, 0, sizeof rc1166);  rc1166.f_E = p_E; S_R26(&rc1166.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1166.f_HAVE = 0; rc1166.f_MODE = p_MODE; rc1166.f_NEXT = p_NEXT; rc1166; }), 0);
{ R27 * rv1167 = l_A_1165;
return rv1167; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { 
R12 * l_Y_1168; memset(&l_Y_1168, 0, sizeof l_Y_1168);
l_Y_1168 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1168 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1168 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1169 = l_Y_1168;
return rv1169; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { 
R27 * l_ARGS_1170; memset(&l_ARGS_1170, 0, sizeof l_ARGS_1170);
l_ARGS_1170 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1171; memset(&l_Y_1171, 0, sizeof l_Y_1171);
l_Y_1171 = r_USER_OPERATOR(p_NAME, l_ARGS_1170, p_LINE);
if ((l_Y_1171 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1172 = r_CALL_SYM(l_Y_1171, l_ARGS_1170, p_LINE);
return rv1172; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_MACHINE(rt_int p_LINE) { 
if ((!((*(R7 *)rt_nil_check(g_W))).f_MACHINE))
{
r_FAIL(p_LINE, rt_str("this is only permitted in a machine-dependent part (4.5.5.2)", 60));
}
}
static R10 r_RESCALE_C(R10 p_C, rt_int p_SFROM, rt_int p_STO) { 
if ((p_SFROM == p_STO))
{
{ R10 rv1173 = p_C;
return rv1173; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1174 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1174; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1175 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1175; }
}
{ R10 rv1176 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1176; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1177 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1177; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { 
R22 * l_RT_1178; memset(&l_RT_1178, 0, sizeof l_RT_1178);
l_RT_1178 = r_REAL_TYPE(p_T);
R22 * l_VT_1179; memset(&l_VT_1179, 0, sizeof l_VT_1179);
l_VT_1179 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1179))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_PTR)))
{
{ R10 rv1180 = (p_V).f_C;
return rv1180; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1179))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1179)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1181 = (p_V).f_C;
return rv1181; }
}
if ((!r_SAME_CLASS(l_RT_1178, l_VT_1179)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1179), (r_TYPE_NAME(l_VT_1179)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1178), (r_TYPE_NAME(l_RT_1178)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_INT))
{
{ R10 rv1182 = r_RANGE_CHECK(l_RT_1178, r_RESCALE(p_V, ((*(R22 *)rt_nil_check(l_RT_1178))).f_SCALE, p_LINE), p_SELF);
return rv1182; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_FLOAT) || (((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_ENUM)))
{
{ R10 rv1183 = r_RANGE_CHECK(l_RT_1178, (p_V).f_C, p_SELF);
return rv1183; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RT_1178))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1179))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1178))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1179))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1178), r_TARGET(l_VT_1179))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1178)) && (!r_HAS_ANY(l_VT_1179))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1178))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1179))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1178))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1178))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1179))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1184 = (p_V).f_C;
return rv1184; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1185; memset(&l_ARGS_1185, 0, sizeof l_ARGS_1185);
l_ARGS_1185 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1186; memset(&l_Y_1186, 0, sizeof l_Y_1186);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1185))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1186 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1185, p_LINE, 0);
if ((l_Y_1186 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1185))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1186 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1185, p_LINE, 0);
}
if ((l_Y_1186 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1187 = r_CATS((r_CALL_SYM(l_Y_1186, l_ARGS_1185, p_LINE)).f_C, rt_str(";", 1));
return rv1187; }
}
}
{ R10 rv1188 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1188; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { 
R26 l_A_1189; memset(&l_A_1189, 0, sizeof l_A_1189);
S_R26(&l_A_1189, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1190; memset(&l_T_1190, 0, sizeof l_T_1190);
l_T_1190 = (l_A_1189).f_T;
R10 l_OP_1191; memset(&l_OP_1191, 0, sizeof l_OP_1191);
S_R10(&l_OP_1191, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R22 *)rt_nil_check(l_T_1190))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1192; memset(&l_ARGS_1192, 0, sizeof l_ARGS_1192);
l_ARGS_1192 = r_VAL_ARG(l_A_1189, NULL);
R12 * l_Y_1193; memset(&l_Y_1193, 0, sizeof l_Y_1193);
l_Y_1193 = r_USER_OPERATOR(r_OP_NAME(l_OP_1191, 1), l_ARGS_1192, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_1193 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1190));
}
{ R26 rv1194 = r_CALL_SYM(l_Y_1193, l_ARGS_1192, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1194; }
}
}
if (r_TEQS(l_OP_1191, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1190))).f_KIND == g_T_BOOL))
{
{ R26 rv1195 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1189).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1195; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1190))).f_KIND == g_T_BITS))
{
{ R26 rv1196 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1189).f_C), l_T_1190);
return rv1196; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1190))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1191, rt_str("-", 1)))
{
{ R26 rv1197 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1189).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1190))).f_SCALE));
return rv1197; }
}
{ R26 rv1198 = r_MKET((l_A_1189).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1190))).f_SCALE));
return rv1198; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1190))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_1191, rt_str("-", 1)))
{
{ R26 rv1199 = r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_1189).f_C), l_T_1190);
return rv1199; }
}
{ R26 rv1200 = l_A_1189;
return rv1200; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1190));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { 
{ rt_int rv1201 = (((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1201; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { 
R10 l_OP_1202; memset(&l_OP_1202, 0, sizeof l_OP_1202);
S_R10(&l_OP_1202, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1203; memset(&l_A_1203, 0, sizeof l_A_1203);
R26 l_B_1204; memset(&l_B_1204, 0, sizeof l_B_1204);
if ((r_TEQS(l_OP_1202, rt_str("&", 1)) || r_TEQS(l_OP_1202, rt_str("!", 1))))
{
{
R23 l_MA_1205; memset(&l_MA_1205, 0, sizeof l_MA_1205);
S_R23(&l_MA_1205, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1206; memset(&l_CA_1206, 0, sizeof l_CA_1206);
S_R10(&l_CA_1206, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1207; memset(&l_CB_1207, 0, sizeof l_CB_1207);
S_R10(&l_CB_1207, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1202, rt_str("&", 1)))
{
{ R26 rv1208 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1206, l_CB_1207), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1208; }
}
{ R26 rv1209 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1206, l_CB_1207), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1209; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1204, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1203, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1204).f_T), 0);
}
else
{
S_R26(&l_A_1203, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1204, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1203).f_T), 0);
}
{ R26 rv1210 = r_APPLY_OPERATOR(p_E, l_OP_1202, l_A_1203, l_B_1204);
return rv1210; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { 
R22 * l_AT_1211; memset(&l_AT_1211, 0, sizeof l_AT_1211);
l_AT_1211 = (p_A).f_T;
R22 * l_BT_1212; memset(&l_BT_1212, 0, sizeof l_BT_1212);
l_BT_1212 = (p_B).f_T;
rt_int l_LINE_1213; memset(&l_LINE_1213, 0, sizeof l_LINE_1213);
l_LINE_1213 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R10 l_NAME_1214; memset(&l_NAME_1214, 0, sizeof l_NAME_1214);
S_R10(&l_NAME_1214, r_OP_NAME(p_OP, 0), 0);
if (((((!(r_LOOKUP(l_NAME_1214) == NULL)) || (!(r_LOOKUP(r_MKN(rt_b_slice(r_STR(l_NAME_1214, (l_NAME_1214).f_LEN), ((rt_int)0LL), rt_sub((l_NAME_1214).f_LEN, ((rt_int)2LL))))) == NULL))) || (((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1215; memset(&l_ARGS_1215, 0, sizeof l_ARGS_1215);
l_ARGS_1215 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R12 * l_Y_1216; memset(&l_Y_1216, 0, sizeof l_Y_1216);
l_Y_1216 = r_USER_OPERATOR(l_NAME_1214, l_ARGS_1215, l_LINE_1213);
if ((!(l_Y_1216 == NULL)))
{
{ R26 rv1217 = r_CALL_SYM(l_Y_1216, l_ARGS_1215, l_LINE_1213);
return rv1217; }
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R12 * l_Q_1218; memset(&l_Q_1218, 0, sizeof l_Q_1218);
l_Q_1218 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1215, l_LINE_1213);
if ((!(l_Q_1218 == NULL)))
{
{ R26 rv1219 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1218, l_ARGS_1215, l_LINE_1213)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1219; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1213, rt_str("no such operation for the abstract type: ", 41), l_NAME_1214);
}
}
}
}
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1220 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1220; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1221 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1221; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_INT)))
{
{
rt_int l_S_1222; memset(&l_S_1222, 0, sizeof l_S_1222);
l_S_1222 = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1211))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1212))).f_SCALE);
{ R26 rv1223 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), r_RESCALE_C((p_A).f_C, ((*(R22 *)rt_nil_check(l_AT_1211))).f_SCALE, l_S_1222), p_OP, r_RESCALE_C((p_B).f_C, ((*(R22 *)rt_nil_check(l_BT_1212))).f_SCALE, l_S_1222)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1223; }
}
}
else if (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1224 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1224; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1211, l_BT_1212)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1211))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1213, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1225 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1225; }
}
r_FAILT(l_LINE_1213, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_BITS)))))
{
{
R22 * l_T_1226; memset(&l_T_1226, 0, sizeof l_T_1226);
l_T_1226 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1226))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1211))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1211))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1212))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1226))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1211))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1212))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1226))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1226))).f_MLEN).f_V), 0);
}
{ R26 rv1227 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1226);
return rv1227; }
}
}
r_FAIL(l_LINE_1213, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_BITS)))
{
{ R26 rv1228 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1211);
return rv1228; }
}
r_FAILT(l_LINE_1213, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_INT)))
{
{ R26 rv1229 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1229; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1230; memset(&l_T_1230, 0, sizeof l_T_1230);
l_T_1230 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1230))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1211))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1212))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
{ R26 rv1231 = r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_1230);
return rv1231; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
{ R26 rv1232 = r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_1230);
return rv1232; }
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1211))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1212))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1213, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1213, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1211), (r_TYPE_NAME(l_AT_1211)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1233 = r_MK(rt_str("and", 3));
return rv1233; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1234 = r_MK(rt_str("or", 2));
return rv1234; }
}
{ R10 rv1235 = r_MK(rt_str("xor", 3));
return rv1235; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { 
if ((p_A > p_B))
{
{ rt_int rv1236 = p_A;
return rv1236; }
}
{ rt_int rv1237 = p_B;
return rv1237; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { 
R22 * l_AT_1238; memset(&l_AT_1238, 0, sizeof l_AT_1238);
l_AT_1238 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1239; memset(&l_BT_1239, 0, sizeof l_BT_1239);
l_BT_1239 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1240; memset(&l_R_1240, 0, sizeof l_R_1240);
if (((((*(R22 *)rt_nil_check(l_AT_1238))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1239))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1238))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1239))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1238))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1239))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1240, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1238))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1239))).f_KIND == g_T_INT)))
{
{
rt_int l_S_1241; memset(&l_S_1241, 0, sizeof l_S_1241);
l_S_1241 = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1238))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1239))).f_SCALE);
S_R10(&l_R_1240, r_FMT2(rt_str("(@ == @)", 8), r_RESCALE_C((p_A).f_C, ((*(R22 *)rt_nil_check(l_AT_1238))).f_SCALE, l_S_1241), r_RESCALE_C((p_B).f_C, ((*(R22 *)rt_nil_check(l_BT_1239))).f_SCALE, l_S_1241)), 0);
}
}
else
{
if ((!r_SAME_CLASS(l_AT_1238, l_BT_1239)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1238))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R22 *)rt_nil_check(l_AT_1238))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1238) || r_HAS_ANY(l_BT_1239)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
S_R10(&l_R_1240, r_EQUAL_CODE(l_AT_1238, (p_A).f_C, (p_B).f_C), 0);
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1240, r_FMT1(rt_str("(!@)", 4), l_R_1240), 0);
}
{ R26 rv1242 = r_MKET(l_R_1240, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1242; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { 
rt_int l_S1_1243; memset(&l_S1_1243, 0, sizeof l_S1_1243);
l_S1_1243 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1244; memset(&l_S2_1244, 0, sizeof l_S2_1244);
l_S2_1244 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1245; memset(&l_S_1245, 0, sizeof l_S_1245);
l_S_1245 = r_MAX_INT(l_S1_1243, l_S2_1244);
R10 l_FN_1246; memset(&l_FN_1246, 0, sizeof l_FN_1246);
S_R10(&l_FN_1246, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1246, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1247 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1246, r_RESCALE_C((p_A).f_C, l_S1_1243, l_S_1245), r_RESCALE_C((p_B).f_C, l_S2_1244, l_S_1245)), r_INT_TYPE(l_S_1245));
return rv1247; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1248 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1243, l_S2_1244)));
return rv1248; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1249 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1243, l_S2_1244)));
return rv1249; }
}
{ R26 rv1250 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1243, l_S2_1244)));
return rv1250; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1251 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1243));
return rv1251; }
}
{ R26 rv1252 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1243));
return rv1252; }
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
static R26 r_SCALED_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { 
rt_int l_S1_1253; memset(&l_S1_1253, 0, sizeof l_S1_1253);
l_S1_1253 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1254; memset(&l_S2_1254, 0, sizeof l_S2_1254);
l_S2_1254 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1255; memset(&l_RND_1255, 0, sizeof l_RND_1255);
S_R10(&l_RND_1255, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1255, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1256 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1256; }
}
{
R23 l_SM_1257; memset(&l_SM_1257, 0, sizeof l_SM_1257);
S_R23(&l_SM_1257, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1258; memset(&l_S_1258, 0, sizeof l_S_1258);
l_S_1258 = (l_SM_1257).f_V;
rt_int l_SR_1259; memset(&l_SR_1259, 0, sizeof l_SR_1259);
l_SR_1259 = r_MAX_INT(l_S1_1253, l_S2_1254);
if ((!(l_SM_1257).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1260 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1258, l_S1_1253), l_S2_1254)), l_RND_1255), r_INT_TYPE(l_S_1258));
return rv1260; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1261 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1258, l_S1_1253), l_S2_1254)), l_RND_1255), r_INT_TYPE(l_S_1258));
return rv1261; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1262 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1253), r_NUM(l_S_1258), l_RND_1255), r_INT_TYPE(l_S_1258));
return rv1262; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_FN_1263; memset(&l_FN_1263, 0, sizeof l_FN_1263);
S_R10(&l_FN_1263, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1263, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1264 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_1263, r_RESCALE_C((p_A).f_C, l_S1_1253, l_SR_1259), r_RESCALE_C((p_B).f_C, l_S2_1254, l_SR_1259)), r_NUM(l_SR_1259), r_NUM(l_S_1258), l_RND_1255), r_INT_TYPE(l_S_1258));
return rv1264; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { 
R26 l_V_1265; memset(&l_V_1265, 0, sizeof l_V_1265);
S_R26(&l_V_1265, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1266; memset(&l_T_1266, 0, sizeof l_T_1266);
l_T_1266 = r_REAL_TYPE((l_V_1265).f_T);
R21 * l_R_1267; memset(&l_R_1267, 0, sizeof l_R_1267);
l_R_1267 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1268; memset(&l_TMP_1268, 0, sizeof l_TMP_1268);
S_R10(&l_TMP_1268, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1269; memset(&l_LO_1269, 0, sizeof l_LO_1269);
R26 l_HI_1270; memset(&l_HI_1270, 0, sizeof l_HI_1270);
R10 l_LOC_1271; memset(&l_LOC_1271, 0, sizeof l_LOC_1271);
R10 l_HIC_1272; memset(&l_HIC_1272, 0, sizeof l_HIC_1272);
R10 l_LO_OP_1273; memset(&l_LO_OP_1273, 0, sizeof l_LO_OP_1273);
S_R10(&l_LO_OP_1273, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1274; memset(&l_HI_OP_1274, 0, sizeof l_HI_OP_1274);
S_R10(&l_HI_OP_1274, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1269, r_EXPR(((*(R21 *)rt_nil_check(l_R_1267))).f_A, l_T_1266), 0);
S_R26(&l_HI_1270, r_EXPR(((*(R21 *)rt_nil_check(l_R_1267))).f_B, l_T_1266), 0);
if (((((*(R22 *)rt_nil_check(l_T_1266))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1266))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1266))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1266))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1266))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
S_R10(&l_LOC_1271, r_CONVERT_TO_SCALE(l_LO_1269, l_T_1266, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
S_R10(&l_HIC_1272, r_CONVERT_TO_SCALE(l_HI_1270, l_T_1266, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
if (((((*(R21 *)rt_nil_check(l_R_1267))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1267))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1273, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1267))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1274, r_MK(rt_str("<", 1)), 0);
}
{
R10 l_P1_1275; memset(&l_P1_1275, 0, sizeof l_P1_1275);
S_R10(&l_P1_1275, r_FMT4(rt_str("({ @ @ = @; (@) ", 16), r_CTYPE(l_T_1266), l_TMP_1268, (l_V_1265).f_C, l_LOC_1271), 0);
R10 l_P2_1276; memset(&l_P2_1276, 0, sizeof l_P2_1276);
S_R10(&l_P2_1276, r_FMT4(rt_str("@@ @ && @ ", 10), l_P1_1275, l_LO_OP_1273, l_TMP_1268, l_TMP_1268), 0);
{ R26 rv1277 = r_MKET(r_FMT3(rt_str("@@ (@); })", 10), l_P2_1276, l_HI_OP_1274, l_HIC_1272), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1277; }
}
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1278 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1278; }
}
{ R10 rv1279 = (p_V).f_C;
return rv1279; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { 
{ R26 rv1280 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1280; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { 
rt_int l_B_1281; memset(&l_B_1281, 0, sizeof l_B_1281);
l_B_1281 = ((rt_int)0LL);
rt_int l_P_1282; memset(&l_P_1282, 0, sizeof l_P_1282);
l_P_1282 = ((rt_int)1LL);
for (;;) {
if ((l_P_1282 >= p_N)) goto L_end1283;
{
l_B_1281 = rt_add(l_B_1281, ((rt_int)1LL));
l_P_1282 = rt_mul(l_P_1282, ((rt_int)2LL));
}
} L_end1283: ;
{ rt_int rv1284 = l_B_1281;
return rv1284; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1285; memset(&l_M_1285, 0, sizeof l_M_1285);
S_R23(&l_M_1285, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1285).f_OK)
{
{ rt_int rv1286 = (l_M_1285).f_V;
return rv1286; }
}
}
}
}
{ rt_int rv1287 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1287; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { 
R22 * l_T_1288; memset(&l_T_1288, 0, sizeof l_T_1288);
l_T_1288 = (p_B).f_T;
rt_int l_K_1289; memset(&l_K_1289, 0, sizeof l_K_1289);
l_K_1289 = ((*(R22 *)rt_nil_check(l_T_1288))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1290 = r_SIZE_OF(l_T_1288, (p_B).f_C);
return rv1290; }
}
if ((l_K_1289 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1291 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1288))).f_SCALE);
return rv1291; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1292 = r_INT_ET(((rt_int)2LL));
return rv1292; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1293 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1293; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1294 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1294; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1288))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1295 = r_MKET(((*(R22 *)rt_nil_check(l_T_1288))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1288))).f_SCALE));
return rv1295; }
}
{ R26 rv1296 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1288))).f_SCALE));
return rv1296; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1288))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1297 = r_MKET(((*(R22 *)rt_nil_check(l_T_1288))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1288))).f_SCALE));
return rv1297; }
}
{ R26 rv1298 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1288))).f_SCALE));
return rv1298; }
}
}
else if ((l_K_1289 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1299 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1288))).f_SCALE);
return rv1299; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1300 = r_INT_ET(((rt_int)15LL));
return rv1300; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1301 = r_INT_ET(((rt_int)2LL));
return rv1301; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ R26 rv1302 = r_INT_ET(rt_neg(((rt_int)1022LL)));
return rv1302; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ R26 rv1303 = r_INT_ET(((rt_int)1023LL));
return rv1303; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
{ R26 rv1304 = r_INT_ET(((rt_int)53LL));
return rv1304; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ R26 rv1305 = r_INT_ET(((rt_int)11LL));
return rv1305; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1288))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1306 = r_MKET(((*(R22 *)rt_nil_check(l_T_1288))).f_LO_C, l_T_1288);
return rv1306; }
}
{ R26 rv1307 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1288);
return rv1307; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1288))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1308 = r_MKET(((*(R22 *)rt_nil_check(l_T_1288))).f_HI_C, l_T_1288);
return rv1308; }
}
{ R26 rv1309 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1288);
return rv1309; }
}
}
else if ((l_K_1289 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1288))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1310 = r_MKET(((*(R22 *)rt_nil_check(l_T_1288))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1288))).f_BASE);
return rv1310; }
}
{ R26 rv1311 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1288))).f_BASE);
return rv1311; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1288))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1312 = r_MKET(((*(R22 *)rt_nil_check(l_T_1288))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1288))).f_BASE);
return rv1312; }
}
{ R26 rv1313 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1288))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1288))).f_BASE);
return rv1313; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1288))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1314 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R22 *)rt_nil_check(l_T_1288))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1288))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1314; }
}
{ R26 rv1315 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1288))).f_BASE))).f_NLITS);
return rv1315; }
}
}
else if (((l_K_1289 == g_T_STR) || (l_K_1289 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1316 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1316; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1317 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1317; }
}
}
else if ((l_K_1289 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1318 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1288))).f_DIMS);
return rv1318; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1288))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1319 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1319; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1320 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1320; }
}
}
else if ((l_K_1289 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1288))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1321 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1321; }
}
{ R26 rv1322 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1322; }
}
}
else if (((l_K_1289 == g_T_ABS) || (l_K_1289 == g_T_REC)))
{
{
R22 * l_U_1323; memset(&l_U_1323, 0, sizeof l_U_1323);
l_U_1323 = l_T_1288;
if ((l_K_1289 == g_T_ABS))
{
l_U_1323 = ((*(R22 *)rt_nil_check(l_T_1288))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1323))).f_KIND == g_T_REC))
{
{
R24 * l_F_1324; memset(&l_F_1324, 0, sizeof l_F_1324);
l_F_1324 = r_FIND_FIELD(l_U_1323, p_NAME);
if ((!(l_F_1324 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1324))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1325 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1324))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1324))).f_T);
return rv1325; }
}
}
}
}
}
}
r_FAILT(p_LINE, rt_str("no such field or attribute: ", 28), p_NAME);
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { 
R21 * l_N_1326; memset(&l_N_1326, 0, sizeof l_N_1326);
l_N_1326 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1326))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1327 = l_N_1326;
return rv1327; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { 
rt_int l_K_1328; memset(&l_K_1328, 0, sizeof l_K_1328);
l_K_1328 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1328 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1329 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1329; }
}
}
{ R26 rv1330 = r_INT_ET(((rt_int)64LL));
return rv1330; }
}
else if ((l_K_1328 == g_T_FLOAT))
{
{ R26 rv1331 = r_INT_ET(((rt_int)64LL));
return rv1331; }
}
else if ((l_K_1328 == g_T_BOOL))
{
{ R26 rv1332 = r_INT_ET(((rt_int)1LL));
return rv1332; }
}
else if ((l_K_1328 == g_T_ENUM))
{
{ R26 rv1333 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1333; }
}
else if ((l_K_1328 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1334 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1334; }
}
{ R26 rv1335 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1335; }
}
else if ((l_K_1328 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1336 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1336; }
}
{ R26 rv1337 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1337; }
}
else if (((l_K_1328 == g_T_PTR) || (l_K_1328 == g_T_SEM)))
{
{ R26 rv1338 = r_INT_ET(((rt_int)64LL));
return rv1338; }
}
else if ((l_K_1328 == g_T_ABS))
{
{ R26 rv1339 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1339; }
}
else if ((l_K_1328 == g_T_ARR))
{
{ R26 rv1340 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1340; }
}
{ R26 rv1341 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1341; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{
R22 * l_T_1342; memset(&l_T_1342, 0, sizeof l_T_1342);
l_T_1342 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
{ R26 rv1343 = r_ATTRIBUTE(r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1342)), l_T_1342), p_NAME, p_LINE);
return rv1343; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1344 = r_INT_ET(((rt_int)100000000LL));
return rv1344; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1345 = r_INT_ET(((rt_int)15LL));
return rv1345; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1346 = r_INT_ET(((rt_int)0LL));
return rv1346; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { 
R22 * l_T_1347; memset(&l_T_1347, 0, sizeof l_T_1347);
l_T_1347 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1347 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1347 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1347 = r_REAL_TYPE(l_T_1347);
if ((!(((*(R22 *)rt_nil_check(l_T_1347))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1347))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1348; memset(&l_TMP_1348, 0, sizeof l_TMP_1348);
S_R10(&l_TMP_1348, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1349; memset(&l_R_1349, 0, sizeof l_R_1349);
S_R10(&l_R_1349, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1347))).f_CNAME, l_TMP_1348, l_TMP_1348, l_TMP_1348), 0);
R24 * l_F_1350; memset(&l_F_1350, 0, sizeof l_F_1350);
l_F_1350 = ((*(R22 *)rt_nil_check(l_T_1347))).f_FIELDS;
S_R10(&l_R_1349, r_FMT2(rt_str("@@", 2), l_R_1349, r_INIT_CODE(l_T_1347, l_TMP_1348)), 0);
for (;;) {
if ((l_F_1350 == NULL)) goto L_end1351;
{
if ((((*(R24 *)rt_nil_check(l_F_1350))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1350))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1350))).f_LABELS, (r_TAG_VALUE(l_T_1347, ((*(R24 *)rt_nil_check(l_F_1350))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1347, ((*(R24 *)rt_nil_check(l_F_1350))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1352; memset(&l_INIT_1352, 0, sizeof l_INIT_1352);
l_INIT_1352 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1350))).f_NAME);
if ((l_INIT_1352 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1350))).f_NAME);
}
S_R10(&l_R_1349, r_FMT2(rt_str("@ @", 3), l_R_1349, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1350))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1348, ((*(R24 *)rt_nil_check(l_F_1350))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1352))).f_A, ((*(R24 *)rt_nil_check(l_F_1350))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1352))).f_LINE, l_TMP_1348)), 0);
}
}
}
l_F_1350 = ((*(R24 *)rt_nil_check(l_F_1350))).f_NEXT;
}
} L_end1351: ;
{
R21 * l_P_1353; memset(&l_P_1353, 0, sizeof l_P_1353);
l_P_1353 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1353 == NULL)) goto L_end1354;
{
{
R24 * l_G_1355; memset(&l_G_1355, 0, sizeof l_G_1355);
l_G_1355 = r_FIND_FIELD(l_T_1347, ((*(R21 *)rt_nil_check(l_P_1353))).f_NAME);
if ((l_G_1355 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1353))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1353))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1355))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1353))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1353))).f_NAME);
}
r_CHECK_VARIANT(l_G_1355, l_T_1347, NULL, ((*(R21 *)rt_nil_check(l_P_1353))).f_LINE);
}
l_P_1353 = ((*(R21 *)rt_nil_check(l_P_1353))).f_NEXT;
}
} L_end1354: ;
}
{ R26 rv1356 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1349, l_TMP_1348), l_T_1347);
return rv1356; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { 
R21 * l_P_1357; memset(&l_P_1357, 0, sizeof l_P_1357);
l_P_1357 = p_L;
for (;;) {
if ((l_P_1357 == NULL)) goto L_end1358;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1357))).f_NAME, p_NAME))
{
{ R21 * rv1359 = l_P_1357;
return rv1359; }
}
l_P_1357 = ((*(R21 *)rt_nil_check(l_P_1357))).f_NEXT;
}
} L_end1358: ;
{ R21 * rv1360 = NULL;
return rv1360; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { 
rt_int l_DIMS_1361; memset(&l_DIMS_1361, 0, sizeof l_DIMS_1361);
l_DIMS_1361 = ((rt_int)0LL);
R21 * l_P_1362; memset(&l_P_1362, 0, sizeof l_P_1362);
l_P_1362 = p_E;
R22 * l_ELEM_1363; memset(&l_ELEM_1363, 0, sizeof l_ELEM_1363);
l_ELEM_1363 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1362))).f_KIND == g_N_ARRCONS))) goto L_end1364;
{
l_DIMS_1361 = rt_add(l_DIMS_1361, ((rt_int)1LL));
l_P_1362 = ((*(R21 *)rt_nil_check(l_P_1362))).f_A;
}
} L_end1364: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1363 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1363 == NULL))
{
l_ELEM_1363 = (r_EXPR(l_P_1362, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1363))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1363))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1363 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1365; memset(&l_A_1365, 0, sizeof l_A_1365);
l_A_1365 = r_ARRAY_OF(l_ELEM_1363, l_DIMS_1361);
R10 l_TMP_1366; memset(&l_TMP_1366, 0, sizeof l_TMP_1366);
S_R10(&l_TMP_1366, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1367; memset(&l_R_1367, 0, sizeof l_R_1367);
S_R10(&l_R_1367, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1365))).f_CNAME, l_TMP_1366, l_TMP_1366), 0);
rt_int l_K_1368; memset(&l_K_1368, 0, sizeof l_K_1368);
l_K_1368 = ((rt_int)0LL);
S_R10(&l_R_1367, r_FMT2(rt_str("@@); ", 5), l_R_1367, l_TMP_1366), 0);
l_P_1362 = p_E;
{ rt_int it1370_lo = ((rt_int)0LL), it1370_hi = rt_sub(l_DIMS_1361, ((rt_int)1LL));
for (rt_int it1370 = it1370_lo; it1370 <= it1370_hi; it1370++) {
{
S_R10(&l_R_1367, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1367, l_TMP_1366, r_NUM(it1370), l_TMP_1366), 0);
S_R10(&l_R_1367, r_FMT3(rt_str("@@] = @;", 8), l_R_1367, r_NUM(it1370), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1362))).f_A), ((rt_int)1LL)))), 0);
l_P_1362 = ((*(R21 *)rt_nil_check(l_P_1362))).f_A;
}
} } L_end1369: ;
S_R10(&l_R_1367, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1367, l_TMP_1366, l_TMP_1366, r_NUM(l_DIMS_1361)), 0);
S_R10(&l_R_1367, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1367, l_TMP_1366, l_TMP_1366), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1361, l_A_1365, l_TMP_1366, &l_R_1367, &l_K_1368);
{ R26 rv1371 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1367, l_TMP_1366), l_A_1365);
return rv1371; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { 
R21 * l_P_1372; memset(&l_P_1372, 0, sizeof l_P_1372);
l_P_1372 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1372 == NULL)) goto L_end1373;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1372, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1372))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1372))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1372, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1372))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1372 = ((*(R21 *)rt_nil_check(l_P_1372))).f_NEXT;
}
} L_end1373: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { 
R22 * l_T_1374; memset(&l_T_1374, 0, sizeof l_T_1374);
l_T_1374 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1374))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1374))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1374))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1375 = l_T_1374;
return rv1375; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { 
R22 * l_T_1376; memset(&l_T_1376, 0, sizeof l_T_1376);
l_T_1376 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1377; memset(&l_V_1377, 0, sizeof l_V_1377);
S_R26(&l_V_1377, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1376), 0);
R22 * l_RT_1378; memset(&l_RT_1378, 0, sizeof l_RT_1378);
l_RT_1378 = r_REAL_TYPE(l_T_1376);
if (((((*(R22 *)rt_nil_check((l_V_1377).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1378))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1378))).f_KIND == g_T_INT))
{
{ R26 rv1379 = r_MKET(r_RANGE_CHECK(l_RT_1378, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1377).f_C), r_NO_TEXT()), l_T_1376);
return rv1379; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1378))).f_KIND == g_T_BOOL))
{
{ R26 rv1380 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1377).f_C), l_T_1376);
return rv1380; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1378))).f_KIND == g_T_ENUM))
{
{ R26 rv1381 = r_MKET(r_ENUM_OF_BITS(l_RT_1378, (l_V_1377).f_C), l_T_1376);
return rv1381; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1378))).f_KIND == g_T_FLOAT))
{
{ R26 rv1382 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1377).f_C), l_T_1376);
return rv1382; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1378))).f_KIND == g_T_STR))
{
{ R26 rv1383 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1377).f_C), l_T_1376);
return rv1383; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{ R26 rv1384 = r_MKET(r_CONVERT(l_V_1377, l_T_1376, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_1376);
return rv1384; }
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1385 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1385; }
}
}
{ R10 rv1386 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1386; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { 
R10 l_NAME_1387; memset(&l_NAME_1387, 0, sizeof l_NAME_1387);
S_R10(&l_NAME_1387, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1388; memset(&l_L_1388, 0, sizeof l_L_1388);
l_L_1388 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1389; memset(&l_R_1389, 0, sizeof l_R_1389);
S_R10(&l_R_1389, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1388 == NULL)) goto L_end1390;
{
{
R21 * l_V_1391; memset(&l_V_1391, 0, sizeof l_V_1391);
l_V_1391 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1392; memset(&l_FOUND_1392, 0, sizeof l_FOUND_1392);
l_FOUND_1392 = 0;
for (;;) {
if ((l_V_1391 == NULL)) goto L_end1393;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1391))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1388))).f_NAME))
{
S_R10(&l_R_1389, r_FMT2(rt_str("@@, ", 4), l_R_1389, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1391))).f_A, NULL)).f_C), 0);
l_FOUND_1392 = 1;
}
l_V_1391 = ((*(R21 *)rt_nil_check(l_V_1391))).f_NEXT;
}
} L_end1393: ;
if ((!l_FOUND_1392))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1388))).f_NAME);
}
}
l_L_1388 = ((*(R21 *)rt_nil_check(l_L_1388))).f_NEXT;
}
} L_end1390: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1387, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1389, l_NAME_1387, l_NAME_1387));
{ R10 rv1394 = r_FMT2(rt_str("@, @", 4), l_NAME_1387, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1394; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { 
rt_int l_SEM_1395; memset(&l_SEM_1395, 0, sizeof l_SEM_1395);
l_SEM_1395 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1395 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1395)
{
{
R22 * l_T_1396; memset(&l_T_1396, 0, sizeof l_T_1396);
l_T_1396 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1396 = p_WANT;
}
}
{ R26 rv1397 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1396))).f_SCALE)), l_T_1396);
return rv1397; }
}
}
{
R22 * l_T_1398; memset(&l_T_1398, 0, sizeof l_T_1398);
l_T_1398 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1399; memset(&l_P_1399, 0, sizeof l_P_1399);
l_P_1399 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1399))).f_TARGET = l_T_1398;
((*(R22 *)rt_nil_check(l_P_1399))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1398))
{
{ R26 rv1400 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1398), r_INIT_CODE(l_T_1398, r_MK(rt_str("(*p)", 4)))), l_P_1399);
return rv1400; }
}
{ R26 rv1401 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1398), r_CTYPE(l_T_1398)), l_P_1399);
return rv1401; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { 
R21 * l_P_1402; memset(&l_P_1402, 0, sizeof l_P_1402);
l_P_1402 = p_L;
{ rt_int it1404_lo = ((rt_int)1LL), it1404_hi = p_K;
for (rt_int it1404 = it1404_lo; it1404 <= it1404_hi; it1404++) {
{
if ((!(l_P_1402 == NULL)))
{
l_P_1402 = ((*(R21 *)rt_nil_check(l_P_1402))).f_NEXT;
}
}
} } L_end1403: ;
{ R21 * rv1405 = l_P_1402;
return rv1405; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { 
rt_int l_N_1406; memset(&l_N_1406, 0, sizeof l_N_1406);
l_N_1406 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1406 < p_LO) || (l_N_1406 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { 
R21 * l_L_1407; memset(&l_L_1407, 0, sizeof l_L_1407);
l_L_1407 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1407 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1407))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1407))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1407))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1408 = r_MK(rt_str("1", 1));
return rv1408; }
}
{ R10 rv1409 = r_MK(rt_str("0", 1));
return rv1409; }
}
if (((((*(R21 *)rt_nil_check(l_L_1407))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1407))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1407))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1410 = r_MK(rt_str("1", 1));
return rv1410; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1407))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1411 = r_MK(rt_str("0", 1));
return rv1411; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1412 = r_MK(rt_str("1", 1));
return rv1412; }
}
{ R10 rv1413 = r_MK(rt_str("0", 1));
return rv1413; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { 
if ((p_E == NULL))
{
{ rt_int rv1414 = 0;
return rv1414; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1415 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1415; }
}
{ rt_int rv1416 = 0;
return rv1416; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1417 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1417; }
}
{ R21 * rv1418 = p_E;
return rv1418; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { 
R10 l_NAME_1419; memset(&l_NAME_1419, 0, sizeof l_NAME_1419);
S_R10(&l_NAME_1419, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1420; memset(&l_LINE_1420, 0, sizeof l_LINE_1420);
l_LINE_1420 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_1419, rt_str("PUT", 3)) || r_TEQS(l_NAME_1419, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1421; memset(&l_V_1421, 0, sizeof l_V_1421);
S_R26(&l_V_1421, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1421).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1420, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1419, rt_str("PUT", 3)))
{
{ R26 rv1422 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1421).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1422; }
}
{ R26 rv1423 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1421).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1423; }
}
}
else if (r_TEQS(l_NAME_1419, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1424 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1424; }
}
else if (r_TEQS(l_NAME_1419, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1425 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1425; }
}
else if (r_TEQS(l_NAME_1419, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1426 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1426; }
}
else if (r_TEQS(l_NAME_1419, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1427 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1427; }
}
else if (r_TEQS(l_NAME_1419, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1428 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1428; }
}
if (r_TEQS(l_NAME_1419, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1429 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1420);
return rv1429; }
}
else if (r_TEQS(l_NAME_1419, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1430 = r_TO_FIXED_CALL(p_E);
return rv1430; }
}
else if (r_TEQS(l_NAME_1419, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1431; memset(&l_V_1431, 0, sizeof l_V_1431);
S_R26(&l_V_1431, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1432; memset(&l_P_1432, 0, sizeof l_P_1432);
S_R23(&l_P_1432, r_MANIFEST(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R22 * l_VT_1433; memset(&l_VT_1433, 0, sizeof l_VT_1433);
l_VT_1433 = r_REAL_TYPE((l_V_1431).f_T);
R22 * l_T_1434; memset(&l_T_1434, 0, sizeof l_T_1434);
l_T_1434 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_1432).f_OK))
{
r_FAIL(l_LINE_1420, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_1432).f_V < ((rt_int)1LL)) || ((l_P_1432).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_1420, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R22 *)rt_nil_check(l_T_1434))).f_SCALE = (l_P_1432).f_V;
if ((((*(R22 *)rt_nil_check(l_VT_1433))).f_KIND == g_T_INT))
{
{ R26 rv1435 = r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_1431).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1433))).f_SCALE)), l_T_1434);
return rv1435; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1433))).f_KIND == g_T_FLOAT))
{
{ R26 rv1436 = r_MKET((l_V_1431).f_C, l_T_1434);
return rv1436; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1433))).f_KIND == g_T_STR))
{
{ R26 rv1437 = r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_1431).f_C), l_T_1434);
return rv1437; }
}
r_FAIL(l_LINE_1420, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1419, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1438 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1420);
return rv1438; }
}
else if (r_TEQS(l_NAME_1419, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1439; memset(&l_V_1439, 0, sizeof l_V_1439);
S_R26(&l_V_1439, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1439).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1440 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1439).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1439).f_T))).f_SCALE));
return rv1440; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1439).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1441 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1439).f_C), (l_V_1439).f_T);
return rv1441; }
}
r_FAIL(l_LINE_1420, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1419, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1419, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1442; memset(&l_V_1442, 0, sizeof l_V_1442);
S_R26(&l_V_1442, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1443; memset(&l_T_1443, 0, sizeof l_T_1443);
l_T_1443 = r_REAL_TYPE((l_V_1442).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1443))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1420, rt_str("an enumerated value expected by ", 32), l_NAME_1419);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1443))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1420, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1419);
}
if (r_TEQS(l_NAME_1419, rt_str("SUCC", 4)))
{
{ R26 rv1444 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1442).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1443))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1443))).f_BASE);
return rv1444; }
}
{ R26 rv1445 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1442).f_C), ((*(R22 *)rt_nil_check(l_T_1443))).f_BASE);
return rv1445; }
}
}
else if (r_TEQS(l_NAME_1419, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1446; memset(&l_V_1446, 0, sizeof l_V_1446);
S_R26(&l_V_1446, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1447; memset(&l_K_1447, 0, sizeof l_K_1447);
l_K_1447 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1446).f_T)))).f_KIND;
R22 * l_T_1448; memset(&l_T_1448, 0, sizeof l_T_1448);
l_T_1448 = r_NEW_TYP(l_K_1447);
if (((!(l_K_1447 == g_T_STR)) && (!(l_K_1447 == g_T_BITS))))
{
r_FAIL(l_LINE_1420, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1448))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1446).f_T))).f_BASE;
{ R26 rv1449 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1446).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1448);
return rv1449; }
}
}
else if (r_TEQS(l_NAME_1419, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1450 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1450; }
}
else if (r_TEQS(l_NAME_1419, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1451 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1451; }
}
else if (((r_TEQS(l_NAME_1419, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1419, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1419, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1452; memset(&l_BITS_1452, 0, sizeof l_BITS_1452);
S_R10(&l_BITS_1452, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1419, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1452, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1419, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1452, r_MK(rt_str("4", 1)), 0);
}
{ R26 rv1453 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1452), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1453; }
}
}
else if ((r_TEQS(l_NAME_1419, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1419, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1454; memset(&l_S_1454, 0, sizeof l_S_1454);
S_R23(&l_S_1454, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_1454).f_OK))
{
r_FAIL(l_LINE_1420, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_1419, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1455 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1454).f_V));
return rv1455; }
}
{ R26 rv1456 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1454).f_V));
return rv1456; }
}
}
else if (((r_TEQS(l_NAME_1419, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1419, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1419, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R22 * l_T_1457; memset(&l_T_1457, 0, sizeof l_T_1457);
l_T_1457 = r_NEW_TYP(g_T_FLOAT);
R23 l_P_1458; memset(&l_P_1458, 0, sizeof l_P_1458);
S_R23(&l_P_1458, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_1458).f_OK))
{
r_FAIL(l_LINE_1420, rt_str("the precision must be manifest", 30));
}
((*(R22 *)rt_nil_check(l_T_1457))).f_SCALE = (l_P_1458).f_V;
if (r_TEQS(l_NAME_1419, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1459 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1457);
return rv1459; }
}
else if (r_TEQS(l_NAME_1419, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1460 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1457);
return rv1460; }
}
{ R26 rv1461 = r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_1457);
return rv1461; }
}
}
else if (r_TEQS(l_NAME_1419, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1462 = r_INT_ET(((rt_int)15LL));
return rv1462; }
}
else if (r_TEQS(l_NAME_1419, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1463 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1463; }
}
else if (r_TEQS(l_NAME_1419, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1464 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1464; }
}
{ R26 rv1465 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1465; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { 
R22 * l_T_1466; memset(&l_T_1466, 0, sizeof l_T_1466);
l_T_1466 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1467; memset(&l_K_1467, 0, sizeof l_K_1467);
l_K_1467 = ((*(R22 *)rt_nil_check(l_T_1466))).f_KIND;
R22 * l_S_1468; memset(&l_S_1468, 0, sizeof l_S_1468);
l_S_1468 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1467 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1466))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1469 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1468);
return rv1469; }
}
{ R26 rv1470 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1466))).f_SCALE)), l_S_1468);
return rv1470; }
}
else if ((l_K_1467 == g_T_FLOAT))
{
{ R26 rv1471 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1466))).f_SCALE)), l_S_1468);
return rv1471; }
}
else if ((l_K_1467 == g_T_BOOL))
{
{ R26 rv1472 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1468);
return rv1472; }
}
else if ((l_K_1467 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1466))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1473 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1468);
return rv1473; }
}
{ R26 rv1474 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1466))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1468);
return rv1474; }
}
else if (((l_K_1467 == g_T_STR) || (l_K_1467 == g_T_BITS)))
{
{ R26 rv1475 = r_MKET((p_V).f_C, l_S_1468);
return rv1475; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1466));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { 
R26 l_V_1476; memset(&l_V_1476, 0, sizeof l_V_1476);
S_R26(&l_V_1476, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1477; memset(&l_T_1477, 0, sizeof l_T_1477);
l_T_1477 = r_REAL_TYPE((l_V_1476).f_T);
rt_int l_N_1478; memset(&l_N_1478, 0, sizeof l_N_1478);
l_N_1478 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1479; memset(&l_RND_1479, 0, sizeof l_RND_1479);
S_R10(&l_RND_1479, r_ROUNDING_ARG(p_E, l_N_1478), 0);
rt_int l_S_1480; memset(&l_S_1480, 0, sizeof l_S_1480);
l_S_1480 = ((rt_int)0LL);
if (((l_N_1478 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R23 l_SM_1481; memset(&l_SM_1481, 0, sizeof l_SM_1481);
S_R23(&l_SM_1481, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_1481).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_1480 = (l_SM_1481).f_V;
}
}
if ((l_N_1478 >= ((rt_int)3LL)))
{
{
R21 * l_R_1482; memset(&l_R_1482, 0, sizeof l_R_1482);
l_R_1482 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_1482)) && (!r_TEQS(((*(R21 *)rt_nil_check(l_R_1482))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_1482)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if ((((*(R22 *)rt_nil_check(l_T_1477))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1483; memset(&l_SAVED_1483, 0, sizeof l_SAVED_1483);
l_SAVED_1483 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1484; memset(&l_C_1484, 0, sizeof l_C_1484);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1479, rt_str("1", 1));
S_R10(&l_C_1484, r_RESCALE_C((l_V_1476).f_C, ((*(R22 *)rt_nil_check(l_T_1477))).f_SCALE, l_S_1480), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1483;
{ R26 rv1485 = r_MKET(l_C_1484, r_INT_TYPE(l_S_1480));
return rv1485; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1477))).f_KIND == g_T_FLOAT))
{
{ R26 rv1486 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1476).f_C, r_NUM(l_S_1480), l_RND_1479), r_INT_TYPE(l_S_1480));
return rv1486; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1477))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1477))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1477))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1477))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1477))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1477))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1487 = r_MKET(r_RESCALE_C((l_V_1476).f_C, ((rt_int)0LL), l_S_1480), r_INT_TYPE(l_S_1480));
return rv1487; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1477))).f_KIND == g_T_BITS))
{
{ R26 rv1488 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1476).f_C), ((rt_int)0LL), l_S_1480), r_INT_TYPE(l_S_1480));
return rv1488; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1477))).f_KIND == g_T_STR))
{
{ R26 rv1489 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1476).f_C, r_NUM(l_S_1480), l_RND_1479), r_INT_TYPE(l_S_1480));
return rv1489; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1476).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { 
R22 * l_T_1490; memset(&l_T_1490, 0, sizeof l_T_1490);
l_T_1490 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1491; memset(&l_K_1491, 0, sizeof l_K_1491);
l_K_1491 = ((*(R22 *)rt_nil_check(l_T_1490))).f_KIND;
if ((l_K_1491 == g_T_BITS))
{
{ R26 rv1492 = p_V;
return rv1492; }
}
else if ((l_K_1491 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1490))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1490))).f_REPS))).f_B == NULL)))
{
{ R26 rv1493 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1490)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1490)));
return rv1493; }
}
}
{ R26 rv1494 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1490))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1490)));
return rv1494; }
}
else if ((l_K_1491 == g_T_STR))
{
{ R26 rv1495 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1495; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1491 == g_T_INT))
{
{ R26 rv1496 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1496; }
}
else if ((l_K_1491 == g_T_BOOL))
{
{ R26 rv1497 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1497; }
}
else if ((l_K_1491 == g_T_FLOAT))
{
{ R26 rv1498 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1498; }
}
else if ((l_K_1491 == g_T_STR))
{
{ R26 rv1499 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1499; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1490));
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG(R27 * p_A) { 
if ((!((*(R27 *)rt_nil_check(p_A))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(p_A))).f_V, r_EXPR(((*(R27 *)rt_nil_check(p_A))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(p_A))).f_HAVE = 1;
}
}
static rt_int r_WANT_SENSITIVE(R27 * p_A) { 
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1500 = 0;
return rv1500; }
}
{ rt_int rv1501 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1501; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { 
rt_int l_N_1502; memset(&l_N_1502, 0, sizeof l_N_1502);
l_N_1502 = ((rt_int)0LL);
R27 * l_P_1503; memset(&l_P_1503, 0, sizeof l_P_1503);
l_P_1503 = p_A;
for (;;) {
if ((l_P_1503 == NULL)) goto L_end1504;
{
l_N_1502 = rt_add(l_N_1502, ((rt_int)1LL));
l_P_1503 = ((*(R27 *)rt_nil_check(l_P_1503))).f_NEXT;
}
} L_end1504: ;
{ rt_int rv1505 = l_N_1502;
return rv1505; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { 
R27 * l_HEAD_1506; memset(&l_HEAD_1506, 0, sizeof l_HEAD_1506);
l_HEAD_1506 = NULL;
R27 * l_TAIL_1507; memset(&l_TAIL_1507, 0, sizeof l_TAIL_1507);
l_TAIL_1507 = NULL;
rt_int l_G_1508; memset(&l_G_1508, 0, sizeof l_G_1508);
l_G_1508 = ((rt_int)0LL);
{ rt_int it1510_lo = ((rt_int)0LL), it1510_hi = ((rt_int)2LL);
for (rt_int it1510 = it1510_lo; it1510 <= it1510_hi; it1510++) {
{
{
R21 * l_P_1511; memset(&l_P_1511, 0, sizeof l_P_1511);
l_P_1511 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1510 == ((rt_int)1LL)))
{
l_P_1511 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1510 == ((rt_int)2LL)))
{
l_P_1511 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1511 == NULL)) goto L_end1512;
{
{
R27 * l_A_1513; memset(&l_A_1513, 0, sizeof l_A_1513);
l_A_1513 = r_NODE_ARG(l_P_1511, it1510, NULL);
if ((l_TAIL_1507 == NULL))
{
l_HEAD_1506 = l_A_1513;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1507))).f_NEXT = l_A_1513;
}
l_TAIL_1507 = l_A_1513;
}
l_P_1511 = ((*(R21 *)rt_nil_check(l_P_1511))).f_NEXT;
}
} L_end1512: ;
}
}
} } L_end1509: ;
{ R27 * rv1514 = l_HEAD_1506;
return rv1514; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { 
R27 * l_ARGS_1515; memset(&l_ARGS_1515, 0, sizeof l_ARGS_1515);
l_ARGS_1515 = r_CALL_ARGS(p_E);
R12 * l_Y_1516; memset(&l_Y_1516, 0, sizeof l_Y_1516);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1517 = r_START_IO_CALL(p_E);
return rv1517; }
}
l_Y_1516 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1516 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1516))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1518 = r_BUILTIN(p_E, p_WANT);
return rv1518; }
}
{ R26 rv1519 = r_CALL_SYM(l_Y_1516, l_ARGS_1515, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1519; }
}
l_Y_1516 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1515, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1516 == NULL))
{
{
R12 * l_P_1520; memset(&l_P_1520, 0, sizeof l_P_1520);
l_P_1520 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1520 == NULL)) goto L_end1521;
{
if ((((*(R12 *)rt_nil_check(l_P_1520))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1522 = r_BUILTIN(p_E, p_WANT);
return rv1522; }
}
l_P_1520 = r_LOOKUP_NEXT(l_P_1520);
}
} L_end1521: ;
}
{
R12 * l_B_1523; memset(&l_B_1523, 0, sizeof l_B_1523);
l_B_1523 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1523 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1523))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1524 = r_BUILTIN(p_E, p_WANT);
return rv1524; }
}
if (((((*(R12 *)rt_nil_check(l_B_1523))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1523))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1525 = r_CALL_SYM(l_Y_1516, l_ARGS_1515, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1525; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { 
R20 * l_B_1526; memset(&l_B_1526, 0, sizeof l_B_1526);
l_B_1526 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1527; memset(&l_S_1527, 0, sizeof l_S_1527);
l_S_1527 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1527, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1529_lo = ((rt_int)1LL), it1529_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1529 = it1529_lo; it1529 <= it1529_hi; it1529++) {
{
if (rt_b_eq(rt_b_slice(l_S_1527, it1529, it1529), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1527, ((rt_int)0LL), rt_sub(it1529, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1530 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1527, rt_add(it1529, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1530; }
}
goto L_end1528;
}
}
} } L_end1528: ;
}
for (;;) {
if ((l_B_1526 == NULL)) goto L_end1531;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1526))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1526))).f_NAME, p_NAME)))
{
{ R12 * rv1532 = ((*(R20 *)rt_nil_check(l_B_1526))).f_R;
return rv1532; }
}
l_B_1526 = ((*(R20 *)rt_nil_check(l_B_1526))).f_NEXT;
}
} L_end1531: ;
{ R12 * rv1533 = NULL;
return rv1533; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1534 = 0;
return rv1534; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1535 = 0;
return rv1535; }
}
}
}
{ rt_int rv1536 = 1;
return rv1536; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { 
R12 * l_Y_1537; memset(&l_Y_1537, 0, sizeof l_Y_1537);
l_Y_1537 = r_LOOKUP(p_NAME);
R12 * l_BEST_1538; memset(&l_BEST_1538, 0, sizeof l_BEST_1538);
l_BEST_1538 = NULL;
rt_int l_BEST_SCORE_1539; memset(&l_BEST_SCORE_1539, 0, sizeof l_BEST_SCORE_1539);
l_BEST_SCORE_1539 = ((rt_int)0LL);
rt_int l_TIES_1540; memset(&l_TIES_1540, 0, sizeof l_TIES_1540);
l_TIES_1540 = ((rt_int)0LL);
rt_int l_COUNT_1541; memset(&l_COUNT_1541, 0, sizeof l_COUNT_1541);
l_COUNT_1541 = ((rt_int)0LL);
rt_int l_N_1542; memset(&l_N_1542, 0, sizeof l_N_1542);
l_N_1542 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1537 == NULL)) goto L_end1543;
{
if ((!r_IS_ROUTINE(l_Y_1537)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1537))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1543;
}
}
else if (r_CANDIDATE(l_Y_1537, p_NAME))
{
{
R12 * l_R_1544; memset(&l_R_1544, 0, sizeof l_R_1544);
l_R_1544 = r_ORIGINAL(l_Y_1537);
rt_int l_SCORE_1545; memset(&l_SCORE_1545, 0, sizeof l_SCORE_1545);
r_ROUTINE_HEADER(l_R_1544);
if (((r_PARAM_COUNT(l_R_1544) == l_N_1542) && (!r_SEEN_ROUTINE(l_R_1544, p_NAME, l_Y_1537))))
{
l_COUNT_1541 = rt_add(l_COUNT_1541, ((rt_int)1LL));
l_SCORE_1545 = r_MATCH_SCORE(l_R_1544, p_ARGS);
if ((l_SCORE_1545 > l_BEST_SCORE_1539))
{
l_BEST_1538 = l_R_1544;
l_BEST_SCORE_1539 = l_SCORE_1545;
l_TIES_1540 = ((rt_int)0LL);
}
else if (((l_SCORE_1545 == l_BEST_SCORE_1539) && (l_SCORE_1545 > ((rt_int)0LL))))
{
l_TIES_1540 = rt_add(l_TIES_1540, ((rt_int)1LL));
}
}
}
}
l_Y_1537 = r_LOOKUP_NEXT(l_Y_1537);
}
} L_end1543: ;
if (((l_TIES_1540 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1546 = l_BEST_1538;
return rv1546; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { 
R12 * l_Y_1547; memset(&l_Y_1547, 0, sizeof l_Y_1547);
l_Y_1547 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1547 == p_STOP) || (l_Y_1547 == NULL))) goto L_end1548;
{
if ((((*(R12 *)rt_nil_check(l_Y_1547))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1547) == p_R))
{
{ rt_int rv1549 = 1;
return rv1549; }
}
}
l_Y_1547 = r_LOOKUP_NEXT(l_Y_1547);
}
} L_end1548: ;
{ rt_int rv1550 = 0;
return rv1550; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { 
rt_int l_N_1551; memset(&l_N_1551, 0, sizeof l_N_1551);
l_N_1551 = ((rt_int)0LL);
R28 * l_P_1552; memset(&l_P_1552, 0, sizeof l_P_1552);
l_P_1552 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1552 == NULL)) goto L_end1553;
{
l_N_1551 = rt_add(l_N_1551, ((rt_int)1LL));
l_P_1552 = ((*(R28 *)rt_nil_check(l_P_1552))).f_NEXT;
}
} L_end1553: ;
{ rt_int rv1554 = l_N_1551;
return rv1554; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { 
R28 * l_P_1555; memset(&l_P_1555, 0, sizeof l_P_1555);
l_P_1555 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1556; memset(&l_A_1556, 0, sizeof l_A_1556);
l_A_1556 = p_ARGS;
rt_int l_EXACT_1557; memset(&l_EXACT_1557, 0, sizeof l_EXACT_1557);
l_EXACT_1557 = 1;
R20 * l_BS_1558; memset(&l_BS_1558, 0, sizeof l_BS_1558);
l_BS_1558 = r_NEW_BINDS();
for (;;) {
if ((l_P_1555 == NULL)) goto L_end1559;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1555))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1556))).f_MODE)))
{
{ rt_int rv1560 = ((rt_int)0LL);
return rv1560; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1555))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1555, l_A_1556, l_BS_1558)))
{
{ rt_int rv1561 = ((rt_int)0LL);
return rv1561; }
}
}
else if ((((*(R28 *)rt_nil_check(l_P_1555))).f_T == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1556))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_1556))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv1562 = ((rt_int)0LL);
return rv1562; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_1556))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1556))).f_E, ((*(R28 *)rt_nil_check(l_P_1555))).f_T)))
{
{ rt_int rv1563 = ((rt_int)0LL);
return rv1563; }
}
}
else
{
r_TYPE_ARG(l_A_1556);
{
R22 * l_AT_1564; memset(&l_AT_1564, 0, sizeof l_AT_1564);
l_AT_1564 = (((*(R27 *)rt_nil_check(l_A_1556))).f_V).f_T;
if ((!((r_SAME_CLASS(((*(R28 *)rt_nil_check(l_P_1555))).f_T, l_AT_1564) || (((((*(R22 *)rt_nil_check(l_AT_1564))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1555))).f_T)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1565 = ((rt_int)0LL);
return rv1565; }
}
if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1555))).f_T, l_AT_1564)))
{
l_EXACT_1557 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1564)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1555))).f_T)))).f_KIND == g_T_INT)))
{
if ((((*(R22 *)rt_nil_check(l_AT_1564))).f_SCALE > ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1555))).f_T))).f_SCALE))
{
{ rt_int rv1566 = ((rt_int)0LL);
return rv1566; }
}
}
}
}
l_P_1555 = ((*(R28 *)rt_nil_check(l_P_1555))).f_NEXT;
l_A_1556 = ((*(R27 *)rt_nil_check(l_A_1556))).f_NEXT;
}
} L_end1559: ;
if (l_EXACT_1557)
{
{ rt_int rv1567 = ((rt_int)2LL);
return rv1567; }
}
{ rt_int rv1568 = ((rt_int)1LL);
return rv1568; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { 
R22 * l_RT_1569; memset(&l_RT_1569, 0, sizeof l_RT_1569);
l_RT_1569 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1569))).f_KIND == g_T_ENUM))
{
{ rt_int rv1570 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1569) == NULL));
return rv1570; }
}
{ rt_int rv1571 = 0;
return rv1571; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1572 = (((*(R22 *)rt_nil_check(l_RT_1569))).f_KIND == g_T_PTR);
return rv1572; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1573 = (((*(R22 *)rt_nil_check(l_RT_1569))).f_KIND == g_T_REC);
return rv1573; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1574 = (((*(R22 *)rt_nil_check(l_RT_1569))).f_KIND == g_T_ARR);
return rv1574; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1575 = (((*(R22 *)rt_nil_check(l_RT_1569))).f_KIND == g_T_INT);
return rv1575; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1576 = ((((*(R22 *)rt_nil_check(l_RT_1569))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1569))).f_KIND == g_T_SEM));
return rv1576; }
}
{ rt_int rv1577 = 0;
return rv1577; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { 
R12 * l_Y_1578; memset(&l_Y_1578, 0, sizeof l_Y_1578);
l_Y_1578 = r_ORIGINAL(p_Y0);
R28 * l_P_1579; memset(&l_P_1579, 0, sizeof l_P_1579);
R27 * l_A_1580; memset(&l_A_1580, 0, sizeof l_A_1580);
l_A_1580 = p_ARGS;
R10 l_C_1581; memset(&l_C_1581, 0, sizeof l_C_1581);
S_R10(&l_C_1581, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1582; memset(&l_SEP_1582, 0, sizeof l_SEP_1582);
S_R10(&l_SEP_1582, r_MK(rt_str("", 0)), 0);
if (((*(R12 *)rt_nil_check(l_Y_1578))).f_GENERIC)
{
l_Y_1578 = r_INSTANCE(l_Y_1578, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1578, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1578))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1581, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1578))).f_LEVEL), 0);
S_R10(&l_SEP_1582, r_MK(rt_str(", ", 2)), 0);
}
l_P_1579 = ((*(R12 *)rt_nil_check(l_Y_1578))).f_PARAMS;
for (;;) {
if ((l_P_1579 == NULL)) goto L_end1583;
{
if ((l_A_1580 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
if ((((*(R28 *)rt_nil_check(l_P_1579))).f_T == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1579))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1579))).f_T)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1584; memset(&l_V_1584, 0, sizeof l_V_1584);
if ((((*(R27 *)rt_nil_check(l_A_1580))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1580))))
{
S_R26(&l_V_1584, ((*(R27 *)rt_nil_check(l_A_1580))).f_V, 0);
}
else
{
S_R26(&l_V_1584, r_EXPR(((*(R27 *)rt_nil_check(l_A_1580))).f_E, ((*(R28 *)rt_nil_check(l_P_1579))).f_T), 0);
}
S_R10(&l_C_1581, r_FMT3(rt_str("@@@", 3), l_C_1581, l_SEP_1582, r_CONVERT(l_V_1584, ((*(R28 *)rt_nil_check(l_P_1579))).f_T, p_LINE, r_NO_TEXT())), 0);
S_R10(&l_SEP_1582, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1585; memset(&l_V_1585, 0, sizeof l_V_1585);
if (((*(R27 *)rt_nil_check(l_A_1580))).f_HAVE)
{
S_R26(&l_V_1585, ((*(R27 *)rt_nil_check(l_A_1580))).f_V, 0);
}
else
{
S_R26(&l_V_1585, r_EXPR(((*(R27 *)rt_nil_check(l_A_1580))).f_E, ((*(R28 *)rt_nil_check(l_P_1579))).f_T), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1580))).f_E == NULL)) && (!(l_V_1585).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1580))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1580))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1585, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1585).f_C), (l_V_1585).f_T), 0);
(l_V_1585).f_LVAL = 1;
}
}
if ((!(l_V_1585).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(l_P_1579))).f_T, (l_V_1585).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(((*(R28 *)rt_nil_check(l_P_1579))).f_T));
}
if (((((*(R28 *)rt_nil_check(l_P_1579))).f_MODE == g_M_INOUT) && (!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1579))).f_T, (l_V_1585).f_T))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
S_R10(&l_C_1581, r_FMT3(rt_str("@@&@", 4), l_C_1581, l_SEP_1582, (l_V_1585).f_C), 0);
S_R10(&l_SEP_1582, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1580 = ((*(R27 *)rt_nil_check(l_A_1580))).f_NEXT;
l_P_1579 = ((*(R28 *)rt_nil_check(l_P_1579))).f_NEXT;
}
} L_end1583: ;
if ((!(l_A_1580 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
{ R26 rv1586 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1578))).f_ACCESS, l_C_1581), ((*(R12 *)rt_nil_check(l_Y_1578))).f_RESULT);
return rv1586; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { 
if ((p_TS == NULL))
{
{ rt_int rv1587 = 0;
return rv1587; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1588 = 1;
return rv1588; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1589 = 1;
return rv1589; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1590 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1590; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1591 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1591; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1592 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1592; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1593 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1593; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1594 = 0;
return rv1594; }
}
{
R12 * l_Y_1595; memset(&l_Y_1595, 0, sizeof l_Y_1595);
l_Y_1595 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1596; memset(&l_A_1596, 0, sizeof l_A_1596);
l_A_1596 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1597; memset(&l_F_1597, 0, sizeof l_F_1597);
if ((l_Y_1595 == NULL))
{
{ rt_int rv1598 = 0;
return rv1598; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1595))).f_KIND == g_Y_GEN))
{
{ rt_int rv1599 = 1;
return rv1599; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1595))).f_DECL == NULL))
{
{ rt_int rv1600 = 0;
return rv1600; }
}
l_F_1597 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1595))).f_DECL))).f_A;
for (;;) {
if ((l_F_1597 == NULL)) goto L_end1601;
{
{
R21 * l_N_1602; memset(&l_N_1602, 0, sizeof l_N_1602);
l_N_1602 = ((*(R21 *)rt_nil_check(l_F_1597))).f_A;
for (;;) {
if ((l_N_1602 == NULL)) goto L_end1603;
{
if ((l_A_1596 == NULL))
{
{ rt_int rv1604 = 0;
return rv1604; }
}
if (((((*(R21 *)rt_nil_check(l_F_1597))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_1596))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_1596))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1596)))))
{
{ rt_int rv1605 = 1;
return rv1605; }
}
l_A_1596 = ((*(R21 *)rt_nil_check(l_A_1596))).f_NEXT;
l_N_1602 = ((*(R21 *)rt_nil_check(l_N_1602))).f_NEXT;
}
} L_end1603: ;
}
l_F_1597 = ((*(R21 *)rt_nil_check(l_F_1597))).f_NEXT;
}
} L_end1601: ;
}
}
{ rt_int rv1606 = 0;
return rv1606; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { 
R21 * l_P_1607; memset(&l_P_1607, 0, sizeof l_P_1607);
l_P_1607 = p_A;
for (;;) {
if ((l_P_1607 == NULL)) goto L_end1608;
{
if (((((*(R21 *)rt_nil_check(l_P_1607))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_1607))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1609 = 1;
return rv1609; }
}
l_P_1607 = ((*(R21 *)rt_nil_check(l_P_1607))).f_NEXT;
}
} L_end1608: ;
{ rt_int rv1610 = 0;
return rv1610; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { 
R21 * l_R_1611; memset(&l_R_1611, 0, sizeof l_R_1611);
l_R_1611 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_1612; memset(&l_P_1612, 0, sizeof l_P_1612);
R28 * l_TAIL_1613; memset(&l_TAIL_1613, 0, sizeof l_TAIL_1613);
l_TAIL_1613 = NULL;
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1612 = ((*(R21 *)rt_nil_check(l_R_1611))).f_A;
for (;;) {
if ((l_P_1612 == NULL)) goto L_end1614;
{
if (((((*(R21 *)rt_nil_check(l_P_1612))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_1612))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1612 = ((*(R21 *)rt_nil_check(l_P_1612))).f_NEXT;
}
} L_end1614: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_1611))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1612 = ((*(R21 *)rt_nil_check(l_R_1611))).f_A;
for (;;) {
if ((l_P_1612 == NULL)) goto L_end1615;
{
{
R28 * l_PM_1616; memset(&l_PM_1616, 0, sizeof l_PM_1616);
l_PM_1616 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1616)), ({ R28 rc1617; memset(&rc1617, 0, sizeof rc1617);  S_R10(&rc1617.f_NAME, ((*(R21 *)rt_nil_check(l_P_1612))).f_NAME, 0); rc1617.f_MODE = ((*(R21 *)rt_nil_check(l_P_1612))).f_IV; rc1617.f_T = NULL; rc1617.f_TS = ((*(R21 *)rt_nil_check(l_P_1612))).f_B; rc1617.f_NEXT = NULL; rc1617; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_1611))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_1612))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1612))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_1616))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1612))).f_B);
}
if ((l_TAIL_1613 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1616;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1613))).f_NEXT = l_PM_1616;
}
l_TAIL_1613 = l_PM_1616;
}
l_P_1612 = ((*(R21 *)rt_nil_check(l_P_1612))).f_NEXT;
}
} L_end1615: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { 
R21 * l_R_1618; memset(&l_R_1618, 0, sizeof l_R_1618);
l_R_1618 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_1619; memset(&l_T_1619, 0, sizeof l_T_1619);
if ((((*(R21 *)rt_nil_check(l_R_1618))).f_B == NULL))
{
{ R22 * rv1620 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1620; }
}
r_OPEN_SCOPE();
{
R28 * l_P_1621; memset(&l_P_1621, 0, sizeof l_P_1621);
l_P_1621 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1621 == NULL)) goto L_end1622;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1621))).f_T == NULL)))
{
{
R12 * l_V_1623; memset(&l_V_1623, 0, sizeof l_V_1623);
l_V_1623 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_1621))).f_NAME);
((*(R12 *)rt_nil_check(l_V_1623))).f_T = ((*(R28 *)rt_nil_check(l_P_1621))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_1623))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_1621))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_V_1623))).f_INPUT = 1;
r_DEFINE(l_V_1623, ((*(R21 *)rt_nil_check(l_R_1618))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_1621))).f_T, ((*(R12 *)rt_nil_check(l_V_1623))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_1618))).f_LINE, 0);
}
}
l_P_1621 = ((*(R28 *)rt_nil_check(l_P_1621))).f_NEXT;
}
} L_end1622: ;
}
l_T_1619 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_1618))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv1624 = l_T_1619;
return rv1624; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { 
R10 l_PS_1625; memset(&l_PS_1625, 0, sizeof l_PS_1625);
S_R10(&l_PS_1625, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1626; memset(&l_SEP_1626, 0, sizeof l_SEP_1626);
S_R10(&l_SEP_1626, r_MK(rt_str("", 0)), 0);
R28 * l_P_1627; memset(&l_P_1627, 0, sizeof l_P_1627);
l_P_1627 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_1625, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_1626, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_1627 == NULL)) goto L_end1628;
{
if ((((*(R28 *)rt_nil_check(l_P_1627))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1627))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1627))).f_MODE == g_M_IN))
{
S_R10(&l_PS_1625, r_FMT4(rt_str("@@@ p_@", 7), l_PS_1625, l_SEP_1626, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1627))).f_T), ((*(R28 *)rt_nil_check(l_P_1627))).f_NAME), 0);
S_R10(&l_SEP_1626, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_1625, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_1625, l_SEP_1626, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1627))).f_T), ((*(R28 *)rt_nil_check(l_P_1627))).f_NAME), 0);
S_R10(&l_SEP_1626, r_MK(rt_str(", ", 2)), 0);
}
l_P_1627 = ((*(R28 *)rt_nil_check(l_P_1627))).f_NEXT;
}
} L_end1628: ;
if (((l_PS_1625).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_1625, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv1629 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_1625);
return rv1629; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_PARAM_GENS(R22 * p_T, R10 p_PC, rt_int p_LINE, rt_int p_CHECK) { 
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
R25 * l_B_1630; memset(&l_B_1630, 0, sizeof l_B_1630);
l_B_1630 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1631; memset(&l_I_1631, 0, sizeof l_I_1631);
l_I_1631 = ((rt_int)0LL);
for (;;) {
if ((l_B_1630 == NULL)) goto L_end1632;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1630))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1630))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_1631)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1630))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1630))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_1630))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1630))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_1631)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1630))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_1631), p_PC, r_NUM(l_I_1631)), ((*(R25 *)rt_nil_check(l_B_1630))).f_LO), p_LINE, p_CHECK);
}
}
l_I_1631 = rt_add(l_I_1631, ((rt_int)1LL));
l_B_1630 = ((*(R25 *)rt_nil_check(l_B_1630))).f_NEXT;
}
} L_end1632: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_1633; memset(&l_U_1633, 0, sizeof l_U_1633);
l_U_1633 = r_REAL_TYPE(p_T);
R24 * l_F_1634; memset(&l_F_1634, 0, sizeof l_F_1634);
l_F_1634 = ((*(R22 *)rt_nil_check(l_U_1633))).f_FIELDS;
R25 * l_A_1635; memset(&l_A_1635, 0, sizeof l_A_1635);
l_A_1635 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_1634 == NULL) || (l_A_1635 == NULL))) goto L_end1636;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1634))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_1635))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_1635))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_1634))).f_CNAME), p_LINE, p_CHECK);
}
l_A_1635 = ((*(R25 *)rt_nil_check(l_A_1635))).f_NEXT;
}
l_F_1634 = ((*(R24 *)rt_nil_check(l_F_1634))).f_NEXT;
}
} L_end1636: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1637 = 0;
return rv1637; }
}
{ rt_int rv1638 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1638; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { 
{ R10 rv1639 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv1639; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { 
R12 * l_OLD_1640; memset(&l_OLD_1640, 0, sizeof l_OLD_1640);
l_OLD_1640 = r_LOOKUP(p_NAME);
if ((!(l_OLD_1640 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_1640))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_1640))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_1640))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_1641; memset(&l_G_1641, 0, sizeof l_G_1641);
l_G_1641 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_1641))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_1641))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_1641))).f_INPUT = 1;
r_DEFINE(l_G_1641, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { 
R20 * l_B_1642; memset(&l_B_1642, 0, sizeof l_B_1642);
l_B_1642 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1642)), ({ R20 rc1643; memset(&rc1643, 0, sizeof rc1643);  S_R10(&rc1643.f_NAME, r_NO_TEXT(), 0); rc1643.f_T = NULL; S_R10(&rc1643.f_C, r_NO_TEXT(), 0); rc1643.f_HASMV = 0; rc1643.f_MV = ((rt_int)0LL); rc1643.f_R = NULL; rc1643.f_NEXT = NULL; rc1643; }), 0);
{ R20 * rv1644 = l_B_1642;
return rv1644; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { 
R20 * l_B_1645; memset(&l_B_1645, 0, sizeof l_B_1645);
l_B_1645 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1645)), ({ R20 rc1646; memset(&rc1646, 0, sizeof rc1646);  S_R10(&rc1646.f_NAME, p_NAME, 0); rc1646.f_T = p_T; S_R10(&rc1646.f_C, r_NO_TEXT(), 0); rc1646.f_HASMV = (p_M).f_OK; rc1646.f_MV = (p_M).f_V; rc1646.f_R = p_R; rc1646.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc1646; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_1645))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_1645;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { 
R20 * l_B_1647; memset(&l_B_1647, 0, sizeof l_B_1647);
l_B_1647 = p_BS;
for (;;) {
if ((l_B_1647 == NULL)) goto L_end1648;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_1647))).f_NAME, p_NAME))
{
{ R20 * rv1649 = l_B_1647;
return rv1649; }
}
l_B_1647 = ((*(R20 *)rt_nil_check(l_B_1647))).f_NEXT;
}
} L_end1648: ;
{ R20 * rv1650 = NULL;
return rv1650; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { 
R22 * l_RT_1651; memset(&l_RT_1651, 0, sizeof l_RT_1651);
l_RT_1651 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv1652 = 1;
return rv1652; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv1653 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv1653; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1654 = 1;
return rv1654; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1655 = 1;
return rv1655; }
}
{
R20 * l_B_1656; memset(&l_B_1656, 0, sizeof l_B_1656);
l_B_1656 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_1656 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_1656))).f_T == NULL))
{
{ rt_int rv1657 = 0;
return rv1657; }
}
{ rt_int rv1658 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_1656))).f_T, p_T);
return rv1658; }
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
{ rt_int rv1659 = 1;
return rv1659; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_ARR)))
{
{ rt_int rv1660 = 0;
return rv1660; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_1651))).f_DIMS)))
{
{ rt_int rv1661 = 0;
return rv1661; }
}
{ rt_int rv1662 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_1651))).f_ELEM, p_BS);
return rv1662; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv1663 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1663; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1664 = 0;
return rv1664; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_1651))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_1651))).f_MHI, p_BS))))
{
{ rt_int rv1665 = 0;
return rv1665; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_INT)))
{
{ rt_int rv1666 = 0;
return rv1666; }
}
{ rt_int rv1667 = (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1651))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
return rv1667; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv1668 = ((((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_1651))).f_SCALE == ((rt_int)0LL)));
return rv1668; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1669 = 0;
return rv1669; }
}
{ rt_int rv1670 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1651))).f_SCALE), p_BS);
return rv1670; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv1671 = (((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_BOOL);
return rv1671; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv1672 = (((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_STR);
return rv1672; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_STR)))
{
{ rt_int rv1673 = 0;
return rv1673; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv1674 = 1;
return rv1674; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_1651))).f_BASE == NULL)))
{
{ rt_int rv1675 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_1651))).f_BASE, p_BS);
return rv1675; }
}
{ rt_int rv1676 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv1676; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv1677 = (((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_BITS);
return rv1677; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv1678 = (((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_SEM);
return rv1678; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_PTR)))
{
{ rt_int rv1679 = 0;
return rv1679; }
}
{ rt_int rv1680 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_1651), p_BS);
return rv1680; }
}
{
R12 * l_Y_1681; memset(&l_Y_1681, 0, sizeof l_Y_1681);
l_Y_1681 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_1681 == NULL))
{
{ rt_int rv1682 = 0;
return rv1682; }
}
if (((((*(R12 *)rt_nil_check(l_Y_1681))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_1681))).f_DECL == NULL)))
{
{ rt_int rv1683 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_1681))).f_T, p_T);
return rv1683; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1681))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv1684 = 0;
return rv1684; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_1681))))
{
{ rt_int rv1685 = 0;
return rv1685; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1681))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1651))).f_KIND == g_T_REC)))
{
{ rt_int rv1686 = 0;
return rv1686; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1651))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv1687 = 0;
return rv1687; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1651))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_1681))))
{
{ rt_int rv1688 = 0;
return rv1688; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv1689 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1689; }
}
{ rt_int rv1690 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1681))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1681))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_1651, p_BS);
return rv1690; }
}
{
R21 * l_F_1691; memset(&l_F_1691, 0, sizeof l_F_1691);
l_F_1691 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1681))).f_DECL))).f_A;
R21 * l_A_1692; memset(&l_A_1692, 0, sizeof l_A_1692);
l_A_1692 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_1693; memset(&l_V_1693, 0, sizeof l_V_1693);
l_V_1693 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_1694; memset(&l_CLASS_1694, 0, sizeof l_CLASS_1694);
l_CLASS_1694 = r_RECORD_CLASS_OF(l_RT_1651);
for (;;) {
if ((l_F_1691 == NULL)) goto L_end1695;
{
{
R21 * l_N_1696; memset(&l_N_1696, 0, sizeof l_N_1696);
l_N_1696 = ((*(R21 *)rt_nil_check(l_F_1691))).f_A;
for (;;) {
if ((l_N_1696 == NULL)) goto L_end1697;
{
if ((l_A_1692 == NULL))
{
{ rt_int rv1698 = 0;
return rv1698; }
}
if ((((*(R21 *)rt_nil_check(l_F_1691))).f_B == NULL))
{
if ((!(l_CLASS_1694 == NULL)))
{
{
R20 * l_B_1699; memset(&l_B_1699, 0, sizeof l_B_1699);
l_B_1699 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_1694))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_1696))).f_NAME);
if ((!(l_B_1699 == NULL)))
{
if ((!r_UNIFY(l_A_1692, ((*(R20 *)rt_nil_check(l_B_1699))).f_T, p_BS)))
{
{ rt_int rv1700 = 0;
return rv1700; }
}
}
}
}
}
else
{
if ((!(l_V_1693 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_1692))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_1692))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_1692))).f_KIND == g_N_ANY))))
{
{
R23 l_M_1701; memset(&l_M_1701, 0, sizeof l_M_1701);
S_R23(&l_M_1701, r_MANIFEST(l_A_1692), 0);
if (((l_M_1701).f_OK && (((*(R25 *)rt_nil_check(l_V_1693))).f_MLO).f_OK))
{
if ((!((l_M_1701).f_V == (((*(R25 *)rt_nil_check(l_V_1693))).f_MLO).f_V)))
{
{ rt_int rv1702 = 0;
return rv1702; }
}
}
}
}
l_V_1693 = ((*(R25 *)rt_nil_check(l_V_1693))).f_NEXT;
}
}
l_A_1692 = ((*(R21 *)rt_nil_check(l_A_1692))).f_NEXT;
l_N_1696 = ((*(R21 *)rt_nil_check(l_N_1696))).f_NEXT;
}
} L_end1697: ;
}
l_F_1691 = ((*(R21 *)rt_nil_check(l_F_1691))).f_NEXT;
}
} L_end1695: ;
}
{ rt_int rv1703 = 1;
return rv1703; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { 
R12 * l_R_1704; memset(&l_R_1704, 0, sizeof l_R_1704);
l_R_1704 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv1705 = NULL;
return rv1705; }
}
for (;;) {
if ((l_R_1704 == NULL)) goto L_end1706;
{
if ((((*(R12 *)rt_nil_check(l_R_1704))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv1707 = l_R_1704;
return rv1707; }
}
l_R_1704 = ((*(R12 *)rt_nil_check(l_R_1704))).f_INSTANCES;
}
} L_end1706: ;
{ R12 * rv1708 = NULL;
return rv1708; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { 
if ((p_A == NULL))
{
{ rt_int rv1709 = 1;
return rv1709; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1710 = 1;
return rv1710; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1711 = 1;
return rv1711; }
}
{
R20 * l_B_1712; memset(&l_B_1712, 0, sizeof l_B_1712);
l_B_1712 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_1712 == NULL)))
{
{ rt_int rv1713 = ((((*(R20 *)rt_nil_check(l_B_1712))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_1712))).f_MV == (p_M).f_V));
return rv1713; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv1714 = 0;
return rv1714; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv1715 = 1;
return rv1715; }
}
{
R23 l_V_1716; memset(&l_V_1716, 0, sizeof l_V_1716);
S_R23(&l_V_1716, r_MANIFEST(p_A), 0);
if (((l_V_1716).f_OK && (p_M).f_OK))
{
{ rt_int rv1717 = ((l_V_1716).f_V == (p_M).f_V);
return rv1717; }
}
}
{ rt_int rv1718 = 1;
return rv1718; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1719 = 0;
return rv1719; }
}
{ rt_int rv1720 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv1720; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv1721 = 1;
return rv1721; }
}
r_TYPE_ARG(p_A);
{ rt_int rv1722 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv1722; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { 
R20 * l_BS_1723; memset(&l_BS_1723, 0, sizeof l_BS_1723);
l_BS_1723 = r_NEW_BINDS();
R28 * l_P_1724; memset(&l_P_1724, 0, sizeof l_P_1724);
l_P_1724 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_1725; memset(&l_A_1725, 0, sizeof l_A_1725);
l_A_1725 = p_ARGS;
for (;;) {
if ((l_P_1724 == NULL)) goto L_end1726;
{
if ((((*(R28 *)rt_nil_check(l_P_1724))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1725))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1724))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_1725))).f_E), r_NO_MVAL(), NULL, l_BS_1723);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1724))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1724))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_1724))).f_TS, ((*(R27 *)rt_nil_check(l_A_1725))).f_E, p_LINE), l_BS_1723);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_1725))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_1725))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_1724))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1725))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_1725))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_1725))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_1725))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_1725))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_1724))).f_TS, (((*(R27 *)rt_nil_check(l_A_1725))).f_V).f_T, l_BS_1723)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_1724))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1724))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_1724))).f_NAME, (((*(R28 *)rt_nil_check(l_P_1724))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_1725))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_1723);
}
}
l_P_1724 = ((*(R28 *)rt_nil_check(l_P_1724))).f_NEXT;
l_A_1725 = ((*(R27 *)rt_nil_check(l_A_1725))).f_NEXT;
}
} L_end1726: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_1723);
{
R12 * l_I_1727; memset(&l_I_1727, 0, sizeof l_I_1727);
l_I_1727 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_1727 == NULL)) goto L_end1728;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_1727))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_1723))).f_NEXT))
{
{ R12 * rv1729 = l_I_1727;
return rv1729; }
}
l_I_1727 = ((*(R12 *)rt_nil_check(l_I_1727))).f_INSTANCES;
}
} L_end1728: ;
}
{ R12 * rv1730 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_1723))).f_NEXT, p_ARGS);
return rv1730; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { 
R20 * l_P_1731; memset(&l_P_1731, 0, sizeof l_P_1731);
l_P_1731 = p_A;
for (;;) {
if ((l_P_1731 == NULL)) goto L_end1732;
{
{
R20 * l_Q_1733; memset(&l_Q_1733, 0, sizeof l_Q_1733);
l_Q_1733 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_1731))).f_NAME);
if ((l_Q_1733 == NULL))
{
{ rt_int rv1734 = 0;
return rv1734; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_1731))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_1733))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_1731))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_1733))).f_T == NULL)))
{
{ rt_int rv1735 = 0;
return rv1735; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1731))).f_T, ((*(R20 *)rt_nil_check(l_Q_1733))).f_T)))
{
{ rt_int rv1736 = 0;
return rv1736; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_1731))).f_T, ((*(R20 *)rt_nil_check(l_Q_1733))).f_T)))
{
{ rt_int rv1737 = 0;
return rv1737; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_1731))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_1733))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_1731))).f_MV == ((*(R20 *)rt_nil_check(l_Q_1733))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_1731))).f_R == ((*(R20 *)rt_nil_check(l_Q_1733))).f_R))))
{
{ rt_int rv1738 = 0;
return rv1738; }
}
}
l_P_1731 = ((*(R20 *)rt_nil_check(l_P_1731))).f_NEXT;
}
} L_end1732: ;
{ rt_int rv1739 = 1;
return rv1739; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { 
R22 * l_RA_1740; memset(&l_RA_1740, 0, sizeof l_RA_1740);
l_RA_1740 = r_REAL_TYPE(p_A);
R22 * l_RB_1741; memset(&l_RB_1741, 0, sizeof l_RB_1741);
l_RB_1741 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_1740))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_1740))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_1740))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_1741))).f_KIND))))
{
{ rt_int rv1742 = 1;
return rv1742; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1740))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1741))).f_MLEN).f_OK))
{
{ rt_int rv1743 = ((((*(R22 *)rt_nil_check(l_RA_1740))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1741))).f_MLEN).f_V);
return rv1743; }
}
{ rt_int rv1744 = ((((*(R22 *)rt_nil_check(l_RA_1740))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_1741))).f_MLEN).f_OK);
return rv1744; }
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { 
R12 * l_Y_1745; memset(&l_Y_1745, 0, sizeof l_Y_1745);
l_Y_1745 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_1746; memset(&l_FOUND_1746, 0, sizeof l_FOUND_1746);
l_FOUND_1746 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_1745 == NULL)) goto L_end1747;
{
if ((((*(R12 *)rt_nil_check(l_Y_1745))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_1748; memset(&l_R_1748, 0, sizeof l_R_1748);
l_R_1748 = r_ORIGINAL(l_Y_1745);
r_ROUTINE_HEADER(l_R_1748);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_1748)) && (!((*(R12 *)rt_nil_check(l_R_1748))).f_GENERIC)))
{
if (((!(l_FOUND_1746 == NULL)) && (!(l_FOUND_1746 == l_R_1748))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_1746 = l_R_1748;
}
}
}
l_Y_1745 = r_LOOKUP_NEXT(l_Y_1745);
}
} L_end1747: ;
if ((l_FOUND_1746 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_1746))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv1749 = l_FOUND_1746;
return rv1749; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { 
R21 * l_NEEDL_1750; memset(&l_NEEDL_1750, 0, sizeof l_NEEDL_1750);
l_NEEDL_1750 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_1751; memset(&l_SAVED_1751, 0, sizeof l_SAVED_1751);
l_SAVED_1751 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_1750 == NULL)) goto L_end1752;
{
{
R21 * l_T_1753; memset(&l_T_1753, 0, sizeof l_T_1753);
l_T_1753 = ((*(R21 *)rt_nil_check(l_NEEDL_1750))).f_A;
for (;;) {
if ((l_T_1753 == NULL)) goto L_end1754;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_1753))).f_NAME) == NULL))
{
{
R27 * l_ARGS_1755; memset(&l_ARGS_1755, 0, sizeof l_ARGS_1755);
l_ARGS_1755 = NULL;
R27 * l_TAIL_1756; memset(&l_TAIL_1756, 0, sizeof l_TAIL_1756);
l_TAIL_1756 = NULL;
R21 * l_P_1757; memset(&l_P_1757, 0, sizeof l_P_1757);
l_P_1757 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_1753))).f_B))).f_A;
R12 * l_R_1758; memset(&l_R_1758, 0, sizeof l_R_1758);
rt_int l_ENTERED_1759; memset(&l_ENTERED_1759, 0, sizeof l_ENTERED_1759);
l_ENTERED_1759 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_1757 == NULL)) goto L_end1760;
{
{
R27 * l_A_1761; memset(&l_A_1761, 0, sizeof l_A_1761);
if ((((*(R21 *)rt_nil_check(l_P_1757))).f_B == NULL))
{
l_A_1761 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_1761 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1757))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_1761))).f_MODE = ((*(R21 *)rt_nil_check(l_P_1757))).f_IV;
if ((l_TAIL_1756 == NULL))
{
l_ARGS_1755 = l_A_1761;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1756))).f_NEXT = l_A_1761;
}
l_TAIL_1756 = l_A_1761;
}
l_P_1757 = ((*(R21 *)rt_nil_check(l_P_1757))).f_NEXT;
}
} L_end1760: ;
if (l_ENTERED_1759)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_1758 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_1753))).f_NAME, l_ARGS_1755, p_LINE, 0);
if ((l_R_1758 == NULL))
{
l_R_1758 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_1753))).f_NAME);
for (;;) {
if ((l_R_1758 == NULL)) goto L_end1762;
{
if ((((*(R12 *)rt_nil_check(l_R_1758))).f_KIND == g_Y_BUILTIN))
{
goto L_end1762;
}
l_R_1758 = r_LOOKUP_NEXT(l_R_1758);
}
} L_end1762: ;
}
if (((l_R_1758 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_1753))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_1753))).f_NAME);
}
if ((!(l_R_1758 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_1753))).f_NAME, NULL, r_NO_MVAL(), l_R_1758, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_1753 = ((*(R21 *)rt_nil_check(l_T_1753))).f_NEXT;
}
} L_end1754: ;
}
l_NEEDL_1750 = ((*(R21 *)rt_nil_check(l_NEEDL_1750))).f_NEXT;
}
} L_end1752: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1751;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1763 = 0;
return rv1763; }
}
{
R12 * l_Y_1764; memset(&l_Y_1764, 0, sizeof l_Y_1764);
l_Y_1764 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1765; memset(&l_A_1765, 0, sizeof l_A_1765);
l_A_1765 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1766; memset(&l_F_1766, 0, sizeof l_F_1766);
if ((l_Y_1764 == NULL))
{
{ rt_int rv1767 = 0;
return rv1767; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_1764))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_1764))).f_DECL == NULL)))
{
{ rt_int rv1768 = 0;
return rv1768; }
}
l_F_1766 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1764))).f_DECL))).f_A;
for (;;) {
if ((l_F_1766 == NULL)) goto L_end1769;
{
{
R21 * l_N_1770; memset(&l_N_1770, 0, sizeof l_N_1770);
l_N_1770 = ((*(R21 *)rt_nil_check(l_F_1766))).f_A;
for (;;) {
if ((l_N_1770 == NULL)) goto L_end1771;
{
if ((l_A_1765 == NULL))
{
{ rt_int rv1772 = 0;
return rv1772; }
}
if (((((*(R21 *)rt_nil_check(l_F_1766))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_1765))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1773 = 1;
return rv1773; }
}
l_A_1765 = ((*(R21 *)rt_nil_check(l_A_1765))).f_NEXT;
l_N_1770 = ((*(R21 *)rt_nil_check(l_N_1770))).f_NEXT;
}
} L_end1771: ;
}
l_F_1766 = ((*(R21 *)rt_nil_check(l_F_1766))).f_NEXT;
}
} L_end1769: ;
}
{ rt_int rv1774 = 0;
return rv1774; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { 
R27 * l_A_1775; memset(&l_A_1775, 0, sizeof l_A_1775);
l_A_1775 = p_ARGS;
R12 * l_I_1776; memset(&l_I_1776, 0, sizeof l_I_1776);
l_I_1776 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_1777; memset(&l_SAVED_1777, 0, sizeof l_SAVED_1777);
l_SAVED_1777 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_1778; memset(&l_P_1778, 0, sizeof l_P_1778);
l_P_1778 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_1779; memset(&l_TAIL_1779, 0, sizeof l_TAIL_1779);
l_TAIL_1779 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_1776)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_1776))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_1776))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_1776))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_1776))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_1776))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_1776;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_1778 == NULL)) goto L_end1780;
{
{
R28 * l_PM_1781; memset(&l_PM_1781, 0, sizeof l_PM_1781);
l_PM_1781 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1781)), (*(R28 *)rt_nil_check(l_P_1778)), 0);
((*(R28 *)rt_nil_check(l_PM_1781))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_1778))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_1781))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1778))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_1781))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1778))).f_TS) && ((*(R27 *)rt_nil_check(l_A_1775))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_1781))).f_T = (((*(R27 *)rt_nil_check(l_A_1775))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1781))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1781))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_1781))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1781))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_1781))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_1778))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_1781))).f_TS = NULL;
if ((l_TAIL_1779 == NULL))
{
((*(R12 *)rt_nil_check(l_I_1776))).f_PARAMS = l_PM_1781;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1779))).f_NEXT = l_PM_1781;
}
l_TAIL_1779 = l_PM_1781;
}
l_P_1778 = ((*(R28 *)rt_nil_check(l_P_1778))).f_NEXT;
l_A_1775 = ((*(R27 *)rt_nil_check(l_A_1775))).f_NEXT;
}
} L_end1780: ;
((*(R12 *)rt_nil_check(l_I_1776))).f_RESULT = r_RESULT_TYPE(l_I_1776);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1777;
S_R10(&((*(R12 *)rt_nil_check(l_I_1776))).f_FWD, r_C_HEADER(l_I_1776), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_1776))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_1776))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_1776;
{ R12 * rv1782 = l_I_1776;
return rv1782; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1783 = 0;
return rv1783; }
}
{ rt_int rv1784 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv1784; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { 
R21 * l_C_1785; memset(&l_C_1785, 0, sizeof l_C_1785);
if ((p_TS == NULL))
{
{ R21 * rv1786 = NULL;
return rv1786; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_1787; memset(&l_F_1787, 0, sizeof l_F_1787);
l_F_1787 = p_FORMALS;
R21 * l_A_1788; memset(&l_A_1788, 0, sizeof l_A_1788);
l_A_1788 = p_ARGS;
for (;;) {
if ((l_F_1787 == NULL)) goto L_end1789;
{
{
R21 * l_N_1790; memset(&l_N_1790, 0, sizeof l_N_1790);
l_N_1790 = ((*(R21 *)rt_nil_check(l_F_1787))).f_A;
for (;;) {
if ((l_N_1790 == NULL)) goto L_end1791;
{
if ((l_A_1788 == NULL))
{
{ R21 * rv1792 = p_TS;
return rv1792; }
}
if (((((*(R21 *)rt_nil_check(l_F_1787))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_1790))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv1793 = l_A_1788;
return rv1793; }
}
l_A_1788 = ((*(R21 *)rt_nil_check(l_A_1788))).f_NEXT;
l_N_1790 = ((*(R21 *)rt_nil_check(l_N_1790))).f_NEXT;
}
} L_end1791: ;
}
l_F_1787 = ((*(R21 *)rt_nil_check(l_F_1787))).f_NEXT;
}
} L_end1789: ;
}
{ R21 * rv1794 = p_TS;
return rv1794; }
}
l_C_1785 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_1785))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_1785))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv1795 = l_C_1785;
return rv1795; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { 
R21 * l_C_1796; memset(&l_C_1796, 0, sizeof l_C_1796);
l_C_1796 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_1796)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_1796))).f_NEXT = NULL;
{ R21 * rv1797 = l_C_1796;
return rv1797; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { 
R21 * l_P_1798; memset(&l_P_1798, 0, sizeof l_P_1798);
l_P_1798 = p_L;
for (;;) {
if ((l_P_1798 == NULL)) goto L_end1799;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1798))).f_NAME, p_NAME))
{
{ rt_int rv1800 = 1;
return rv1800; }
}
l_P_1798 = ((*(R21 *)rt_nil_check(l_P_1798))).f_NEXT;
}
} L_end1799: ;
{ rt_int rv1801 = 0;
return rv1801; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { 
R19 * l_IS_1802; memset(&l_IS_1802, 0, sizeof l_IS_1802);
l_IS_1802 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv1803 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1803; }
}
if ((l_IS_1802 == NULL))
{
{ rt_int rv1804 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1804; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_1802))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_1802))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv1805 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1805; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_1802))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1802))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1806 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1806; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1802))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1807 = 0;
return rv1807; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { 
R21 * l_ITEMS_1808; memset(&l_ITEMS_1808, 0, sizeof l_ITEMS_1808);
l_ITEMS_1808 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_1809; memset(&l_HEAD_1809, 0, sizeof l_HEAD_1809);
l_HEAD_1809 = NULL;
R21 * l_TAIL_1810; memset(&l_TAIL_1810, 0, sizeof l_TAIL_1810);
l_TAIL_1810 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_1808 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1808))).f_A, &l_HEAD_1809, &l_TAIL_1810);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1808))).f_B, &l_HEAD_1809, &l_TAIL_1810);
{
R21 * l_R_1811; memset(&l_R_1811, 0, sizeof l_R_1811);
l_R_1811 = ((*(R21 *)rt_nil_check(l_ITEMS_1808))).f_C;
for (;;) {
if ((l_R_1811 == NULL)) goto L_end1812;
{
{
R12 * l_Z_1813; memset(&l_Z_1813, 0, sizeof l_Z_1813);
l_Z_1813 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_1811))).f_NAME);
if ((l_Z_1813 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_1811))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_1811))).f_NAME);
}
for (;;) {
if ((l_Z_1813 == NULL)) goto L_end1814;
{
if ((((*(R12 *)rt_nil_check(l_Z_1813))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_1815; memset(&l_O_1815, 0, sizeof l_O_1815);
l_O_1815 = r_ORIGINAL(l_Z_1813);
R21 * l_U_1816; memset(&l_U_1816, 0, sizeof l_U_1816);
r_COMPUTE_USES(l_O_1815);
l_U_1816 = ((*(R12 *)rt_nil_check(l_O_1815))).f_USES;
for (;;) {
if ((l_U_1816 == NULL)) goto L_end1817;
{
if ((!r_IN_IDENTS(l_HEAD_1809, ((*(R21 *)rt_nil_check(l_U_1816))).f_NAME)))
{
{
R21 * l_N_1818; memset(&l_N_1818, 0, sizeof l_N_1818);
l_N_1818 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_1816))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1818))).f_NAME, ((*(R21 *)rt_nil_check(l_U_1816))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1818))).f_IV = ((*(R21 *)rt_nil_check(l_U_1816))).f_IV;
r_ADD_LIST(l_N_1818, &l_HEAD_1809, &l_TAIL_1810);
}
}
l_U_1816 = ((*(R21 *)rt_nil_check(l_U_1816))).f_NEXT;
}
} L_end1817: ;
}
}
l_Z_1813 = r_LOOKUP_NEXT(l_Z_1813);
}
} L_end1814: ;
}
l_R_1811 = ((*(R21 *)rt_nil_check(l_R_1811))).f_NEXT;
}
} L_end1812: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_1809;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static void r_ROUTINE_USES(R21 * p_RS) { 
R21 * l_R_1819; memset(&l_R_1819, 0, sizeof l_R_1819);
l_R_1819 = p_RS;
for (;;) {
if ((l_R_1819 == NULL)) goto L_end1820;
{
if ((((*(R21 *)rt_nil_check(l_R_1819))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_1819));
}
l_R_1819 = ((*(R21 *)rt_nil_check(l_R_1819))).f_NEXT;
}
} L_end1820: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { 
R21 * l_P_1821; memset(&l_P_1821, 0, sizeof l_P_1821);
l_P_1821 = p_L;
for (;;) {
if ((l_P_1821 == NULL)) goto L_end1822;
{
{
R12 * l_V_1823; memset(&l_V_1823, 0, sizeof l_V_1823);
l_V_1823 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_1821))).f_NAME);
R21 * l_N_1824; memset(&l_N_1824, 0, sizeof l_N_1824);
l_N_1824 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_1821))).f_LINE);
if ((l_V_1823 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1821))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_1821))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_1824))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1821))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1824))).f_IV = ((*(R12 *)rt_nil_check(l_V_1823))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_1823))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_1824, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_1821 = ((*(R21 *)rt_nil_check(l_P_1821))).f_NEXT;
}
} L_end1822: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { 
R19 * l_IS_1825; memset(&l_IS_1825, 0, sizeof l_IS_1825);
l_IS_1825 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_1826; memset(&l_U_1826, 0, sizeof l_U_1826);
l_U_1826 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_1825 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_1825))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_1826 == NULL)) goto L_end1827;
{
if ((!(((*(R21 *)rt_nil_check(l_U_1826))).f_IV == ((*(R19 *)rt_nil_check(l_IS_1825))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_1825))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_1826))).f_NAME, (((*(R21 *)rt_nil_check(l_U_1826))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1825))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_1826))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1825))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_1826))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1825))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1825))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1825))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1825))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_1826))).f_NAME)))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_1826))).f_NAME, (((*(R21 *)rt_nil_check(l_U_1826))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_1826 = ((*(R21 *)rt_nil_check(l_U_1826))).f_NEXT;
}
} L_end1827: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { 
R21 * l_R_1828; memset(&l_R_1828, 0, sizeof l_R_1828);
l_R_1828 = p_RS;
for (;;) {
if ((l_R_1828 == NULL)) goto L_end1829;
{
{
R12 * l_Z_1830; memset(&l_Z_1830, 0, sizeof l_Z_1830);
l_Z_1830 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_1828))).f_NAME);
for (;;) {
if ((l_Z_1830 == NULL)) goto L_end1831;
{
if ((((*(R12 *)rt_nil_check(l_Z_1830))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_1832; memset(&l_O_1832, 0, sizeof l_O_1832);
l_O_1832 = r_ORIGINAL(l_Z_1830);
r_COMPUTE_USES(l_O_1832);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_1832))).f_USES, p_NAME))
{
{ rt_int rv1833 = 1;
return rv1833; }
}
}
}
l_Z_1830 = r_LOOKUP_NEXT(l_Z_1830);
}
} L_end1831: ;
}
l_R_1828 = ((*(R21 *)rt_nil_check(l_R_1828))).f_NEXT;
}
} L_end1829: ;
{ rt_int rv1834 = 0;
return rv1834; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { 
R12 * l_M_1835; memset(&l_M_1835, 0, sizeof l_M_1835);
l_M_1835 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_1835 == NULL)) goto L_end1836;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_1835))).f_NAME))
{
{ rt_int rv1837 = 1;
return rv1837; }
}
l_M_1835 = ((*(R12 *)rt_nil_check(l_M_1835))).f_MODL;
}
} L_end1836: ;
{ rt_int rv1838 = 0;
return rv1838; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv1839 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv1839; }
}
{ R10 rv1840 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv1840; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { 
R17 * l_C_1841; memset(&l_C_1841, 0, sizeof l_C_1841);
l_C_1841 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1841 == NULL)) goto L_end1842;
{
if ((((*(R17 *)rt_nil_check(l_C_1841))).f_KIND == ((rt_int)1LL)))
{
goto L_end1842;
}
if ((((*(R17 *)rt_nil_check(l_C_1841))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_1843; memset(&l_H_1843, 0, sizeof l_H_1843);
l_H_1843 = ((*(R17 *)rt_nil_check(l_C_1841))).f_HANDLERS;
for (;;) {
if ((l_H_1843 == NULL)) goto L_end1844;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_1843))).f_A, p_NAME))
{
{ rt_int rv1845 = 1;
return rv1845; }
}
l_H_1843 = ((*(R21 *)rt_nil_check(l_H_1843))).f_NEXT;
}
} L_end1844: ;
}
}
l_C_1841 = ((*(R17 *)rt_nil_check(l_C_1841))).f_NEXT;
}
} L_end1842: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv1846 = 1;
return rv1846; }
}
}
{ rt_int rv1847 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv1847; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { 
R17 * l_C_1848; memset(&l_C_1848, 0, sizeof l_C_1848);
l_C_1848 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_1848)), ({ R17 rc1849; memset(&rc1849, 0, sizeof rc1849);  rc1849.f_KIND = p_KIND; S_R10(&rc1849.f_NAME, p_NAME, 0); rc1849.f_HANDLERS = NULL; rc1849.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc1849; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_1848;
}
static void r_POP_CTX(void) { 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { 
R17 * l_C_1850; memset(&l_C_1850, 0, sizeof l_C_1850);
l_C_1850 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1850 == NULL)) goto L_end1851;
{
if ((((*(R17 *)rt_nil_check(l_C_1850))).f_KIND == p_KIND))
{
{ R17 * rv1852 = l_C_1850;
return rv1852; }
}
if ((((*(R17 *)rt_nil_check(l_C_1850))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv1853 = NULL;
return rv1853; }
}
if ((((*(R17 *)rt_nil_check(l_C_1850))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_1850))).f_NAME));
}
l_C_1850 = ((*(R17 *)rt_nil_check(l_C_1850))).f_NEXT;
}
} L_end1851: ;
{ R17 * rv1854 = NULL;
return rv1854; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { 
R17 * l_C_1855; memset(&l_C_1855, 0, sizeof l_C_1855);
l_C_1855 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_1856; memset(&l_N_1856, 0, sizeof l_N_1856);
l_N_1856 = ((rt_int)0LL);
for (;;) {
if ((l_C_1855 == NULL)) goto L_end1857;
{
if ((((*(R17 *)rt_nil_check(l_C_1855))).f_KIND == ((rt_int)1LL)))
{
goto L_end1857;
}
if ((((*(R17 *)rt_nil_check(l_C_1855))).f_KIND == ((rt_int)3LL)))
{
l_N_1856 = rt_add(l_N_1856, ((rt_int)1LL));
}
l_C_1855 = ((*(R17 *)rt_nil_check(l_C_1855))).f_NEXT;
}
} L_end1857: ;
{ rt_int rv1858 = l_N_1856;
return rv1858; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { 
R21 * l_N_1859; memset(&l_N_1859, 0, sizeof l_N_1859);
l_N_1859 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_1859 == NULL)) goto L_end1860;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_1859))).f_NAME, p_NAME))
{
{ R10 rv1861 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1861; }
}
l_N_1859 = ((*(R21 *)rt_nil_check(l_N_1859))).f_NEXT;
}
} L_end1860: ;
l_N_1859 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_1859))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1859))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_1859;
{ R10 rv1862 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1862; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { 
R21 * l_D_1863; memset(&l_D_1863, 0, sizeof l_D_1863);
l_D_1863 = p_DECLS;
for (;;) {
if ((l_D_1863 == NULL)) goto L_end1864;
{
if (((((*(R21 *)rt_nil_check(l_D_1863))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_1863))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_1865; memset(&l_Y_1865, 0, sizeof l_Y_1865);
l_Y_1865 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_1863))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_1863))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_1865))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_1865))).f_DECL = l_D_1863;
r_DEFINE(l_Y_1865, ((*(R21 *)rt_nil_check(l_D_1863))).f_LINE);
}
}
l_D_1863 = ((*(R21 *)rt_nil_check(l_D_1863))).f_NEXT;
}
} L_end1864: ;
}
static void r_DECLARE_LABELS(R21 * p_S0) { 
R21 * l_S_1866; memset(&l_S_1866, 0, sizeof l_S_1866);
l_S_1866 = p_S0;
for (;;) {
if ((l_S_1866 == NULL)) goto L_end1867;
{
{
R21 * l_L_1868; memset(&l_L_1868, 0, sizeof l_L_1868);
l_L_1868 = l_S_1866;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_1868))).f_KIND == g_N_LABELED))) goto L_end1869;
{
{
R12 * l_Y_1870; memset(&l_Y_1870, 0, sizeof l_Y_1870);
l_Y_1870 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_1868))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_1870))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(((*(R21 *)rt_nil_check(l_L_1868))).f_NAME, (((*(R21 *)rt_nil_check(l_L_1868))).f_NAME).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_1870))).f_MV = r_GUARDS();
r_DEFINE(l_Y_1870, ((*(R21 *)rt_nil_check(l_L_1868))).f_LINE);
}
l_L_1868 = ((*(R21 *)rt_nil_check(l_L_1868))).f_A;
}
} L_end1869: ;
}
l_S_1866 = ((*(R21 *)rt_nil_check(l_S_1866))).f_NEXT;
}
} L_end1867: ;
}
static void r_BODY(R21 * p_B) { 
R21 * l_D_1871; memset(&l_D_1871, 0, sizeof l_D_1871);
l_D_1871 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_1872; memset(&l_S_1872, 0, sizeof l_S_1872);
l_S_1872 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_1871 == NULL)) goto L_end1873;
{
if (((((*(R21 *)rt_nil_check(l_D_1871))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_1871))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1871);
}
l_D_1871 = ((*(R21 *)rt_nil_check(l_D_1871))).f_NEXT;
}
} L_end1873: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_1872 == NULL)) goto L_end1874;
{
r_STMT(l_S_1872);
l_S_1872 = ((*(R21 *)rt_nil_check(l_S_1872))).f_NEXT;
}
} L_end1874: ;
}
static void r_OPEN_BODY(R21 * p_B) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { 
R10 l_F_1875; memset(&l_F_1875, 0, sizeof l_F_1875);
S_R10(&l_F_1875, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_1876; memset(&l_H_1876, 0, sizeof l_H_1876);
l_H_1876 = p_HANDLERS;
R10 l_WORD_1877; memset(&l_WORD_1877, 0, sizeof l_WORD_1877);
S_R10(&l_WORD_1877, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_1875, l_F_1875));
r_PUSH_CTX(((rt_int)3LL), l_F_1875);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_1875, l_F_1875, l_F_1875));
for (;;) {
if ((l_H_1876 == NULL)) goto L_end1878;
{
{
R21 * l_N_1879; memset(&l_N_1879, 0, sizeof l_N_1879);
l_N_1879 = ((*(R21 *)rt_nil_check(l_H_1876))).f_A;
R10 l_COND_1880; memset(&l_COND_1880, 0, sizeof l_COND_1880);
S_R10(&l_COND_1880, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_1879 == NULL)) goto L_end1881;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_1879))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_1879))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_1879))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_1879))).f_NAME);
}
S_R10(&l_COND_1880, r_FMT3(rt_str("@ || @x == @", 12), l_COND_1880, l_F_1875, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_1879))).f_NAME)), 0);
l_N_1879 = ((*(R21 *)rt_nil_check(l_N_1879))).f_NEXT;
}
} L_end1881: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1877, l_COND_1880));
S_R10(&l_WORD_1877, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_1875, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_1876))).f_B);
r_POP_CTX();
}
l_H_1876 = ((*(R21 *)rt_nil_check(l_H_1876))).f_NEXT;
}
} L_end1878: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_1875));
}
static void r_STMT(R21 * p_S) { 
rt_int l_K_1882; memset(&l_K_1882, 0, sizeof l_K_1882);
l_K_1882 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_1882 == g_N_NULL))
{
return;
}
else if ((l_K_1882 == g_N_LABELED))
{
{
R12 * l_Y_1883; memset(&l_Y_1883, 0, sizeof l_Y_1883);
l_Y_1883 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_1883))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_1882 == g_N_GOTO))
{
{
R12 * l_Y_1884; memset(&l_Y_1884, 0, sizeof l_Y_1884);
l_Y_1884 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_1885; memset(&l_N_1885, 0, sizeof l_N_1885);
R17 * l_C_1886; memset(&l_C_1886, 0, sizeof l_C_1886);
l_C_1886 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_1884 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1884))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1884))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_1885 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_1884))).f_MV);
for (;;) {
if ((l_N_1885 <= ((rt_int)0LL))) goto L_end1887;
{
if ((((*(R17 *)rt_nil_check(l_C_1886))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_1886))).f_NAME));
l_N_1885 = rt_sub(l_N_1885, ((rt_int)1LL));
}
l_C_1886 = ((*(R17 *)rt_nil_check(l_C_1886))).f_NEXT;
}
} L_end1887: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_1884))).f_ACCESS));
}
}
else if ((l_K_1882 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_1882 == g_N_CALL))
{
{
R26 l_V_1888; memset(&l_V_1888, 0, sizeof l_V_1888);
S_R26(&l_V_1888, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_1888).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_1888).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_1888).f_C, rt_str(";", 1)));
}
}
else if ((l_K_1882 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1882 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_1882 == g_N_LOOP))
{
{
R10 l_END_L_1889; memset(&l_END_L_1889, 0, sizeof l_END_L_1889);
S_R10(&l_END_L_1889, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_1889));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1889);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_1889));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_1889));
}
}
else if ((l_K_1882 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_1882 == g_N_EXIT))
{
{
R17 * l_C_1890; memset(&l_C_1890, 0, sizeof l_C_1890);
l_C_1890 = r_LEAVE(((rt_int)2LL));
if ((l_C_1890 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_1890))).f_NAME));
}
}
else if ((l_K_1882 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_1882 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_1882 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_1882 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_1882 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1882 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_1882 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_1882 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { 
R12 * l_Y_1891; memset(&l_Y_1891, 0, sizeof l_Y_1891);
l_Y_1891 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_1891 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1891))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1891))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv1892 = r_CALL_EXPR(p_S, NULL);
return rv1892; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { 
R21 * l_ARM_1893; memset(&l_ARM_1893, 0, sizeof l_ARM_1893);
l_ARM_1893 = p_ARMS;
R10 l_WORD_1894; memset(&l_WORD_1894, 0, sizeof l_WORD_1894);
S_R10(&l_WORD_1894, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_1895; memset(&l_OPEN_1895, 0, sizeof l_OPEN_1895);
l_OPEN_1895 = ((rt_int)0LL);
rt_int l_CHOSEN_1896; memset(&l_CHOSEN_1896, 0, sizeof l_CHOSEN_1896);
l_CHOSEN_1896 = 0;
for (;;) {
if ((l_ARM_1893 == NULL)) goto L_end1897;
{
{
R23 l_M_1898; memset(&l_M_1898, 0, sizeof l_M_1898);
S_R23(&l_M_1898, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_1893))).f_A), 0);
if (l_CHOSEN_1896)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_1893))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_1893))).f_B);
}
else if ((l_M_1898).f_OK)
{
if ((!r_TEQS(l_WORD_1894, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_1895 = rt_add(l_OPEN_1895, ((rt_int)1LL));
S_R10(&l_WORD_1894, r_MK(rt_str("if", 2)), 0);
}
if (((l_M_1898).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_1893))).f_B);
l_CHOSEN_1896 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_1893))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1894, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_1893))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_1893))).f_B);
S_R10(&l_WORD_1894, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_1893 = ((*(R21 *)rt_nil_check(l_ARM_1893))).f_NEXT;
}
} L_end1897: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_1896)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_1894, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it1900_lo = ((rt_int)1LL), it1900_hi = l_OPEN_1895;
for (rt_int it1900 = it1900_lo; it1900 <= it1900_hi; it1900++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1899: ;
}
static void r_CHECK_BODY(R21 * p_B) { 
R14 l_SAVED_CODE_1901; memset(&l_SAVED_CODE_1901, 0, sizeof l_SAVED_CODE_1901);
S_R14(&l_SAVED_CODE_1901, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1902; memset(&rc1902, 0, sizeof rc1902);  rc1902.f_HEAD = NULL; rc1902.f_TAIL = NULL; rc1902; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1901, 0);
}
static void r_CHECK_COND(R21 * p_E) { 
R10 l_C_1903; memset(&l_C_1903, 0, sizeof l_C_1903);
S_R10(&l_C_1903, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { 
R10 l_END_L_1904; memset(&l_END_L_1904, 0, sizeof l_END_L_1904);
S_R10(&l_END_L_1904, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_1905; memset(&l_IT_1905, 0, sizeof l_IT_1905);
S_R10(&l_IT_1905, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_1906; memset(&l_R_1906, 0, sizeof l_R_1906);
l_R_1906 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_1907; memset(&l_LO_1907, 0, sizeof l_LO_1907);
S_R26(&l_LO_1907, r_EXPR(((*(R21 *)rt_nil_check(l_R_1906))).f_A, NULL), 0);
R26 l_HI_1908; memset(&l_HI_1908, 0, sizeof l_HI_1908);
S_R26(&l_HI_1908, r_EXPR(((*(R21 *)rt_nil_check(l_R_1906))).f_B, (l_LO_1907).f_T), 0);
R22 * l_T_1909; memset(&l_T_1909, 0, sizeof l_T_1909);
l_T_1909 = r_REAL_TYPE((l_LO_1907).f_T);
R10 l_LOC_1910; memset(&l_LOC_1910, 0, sizeof l_LOC_1910);
R10 l_HIC_1911; memset(&l_HIC_1911, 0, sizeof l_HIC_1911);
if ((((*(R22 *)rt_nil_check(l_T_1909))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1909))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_1909))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1909))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_1910, (l_LO_1907).f_C, 0);
S_R10(&l_HIC_1911, (l_HI_1908).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_1906))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1906))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_1910, r_FMT1(rt_str("(@) + 1", 7), l_LOC_1910), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1906))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_1911, r_FMT1(rt_str("(@) - 1", 7), l_HIC_1911), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_1905, l_LOC_1910, l_IT_1905, l_HIC_1911));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_1905, l_IT_1905, l_IT_1905, l_IT_1905));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1912; memset(&l_Y_1912, 0, sizeof l_Y_1912);
l_Y_1912 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_1912))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_1909))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_1912))).f_T = ((*(R22 *)rt_nil_check(l_T_1909))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_1912))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1912, rt_str("", 0)), l_IT_1905));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1912, rt_str("", 0)), l_IT_1905));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_1912))).f_ACCESS, l_IT_1905, 0);
}
r_DEFINE(l_Y_1912, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1904);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_1904));
}
static void r_RETURN_STMT(R21 * p_S) { 
R18 * l_CS_1913; memset(&l_CS_1913, 0, sizeof l_CS_1913);
l_CS_1913 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_1914; memset(&l_C_1914, 0, sizeof l_C_1914);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_1914 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_1913))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_1913))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_1913))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_1913))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODES(rt_str("return;", 7));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_1913))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_1913))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_1913))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_1915; memset(&l_V_1915, 0, sizeof l_V_1915);
S_R10(&l_V_1915, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_1913))).f_RESULT), l_V_1915, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_1913))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_1913))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_1914 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_1915));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_1916; memset(&l_C_1916, 0, sizeof l_C_1916);
l_C_1916 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1916 == NULL)) goto L_end1917;
{
if ((((*(R17 *)rt_nil_check(l_C_1916))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_1916))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_1916))).f_KIND == ((rt_int)1LL)))
{
goto L_end1917;
}
l_C_1916 = ((*(R17 *)rt_nil_check(l_C_1916))).f_NEXT;
}
} L_end1917: ;
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
static void r_ASSIGN_STMT(R21 * p_S) { 
R21 * l_TG_1918; memset(&l_TG_1918, 0, sizeof l_TG_1918);
l_TG_1918 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_1918))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_1919; memset(&l_B_1919, 0, sizeof l_B_1919);
S_R26(&l_B_1919, r_EXPR(((*(R21 *)rt_nil_check(l_TG_1918))).f_A, NULL), 0);
if ((!(l_B_1919).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_1919).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1920; memset(&l_ARGS_1920, 0, sizeof l_ARGS_1920);
l_ARGS_1920 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_1918))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_1918))).f_C, g_M_IN, r_VAL_ARG(l_B_1919, NULL))));
R12 * l_Y_1921; memset(&l_Y_1921, 0, sizeof l_Y_1921);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1920))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1921 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1920, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_1921 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1920))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1921 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1920, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_1921 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_1921, l_ARGS_1920, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_1919).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_1919).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_1922; memset(&l_V_1922, 0, sizeof l_V_1922);
S_R26(&l_V_1922, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_1919).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_1922).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_1919).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_1919).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_1918))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_1918))).f_C), (l_V_1922).f_C));
}
}
return;
}
{
R26 l_LV_1923; memset(&l_LV_1923, 0, sizeof l_LV_1923);
S_R26(&l_LV_1923, r_EXPR(l_TG_1918, NULL), 0);
if ((!(l_LV_1923).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_1923).f_T, (l_LV_1923).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_1923).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_1923).f_SELF));
}
}
static void r_WITH_STMT(R21 * p_S) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_1924; memset(&l_Y_1924, 0, sizeof l_Y_1924);
l_Y_1924 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_1925; memset(&l_V_1925, 0, sizeof l_V_1925);
S_R26(&l_V_1925, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_1924))).f_T = (l_V_1925).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_1926; memset(&l_CN_1926, 0, sizeof l_CN_1926);
S_R10(&l_CN_1926, r_NEW_OBJECT(l_Y_1924, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_1925).f_T))
{
r_CODE(r_INIT_CODE((l_V_1925).f_T, l_CN_1926));
}
r_CODE(r_ASSIGN_CODE((l_V_1925).f_T, l_CN_1926, (l_V_1925).f_C));
}
}
else
{
if ((!(l_V_1925).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_1927; memset(&l_P_1927, 0, sizeof l_P_1927);
S_R10(&l_P_1927, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_1925).f_T), l_P_1927, (l_V_1925).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_1924))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_1927), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_1924))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_1924))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_1924))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_1924, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { 
R21 * l_ARM_1928; memset(&l_ARM_1928, 0, sizeof l_ARM_1928);
l_ARM_1928 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_1929; memset(&l_CH_1929, 0, sizeof l_CH_1929);
S_R26(&l_CH_1929, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_1930; memset(&l_T_1930, 0, sizeof l_T_1930);
l_T_1930 = r_REAL_TYPE((l_CH_1929).f_T);
R12 * l_BOUND_1931; memset(&l_BOUND_1931, 0, sizeof l_BOUND_1931);
l_BOUND_1931 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_1930))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_1930))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_1932; memset(&l_TMP_1932, 0, sizeof l_TMP_1932);
S_R10(&l_TMP_1932, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_1933; memset(&l_WORD_1933, 0, sizeof l_WORD_1933);
S_R10(&l_WORD_1933, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_1932, (l_CH_1929).f_C));
for (;;) {
if ((l_ARM_1928 == NULL)) goto L_end1934;
{
{
R21 * l_L_1935; memset(&l_L_1935, 0, sizeof l_L_1935);
l_L_1935 = ((*(R21 *)rt_nil_check(l_ARM_1928))).f_A;
R10 l_COND_1936; memset(&l_COND_1936, 0, sizeof l_COND_1936);
S_R10(&l_COND_1936, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1935 == NULL)) goto L_end1937;
{
S_R10(&l_COND_1936, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_1936, l_TMP_1932, (r_EXPR(l_L_1935, l_T_1930)).f_C), 0);
l_L_1935 = ((*(R21 *)rt_nil_check(l_L_1935))).f_NEXT;
}
} L_end1937: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1933, l_COND_1936));
S_R10(&l_WORD_1933, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_1928))).f_B, ((*(R21 *)rt_nil_check(l_ARM_1928))).f_C);
}
l_ARM_1928 = ((*(R21 *)rt_nil_check(l_ARM_1928))).f_NEXT;
}
} L_end1934: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_1933, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_1930))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_1930))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_1930))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_1930))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_1930));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_1929).f_C));
for (;;) {
if ((l_ARM_1928 == NULL)) goto L_end1938;
{
{
R21 * l_L_1939; memset(&l_L_1939, 0, sizeof l_L_1939);
l_L_1939 = ((*(R21 *)rt_nil_check(l_ARM_1928))).f_A;
R23 l_FIRST_1940; memset(&l_FIRST_1940, 0, sizeof l_FIRST_1940);
S_R23(&l_FIRST_1940, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_1939 == NULL)) goto L_end1941;
{
if ((((*(R21 *)rt_nil_check(l_L_1939))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_1942; memset(&l_LO_1942, 0, sizeof l_LO_1942);
S_R23(&l_LO_1942, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_1939))).f_A, l_T_1930), 0);
R23 l_HI_1943; memset(&l_HI_1943, 0, sizeof l_HI_1943);
S_R23(&l_HI_1943, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_1939))).f_B, l_T_1930), 0);
rt_int l_A_1944; memset(&l_A_1944, 0, sizeof l_A_1944);
l_A_1944 = (l_LO_1942).f_V;
rt_int l_B_1945; memset(&l_B_1945, 0, sizeof l_B_1945);
l_B_1945 = (l_HI_1943).f_V;
if ((!(((l_LO_1942).f_OK && (l_HI_1943).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_1939))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_1939))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_1939))).f_IV == ((rt_int)3LL))))
{
l_A_1944 = rt_add(l_A_1944, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_1939))).f_IV >= ((rt_int)2LL)))
{
l_B_1945 = rt_sub(l_B_1945, ((rt_int)1LL));
}
if ((!(l_FIRST_1940).f_OK))
{
S_R23(&l_FIRST_1940, r_SOME(l_A_1944), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_1944), r_NUM(l_B_1945)));
}
}
else
{
{
R23 l_M_1946; memset(&l_M_1946, 0, sizeof l_M_1946);
S_R23(&l_M_1946, r_ENUM_MANIFEST(l_L_1939, l_T_1930), 0);
if ((!(l_M_1946).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_1939))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_1940).f_OK))
{
S_R23(&l_FIRST_1940, l_M_1946, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_1946).f_V)));
}
}
l_L_1939 = ((*(R21 *)rt_nil_check(l_L_1939))).f_NEXT;
}
} L_end1941: ;
if ((!(l_BOUND_1931 == NULL)))
{
{
R22 * l_SAVED_1947; memset(&l_SAVED_1947, 0, sizeof l_SAVED_1947);
l_SAVED_1947 = ((*(R12 *)rt_nil_check(l_BOUND_1931))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_1931))).f_T = r_NARROW(l_SAVED_1947, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_1940).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_1928))).f_B, ((*(R21 *)rt_nil_check(l_ARM_1928))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_1931))).f_T = l_SAVED_1947;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_1928))).f_B, ((*(R21 *)rt_nil_check(l_ARM_1928))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_1928 = ((*(R21 *)rt_nil_check(l_ARM_1928))).f_NEXT;
}
} L_end1938: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
}
static void r_CASE_ELEMENT(R21 * p_B, R21 * p_HANDLERS) { 
if ((p_HANDLERS == NULL))
{
r_OPEN_BODY(p_B);
}
else
{
r_GUARDED(NULL, p_B, p_HANDLERS);
}
}
static R12 * r_DISCRIMINATED(R21 * p_CH) { 
if ((!(((*(R21 *)rt_nil_check(p_CH))).f_KIND == g_N_FIELD)))
{
{ R12 * rv1948 = NULL;
return rv1948; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv1949 = NULL;
return rv1949; }
}
{
R12 * l_Y_1950; memset(&l_Y_1950, 0, sizeof l_Y_1950);
l_Y_1950 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_1950 == NULL))
{
{ R12 * rv1951 = NULL;
return rv1951; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1950))).f_KIND == g_Y_VAR)))
{
{ R12 * rv1952 = NULL;
return rv1952; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_1950))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv1953 = NULL;
return rv1953; }
}
{
R24 * l_F_1954; memset(&l_F_1954, 0, sizeof l_F_1954);
l_F_1954 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_1950))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_1954 == NULL))
{
{ R12 * rv1955 = NULL;
return rv1955; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_1954))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv1956 = NULL;
return rv1956; }
}
}
{ R12 * rv1957 = l_Y_1950;
return rv1957; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { 
R22 * l_N_1958; memset(&l_N_1958, 0, sizeof l_N_1958);
l_N_1958 = r_COPY_TYP(p_T);
R24 * l_F_1959; memset(&l_F_1959, 0, sizeof l_F_1959);
l_F_1959 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1960; memset(&l_A_1960, 0, sizeof l_A_1960);
l_A_1960 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_1961; memset(&l_HEAD_1961, 0, sizeof l_HEAD_1961);
l_HEAD_1961 = NULL;
R25 * l_TAIL_1962; memset(&l_TAIL_1962, 0, sizeof l_TAIL_1962);
l_TAIL_1962 = NULL;
for (;;) {
if ((l_F_1959 == NULL)) goto L_end1963;
{
if (((!(((*(R24 *)rt_nil_check(l_F_1959))).f_KIND == ((rt_int)0LL))) && (!(l_A_1960 == NULL))))
{
{
R25 * l_B_1964; memset(&l_B_1964, 0, sizeof l_B_1964);
l_B_1964 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_1964)), (*(R25 *)rt_nil_check(l_A_1960)), 0);
((*(R25 *)rt_nil_check(l_B_1964))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1959))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_1964))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_1964))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_1964))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_1962 == NULL))
{
l_HEAD_1961 = l_B_1964;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1962))).f_NEXT = l_B_1964;
}
l_TAIL_1962 = l_B_1964;
}
l_A_1960 = ((*(R25 *)rt_nil_check(l_A_1960))).f_NEXT;
}
l_F_1959 = ((*(R24 *)rt_nil_check(l_F_1959))).f_NEXT;
}
} L_end1963: ;
((*(R22 *)rt_nil_check(l_N_1958))).f_ARGS = l_HEAD_1961;
{ R22 * rv1965 = l_N_1958;
return rv1965; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { 
R21 * l_ARM_1966; memset(&l_ARM_1966, 0, sizeof l_ARM_1966);
l_ARM_1966 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_1967; memset(&l_SAVED_1967, 0, sizeof l_SAVED_1967);
l_SAVED_1967 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_1966 == NULL)) goto L_end1968;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_1966))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_1966))).f_B, ((*(R21 *)rt_nil_check(l_ARM_1966))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1967;
return;
}
l_ARM_1966 = ((*(R21 *)rt_nil_check(l_ARM_1966))).f_NEXT;
}
} L_end1968: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1967;
}
}
static R22 * r_PATHS_TYPE(void) { 
R22 * l_T_1969; memset(&l_T_1969, 0, sizeof l_T_1969);
l_T_1969 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_1969))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv1970 = l_T_1969;
return rv1970; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { 
R10 l_TD_1971; memset(&l_TD_1971, 0, sizeof l_TD_1971);
S_R10(&l_TD_1971, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_1972; memset(&l_P_1972, 0, sizeof l_P_1972);
l_P_1972 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_1972 == NULL)) goto L_end1973;
{
{
R12 * l_Y_1974; memset(&l_Y_1974, 0, sizeof l_Y_1974);
l_Y_1974 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_1972))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_1974))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_1974))).f_DECL = l_P_1972;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_1974, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_1974))).f_INPUT = 1;
r_DEFINE(l_Y_1974, ((*(R21 *)rt_nil_check(l_P_1972))).f_LINE);
}
l_P_1972 = ((*(R21 *)rt_nil_check(l_P_1972))).f_NEXT;
}
} L_end1973: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_1971));
r_CODES(rt_str("rt_b_par_begin();", 17));
l_P_1972 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_1972 == NULL)) goto L_end1975;
{
r_ACTIVATE_PATH(l_P_1972, l_TD_1971);
l_P_1972 = ((*(R21 *)rt_nil_check(l_P_1972))).f_NEXT;
}
} L_end1975: ;
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_1971));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { 
R10 l_FN_1976; memset(&l_FN_1976, 0, sizeof l_FN_1976);
S_R10(&l_FN_1976, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_1977; memset(&l_FT_1977, 0, sizeof l_FT_1977);
S_R10(&l_FT_1977, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_1978; memset(&l_Y_1978, 0, sizeof l_Y_1978);
l_Y_1978 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_1979; memset(&l_H_1979, 0, sizeof l_H_1979);
S_R10(&l_H_1979, r_OBJ_ACCESS(l_Y_1978), 0);
R10 l_IT_1980; memset(&l_IT_1980, 0, sizeof l_IT_1980);
S_R10(&l_IT_1980, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_1981; memset(&l_PRIO_1981, 0, sizeof l_PRIO_1981);
S_R10(&l_PRIO_1981, r_MK(rt_str("0", 1)), 0);
R10 l_START_1982; memset(&l_START_1982, 0, sizeof l_START_1982);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_1977, l_FT_1977));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_1981, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_1983; memset(&l_R_1983, 0, sizeof l_R_1983);
l_R_1983 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R10 l_LO_1984; memset(&l_LO_1984, 0, sizeof l_LO_1984);
S_R10(&l_LO_1984, r_INT_EXPR(((*(R21 *)rt_nil_check(l_R_1983))).f_A), 0);
R10 l_HI_1985; memset(&l_HI_1985, 0, sizeof l_HI_1985);
S_R10(&l_HI_1985, r_INT_EXPR(((*(R21 *)rt_nil_check(l_R_1983))).f_B), 0);
if (((((*(R21 *)rt_nil_check(l_R_1983))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1983))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_1984, r_FMT1(rt_str("(@) + 1", 7), l_LO_1984), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1983))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_1985, r_FMT1(rt_str("(@) - 1", 7), l_HI_1985), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_1979, l_LO_1984, l_HI_1985));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_1980, l_H_1979, l_IT_1980, l_H_1979), l_IT_1980));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_1980));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_1977, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME, l_IT_1980));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_1986; memset(&l_V_1986, 0, sizeof l_V_1986);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_1987; memset(&l_I_1987, 0, sizeof l_I_1987);
l_I_1987 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_1987))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_I_1987))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_1987))).f_ACCESS, l_IT_1980, 0);
((*(R12 *)rt_nil_check(l_I_1987))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_1987, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_1986, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1986).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_1986).f_C));
}
}
S_R10(&l_START_1982, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_1979, l_IT_1980, l_FN_1976, p_TD), 0);
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_1982, p_TD, l_PRIO_1981));
r_PATH_BODY(p_P, l_FN_1976, l_FT_1977);
}
static R10 r_UP_FRAME(void) { 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv1988 = r_MK(rt_str("NULL", 4));
return rv1988; }
}
{ R10 rv1989 = r_MK(rt_str("F", 1));
return rv1989; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT) { 
R14 l_SAVED_CODE_1990; memset(&l_SAVED_CODE_1990, 0, sizeof l_SAVED_CODE_1990);
S_R14(&l_SAVED_CODE_1990, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_1991; memset(&l_SAVED_CTXS_1991, 0, sizeof l_SAVED_CTXS_1991);
l_SAVED_CTXS_1991 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_1992; memset(&l_OUTER_1992, 0, sizeof l_OUTER_1992);
l_OUTER_1992 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_1993; memset(&l_H_1993, 0, sizeof l_H_1993);
l_H_1993 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_1994; memset(&l_CS_1994, 0, sizeof l_CS_1994);
l_CS_1994 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_1995; memset(&l_UPT_1995, 0, sizeof l_UPT_1995);
S_R10(&l_UPT_1995, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_1992))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_1995, ((*(R18 *)rt_nil_check(l_OUTER_1992))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_1994)), ({ R18 rc1996; memset(&rc1996, 0, sizeof rc1996);  rc1996.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_1992))).f_LEVEL, ((rt_int)1LL)); rc1996.f_R = NULL; rc1996.f_FRAMED = 1; S_R10(&rc1996.f_FTYPE, p_FT, 0); S_R14(&rc1996.f_FIELDS, ({ R14 rc1997; memset(&rc1997, 0, sizeof rc1997);  rc1997.f_HEAD = NULL; rc1997.f_TAIL = NULL; rc1997; }), 0); rc1996.f_UP = l_OUTER_1992; rc1996.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_1993))).f_B; rc1996.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_1993))).f_A; rc1996.f_RESULT = NULL; rc1996.f_IS_PATH = 1; rc1996; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_1995), &((*(R18 *)rt_nil_check(l_CS_1994))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_1994;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1998; memset(&rc1998, 0, sizeof rc1998);  rc1998.f_HEAD = NULL; rc1998.f_TAIL = NULL; rc1998; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_1993))).f_B, ((*(R21 *)rt_nil_check(l_H_1993))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_1999; memset(&l_I_1999, 0, sizeof l_I_1999);
l_I_1999 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_1999))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_I_1999))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_1999))).f_FIELD, r_FMT1(rt_str("l_@", 3), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_1999))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_1994))).f_FIELDS);
r_DEFINE(l_I_1999, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(p_P))).f_B);
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("static void @(void *arg);", 25), p_FN));
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("static void @(void *arg) { @ *F = arg; (void)F;", 47), p_FN, p_FT));
r_EMIT(g_O_FUNCS, r_MK(rt_str("rt_frame pf; if (RT_TRY(pf)) {", 30)));
r_APPEND_BUF(((*(R7 *)rt_nil_check(g_W))).f_CODE, &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMIT(g_O_FUNCS, r_MK(rt_str("RT_POP(pf); } else { RT_POP(pf); rt_b_path_failed(rt_xcur, ", 59)));
{
R21 * l_L_2000; memset(&l_L_2000, 0, sizeof l_L_2000);
l_L_2000 = ((*(R21 *)rt_nil_check(l_H_1993))).f_A;
R10 l_C_2001; memset(&l_C_2001, 0, sizeof l_C_2001);
S_R10(&l_C_2001, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2000 == NULL)) goto L_end2002;
{
S_R10(&l_C_2001, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2001, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2000))).f_NAME)), 0);
l_L_2000 = ((*(R21 *)rt_nil_check(l_L_2000))).f_NEXT;
}
} L_end2002: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2001));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_1994))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_1992;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1990, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_1991;
}
static R10 r_JOIN_BUF(R14 p_B) { 
R15 * l_C_2003; memset(&l_C_2003, 0, sizeof l_C_2003);
l_C_2003 = (p_B).f_HEAD;
R10 l_R_2004; memset(&l_R_2004, 0, sizeof l_R_2004);
S_R10(&l_R_2004, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2003 == NULL)) goto L_end2005;
{
S_R10(&l_R_2004, r_CAT(l_R_2004, ((*(R15 *)rt_nil_check(l_C_2003))).f_T), 0);
l_C_2003 = ((*(R15 *)rt_nil_check(l_C_2003))).f_NEXT;
}
} L_end2005: ;
{ R10 rv2006 = l_R_2004;
return rv2006; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { 
R10 l_NAME_2007; memset(&l_NAME_2007, 0, sizeof l_NAME_2007);
S_R10(&l_NAME_2007, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2008; memset(&l_SUB_2008, 0, sizeof l_SUB_2008);
S_R10(&l_SUB_2008, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2008, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2009; memset(&l_Y_2009, 0, sizeof l_Y_2009);
l_Y_2009 = r_LOOKUP(l_NAME_2007);
if ((l_Y_2009 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2007);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2009))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2007);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2009))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2010 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2009), l_SUB_2008);
return rv2010; }
}
rt_raise(RT_X_INIT);
}
static void r_TERMINATE_STMT(R21 * p_S) { 
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
r_CODES(rt_str("rt_b_terminate(NULL);", 21));
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_terminate(@);", 18), r_PATH_REF(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
}
static R26 r_PARALLEL_BUILTIN(R21 * p_E, R22 * p_WANT) { 
R10 l_NAME_2011; memset(&l_NAME_2011, 0, sizeof l_NAME_2011);
S_R10(&l_NAME_2011, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2012; memset(&l_LINE_2012, 0, sizeof l_LINE_2012);
l_LINE_2012 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2011, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2013; memset(&l_V_2013, 0, sizeof l_V_2013);
S_R26(&l_V_2013, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2013).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2012, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2014 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2013).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2013).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2014; }
}
}
else if (r_TEQS(l_NAME_2011, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2015 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2015; }
}
{ R26 rv2016 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2016; }
}
else if (r_TEQS(l_NAME_2011, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2017 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2017; }
}
{ R26 rv2018 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2018; }
}
else if ((r_TEQS(l_NAME_2011, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2011, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2012, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2011);
}
{
R26 l_V_2019; memset(&l_V_2019, 0, sizeof l_V_2019);
S_R26(&l_V_2019, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2019).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2012, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2019).f_LVAL))
{
r_FAIL(l_LINE_2012, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2011, rt_str("REQUEST", 7)))
{
{ R26 rv2020 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2019).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2020; }
}
{ R26 rv2021 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2019).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2021; }
}
}
else if (r_TEQS(l_NAME_2011, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2012);
{ R26 rv2022 = r_START_IO_CALL(p_E);
return rv2022; }
}
r_FAILT(l_LINE_2012, rt_str("unknown routine ", 16), l_NAME_2011);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { 
R27 * l_ARGS_2023; memset(&l_ARGS_2023, 0, sizeof l_ARGS_2023);
l_ARGS_2023 = r_CALL_ARGS(p_E);
R12 * l_Y_2024; memset(&l_Y_2024, 0, sizeof l_Y_2024);
l_Y_2024 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2023, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2025; memset(&l_R_2025, 0, sizeof l_R_2025);
if ((l_Y_2024 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2025, r_CALL_SYM(l_Y_2024, l_ARGS_2023, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2026 = l_R_2025;
return rv2026; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { 
R19 * l_I_2027; memset(&l_I_2027, 0, sizeof l_I_2027);
l_I_2027 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2027)), ({ R19 rc2028; memset(&rc2028, 0, sizeof rc2028);  rc2028.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2028.f_IMPORTS = p_IMPORTS; rc2028.f_SIGNALS = p_SIGNALS; S_R10(&rc2028.f_NAME, p_NAME, 0); rc2028.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2028; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2027;
}
static void r_LEAVE_ISCOPE(void) { 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { 
R10 l_BASE_2029; memset(&l_BASE_2029, 0, sizeof l_BASE_2029);
S_R10(&l_BASE_2029, r_FMT1(rt_str("r_@", 3), p_NAME), 0);
rstr l_S_2030; memset(&l_S_2030, 0, sizeof l_S_2030);
l_S_2030 = rt_str_new((l_BASE_2029).f_LEN);
rt_b_assign(&l_S_2030, r_STR(l_BASE_2029, (l_BASE_2029).f_LEN));
R21 * l_N_2031; memset(&l_N_2031, 0, sizeof l_N_2031);
l_N_2031 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2033_lo = ((rt_int)0LL), it2033_hi = rt_sub((l_BASE_2029).f_LEN, ((rt_int)1LL));
for (rt_int it2033 = it2033_lo; it2033 <= it2033_hi; it2033++) {
{
if (rt_b_eq(rt_b_slice(l_S_2030, it2033, it2033), rt_str("$", 1)))
{
S_R10(&l_BASE_2029, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_2030, ((rt_int)0LL), rt_sub(it2033, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2030, rt_add(it2033, ((rt_int)1LL)), rt_sub((l_BASE_2029).f_LEN, ((rt_int)1LL))))), 0);
}
}
} } L_end2032: ;
for (;;) {
if ((l_N_2031 == NULL)) goto L_end2034;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2031))).f_NAME, l_BASE_2029))
{
{ R10 rv2035 = r_FMT2(rt_str("@_@", 3), l_BASE_2029, r_NEW_NAME(rt_str("", 0)));
return rv2035; }
}
l_N_2031 = ((*(R21 *)rt_nil_check(l_N_2031))).f_NEXT;
}
} L_end2034: ;
l_N_2031 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2031))).f_NAME, l_BASE_2029, 0);
((*(R21 *)rt_nil_check(l_N_2031))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2031;
{ R10 rv2036 = l_BASE_2029;
return rv2036; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { 
if ((p_B == NULL))
{
{ rt_int rv2037 = 0;
return rv2037; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2038 = 1;
return rv2038; }
}
{ rt_int rv2039 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2039; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { 
R21 * l_S_2040; memset(&l_S_2040, 0, sizeof l_S_2040);
l_S_2040 = p_S0;
for (;;) {
if ((l_S_2040 == NULL)) goto L_end2041;
{
if (((((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_PAR)))
{
{ rt_int rv2042 = 1;
return rv2042; }
}
if (((((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2040))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2040))).f_B)))
{
{ rt_int rv2043 = 1;
return rv2043; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2040))).f_A))).f_B))
{
{ rt_int rv2044 = 1;
return rv2044; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2040))).f_B))).f_B))
{
{ rt_int rv2045 = 1;
return rv2045; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2046; memset(&l_A_2046, 0, sizeof l_A_2046);
l_A_2046 = ((*(R21 *)rt_nil_check(l_S_2040))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2040))).f_KIND == g_N_CASE))
{
l_A_2046 = ((*(R21 *)rt_nil_check(l_S_2040))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2040))).f_D == NULL)))
{
{ rt_int rv2047 = 1;
return rv2047; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2040))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2040))).f_C))).f_B))
{
{ rt_int rv2048 = 1;
return rv2048; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2040))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2040))).f_B))).f_B))
{
{ rt_int rv2049 = 1;
return rv2049; }
}
}
for (;;) {
if ((l_A_2046 == NULL)) goto L_end2050;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2046))).f_C == NULL)))
{
{ rt_int rv2051 = 1;
return rv2051; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2046))).f_B))).f_B))
{
{ rt_int rv2052 = 1;
return rv2052; }
}
l_A_2046 = ((*(R21 *)rt_nil_check(l_A_2046))).f_NEXT;
}
} L_end2050: ;
}
}
l_S_2040 = ((*(R21 *)rt_nil_check(l_S_2040))).f_NEXT;
}
} L_end2041: ;
{ rt_int rv2053 = 0;
return rv2053; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { 
R12 * l_Y_2054; memset(&l_Y_2054, 0, sizeof l_Y_2054);
l_Y_2054 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2055; memset(&l_S_2055, 0, sizeof l_S_2055);
l_S_2055 = rt_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2055, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2054))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2054))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2054))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2054))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2054, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2057_lo = ((rt_int)1LL), it2057_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2057 = it2057_lo; it2057 <= it2057_hi; it2057++) {
{
if (rt_b_eq(rt_b_slice(l_S_2055, it2057, it2057), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2054))).f_PREFIX, r_MKN(rt_b_slice(l_S_2055, ((rt_int)0LL), rt_sub(it2057, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2058; memset(&l_SHORT_2058, 0, sizeof l_SHORT_2058);
l_SHORT_2058 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2055, rt_add(it2057, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2058))).f_ORIG = l_Y_2054;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2058))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2054))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2058))).f_DECL = p_R;
r_DEFINE(l_SHORT_2058, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2056;
}
}
} } L_end2056: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { 
R21 * l_R_2059; memset(&l_R_2059, 0, sizeof l_R_2059);
l_R_2059 = p_RS;
for (;;) {
if ((l_R_2059 == NULL)) goto L_end2060;
{
if ((((*(R21 *)rt_nil_check(l_R_2059))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2059);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2059);
}
l_R_2059 = ((*(R21 *)rt_nil_check(l_R_2059))).f_NEXT;
}
} L_end2060: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { 
R21 * l_R_2061; memset(&l_R_2061, 0, sizeof l_R_2061);
l_R_2061 = p_RS;
for (;;) {
if ((l_R_2061 == NULL)) goto L_end2062;
{
if ((((*(R21 *)rt_nil_check(l_R_2061))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2063; memset(&l_M_2063, 0, sizeof l_M_2063);
l_M_2063 = r_FIND_DECL(l_R_2061);
r_ENTER_MODULE(l_M_2063);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2061))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2063);
}
}
else
{
{
R12 * l_Y_2064; memset(&l_Y_2064, 0, sizeof l_Y_2064);
l_Y_2064 = r_FIND_DECL(l_R_2061);
r_ROUTINE_HEADER(l_Y_2064);
}
}
l_R_2061 = ((*(R21 *)rt_nil_check(l_R_2061))).f_NEXT;
}
} L_end2062: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { 
R12 * l_Y_2065; memset(&l_Y_2065, 0, sizeof l_Y_2065);
l_Y_2065 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2065 == NULL)) goto L_end2066;
{
if (((((*(R12 *)rt_nil_check(l_Y_2065))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2065))).f_ORIG == NULL)))
{
{ R12 * rv2067 = l_Y_2065;
return rv2067; }
}
l_Y_2065 = r_LOOKUP_NEXT(l_Y_2065);
}
} L_end2066: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { 
R21 * l_D_2068; memset(&l_D_2068, 0, sizeof l_D_2068);
l_D_2068 = p_DECLS;
for (;;) {
if ((l_D_2068 == NULL)) goto L_end2069;
{
if (((((*(R21 *)rt_nil_check(l_D_2068))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2068))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2068))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2070; memset(&l_Y_2070, 0, sizeof l_Y_2070);
l_Y_2070 = r_FIND_DECL(l_D_2068);
R22 * l_T_2071; memset(&l_T_2071, 0, sizeof l_T_2071);
l_T_2071 = r_RESOLVE_USER(r_TYPE_REF(l_D_2068));
}
}
}
l_D_2068 = ((*(R21 *)rt_nil_check(l_D_2068))).f_NEXT;
}
} L_end2069: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { 
R21 * l_TS_2072; memset(&l_TS_2072, 0, sizeof l_TS_2072);
l_TS_2072 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2072))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2073 = l_TS_2072;
return rv2073; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { 
R12 * l_Y_2074; memset(&l_Y_2074, 0, sizeof l_Y_2074);
l_Y_2074 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2075; memset(&l_SAVED_2075, 0, sizeof l_SAVED_2075);
l_SAVED_2075 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2074))).f_DECL = p_M;
r_DEFINE(l_Y_2074, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2076; memset(&l_MARK_2076, 0, sizeof l_MARK_2076);
l_MARK_2076 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2074;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2074))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2076);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2075;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2074);
}
static void r_ENTER_MODULE(R12 * p_M) { 
R12 * l_Y_2077; memset(&l_Y_2077, 0, sizeof l_Y_2077);
l_Y_2077 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2077 == NULL)) goto L_end2078;
{
{
R12 * l_NEXT_2079; memset(&l_NEXT_2079, 0, sizeof l_NEXT_2079);
l_NEXT_2079 = ((*(R12 *)rt_nil_check(l_Y_2077))).f_SNEXT;
r_DEFINE(l_Y_2077, ((rt_int)0LL));
l_Y_2077 = l_NEXT_2079;
}
}
} L_end2078: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { 
R12 * l_MARK_2080; memset(&l_MARK_2080, 0, sizeof l_MARK_2080);
l_MARK_2080 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2080 == NULL)) goto L_end2081;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2080))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2081;
}
l_MARK_2080 = ((*(R12 *)rt_nil_check(l_MARK_2080))).f_SNEXT;
}
} L_end2081: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2080);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 0;
}
static void r_ENTER_MODULE_OF(R12 * p_G) { 
if ((!(((*(R12 *)rt_nil_check(p_G))).f_MODL == NULL)))
{
if (((!r_IN_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL)) && (!((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_MODL))).f_BUSY)))
{
r_ENTER_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
}
}
static rt_int r_ENTER_MODULE_FOR(R12 * p_G) { 
if ((!(((*(R12 *)rt_nil_check(p_G))).f_MODL == NULL)))
{
if (((!r_IN_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL)) && (!((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_MODL))).f_BUSY)))
{
r_ENTER_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
{ rt_int rv2082 = 1;
return rv2082; }
}
}
{ rt_int rv2083 = 0;
return rv2083; }
rt_raise(RT_X_INIT);
}
static void r_LEAVE_MODULE_OF(R12 * p_G) { 
if ((!(((*(R12 *)rt_nil_check(p_G))).f_MODL == NULL)))
{
if ((((((*(R7 *)rt_nil_check(g_W))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL) && ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_MODL))).f_BUSY) && (((*(R7 *)rt_nil_check(g_W))).f_DEPTH == (((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_MODL))).f_FWD).f_H)))
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
}
}
static void r_EXPORT_MODULE(R12 * p_M) { 
R21 * l_D_2084; memset(&l_D_2084, 0, sizeof l_D_2084);
l_D_2084 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2085; memset(&l_Y_2085, 0, sizeof l_Y_2085);
l_Y_2085 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2085 == NULL)) goto L_end2086;
{
if (r_EXPORTED_BY(l_D_2084, l_Y_2085))
{
((*(R12 *)rt_nil_check(l_Y_2085))).f_EXPORTED = 1;
{
R12 * l_A_2087; memset(&l_A_2087, 0, sizeof l_A_2087);
l_A_2087 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2085))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2085))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2087)), (*(R12 *)rt_nil_check(l_Y_2085)), 0);
((*(R12 *)rt_nil_check(l_A_2087))).f_ORIG = r_ORIGINAL(l_Y_2085);
((*(R12 *)rt_nil_check(l_A_2087))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2087, ((*(R21 *)rt_nil_check(l_D_2084))).f_LINE);
}
}
l_Y_2085 = ((*(R12 *)rt_nil_check(l_Y_2085))).f_SNEXT;
}
} L_end2086: ;
{
R21 * l_X_2088; memset(&l_X_2088, 0, sizeof l_X_2088);
l_X_2088 = ((*(R21 *)rt_nil_check(l_D_2084))).f_B;
for (;;) {
if ((l_X_2088 == NULL)) goto L_end2089;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2088))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2088))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2088))).f_NAME);
}
l_X_2088 = ((*(R21 *)rt_nil_check(l_X_2088))).f_NEXT;
}
} L_end2089: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { 
R12 * l_Y_2090; memset(&l_Y_2090, 0, sizeof l_Y_2090);
l_Y_2090 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2090 == NULL)) goto L_end2091;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2090))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2090))).f_PREFIX, p_NAME)))
{
{ rt_int rv2092 = 1;
return rv2092; }
}
l_Y_2090 = ((*(R12 *)rt_nil_check(l_Y_2090))).f_SNEXT;
}
} L_end2091: ;
{ rt_int rv2093 = 0;
return rv2093; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { 
R21 * l_X_2094; memset(&l_X_2094, 0, sizeof l_X_2094);
l_X_2094 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2095 = 0;
return rv2095; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2096 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2096; }
}
for (;;) {
if ((l_X_2094 == NULL)) goto L_end2097;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2094))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2098 = 1;
return rv2098; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2094))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2094))).f_A == NULL))
{
{ rt_int rv2099 = 1;
return rv2099; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2094))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2100 = 1;
return rv2100; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2101; memset(&l_T_2101, 0, sizeof l_T_2101);
l_T_2101 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2094))).f_NAME, p_Y);
if ((!(l_T_2101 == NULL)))
{
{ rt_int rv2102 = 1;
return rv2102; }
}
}
}
l_X_2094 = ((*(R21 *)rt_nil_check(l_X_2094))).f_NEXT;
}
} L_end2097: ;
{ rt_int rv2103 = 0;
return rv2103; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { 
R12 * l_M_2104; memset(&l_M_2104, 0, sizeof l_M_2104);
l_M_2104 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2105; memset(&l_Z_2105, 0, sizeof l_Z_2105);
if ((l_M_2104 == NULL))
{
{ R12 * rv2106 = NULL;
return rv2106; }
}
l_Z_2105 = ((*(R12 *)rt_nil_check(l_M_2104))).f_MEMBERS;
for (;;) {
if ((l_Z_2105 == NULL)) goto L_end2107;
{
if (((((*(R12 *)rt_nil_check(l_Z_2105))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2105))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2105))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2105))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2105))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2108 = l_Z_2105;
return rv2108; }
}
}
}
}
l_Z_2105 = ((*(R12 *)rt_nil_check(l_Z_2105))).f_SNEXT;
}
} L_end2107: ;
{ R12 * rv2109 = NULL;
return rv2109; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { 
R21 * l_R_2110; memset(&l_R_2110, 0, sizeof l_R_2110);
l_R_2110 = p_RS;
for (;;) {
if ((l_R_2110 == NULL)) goto L_end2111;
{
if ((((*(R21 *)rt_nil_check(l_R_2110))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2112; memset(&l_M_2112, 0, sizeof l_M_2112);
l_M_2112 = r_FIND_DECL(l_R_2110);
R21 * l_D_2113; memset(&l_D_2113, 0, sizeof l_D_2113);
l_D_2113 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2110))).f_C))).f_A;
r_ENTER_MODULE(l_M_2112);
for (;;) {
if ((l_D_2113 == NULL)) goto L_end2114;
{
if (((((*(R21 *)rt_nil_check(l_D_2113))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2113))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2113);
}
l_D_2113 = ((*(R21 *)rt_nil_check(l_D_2113))).f_NEXT;
}
} L_end2114: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2110))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2110))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2112);
}
}
l_R_2110 = ((*(R21 *)rt_nil_check(l_R_2110))).f_NEXT;
}
} L_end2111: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { 
R21 * l_R_2115; memset(&l_R_2115, 0, sizeof l_R_2115);
l_R_2115 = p_RS;
for (;;) {
if ((l_R_2115 == NULL)) goto L_end2116;
{
if ((((*(R21 *)rt_nil_check(l_R_2115))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2117; memset(&l_M_2117, 0, sizeof l_M_2117);
l_M_2117 = r_FIND_DECL(l_R_2115);
r_ENTER_MODULE(l_M_2117);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2115))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2117);
}
}
else
{
{
R12 * l_Y_2118; memset(&l_Y_2118, 0, sizeof l_Y_2118);
l_Y_2118 = r_FIND_DECL(l_R_2115);
if ((!((*(R12 *)rt_nil_check(l_Y_2118))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2118);
}
}
}
l_R_2115 = ((*(R21 *)rt_nil_check(l_R_2115))).f_NEXT;
}
} L_end2116: ;
}
static void r_PENDING_BODIES(void) { 
rt_int l_LEVEL_2119; memset(&l_LEVEL_2119, 0, sizeof l_LEVEL_2119);
l_LEVEL_2119 = r_CUR_LEVEL();
rt_int l_MORE_2120; memset(&l_MORE_2120, 0, sizeof l_MORE_2120);
l_MORE_2120 = 1;
for (;;) {
if ((!l_MORE_2120)) goto L_end2121;
{
l_MORE_2120 = 0;
{
R12 * l_P_2122; memset(&l_P_2122, 0, sizeof l_P_2122);
l_P_2122 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2123; memset(&l_PREV_2123, 0, sizeof l_PREV_2123);
l_PREV_2123 = NULL;
for (;;) {
if ((l_P_2122 == NULL)) goto L_end2124;
{
if ((((*(R12 *)rt_nil_check(l_P_2122))).f_LEVEL == l_LEVEL_2119))
{
if ((l_PREV_2123 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2122))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2123))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2122))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2122);
r_ROUTINE_BODY(l_P_2122);
r_LEAVE_MODULE_OF(l_P_2122);
l_MORE_2120 = 1;
goto L_end2124;
}
l_PREV_2123 = l_P_2122;
l_P_2122 = ((*(R12 *)rt_nil_check(l_P_2122))).f_MEMBERS;
}
} L_end2124: ;
}
}
} L_end2121: ;
}
static void r_CLOSED_BODY(R21 * p_B) { 
R21 * l_D_2125; memset(&l_D_2125, 0, sizeof l_D_2125);
l_D_2125 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2126; memset(&l_S_2126, 0, sizeof l_S_2126);
l_S_2126 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2125 == NULL)) goto L_end2127;
{
if (((((*(R21 *)rt_nil_check(l_D_2125))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2125))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2125);
}
l_D_2125 = ((*(R21 *)rt_nil_check(l_D_2125))).f_NEXT;
}
} L_end2127: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2126 == NULL)) goto L_end2128;
{
r_STMT(l_S_2126);
l_S_2126 = ((*(R21 *)rt_nil_check(l_S_2126))).f_NEXT;
}
} L_end2128: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { 
R21 * l_R_2129; memset(&l_R_2129, 0, sizeof l_R_2129);
l_R_2129 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2130; memset(&l_SAVED_CODE_2130, 0, sizeof l_SAVED_CODE_2130);
S_R14(&l_SAVED_CODE_2130, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2131; memset(&l_SAVED_CTXS_2131, 0, sizeof l_SAVED_CTXS_2131);
l_SAVED_CTXS_2131 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2132; memset(&l_SAVED_BINDS_2132, 0, sizeof l_SAVED_BINDS_2132);
l_SAVED_BINDS_2132 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2133; memset(&l_OUTER_2133, 0, sizeof l_OUTER_2133);
l_OUTER_2133 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2134; memset(&l_CS_2134, 0, sizeof l_CS_2134);
l_CS_2134 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2135; memset(&l_PROLOGUE_2135, 0, sizeof l_PROLOGUE_2135);
S_R10(&l_PROLOGUE_2135, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2134)), ({ R18 rc2136; memset(&rc2136, 0, sizeof rc2136);  rc2136.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2136.f_R = p_Y; rc2136.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2136.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2136.f_FIELDS, ({ R14 rc2137; memset(&rc2137, 0, sizeof rc2137);  rc2137.f_HEAD = NULL; rc2137.f_TAIL = NULL; rc2137; }), 0); rc2136.f_UP = l_OUTER_2133; rc2136.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2129))).f_E; rc2136.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2129))).f_D))).f_A; rc2136.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2136.f_IS_PATH = 0; rc2136; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2134))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2134))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2134))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2134))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2135, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2134))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2134))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2135, r_CATS(l_PROLOGUE_2135, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2134;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2138; memset(&rc2138, 0, sizeof rc2138);  rc2138.f_HEAD = NULL; rc2138.f_TAIL = NULL; rc2138; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2129))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2129))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2129))).f_LINE);
{
R28 * l_P_2139; memset(&l_P_2139, 0, sizeof l_P_2139);
l_P_2139 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2139 == NULL)) goto L_end2140;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2139))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2139))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2141; memset(&l_V_2141, 0, sizeof l_V_2141);
l_V_2141 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2141))).f_T = ((*(R28 *)rt_nil_check(l_P_2139))).f_T;
((*(R12 *)rt_nil_check(l_V_2141))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2139))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2141))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2139))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2141))).f_FIELD, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2141))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2139))).f_T), ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2134))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2141))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2139))).f_T), ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2134))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2141))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME), 0);
}
S_R10(&l_PROLOGUE_2135, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2135, ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME, ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2141))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2141))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2141))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_2139))).f_NAME), 0);
}
r_DEFINE(l_V_2141, ((*(R21 *)rt_nil_check(l_R_2129))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2139))).f_T, ((*(R12 *)rt_nil_check(l_V_2141))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2129))).f_LINE, 1);
}
}
}
l_P_2139 = ((*(R28 *)rt_nil_check(l_P_2139))).f_NEXT;
}
} L_end2140: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2129))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2129))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2129))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2134))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2134))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { @", 5), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2135));
r_APPEND_BUF(((*(R7 *)rt_nil_check(g_W))).f_CODE, &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2133;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2130, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2131;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2132;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { 
R20 * l_B_2142; memset(&l_B_2142, 0, sizeof l_B_2142);
l_B_2142 = p_BS;
for (;;) {
if ((l_B_2142 == NULL)) goto L_end2143;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2142))).f_T == NULL)))
{
{
R12 * l_Y_2144; memset(&l_Y_2144, 0, sizeof l_Y_2144);
l_Y_2144 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2142))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2144))).f_T = ((*(R20 *)rt_nil_check(l_B_2142))).f_T;
r_DEFINE(l_Y_2144, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2142))).f_HASMV)
{
{
R12 * l_Y_2145; memset(&l_Y_2145, 0, sizeof l_Y_2145);
l_Y_2145 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2142))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2145))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2145))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2145))).f_MV = ((*(R20 *)rt_nil_check(l_B_2142))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2145))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2142))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2145))).f_INPUT = 1;
r_DEFINE(l_Y_2145, p_LINE);
}
}
l_B_2142 = ((*(R20 *)rt_nil_check(l_B_2142))).f_NEXT;
}
} L_end2143: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { 
R15 * l_C_2146; memset(&l_C_2146, 0, sizeof l_C_2146);
l_C_2146 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2146 == NULL)) goto L_end2147;
{
r_APPEND(((*(R15 *)rt_nil_check(l_C_2146))).f_T, &(*p_DST));
l_C_2146 = ((*(R15 *)rt_nil_check(l_C_2146))).f_NEXT;
}
} L_end2147: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { 
R21 * l_U_2148; memset(&l_U_2148, 0, sizeof l_U_2148);
l_U_2148 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2148 == NULL)) goto L_end2149;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2148))).f_NAME, p_NAME))
{
{ rt_int rv2150 = 1;
return rv2150; }
}
l_U_2148 = ((*(R21 *)rt_nil_check(l_U_2148))).f_NEXT;
}
} L_end2149: ;
{ rt_int rv2151 = 0;
return rv2151; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { 
R21 * l_U_2152; memset(&l_U_2152, 0, sizeof l_U_2152);
l_U_2152 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2152 == NULL)) goto L_end2153;
{
{
R21 * l_T_2154; memset(&l_T_2154, 0, sizeof l_T_2154);
l_T_2154 = p_SEGS;
for (;;) {
if ((l_T_2154 == NULL)) goto L_end2155;
{
if ((((!(l_T_2154 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2154))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2154))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2152))).f_NAME)))
{
{ rt_int rv2156 = 0;
return rv2156; }
}
l_T_2154 = ((*(R21 *)rt_nil_check(l_T_2154))).f_NEXT;
}
} L_end2155: ;
}
l_U_2152 = ((*(R21 *)rt_nil_check(l_U_2152))).f_NEXT;
}
} L_end2153: ;
{ rt_int rv2157 = 1;
return rv2157; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { 
R21 * l_S_2158; memset(&l_S_2158, 0, sizeof l_S_2158);
l_S_2158 = p_SEGS;
rt_int l_MAINS_2159; memset(&l_MAINS_2159, 0, sizeof l_MAINS_2159);
l_MAINS_2159 = ((rt_int)0LL);
R18 * l_ROOT_2160; memset(&l_ROOT_2160, 0, sizeof l_ROOT_2160);
l_ROOT_2160 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2160)), ({ R18 rc2161; memset(&rc2161, 0, sizeof rc2161);  rc2161.f_LEVEL = ((rt_int)0LL); rc2161.f_R = NULL; rc2161.f_FRAMED = 0; S_R10(&rc2161.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2161.f_FIELDS, ({ R14 rc2162; memset(&rc2162, 0, sizeof rc2162);  rc2162.f_HEAD = NULL; rc2162.f_TAIL = NULL; rc2162; }), 0); rc2161.f_UP = NULL; rc2161.f_IMPORTS = NULL; rc2161.f_SIGNALS = NULL; rc2161.f_RESULT = NULL; rc2161.f_IS_PATH = 0; rc2161; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2160;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2163; memset(&rc2163, 0, sizeof rc2163);  rc2163.f_HEAD = NULL; rc2163.f_TAIL = NULL; rc2163; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2158 = p_SEGS;
for (;;) {
if ((l_S_2158 == NULL)) goto L_end2165;
{
if ((((*(R21 *)rt_nil_check(l_S_2158))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2158, p_SEGS))
{
goto L_end2165;
}
}
l_S_2158 = ((*(R21 *)rt_nil_check(l_S_2158))).f_NEXT;
}
} L_end2165: ;
if ((l_S_2158 == NULL))
{
goto L_end2164;
}
((*(R21 *)rt_nil_check(l_S_2158))).f_D = l_S_2158;
l_MAINS_2159 = rt_add(l_MAINS_2159, ((*(R21 *)rt_nil_check(l_S_2158))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2158))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2158))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2158))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2158, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2158))).f_B);
r_SEGMENT_EXPORTS(l_S_2158);
}
} L_end2164: ;
l_S_2158 = p_SEGS;
for (;;) {
if ((l_S_2158 == NULL)) goto L_end2166;
{
if ((((*(R21 *)rt_nil_check(l_S_2158))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2158))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2158))).f_NAME);
}
l_S_2158 = ((*(R21 *)rt_nil_check(l_S_2158))).f_NEXT;
}
} L_end2166: ;
if ((!(l_MAINS_2159 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2167; memset(&l_X_2167, 0, sizeof l_X_2167);
l_X_2167 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2167 == NULL)) goto L_end2168;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R21 *)rt_nil_check(l_X_2167))).f_NAME));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R21 *)rt_nil_check(l_X_2167))).f_NAME, r_CSTRING(((*(R21 *)rt_nil_check(l_X_2167))).f_NAME)));
l_X_2167 = ((*(R21 *)rt_nil_check(l_X_2167))).f_NEXT;
}
} L_end2168: ;
}
r_APPEND_BUF(((*(R7 *)rt_nil_check(g_W))).f_CODE, &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { 
R12 * l_M_2169; memset(&l_M_2169, 0, sizeof l_M_2169);
l_M_2169 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2170 = 0;
return rv2170; }
}
for (;;) {
if ((l_M_2169 == NULL)) goto L_end2171;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2169))).f_NAME))
{
{ rt_int rv2172 = 1;
return rv2172; }
}
l_M_2169 = ((*(R12 *)rt_nil_check(l_M_2169))).f_MODL;
}
} L_end2171: ;
{ rt_int rv2173 = 0;
return rv2173; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { 
R12 * l_MARK_2174; memset(&l_MARK_2174, 0, sizeof l_MARK_2174);
l_MARK_2174 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2175; memset(&l_TAKEN_2175, 0, sizeof l_TAKEN_2175);
for (;;) {
if ((l_MARK_2174 == NULL)) goto L_end2176;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2174))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2176;
}
l_MARK_2174 = ((*(R12 *)rt_nil_check(l_MARK_2174))).f_SNEXT;
}
} L_end2176: ;
l_TAKEN_2175 = r_TAKE_SCOPE(l_MARK_2174);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2175 == NULL)) goto L_end2177;
{
{
R12 * l_NEXT_2178; memset(&l_NEXT_2178, 0, sizeof l_NEXT_2178);
l_NEXT_2178 = ((*(R12 *)rt_nil_check(l_TAKEN_2175))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2175))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2175))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2175))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2175)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2175))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2175))))))
{
r_DEFINE(l_TAKEN_2175, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2175 = l_NEXT_2178;
}
}
} L_end2177: ;
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
