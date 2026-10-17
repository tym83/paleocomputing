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
else if ((l_K_928 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv993 = ({ R23 rc994; memset(&rc994, 0, sizeof rc994);  rc994.f_OK = 1; rc994.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc994; });
return rv993; }
}
}
{ R23 rv995 = l_NO_929;
return rv995; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { 
{ rt_int rv996 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv996; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { 
if (p_B)
{
{ rt_int rv997 = ((rt_int)1LL);
return rv997; }
}
{ rt_int rv998 = ((rt_int)0LL);
return rv998; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { 
rt_int l_K_999; memset(&l_K_999, 0, sizeof l_K_999);
l_K_999 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_999 == g_N_INT))
{
{ R26 rv1000 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1000; }
}
else if ((l_K_999 == g_N_REAL))
{
{ R26 rv1001 = r_REAL_LITERAL(p_E);
return rv1001; }
}
else if ((l_K_999 == g_N_BOOL))
{
{ R26 rv1002 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1002; }
}
else if ((l_K_999 == g_N_NIL))
{
{ R26 rv1003 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1003; }
}
else if ((l_K_999 == g_N_PAREN))
{
{
R26 l_V_1004; memset(&l_V_1004, 0, sizeof l_V_1004);
S_R26(&l_V_1004, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1004).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1004).f_C), 0);
{ R26 rv1005 = l_V_1004;
return rv1005; }
}
}
else if ((l_K_999 == g_N_STR))
{
{ R26 rv1006 = r_STRING_LITERAL(p_E);
return rv1006; }
}
else if ((l_K_999 == g_N_BITS))
{
{ R26 rv1007 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1007; }
}
else if ((l_K_999 == g_N_ENUMLIT))
{
{ R26 rv1008 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1008; }
}
else if ((l_K_999 == g_N_RECCONS))
{
{ R26 rv1009 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1009; }
}
else if ((l_K_999 == g_N_ARRCONS))
{
{ R26 rv1010 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1010; }
}
else if ((l_K_999 == g_N_TYPESPEC))
{
{ R26 rv1011 = r_TYPE_SPECIFIER(p_E);
return rv1011; }
}
else if ((l_K_999 == g_N_QUAL))
{
{
rt_int l_SAVED_1012; memset(&l_SAVED_1012, 0, sizeof l_SAVED_1012);
l_SAVED_1012 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1013; memset(&l_V_1013, 0, sizeof l_V_1013);
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
S_R26(&l_V_1013, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1012;
{ R26 rv1014 = l_V_1013;
return rv1014; }
}
}
else if ((l_K_999 == g_N_NEW))
{
{ R26 rv1015 = r_NEW_EXPR(p_E, p_WANT);
return rv1015; }
}
else if ((l_K_999 == g_N_NAME))
{
{ R26 rv1016 = r_NAME_EXPR(p_E, p_WANT);
return rv1016; }
}
else if ((l_K_999 == g_N_APPLY))
{
{
R12 * l_Y_1017; memset(&l_Y_1017, 0, sizeof l_Y_1017);
l_Y_1017 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1017 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1017))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1017))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1018; memset(&l_N_1018, 0, sizeof l_N_1018);
l_N_1018 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1019; memset(&l_A_1019, 0, sizeof l_A_1019);
l_A_1019 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1019))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1018))).f_A = l_A_1019;
((*(R21 *)rt_nil_check(l_N_1018))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1020 = r_EXPR(l_N_1018, p_WANT);
return rv1020; }
}
}
}
{ R26 rv1021 = r_CALL_EXPR(p_E, p_WANT);
return rv1021; }
}
}
else if ((l_K_999 == g_N_FIELD))
{
{ R26 rv1022 = r_FIELD_EXPR(p_E);
return rv1022; }
}
else if ((l_K_999 == g_N_DEREF))
{
{
R26 l_B_1023; memset(&l_B_1023, 0, sizeof l_B_1023);
S_R26(&l_B_1023, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1023).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1024; memset(&l_TT_1024, 0, sizeof l_TT_1024);
l_TT_1024 = r_TARGET((l_B_1023).f_T);
{ R26 rv1025 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1024), (l_B_1023).f_C), l_TT_1024, 1, r_NO_TEXT());
return rv1025; }
}
}
}
else if ((l_K_999 == g_N_INDEX))
{
{ R26 rv1026 = r_INDEX_EXPR(p_E);
return rv1026; }
}
else if ((l_K_999 == g_N_SUBSTR))
{
{
R26 l_B_1027; memset(&l_B_1027, 0, sizeof l_B_1027);
S_R26(&l_B_1027, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1028; memset(&l_BT_1028, 0, sizeof l_BT_1028);
l_BT_1028 = r_REAL_TYPE((l_B_1027).f_T);
R10 l_LO_1029; memset(&l_LO_1029, 0, sizeof l_LO_1029);
R10 l_HI_1030; memset(&l_HI_1030, 0, sizeof l_HI_1030);
if ((!(((((*(R22 *)rt_nil_check(l_BT_1028))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1028))).f_KIND == g_T_BITS)))))
{
if ((((*(R22 *)rt_nil_check((l_B_1027).f_T))).f_KIND == g_T_ABS))
{
{ R26 rv1031 = r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_1027, ((*(R21 *)rt_nil_check(p_E))).f_B, ((*(R21 *)rt_nil_check(p_E))).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1031; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1029, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1030, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if ((((*(R22 *)rt_nil_check(l_BT_1028))).f_KIND == g_T_BITS))
{
{ R26 rv1032 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1027).f_C, l_LO_1029, l_HI_1030), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1032; }
}
{
R22 * l_T_1033; memset(&l_T_1033, 0, sizeof l_T_1033);
l_T_1033 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1033))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1028))).f_BASE;
{ R26 rv1034 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1027).f_C, l_LO_1029, l_HI_1030), l_T_1033);
return rv1034; }
}
}
}
else if ((l_K_999 == g_N_UNOP))
{
{ R26 rv1035 = r_UNARY(p_E);
return rv1035; }
}
else if ((l_K_999 == g_N_BINOP))
{
{ R26 rv1036 = r_BINARY(p_E);
return rv1036; }
}
else if ((l_K_999 == g_N_IN))
{
{ R26 rv1037 = r_IN_EXPR(p_E);
return rv1037; }
}
else if (((l_K_999 == g_N_ANY) || (l_K_999 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((((((l_K_999 == g_TS_NAME) || (l_K_999 == g_TS_ARRAY)) || (l_K_999 == g_TS_RECORD)) || (l_K_999 == g_TS_ENUM)) || (l_K_999 == g_TS_GEN)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { 
rt_int l_SAVED_1038; memset(&l_SAVED_1038, 0, sizeof l_SAVED_1038);
l_SAVED_1038 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R26 l_V_1039; memset(&l_V_1039, 0, sizeof l_V_1039);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R26(&l_V_1039, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1038;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1039).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1040 = (l_V_1039).f_C;
return rv1040; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1039).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1039).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1039).f_T));
}
{ R10 rv1041 = (l_V_1039).f_C;
return rv1041; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { 
R26 l_V_1042; memset(&l_V_1042, 0, sizeof l_V_1042);
S_R26(&l_V_1042, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1042).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1042).f_T));
}
{ R10 rv1043 = (l_V_1042).f_C;
return rv1043; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { 
R22 * l_T_1044; memset(&l_T_1044, 0, sizeof l_T_1044);
l_T_1044 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1044))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1044))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1045 = l_T_1044;
return rv1045; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { 
R10 l_T_1046; memset(&l_T_1046, 0, sizeof l_T_1046);
S_R10(&l_T_1046, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1047; memset(&l_S_1047, 0, sizeof l_S_1047);
l_S_1047 = rt_str_new((l_T_1046).f_LEN);
rt_b_assign(&l_S_1047, r_STR(l_T_1046, (l_T_1046).f_LEN));
rt_int l_POINT_1048; memset(&l_POINT_1048, 0, sizeof l_POINT_1048);
l_POINT_1048 = 0;
rt_int l_DIGITS_1049; memset(&l_DIGITS_1049, 0, sizeof l_DIGITS_1049);
l_DIGITS_1049 = ((rt_int)0LL);
{ rt_int it1051_lo = ((rt_int)0LL), it1051_hi = rt_sub((l_T_1046).f_LEN, ((rt_int)1LL));
for (rt_int it1051 = it1051_lo; it1051 <= it1051_hi; it1051++) {
{
if (rt_b_eq(rt_b_slice(l_S_1047, it1051, it1051), rt_str(".", 1)))
{
l_POINT_1048 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1047, it1051, it1051), rt_str("E", 1)))
{
goto L_end1050;
}
else
{
l_DIGITS_1049 = rt_add(l_DIGITS_1049, ((rt_int)1LL));
}
}
} } L_end1050: ;
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1052 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1046), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1052; }
}
if ((!l_POINT_1048))
{
{ R26 rv1053 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1046)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1053; }
}
{
R22 * l_F_1054; memset(&l_F_1054, 0, sizeof l_F_1054);
l_F_1054 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_F_1054))).f_SCALE = l_DIGITS_1049;
if ((l_DIGITS_1049 > ((rt_int)15LL)))
{
((*(R22 *)rt_nil_check(l_F_1054))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_1049 < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1054))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_1047, rt_sub((l_T_1046).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1046).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
{ R26 rv1055 = r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_1046), l_F_1054);
return rv1055; }
}
if (rt_b_eq(rt_b_slice(l_S_1047, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
{ R26 rv1056 = r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_1046), l_F_1054);
return rv1056; }
}
{ R26 rv1057 = r_MKET(r_FMT1(rt_str("(@)", 3), l_T_1046), l_F_1054);
return rv1057; }
}
rt_raise(RT_X_INIT);
}
static R26 r_STRING_LITERAL(R21 * p_E) { 
rt_int l_AT_1058; memset(&l_AT_1058, 0, sizeof l_AT_1058);
l_AT_1058 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R22 * l_CS_1059; memset(&l_CS_1059, 0, sizeof l_CS_1059);
l_CS_1059 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1060; memset(&l_P_1060, 0, sizeof l_P_1060);
l_P_1060 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_R_1061; memset(&l_R_1061, 0, sizeof l_R_1061);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1062; memset(&l_Y_1062, 0, sizeof l_Y_1062);
l_Y_1062 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1062 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1062))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1059 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(l_CS_1059))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1060 == NULL)) goto L_end1063;
{
if ((((*(R21 *)rt_nil_check(l_P_1060))).f_IV == g_K_STR))
{
if ((l_CS_1059 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_R_1061, r_MK(r_STR(((*(R21 *)rt_nil_check(l_P_1060))).f_NAME, (((*(R21 *)rt_nil_check(l_P_1060))).f_NAME).f_LEN)), 0);
}
else
{
{
R10 l_Q_1064; memset(&l_Q_1064, 0, sizeof l_Q_1064);
S_R10(&l_Q_1064, ((*(R21 *)rt_nil_check(l_P_1060))).f_NAME, 0);
rstr l_QS_1065; memset(&l_QS_1065, 0, sizeof l_QS_1065);
l_QS_1065 = rt_str_new((l_Q_1064).f_LEN);
rt_b_assign(&l_QS_1065, r_STR(l_Q_1064, (l_Q_1064).f_LEN));
{ rt_int it1067_lo = ((rt_int)0LL), it1067_hi = rt_sub((l_Q_1064).f_LEN, ((rt_int)1LL));
for (rt_int it1067 = it1067_lo; it1067 <= it1067_hi; it1067++) {
{
{
R12 * l_Y_1068; memset(&l_Y_1068, 0, sizeof l_Y_1068);
l_Y_1068 = r_FIND_LITERAL(r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1065, it1067, it1067)), rt_str("'", 1))), l_CS_1059);
if ((l_Y_1068 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1060))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1065, it1067, it1067)));
}
S_R10(&l_R_1061, r_MK(r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1068))).f_MV)), 0);
}
}
} } L_end1066: ;
}
}
}
else
{
{
R12 * l_Y_1069; memset(&l_Y_1069, 0, sizeof l_Y_1069);
l_Y_1069 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1060))).f_NAME, l_CS_1059);
if ((l_Y_1069 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1060))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1060))).f_NAME);
}
S_R10(&l_R_1061, r_MK(r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1069))).f_MV)), 0);
}
}
l_P_1060 = ((*(R21 *)rt_nil_check(l_P_1060))).f_NEXT;
}
} L_end1063: ;
{
R10 l_S_1070; memset(&l_S_1070, 0, sizeof l_S_1070);
S_R10(&l_S_1070, ({ R10 rc1071; memset(&rc1071, 0, sizeof rc1071);  rc1071.f_AT = l_AT_1058; rc1071.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1058); rc1071.f_H = rt_neg(((rt_int)1LL)); rc1071; }), 0);
R22 * l_T_1072; memset(&l_T_1072, 0, sizeof l_T_1072);
l_T_1072 = r_STR_TYPE(r_NUM((l_S_1070).f_LEN), r_SOME((l_S_1070).f_LEN));
((*(R22 *)rt_nil_check(l_T_1072))).f_BASE = l_CS_1059;
{ R26 rv1073 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1070), r_NUM((l_S_1070).f_LEN)), l_T_1072);
return rv1073; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { 
R21 * l_TS_1074; memset(&l_TS_1074, 0, sizeof l_TS_1074);
l_TS_1074 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1074))).f_NAME, p_NAME, 0);
{ R22 * rv1075 = r_RESOLVE(l_TS_1074);
return rv1075; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { 
R12 * l_Y_1076; memset(&l_Y_1076, 0, sizeof l_Y_1076);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1077; memset(&l_WT_1077, 0, sizeof l_WT_1077);
l_WT_1077 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1077))).f_KIND == g_T_ENUM))
{
l_Y_1076 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1077);
if ((!(l_Y_1076 == NULL)))
{
{ R26 rv1078 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1076))).f_MV), r_ENUM_RESULT(l_Y_1076, p_WANT));
return rv1078; }
}
}
}
}
l_Y_1076 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1079; memset(&l_FOUND_1079, 0, sizeof l_FOUND_1079);
l_FOUND_1079 = NULL;
rt_int l_N_1080; memset(&l_N_1080, 0, sizeof l_N_1080);
l_N_1080 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1076 == NULL)) goto L_end1081;
{
if ((((*(R12 *)rt_nil_check(l_Y_1076))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1076))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1079 == NULL)))
{
if (((l_FOUND_1079 == NULL) || (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1079))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1079 = l_Y_1076;
}
else
{
l_N_1080 = rt_add(l_N_1080, ((rt_int)1LL));
}
}
}
l_Y_1076 = r_LOOKUP_NEXT(l_Y_1076);
}
} L_end1081: ;
if ((l_FOUND_1079 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1080 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1082 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1079))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1079))).f_T);
return rv1082; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1083 = p_WANT;
return rv1083; }
}
{ R22 * rv1084 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1084; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { 
R12 * l_Y_1085; memset(&l_Y_1085, 0, sizeof l_Y_1085);
l_Y_1085 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1085 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1086; memset(&l_WRITABLE_1086, 0, sizeof l_WRITABLE_1086);
l_WRITABLE_1086 = r_CHECK_IMPORTED(l_Y_1085, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1087 = r_MKLV(r_OBJ_ACCESS(l_Y_1085), ((*(R12 *)rt_nil_check(l_Y_1085))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_VAR) && l_WRITABLE_1086), r_NO_TEXT());
return rv1087; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_GEN))
{
{ R26 rv1088 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1085))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1085))).f_T);
return rv1088; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1089 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1089; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1090; memset(&l_N_1090, 0, sizeof l_N_1090);
l_N_1090 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1090))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1091 = r_CALL_EXPR(l_N_1090, p_WANT);
return rv1091; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { 
R21 * l_A_1092; memset(&l_A_1092, 0, sizeof l_A_1092);
l_A_1092 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((*(R21 *)rt_nil_check(l_A_1092))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1092))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1092))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1093; memset(&l_B_1093, 0, sizeof l_B_1093);
S_R26(&l_B_1093, r_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1092))).f_A))).f_A, NULL), 0);
R10 l_I_1094; memset(&l_I_1094, 0, sizeof l_I_1094);
S_R10(&l_I_1094, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1092))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1093).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1095 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1093).f_C, l_I_1094, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1093).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1095; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1096 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1093).f_C, l_I_1094, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1093).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1096; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1092))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1092))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1092))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1092))).f_A))).f_A))).f_NAME))
{
{ R26 rv1097 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1092))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1092))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1097; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1092))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1098; memset(&l_Y_1098, 0, sizeof l_Y_1098);
l_Y_1098 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1092))).f_NAME);
if ((!(l_Y_1098 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1098))).f_KIND == g_Y_TYPE))
{
{ R26 rv1099 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1092))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1099; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1092))).f_NAME))
{
{ R26 rv1100 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1092))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1100; }
}
}
}
{
R26 l_B_1101; memset(&l_B_1101, 0, sizeof l_B_1101);
S_R26(&l_B_1101, r_EXPR(l_A_1092, NULL), 0);
R22 * l_BT_1102; memset(&l_BT_1102, 0, sizeof l_BT_1102);
l_BT_1102 = (l_B_1101).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1102))).f_KIND == g_T_REC))
{
{
R24 * l_F_1103; memset(&l_F_1103, 0, sizeof l_F_1103);
l_F_1103 = r_FIND_FIELD(l_BT_1102, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1103 == NULL)))
{
r_CHECK_VARIANT(l_F_1103, l_BT_1102, l_A_1092, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1104 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1101).f_C, ((*(R24 *)rt_nil_check(l_F_1103))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1103))).f_T, ((l_B_1101).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1103))).f_KIND == ((rt_int)0LL))), (l_B_1101).f_C);
return rv1104; }
}
}
}
{ R26 rv1105 = r_ATTRIBUTE(l_B_1101, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1105; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { 
{ rt_int rv1106 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1106; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1107; memset(&l_TAGV_1107, 0, sizeof l_TAGV_1107);
S_R23(&l_TAGV_1107, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1107).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1107).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { 
R24 * l_F_1108; memset(&l_F_1108, 0, sizeof l_F_1108);
l_F_1108 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1109; memset(&l_A_1109, 0, sizeof l_A_1109);
l_A_1109 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1108 == NULL)) goto L_end1110;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1108))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1109 == NULL))
{
{ R23 rv1111 = r_NO_MVAL();
return rv1111; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1108))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1109))).f_ANYARG)
{
{ R23 rv1112 = r_NO_MVAL();
return rv1112; }
}
{ R23 rv1113 = ((*(R25 *)rt_nil_check(l_A_1109))).f_MLO;
return rv1113; }
}
l_A_1109 = ((*(R25 *)rt_nil_check(l_A_1109))).f_NEXT;
}
l_F_1108 = ((*(R24 *)rt_nil_check(l_F_1108))).f_NEXT;
}
} L_end1110: ;
{ R23 rv1114 = r_NO_MVAL();
return rv1114; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { 
R21 * l_P_1115; memset(&l_P_1115, 0, sizeof l_P_1115);
l_P_1115 = p_L;
for (;;) {
if ((l_P_1115 == NULL)) goto L_end1116;
{
if ((((*(R21 *)rt_nil_check(l_P_1115))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1115))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1115))).f_B, p_T)).f_V)))
{
{ rt_int rv1117 = 1;
return rv1117; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1115, p_T)).f_V == p_V))
{
{ rt_int rv1118 = 1;
return rv1118; }
}
l_P_1115 = ((*(R21 *)rt_nil_check(l_P_1115))).f_NEXT;
}
} L_end1116: ;
{ rt_int rv1119 = 0;
return rv1119; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1120; memset(&l_A_1120, 0, sizeof l_A_1120);
S_R26(&l_A_1120, r_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A, NULL), 0);
R10 l_I_1121; memset(&l_I_1121, 0, sizeof l_I_1121);
S_R10(&l_I_1121, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1120).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1122 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1120).f_C, (l_A_1120).f_C, l_I_1121, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1120).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1122; }
}
}
}
{ R26 rv1123 = r_INDEX_EXPR2(p_E);
return rv1123; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { 
R26 l_B_1124; memset(&l_B_1124, 0, sizeof l_B_1124);
S_R26(&l_B_1124, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1125; memset(&l_T_1125, 0, sizeof l_T_1125);
l_T_1125 = r_REAL_TYPE((l_B_1124).f_T);
R21 * l_S_1126; memset(&l_S_1126, 0, sizeof l_S_1126);
l_S_1126 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1127; memset(&l_IX_1127, 0, sizeof l_IX_1127);
S_R10(&l_IX_1127, r_MK(rt_str("", 0)), 0);
rt_int l_N_1128; memset(&l_N_1128, 0, sizeof l_N_1128);
l_N_1128 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1125))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1126 == NULL)) goto L_end1129;
{
if ((l_N_1128 > ((rt_int)0LL)))
{
S_R10(&l_IX_1127, r_CATS(l_IX_1127, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1127, r_CAT(l_IX_1127, r_INT_EXPR(l_S_1126)), 0);
l_N_1128 = rt_add(l_N_1128, ((rt_int)1LL));
l_S_1126 = ((*(R21 *)rt_nil_check(l_S_1126))).f_NEXT;
}
} L_end1129: ;
if ((!(l_N_1128 == ((*(R22 *)rt_nil_check(l_T_1125))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1128 == ((rt_int)1LL)))
{
{ R26 rv1130 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1124).f_C, l_IX_1127, (l_B_1124).f_C, (l_B_1124).f_C), ((*(R22 *)rt_nil_check(l_T_1125))).f_ELEM, (l_B_1124).f_LVAL, r_NO_TEXT());
return rv1130; }
}
{
R10 l_X_1131; memset(&l_X_1131, 0, sizeof l_X_1131);
S_R10(&l_X_1131, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1124).f_C, r_NUM(l_N_1128), (l_B_1124).f_C, (l_B_1124).f_C), 0);
{ R26 rv1132 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1131, l_IX_1127), ((*(R22 *)rt_nil_check(l_T_1125))).f_ELEM, (l_B_1124).f_LVAL, r_NO_TEXT());
return rv1132; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1133 = r_MKN(rt_str("NEGATE_", 7));
return rv1133; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1134 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1134; }
}
{ R10 rv1135 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1135; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1136 = r_MKN(rt_str("ADD_", 4));
return rv1136; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1137 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1137; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1138 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1138; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1139 = r_MKN(rt_str("DIVIDE_", 7));
return rv1139; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1140 = r_MKN(rt_str("MODULUS_", 8));
return rv1140; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1141 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1141; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1142 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1142; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1143 = r_MKN(rt_str("EQUAL_", 6));
return rv1143; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1144 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1144; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1145 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1145; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1146 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1146; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1147 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1147; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1148 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1148; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1149 = r_MKN(rt_str("AND_", 4));
return rv1149; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1150 = r_MKN(rt_str("OR_", 3));
return rv1150; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1151 = r_MKN(rt_str("XOR_", 4));
return rv1151; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1152 = r_MKN(rt_str("IMPLIES_", 8));
return rv1152; }
}
{ R10 rv1153 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1153; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { 
R27 * l_A_1154; memset(&l_A_1154, 0, sizeof l_A_1154);
l_A_1154 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1154)), ({ R27 rc1155; memset(&rc1155, 0, sizeof rc1155);  rc1155.f_E = NULL; S_R26(&rc1155.f_V, p_V, 0); rc1155.f_HAVE = 1; rc1155.f_MODE = g_M_IN; rc1155.f_NEXT = p_NEXT; rc1155; }), 0);
{ R27 * rv1156 = l_A_1154;
return rv1156; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { 
R27 * l_A_1157; memset(&l_A_1157, 0, sizeof l_A_1157);
l_A_1157 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1157)), ({ R27 rc1158; memset(&rc1158, 0, sizeof rc1158);  rc1158.f_E = p_E; S_R26(&rc1158.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1158.f_HAVE = 0; rc1158.f_MODE = p_MODE; rc1158.f_NEXT = p_NEXT; rc1158; }), 0);
{ R27 * rv1159 = l_A_1157;
return rv1159; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { 
R12 * l_Y_1160; memset(&l_Y_1160, 0, sizeof l_Y_1160);
l_Y_1160 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1160 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1160 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1161 = l_Y_1160;
return rv1161; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { 
R27 * l_ARGS_1162; memset(&l_ARGS_1162, 0, sizeof l_ARGS_1162);
l_ARGS_1162 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1163; memset(&l_Y_1163, 0, sizeof l_Y_1163);
l_Y_1163 = r_USER_OPERATOR(p_NAME, l_ARGS_1162, p_LINE);
if ((l_Y_1163 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1164 = r_CALL_SYM(l_Y_1163, l_ARGS_1162, p_LINE);
return rv1164; }
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
{ R10 rv1165 = p_C;
return rv1165; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1166 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1166; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1167 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1167; }
}
{ R10 rv1168 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1168; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1169 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1169; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { 
R22 * l_RT_1170; memset(&l_RT_1170, 0, sizeof l_RT_1170);
l_RT_1170 = r_REAL_TYPE(p_T);
R22 * l_VT_1171; memset(&l_VT_1171, 0, sizeof l_VT_1171);
l_VT_1171 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1171))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_PTR)))
{
{ R10 rv1172 = (p_V).f_C;
return rv1172; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1171))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1171)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1173 = (p_V).f_C;
return rv1173; }
}
if ((!r_SAME_CLASS(l_RT_1170, l_VT_1171)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1171), (r_TYPE_NAME(l_VT_1171)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1170), (r_TYPE_NAME(l_RT_1170)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_INT))
{
{ R10 rv1174 = r_RANGE_CHECK(l_RT_1170, r_RESCALE(p_V, ((*(R22 *)rt_nil_check(l_RT_1170))).f_SCALE, p_LINE), p_SELF);
return rv1174; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_FLOAT) || (((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_ENUM)))
{
{ R10 rv1175 = r_RANGE_CHECK(l_RT_1170, (p_V).f_C, p_SELF);
return rv1175; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RT_1170))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1171))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1170))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1171))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1170), r_TARGET(l_VT_1171))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1170)) && (!r_HAS_ANY(l_VT_1171))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1170))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1171))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1170))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1170))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1171))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1176 = (p_V).f_C;
return rv1176; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1177; memset(&l_ARGS_1177, 0, sizeof l_ARGS_1177);
l_ARGS_1177 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1178; memset(&l_Y_1178, 0, sizeof l_Y_1178);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1177))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1178 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1177, p_LINE, 0);
if ((l_Y_1178 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1177))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1178 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1177, p_LINE, 0);
}
if ((l_Y_1178 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1179 = r_CATS((r_CALL_SYM(l_Y_1178, l_ARGS_1177, p_LINE)).f_C, rt_str(";", 1));
return rv1179; }
}
}
{ R10 rv1180 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1180; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { 
R26 l_A_1181; memset(&l_A_1181, 0, sizeof l_A_1181);
S_R26(&l_A_1181, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1182; memset(&l_T_1182, 0, sizeof l_T_1182);
l_T_1182 = (l_A_1181).f_T;
R10 l_OP_1183; memset(&l_OP_1183, 0, sizeof l_OP_1183);
S_R10(&l_OP_1183, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R22 *)rt_nil_check(l_T_1182))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1184; memset(&l_ARGS_1184, 0, sizeof l_ARGS_1184);
l_ARGS_1184 = r_VAL_ARG(l_A_1181, NULL);
R12 * l_Y_1185; memset(&l_Y_1185, 0, sizeof l_Y_1185);
l_Y_1185 = r_USER_OPERATOR(r_OP_NAME(l_OP_1183, 1), l_ARGS_1184, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_1185 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1182));
}
{ R26 rv1186 = r_CALL_SYM(l_Y_1185, l_ARGS_1184, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1186; }
}
}
if (r_TEQS(l_OP_1183, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1182))).f_KIND == g_T_BOOL))
{
{ R26 rv1187 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1181).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1187; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1182))).f_KIND == g_T_BITS))
{
{ R26 rv1188 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1181).f_C), l_T_1182);
return rv1188; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1182))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1183, rt_str("-", 1)))
{
{ R26 rv1189 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1181).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1182))).f_SCALE));
return rv1189; }
}
{ R26 rv1190 = r_MKET((l_A_1181).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1182))).f_SCALE));
return rv1190; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1182))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_1183, rt_str("-", 1)))
{
{ R26 rv1191 = r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_1181).f_C), l_T_1182);
return rv1191; }
}
{ R26 rv1192 = l_A_1181;
return rv1192; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1182));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { 
{ rt_int rv1193 = (((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1193; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { 
R10 l_OP_1194; memset(&l_OP_1194, 0, sizeof l_OP_1194);
S_R10(&l_OP_1194, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1195; memset(&l_A_1195, 0, sizeof l_A_1195);
R26 l_B_1196; memset(&l_B_1196, 0, sizeof l_B_1196);
if ((r_TEQS(l_OP_1194, rt_str("&", 1)) || r_TEQS(l_OP_1194, rt_str("!", 1))))
{
{
R23 l_MA_1197; memset(&l_MA_1197, 0, sizeof l_MA_1197);
S_R23(&l_MA_1197, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1198; memset(&l_CA_1198, 0, sizeof l_CA_1198);
S_R10(&l_CA_1198, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1199; memset(&l_CB_1199, 0, sizeof l_CB_1199);
S_R10(&l_CB_1199, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1194, rt_str("&", 1)))
{
{ R26 rv1200 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1198, l_CB_1199), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1200; }
}
{ R26 rv1201 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1198, l_CB_1199), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1201; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1196, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1195, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1196).f_T), 0);
}
else
{
S_R26(&l_A_1195, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1196, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1195).f_T), 0);
}
{ R26 rv1202 = r_APPLY_OPERATOR(p_E, l_OP_1194, l_A_1195, l_B_1196);
return rv1202; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { 
R22 * l_AT_1203; memset(&l_AT_1203, 0, sizeof l_AT_1203);
l_AT_1203 = (p_A).f_T;
R22 * l_BT_1204; memset(&l_BT_1204, 0, sizeof l_BT_1204);
l_BT_1204 = (p_B).f_T;
rt_int l_LINE_1205; memset(&l_LINE_1205, 0, sizeof l_LINE_1205);
l_LINE_1205 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R10 l_NAME_1206; memset(&l_NAME_1206, 0, sizeof l_NAME_1206);
S_R10(&l_NAME_1206, r_OP_NAME(p_OP, 0), 0);
if (((((!(r_LOOKUP(l_NAME_1206) == NULL)) || (!(r_LOOKUP(r_MKN(rt_b_slice(r_STR(l_NAME_1206, (l_NAME_1206).f_LEN), ((rt_int)0LL), rt_sub((l_NAME_1206).f_LEN, ((rt_int)2LL))))) == NULL))) || (((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1207; memset(&l_ARGS_1207, 0, sizeof l_ARGS_1207);
l_ARGS_1207 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R12 * l_Y_1208; memset(&l_Y_1208, 0, sizeof l_Y_1208);
l_Y_1208 = r_USER_OPERATOR(l_NAME_1206, l_ARGS_1207, l_LINE_1205);
if ((!(l_Y_1208 == NULL)))
{
{ R26 rv1209 = r_CALL_SYM(l_Y_1208, l_ARGS_1207, l_LINE_1205);
return rv1209; }
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R12 * l_Q_1210; memset(&l_Q_1210, 0, sizeof l_Q_1210);
l_Q_1210 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1207, l_LINE_1205);
if ((!(l_Q_1210 == NULL)))
{
{ R26 rv1211 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1210, l_ARGS_1207, l_LINE_1205)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1211; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1205, rt_str("no such operation for the abstract type: ", 41), l_NAME_1206);
}
}
}
}
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1212 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1212; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1213 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1213; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_INT)))
{
{
rt_int l_S_1214; memset(&l_S_1214, 0, sizeof l_S_1214);
l_S_1214 = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1203))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1204))).f_SCALE);
{ R26 rv1215 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), r_RESCALE_C((p_A).f_C, ((*(R22 *)rt_nil_check(l_AT_1203))).f_SCALE, l_S_1214), p_OP, r_RESCALE_C((p_B).f_C, ((*(R22 *)rt_nil_check(l_BT_1204))).f_SCALE, l_S_1214)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1215; }
}
}
else if (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1216 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1216; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1203, l_BT_1204)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1203))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1205, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1217 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1217; }
}
r_FAILT(l_LINE_1205, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_BITS)))))
{
{
R22 * l_T_1218; memset(&l_T_1218, 0, sizeof l_T_1218);
l_T_1218 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1218))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1203))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1203))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1204))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1218))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1203))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1204))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1218))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1218))).f_MLEN).f_V), 0);
}
{ R26 rv1219 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1218);
return rv1219; }
}
}
r_FAIL(l_LINE_1205, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_BITS)))
{
{ R26 rv1220 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1203);
return rv1220; }
}
r_FAILT(l_LINE_1205, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_INT)))
{
{ R26 rv1221 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1221; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1222; memset(&l_T_1222, 0, sizeof l_T_1222);
l_T_1222 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1222))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1203))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1204))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
{ R26 rv1223 = r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_1222);
return rv1223; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
{ R26 rv1224 = r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_1222);
return rv1224; }
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1203))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1204))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1205, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1205, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1203), (r_TYPE_NAME(l_AT_1203)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1225 = r_MK(rt_str("and", 3));
return rv1225; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1226 = r_MK(rt_str("or", 2));
return rv1226; }
}
{ R10 rv1227 = r_MK(rt_str("xor", 3));
return rv1227; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { 
if ((p_A > p_B))
{
{ rt_int rv1228 = p_A;
return rv1228; }
}
{ rt_int rv1229 = p_B;
return rv1229; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { 
R22 * l_AT_1230; memset(&l_AT_1230, 0, sizeof l_AT_1230);
l_AT_1230 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1231; memset(&l_BT_1231, 0, sizeof l_BT_1231);
l_BT_1231 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1232; memset(&l_R_1232, 0, sizeof l_R_1232);
if (((((*(R22 *)rt_nil_check(l_AT_1230))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1231))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1230))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1231))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1230))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1231))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1232, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1230))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1231))).f_KIND == g_T_INT)))
{
{
rt_int l_S_1233; memset(&l_S_1233, 0, sizeof l_S_1233);
l_S_1233 = r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1230))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1231))).f_SCALE);
S_R10(&l_R_1232, r_FMT2(rt_str("(@ == @)", 8), r_RESCALE_C((p_A).f_C, ((*(R22 *)rt_nil_check(l_AT_1230))).f_SCALE, l_S_1233), r_RESCALE_C((p_B).f_C, ((*(R22 *)rt_nil_check(l_BT_1231))).f_SCALE, l_S_1233)), 0);
}
}
else
{
if ((!r_SAME_CLASS(l_AT_1230, l_BT_1231)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1230))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R22 *)rt_nil_check(l_AT_1230))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1230) || r_HAS_ANY(l_BT_1231)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
S_R10(&l_R_1232, r_EQUAL_CODE(l_AT_1230, (p_A).f_C, (p_B).f_C), 0);
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1232, r_FMT1(rt_str("(!@)", 4), l_R_1232), 0);
}
{ R26 rv1234 = r_MKET(l_R_1232, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1234; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { 
rt_int l_S1_1235; memset(&l_S1_1235, 0, sizeof l_S1_1235);
l_S1_1235 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1236; memset(&l_S2_1236, 0, sizeof l_S2_1236);
l_S2_1236 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1237; memset(&l_S_1237, 0, sizeof l_S_1237);
l_S_1237 = r_MAX_INT(l_S1_1235, l_S2_1236);
R10 l_FN_1238; memset(&l_FN_1238, 0, sizeof l_FN_1238);
S_R10(&l_FN_1238, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1238, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1239 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1238, r_RESCALE_C((p_A).f_C, l_S1_1235, l_S_1237), r_RESCALE_C((p_B).f_C, l_S2_1236, l_S_1237)), r_INT_TYPE(l_S_1237));
return rv1239; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1240 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1235, l_S2_1236)));
return rv1240; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1241 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1235, l_S2_1236)));
return rv1241; }
}
{ R26 rv1242 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1235, l_S2_1236)));
return rv1242; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1243 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1235));
return rv1243; }
}
{ R26 rv1244 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1235));
return rv1244; }
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
rt_int l_S1_1245; memset(&l_S1_1245, 0, sizeof l_S1_1245);
l_S1_1245 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1246; memset(&l_S2_1246, 0, sizeof l_S2_1246);
l_S2_1246 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1247; memset(&l_RND_1247, 0, sizeof l_RND_1247);
S_R10(&l_RND_1247, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1247, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1248 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1248; }
}
{
R23 l_SM_1249; memset(&l_SM_1249, 0, sizeof l_SM_1249);
S_R23(&l_SM_1249, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1250; memset(&l_S_1250, 0, sizeof l_S_1250);
l_S_1250 = (l_SM_1249).f_V;
rt_int l_SR_1251; memset(&l_SR_1251, 0, sizeof l_SR_1251);
l_SR_1251 = r_MAX_INT(l_S1_1245, l_S2_1246);
if ((!(l_SM_1249).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1252 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1250, l_S1_1245), l_S2_1246)), l_RND_1247), r_INT_TYPE(l_S_1250));
return rv1252; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1253 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1250, l_S1_1245), l_S2_1246)), l_RND_1247), r_INT_TYPE(l_S_1250));
return rv1253; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1254 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1245), r_NUM(l_S_1250), l_RND_1247), r_INT_TYPE(l_S_1250));
return rv1254; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_FN_1255; memset(&l_FN_1255, 0, sizeof l_FN_1255);
S_R10(&l_FN_1255, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1255, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1256 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_1255, r_RESCALE_C((p_A).f_C, l_S1_1245, l_SR_1251), r_RESCALE_C((p_B).f_C, l_S2_1246, l_SR_1251)), r_NUM(l_SR_1251), r_NUM(l_S_1250), l_RND_1247), r_INT_TYPE(l_S_1250));
return rv1256; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { 
R26 l_V_1257; memset(&l_V_1257, 0, sizeof l_V_1257);
S_R26(&l_V_1257, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1258; memset(&l_T_1258, 0, sizeof l_T_1258);
l_T_1258 = r_REAL_TYPE((l_V_1257).f_T);
R21 * l_R_1259; memset(&l_R_1259, 0, sizeof l_R_1259);
l_R_1259 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1260; memset(&l_TMP_1260, 0, sizeof l_TMP_1260);
S_R10(&l_TMP_1260, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1261; memset(&l_LO_1261, 0, sizeof l_LO_1261);
R26 l_HI_1262; memset(&l_HI_1262, 0, sizeof l_HI_1262);
R10 l_LOC_1263; memset(&l_LOC_1263, 0, sizeof l_LOC_1263);
R10 l_HIC_1264; memset(&l_HIC_1264, 0, sizeof l_HIC_1264);
R10 l_LO_OP_1265; memset(&l_LO_OP_1265, 0, sizeof l_LO_OP_1265);
S_R10(&l_LO_OP_1265, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1266; memset(&l_HI_OP_1266, 0, sizeof l_HI_OP_1266);
S_R10(&l_HI_OP_1266, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1261, r_EXPR(((*(R21 *)rt_nil_check(l_R_1259))).f_A, l_T_1258), 0);
S_R26(&l_HI_1262, r_EXPR(((*(R21 *)rt_nil_check(l_R_1259))).f_B, l_T_1258), 0);
if (((((*(R22 *)rt_nil_check(l_T_1258))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1258))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1258))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1258))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1258))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
S_R10(&l_LOC_1263, r_CONVERT_TO_SCALE(l_LO_1261, l_T_1258, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
S_R10(&l_HIC_1264, r_CONVERT_TO_SCALE(l_HI_1262, l_T_1258, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
if (((((*(R21 *)rt_nil_check(l_R_1259))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1259))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1265, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1259))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1266, r_MK(rt_str("<", 1)), 0);
}
{
R10 l_P1_1267; memset(&l_P1_1267, 0, sizeof l_P1_1267);
S_R10(&l_P1_1267, r_FMT4(rt_str("({ @ @ = @; (@) ", 16), r_CTYPE(l_T_1258), l_TMP_1260, (l_V_1257).f_C, l_LOC_1263), 0);
R10 l_P2_1268; memset(&l_P2_1268, 0, sizeof l_P2_1268);
S_R10(&l_P2_1268, r_FMT4(rt_str("@@ @ && @ ", 10), l_P1_1267, l_LO_OP_1265, l_TMP_1260, l_TMP_1260), 0);
{ R26 rv1269 = r_MKET(r_FMT3(rt_str("@@ (@); })", 10), l_P2_1268, l_HI_OP_1266, l_HIC_1264), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1269; }
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
{ R10 rv1270 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1270; }
}
{ R10 rv1271 = (p_V).f_C;
return rv1271; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { 
{ R26 rv1272 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1272; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { 
rt_int l_B_1273; memset(&l_B_1273, 0, sizeof l_B_1273);
l_B_1273 = ((rt_int)0LL);
rt_int l_P_1274; memset(&l_P_1274, 0, sizeof l_P_1274);
l_P_1274 = ((rt_int)1LL);
for (;;) {
if ((l_P_1274 >= p_N)) goto L_end1275;
{
l_B_1273 = rt_add(l_B_1273, ((rt_int)1LL));
l_P_1274 = rt_mul(l_P_1274, ((rt_int)2LL));
}
} L_end1275: ;
{ rt_int rv1276 = l_B_1273;
return rv1276; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1277; memset(&l_M_1277, 0, sizeof l_M_1277);
S_R23(&l_M_1277, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1277).f_OK)
{
{ rt_int rv1278 = (l_M_1277).f_V;
return rv1278; }
}
}
}
}
{ rt_int rv1279 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1279; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { 
R22 * l_T_1280; memset(&l_T_1280, 0, sizeof l_T_1280);
l_T_1280 = (p_B).f_T;
rt_int l_K_1281; memset(&l_K_1281, 0, sizeof l_K_1281);
l_K_1281 = ((*(R22 *)rt_nil_check(l_T_1280))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1282 = r_SIZE_OF(l_T_1280, (p_B).f_C);
return rv1282; }
}
if ((l_K_1281 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1283 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1280))).f_SCALE);
return rv1283; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1284 = r_INT_ET(((rt_int)2LL));
return rv1284; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1285 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1285; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1286 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1286; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1280))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1287 = r_MKET(((*(R22 *)rt_nil_check(l_T_1280))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1280))).f_SCALE));
return rv1287; }
}
{ R26 rv1288 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1280))).f_SCALE));
return rv1288; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1280))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1289 = r_MKET(((*(R22 *)rt_nil_check(l_T_1280))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1280))).f_SCALE));
return rv1289; }
}
{ R26 rv1290 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1280))).f_SCALE));
return rv1290; }
}
}
else if ((l_K_1281 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1291 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1280))).f_SCALE);
return rv1291; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1292 = r_INT_ET(((rt_int)15LL));
return rv1292; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1293 = r_INT_ET(((rt_int)2LL));
return rv1293; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ R26 rv1294 = r_INT_ET(rt_neg(((rt_int)1022LL)));
return rv1294; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ R26 rv1295 = r_INT_ET(((rt_int)1023LL));
return rv1295; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
{ R26 rv1296 = r_INT_ET(((rt_int)53LL));
return rv1296; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ R26 rv1297 = r_INT_ET(((rt_int)11LL));
return rv1297; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1280))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1298 = r_MKET(((*(R22 *)rt_nil_check(l_T_1280))).f_LO_C, l_T_1280);
return rv1298; }
}
{ R26 rv1299 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1280);
return rv1299; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1280))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1300 = r_MKET(((*(R22 *)rt_nil_check(l_T_1280))).f_HI_C, l_T_1280);
return rv1300; }
}
{ R26 rv1301 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1280);
return rv1301; }
}
}
else if ((l_K_1281 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1280))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1302 = r_MKET(((*(R22 *)rt_nil_check(l_T_1280))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1280))).f_BASE);
return rv1302; }
}
{ R26 rv1303 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1280))).f_BASE);
return rv1303; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1280))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1304 = r_MKET(((*(R22 *)rt_nil_check(l_T_1280))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1280))).f_BASE);
return rv1304; }
}
{ R26 rv1305 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1280))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1280))).f_BASE);
return rv1305; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1280))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1306 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R22 *)rt_nil_check(l_T_1280))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1280))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1306; }
}
{ R26 rv1307 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1280))).f_BASE))).f_NLITS);
return rv1307; }
}
}
else if (((l_K_1281 == g_T_STR) || (l_K_1281 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1308 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1308; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1309 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1309; }
}
}
else if ((l_K_1281 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1310 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1280))).f_DIMS);
return rv1310; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1280))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1311 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1311; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1312 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1312; }
}
}
else if ((l_K_1281 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1280))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1313 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1313; }
}
{ R26 rv1314 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1314; }
}
}
else if (((l_K_1281 == g_T_ABS) || (l_K_1281 == g_T_REC)))
{
{
R22 * l_U_1315; memset(&l_U_1315, 0, sizeof l_U_1315);
l_U_1315 = l_T_1280;
if ((l_K_1281 == g_T_ABS))
{
l_U_1315 = ((*(R22 *)rt_nil_check(l_T_1280))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1315))).f_KIND == g_T_REC))
{
{
R24 * l_F_1316; memset(&l_F_1316, 0, sizeof l_F_1316);
l_F_1316 = r_FIND_FIELD(l_U_1315, p_NAME);
if ((!(l_F_1316 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1316))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1317 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1316))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1316))).f_T);
return rv1317; }
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
R21 * l_N_1318; memset(&l_N_1318, 0, sizeof l_N_1318);
l_N_1318 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1318))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1319 = l_N_1318;
return rv1319; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { 
rt_int l_K_1320; memset(&l_K_1320, 0, sizeof l_K_1320);
l_K_1320 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1320 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1321 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1321; }
}
}
{ R26 rv1322 = r_INT_ET(((rt_int)64LL));
return rv1322; }
}
else if ((l_K_1320 == g_T_FLOAT))
{
{ R26 rv1323 = r_INT_ET(((rt_int)64LL));
return rv1323; }
}
else if ((l_K_1320 == g_T_BOOL))
{
{ R26 rv1324 = r_INT_ET(((rt_int)1LL));
return rv1324; }
}
else if ((l_K_1320 == g_T_ENUM))
{
{ R26 rv1325 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1325; }
}
else if ((l_K_1320 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1326 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1326; }
}
{ R26 rv1327 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1327; }
}
else if ((l_K_1320 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1328 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1328; }
}
{ R26 rv1329 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1329; }
}
else if (((l_K_1320 == g_T_PTR) || (l_K_1320 == g_T_SEM)))
{
{ R26 rv1330 = r_INT_ET(((rt_int)64LL));
return rv1330; }
}
else if ((l_K_1320 == g_T_ABS))
{
{ R26 rv1331 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1331; }
}
else if ((l_K_1320 == g_T_ARR))
{
{ R26 rv1332 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1332; }
}
{ R26 rv1333 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1333; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{
R22 * l_T_1334; memset(&l_T_1334, 0, sizeof l_T_1334);
l_T_1334 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
{ R26 rv1335 = r_ATTRIBUTE(r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1334)), l_T_1334), p_NAME, p_LINE);
return rv1335; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1336 = r_INT_ET(((rt_int)100000000LL));
return rv1336; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1337 = r_INT_ET(((rt_int)15LL));
return rv1337; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1338 = r_INT_ET(((rt_int)0LL));
return rv1338; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { 
R22 * l_T_1339; memset(&l_T_1339, 0, sizeof l_T_1339);
l_T_1339 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1339 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1339 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1339 = r_REAL_TYPE(l_T_1339);
if ((!(((*(R22 *)rt_nil_check(l_T_1339))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1339))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1340; memset(&l_TMP_1340, 0, sizeof l_TMP_1340);
S_R10(&l_TMP_1340, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1341; memset(&l_R_1341, 0, sizeof l_R_1341);
S_R10(&l_R_1341, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1339))).f_CNAME, l_TMP_1340, l_TMP_1340, l_TMP_1340), 0);
R24 * l_F_1342; memset(&l_F_1342, 0, sizeof l_F_1342);
l_F_1342 = ((*(R22 *)rt_nil_check(l_T_1339))).f_FIELDS;
S_R10(&l_R_1341, r_FMT2(rt_str("@@", 2), l_R_1341, r_INIT_CODE(l_T_1339, l_TMP_1340)), 0);
for (;;) {
if ((l_F_1342 == NULL)) goto L_end1343;
{
if ((((*(R24 *)rt_nil_check(l_F_1342))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1342))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1342))).f_LABELS, (r_TAG_VALUE(l_T_1339, ((*(R24 *)rt_nil_check(l_F_1342))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1339, ((*(R24 *)rt_nil_check(l_F_1342))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1344; memset(&l_INIT_1344, 0, sizeof l_INIT_1344);
l_INIT_1344 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1342))).f_NAME);
if ((l_INIT_1344 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1342))).f_NAME);
}
S_R10(&l_R_1341, r_FMT2(rt_str("@ @", 3), l_R_1341, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1342))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1340, ((*(R24 *)rt_nil_check(l_F_1342))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1344))).f_A, ((*(R24 *)rt_nil_check(l_F_1342))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1344))).f_LINE, l_TMP_1340)), 0);
}
}
}
l_F_1342 = ((*(R24 *)rt_nil_check(l_F_1342))).f_NEXT;
}
} L_end1343: ;
{
R21 * l_P_1345; memset(&l_P_1345, 0, sizeof l_P_1345);
l_P_1345 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1345 == NULL)) goto L_end1346;
{
{
R24 * l_G_1347; memset(&l_G_1347, 0, sizeof l_G_1347);
l_G_1347 = r_FIND_FIELD(l_T_1339, ((*(R21 *)rt_nil_check(l_P_1345))).f_NAME);
if ((l_G_1347 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1345))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1345))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1347))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1345))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1345))).f_NAME);
}
r_CHECK_VARIANT(l_G_1347, l_T_1339, NULL, ((*(R21 *)rt_nil_check(l_P_1345))).f_LINE);
}
l_P_1345 = ((*(R21 *)rt_nil_check(l_P_1345))).f_NEXT;
}
} L_end1346: ;
}
{ R26 rv1348 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1341, l_TMP_1340), l_T_1339);
return rv1348; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { 
R21 * l_P_1349; memset(&l_P_1349, 0, sizeof l_P_1349);
l_P_1349 = p_L;
for (;;) {
if ((l_P_1349 == NULL)) goto L_end1350;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1349))).f_NAME, p_NAME))
{
{ R21 * rv1351 = l_P_1349;
return rv1351; }
}
l_P_1349 = ((*(R21 *)rt_nil_check(l_P_1349))).f_NEXT;
}
} L_end1350: ;
{ R21 * rv1352 = NULL;
return rv1352; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { 
rt_int l_DIMS_1353; memset(&l_DIMS_1353, 0, sizeof l_DIMS_1353);
l_DIMS_1353 = ((rt_int)0LL);
R21 * l_P_1354; memset(&l_P_1354, 0, sizeof l_P_1354);
l_P_1354 = p_E;
R22 * l_ELEM_1355; memset(&l_ELEM_1355, 0, sizeof l_ELEM_1355);
l_ELEM_1355 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1354))).f_KIND == g_N_ARRCONS))) goto L_end1356;
{
l_DIMS_1353 = rt_add(l_DIMS_1353, ((rt_int)1LL));
l_P_1354 = ((*(R21 *)rt_nil_check(l_P_1354))).f_A;
}
} L_end1356: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1355 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1355 == NULL))
{
l_ELEM_1355 = (r_EXPR(l_P_1354, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1355))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1355))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1355 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1357; memset(&l_A_1357, 0, sizeof l_A_1357);
l_A_1357 = r_ARRAY_OF(l_ELEM_1355, l_DIMS_1353);
R10 l_TMP_1358; memset(&l_TMP_1358, 0, sizeof l_TMP_1358);
S_R10(&l_TMP_1358, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1359; memset(&l_R_1359, 0, sizeof l_R_1359);
S_R10(&l_R_1359, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1357))).f_CNAME, l_TMP_1358, l_TMP_1358), 0);
rt_int l_K_1360; memset(&l_K_1360, 0, sizeof l_K_1360);
l_K_1360 = ((rt_int)0LL);
S_R10(&l_R_1359, r_FMT2(rt_str("@@); ", 5), l_R_1359, l_TMP_1358), 0);
l_P_1354 = p_E;
{ rt_int it1362_lo = ((rt_int)0LL), it1362_hi = rt_sub(l_DIMS_1353, ((rt_int)1LL));
for (rt_int it1362 = it1362_lo; it1362 <= it1362_hi; it1362++) {
{
S_R10(&l_R_1359, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1359, l_TMP_1358, r_NUM(it1362), l_TMP_1358), 0);
S_R10(&l_R_1359, r_FMT3(rt_str("@@] = @;", 8), l_R_1359, r_NUM(it1362), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1354))).f_A), ((rt_int)1LL)))), 0);
l_P_1354 = ((*(R21 *)rt_nil_check(l_P_1354))).f_A;
}
} } L_end1361: ;
S_R10(&l_R_1359, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1359, l_TMP_1358, l_TMP_1358, r_NUM(l_DIMS_1353)), 0);
S_R10(&l_R_1359, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1359, l_TMP_1358, l_TMP_1358), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1353, l_A_1357, l_TMP_1358, &l_R_1359, &l_K_1360);
{ R26 rv1363 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1359, l_TMP_1358), l_A_1357);
return rv1363; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { 
R21 * l_P_1364; memset(&l_P_1364, 0, sizeof l_P_1364);
l_P_1364 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1364 == NULL)) goto L_end1365;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1364, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1364))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1364))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1364, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1364))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1364 = ((*(R21 *)rt_nil_check(l_P_1364))).f_NEXT;
}
} L_end1365: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { 
R22 * l_T_1366; memset(&l_T_1366, 0, sizeof l_T_1366);
l_T_1366 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1366))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1366))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1366))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1367 = l_T_1366;
return rv1367; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { 
R22 * l_T_1368; memset(&l_T_1368, 0, sizeof l_T_1368);
l_T_1368 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1369; memset(&l_V_1369, 0, sizeof l_V_1369);
S_R26(&l_V_1369, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1368), 0);
R22 * l_RT_1370; memset(&l_RT_1370, 0, sizeof l_RT_1370);
l_RT_1370 = r_REAL_TYPE(l_T_1368);
if (((((*(R22 *)rt_nil_check((l_V_1369).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1370))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1370))).f_KIND == g_T_INT))
{
{ R26 rv1371 = r_MKET(r_RANGE_CHECK(l_RT_1370, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1369).f_C), r_NO_TEXT()), l_T_1368);
return rv1371; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1370))).f_KIND == g_T_BOOL))
{
{ R26 rv1372 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1369).f_C), l_T_1368);
return rv1372; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1370))).f_KIND == g_T_ENUM))
{
{ R26 rv1373 = r_MKET(r_ENUM_OF_BITS(l_RT_1370, (l_V_1369).f_C), l_T_1368);
return rv1373; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1370))).f_KIND == g_T_FLOAT))
{
{ R26 rv1374 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1369).f_C), l_T_1368);
return rv1374; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1370))).f_KIND == g_T_STR))
{
{ R26 rv1375 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1369).f_C), l_T_1368);
return rv1375; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{ R26 rv1376 = r_MKET(r_CONVERT(l_V_1369, l_T_1368, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_1368);
return rv1376; }
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1377 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1377; }
}
}
{ R10 rv1378 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1378; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { 
R10 l_NAME_1379; memset(&l_NAME_1379, 0, sizeof l_NAME_1379);
S_R10(&l_NAME_1379, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1380; memset(&l_L_1380, 0, sizeof l_L_1380);
l_L_1380 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1381; memset(&l_R_1381, 0, sizeof l_R_1381);
S_R10(&l_R_1381, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1380 == NULL)) goto L_end1382;
{
{
R21 * l_V_1383; memset(&l_V_1383, 0, sizeof l_V_1383);
l_V_1383 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1384; memset(&l_FOUND_1384, 0, sizeof l_FOUND_1384);
l_FOUND_1384 = 0;
for (;;) {
if ((l_V_1383 == NULL)) goto L_end1385;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1383))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1380))).f_NAME))
{
S_R10(&l_R_1381, r_FMT2(rt_str("@@, ", 4), l_R_1381, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1383))).f_A, NULL)).f_C), 0);
l_FOUND_1384 = 1;
}
l_V_1383 = ((*(R21 *)rt_nil_check(l_V_1383))).f_NEXT;
}
} L_end1385: ;
if ((!l_FOUND_1384))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1380))).f_NAME);
}
}
l_L_1380 = ((*(R21 *)rt_nil_check(l_L_1380))).f_NEXT;
}
} L_end1382: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1379, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1381, l_NAME_1379, l_NAME_1379));
{ R10 rv1386 = r_FMT2(rt_str("@, @", 4), l_NAME_1379, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1386; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { 
rt_int l_SEM_1387; memset(&l_SEM_1387, 0, sizeof l_SEM_1387);
l_SEM_1387 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1387 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1387)
{
{
R22 * l_T_1388; memset(&l_T_1388, 0, sizeof l_T_1388);
l_T_1388 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1388 = p_WANT;
}
}
{ R26 rv1389 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1388))).f_SCALE)), l_T_1388);
return rv1389; }
}
}
{
R22 * l_T_1390; memset(&l_T_1390, 0, sizeof l_T_1390);
l_T_1390 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1391; memset(&l_P_1391, 0, sizeof l_P_1391);
l_P_1391 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1391))).f_TARGET = l_T_1390;
((*(R22 *)rt_nil_check(l_P_1391))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1390))
{
{ R26 rv1392 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1390), r_INIT_CODE(l_T_1390, r_MK(rt_str("(*p)", 4)))), l_P_1391);
return rv1392; }
}
{ R26 rv1393 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1390), r_CTYPE(l_T_1390)), l_P_1391);
return rv1393; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { 
R21 * l_P_1394; memset(&l_P_1394, 0, sizeof l_P_1394);
l_P_1394 = p_L;
{ rt_int it1396_lo = ((rt_int)1LL), it1396_hi = p_K;
for (rt_int it1396 = it1396_lo; it1396 <= it1396_hi; it1396++) {
{
if ((!(l_P_1394 == NULL)))
{
l_P_1394 = ((*(R21 *)rt_nil_check(l_P_1394))).f_NEXT;
}
}
} } L_end1395: ;
{ R21 * rv1397 = l_P_1394;
return rv1397; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { 
rt_int l_N_1398; memset(&l_N_1398, 0, sizeof l_N_1398);
l_N_1398 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1398 < p_LO) || (l_N_1398 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { 
R21 * l_L_1399; memset(&l_L_1399, 0, sizeof l_L_1399);
l_L_1399 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1399 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1399))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1399))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1399))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1400 = r_MK(rt_str("1", 1));
return rv1400; }
}
{ R10 rv1401 = r_MK(rt_str("0", 1));
return rv1401; }
}
if (((((*(R21 *)rt_nil_check(l_L_1399))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1399))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1399))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1402 = r_MK(rt_str("1", 1));
return rv1402; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1399))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1403 = r_MK(rt_str("0", 1));
return rv1403; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1404 = r_MK(rt_str("1", 1));
return rv1404; }
}
{ R10 rv1405 = r_MK(rt_str("0", 1));
return rv1405; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { 
if ((p_E == NULL))
{
{ rt_int rv1406 = 0;
return rv1406; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1407 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1407; }
}
{ rt_int rv1408 = 0;
return rv1408; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1409 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1409; }
}
{ R21 * rv1410 = p_E;
return rv1410; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { 
R10 l_NAME_1411; memset(&l_NAME_1411, 0, sizeof l_NAME_1411);
S_R10(&l_NAME_1411, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1412; memset(&l_LINE_1412, 0, sizeof l_LINE_1412);
l_LINE_1412 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_1411, rt_str("PUT", 3)) || r_TEQS(l_NAME_1411, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1413; memset(&l_V_1413, 0, sizeof l_V_1413);
S_R26(&l_V_1413, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1413).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1412, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1411, rt_str("PUT", 3)))
{
{ R26 rv1414 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1413).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1414; }
}
{ R26 rv1415 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1413).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1415; }
}
}
else if (r_TEQS(l_NAME_1411, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1416 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1416; }
}
else if (r_TEQS(l_NAME_1411, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1417 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1417; }
}
else if (r_TEQS(l_NAME_1411, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1418 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1418; }
}
else if (r_TEQS(l_NAME_1411, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1419 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1419; }
}
else if (r_TEQS(l_NAME_1411, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1420 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1420; }
}
if (r_TEQS(l_NAME_1411, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1421 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1412);
return rv1421; }
}
else if (r_TEQS(l_NAME_1411, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1422 = r_TO_FIXED_CALL(p_E);
return rv1422; }
}
else if (r_TEQS(l_NAME_1411, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1423; memset(&l_V_1423, 0, sizeof l_V_1423);
S_R26(&l_V_1423, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1424; memset(&l_P_1424, 0, sizeof l_P_1424);
S_R23(&l_P_1424, r_MANIFEST(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R22 * l_VT_1425; memset(&l_VT_1425, 0, sizeof l_VT_1425);
l_VT_1425 = r_REAL_TYPE((l_V_1423).f_T);
R22 * l_T_1426; memset(&l_T_1426, 0, sizeof l_T_1426);
l_T_1426 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_1424).f_OK))
{
r_FAIL(l_LINE_1412, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_1424).f_V < ((rt_int)1LL)) || ((l_P_1424).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_1412, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R22 *)rt_nil_check(l_T_1426))).f_SCALE = (l_P_1424).f_V;
if ((((*(R22 *)rt_nil_check(l_VT_1425))).f_KIND == g_T_INT))
{
{ R26 rv1427 = r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_1423).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1425))).f_SCALE)), l_T_1426);
return rv1427; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1425))).f_KIND == g_T_FLOAT))
{
{ R26 rv1428 = r_MKET((l_V_1423).f_C, l_T_1426);
return rv1428; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1425))).f_KIND == g_T_STR))
{
{ R26 rv1429 = r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_1423).f_C), l_T_1426);
return rv1429; }
}
r_FAIL(l_LINE_1412, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1411, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1430 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1412);
return rv1430; }
}
else if (r_TEQS(l_NAME_1411, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1431; memset(&l_V_1431, 0, sizeof l_V_1431);
S_R26(&l_V_1431, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1431).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1432 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1431).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1431).f_T))).f_SCALE));
return rv1432; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1431).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1433 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1431).f_C), (l_V_1431).f_T);
return rv1433; }
}
r_FAIL(l_LINE_1412, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1411, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1411, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1434; memset(&l_V_1434, 0, sizeof l_V_1434);
S_R26(&l_V_1434, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1435; memset(&l_T_1435, 0, sizeof l_T_1435);
l_T_1435 = r_REAL_TYPE((l_V_1434).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1435))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1412, rt_str("an enumerated value expected by ", 32), l_NAME_1411);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1435))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1412, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1411);
}
if (r_TEQS(l_NAME_1411, rt_str("SUCC", 4)))
{
{ R26 rv1436 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1434).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1435))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1435))).f_BASE);
return rv1436; }
}
{ R26 rv1437 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1434).f_C), ((*(R22 *)rt_nil_check(l_T_1435))).f_BASE);
return rv1437; }
}
}
else if (r_TEQS(l_NAME_1411, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1438; memset(&l_V_1438, 0, sizeof l_V_1438);
S_R26(&l_V_1438, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1439; memset(&l_K_1439, 0, sizeof l_K_1439);
l_K_1439 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1438).f_T)))).f_KIND;
R22 * l_T_1440; memset(&l_T_1440, 0, sizeof l_T_1440);
l_T_1440 = r_NEW_TYP(l_K_1439);
if (((!(l_K_1439 == g_T_STR)) && (!(l_K_1439 == g_T_BITS))))
{
r_FAIL(l_LINE_1412, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1440))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1438).f_T))).f_BASE;
{ R26 rv1441 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1438).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1440);
return rv1441; }
}
}
else if (r_TEQS(l_NAME_1411, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1442 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1442; }
}
else if (r_TEQS(l_NAME_1411, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1443 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1443; }
}
else if (((r_TEQS(l_NAME_1411, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1411, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1411, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1444; memset(&l_BITS_1444, 0, sizeof l_BITS_1444);
S_R10(&l_BITS_1444, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1411, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1444, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1411, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1444, r_MK(rt_str("4", 1)), 0);
}
{ R26 rv1445 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1444), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1445; }
}
}
else if ((r_TEQS(l_NAME_1411, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1411, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1446; memset(&l_S_1446, 0, sizeof l_S_1446);
S_R23(&l_S_1446, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_1446).f_OK))
{
r_FAIL(l_LINE_1412, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_1411, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1447 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1446).f_V));
return rv1447; }
}
{ R26 rv1448 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1446).f_V));
return rv1448; }
}
}
else if (((r_TEQS(l_NAME_1411, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1411, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1411, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R22 * l_T_1449; memset(&l_T_1449, 0, sizeof l_T_1449);
l_T_1449 = r_NEW_TYP(g_T_FLOAT);
R23 l_P_1450; memset(&l_P_1450, 0, sizeof l_P_1450);
S_R23(&l_P_1450, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_1450).f_OK))
{
r_FAIL(l_LINE_1412, rt_str("the precision must be manifest", 30));
}
((*(R22 *)rt_nil_check(l_T_1449))).f_SCALE = (l_P_1450).f_V;
if (r_TEQS(l_NAME_1411, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1451 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1449);
return rv1451; }
}
else if (r_TEQS(l_NAME_1411, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1452 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1449);
return rv1452; }
}
{ R26 rv1453 = r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_1449);
return rv1453; }
}
}
else if (r_TEQS(l_NAME_1411, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1454 = r_INT_ET(((rt_int)15LL));
return rv1454; }
}
else if (r_TEQS(l_NAME_1411, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1455 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1455; }
}
else if (r_TEQS(l_NAME_1411, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1456 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1456; }
}
{ R26 rv1457 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1457; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { 
R22 * l_T_1458; memset(&l_T_1458, 0, sizeof l_T_1458);
l_T_1458 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1459; memset(&l_K_1459, 0, sizeof l_K_1459);
l_K_1459 = ((*(R22 *)rt_nil_check(l_T_1458))).f_KIND;
R22 * l_S_1460; memset(&l_S_1460, 0, sizeof l_S_1460);
l_S_1460 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1459 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1458))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1461 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1460);
return rv1461; }
}
{ R26 rv1462 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1458))).f_SCALE)), l_S_1460);
return rv1462; }
}
else if ((l_K_1459 == g_T_FLOAT))
{
{ R26 rv1463 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1458))).f_SCALE)), l_S_1460);
return rv1463; }
}
else if ((l_K_1459 == g_T_BOOL))
{
{ R26 rv1464 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1460);
return rv1464; }
}
else if ((l_K_1459 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1458))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1465 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1460);
return rv1465; }
}
{ R26 rv1466 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1458))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1460);
return rv1466; }
}
else if (((l_K_1459 == g_T_STR) || (l_K_1459 == g_T_BITS)))
{
{ R26 rv1467 = r_MKET((p_V).f_C, l_S_1460);
return rv1467; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1458));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { 
R26 l_V_1468; memset(&l_V_1468, 0, sizeof l_V_1468);
S_R26(&l_V_1468, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1469; memset(&l_T_1469, 0, sizeof l_T_1469);
l_T_1469 = r_REAL_TYPE((l_V_1468).f_T);
rt_int l_N_1470; memset(&l_N_1470, 0, sizeof l_N_1470);
l_N_1470 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1471; memset(&l_RND_1471, 0, sizeof l_RND_1471);
S_R10(&l_RND_1471, r_ROUNDING_ARG(p_E, l_N_1470), 0);
rt_int l_S_1472; memset(&l_S_1472, 0, sizeof l_S_1472);
l_S_1472 = ((rt_int)0LL);
if (((l_N_1470 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R23 l_SM_1473; memset(&l_SM_1473, 0, sizeof l_SM_1473);
S_R23(&l_SM_1473, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_1473).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_1472 = (l_SM_1473).f_V;
}
}
if ((l_N_1470 >= ((rt_int)3LL)))
{
{
R21 * l_R_1474; memset(&l_R_1474, 0, sizeof l_R_1474);
l_R_1474 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_1474)) && (!r_TEQS(((*(R21 *)rt_nil_check(l_R_1474))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_1474)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if ((((*(R22 *)rt_nil_check(l_T_1469))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1475; memset(&l_SAVED_1475, 0, sizeof l_SAVED_1475);
l_SAVED_1475 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1476; memset(&l_C_1476, 0, sizeof l_C_1476);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1471, rt_str("1", 1));
S_R10(&l_C_1476, r_RESCALE_C((l_V_1468).f_C, ((*(R22 *)rt_nil_check(l_T_1469))).f_SCALE, l_S_1472), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1475;
{ R26 rv1477 = r_MKET(l_C_1476, r_INT_TYPE(l_S_1472));
return rv1477; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1469))).f_KIND == g_T_FLOAT))
{
{ R26 rv1478 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1468).f_C, r_NUM(l_S_1472), l_RND_1471), r_INT_TYPE(l_S_1472));
return rv1478; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1469))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1469))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1469))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1469))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1469))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1469))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1479 = r_MKET(r_RESCALE_C((l_V_1468).f_C, ((rt_int)0LL), l_S_1472), r_INT_TYPE(l_S_1472));
return rv1479; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1469))).f_KIND == g_T_BITS))
{
{ R26 rv1480 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1468).f_C), ((rt_int)0LL), l_S_1472), r_INT_TYPE(l_S_1472));
return rv1480; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1469))).f_KIND == g_T_STR))
{
{ R26 rv1481 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1468).f_C, r_NUM(l_S_1472), l_RND_1471), r_INT_TYPE(l_S_1472));
return rv1481; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1468).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { 
R22 * l_T_1482; memset(&l_T_1482, 0, sizeof l_T_1482);
l_T_1482 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1483; memset(&l_K_1483, 0, sizeof l_K_1483);
l_K_1483 = ((*(R22 *)rt_nil_check(l_T_1482))).f_KIND;
if ((l_K_1483 == g_T_BITS))
{
{ R26 rv1484 = p_V;
return rv1484; }
}
else if ((l_K_1483 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1482))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1482))).f_REPS))).f_B == NULL)))
{
{ R26 rv1485 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1482)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1482)));
return rv1485; }
}
}
{ R26 rv1486 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1482))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1482)));
return rv1486; }
}
else if ((l_K_1483 == g_T_STR))
{
{ R26 rv1487 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1487; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1483 == g_T_INT))
{
{ R26 rv1488 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1488; }
}
else if ((l_K_1483 == g_T_BOOL))
{
{ R26 rv1489 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1489; }
}
else if ((l_K_1483 == g_T_FLOAT))
{
{ R26 rv1490 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1490; }
}
else if ((l_K_1483 == g_T_STR))
{
{ R26 rv1491 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1491; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1482));
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
{ rt_int rv1492 = 0;
return rv1492; }
}
{ rt_int rv1493 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1493; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { 
rt_int l_N_1494; memset(&l_N_1494, 0, sizeof l_N_1494);
l_N_1494 = ((rt_int)0LL);
R27 * l_P_1495; memset(&l_P_1495, 0, sizeof l_P_1495);
l_P_1495 = p_A;
for (;;) {
if ((l_P_1495 == NULL)) goto L_end1496;
{
l_N_1494 = rt_add(l_N_1494, ((rt_int)1LL));
l_P_1495 = ((*(R27 *)rt_nil_check(l_P_1495))).f_NEXT;
}
} L_end1496: ;
{ rt_int rv1497 = l_N_1494;
return rv1497; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { 
R27 * l_HEAD_1498; memset(&l_HEAD_1498, 0, sizeof l_HEAD_1498);
l_HEAD_1498 = NULL;
R27 * l_TAIL_1499; memset(&l_TAIL_1499, 0, sizeof l_TAIL_1499);
l_TAIL_1499 = NULL;
rt_int l_G_1500; memset(&l_G_1500, 0, sizeof l_G_1500);
l_G_1500 = ((rt_int)0LL);
{ rt_int it1502_lo = ((rt_int)0LL), it1502_hi = ((rt_int)2LL);
for (rt_int it1502 = it1502_lo; it1502 <= it1502_hi; it1502++) {
{
{
R21 * l_P_1503; memset(&l_P_1503, 0, sizeof l_P_1503);
l_P_1503 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1502 == ((rt_int)1LL)))
{
l_P_1503 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1502 == ((rt_int)2LL)))
{
l_P_1503 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1503 == NULL)) goto L_end1504;
{
{
R27 * l_A_1505; memset(&l_A_1505, 0, sizeof l_A_1505);
l_A_1505 = r_NODE_ARG(l_P_1503, it1502, NULL);
if ((l_TAIL_1499 == NULL))
{
l_HEAD_1498 = l_A_1505;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1499))).f_NEXT = l_A_1505;
}
l_TAIL_1499 = l_A_1505;
}
l_P_1503 = ((*(R21 *)rt_nil_check(l_P_1503))).f_NEXT;
}
} L_end1504: ;
}
}
} } L_end1501: ;
{ R27 * rv1506 = l_HEAD_1498;
return rv1506; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { 
R27 * l_ARGS_1507; memset(&l_ARGS_1507, 0, sizeof l_ARGS_1507);
l_ARGS_1507 = r_CALL_ARGS(p_E);
R12 * l_Y_1508; memset(&l_Y_1508, 0, sizeof l_Y_1508);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1509 = r_START_IO_CALL(p_E);
return rv1509; }
}
l_Y_1508 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1508 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1508))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1510 = r_BUILTIN(p_E, p_WANT);
return rv1510; }
}
{ R26 rv1511 = r_CALL_SYM(l_Y_1508, l_ARGS_1507, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1511; }
}
l_Y_1508 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1507, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1508 == NULL))
{
{
R12 * l_P_1512; memset(&l_P_1512, 0, sizeof l_P_1512);
l_P_1512 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1512 == NULL)) goto L_end1513;
{
if ((((*(R12 *)rt_nil_check(l_P_1512))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1514 = r_BUILTIN(p_E, p_WANT);
return rv1514; }
}
l_P_1512 = r_LOOKUP_NEXT(l_P_1512);
}
} L_end1513: ;
}
{
R12 * l_B_1515; memset(&l_B_1515, 0, sizeof l_B_1515);
l_B_1515 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1515 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1515))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1516 = r_BUILTIN(p_E, p_WANT);
return rv1516; }
}
if (((((*(R12 *)rt_nil_check(l_B_1515))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1515))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1517 = r_CALL_SYM(l_Y_1508, l_ARGS_1507, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1517; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { 
R20 * l_B_1518; memset(&l_B_1518, 0, sizeof l_B_1518);
l_B_1518 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1518 == NULL)) goto L_end1519;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1518))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1518))).f_NAME, p_NAME)))
{
{ R12 * rv1520 = ((*(R20 *)rt_nil_check(l_B_1518))).f_R;
return rv1520; }
}
l_B_1518 = ((*(R20 *)rt_nil_check(l_B_1518))).f_NEXT;
}
} L_end1519: ;
{ R12 * rv1521 = NULL;
return rv1521; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1522 = 0;
return rv1522; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1523 = 0;
return rv1523; }
}
}
}
{ rt_int rv1524 = 1;
return rv1524; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { 
R12 * l_Y_1525; memset(&l_Y_1525, 0, sizeof l_Y_1525);
l_Y_1525 = r_LOOKUP(p_NAME);
R12 * l_BEST_1526; memset(&l_BEST_1526, 0, sizeof l_BEST_1526);
l_BEST_1526 = NULL;
rt_int l_BEST_SCORE_1527; memset(&l_BEST_SCORE_1527, 0, sizeof l_BEST_SCORE_1527);
l_BEST_SCORE_1527 = ((rt_int)0LL);
rt_int l_TIES_1528; memset(&l_TIES_1528, 0, sizeof l_TIES_1528);
l_TIES_1528 = ((rt_int)0LL);
rt_int l_COUNT_1529; memset(&l_COUNT_1529, 0, sizeof l_COUNT_1529);
l_COUNT_1529 = ((rt_int)0LL);
rt_int l_N_1530; memset(&l_N_1530, 0, sizeof l_N_1530);
l_N_1530 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1525 == NULL)) goto L_end1531;
{
if ((!r_IS_ROUTINE(l_Y_1525)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1525))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1531;
}
}
else if (r_CANDIDATE(l_Y_1525, p_NAME))
{
{
R12 * l_R_1532; memset(&l_R_1532, 0, sizeof l_R_1532);
l_R_1532 = r_ORIGINAL(l_Y_1525);
rt_int l_SCORE_1533; memset(&l_SCORE_1533, 0, sizeof l_SCORE_1533);
r_ROUTINE_HEADER(l_R_1532);
if (((r_PARAM_COUNT(l_R_1532) == l_N_1530) && (!r_SEEN_ROUTINE(l_R_1532, p_NAME, l_Y_1525))))
{
l_COUNT_1529 = rt_add(l_COUNT_1529, ((rt_int)1LL));
l_SCORE_1533 = r_MATCH_SCORE(l_R_1532, p_ARGS);
if ((l_SCORE_1533 > l_BEST_SCORE_1527))
{
l_BEST_1526 = l_R_1532;
l_BEST_SCORE_1527 = l_SCORE_1533;
l_TIES_1528 = ((rt_int)0LL);
}
else if (((l_SCORE_1533 == l_BEST_SCORE_1527) && (l_SCORE_1533 > ((rt_int)0LL))))
{
l_TIES_1528 = rt_add(l_TIES_1528, ((rt_int)1LL));
}
}
}
}
l_Y_1525 = r_LOOKUP_NEXT(l_Y_1525);
}
} L_end1531: ;
if (((l_TIES_1528 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1534 = l_BEST_1526;
return rv1534; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { 
R12 * l_Y_1535; memset(&l_Y_1535, 0, sizeof l_Y_1535);
l_Y_1535 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1535 == p_STOP) || (l_Y_1535 == NULL))) goto L_end1536;
{
if ((((*(R12 *)rt_nil_check(l_Y_1535))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1535) == p_R))
{
{ rt_int rv1537 = 1;
return rv1537; }
}
}
l_Y_1535 = r_LOOKUP_NEXT(l_Y_1535);
}
} L_end1536: ;
{ rt_int rv1538 = 0;
return rv1538; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { 
rt_int l_N_1539; memset(&l_N_1539, 0, sizeof l_N_1539);
l_N_1539 = ((rt_int)0LL);
R28 * l_P_1540; memset(&l_P_1540, 0, sizeof l_P_1540);
l_P_1540 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1540 == NULL)) goto L_end1541;
{
l_N_1539 = rt_add(l_N_1539, ((rt_int)1LL));
l_P_1540 = ((*(R28 *)rt_nil_check(l_P_1540))).f_NEXT;
}
} L_end1541: ;
{ rt_int rv1542 = l_N_1539;
return rv1542; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { 
R28 * l_P_1543; memset(&l_P_1543, 0, sizeof l_P_1543);
l_P_1543 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1544; memset(&l_A_1544, 0, sizeof l_A_1544);
l_A_1544 = p_ARGS;
rt_int l_EXACT_1545; memset(&l_EXACT_1545, 0, sizeof l_EXACT_1545);
l_EXACT_1545 = 1;
R20 * l_BS_1546; memset(&l_BS_1546, 0, sizeof l_BS_1546);
l_BS_1546 = r_NEW_BINDS();
for (;;) {
if ((l_P_1543 == NULL)) goto L_end1547;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1543))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1544))).f_MODE)))
{
{ rt_int rv1548 = ((rt_int)0LL);
return rv1548; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1543))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1543, l_A_1544, l_BS_1546)))
{
{ rt_int rv1549 = ((rt_int)0LL);
return rv1549; }
}
}
else if ((((*(R28 *)rt_nil_check(l_P_1543))).f_T == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1544))).f_HAVE)
{
{ rt_int rv1550 = ((rt_int)0LL);
return rv1550; }
}
}
else if (r_WANT_SENSITIVE(l_A_1544))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1544))).f_E, ((*(R28 *)rt_nil_check(l_P_1543))).f_T)))
{
{ rt_int rv1551 = ((rt_int)0LL);
return rv1551; }
}
}
else
{
r_TYPE_ARG(l_A_1544);
{
R22 * l_AT_1552; memset(&l_AT_1552, 0, sizeof l_AT_1552);
l_AT_1552 = (((*(R27 *)rt_nil_check(l_A_1544))).f_V).f_T;
if ((!((r_SAME_CLASS(((*(R28 *)rt_nil_check(l_P_1543))).f_T, l_AT_1552) || (((((*(R22 *)rt_nil_check(l_AT_1552))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1543))).f_T)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1553 = ((rt_int)0LL);
return rv1553; }
}
if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1543))).f_T, l_AT_1552)))
{
l_EXACT_1545 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1552)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1543))).f_T)))).f_KIND == g_T_INT)))
{
if ((((*(R22 *)rt_nil_check(l_AT_1552))).f_SCALE > ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1543))).f_T))).f_SCALE))
{
{ rt_int rv1554 = ((rt_int)0LL);
return rv1554; }
}
}
}
}
l_P_1543 = ((*(R28 *)rt_nil_check(l_P_1543))).f_NEXT;
l_A_1544 = ((*(R27 *)rt_nil_check(l_A_1544))).f_NEXT;
}
} L_end1547: ;
if (l_EXACT_1545)
{
{ rt_int rv1555 = ((rt_int)2LL);
return rv1555; }
}
{ rt_int rv1556 = ((rt_int)1LL);
return rv1556; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { 
R22 * l_RT_1557; memset(&l_RT_1557, 0, sizeof l_RT_1557);
l_RT_1557 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1557))).f_KIND == g_T_ENUM))
{
{ rt_int rv1558 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1557) == NULL));
return rv1558; }
}
{ rt_int rv1559 = 0;
return rv1559; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1560 = (((*(R22 *)rt_nil_check(l_RT_1557))).f_KIND == g_T_PTR);
return rv1560; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1561 = (((*(R22 *)rt_nil_check(l_RT_1557))).f_KIND == g_T_REC);
return rv1561; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1562 = (((*(R22 *)rt_nil_check(l_RT_1557))).f_KIND == g_T_ARR);
return rv1562; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1563 = (((*(R22 *)rt_nil_check(l_RT_1557))).f_KIND == g_T_INT);
return rv1563; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1564 = ((((*(R22 *)rt_nil_check(l_RT_1557))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1557))).f_KIND == g_T_SEM));
return rv1564; }
}
{ rt_int rv1565 = 0;
return rv1565; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { 
R12 * l_Y_1566; memset(&l_Y_1566, 0, sizeof l_Y_1566);
l_Y_1566 = r_ORIGINAL(p_Y0);
R28 * l_P_1567; memset(&l_P_1567, 0, sizeof l_P_1567);
R27 * l_A_1568; memset(&l_A_1568, 0, sizeof l_A_1568);
l_A_1568 = p_ARGS;
R10 l_C_1569; memset(&l_C_1569, 0, sizeof l_C_1569);
S_R10(&l_C_1569, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1570; memset(&l_SEP_1570, 0, sizeof l_SEP_1570);
S_R10(&l_SEP_1570, r_MK(rt_str("", 0)), 0);
if (((*(R12 *)rt_nil_check(l_Y_1566))).f_GENERIC)
{
l_Y_1566 = r_INSTANCE(l_Y_1566, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1566, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1566))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1569, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1566))).f_LEVEL), 0);
S_R10(&l_SEP_1570, r_MK(rt_str(", ", 2)), 0);
}
l_P_1567 = ((*(R12 *)rt_nil_check(l_Y_1566))).f_PARAMS;
for (;;) {
if ((l_P_1567 == NULL)) goto L_end1571;
{
if ((l_A_1568 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
if ((((*(R28 *)rt_nil_check(l_P_1567))).f_T == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1567))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1567))).f_T)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1572; memset(&l_V_1572, 0, sizeof l_V_1572);
if ((((*(R27 *)rt_nil_check(l_A_1568))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1568))))
{
S_R26(&l_V_1572, ((*(R27 *)rt_nil_check(l_A_1568))).f_V, 0);
}
else
{
S_R26(&l_V_1572, r_EXPR(((*(R27 *)rt_nil_check(l_A_1568))).f_E, ((*(R28 *)rt_nil_check(l_P_1567))).f_T), 0);
}
S_R10(&l_C_1569, r_FMT3(rt_str("@@@", 3), l_C_1569, l_SEP_1570, r_CONVERT(l_V_1572, ((*(R28 *)rt_nil_check(l_P_1567))).f_T, p_LINE, r_NO_TEXT())), 0);
S_R10(&l_SEP_1570, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1573; memset(&l_V_1573, 0, sizeof l_V_1573);
if (((*(R27 *)rt_nil_check(l_A_1568))).f_HAVE)
{
S_R26(&l_V_1573, ((*(R27 *)rt_nil_check(l_A_1568))).f_V, 0);
}
else
{
S_R26(&l_V_1573, r_EXPR(((*(R27 *)rt_nil_check(l_A_1568))).f_E, ((*(R28 *)rt_nil_check(l_P_1567))).f_T), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1568))).f_E == NULL)) && (!(l_V_1573).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1568))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1568))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1573, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1573).f_C), (l_V_1573).f_T), 0);
(l_V_1573).f_LVAL = 1;
}
}
if ((!(l_V_1573).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(l_P_1567))).f_T, (l_V_1573).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(((*(R28 *)rt_nil_check(l_P_1567))).f_T));
}
if (((((*(R28 *)rt_nil_check(l_P_1567))).f_MODE == g_M_INOUT) && (!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1567))).f_T, (l_V_1573).f_T))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
S_R10(&l_C_1569, r_FMT3(rt_str("@@&@", 4), l_C_1569, l_SEP_1570, (l_V_1573).f_C), 0);
S_R10(&l_SEP_1570, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1568 = ((*(R27 *)rt_nil_check(l_A_1568))).f_NEXT;
l_P_1567 = ((*(R28 *)rt_nil_check(l_P_1567))).f_NEXT;
}
} L_end1571: ;
if ((!(l_A_1568 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
{ R26 rv1574 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1566))).f_ACCESS, l_C_1569), ((*(R12 *)rt_nil_check(l_Y_1566))).f_RESULT);
return rv1574; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { 
if ((p_TS == NULL))
{
{ rt_int rv1575 = 0;
return rv1575; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1576 = 1;
return rv1576; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1577 = 1;
return rv1577; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1578 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1578; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1579 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1579; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1580 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1580; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1581 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1581; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1582 = 0;
return rv1582; }
}
{
R12 * l_Y_1583; memset(&l_Y_1583, 0, sizeof l_Y_1583);
l_Y_1583 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1584; memset(&l_A_1584, 0, sizeof l_A_1584);
l_A_1584 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1585; memset(&l_F_1585, 0, sizeof l_F_1585);
if ((l_Y_1583 == NULL))
{
{ rt_int rv1586 = 0;
return rv1586; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1583))).f_KIND == g_Y_GEN))
{
{ rt_int rv1587 = 1;
return rv1587; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1583))).f_DECL == NULL))
{
{ rt_int rv1588 = 0;
return rv1588; }
}
l_F_1585 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1583))).f_DECL))).f_A;
for (;;) {
if ((l_F_1585 == NULL)) goto L_end1589;
{
{
R21 * l_N_1590; memset(&l_N_1590, 0, sizeof l_N_1590);
l_N_1590 = ((*(R21 *)rt_nil_check(l_F_1585))).f_A;
for (;;) {
if ((l_N_1590 == NULL)) goto L_end1591;
{
if ((l_A_1584 == NULL))
{
{ rt_int rv1592 = 0;
return rv1592; }
}
if (((((*(R21 *)rt_nil_check(l_F_1585))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_1584))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_1584))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1584)))))
{
{ rt_int rv1593 = 1;
return rv1593; }
}
l_A_1584 = ((*(R21 *)rt_nil_check(l_A_1584))).f_NEXT;
l_N_1590 = ((*(R21 *)rt_nil_check(l_N_1590))).f_NEXT;
}
} L_end1591: ;
}
l_F_1585 = ((*(R21 *)rt_nil_check(l_F_1585))).f_NEXT;
}
} L_end1589: ;
}
}
{ rt_int rv1594 = 0;
return rv1594; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { 
R21 * l_P_1595; memset(&l_P_1595, 0, sizeof l_P_1595);
l_P_1595 = p_A;
for (;;) {
if ((l_P_1595 == NULL)) goto L_end1596;
{
if (((((*(R21 *)rt_nil_check(l_P_1595))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_1595))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1597 = 1;
return rv1597; }
}
l_P_1595 = ((*(R21 *)rt_nil_check(l_P_1595))).f_NEXT;
}
} L_end1596: ;
{ rt_int rv1598 = 0;
return rv1598; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { 
R21 * l_R_1599; memset(&l_R_1599, 0, sizeof l_R_1599);
l_R_1599 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_1600; memset(&l_P_1600, 0, sizeof l_P_1600);
R28 * l_TAIL_1601; memset(&l_TAIL_1601, 0, sizeof l_TAIL_1601);
l_TAIL_1601 = NULL;
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1600 = ((*(R21 *)rt_nil_check(l_R_1599))).f_A;
for (;;) {
if ((l_P_1600 == NULL)) goto L_end1602;
{
if (((((*(R21 *)rt_nil_check(l_P_1600))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_1600))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1600 = ((*(R21 *)rt_nil_check(l_P_1600))).f_NEXT;
}
} L_end1602: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_1599))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1600 = ((*(R21 *)rt_nil_check(l_R_1599))).f_A;
for (;;) {
if ((l_P_1600 == NULL)) goto L_end1603;
{
{
R28 * l_PM_1604; memset(&l_PM_1604, 0, sizeof l_PM_1604);
l_PM_1604 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1604)), ({ R28 rc1605; memset(&rc1605, 0, sizeof rc1605);  S_R10(&rc1605.f_NAME, ((*(R21 *)rt_nil_check(l_P_1600))).f_NAME, 0); rc1605.f_MODE = ((*(R21 *)rt_nil_check(l_P_1600))).f_IV; rc1605.f_T = NULL; rc1605.f_TS = ((*(R21 *)rt_nil_check(l_P_1600))).f_B; rc1605.f_NEXT = NULL; rc1605; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_1599))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_1600))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1600))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_1604))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1600))).f_B);
}
if ((l_TAIL_1601 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1604;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1601))).f_NEXT = l_PM_1604;
}
l_TAIL_1601 = l_PM_1604;
}
l_P_1600 = ((*(R21 *)rt_nil_check(l_P_1600))).f_NEXT;
}
} L_end1603: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { 
R21 * l_R_1606; memset(&l_R_1606, 0, sizeof l_R_1606);
l_R_1606 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_1607; memset(&l_T_1607, 0, sizeof l_T_1607);
if ((((*(R21 *)rt_nil_check(l_R_1606))).f_B == NULL))
{
{ R22 * rv1608 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1608; }
}
r_OPEN_SCOPE();
{
R28 * l_P_1609; memset(&l_P_1609, 0, sizeof l_P_1609);
l_P_1609 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1609 == NULL)) goto L_end1610;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1609))).f_T == NULL)))
{
{
R12 * l_V_1611; memset(&l_V_1611, 0, sizeof l_V_1611);
l_V_1611 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_1609))).f_NAME);
((*(R12 *)rt_nil_check(l_V_1611))).f_T = ((*(R28 *)rt_nil_check(l_P_1609))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_1611))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_1609))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_V_1611))).f_INPUT = 1;
r_DEFINE(l_V_1611, ((*(R21 *)rt_nil_check(l_R_1606))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_1609))).f_T, ((*(R12 *)rt_nil_check(l_V_1611))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_1606))).f_LINE, 0);
}
}
l_P_1609 = ((*(R28 *)rt_nil_check(l_P_1609))).f_NEXT;
}
} L_end1610: ;
}
l_T_1607 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_1606))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv1612 = l_T_1607;
return rv1612; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { 
R10 l_PS_1613; memset(&l_PS_1613, 0, sizeof l_PS_1613);
S_R10(&l_PS_1613, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1614; memset(&l_SEP_1614, 0, sizeof l_SEP_1614);
S_R10(&l_SEP_1614, r_MK(rt_str("", 0)), 0);
R28 * l_P_1615; memset(&l_P_1615, 0, sizeof l_P_1615);
l_P_1615 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_1613, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_1614, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_1615 == NULL)) goto L_end1616;
{
if ((((*(R28 *)rt_nil_check(l_P_1615))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_1615))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1615))).f_MODE == g_M_IN))
{
S_R10(&l_PS_1613, r_FMT4(rt_str("@@@ p_@", 7), l_PS_1613, l_SEP_1614, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1615))).f_T), ((*(R28 *)rt_nil_check(l_P_1615))).f_NAME), 0);
S_R10(&l_SEP_1614, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_1613, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_1613, l_SEP_1614, r_CTYPE(((*(R28 *)rt_nil_check(l_P_1615))).f_T), ((*(R28 *)rt_nil_check(l_P_1615))).f_NAME), 0);
S_R10(&l_SEP_1614, r_MK(rt_str(", ", 2)), 0);
}
l_P_1615 = ((*(R28 *)rt_nil_check(l_P_1615))).f_NEXT;
}
} L_end1616: ;
if (((l_PS_1613).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_1613, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv1617 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_1613);
return rv1617; }
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
R25 * l_B_1618; memset(&l_B_1618, 0, sizeof l_B_1618);
l_B_1618 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1619; memset(&l_I_1619, 0, sizeof l_I_1619);
l_I_1619 = ((rt_int)0LL);
for (;;) {
if ((l_B_1618 == NULL)) goto L_end1620;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1618))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1618))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_1619)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1618))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1618))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_1618))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1618))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_1619)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_1618))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_1619), p_PC, r_NUM(l_I_1619)), ((*(R25 *)rt_nil_check(l_B_1618))).f_LO), p_LINE, p_CHECK);
}
}
l_I_1619 = rt_add(l_I_1619, ((rt_int)1LL));
l_B_1618 = ((*(R25 *)rt_nil_check(l_B_1618))).f_NEXT;
}
} L_end1620: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_1621; memset(&l_U_1621, 0, sizeof l_U_1621);
l_U_1621 = r_REAL_TYPE(p_T);
R24 * l_F_1622; memset(&l_F_1622, 0, sizeof l_F_1622);
l_F_1622 = ((*(R22 *)rt_nil_check(l_U_1621))).f_FIELDS;
R25 * l_A_1623; memset(&l_A_1623, 0, sizeof l_A_1623);
l_A_1623 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_1622 == NULL) || (l_A_1623 == NULL))) goto L_end1624;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1622))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_1623))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_1623))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_1622))).f_CNAME), p_LINE, p_CHECK);
}
l_A_1623 = ((*(R25 *)rt_nil_check(l_A_1623))).f_NEXT;
}
l_F_1622 = ((*(R24 *)rt_nil_check(l_F_1622))).f_NEXT;
}
} L_end1624: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1625 = 0;
return rv1625; }
}
{ rt_int rv1626 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1626; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { 
{ R10 rv1627 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv1627; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { 
R12 * l_OLD_1628; memset(&l_OLD_1628, 0, sizeof l_OLD_1628);
l_OLD_1628 = r_LOOKUP(p_NAME);
if ((!(l_OLD_1628 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_1628))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_1628))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_1628))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_1629; memset(&l_G_1629, 0, sizeof l_G_1629);
l_G_1629 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_1629))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_1629))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_1629))).f_INPUT = 1;
r_DEFINE(l_G_1629, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { 
R20 * l_B_1630; memset(&l_B_1630, 0, sizeof l_B_1630);
l_B_1630 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1630)), ({ R20 rc1631; memset(&rc1631, 0, sizeof rc1631);  S_R10(&rc1631.f_NAME, r_NO_TEXT(), 0); rc1631.f_T = NULL; S_R10(&rc1631.f_C, r_NO_TEXT(), 0); rc1631.f_HASMV = 0; rc1631.f_MV = ((rt_int)0LL); rc1631.f_R = NULL; rc1631.f_NEXT = NULL; rc1631; }), 0);
{ R20 * rv1632 = l_B_1630;
return rv1632; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { 
R20 * l_B_1633; memset(&l_B_1633, 0, sizeof l_B_1633);
l_B_1633 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1633)), ({ R20 rc1634; memset(&rc1634, 0, sizeof rc1634);  S_R10(&rc1634.f_NAME, p_NAME, 0); rc1634.f_T = p_T; S_R10(&rc1634.f_C, r_NO_TEXT(), 0); rc1634.f_HASMV = (p_M).f_OK; rc1634.f_MV = (p_M).f_V; rc1634.f_R = p_R; rc1634.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc1634; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_1633))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_1633;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { 
R20 * l_B_1635; memset(&l_B_1635, 0, sizeof l_B_1635);
l_B_1635 = p_BS;
for (;;) {
if ((l_B_1635 == NULL)) goto L_end1636;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_1635))).f_NAME, p_NAME))
{
{ R20 * rv1637 = l_B_1635;
return rv1637; }
}
l_B_1635 = ((*(R20 *)rt_nil_check(l_B_1635))).f_NEXT;
}
} L_end1636: ;
{ R20 * rv1638 = NULL;
return rv1638; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { 
R22 * l_RT_1639; memset(&l_RT_1639, 0, sizeof l_RT_1639);
l_RT_1639 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv1640 = 1;
return rv1640; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv1641 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv1641; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1642 = 1;
return rv1642; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1643 = 1;
return rv1643; }
}
{
R20 * l_B_1644; memset(&l_B_1644, 0, sizeof l_B_1644);
l_B_1644 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_1644 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_1644))).f_T == NULL))
{
{ rt_int rv1645 = 0;
return rv1645; }
}
{ rt_int rv1646 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_1644))).f_T, p_T);
return rv1646; }
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
{ rt_int rv1647 = 1;
return rv1647; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_ARR)))
{
{ rt_int rv1648 = 0;
return rv1648; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_1639))).f_DIMS)))
{
{ rt_int rv1649 = 0;
return rv1649; }
}
{ rt_int rv1650 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_1639))).f_ELEM, p_BS);
return rv1650; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv1651 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1651; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1652 = 0;
return rv1652; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_1639))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_1639))).f_MHI, p_BS))))
{
{ rt_int rv1653 = 0;
return rv1653; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_INT)))
{
{ rt_int rv1654 = 0;
return rv1654; }
}
{ rt_int rv1655 = (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1639))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
return rv1655; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv1656 = ((((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_1639))).f_SCALE == ((rt_int)0LL)));
return rv1656; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1657 = 0;
return rv1657; }
}
{ rt_int rv1658 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_1639))).f_SCALE), p_BS);
return rv1658; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv1659 = (((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_BOOL);
return rv1659; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv1660 = (((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_STR);
return rv1660; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_STR)))
{
{ rt_int rv1661 = 0;
return rv1661; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv1662 = 1;
return rv1662; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_1639))).f_BASE == NULL)))
{
{ rt_int rv1663 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_1639))).f_BASE, p_BS);
return rv1663; }
}
{ rt_int rv1664 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv1664; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv1665 = (((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_BITS);
return rv1665; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv1666 = (((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_SEM);
return rv1666; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_PTR)))
{
{ rt_int rv1667 = 0;
return rv1667; }
}
{ rt_int rv1668 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_1639), p_BS);
return rv1668; }
}
{
R12 * l_Y_1669; memset(&l_Y_1669, 0, sizeof l_Y_1669);
l_Y_1669 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_1669 == NULL))
{
{ rt_int rv1670 = 0;
return rv1670; }
}
if (((((*(R12 *)rt_nil_check(l_Y_1669))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_1669))).f_DECL == NULL)))
{
{ rt_int rv1671 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_1669))).f_T, p_T);
return rv1671; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1669))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv1672 = 0;
return rv1672; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_1669))))
{
{ rt_int rv1673 = 0;
return rv1673; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1669))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_REC)))
{
{ rt_int rv1674 = 0;
return rv1674; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1639))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv1675 = 0;
return rv1675; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1639))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_1669))))
{
{ rt_int rv1676 = 0;
return rv1676; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv1677 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1677; }
}
{ rt_int rv1678 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1669))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1669))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_1639, p_BS);
return rv1678; }
}
{
R21 * l_F_1679; memset(&l_F_1679, 0, sizeof l_F_1679);
l_F_1679 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1669))).f_DECL))).f_A;
R21 * l_A_1680; memset(&l_A_1680, 0, sizeof l_A_1680);
l_A_1680 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_1681; memset(&l_V_1681, 0, sizeof l_V_1681);
l_V_1681 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_1682; memset(&l_CLASS_1682, 0, sizeof l_CLASS_1682);
l_CLASS_1682 = r_RECORD_CLASS_OF(l_RT_1639);
for (;;) {
if ((l_F_1679 == NULL)) goto L_end1683;
{
{
R21 * l_N_1684; memset(&l_N_1684, 0, sizeof l_N_1684);
l_N_1684 = ((*(R21 *)rt_nil_check(l_F_1679))).f_A;
for (;;) {
if ((l_N_1684 == NULL)) goto L_end1685;
{
if ((l_A_1680 == NULL))
{
{ rt_int rv1686 = 0;
return rv1686; }
}
if ((((*(R21 *)rt_nil_check(l_F_1679))).f_B == NULL))
{
if ((!(l_CLASS_1682 == NULL)))
{
{
R20 * l_B_1687; memset(&l_B_1687, 0, sizeof l_B_1687);
l_B_1687 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_1682))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_1684))).f_NAME);
if ((!(l_B_1687 == NULL)))
{
if ((!r_UNIFY(l_A_1680, ((*(R20 *)rt_nil_check(l_B_1687))).f_T, p_BS)))
{
{ rt_int rv1688 = 0;
return rv1688; }
}
}
}
}
}
else
{
if ((!(l_V_1681 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_1680))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_1680))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_1680))).f_KIND == g_N_ANY))))
{
{
R23 l_M_1689; memset(&l_M_1689, 0, sizeof l_M_1689);
S_R23(&l_M_1689, r_MANIFEST(l_A_1680), 0);
if (((l_M_1689).f_OK && (((*(R25 *)rt_nil_check(l_V_1681))).f_MLO).f_OK))
{
if ((!((l_M_1689).f_V == (((*(R25 *)rt_nil_check(l_V_1681))).f_MLO).f_V)))
{
{ rt_int rv1690 = 0;
return rv1690; }
}
}
}
}
l_V_1681 = ((*(R25 *)rt_nil_check(l_V_1681))).f_NEXT;
}
}
l_A_1680 = ((*(R21 *)rt_nil_check(l_A_1680))).f_NEXT;
l_N_1684 = ((*(R21 *)rt_nil_check(l_N_1684))).f_NEXT;
}
} L_end1685: ;
}
l_F_1679 = ((*(R21 *)rt_nil_check(l_F_1679))).f_NEXT;
}
} L_end1683: ;
}
{ rt_int rv1691 = 1;
return rv1691; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { 
R12 * l_R_1692; memset(&l_R_1692, 0, sizeof l_R_1692);
l_R_1692 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv1693 = NULL;
return rv1693; }
}
for (;;) {
if ((l_R_1692 == NULL)) goto L_end1694;
{
if ((((*(R12 *)rt_nil_check(l_R_1692))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv1695 = l_R_1692;
return rv1695; }
}
l_R_1692 = ((*(R12 *)rt_nil_check(l_R_1692))).f_INSTANCES;
}
} L_end1694: ;
{ R12 * rv1696 = NULL;
return rv1696; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { 
if ((p_A == NULL))
{
{ rt_int rv1697 = 1;
return rv1697; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1698 = 1;
return rv1698; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1699 = 1;
return rv1699; }
}
{
R20 * l_B_1700; memset(&l_B_1700, 0, sizeof l_B_1700);
l_B_1700 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_1700 == NULL)))
{
{ rt_int rv1701 = ((((*(R20 *)rt_nil_check(l_B_1700))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_1700))).f_MV == (p_M).f_V));
return rv1701; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv1702 = 0;
return rv1702; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv1703 = 1;
return rv1703; }
}
{
R23 l_V_1704; memset(&l_V_1704, 0, sizeof l_V_1704);
S_R23(&l_V_1704, r_MANIFEST(p_A), 0);
if (((l_V_1704).f_OK && (p_M).f_OK))
{
{ rt_int rv1705 = ((l_V_1704).f_V == (p_M).f_V);
return rv1705; }
}
}
{ rt_int rv1706 = 1;
return rv1706; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1707 = 0;
return rv1707; }
}
{ rt_int rv1708 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv1708; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv1709 = 1;
return rv1709; }
}
r_TYPE_ARG(p_A);
{ rt_int rv1710 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv1710; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { 
R20 * l_BS_1711; memset(&l_BS_1711, 0, sizeof l_BS_1711);
l_BS_1711 = r_NEW_BINDS();
R28 * l_P_1712; memset(&l_P_1712, 0, sizeof l_P_1712);
l_P_1712 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_1713; memset(&l_A_1713, 0, sizeof l_A_1713);
l_A_1713 = p_ARGS;
for (;;) {
if ((l_P_1712 == NULL)) goto L_end1714;
{
if ((((*(R28 *)rt_nil_check(l_P_1712))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1713))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1712))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_1713))).f_E), r_NO_MVAL(), NULL, l_BS_1711);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1712))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_1712))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_1712))).f_TS, ((*(R27 *)rt_nil_check(l_A_1713))).f_E, p_LINE), l_BS_1711);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_1713))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_1713))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_1712))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1713))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_1713))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_1713))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_1713))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_1713))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_1712))).f_TS, (((*(R27 *)rt_nil_check(l_A_1713))).f_V).f_T, l_BS_1711)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_1712))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1712))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_1712))).f_NAME, (((*(R28 *)rt_nil_check(l_P_1712))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_1713))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_1711);
}
}
l_P_1712 = ((*(R28 *)rt_nil_check(l_P_1712))).f_NEXT;
l_A_1713 = ((*(R27 *)rt_nil_check(l_A_1713))).f_NEXT;
}
} L_end1714: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_1711);
{
R12 * l_I_1715; memset(&l_I_1715, 0, sizeof l_I_1715);
l_I_1715 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_1715 == NULL)) goto L_end1716;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_1715))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_1711))).f_NEXT))
{
{ R12 * rv1717 = l_I_1715;
return rv1717; }
}
l_I_1715 = ((*(R12 *)rt_nil_check(l_I_1715))).f_INSTANCES;
}
} L_end1716: ;
}
{ R12 * rv1718 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_1711))).f_NEXT, p_ARGS);
return rv1718; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { 
R20 * l_P_1719; memset(&l_P_1719, 0, sizeof l_P_1719);
l_P_1719 = p_A;
for (;;) {
if ((l_P_1719 == NULL)) goto L_end1720;
{
{
R20 * l_Q_1721; memset(&l_Q_1721, 0, sizeof l_Q_1721);
l_Q_1721 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_1719))).f_NAME);
if ((l_Q_1721 == NULL))
{
{ rt_int rv1722 = 0;
return rv1722; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_1719))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_1721))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_1719))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_1721))).f_T == NULL)))
{
{ rt_int rv1723 = 0;
return rv1723; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1719))).f_T, ((*(R20 *)rt_nil_check(l_Q_1721))).f_T)))
{
{ rt_int rv1724 = 0;
return rv1724; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_1719))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_1721))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_1719))).f_MV == ((*(R20 *)rt_nil_check(l_Q_1721))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_1719))).f_R == ((*(R20 *)rt_nil_check(l_Q_1721))).f_R))))
{
{ rt_int rv1725 = 0;
return rv1725; }
}
}
l_P_1719 = ((*(R20 *)rt_nil_check(l_P_1719))).f_NEXT;
}
} L_end1720: ;
{ rt_int rv1726 = 1;
return rv1726; }
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { 
R12 * l_Y_1727; memset(&l_Y_1727, 0, sizeof l_Y_1727);
l_Y_1727 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_1728; memset(&l_FOUND_1728, 0, sizeof l_FOUND_1728);
l_FOUND_1728 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_1727 == NULL)) goto L_end1729;
{
if ((((*(R12 *)rt_nil_check(l_Y_1727))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_1730; memset(&l_R_1730, 0, sizeof l_R_1730);
l_R_1730 = r_ORIGINAL(l_Y_1727);
r_ROUTINE_HEADER(l_R_1730);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_1730)) && (!((*(R12 *)rt_nil_check(l_R_1730))).f_GENERIC)))
{
if (((!(l_FOUND_1728 == NULL)) && (!(l_FOUND_1728 == l_R_1730))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_1728 = l_R_1730;
}
}
}
l_Y_1727 = r_LOOKUP_NEXT(l_Y_1727);
}
} L_end1729: ;
if ((l_FOUND_1728 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_1728))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv1731 = l_FOUND_1728;
return rv1731; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { 
R21 * l_NEEDL_1732; memset(&l_NEEDL_1732, 0, sizeof l_NEEDL_1732);
l_NEEDL_1732 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_1733; memset(&l_SAVED_1733, 0, sizeof l_SAVED_1733);
l_SAVED_1733 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_1732 == NULL)) goto L_end1734;
{
{
R21 * l_T_1735; memset(&l_T_1735, 0, sizeof l_T_1735);
l_T_1735 = ((*(R21 *)rt_nil_check(l_NEEDL_1732))).f_A;
for (;;) {
if ((l_T_1735 == NULL)) goto L_end1736;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_1735))).f_NAME) == NULL))
{
{
R27 * l_ARGS_1737; memset(&l_ARGS_1737, 0, sizeof l_ARGS_1737);
l_ARGS_1737 = NULL;
R27 * l_TAIL_1738; memset(&l_TAIL_1738, 0, sizeof l_TAIL_1738);
l_TAIL_1738 = NULL;
R21 * l_P_1739; memset(&l_P_1739, 0, sizeof l_P_1739);
l_P_1739 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_1735))).f_B))).f_A;
R12 * l_R_1740; memset(&l_R_1740, 0, sizeof l_R_1740);
for (;;) {
if ((l_P_1739 == NULL)) goto L_end1741;
{
{
R27 * l_A_1742; memset(&l_A_1742, 0, sizeof l_A_1742);
if ((((*(R21 *)rt_nil_check(l_P_1739))).f_B == NULL))
{
l_A_1742 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_1742 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1739))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_1742))).f_MODE = ((*(R21 *)rt_nil_check(l_P_1739))).f_IV;
if ((l_TAIL_1738 == NULL))
{
l_ARGS_1737 = l_A_1742;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1738))).f_NEXT = l_A_1742;
}
l_TAIL_1738 = l_A_1742;
}
l_P_1739 = ((*(R21 *)rt_nil_check(l_P_1739))).f_NEXT;
}
} L_end1741: ;
l_R_1740 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_1735))).f_NAME, l_ARGS_1737, p_LINE, 0);
if ((l_R_1740 == NULL))
{
l_R_1740 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_1735))).f_NAME);
if ((!(l_R_1740 == NULL)))
{
if (((!(((*(R12 *)rt_nil_check(l_R_1740))).f_KIND == g_Y_BUILTIN)) && (!(((*(R12 *)rt_nil_check(l_R_1740))).f_KIND == g_Y_ROUTINE))))
{
l_R_1740 = NULL;
}
}
if ((!(l_R_1740 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_1740))).f_KIND == g_Y_ROUTINE))
{
l_R_1740 = NULL;
}
}
}
if (((l_R_1740 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_1735))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_1735))).f_NAME);
}
if ((!(l_R_1740 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_1735))).f_NAME, NULL, r_NO_MVAL(), l_R_1740, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_1735 = ((*(R21 *)rt_nil_check(l_T_1735))).f_NEXT;
}
} L_end1736: ;
}
l_NEEDL_1732 = ((*(R21 *)rt_nil_check(l_NEEDL_1732))).f_NEXT;
}
} L_end1734: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1733;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1743 = 0;
return rv1743; }
}
{
R12 * l_Y_1744; memset(&l_Y_1744, 0, sizeof l_Y_1744);
l_Y_1744 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1745; memset(&l_A_1745, 0, sizeof l_A_1745);
l_A_1745 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1746; memset(&l_F_1746, 0, sizeof l_F_1746);
if ((l_Y_1744 == NULL))
{
{ rt_int rv1747 = 0;
return rv1747; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_1744))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_1744))).f_DECL == NULL)))
{
{ rt_int rv1748 = 0;
return rv1748; }
}
l_F_1746 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1744))).f_DECL))).f_A;
for (;;) {
if ((l_F_1746 == NULL)) goto L_end1749;
{
{
R21 * l_N_1750; memset(&l_N_1750, 0, sizeof l_N_1750);
l_N_1750 = ((*(R21 *)rt_nil_check(l_F_1746))).f_A;
for (;;) {
if ((l_N_1750 == NULL)) goto L_end1751;
{
if ((l_A_1745 == NULL))
{
{ rt_int rv1752 = 0;
return rv1752; }
}
if (((((*(R21 *)rt_nil_check(l_F_1746))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_1745))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1753 = 1;
return rv1753; }
}
l_A_1745 = ((*(R21 *)rt_nil_check(l_A_1745))).f_NEXT;
l_N_1750 = ((*(R21 *)rt_nil_check(l_N_1750))).f_NEXT;
}
} L_end1751: ;
}
l_F_1746 = ((*(R21 *)rt_nil_check(l_F_1746))).f_NEXT;
}
} L_end1749: ;
}
{ rt_int rv1754 = 0;
return rv1754; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { 
R27 * l_A_1755; memset(&l_A_1755, 0, sizeof l_A_1755);
l_A_1755 = p_ARGS;
R12 * l_I_1756; memset(&l_I_1756, 0, sizeof l_I_1756);
l_I_1756 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_1757; memset(&l_SAVED_1757, 0, sizeof l_SAVED_1757);
l_SAVED_1757 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_1758; memset(&l_P_1758, 0, sizeof l_P_1758);
l_P_1758 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_1759; memset(&l_TAIL_1759, 0, sizeof l_TAIL_1759);
l_TAIL_1759 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_1756)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_1756))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_1756))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_1756))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_1756))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_1756))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_1756;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_1758 == NULL)) goto L_end1760;
{
{
R28 * l_PM_1761; memset(&l_PM_1761, 0, sizeof l_PM_1761);
l_PM_1761 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1761)), (*(R28 *)rt_nil_check(l_P_1758)), 0);
((*(R28 *)rt_nil_check(l_PM_1761))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_1758))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_1761))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_1758))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_1761))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_1758))).f_TS) && ((*(R27 *)rt_nil_check(l_A_1755))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_1761))).f_T = (((*(R27 *)rt_nil_check(l_A_1755))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1761))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1761))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_1761))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_1761))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_1761))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_1758))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_1761))).f_TS = NULL;
if ((l_TAIL_1759 == NULL))
{
((*(R12 *)rt_nil_check(l_I_1756))).f_PARAMS = l_PM_1761;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1759))).f_NEXT = l_PM_1761;
}
l_TAIL_1759 = l_PM_1761;
}
l_P_1758 = ((*(R28 *)rt_nil_check(l_P_1758))).f_NEXT;
l_A_1755 = ((*(R27 *)rt_nil_check(l_A_1755))).f_NEXT;
}
} L_end1760: ;
((*(R12 *)rt_nil_check(l_I_1756))).f_RESULT = r_RESULT_TYPE(l_I_1756);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1757;
S_R10(&((*(R12 *)rt_nil_check(l_I_1756))).f_FWD, r_C_HEADER(l_I_1756), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_1756))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_1756))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_1756;
{ R12 * rv1762 = l_I_1756;
return rv1762; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1763 = 0;
return rv1763; }
}
{ rt_int rv1764 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv1764; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { 
R21 * l_C_1765; memset(&l_C_1765, 0, sizeof l_C_1765);
if ((p_TS == NULL))
{
{ R21 * rv1766 = NULL;
return rv1766; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_1767; memset(&l_F_1767, 0, sizeof l_F_1767);
l_F_1767 = p_FORMALS;
R21 * l_A_1768; memset(&l_A_1768, 0, sizeof l_A_1768);
l_A_1768 = p_ARGS;
for (;;) {
if ((l_F_1767 == NULL)) goto L_end1769;
{
{
R21 * l_N_1770; memset(&l_N_1770, 0, sizeof l_N_1770);
l_N_1770 = ((*(R21 *)rt_nil_check(l_F_1767))).f_A;
for (;;) {
if ((l_N_1770 == NULL)) goto L_end1771;
{
if ((l_A_1768 == NULL))
{
{ R21 * rv1772 = p_TS;
return rv1772; }
}
if (((((*(R21 *)rt_nil_check(l_F_1767))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_1770))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv1773 = l_A_1768;
return rv1773; }
}
l_A_1768 = ((*(R21 *)rt_nil_check(l_A_1768))).f_NEXT;
l_N_1770 = ((*(R21 *)rt_nil_check(l_N_1770))).f_NEXT;
}
} L_end1771: ;
}
l_F_1767 = ((*(R21 *)rt_nil_check(l_F_1767))).f_NEXT;
}
} L_end1769: ;
}
{ R21 * rv1774 = p_TS;
return rv1774; }
}
l_C_1765 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_1765))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_1765))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv1775 = l_C_1765;
return rv1775; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { 
R21 * l_C_1776; memset(&l_C_1776, 0, sizeof l_C_1776);
l_C_1776 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_1776)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_1776))).f_NEXT = NULL;
{ R21 * rv1777 = l_C_1776;
return rv1777; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { 
R21 * l_P_1778; memset(&l_P_1778, 0, sizeof l_P_1778);
l_P_1778 = p_L;
for (;;) {
if ((l_P_1778 == NULL)) goto L_end1779;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1778))).f_NAME, p_NAME))
{
{ rt_int rv1780 = 1;
return rv1780; }
}
l_P_1778 = ((*(R21 *)rt_nil_check(l_P_1778))).f_NEXT;
}
} L_end1779: ;
{ rt_int rv1781 = 0;
return rv1781; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { 
R19 * l_IS_1782; memset(&l_IS_1782, 0, sizeof l_IS_1782);
l_IS_1782 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv1783 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1783; }
}
if ((l_IS_1782 == NULL))
{
{ rt_int rv1784 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1784; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_1782))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_1782))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv1785 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1785; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_1782))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1782))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1786 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv1786; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1782))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1787 = 0;
return rv1787; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { 
R21 * l_ITEMS_1788; memset(&l_ITEMS_1788, 0, sizeof l_ITEMS_1788);
l_ITEMS_1788 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_1789; memset(&l_HEAD_1789, 0, sizeof l_HEAD_1789);
l_HEAD_1789 = NULL;
R21 * l_TAIL_1790; memset(&l_TAIL_1790, 0, sizeof l_TAIL_1790);
l_TAIL_1790 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_1788 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1788))).f_A, &l_HEAD_1789, &l_TAIL_1790);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_1788))).f_B, &l_HEAD_1789, &l_TAIL_1790);
{
R21 * l_R_1791; memset(&l_R_1791, 0, sizeof l_R_1791);
l_R_1791 = ((*(R21 *)rt_nil_check(l_ITEMS_1788))).f_C;
for (;;) {
if ((l_R_1791 == NULL)) goto L_end1792;
{
{
R12 * l_Z_1793; memset(&l_Z_1793, 0, sizeof l_Z_1793);
l_Z_1793 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_1791))).f_NAME);
if ((l_Z_1793 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_1791))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_1791))).f_NAME);
}
for (;;) {
if ((l_Z_1793 == NULL)) goto L_end1794;
{
if ((((*(R12 *)rt_nil_check(l_Z_1793))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_1795; memset(&l_O_1795, 0, sizeof l_O_1795);
l_O_1795 = r_ORIGINAL(l_Z_1793);
R21 * l_U_1796; memset(&l_U_1796, 0, sizeof l_U_1796);
r_COMPUTE_USES(l_O_1795);
l_U_1796 = ((*(R12 *)rt_nil_check(l_O_1795))).f_USES;
for (;;) {
if ((l_U_1796 == NULL)) goto L_end1797;
{
if ((!r_IN_IDENTS(l_HEAD_1789, ((*(R21 *)rt_nil_check(l_U_1796))).f_NAME)))
{
{
R21 * l_N_1798; memset(&l_N_1798, 0, sizeof l_N_1798);
l_N_1798 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_1796))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1798))).f_NAME, ((*(R21 *)rt_nil_check(l_U_1796))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1798))).f_IV = ((*(R21 *)rt_nil_check(l_U_1796))).f_IV;
r_ADD_LIST(l_N_1798, &l_HEAD_1789, &l_TAIL_1790);
}
}
l_U_1796 = ((*(R21 *)rt_nil_check(l_U_1796))).f_NEXT;
}
} L_end1797: ;
}
}
l_Z_1793 = r_LOOKUP_NEXT(l_Z_1793);
}
} L_end1794: ;
}
l_R_1791 = ((*(R21 *)rt_nil_check(l_R_1791))).f_NEXT;
}
} L_end1792: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_1789;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static void r_ROUTINE_USES(R21 * p_RS) { 
R21 * l_R_1799; memset(&l_R_1799, 0, sizeof l_R_1799);
l_R_1799 = p_RS;
for (;;) {
if ((l_R_1799 == NULL)) goto L_end1800;
{
if ((((*(R21 *)rt_nil_check(l_R_1799))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_1799));
}
l_R_1799 = ((*(R21 *)rt_nil_check(l_R_1799))).f_NEXT;
}
} L_end1800: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { 
R21 * l_P_1801; memset(&l_P_1801, 0, sizeof l_P_1801);
l_P_1801 = p_L;
for (;;) {
if ((l_P_1801 == NULL)) goto L_end1802;
{
{
R12 * l_V_1803; memset(&l_V_1803, 0, sizeof l_V_1803);
l_V_1803 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_1801))).f_NAME);
R21 * l_N_1804; memset(&l_N_1804, 0, sizeof l_N_1804);
l_N_1804 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_1801))).f_LINE);
if ((l_V_1803 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1801))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_1801))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_1804))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1801))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1804))).f_IV = ((*(R12 *)rt_nil_check(l_V_1803))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_1803))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_1804, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_1801 = ((*(R21 *)rt_nil_check(l_P_1801))).f_NEXT;
}
} L_end1802: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { 
R19 * l_IS_1805; memset(&l_IS_1805, 0, sizeof l_IS_1805);
l_IS_1805 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_1806; memset(&l_U_1806, 0, sizeof l_U_1806);
l_U_1806 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_1805 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_1805))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_1806 == NULL)) goto L_end1807;
{
if ((!(((*(R21 *)rt_nil_check(l_U_1806))).f_IV == ((*(R19 *)rt_nil_check(l_IS_1805))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_1805))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_1806))).f_NAME, (((*(R21 *)rt_nil_check(l_U_1806))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!(((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1805))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_1806))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1805))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_1806))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1805))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1805))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_1805))).f_IMPORTS))).f_E, p_Y)))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_1806))).f_NAME, (((*(R21 *)rt_nil_check(l_U_1806))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_1806 = ((*(R21 *)rt_nil_check(l_U_1806))).f_NEXT;
}
} L_end1807: ;
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { 
R12 * l_M_1808; memset(&l_M_1808, 0, sizeof l_M_1808);
l_M_1808 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_1808 == NULL)) goto L_end1809;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_1808))).f_NAME))
{
{ rt_int rv1810 = 1;
return rv1810; }
}
l_M_1808 = ((*(R12 *)rt_nil_check(l_M_1808))).f_MODL;
}
} L_end1809: ;
{ rt_int rv1811 = 0;
return rv1811; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { 
if (((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1812 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv1812; }
}
{ R10 rv1813 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv1813; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { 
R17 * l_C_1814; memset(&l_C_1814, 0, sizeof l_C_1814);
l_C_1814 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1814 == NULL)) goto L_end1815;
{
if ((((*(R17 *)rt_nil_check(l_C_1814))).f_KIND == ((rt_int)1LL)))
{
goto L_end1815;
}
if ((((*(R17 *)rt_nil_check(l_C_1814))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_1816; memset(&l_H_1816, 0, sizeof l_H_1816);
l_H_1816 = ((*(R17 *)rt_nil_check(l_C_1814))).f_HANDLERS;
for (;;) {
if ((l_H_1816 == NULL)) goto L_end1817;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_1816))).f_A, p_NAME))
{
{ rt_int rv1818 = 1;
return rv1818; }
}
l_H_1816 = ((*(R21 *)rt_nil_check(l_H_1816))).f_NEXT;
}
} L_end1817: ;
}
}
l_C_1814 = ((*(R17 *)rt_nil_check(l_C_1814))).f_NEXT;
}
} L_end1815: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv1819 = 1;
return rv1819; }
}
}
{ rt_int rv1820 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv1820; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { 
R17 * l_C_1821; memset(&l_C_1821, 0, sizeof l_C_1821);
l_C_1821 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_1821)), ({ R17 rc1822; memset(&rc1822, 0, sizeof rc1822);  rc1822.f_KIND = p_KIND; S_R10(&rc1822.f_NAME, p_NAME, 0); rc1822.f_HANDLERS = NULL; rc1822.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc1822; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_1821;
}
static void r_POP_CTX(void) { 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { 
R17 * l_C_1823; memset(&l_C_1823, 0, sizeof l_C_1823);
l_C_1823 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1823 == NULL)) goto L_end1824;
{
if ((((*(R17 *)rt_nil_check(l_C_1823))).f_KIND == p_KIND))
{
{ R17 * rv1825 = l_C_1823;
return rv1825; }
}
if ((((*(R17 *)rt_nil_check(l_C_1823))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv1826 = NULL;
return rv1826; }
}
if ((((*(R17 *)rt_nil_check(l_C_1823))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_1823))).f_NAME));
}
l_C_1823 = ((*(R17 *)rt_nil_check(l_C_1823))).f_NEXT;
}
} L_end1824: ;
{ R17 * rv1827 = NULL;
return rv1827; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { 
R17 * l_C_1828; memset(&l_C_1828, 0, sizeof l_C_1828);
l_C_1828 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_1829; memset(&l_N_1829, 0, sizeof l_N_1829);
l_N_1829 = ((rt_int)0LL);
for (;;) {
if ((l_C_1828 == NULL)) goto L_end1830;
{
if ((((*(R17 *)rt_nil_check(l_C_1828))).f_KIND == ((rt_int)1LL)))
{
goto L_end1830;
}
if ((((*(R17 *)rt_nil_check(l_C_1828))).f_KIND == ((rt_int)3LL)))
{
l_N_1829 = rt_add(l_N_1829, ((rt_int)1LL));
}
l_C_1828 = ((*(R17 *)rt_nil_check(l_C_1828))).f_NEXT;
}
} L_end1830: ;
{ rt_int rv1831 = l_N_1829;
return rv1831; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { 
R21 * l_N_1832; memset(&l_N_1832, 0, sizeof l_N_1832);
l_N_1832 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_1832 == NULL)) goto L_end1833;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_1832))).f_NAME, p_NAME))
{
{ R10 rv1834 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1834; }
}
l_N_1832 = ((*(R21 *)rt_nil_check(l_N_1832))).f_NEXT;
}
} L_end1833: ;
l_N_1832 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_1832))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1832))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_1832;
{ R10 rv1835 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1835; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { 
R21 * l_D_1836; memset(&l_D_1836, 0, sizeof l_D_1836);
l_D_1836 = p_DECLS;
for (;;) {
if ((l_D_1836 == NULL)) goto L_end1837;
{
if (((((*(R21 *)rt_nil_check(l_D_1836))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_1836))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_1838; memset(&l_Y_1838, 0, sizeof l_Y_1838);
l_Y_1838 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_1836))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_1836))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_1838))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_1838))).f_DECL = l_D_1836;
r_DEFINE(l_Y_1838, ((*(R21 *)rt_nil_check(l_D_1836))).f_LINE);
}
}
l_D_1836 = ((*(R21 *)rt_nil_check(l_D_1836))).f_NEXT;
}
} L_end1837: ;
}
static void r_DECLARE_LABELS(R21 * p_S0) { 
R21 * l_S_1839; memset(&l_S_1839, 0, sizeof l_S_1839);
l_S_1839 = p_S0;
for (;;) {
if ((l_S_1839 == NULL)) goto L_end1840;
{
{
R21 * l_L_1841; memset(&l_L_1841, 0, sizeof l_L_1841);
l_L_1841 = l_S_1839;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_1841))).f_KIND == g_N_LABELED))) goto L_end1842;
{
{
R12 * l_Y_1843; memset(&l_Y_1843, 0, sizeof l_Y_1843);
l_Y_1843 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_1841))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_1843))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(((*(R21 *)rt_nil_check(l_L_1841))).f_NAME, (((*(R21 *)rt_nil_check(l_L_1841))).f_NAME).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_1843))).f_MV = r_GUARDS();
r_DEFINE(l_Y_1843, ((*(R21 *)rt_nil_check(l_L_1841))).f_LINE);
}
l_L_1841 = ((*(R21 *)rt_nil_check(l_L_1841))).f_A;
}
} L_end1842: ;
}
l_S_1839 = ((*(R21 *)rt_nil_check(l_S_1839))).f_NEXT;
}
} L_end1840: ;
}
static void r_BODY(R21 * p_B) { 
R21 * l_D_1844; memset(&l_D_1844, 0, sizeof l_D_1844);
l_D_1844 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_1845; memset(&l_S_1845, 0, sizeof l_S_1845);
l_S_1845 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_1844 == NULL)) goto L_end1846;
{
if (((((*(R21 *)rt_nil_check(l_D_1844))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_1844))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1844);
}
l_D_1844 = ((*(R21 *)rt_nil_check(l_D_1844))).f_NEXT;
}
} L_end1846: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_1845 == NULL)) goto L_end1847;
{
r_STMT(l_S_1845);
l_S_1845 = ((*(R21 *)rt_nil_check(l_S_1845))).f_NEXT;
}
} L_end1847: ;
}
static void r_OPEN_BODY(R21 * p_B) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { 
R10 l_F_1848; memset(&l_F_1848, 0, sizeof l_F_1848);
S_R10(&l_F_1848, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_1849; memset(&l_H_1849, 0, sizeof l_H_1849);
l_H_1849 = p_HANDLERS;
R10 l_WORD_1850; memset(&l_WORD_1850, 0, sizeof l_WORD_1850);
S_R10(&l_WORD_1850, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_1848, l_F_1848));
r_PUSH_CTX(((rt_int)3LL), l_F_1848);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_1848, l_F_1848, l_F_1848));
for (;;) {
if ((l_H_1849 == NULL)) goto L_end1851;
{
{
R21 * l_N_1852; memset(&l_N_1852, 0, sizeof l_N_1852);
l_N_1852 = ((*(R21 *)rt_nil_check(l_H_1849))).f_A;
R10 l_COND_1853; memset(&l_COND_1853, 0, sizeof l_COND_1853);
S_R10(&l_COND_1853, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_1852 == NULL)) goto L_end1854;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_1852))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_1852))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_1852))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_1852))).f_NAME);
}
S_R10(&l_COND_1853, r_FMT3(rt_str("@ || @x == @", 12), l_COND_1853, l_F_1848, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_1852))).f_NAME)), 0);
l_N_1852 = ((*(R21 *)rt_nil_check(l_N_1852))).f_NEXT;
}
} L_end1854: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1850, l_COND_1853));
S_R10(&l_WORD_1850, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_1848, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_1849))).f_B);
r_POP_CTX();
}
l_H_1849 = ((*(R21 *)rt_nil_check(l_H_1849))).f_NEXT;
}
} L_end1851: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_1848));
}
static void r_STMT(R21 * p_S) { 
rt_int l_K_1855; memset(&l_K_1855, 0, sizeof l_K_1855);
l_K_1855 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_1855 == g_N_NULL))
{
return;
}
else if ((l_K_1855 == g_N_LABELED))
{
{
R12 * l_Y_1856; memset(&l_Y_1856, 0, sizeof l_Y_1856);
l_Y_1856 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_1856))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_1855 == g_N_GOTO))
{
{
R12 * l_Y_1857; memset(&l_Y_1857, 0, sizeof l_Y_1857);
l_Y_1857 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_1858; memset(&l_N_1858, 0, sizeof l_N_1858);
R17 * l_C_1859; memset(&l_C_1859, 0, sizeof l_C_1859);
l_C_1859 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_1857 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1857))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1857))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_1858 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_1857))).f_MV);
for (;;) {
if ((l_N_1858 <= ((rt_int)0LL))) goto L_end1860;
{
if ((((*(R17 *)rt_nil_check(l_C_1859))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_1859))).f_NAME));
l_N_1858 = rt_sub(l_N_1858, ((rt_int)1LL));
}
l_C_1859 = ((*(R17 *)rt_nil_check(l_C_1859))).f_NEXT;
}
} L_end1860: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_1857))).f_ACCESS));
}
}
else if ((l_K_1855 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_1855 == g_N_CALL))
{
{
R26 l_V_1861; memset(&l_V_1861, 0, sizeof l_V_1861);
S_R26(&l_V_1861, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_1861).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_1861).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_1861).f_C, rt_str(";", 1)));
}
}
else if ((l_K_1855 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1855 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_1855 == g_N_LOOP))
{
{
R10 l_END_L_1862; memset(&l_END_L_1862, 0, sizeof l_END_L_1862);
S_R10(&l_END_L_1862, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_1862));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1862);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_1862));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_1862));
}
}
else if ((l_K_1855 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_1855 == g_N_EXIT))
{
{
R17 * l_C_1863; memset(&l_C_1863, 0, sizeof l_C_1863);
l_C_1863 = r_LEAVE(((rt_int)2LL));
if ((l_C_1863 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_1863))).f_NAME));
}
}
else if ((l_K_1855 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_1855 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_1855 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_1855 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_1855 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1855 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_1855 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_1855 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { 
R12 * l_Y_1864; memset(&l_Y_1864, 0, sizeof l_Y_1864);
l_Y_1864 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_1864 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1864))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1864))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv1865 = r_CALL_EXPR(p_S, NULL);
return rv1865; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { 
R21 * l_ARM_1866; memset(&l_ARM_1866, 0, sizeof l_ARM_1866);
l_ARM_1866 = p_ARMS;
R10 l_WORD_1867; memset(&l_WORD_1867, 0, sizeof l_WORD_1867);
S_R10(&l_WORD_1867, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_1868; memset(&l_OPEN_1868, 0, sizeof l_OPEN_1868);
l_OPEN_1868 = ((rt_int)0LL);
for (;;) {
if ((l_ARM_1866 == NULL)) goto L_end1869;
{
{
R23 l_M_1870; memset(&l_M_1870, 0, sizeof l_M_1870);
S_R23(&l_M_1870, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_1866))).f_A), 0);
if (((l_M_1870).f_OK && (!r_TEQS(l_WORD_1867, rt_str("if", 2)))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_1868 = rt_add(l_OPEN_1868, ((rt_int)1LL));
S_R10(&l_WORD_1867, r_MK(rt_str("if", 2)), 0);
}
if ((l_M_1870).f_OK)
{
if (((l_M_1870).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_1866))).f_B);
{ rt_int it1872_lo = ((rt_int)1LL), it1872_hi = l_OPEN_1868;
for (rt_int it1872 = it1872_lo; it1872 <= it1872_hi; it1872++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1871: ;
return;
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1867, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_1866))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_1866))).f_B);
S_R10(&l_WORD_1867, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_1866 = ((*(R21 *)rt_nil_check(l_ARM_1866))).f_NEXT;
}
} L_end1869: ;
if ((!(p_ELSE_BODY == NULL)))
{
if ((!r_TEQS(l_WORD_1867, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
{ rt_int it1874_lo = ((rt_int)1LL), it1874_hi = l_OPEN_1868;
for (rt_int it1874 = it1874_lo; it1874 <= it1874_hi; it1874++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1873: ;
}
static void r_FOR_STMT(R21 * p_S) { 
R10 l_END_L_1875; memset(&l_END_L_1875, 0, sizeof l_END_L_1875);
S_R10(&l_END_L_1875, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_1876; memset(&l_IT_1876, 0, sizeof l_IT_1876);
S_R10(&l_IT_1876, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_1877; memset(&l_R_1877, 0, sizeof l_R_1877);
l_R_1877 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_1878; memset(&l_LO_1878, 0, sizeof l_LO_1878);
S_R26(&l_LO_1878, r_EXPR(((*(R21 *)rt_nil_check(l_R_1877))).f_A, NULL), 0);
R26 l_HI_1879; memset(&l_HI_1879, 0, sizeof l_HI_1879);
S_R26(&l_HI_1879, r_EXPR(((*(R21 *)rt_nil_check(l_R_1877))).f_B, (l_LO_1878).f_T), 0);
R22 * l_T_1880; memset(&l_T_1880, 0, sizeof l_T_1880);
l_T_1880 = r_REAL_TYPE((l_LO_1878).f_T);
R10 l_LOC_1881; memset(&l_LOC_1881, 0, sizeof l_LOC_1881);
R10 l_HIC_1882; memset(&l_HIC_1882, 0, sizeof l_HIC_1882);
if ((((*(R22 *)rt_nil_check(l_T_1880))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1880))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_1880))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1880))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_1881, (l_LO_1878).f_C, 0);
S_R10(&l_HIC_1882, (l_HI_1879).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_1877))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1877))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_1881, r_FMT1(rt_str("(@) + 1", 7), l_LOC_1881), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1877))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_1882, r_FMT1(rt_str("(@) - 1", 7), l_HIC_1882), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_1876, l_LOC_1881, l_IT_1876, l_HIC_1882));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_1876, l_IT_1876, l_IT_1876, l_IT_1876));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1883; memset(&l_Y_1883, 0, sizeof l_Y_1883);
l_Y_1883 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_1883))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_1880))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_1883))).f_T = ((*(R22 *)rt_nil_check(l_T_1880))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_1883))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1883, rt_str("", 0)), l_IT_1876));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1883, rt_str("", 0)), l_IT_1876));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_1883))).f_ACCESS, l_IT_1876, 0);
}
r_DEFINE(l_Y_1883, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1875);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_1875));
}
static void r_RETURN_STMT(R21 * p_S) { 
R18 * l_CS_1884; memset(&l_CS_1884, 0, sizeof l_CS_1884);
l_CS_1884 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_1885; memset(&l_C_1885, 0, sizeof l_C_1885);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_1885 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_1884))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_1884))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_1884))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_1884))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODES(rt_str("return;", 7));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_1884))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_1884))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_1884))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_1886; memset(&l_V_1886, 0, sizeof l_V_1886);
S_R10(&l_V_1886, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_1884))).f_RESULT), l_V_1886, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_1884))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_1884))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_1885 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_1886));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_1887; memset(&l_C_1887, 0, sizeof l_C_1887);
l_C_1887 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1887 == NULL)) goto L_end1888;
{
if ((((*(R17 *)rt_nil_check(l_C_1887))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_1887))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_1887))).f_KIND == ((rt_int)1LL)))
{
goto L_end1888;
}
l_C_1887 = ((*(R17 *)rt_nil_check(l_C_1887))).f_NEXT;
}
} L_end1888: ;
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
R21 * l_TG_1889; memset(&l_TG_1889, 0, sizeof l_TG_1889);
l_TG_1889 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_1889))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_1890; memset(&l_B_1890, 0, sizeof l_B_1890);
S_R26(&l_B_1890, r_EXPR(((*(R21 *)rt_nil_check(l_TG_1889))).f_A, NULL), 0);
if ((!(l_B_1890).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_1890).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1891; memset(&l_ARGS_1891, 0, sizeof l_ARGS_1891);
l_ARGS_1891 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_1889))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_1889))).f_C, g_M_IN, r_VAL_ARG(l_B_1890, NULL))));
R12 * l_Y_1892; memset(&l_Y_1892, 0, sizeof l_Y_1892);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1891))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1892 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1891, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_1892 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1891))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1892 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1891, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_1892 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_1892, l_ARGS_1891, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_1890).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_1890).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_1893; memset(&l_V_1893, 0, sizeof l_V_1893);
S_R26(&l_V_1893, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_1890).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_1893).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_1890).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_1890).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_1889))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_1889))).f_C), (l_V_1893).f_C));
}
}
return;
}
{
R26 l_LV_1894; memset(&l_LV_1894, 0, sizeof l_LV_1894);
S_R26(&l_LV_1894, r_EXPR(l_TG_1889, NULL), 0);
if ((!(l_LV_1894).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_1894).f_T, (l_LV_1894).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_1894).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_1894).f_SELF));
}
}
static void r_WITH_STMT(R21 * p_S) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_1895; memset(&l_Y_1895, 0, sizeof l_Y_1895);
l_Y_1895 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_1896; memset(&l_V_1896, 0, sizeof l_V_1896);
S_R26(&l_V_1896, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_1895))).f_T = (l_V_1896).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_1897; memset(&l_CN_1897, 0, sizeof l_CN_1897);
S_R10(&l_CN_1897, r_NEW_OBJECT(l_Y_1895, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_1896).f_T))
{
r_CODE(r_INIT_CODE((l_V_1896).f_T, l_CN_1897));
}
r_CODE(r_ASSIGN_CODE((l_V_1896).f_T, l_CN_1897, (l_V_1896).f_C));
}
}
else
{
if ((!(l_V_1896).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_1898; memset(&l_P_1898, 0, sizeof l_P_1898);
S_R10(&l_P_1898, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_1896).f_T), l_P_1898, (l_V_1896).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_1895))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_1898), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_1895))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_1895))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_1895))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_1895, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { 
R21 * l_ARM_1899; memset(&l_ARM_1899, 0, sizeof l_ARM_1899);
l_ARM_1899 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_1900; memset(&l_CH_1900, 0, sizeof l_CH_1900);
S_R26(&l_CH_1900, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_1901; memset(&l_T_1901, 0, sizeof l_T_1901);
l_T_1901 = r_REAL_TYPE((l_CH_1900).f_T);
R12 * l_BOUND_1902; memset(&l_BOUND_1902, 0, sizeof l_BOUND_1902);
l_BOUND_1902 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_1901))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_1901))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_1903; memset(&l_TMP_1903, 0, sizeof l_TMP_1903);
S_R10(&l_TMP_1903, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_1904; memset(&l_WORD_1904, 0, sizeof l_WORD_1904);
S_R10(&l_WORD_1904, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_1903, (l_CH_1900).f_C));
for (;;) {
if ((l_ARM_1899 == NULL)) goto L_end1905;
{
{
R21 * l_L_1906; memset(&l_L_1906, 0, sizeof l_L_1906);
l_L_1906 = ((*(R21 *)rt_nil_check(l_ARM_1899))).f_A;
R10 l_COND_1907; memset(&l_COND_1907, 0, sizeof l_COND_1907);
S_R10(&l_COND_1907, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1906 == NULL)) goto L_end1908;
{
S_R10(&l_COND_1907, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_1907, l_TMP_1903, (r_EXPR(l_L_1906, l_T_1901)).f_C), 0);
l_L_1906 = ((*(R21 *)rt_nil_check(l_L_1906))).f_NEXT;
}
} L_end1908: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1904, l_COND_1907));
S_R10(&l_WORD_1904, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_1899))).f_B, ((*(R21 *)rt_nil_check(l_ARM_1899))).f_C);
}
l_ARM_1899 = ((*(R21 *)rt_nil_check(l_ARM_1899))).f_NEXT;
}
} L_end1905: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_1904, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_1901))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_1901))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_1901))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_1901))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_1901));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_1900).f_C));
for (;;) {
if ((l_ARM_1899 == NULL)) goto L_end1909;
{
{
R21 * l_L_1910; memset(&l_L_1910, 0, sizeof l_L_1910);
l_L_1910 = ((*(R21 *)rt_nil_check(l_ARM_1899))).f_A;
R23 l_FIRST_1911; memset(&l_FIRST_1911, 0, sizeof l_FIRST_1911);
S_R23(&l_FIRST_1911, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_1910 == NULL)) goto L_end1912;
{
if ((((*(R21 *)rt_nil_check(l_L_1910))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_1913; memset(&l_LO_1913, 0, sizeof l_LO_1913);
S_R23(&l_LO_1913, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_1910))).f_A, l_T_1901), 0);
R23 l_HI_1914; memset(&l_HI_1914, 0, sizeof l_HI_1914);
S_R23(&l_HI_1914, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_1910))).f_B, l_T_1901), 0);
rt_int l_A_1915; memset(&l_A_1915, 0, sizeof l_A_1915);
l_A_1915 = (l_LO_1913).f_V;
rt_int l_B_1916; memset(&l_B_1916, 0, sizeof l_B_1916);
l_B_1916 = (l_HI_1914).f_V;
if ((!(((l_LO_1913).f_OK && (l_HI_1914).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_1910))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_1910))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_1910))).f_IV == ((rt_int)3LL))))
{
l_A_1915 = rt_add(l_A_1915, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_1910))).f_IV >= ((rt_int)2LL)))
{
l_B_1916 = rt_sub(l_B_1916, ((rt_int)1LL));
}
if ((!(l_FIRST_1911).f_OK))
{
S_R23(&l_FIRST_1911, r_SOME(l_A_1915), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_1915), r_NUM(l_B_1916)));
}
}
else
{
{
R23 l_M_1917; memset(&l_M_1917, 0, sizeof l_M_1917);
S_R23(&l_M_1917, r_ENUM_MANIFEST(l_L_1910, l_T_1901), 0);
if ((!(l_M_1917).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_1910))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_1911).f_OK))
{
S_R23(&l_FIRST_1911, l_M_1917, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_1917).f_V)));
}
}
l_L_1910 = ((*(R21 *)rt_nil_check(l_L_1910))).f_NEXT;
}
} L_end1912: ;
if ((!(l_BOUND_1902 == NULL)))
{
{
R22 * l_SAVED_1918; memset(&l_SAVED_1918, 0, sizeof l_SAVED_1918);
l_SAVED_1918 = ((*(R12 *)rt_nil_check(l_BOUND_1902))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_1902))).f_T = r_NARROW(l_SAVED_1918, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_1911).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_1899))).f_B, ((*(R21 *)rt_nil_check(l_ARM_1899))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_1902))).f_T = l_SAVED_1918;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_1899))).f_B, ((*(R21 *)rt_nil_check(l_ARM_1899))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_1899 = ((*(R21 *)rt_nil_check(l_ARM_1899))).f_NEXT;
}
} L_end1909: ;
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
{ R12 * rv1919 = NULL;
return rv1919; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv1920 = NULL;
return rv1920; }
}
{
R12 * l_Y_1921; memset(&l_Y_1921, 0, sizeof l_Y_1921);
l_Y_1921 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_1921 == NULL))
{
{ R12 * rv1922 = NULL;
return rv1922; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1921))).f_KIND == g_Y_VAR)))
{
{ R12 * rv1923 = NULL;
return rv1923; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_1921))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv1924 = NULL;
return rv1924; }
}
{
R24 * l_F_1925; memset(&l_F_1925, 0, sizeof l_F_1925);
l_F_1925 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_1921))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_1925 == NULL))
{
{ R12 * rv1926 = NULL;
return rv1926; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_1925))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv1927 = NULL;
return rv1927; }
}
}
{ R12 * rv1928 = l_Y_1921;
return rv1928; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { 
R22 * l_N_1929; memset(&l_N_1929, 0, sizeof l_N_1929);
l_N_1929 = r_COPY_TYP(p_T);
R24 * l_F_1930; memset(&l_F_1930, 0, sizeof l_F_1930);
l_F_1930 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1931; memset(&l_A_1931, 0, sizeof l_A_1931);
l_A_1931 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_1932; memset(&l_HEAD_1932, 0, sizeof l_HEAD_1932);
l_HEAD_1932 = NULL;
R25 * l_TAIL_1933; memset(&l_TAIL_1933, 0, sizeof l_TAIL_1933);
l_TAIL_1933 = NULL;
for (;;) {
if ((l_F_1930 == NULL)) goto L_end1934;
{
if (((!(((*(R24 *)rt_nil_check(l_F_1930))).f_KIND == ((rt_int)0LL))) && (!(l_A_1931 == NULL))))
{
{
R25 * l_B_1935; memset(&l_B_1935, 0, sizeof l_B_1935);
l_B_1935 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_1935)), (*(R25 *)rt_nil_check(l_A_1931)), 0);
((*(R25 *)rt_nil_check(l_B_1935))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1930))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_1935))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_1935))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_1935))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_1933 == NULL))
{
l_HEAD_1932 = l_B_1935;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1933))).f_NEXT = l_B_1935;
}
l_TAIL_1933 = l_B_1935;
}
l_A_1931 = ((*(R25 *)rt_nil_check(l_A_1931))).f_NEXT;
}
l_F_1930 = ((*(R24 *)rt_nil_check(l_F_1930))).f_NEXT;
}
} L_end1934: ;
((*(R22 *)rt_nil_check(l_N_1929))).f_ARGS = l_HEAD_1932;
{ R22 * rv1936 = l_N_1929;
return rv1936; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { 
R21 * l_ARM_1937; memset(&l_ARM_1937, 0, sizeof l_ARM_1937);
l_ARM_1937 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_1938; memset(&l_SAVED_1938, 0, sizeof l_SAVED_1938);
l_SAVED_1938 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_1937 == NULL)) goto L_end1939;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_1937))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_1937))).f_B, ((*(R21 *)rt_nil_check(l_ARM_1937))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1938;
return;
}
l_ARM_1937 = ((*(R21 *)rt_nil_check(l_ARM_1937))).f_NEXT;
}
} L_end1939: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1938;
}
}
static R22 * r_PATHS_TYPE(void) { 
R22 * l_T_1940; memset(&l_T_1940, 0, sizeof l_T_1940);
l_T_1940 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_1940))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv1941 = l_T_1940;
return rv1941; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { 
R10 l_TD_1942; memset(&l_TD_1942, 0, sizeof l_TD_1942);
S_R10(&l_TD_1942, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_1943; memset(&l_P_1943, 0, sizeof l_P_1943);
l_P_1943 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_1943 == NULL)) goto L_end1944;
{
{
R12 * l_Y_1945; memset(&l_Y_1945, 0, sizeof l_Y_1945);
l_Y_1945 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_1943))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_1945))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_1945))).f_DECL = l_P_1943;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_1945, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_1945))).f_INPUT = 1;
r_DEFINE(l_Y_1945, ((*(R21 *)rt_nil_check(l_P_1943))).f_LINE);
}
l_P_1943 = ((*(R21 *)rt_nil_check(l_P_1943))).f_NEXT;
}
} L_end1944: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_1942));
r_CODES(rt_str("rt_b_par_begin();", 17));
l_P_1943 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_1943 == NULL)) goto L_end1946;
{
r_ACTIVATE_PATH(l_P_1943, l_TD_1942);
l_P_1943 = ((*(R21 *)rt_nil_check(l_P_1943))).f_NEXT;
}
} L_end1946: ;
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_1942));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { 
R10 l_FN_1947; memset(&l_FN_1947, 0, sizeof l_FN_1947);
S_R10(&l_FN_1947, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_1948; memset(&l_FT_1948, 0, sizeof l_FT_1948);
S_R10(&l_FT_1948, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_1949; memset(&l_Y_1949, 0, sizeof l_Y_1949);
l_Y_1949 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_1950; memset(&l_H_1950, 0, sizeof l_H_1950);
S_R10(&l_H_1950, r_OBJ_ACCESS(l_Y_1949), 0);
R10 l_IT_1951; memset(&l_IT_1951, 0, sizeof l_IT_1951);
S_R10(&l_IT_1951, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_1952; memset(&l_PRIO_1952, 0, sizeof l_PRIO_1952);
S_R10(&l_PRIO_1952, r_MK(rt_str("0", 1)), 0);
R10 l_START_1953; memset(&l_START_1953, 0, sizeof l_START_1953);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_1948, l_FT_1948));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_1952, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_1954; memset(&l_R_1954, 0, sizeof l_R_1954);
l_R_1954 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R10 l_LO_1955; memset(&l_LO_1955, 0, sizeof l_LO_1955);
S_R10(&l_LO_1955, r_INT_EXPR(((*(R21 *)rt_nil_check(l_R_1954))).f_A), 0);
R10 l_HI_1956; memset(&l_HI_1956, 0, sizeof l_HI_1956);
S_R10(&l_HI_1956, r_INT_EXPR(((*(R21 *)rt_nil_check(l_R_1954))).f_B), 0);
if (((((*(R21 *)rt_nil_check(l_R_1954))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1954))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_1955, r_FMT1(rt_str("(@) + 1", 7), l_LO_1955), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1954))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_1956, r_FMT1(rt_str("(@) - 1", 7), l_HI_1956), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_1950, l_LO_1955, l_HI_1956));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_1951, l_H_1950, l_IT_1951, l_H_1950), l_IT_1951));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_1951));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_1948, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME, l_IT_1951));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_1957; memset(&l_V_1957, 0, sizeof l_V_1957);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_1958; memset(&l_I_1958, 0, sizeof l_I_1958);
l_I_1958 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_1958))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_I_1958))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_1958))).f_ACCESS, l_IT_1951, 0);
((*(R12 *)rt_nil_check(l_I_1958))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_1958, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_1957, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1957).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_1957).f_C));
}
}
S_R10(&l_START_1953, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_1950, l_IT_1951, l_FN_1947, p_TD), 0);
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_1953, p_TD, l_PRIO_1952));
r_PATH_BODY(p_P, l_FN_1947, l_FT_1948);
}
static R10 r_UP_FRAME(void) { 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv1959 = r_MK(rt_str("NULL", 4));
return rv1959; }
}
{ R10 rv1960 = r_MK(rt_str("F", 1));
return rv1960; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT) { 
R14 l_SAVED_CODE_1961; memset(&l_SAVED_CODE_1961, 0, sizeof l_SAVED_CODE_1961);
S_R14(&l_SAVED_CODE_1961, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_1962; memset(&l_SAVED_CTXS_1962, 0, sizeof l_SAVED_CTXS_1962);
l_SAVED_CTXS_1962 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_1963; memset(&l_OUTER_1963, 0, sizeof l_OUTER_1963);
l_OUTER_1963 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_1964; memset(&l_H_1964, 0, sizeof l_H_1964);
l_H_1964 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_1965; memset(&l_CS_1965, 0, sizeof l_CS_1965);
l_CS_1965 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_1966; memset(&l_UPT_1966, 0, sizeof l_UPT_1966);
S_R10(&l_UPT_1966, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_1963))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_1966, ((*(R18 *)rt_nil_check(l_OUTER_1963))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_1965)), ({ R18 rc1967; memset(&rc1967, 0, sizeof rc1967);  rc1967.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_1963))).f_LEVEL, ((rt_int)1LL)); rc1967.f_R = NULL; rc1967.f_FRAMED = 1; S_R10(&rc1967.f_FTYPE, p_FT, 0); S_R14(&rc1967.f_FIELDS, ({ R14 rc1968; memset(&rc1968, 0, sizeof rc1968);  rc1968.f_HEAD = NULL; rc1968.f_TAIL = NULL; rc1968; }), 0); rc1967.f_UP = l_OUTER_1963; rc1967.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_1964))).f_B; rc1967.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_1964))).f_A; rc1967.f_RESULT = NULL; rc1967.f_IS_PATH = 1; rc1967; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_1966), &((*(R18 *)rt_nil_check(l_CS_1965))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_1965;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1969; memset(&rc1969, 0, sizeof rc1969);  rc1969.f_HEAD = NULL; rc1969.f_TAIL = NULL; rc1969; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_1964))).f_B, ((*(R21 *)rt_nil_check(l_H_1964))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_1970; memset(&l_I_1970, 0, sizeof l_I_1970);
l_I_1970 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_1970))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_I_1970))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_1970))).f_FIELD, r_FMT1(rt_str("l_@", 3), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_1970))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_1965))).f_FIELDS);
r_DEFINE(l_I_1970, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_1971; memset(&l_L_1971, 0, sizeof l_L_1971);
l_L_1971 = ((*(R21 *)rt_nil_check(l_H_1964))).f_A;
R10 l_C_1972; memset(&l_C_1972, 0, sizeof l_C_1972);
S_R10(&l_C_1972, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1971 == NULL)) goto L_end1973;
{
S_R10(&l_C_1972, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_1972, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_1971))).f_NAME)), 0);
l_L_1971 = ((*(R21 *)rt_nil_check(l_L_1971))).f_NEXT;
}
} L_end1973: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_1972));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_1965))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_1963;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1961, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_1962;
}
static R10 r_JOIN_BUF(R14 p_B) { 
R15 * l_C_1974; memset(&l_C_1974, 0, sizeof l_C_1974);
l_C_1974 = (p_B).f_HEAD;
R10 l_R_1975; memset(&l_R_1975, 0, sizeof l_R_1975);
S_R10(&l_R_1975, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_1974 == NULL)) goto L_end1976;
{
S_R10(&l_R_1975, r_CAT(l_R_1975, ((*(R15 *)rt_nil_check(l_C_1974))).f_T), 0);
l_C_1974 = ((*(R15 *)rt_nil_check(l_C_1974))).f_NEXT;
}
} L_end1976: ;
{ R10 rv1977 = l_R_1975;
return rv1977; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { 
R10 l_NAME_1978; memset(&l_NAME_1978, 0, sizeof l_NAME_1978);
S_R10(&l_NAME_1978, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_1979; memset(&l_SUB_1979, 0, sizeof l_SUB_1979);
S_R10(&l_SUB_1979, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_1979, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_1980; memset(&l_Y_1980, 0, sizeof l_Y_1980);
l_Y_1980 = r_LOOKUP(l_NAME_1978);
if ((l_Y_1980 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_1978);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1980))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_1978);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1980))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv1981 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_1980), l_SUB_1979);
return rv1981; }
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
R10 l_NAME_1982; memset(&l_NAME_1982, 0, sizeof l_NAME_1982);
S_R10(&l_NAME_1982, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1983; memset(&l_LINE_1983, 0, sizeof l_LINE_1983);
l_LINE_1983 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_1982, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1984; memset(&l_V_1984, 0, sizeof l_V_1984);
S_R26(&l_V_1984, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1984).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_1983, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv1985 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_1984).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_1984).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1985; }
}
}
else if (r_TEQS(l_NAME_1982, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv1986 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1986; }
}
{ R26 rv1987 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1987; }
}
else if (r_TEQS(l_NAME_1982, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv1988 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1988; }
}
{ R26 rv1989 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv1989; }
}
else if ((r_TEQS(l_NAME_1982, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_1982, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_1983, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_1982);
}
{
R26 l_V_1990; memset(&l_V_1990, 0, sizeof l_V_1990);
S_R26(&l_V_1990, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1990).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_1983, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_1990).f_LVAL))
{
r_FAIL(l_LINE_1983, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_1982, rt_str("REQUEST", 7)))
{
{ R26 rv1991 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_1990).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1991; }
}
{ R26 rv1992 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_1990).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1992; }
}
}
else if (r_TEQS(l_NAME_1982, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_1983);
{ R26 rv1993 = r_START_IO_CALL(p_E);
return rv1993; }
}
r_FAILT(l_LINE_1983, rt_str("unknown routine ", 16), l_NAME_1982);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { 
R27 * l_ARGS_1994; memset(&l_ARGS_1994, 0, sizeof l_ARGS_1994);
l_ARGS_1994 = r_CALL_ARGS(p_E);
R12 * l_Y_1995; memset(&l_Y_1995, 0, sizeof l_Y_1995);
l_Y_1995 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1994, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_1996; memset(&l_R_1996, 0, sizeof l_R_1996);
if ((l_Y_1995 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_1996, r_CALL_SYM(l_Y_1995, l_ARGS_1994, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv1997 = l_R_1996;
return rv1997; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { 
R19 * l_I_1998; memset(&l_I_1998, 0, sizeof l_I_1998);
l_I_1998 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_1998)), ({ R19 rc1999; memset(&rc1999, 0, sizeof rc1999);  rc1999.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc1999.f_IMPORTS = p_IMPORTS; rc1999.f_SIGNALS = p_SIGNALS; S_R10(&rc1999.f_NAME, p_NAME, 0); rc1999.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc1999; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_1998;
}
static void r_LEAVE_ISCOPE(void) { 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { 
R10 l_BASE_2000; memset(&l_BASE_2000, 0, sizeof l_BASE_2000);
S_R10(&l_BASE_2000, r_FMT1(rt_str("r_@", 3), p_NAME), 0);
rstr l_S_2001; memset(&l_S_2001, 0, sizeof l_S_2001);
l_S_2001 = rt_str_new((l_BASE_2000).f_LEN);
rt_b_assign(&l_S_2001, r_STR(l_BASE_2000, (l_BASE_2000).f_LEN));
R21 * l_N_2002; memset(&l_N_2002, 0, sizeof l_N_2002);
l_N_2002 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2004_lo = ((rt_int)0LL), it2004_hi = rt_sub((l_BASE_2000).f_LEN, ((rt_int)1LL));
for (rt_int it2004 = it2004_lo; it2004 <= it2004_hi; it2004++) {
{
if (rt_b_eq(rt_b_slice(l_S_2001, it2004, it2004), rt_str("$", 1)))
{
S_R10(&l_BASE_2000, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_2001, ((rt_int)0LL), rt_sub(it2004, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2001, rt_add(it2004, ((rt_int)1LL)), rt_sub((l_BASE_2000).f_LEN, ((rt_int)1LL))))), 0);
}
}
} } L_end2003: ;
for (;;) {
if ((l_N_2002 == NULL)) goto L_end2005;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2002))).f_NAME, l_BASE_2000))
{
{ R10 rv2006 = r_FMT2(rt_str("@_@", 3), l_BASE_2000, r_NEW_NAME(rt_str("", 0)));
return rv2006; }
}
l_N_2002 = ((*(R21 *)rt_nil_check(l_N_2002))).f_NEXT;
}
} L_end2005: ;
l_N_2002 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2002))).f_NAME, l_BASE_2000, 0);
((*(R21 *)rt_nil_check(l_N_2002))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2002;
{ R10 rv2007 = l_BASE_2000;
return rv2007; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { 
if ((p_B == NULL))
{
{ rt_int rv2008 = 0;
return rv2008; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2009 = 1;
return rv2009; }
}
{ rt_int rv2010 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2010; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { 
R21 * l_S_2011; memset(&l_S_2011, 0, sizeof l_S_2011);
l_S_2011 = p_S0;
for (;;) {
if ((l_S_2011 == NULL)) goto L_end2012;
{
if (((((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_PAR)))
{
{ rt_int rv2013 = 1;
return rv2013; }
}
if (((((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2011))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2011))).f_B)))
{
{ rt_int rv2014 = 1;
return rv2014; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2011))).f_A))).f_B))
{
{ rt_int rv2015 = 1;
return rv2015; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2011))).f_B))).f_B))
{
{ rt_int rv2016 = 1;
return rv2016; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2017; memset(&l_A_2017, 0, sizeof l_A_2017);
l_A_2017 = ((*(R21 *)rt_nil_check(l_S_2011))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2011))).f_KIND == g_N_CASE))
{
l_A_2017 = ((*(R21 *)rt_nil_check(l_S_2011))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2011))).f_D == NULL)))
{
{ rt_int rv2018 = 1;
return rv2018; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2011))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2011))).f_C))).f_B))
{
{ rt_int rv2019 = 1;
return rv2019; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2011))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2011))).f_B))).f_B))
{
{ rt_int rv2020 = 1;
return rv2020; }
}
}
for (;;) {
if ((l_A_2017 == NULL)) goto L_end2021;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2017))).f_C == NULL)))
{
{ rt_int rv2022 = 1;
return rv2022; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2017))).f_B))).f_B))
{
{ rt_int rv2023 = 1;
return rv2023; }
}
l_A_2017 = ((*(R21 *)rt_nil_check(l_A_2017))).f_NEXT;
}
} L_end2021: ;
}
}
l_S_2011 = ((*(R21 *)rt_nil_check(l_S_2011))).f_NEXT;
}
} L_end2012: ;
{ rt_int rv2024 = 0;
return rv2024; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { 
R12 * l_Y_2025; memset(&l_Y_2025, 0, sizeof l_Y_2025);
l_Y_2025 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2026; memset(&l_S_2026, 0, sizeof l_S_2026);
l_S_2026 = rt_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2026, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2025))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2025))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2025))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2025))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2025, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2028_lo = ((rt_int)1LL), it2028_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2028 = it2028_lo; it2028 <= it2028_hi; it2028++) {
{
if (rt_b_eq(rt_b_slice(l_S_2026, it2028, it2028), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2025))).f_PREFIX, r_MKN(rt_b_slice(l_S_2026, ((rt_int)0LL), rt_sub(it2028, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2029; memset(&l_SHORT_2029, 0, sizeof l_SHORT_2029);
l_SHORT_2029 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2026, rt_add(it2028, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2029))).f_ORIG = l_Y_2025;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2029))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2025))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2029))).f_DECL = p_R;
r_DEFINE(l_SHORT_2029, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2027;
}
}
} } L_end2027: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { 
R21 * l_R_2030; memset(&l_R_2030, 0, sizeof l_R_2030);
l_R_2030 = p_RS;
for (;;) {
if ((l_R_2030 == NULL)) goto L_end2031;
{
if ((((*(R21 *)rt_nil_check(l_R_2030))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2030);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2030);
}
l_R_2030 = ((*(R21 *)rt_nil_check(l_R_2030))).f_NEXT;
}
} L_end2031: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { 
R21 * l_R_2032; memset(&l_R_2032, 0, sizeof l_R_2032);
l_R_2032 = p_RS;
for (;;) {
if ((l_R_2032 == NULL)) goto L_end2033;
{
if ((((*(R21 *)rt_nil_check(l_R_2032))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2034; memset(&l_M_2034, 0, sizeof l_M_2034);
l_M_2034 = r_FIND_DECL(l_R_2032);
r_ENTER_MODULE(l_M_2034);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2032))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2034);
}
}
else
{
{
R12 * l_Y_2035; memset(&l_Y_2035, 0, sizeof l_Y_2035);
l_Y_2035 = r_FIND_DECL(l_R_2032);
r_ROUTINE_HEADER(l_Y_2035);
}
}
l_R_2032 = ((*(R21 *)rt_nil_check(l_R_2032))).f_NEXT;
}
} L_end2033: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { 
R12 * l_Y_2036; memset(&l_Y_2036, 0, sizeof l_Y_2036);
l_Y_2036 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2036 == NULL)) goto L_end2037;
{
if (((((*(R12 *)rt_nil_check(l_Y_2036))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2036))).f_ORIG == NULL)))
{
{ R12 * rv2038 = l_Y_2036;
return rv2038; }
}
l_Y_2036 = r_LOOKUP_NEXT(l_Y_2036);
}
} L_end2037: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { 
R21 * l_D_2039; memset(&l_D_2039, 0, sizeof l_D_2039);
l_D_2039 = p_DECLS;
for (;;) {
if ((l_D_2039 == NULL)) goto L_end2040;
{
if (((((*(R21 *)rt_nil_check(l_D_2039))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2039))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2039))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2041; memset(&l_Y_2041, 0, sizeof l_Y_2041);
l_Y_2041 = r_FIND_DECL(l_D_2039);
R22 * l_T_2042; memset(&l_T_2042, 0, sizeof l_T_2042);
l_T_2042 = r_RESOLVE_USER(r_TYPE_REF(l_D_2039));
}
}
}
l_D_2039 = ((*(R21 *)rt_nil_check(l_D_2039))).f_NEXT;
}
} L_end2040: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { 
R21 * l_TS_2043; memset(&l_TS_2043, 0, sizeof l_TS_2043);
l_TS_2043 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2043))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2044 = l_TS_2043;
return rv2044; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { 
R12 * l_Y_2045; memset(&l_Y_2045, 0, sizeof l_Y_2045);
l_Y_2045 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2046; memset(&l_SAVED_2046, 0, sizeof l_SAVED_2046);
l_SAVED_2046 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2045))).f_DECL = p_M;
r_DEFINE(l_Y_2045, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2047; memset(&l_MARK_2047, 0, sizeof l_MARK_2047);
l_MARK_2047 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2045;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2045))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2047);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2046;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2045);
}
static void r_ENTER_MODULE(R12 * p_M) { 
R12 * l_Y_2048; memset(&l_Y_2048, 0, sizeof l_Y_2048);
l_Y_2048 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2048 == NULL)) goto L_end2049;
{
{
R12 * l_NEXT_2050; memset(&l_NEXT_2050, 0, sizeof l_NEXT_2050);
l_NEXT_2050 = ((*(R12 *)rt_nil_check(l_Y_2048))).f_SNEXT;
r_DEFINE(l_Y_2048, ((rt_int)0LL));
l_Y_2048 = l_NEXT_2050;
}
}
} L_end2049: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { 
R12 * l_MARK_2051; memset(&l_MARK_2051, 0, sizeof l_MARK_2051);
l_MARK_2051 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2051 == NULL)) goto L_end2052;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2051))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2052;
}
l_MARK_2051 = ((*(R12 *)rt_nil_check(l_MARK_2051))).f_SNEXT;
}
} L_end2052: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2051);
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
{ rt_int rv2053 = 1;
return rv2053; }
}
}
{ rt_int rv2054 = 0;
return rv2054; }
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
R21 * l_D_2055; memset(&l_D_2055, 0, sizeof l_D_2055);
l_D_2055 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2056; memset(&l_Y_2056, 0, sizeof l_Y_2056);
l_Y_2056 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2056 == NULL)) goto L_end2057;
{
if (r_EXPORTED_BY(l_D_2055, l_Y_2056))
{
((*(R12 *)rt_nil_check(l_Y_2056))).f_EXPORTED = 1;
{
R12 * l_A_2058; memset(&l_A_2058, 0, sizeof l_A_2058);
l_A_2058 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2056))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2056))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2058)), (*(R12 *)rt_nil_check(l_Y_2056)), 0);
((*(R12 *)rt_nil_check(l_A_2058))).f_ORIG = r_ORIGINAL(l_Y_2056);
((*(R12 *)rt_nil_check(l_A_2058))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2058, ((*(R21 *)rt_nil_check(l_D_2055))).f_LINE);
}
}
l_Y_2056 = ((*(R12 *)rt_nil_check(l_Y_2056))).f_SNEXT;
}
} L_end2057: ;
{
R21 * l_X_2059; memset(&l_X_2059, 0, sizeof l_X_2059);
l_X_2059 = ((*(R21 *)rt_nil_check(l_D_2055))).f_B;
for (;;) {
if ((l_X_2059 == NULL)) goto L_end2060;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2059))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2059))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2059))).f_NAME);
}
l_X_2059 = ((*(R21 *)rt_nil_check(l_X_2059))).f_NEXT;
}
} L_end2060: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { 
R12 * l_Y_2061; memset(&l_Y_2061, 0, sizeof l_Y_2061);
l_Y_2061 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2061 == NULL)) goto L_end2062;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2061))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2061))).f_PREFIX, p_NAME)))
{
{ rt_int rv2063 = 1;
return rv2063; }
}
l_Y_2061 = ((*(R12 *)rt_nil_check(l_Y_2061))).f_SNEXT;
}
} L_end2062: ;
{ rt_int rv2064 = 0;
return rv2064; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { 
R21 * l_X_2065; memset(&l_X_2065, 0, sizeof l_X_2065);
l_X_2065 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2066 = 0;
return rv2066; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2067 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2067; }
}
for (;;) {
if ((l_X_2065 == NULL)) goto L_end2068;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2065))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2069 = 1;
return rv2069; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2065))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2065))).f_A == NULL))
{
{ rt_int rv2070 = 1;
return rv2070; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2065))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2071 = 1;
return rv2071; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2072; memset(&l_T_2072, 0, sizeof l_T_2072);
l_T_2072 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2065))).f_NAME, p_Y);
if ((!(l_T_2072 == NULL)))
{
{ rt_int rv2073 = 1;
return rv2073; }
}
}
}
l_X_2065 = ((*(R21 *)rt_nil_check(l_X_2065))).f_NEXT;
}
} L_end2068: ;
{ rt_int rv2074 = 0;
return rv2074; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { 
R12 * l_M_2075; memset(&l_M_2075, 0, sizeof l_M_2075);
l_M_2075 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2076; memset(&l_Z_2076, 0, sizeof l_Z_2076);
if ((l_M_2075 == NULL))
{
{ R12 * rv2077 = NULL;
return rv2077; }
}
l_Z_2076 = ((*(R12 *)rt_nil_check(l_M_2075))).f_MEMBERS;
for (;;) {
if ((l_Z_2076 == NULL)) goto L_end2078;
{
if (((((*(R12 *)rt_nil_check(l_Z_2076))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2076))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2076))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2076))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2076))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2079 = l_Z_2076;
return rv2079; }
}
}
}
}
l_Z_2076 = ((*(R12 *)rt_nil_check(l_Z_2076))).f_SNEXT;
}
} L_end2078: ;
{ R12 * rv2080 = NULL;
return rv2080; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { 
R21 * l_R_2081; memset(&l_R_2081, 0, sizeof l_R_2081);
l_R_2081 = p_RS;
for (;;) {
if ((l_R_2081 == NULL)) goto L_end2082;
{
if ((((*(R21 *)rt_nil_check(l_R_2081))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2083; memset(&l_M_2083, 0, sizeof l_M_2083);
l_M_2083 = r_FIND_DECL(l_R_2081);
R21 * l_D_2084; memset(&l_D_2084, 0, sizeof l_D_2084);
l_D_2084 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2081))).f_C))).f_A;
r_ENTER_MODULE(l_M_2083);
for (;;) {
if ((l_D_2084 == NULL)) goto L_end2085;
{
if (((((*(R21 *)rt_nil_check(l_D_2084))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2084))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2084);
}
l_D_2084 = ((*(R21 *)rt_nil_check(l_D_2084))).f_NEXT;
}
} L_end2085: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2081))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2081))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2083);
}
}
l_R_2081 = ((*(R21 *)rt_nil_check(l_R_2081))).f_NEXT;
}
} L_end2082: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { 
R21 * l_R_2086; memset(&l_R_2086, 0, sizeof l_R_2086);
l_R_2086 = p_RS;
for (;;) {
if ((l_R_2086 == NULL)) goto L_end2087;
{
if ((((*(R21 *)rt_nil_check(l_R_2086))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2088; memset(&l_M_2088, 0, sizeof l_M_2088);
l_M_2088 = r_FIND_DECL(l_R_2086);
r_ENTER_MODULE(l_M_2088);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2086))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2088);
}
}
else
{
{
R12 * l_Y_2089; memset(&l_Y_2089, 0, sizeof l_Y_2089);
l_Y_2089 = r_FIND_DECL(l_R_2086);
if ((!((*(R12 *)rt_nil_check(l_Y_2089))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2089);
}
}
}
l_R_2086 = ((*(R21 *)rt_nil_check(l_R_2086))).f_NEXT;
}
} L_end2087: ;
}
static void r_PENDING_BODIES(void) { 
rt_int l_LEVEL_2090; memset(&l_LEVEL_2090, 0, sizeof l_LEVEL_2090);
l_LEVEL_2090 = r_CUR_LEVEL();
rt_int l_MORE_2091; memset(&l_MORE_2091, 0, sizeof l_MORE_2091);
l_MORE_2091 = 1;
for (;;) {
if ((!l_MORE_2091)) goto L_end2092;
{
l_MORE_2091 = 0;
{
R12 * l_P_2093; memset(&l_P_2093, 0, sizeof l_P_2093);
l_P_2093 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2094; memset(&l_PREV_2094, 0, sizeof l_PREV_2094);
l_PREV_2094 = NULL;
for (;;) {
if ((l_P_2093 == NULL)) goto L_end2095;
{
if ((((*(R12 *)rt_nil_check(l_P_2093))).f_LEVEL == l_LEVEL_2090))
{
if ((l_PREV_2094 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2093))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2094))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2093))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2093);
r_ROUTINE_BODY(l_P_2093);
r_LEAVE_MODULE_OF(l_P_2093);
l_MORE_2091 = 1;
goto L_end2095;
}
l_PREV_2094 = l_P_2093;
l_P_2093 = ((*(R12 *)rt_nil_check(l_P_2093))).f_MEMBERS;
}
} L_end2095: ;
}
}
} L_end2092: ;
}
static void r_CLOSED_BODY(R21 * p_B) { 
R21 * l_D_2096; memset(&l_D_2096, 0, sizeof l_D_2096);
l_D_2096 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2097; memset(&l_S_2097, 0, sizeof l_S_2097);
l_S_2097 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2096 == NULL)) goto L_end2098;
{
if (((((*(R21 *)rt_nil_check(l_D_2096))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2096))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2096);
}
l_D_2096 = ((*(R21 *)rt_nil_check(l_D_2096))).f_NEXT;
}
} L_end2098: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2097 == NULL)) goto L_end2099;
{
r_STMT(l_S_2097);
l_S_2097 = ((*(R21 *)rt_nil_check(l_S_2097))).f_NEXT;
}
} L_end2099: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { 
R21 * l_R_2100; memset(&l_R_2100, 0, sizeof l_R_2100);
l_R_2100 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2101; memset(&l_SAVED_CODE_2101, 0, sizeof l_SAVED_CODE_2101);
S_R14(&l_SAVED_CODE_2101, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2102; memset(&l_SAVED_CTXS_2102, 0, sizeof l_SAVED_CTXS_2102);
l_SAVED_CTXS_2102 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2103; memset(&l_SAVED_BINDS_2103, 0, sizeof l_SAVED_BINDS_2103);
l_SAVED_BINDS_2103 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2104; memset(&l_OUTER_2104, 0, sizeof l_OUTER_2104);
l_OUTER_2104 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2105; memset(&l_CS_2105, 0, sizeof l_CS_2105);
l_CS_2105 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2106; memset(&l_PROLOGUE_2106, 0, sizeof l_PROLOGUE_2106);
S_R10(&l_PROLOGUE_2106, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2105)), ({ R18 rc2107; memset(&rc2107, 0, sizeof rc2107);  rc2107.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2107.f_R = p_Y; rc2107.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2107.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2107.f_FIELDS, ({ R14 rc2108; memset(&rc2108, 0, sizeof rc2108);  rc2108.f_HEAD = NULL; rc2108.f_TAIL = NULL; rc2108; }), 0); rc2107.f_UP = l_OUTER_2104; rc2107.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2100))).f_E; rc2107.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2100))).f_D))).f_A; rc2107.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2107.f_IS_PATH = 0; rc2107; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2105))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2105))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2105))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2105))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2106, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2105))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2105))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2106, r_CATS(l_PROLOGUE_2106, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2105;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2109; memset(&rc2109, 0, sizeof rc2109);  rc2109.f_HEAD = NULL; rc2109.f_TAIL = NULL; rc2109; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2100))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2100))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2100))).f_LINE);
{
R28 * l_P_2110; memset(&l_P_2110, 0, sizeof l_P_2110);
l_P_2110 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2110 == NULL)) goto L_end2111;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2110))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2110))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2112; memset(&l_V_2112, 0, sizeof l_V_2112);
l_V_2112 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2112))).f_T = ((*(R28 *)rt_nil_check(l_P_2110))).f_T;
((*(R12 *)rt_nil_check(l_V_2112))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2110))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2112))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2110))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2112))).f_FIELD, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2112))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2110))).f_T), ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2105))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2112))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2110))).f_T), ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME), &((*(R18 *)rt_nil_check(l_CS_2105))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2112))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME), 0);
}
S_R10(&l_PROLOGUE_2106, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2106, ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME, ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2112))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2112))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2112))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R28 *)rt_nil_check(l_P_2110))).f_NAME), 0);
}
r_DEFINE(l_V_2112, ((*(R21 *)rt_nil_check(l_R_2100))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2110))).f_T, ((*(R12 *)rt_nil_check(l_V_2112))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2100))).f_LINE, 1);
}
}
}
l_P_2110 = ((*(R28 *)rt_nil_check(l_P_2110))).f_NEXT;
}
} L_end2111: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2100))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2100))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2100))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2105))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2105))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { @", 5), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2106));
r_APPEND_BUF(((*(R7 *)rt_nil_check(g_W))).f_CODE, &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2104;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2101, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2102;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2103;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { 
R20 * l_B_2113; memset(&l_B_2113, 0, sizeof l_B_2113);
l_B_2113 = p_BS;
for (;;) {
if ((l_B_2113 == NULL)) goto L_end2114;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2113))).f_T == NULL)))
{
{
R12 * l_Y_2115; memset(&l_Y_2115, 0, sizeof l_Y_2115);
l_Y_2115 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2113))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2115))).f_T = ((*(R20 *)rt_nil_check(l_B_2113))).f_T;
r_DEFINE(l_Y_2115, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2113))).f_HASMV)
{
{
R12 * l_Y_2116; memset(&l_Y_2116, 0, sizeof l_Y_2116);
l_Y_2116 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2113))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2116))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2116))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2116))).f_MV = ((*(R20 *)rt_nil_check(l_B_2113))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2116))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2113))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2116))).f_INPUT = 1;
r_DEFINE(l_Y_2116, p_LINE);
}
}
l_B_2113 = ((*(R20 *)rt_nil_check(l_B_2113))).f_NEXT;
}
} L_end2114: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { 
R15 * l_C_2117; memset(&l_C_2117, 0, sizeof l_C_2117);
l_C_2117 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2117 == NULL)) goto L_end2118;
{
r_APPEND(((*(R15 *)rt_nil_check(l_C_2117))).f_T, &(*p_DST));
l_C_2117 = ((*(R15 *)rt_nil_check(l_C_2117))).f_NEXT;
}
} L_end2118: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { 
R21 * l_U_2119; memset(&l_U_2119, 0, sizeof l_U_2119);
l_U_2119 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2119 == NULL)) goto L_end2120;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2119))).f_NAME, p_NAME))
{
{ rt_int rv2121 = 1;
return rv2121; }
}
l_U_2119 = ((*(R21 *)rt_nil_check(l_U_2119))).f_NEXT;
}
} L_end2120: ;
{ rt_int rv2122 = 0;
return rv2122; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { 
R21 * l_U_2123; memset(&l_U_2123, 0, sizeof l_U_2123);
l_U_2123 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2123 == NULL)) goto L_end2124;
{
{
R21 * l_T_2125; memset(&l_T_2125, 0, sizeof l_T_2125);
l_T_2125 = p_SEGS;
for (;;) {
if ((l_T_2125 == NULL)) goto L_end2126;
{
if ((((!(l_T_2125 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2125))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2125))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2123))).f_NAME)))
{
{ rt_int rv2127 = 0;
return rv2127; }
}
l_T_2125 = ((*(R21 *)rt_nil_check(l_T_2125))).f_NEXT;
}
} L_end2126: ;
}
l_U_2123 = ((*(R21 *)rt_nil_check(l_U_2123))).f_NEXT;
}
} L_end2124: ;
{ rt_int rv2128 = 1;
return rv2128; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { 
R21 * l_S_2129; memset(&l_S_2129, 0, sizeof l_S_2129);
l_S_2129 = p_SEGS;
rt_int l_MAINS_2130; memset(&l_MAINS_2130, 0, sizeof l_MAINS_2130);
l_MAINS_2130 = ((rt_int)0LL);
R18 * l_ROOT_2131; memset(&l_ROOT_2131, 0, sizeof l_ROOT_2131);
l_ROOT_2131 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2131)), ({ R18 rc2132; memset(&rc2132, 0, sizeof rc2132);  rc2132.f_LEVEL = ((rt_int)0LL); rc2132.f_R = NULL; rc2132.f_FRAMED = 0; S_R10(&rc2132.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2132.f_FIELDS, ({ R14 rc2133; memset(&rc2133, 0, sizeof rc2133);  rc2133.f_HEAD = NULL; rc2133.f_TAIL = NULL; rc2133; }), 0); rc2132.f_UP = NULL; rc2132.f_IMPORTS = NULL; rc2132.f_SIGNALS = NULL; rc2132.f_RESULT = NULL; rc2132.f_IS_PATH = 0; rc2132; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2131;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2134; memset(&rc2134, 0, sizeof rc2134);  rc2134.f_HEAD = NULL; rc2134.f_TAIL = NULL; rc2134; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2129 = p_SEGS;
for (;;) {
if ((l_S_2129 == NULL)) goto L_end2136;
{
if ((((*(R21 *)rt_nil_check(l_S_2129))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2129, p_SEGS))
{
goto L_end2136;
}
}
l_S_2129 = ((*(R21 *)rt_nil_check(l_S_2129))).f_NEXT;
}
} L_end2136: ;
if ((l_S_2129 == NULL))
{
goto L_end2135;
}
((*(R21 *)rt_nil_check(l_S_2129))).f_D = l_S_2129;
l_MAINS_2130 = rt_add(l_MAINS_2130, ((*(R21 *)rt_nil_check(l_S_2129))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2129))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2129))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2129))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2129, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2129))).f_B);
r_SEGMENT_EXPORTS(l_S_2129);
}
} L_end2135: ;
l_S_2129 = p_SEGS;
for (;;) {
if ((l_S_2129 == NULL)) goto L_end2137;
{
if ((((*(R21 *)rt_nil_check(l_S_2129))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2129))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2129))).f_NAME);
}
l_S_2129 = ((*(R21 *)rt_nil_check(l_S_2129))).f_NEXT;
}
} L_end2137: ;
if ((!(l_MAINS_2130 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2138; memset(&l_X_2138, 0, sizeof l_X_2138);
l_X_2138 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2138 == NULL)) goto L_end2139;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R21 *)rt_nil_check(l_X_2138))).f_NAME));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R21 *)rt_nil_check(l_X_2138))).f_NAME, r_CSTRING(((*(R21 *)rt_nil_check(l_X_2138))).f_NAME)));
l_X_2138 = ((*(R21 *)rt_nil_check(l_X_2138))).f_NEXT;
}
} L_end2139: ;
}
r_APPEND_BUF(((*(R7 *)rt_nil_check(g_W))).f_CODE, &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { 
R12 * l_M_2140; memset(&l_M_2140, 0, sizeof l_M_2140);
l_M_2140 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2141 = 0;
return rv2141; }
}
for (;;) {
if ((l_M_2140 == NULL)) goto L_end2142;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2140))).f_NAME))
{
{ rt_int rv2143 = 1;
return rv2143; }
}
l_M_2140 = ((*(R12 *)rt_nil_check(l_M_2140))).f_MODL;
}
} L_end2142: ;
{ rt_int rv2144 = 0;
return rv2144; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { 
R12 * l_MARK_2145; memset(&l_MARK_2145, 0, sizeof l_MARK_2145);
l_MARK_2145 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2146; memset(&l_TAKEN_2146, 0, sizeof l_TAKEN_2146);
for (;;) {
if ((l_MARK_2145 == NULL)) goto L_end2147;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2145))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2147;
}
l_MARK_2145 = ((*(R12 *)rt_nil_check(l_MARK_2145))).f_SNEXT;
}
} L_end2147: ;
l_TAKEN_2146 = r_TAKE_SCOPE(l_MARK_2145);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2146 == NULL)) goto L_end2148;
{
{
R12 * l_NEXT_2149; memset(&l_NEXT_2149, 0, sizeof l_NEXT_2149);
l_NEXT_2149 = ((*(R12 *)rt_nil_check(l_TAKEN_2146))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2146))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2146))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2146))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2146)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2146))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2146))))))
{
r_DEFINE(l_TAKEN_2146, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2146 = l_NEXT_2149;
}
}
} L_end2148: ;
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
